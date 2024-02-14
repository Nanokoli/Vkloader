# PHILoader
Meta loader for Vulkan API
一个用于加载Vulkan函数的加载器
## 特性
###  支持vulakn所有扩展(截至24/2/14)
支持的扩展函数列在`Exts.txt`
###  可以指定需要加载哪些扩展

###  使用C++编写，理论上支持所有平台

包括了平台的扩展，使用时与定义vulkan时一样。例如`#define VK_USE_PLATFORM_ANDROID_KHR`或者`#define VK_USE_PLATFORM_WIN32_KHR`

###  基于C++的类，可以做到控制多个VkInstances和多个VkDevice

代码提供了一个基础的`VkPHILoader`，可以控制一个VkInstances和一个VkDevice
## 目录

| 文件                      | 说明                                                                                 |
|---------------------------|------------------------------------------------------------------------------------|
| vulkan                   | vulkan所有头文件，使用[Vulkan-Docs](https://github.com/KhronosGroup/Vulkan-Docs)的工具生成和自定义                                |
| VkLoaderHelper.hpp       | 一大堆宏定义|         
| PhiLoader.hpp             | 一些类型，结构的定义                                                                |
| VkLoader.cpp              | VkLoader 原文件                                                                    |
| VkLoader.hpp              | VkLoader 头文件                                     |
| Test.cpp                  | 示例代码                                 |
| Exts.txt                  | 当前所有的扩展(截至24/2/14)                                 |
## 编译
编译VkLoader.cpp即可（记得包含所有头文件）
## 使用
### 1.0定义平台相关的函数  

因为PHILoader没有指定平台，所以库的加载逻辑需要自己实现

#### `LIBHANNLE GetVkLibHandle();`

该函数用于获取VK的动态链接库的句柄，例如win32加载`vulkan-1.dll`,apple加载`libvulkan.1.dylib`，android或者linux加载`libvulkan.so.1`

#### `APIProc GetPtrFrom_handle(LIBHANNLE handle, std::string_view name)`

用于从库句柄中获取函数，与win32中的`GetProcAddress`，linux的`dlsym`一样

#### 示例
```
LIBHANNLE GetVkLibHandle() {
    static  std::vector<std::string_view> NAMES = {
#if VK_USE_PLATFORM_IOS_MVK 
        "libvulkan.1.dylib",
#elif VK_USE_PLATFORM_WIN32_KHR
        "vulkan-1.dll",
        "vulkan.dll",
#else
        "libvulkan.so.1",
        "libvulkan.so",
#endif
    };
    LIBHANNLE handle = nullptr;
    for (std::string_view n : NAMES)
    {
#if VK_USE_PLATFORM_WIN32_KHR
        handle = (LIBHANNLE)LoadLibraryA(n.data());
#else
        handle = dlopen(n.data(), RTLD_LAZY | RTLD_LOCAL);
#endif
        if (handle != nullptr) {
            return handle;
        }
    }
    return nullptr;
}
APIProc GetPtrFrom_handle(LIBHANNLE handle, std::string_view name)
{
    if (handle == nullptr) {
        return nullptr;
    }

#if VK_USE_PLATFORM_WIN32_KHR
    return (APIProc)GetProcAddress((HMODULE)handle, name.data());
#else
    return (APIProc)dlsym(handle, name.data());
#endif
}


```
### 2.0.  继承类`VkPHILoader`，`VkInstanceLayoutLoader`，`VkDeviceLayoutLoader`
这些类定义了所有需要用到的函数，当然也可以从类外使用

### 3.0. 设置需要加载的扩展

不像其他的loader，PHILoader不需要定义任何宏，所有扩展都被包含

需要加载某个扩展时有两种方案
#### 3.1. 设置类的NeedLoad成员，该成员包含了所有扩展的Flag，名字均以`IS_LOAD_扩展名`，设置需要的项即可
```
NeedLoad.IS_LOAD_VK_VERSION_1_0 = true;
```
#### 3.2. 使用`VkPHILoader::SetLoadExts`，`VkInstanceLayoutLoader::MappingToNeedLoad`，`VkDeviceLayoutLoader::MappingToNeedLoad`输入一个包含了所有需要加载扩展的数组（必须为原扩展名），NeedLoad成员即会同步
```
 Loader.SetLoadExts({"VK_VERSION_1_0","VK_VERSION_1_1"});
```
### 4.0. LoadALL && Hello Vulkan
在这之后所有需要的扩展都会被加载，成功加载的扩展都会在返回值里面的Flag设置，判断是否全部被加载只需要判断`IsAllTrue()`即可
