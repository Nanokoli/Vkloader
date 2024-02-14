#include <iostream>
#define VK_USE_PLATFORM_WIN32_KHR 1
#include "VkLoader.hpp"
int main()
{
    VkPHILoader Loader;
    std::vector<std::string> extsma = {};
    VkPHILoader::TranVKVersionToMap(0, extsma);//Append VK1.0
    Loader.init();
    Loader.SetLoadExts(extsma);
    //loadercc.NeedLoad.IS_LOAD_VK_VERSION_1_0 = true;
    if (!Loader.LoadAll())
        throw"Basic Load Error";
    //vkEnumerateInstanceVersion Need Vk1.1 load 
   // Loader.NeedLoad.IS_LOAD_VK_VERSION_1_1 = true;
    extsma.push_back("VK_VERSION_1_1");
    Loader.SetLoadExts(extsma);
    if (!Loader.LoadAll())
        throw"Load VK_VERSION_1_1 Error";
    uint32_t vks = 0;
    if (Loader.vkEnumerateInstanceVersion(&vks) != VK_SUCCESS)
        throw"vkEnumerateInstanceVersion Error";
    extsma.clear();
    if (!VkPHILoader::TranVKVersionToMap(vks, extsma))
        throw "TranVKVersionToMap Error";
    Loader.SetLoadExts(extsma);
    if (!Loader.LoadAll())
        throw "Load Highest version VK Error";
    std::cout << "Hello Vulkan!\n";
}










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

