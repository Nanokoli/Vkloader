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







#ifndef PLATFORM_UWP
#if defined(_MSC_VER) && !defined(INTERNAL_HAVE_WINAPIFAMILY)
#ifdef __has_include
#if __has_include(<winapifamily.h>)
#define INTERNAL_HAVE_WINAPIFAMILY 1
#endif
#elif _MSC_VER >= 1700 && !_USING_V110_SDK71_
#define INTERNAL_HAVE_WINAPIFAMILY 1
#endif
#endif

#ifdef INTERNAL_HAVE_WINAPIFAMILY
#include <winapifamily.h>
#if !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) && WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#define PHI_WIN 1 
#define PLATFORM_UWP 1
#endif
#endif


#if VK_USE_PLATFORM_IOS_MVK || VK_USE_PLATFORM_MACOS_MVK||VK_USE_PLATFORM_METAL_EXT
#define PHI_APPLE 1
#elif VK_USE_PLATFORM_FUCHSIA||VK_USE_PLATFORM_ANDROID_KHR ||VK_USE_PLATFORM_XLIB_KHR ||VK_USE_PLATFORM_XLIB_XRANDR_EXT||VK_USE_PLATFORM_XCB_KHR||VK_USE_PLATFORM_WAYLAND_KHR||VK_USE_PLATFORM_DIRECTFB_EXT
#define PHI_LINUX 1
#elif VK_USE_PLATFORM_WIN32_KHR
#define PHI_WIN 1 
#elif VK_USE_PLATFORM_VI_NN //?


#elif VK_USE_PLATFORM_SCREEN_QNX //?

#endif



LIBHANNLE GetVkLibHandle() {
    static  std::vector<std::string_view> NAMES = {
#if PHI_APPLE
        "libvulkan.1.dylib",
#elif PHI_LINUX
        "libvulkan.so.1",
        "libvulkan.so",
#elif PHI_WIN
        "vulkan-1.dll",
        "vulkan.dll",

#endif
    };
    LIBHANNLE handle = nullptr;
    for (std::string_view n : NAMES)
    {
#if PHI_WIN
#if PLATFORM_UWP
        std::string asd{ n };
        std::wstring buffer = L"";
        buffer.assign(asd.begin(), asd.end());
        handle = (LIBHANNLE)LoadPackagedLibrary(buffer.data(), 0);
#else
        handle = (LIBHANNLE)LoadLibraryA(n.data());
#endif
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

#if PHI_WIN
    return (APIProc)GetProcAddress((HMODULE)handle, name.data());
#else
    return (APIProc)dlsym(handle, name.data());
#endif
}

