
#include <PhiLoader.hpp>
#undef IMVKPFUN
#undef IFNEEDLOADVKEXT



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
#define PHI_WIN 1 

#if !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) && WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#define PLATFORM_UWP 1
#endif
#endif

#ifndef PLATFORM_UWP
#define PLATFORM_UWP 0
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

#if PHI_APPLE

#elif PHI_LINUX
#include<dlfcn.h>
#elif PHI_WIN
#include <Windows.h>
#endif


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
LIBHANNLE LoadLib(std::string_view n) {
    LIBHANNLE handle = nullptr;
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
    return handle;

}
LIBHANNLE loadFromLibs(const std::vector<std::string_view>& NAMES) {
    LIBHANNLE handle = nullptr;
    for (std::string_view n : NAMES)
    {
        handle = LoadLib(n.data());
        if (handle != nullptr) {
            return handle;
        }
    }
    return nullptr;
}
LIBHANNLE GetVkLibHandle() {
    static  std::vector<std::string_view> NAMES = {
#if PHI_APPLE
        "libvulkan.1.dylib"
#elif PHI_LINUX
        "libvulkan.so.1",
        "libvulkan.so"
#elif PHI_WIN
        "vulkan-1.dll",
        "vulkan.dll"
#endif
    };
    return loadFromLibs(NAMES);
}
LIBHANNLE GetGLESLoaderLibHandle() {
    static  std::vector<std::string_view> NAMES = {
#if PHI_APPLE
        "libGLESv1_CM.dylib"
#elif PHI_LINUX
        "libGLESv1_CM.so.1", 
        "libGLESv1_CM.so", 
        "libGLES_CM.so.1"
#elif PHI_WIN
        "GLESv1_CM.dll",
        "libGLESv1_CM",
        "libGLES_CM.dll"

#endif
    };
    return loadFromLibs(NAMES);
}
LIBHANNLE GetOpenGLLoaderLibHandle() {
    static  std::vector<std::string_view> NAMES = {
#if PHI_APPLE
        "../Frameworks/OpenGL.framework/OpenGL",
        "/Library/Frameworks/OpenGL.framework/OpenGL",
        "/System/Library/Frameworks/OpenGL.framework/OpenGL",
        "/System/Library/Frameworks/OpenGL.framework/Versions/Current/OpenGL"
#elif PHI_LINUX
  #if defined(__CYGWIN__)
        "libGL-1.so",
  #endif
        "libGL.so.1",
        "libGL.so"
    };
#elif PHI_WIN
        "opengl32.dll"

#endif
    };
    return loadFromLibs(NAMES);
}
LIBHANNLE GetGLES2LoaderLibHandle() {
    static  std::vector<std::string_view> NAMES = {
#if PHI_APPLE
        "libGLESv2.dylib"
#elif PHI_LINUX
        "libGLESv2.so.2",
        "libGLESv2.so"
#elif PHI_WIN
        "GLESv2.dll",
        "libGLESv2.dll"
#endif
    };
    return loadFromLibs(NAMES);
}
LIBHANNLE GetEGLLoaderLibHandle() {
    static  std::vector<std::string_view> NAMES = {
#if PHI_APPLE
        "libEGL.dylib"
#elif PHI_LINUX
        "libEGL.so.1", 
        "libEGL.so"
#elif PHI_WIN
        "libEGL.dll",
        "EGL.dll"
#endif
    };
    return loadFromLibs(NAMES);
}
LIBHANNLE GetGLXLoaderLibHandle() {
    static  std::vector<std::string_view> NAMES = {
#if defined PHI_LINUX
#if defined __CYGWIN__
        "libGL-1.so",
#endif
        "libGL.so.1",
        "libGL.so"
#endif
    };
    return loadFromLibs(NAMES);
}