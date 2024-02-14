#pragma once
#include "../PhiLoader.hpp"

#include "vulkan/vulkan.h"
#define VKFUNDEFINE(NAME) PFN_##NAME NAME##;

class VkInstanceLayoutLoader {
public:
  typedef APIProc (*UserptrLoadFunc)(void *userptr, std::string_view name);
  struct Flags : public LONGBITSET {
    Flags() : LONGBITSET(sizeof(Flags), 48) {}
    bool IS_LOAD_VK_VERSION_1_0 : 1;                         // 0
    bool IS_LOAD_VK_VERSION_1_1 : 1;                         // 1
    bool IS_LOAD_VK_VERSION_1_3 : 1;                         // 2
    bool IS_LOAD_VK_KHR_surface : 1;                         // 3
    bool IS_LOAD_VK_KHR_swapchain : 1;                       // 4
    bool IS_LOAD_VK_KHR_display : 1;                         // 5
    bool IS_LOAD_VK_KHR_video_queue : 1;                     // 6
    bool IS_LOAD_VK_KHR_get_physical_device_properties2 : 1; // 7
    bool IS_LOAD_VK_KHR_device_group_creation : 1;           // 8
    bool IS_LOAD_VK_KHR_external_memory_capabilities : 1;    // 9
    bool IS_LOAD_VK_KHR_external_semaphore_capabilities : 1; // 10
    bool IS_LOAD_VK_KHR_external_fence_capabilities : 1;     // 11
    bool IS_LOAD_VK_KHR_performance_query : 1;               // 12
    bool IS_LOAD_VK_KHR_get_surface_capabilities2 : 1;       // 13
    bool IS_LOAD_VK_KHR_get_display_properties2 : 1;         // 14
    bool IS_LOAD_VK_KHR_fragment_shading_rate : 1;           // 15
    bool IS_LOAD_VK_KHR_video_encode_queue : 1;              // 16
    bool IS_LOAD_VK_KHR_cooperative_matrix : 1;              // 17
    bool IS_LOAD_VK_KHR_calibrated_timestamps : 1;           // 18
    bool IS_LOAD_VK_EXT_debug_report : 1;                    // 19
    bool IS_LOAD_VK_NV_external_memory_capabilities : 1;     // 20
    bool IS_LOAD_VK_EXT_direct_mode_display : 1;             // 21
    bool IS_LOAD_VK_EXT_display_surface_counter : 1;         // 22
    bool IS_LOAD_VK_EXT_debug_utils : 1;                     // 23
    bool IS_LOAD_VK_EXT_sample_locations : 1;                // 24
    bool IS_LOAD_VK_EXT_calibrated_timestamps : 1;           // 25
    bool IS_LOAD_VK_EXT_tooling_info : 1;                    // 26
    bool IS_LOAD_VK_NV_cooperative_matrix : 1;               // 27
    bool IS_LOAD_VK_NV_coverage_reduction_mode : 1;          // 28
    bool IS_LOAD_VK_EXT_headless_surface : 1;                // 29
    bool IS_LOAD_VK_EXT_acquire_drm_display : 1;             // 30
    bool IS_LOAD_VK_NV_optical_flow : 1;                     // 31
    // NEED VK_USE_PLATFORM_ANDROID_KHR
    bool IS_LOAD_VK_KHR_android_surface : 1; // 32
    // NEED VK_USE_PLATFORM_FUCHSIA
    bool IS_LOAD_VK_FUCHSIA_imagepipe_surface : 1; // 33
    // NEED VK_USE_PLATFORM_GGP
    bool IS_LOAD_VK_GGP_stream_descriptor_surface : 1; // 34
    // NEED VK_USE_PLATFORM_IOS_MVK
    bool IS_LOAD_VK_MVK_ios_surface : 1; // 35
    // NEED VK_USE_PLATFORM_MACOS_MVK
    bool IS_LOAD_VK_MVK_macos_surface : 1; // 36
    // NEED VK_USE_PLATFORM_VI_NN
    bool IS_LOAD_VK_NN_vi_surface : 1; // 37
    // NEED VK_USE_PLATFORM_WAYLAND_KHR
    bool IS_LOAD_VK_KHR_wayland_surface : 1; // 38
    // NEED VK_USE_PLATFORM_WIN32_KHR
    bool IS_LOAD_VK_KHR_win32_surface : 1; // 39
    // NEED VK_USE_PLATFORM_WIN32_KHR
    bool IS_LOAD_VK_EXT_full_screen_exclusive : 1; // 40
    // NEED VK_USE_PLATFORM_WIN32_KHR
    bool IS_LOAD_VK_NV_acquire_winrt_display : 1; // 41
    // NEED VK_USE_PLATFORM_XCB_KHR
    bool IS_LOAD_VK_KHR_xcb_surface : 1; // 42
    // NEED VK_USE_PLATFORM_XLIB_KHR
    bool IS_LOAD_VK_KHR_xlib_surface : 1; // 43
    // NEED VK_USE_PLATFORM_DIRECTFB_EXT
    bool IS_LOAD_VK_EXT_directfb_surface : 1; // 44
    // NEED VK_USE_PLATFORM_XLIB_XRANDR_EXT
    bool IS_LOAD_VK_EXT_acquire_xlib_display : 1; // 45
    // NEED VK_USE_PLATFORM_METAL_EXT
    bool IS_LOAD_VK_EXT_metal_surface : 1; // 46
    // NEED VK_USE_PLATFORM_SCREEN_QNX
    bool IS_LOAD_VK_QNX_screen_surface : 1; // 47
  };

private:
  Flags NowState;

public:
  Flags NeedLoad;
  UserptrLoadFunc LoadFunc;
  void *userptr;
  inline APIProc TryToGet(std::string_view name) {
    return LoadFunc(userptr, name);
  }
  inline const Flags &GetNowState() const { return NowState; }
  VkInstanceLayoutLoader();
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateInstance( const
  // VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
  // VkInstance* pInstance);
  VKFUNDEFINE(vkCreateInstance);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyInstance( VkInstance instance, const
  // VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyInstance);
  // VKAPI_ATTR VkResult VKAPI_CALL vkEnumeratePhysicalDevices( VkInstance
  // instance, uint32_t* pPhysicalDeviceCount, VkPhysicalDevice*
  // pPhysicalDevices);
  VKFUNDEFINE(vkEnumeratePhysicalDevices);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFeatures( VkPhysicalDevice
  // physicalDevice, VkPhysicalDeviceFeatures* pFeatures);
  VKFUNDEFINE(vkGetPhysicalDeviceFeatures);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFormatProperties(
  // VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties*
  // pFormatProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceFormatProperties);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceImageFormatProperties(
  // VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type,
  // VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags,
  // VkImageFormatProperties* pImageFormatProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceImageFormatProperties);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceProperties( VkPhysicalDevice
  // physicalDevice, VkPhysicalDeviceProperties* pProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceProperties);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceQueueFamilyProperties(
  // VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount,
  // VkQueueFamilyProperties* pQueueFamilyProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceQueueFamilyProperties);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMemoryProperties(
  // VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties*
  // pMemoryProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceMemoryProperties);
  // VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetInstanceProcAddr( VkInstance
  // instance, const char* pName);
  VKFUNDEFINE(vkGetInstanceProcAddr);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateDevice( VkPhysicalDevice
  // physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkDevice* pDevice);
  VKFUNDEFINE(vkCreateDevice);
  // VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceExtensionProperties(
  // const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties*
  // pProperties);
  VKFUNDEFINE(vkEnumerateInstanceExtensionProperties);
  // VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateDeviceExtensionProperties(
  // VkPhysicalDevice physicalDevice, const char* pLayerName, uint32_t*
  // pPropertyCount, VkExtensionProperties* pProperties);
  VKFUNDEFINE(vkEnumerateDeviceExtensionProperties);
  // VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceLayerProperties(
  // uint32_t* pPropertyCount, VkLayerProperties* pProperties);
  VKFUNDEFINE(vkEnumerateInstanceLayerProperties);
  // VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateDeviceLayerProperties(
  // VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount,
  // VkLayerProperties* pProperties);
  VKFUNDEFINE(vkEnumerateDeviceLayerProperties);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceSparseImageFormatProperties(
  // VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type,
  // VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling
  // tiling, uint32_t* pPropertyCount, VkSparseImageFormatProperties*
  // pProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceSparseImageFormatProperties);
  // VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceVersion( uint32_t*
  // pApiVersion);
  VKFUNDEFINE(vkEnumerateInstanceVersion);
  // VKAPI_ATTR VkResult VKAPI_CALL vkEnumeratePhysicalDeviceGroups( VkInstance
  // instance, uint32_t* pPhysicalDeviceGroupCount,
  // VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties);
  VKFUNDEFINE(vkEnumeratePhysicalDeviceGroups);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFeatures2( VkPhysicalDevice
  // physicalDevice, VkPhysicalDeviceFeatures2* pFeatures);
  VKFUNDEFINE(vkGetPhysicalDeviceFeatures2);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceProperties2( VkPhysicalDevice
  // physicalDevice, VkPhysicalDeviceProperties2* pProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceProperties2);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFormatProperties2(
  // VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2*
  // pFormatProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceFormatProperties2);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceImageFormatProperties2(
  // VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2*
  // pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceImageFormatProperties2);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceQueueFamilyProperties2(
  // VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount,
  // VkQueueFamilyProperties2* pQueueFamilyProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceQueueFamilyProperties2);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMemoryProperties2(
  // VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2*
  // pMemoryProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceMemoryProperties2);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceSparseImageFormatProperties2(
  // VkPhysicalDevice physicalDevice, const
  // VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t*
  // pPropertyCount, VkSparseImageFormatProperties2* pProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceSparseImageFormatProperties2);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalBufferProperties(
  // VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo*
  // pExternalBufferInfo, VkExternalBufferProperties*
  // pExternalBufferProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceExternalBufferProperties);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalFenceProperties(
  // VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo*
  // pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceExternalFenceProperties);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalSemaphoreProperties(
  // VkPhysicalDevice physicalDevice, const
  // VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo,
  // VkExternalSemaphoreProperties* pExternalSemaphoreProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceExternalSemaphoreProperties);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceToolProperties(
  // VkPhysicalDevice physicalDevice, uint32_t* pToolCount,
  // VkPhysicalDeviceToolProperties* pToolProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceToolProperties);
  // VKAPI_ATTR void VKAPI_CALL vkDestroySurfaceKHR( VkInstance instance,
  // VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroySurfaceKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceSupportKHR(
  // VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR
  // surface, VkBool32* pSupported);
  VKFUNDEFINE(vkGetPhysicalDeviceSurfaceSupportKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceCapabilitiesKHR(
  // VkPhysicalDevice physicalDevice, VkSurfaceKHR surface,
  // VkSurfaceCapabilitiesKHR* pSurfaceCapabilities);
  VKFUNDEFINE(vkGetPhysicalDeviceSurfaceCapabilitiesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceFormatsKHR(
  // VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t*
  // pSurfaceFormatCount, VkSurfaceFormatKHR* pSurfaceFormats);
  VKFUNDEFINE(vkGetPhysicalDeviceSurfaceFormatsKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfacePresentModesKHR(
  // VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t*
  // pPresentModeCount, VkPresentModeKHR* pPresentModes);
  VKFUNDEFINE(vkGetPhysicalDeviceSurfacePresentModesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDevicePresentRectanglesKHR(
  // VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t*
  // pRectCount, VkRect2D* pRects);
  VKFUNDEFINE(vkGetPhysicalDevicePresentRectanglesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayPropertiesKHR(
  // VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount,
  // VkDisplayPropertiesKHR* pProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceDisplayPropertiesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL
  // vkGetPhysicalDeviceDisplayPlanePropertiesKHR( VkPhysicalDevice
  // physicalDevice, uint32_t* pPropertyCount, VkDisplayPlanePropertiesKHR*
  // pProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceDisplayPlanePropertiesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayPlaneSupportedDisplaysKHR(
  // VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t*
  // pDisplayCount, VkDisplayKHR* pDisplays);
  VKFUNDEFINE(vkGetDisplayPlaneSupportedDisplaysKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayModePropertiesKHR(
  // VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t*
  // pPropertyCount, VkDisplayModePropertiesKHR* pProperties);
  VKFUNDEFINE(vkGetDisplayModePropertiesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateDisplayModeKHR( VkPhysicalDevice
  // physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR*
  // pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR*
  // pMode);
  VKFUNDEFINE(vkCreateDisplayModeKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayPlaneCapabilitiesKHR(
  // VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t
  // planeIndex, VkDisplayPlaneCapabilitiesKHR* pCapabilities);
  VKFUNDEFINE(vkGetDisplayPlaneCapabilitiesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateDisplayPlaneSurfaceKHR( VkInstance
  // instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
  VKFUNDEFINE(vkCreateDisplayPlaneSurfaceKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceVideoCapabilitiesKHR(
  // VkPhysicalDevice physicalDevice, const VkVideoProfileInfoKHR*
  // pVideoProfile, VkVideoCapabilitiesKHR* pCapabilities);
  VKFUNDEFINE(vkGetPhysicalDeviceVideoCapabilitiesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceVideoFormatPropertiesKHR(
  // VkPhysicalDevice physicalDevice, const VkPhysicalDeviceVideoFormatInfoKHR*
  // pVideoFormatInfo, uint32_t* pVideoFormatPropertyCount,
  // VkVideoFormatPropertiesKHR* pVideoFormatProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceVideoFormatPropertiesKHR);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFeatures2KHR(
  // VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures);
  VKFUNDEFINE(vkGetPhysicalDeviceFeatures2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceProperties2KHR(
  // VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceProperties2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFormatProperties2KHR(
  // VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2*
  // pFormatProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceFormatProperties2KHR);
  // VKAPI_ATTR VkResult VKAPI_CALL
  // vkGetPhysicalDeviceImageFormatProperties2KHR( VkPhysicalDevice
  // physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo,
  // VkImageFormatProperties2* pImageFormatProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceImageFormatProperties2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceQueueFamilyProperties2KHR(
  // VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount,
  // VkQueueFamilyProperties2* pQueueFamilyProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceQueueFamilyProperties2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMemoryProperties2KHR(
  // VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2*
  // pMemoryProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceMemoryProperties2KHR);
  // VKAPI_ATTR void VKAPI_CALL
  // vkGetPhysicalDeviceSparseImageFormatProperties2KHR( VkPhysicalDevice
  // physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo,
  // uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceSparseImageFormatProperties2KHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkEnumeratePhysicalDeviceGroupsKHR(
  // VkInstance instance, uint32_t* pPhysicalDeviceGroupCount,
  // VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties);
  VKFUNDEFINE(vkEnumeratePhysicalDeviceGroupsKHR);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalBufferPropertiesKHR(
  // VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo*
  // pExternalBufferInfo, VkExternalBufferProperties*
  // pExternalBufferProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceExternalBufferPropertiesKHR);
  // VKAPI_ATTR void VKAPI_CALL
  // vkGetPhysicalDeviceExternalSemaphorePropertiesKHR( VkPhysicalDevice
  // physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo*
  // pExternalSemaphoreInfo, VkExternalSemaphoreProperties*
  // pExternalSemaphoreProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceExternalSemaphorePropertiesKHR);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalFencePropertiesKHR(
  // VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo*
  // pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceExternalFencePropertiesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL
  // vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(
  // VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, uint32_t*
  // pCounterCount, VkPerformanceCounterKHR* pCounters,
  // VkPerformanceCounterDescriptionKHR* pCounterDescriptions);
  VKFUNDEFINE(vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR);
  // VKAPI_ATTR void VKAPI_CALL
  // vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR( VkPhysicalDevice
  // physicalDevice, const VkQueryPoolPerformanceCreateInfoKHR*
  // pPerformanceQueryCreateInfo, uint32_t* pNumPasses);
  VKFUNDEFINE(vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceCapabilities2KHR(
  // VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR*
  // pSurfaceInfo, VkSurfaceCapabilities2KHR* pSurfaceCapabilities);
  VKFUNDEFINE(vkGetPhysicalDeviceSurfaceCapabilities2KHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceFormats2KHR(
  // VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR*
  // pSurfaceInfo, uint32_t* pSurfaceFormatCount, VkSurfaceFormat2KHR*
  // pSurfaceFormats);
  VKFUNDEFINE(vkGetPhysicalDeviceSurfaceFormats2KHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayProperties2KHR(
  // VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount,
  // VkDisplayProperties2KHR* pProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceDisplayProperties2KHR);
  // VKAPI_ATTR VkResult VKAPI_CALL
  // vkGetPhysicalDeviceDisplayPlaneProperties2KHR( VkPhysicalDevice
  // physicalDevice, uint32_t* pPropertyCount, VkDisplayPlaneProperties2KHR*
  // pProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceDisplayPlaneProperties2KHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayModeProperties2KHR(
  // VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t*
  // pPropertyCount, VkDisplayModeProperties2KHR* pProperties);
  VKFUNDEFINE(vkGetDisplayModeProperties2KHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayPlaneCapabilities2KHR(
  // VkPhysicalDevice physicalDevice, const VkDisplayPlaneInfo2KHR*
  // pDisplayPlaneInfo, VkDisplayPlaneCapabilities2KHR* pCapabilities);
  VKFUNDEFINE(vkGetDisplayPlaneCapabilities2KHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceFragmentShadingRatesKHR(
  // VkPhysicalDevice physicalDevice, uint32_t* pFragmentShadingRateCount,
  // VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates);
  VKFUNDEFINE(vkGetPhysicalDeviceFragmentShadingRatesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL
  // vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR( VkPhysicalDevice
  // physicalDevice, const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR*
  // pQualityLevelInfo, VkVideoEncodeQualityLevelPropertiesKHR*
  // pQualityLevelProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL
  // vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR( VkPhysicalDevice
  // physicalDevice, uint32_t* pPropertyCount, VkCooperativeMatrixPropertiesKHR*
  // pProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL
  // vkGetPhysicalDeviceCalibrateableTimeDomainsKHR( VkPhysicalDevice
  // physicalDevice, uint32_t* pTimeDomainCount, VkTimeDomainKHR* pTimeDomains);
  VKFUNDEFINE(vkGetPhysicalDeviceCalibrateableTimeDomainsKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateDebugReportCallbackEXT( VkInstance
  // instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback);
  VKFUNDEFINE(vkCreateDebugReportCallbackEXT);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyDebugReportCallbackEXT( VkInstance
  // instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks*
  // pAllocator);
  VKFUNDEFINE(vkDestroyDebugReportCallbackEXT);
  // VKAPI_ATTR void VKAPI_CALL vkDebugReportMessageEXT( VkInstance instance,
  // VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType,
  // uint64_t object, size_t location, int32_t messageCode, const char*
  // pLayerPrefix, const char* pMessage);
  VKFUNDEFINE(vkDebugReportMessageEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL
  // vkGetPhysicalDeviceExternalImageFormatPropertiesNV( VkPhysicalDevice
  // physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling,
  // VkImageUsageFlags usage, VkImageCreateFlags flags,
  // VkExternalMemoryHandleTypeFlagsNV externalHandleType,
  // VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceExternalImageFormatPropertiesNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkReleaseDisplayEXT( VkPhysicalDevice
  // physicalDevice, VkDisplayKHR display);
  VKFUNDEFINE(vkReleaseDisplayEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceCapabilities2EXT(
  // VkPhysicalDevice physicalDevice, VkSurfaceKHR surface,
  // VkSurfaceCapabilities2EXT* pSurfaceCapabilities);
  VKFUNDEFINE(vkGetPhysicalDeviceSurfaceCapabilities2EXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateDebugUtilsMessengerEXT( VkInstance
  // instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger);
  VKFUNDEFINE(vkCreateDebugUtilsMessengerEXT);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyDebugUtilsMessengerEXT( VkInstance
  // instance, VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks*
  // pAllocator);
  VKFUNDEFINE(vkDestroyDebugUtilsMessengerEXT);
  // VKAPI_ATTR void VKAPI_CALL vkSubmitDebugUtilsMessageEXT( VkInstance
  // instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,
  // VkDebugUtilsMessageTypeFlagsEXT messageTypes, const
  // VkDebugUtilsMessengerCallbackDataEXT* pCallbackData);
  VKFUNDEFINE(vkSubmitDebugUtilsMessageEXT);
  // VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMultisamplePropertiesEXT(
  // VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples,
  // VkMultisamplePropertiesEXT* pMultisampleProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceMultisamplePropertiesEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL
  // vkGetPhysicalDeviceCalibrateableTimeDomainsEXT( VkPhysicalDevice
  // physicalDevice, uint32_t* pTimeDomainCount, VkTimeDomainKHR* pTimeDomains);
  VKFUNDEFINE(vkGetPhysicalDeviceCalibrateableTimeDomainsEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceToolPropertiesEXT(
  // VkPhysicalDevice physicalDevice, uint32_t* pToolCount,
  // VkPhysicalDeviceToolProperties* pToolProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceToolPropertiesEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL
  // vkGetPhysicalDeviceCooperativeMatrixPropertiesNV( VkPhysicalDevice
  // physicalDevice, uint32_t* pPropertyCount, VkCooperativeMatrixPropertiesNV*
  // pProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceCooperativeMatrixPropertiesNV);
  // VKAPI_ATTR VkResult VKAPI_CALL
  // vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
  // VkPhysicalDevice physicalDevice, uint32_t* pCombinationCount,
  // VkFramebufferMixedSamplesCombinationNV* pCombinations);
  VKFUNDEFINE(
      vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateHeadlessSurfaceEXT( VkInstance
  // instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
  VKFUNDEFINE(vkCreateHeadlessSurfaceEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkAcquireDrmDisplayEXT( VkPhysicalDevice
  // physicalDevice, int32_t drmFd, VkDisplayKHR display);
  VKFUNDEFINE(vkAcquireDrmDisplayEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetDrmDisplayEXT( VkPhysicalDevice
  // physicalDevice, int32_t drmFd, uint32_t connectorId, VkDisplayKHR*
  // display);
  VKFUNDEFINE(vkGetDrmDisplayEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL
  // vkGetPhysicalDeviceOpticalFlowImageFormatsNV( VkPhysicalDevice
  // physicalDevice, const VkOpticalFlowImageFormatInfoNV*
  // pOpticalFlowImageFormatInfo, uint32_t* pFormatCount,
  // VkOpticalFlowImageFormatPropertiesNV* pImageFormatProperties);
  VKFUNDEFINE(vkGetPhysicalDeviceOpticalFlowImageFormatsNV);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateAndroidSurfaceKHR( VkInstance
  // instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
  VKFUNDEFINE(vkCreateAndroidSurfaceKHR);
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateImagePipeSurfaceFUCHSIA( VkInstance
  // instance, const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
  VKFUNDEFINE(vkCreateImagePipeSurfaceFUCHSIA);
#endif
#ifdef VK_USE_PLATFORM_GGP
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateStreamDescriptorSurfaceGGP(
  // VkInstance instance, const VkStreamDescriptorSurfaceCreateInfoGGP*
  // pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR*
  // pSurface);
  VKFUNDEFINE(vkCreateStreamDescriptorSurfaceGGP);
#endif
#ifdef VK_USE_PLATFORM_IOS_MVK
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateIOSSurfaceMVK( VkInstance instance,
  // const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkSurfaceKHR* pSurface);
  VKFUNDEFINE(vkCreateIOSSurfaceMVK);
#endif
#ifdef VK_USE_PLATFORM_MACOS_MVK
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateMacOSSurfaceMVK( VkInstance
  // instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
  VKFUNDEFINE(vkCreateMacOSSurfaceMVK);
#endif
#ifdef VK_USE_PLATFORM_VI_NN
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateViSurfaceNN( VkInstance instance,
  // const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkSurfaceKHR* pSurface);
  VKFUNDEFINE(vkCreateViSurfaceNN);
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateWaylandSurfaceKHR( VkInstance
  // instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
  VKFUNDEFINE(vkCreateWaylandSurfaceKHR);
  // VKAPI_ATTR VkBool32 VKAPI_CALL
  // vkGetPhysicalDeviceWaylandPresentationSupportKHR( VkPhysicalDevice
  // physicalDevice, uint32_t queueFamilyIndex, struct wl_display* display);
  VKFUNDEFINE(vkGetPhysicalDeviceWaylandPresentationSupportKHR);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateWin32SurfaceKHR( VkInstance
  // instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
  VKFUNDEFINE(vkCreateWin32SurfaceKHR);
  // VKAPI_ATTR VkBool32 VKAPI_CALL
  // vkGetPhysicalDeviceWin32PresentationSupportKHR( VkPhysicalDevice
  // physicalDevice, uint32_t queueFamilyIndex);
  VKFUNDEFINE(vkGetPhysicalDeviceWin32PresentationSupportKHR);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfacePresentModes2EXT(
  // VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR*
  // pSurfaceInfo, uint32_t* pPresentModeCount, VkPresentModeKHR*
  // pPresentModes);
  VKFUNDEFINE(vkGetPhysicalDeviceSurfacePresentModes2EXT);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
  // VKAPI_ATTR VkResult VKAPI_CALL vkAcquireWinrtDisplayNV( VkPhysicalDevice
  // physicalDevice, VkDisplayKHR display);
  VKFUNDEFINE(vkAcquireWinrtDisplayNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetWinrtDisplayNV( VkPhysicalDevice
  // physicalDevice, uint32_t deviceRelativeId, VkDisplayKHR* pDisplay);
  VKFUNDEFINE(vkGetWinrtDisplayNV);
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateXcbSurfaceKHR( VkInstance instance,
  // const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkSurfaceKHR* pSurface);
  VKFUNDEFINE(vkCreateXcbSurfaceKHR);
  // VKAPI_ATTR VkBool32 VKAPI_CALL
  // vkGetPhysicalDeviceXcbPresentationSupportKHR( VkPhysicalDevice
  // physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t* connection,
  // xcb_visualid_t visual_id);
  VKFUNDEFINE(vkGetPhysicalDeviceXcbPresentationSupportKHR);
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateXlibSurfaceKHR( VkInstance instance,
  // const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkSurfaceKHR* pSurface);
  VKFUNDEFINE(vkCreateXlibSurfaceKHR);
  // VKAPI_ATTR VkBool32 VKAPI_CALL
  // vkGetPhysicalDeviceXlibPresentationSupportKHR( VkPhysicalDevice
  // physicalDevice, uint32_t queueFamilyIndex, Display* dpy, VisualID
  // visualID);
  VKFUNDEFINE(vkGetPhysicalDeviceXlibPresentationSupportKHR);
#endif
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateDirectFBSurfaceEXT( VkInstance
  // instance, const VkDirectFBSurfaceCreateInfoEXT* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
  VKFUNDEFINE(vkCreateDirectFBSurfaceEXT);
  // VKAPI_ATTR VkBool32 VKAPI_CALL
  // vkGetPhysicalDeviceDirectFBPresentationSupportEXT( VkPhysicalDevice
  // physicalDevice, uint32_t queueFamilyIndex, IDirectFB* dfb);
  VKFUNDEFINE(vkGetPhysicalDeviceDirectFBPresentationSupportEXT);
#endif
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
  // VKAPI_ATTR VkResult VKAPI_CALL vkAcquireXlibDisplayEXT( VkPhysicalDevice
  // physicalDevice, Display* dpy, VkDisplayKHR display);
  VKFUNDEFINE(vkAcquireXlibDisplayEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetRandROutputDisplayEXT( VkPhysicalDevice
  // physicalDevice, Display* dpy, RROutput rrOutput, VkDisplayKHR* pDisplay);
  VKFUNDEFINE(vkGetRandROutputDisplayEXT);
#endif
#ifdef VK_USE_PLATFORM_METAL_EXT
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateMetalSurfaceEXT( VkInstance
  // instance, const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
  VKFUNDEFINE(vkCreateMetalSurfaceEXT);
#endif
#ifdef VK_USE_PLATFORM_SCREEN_QNX
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateScreenSurfaceQNX( VkInstance
  // instance, const VkScreenSurfaceCreateInfoQNX* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
  VKFUNDEFINE(vkCreateScreenSurfaceQNX);
  // VKAPI_ATTR VkBool32 VKAPI_CALL
  // vkGetPhysicalDeviceScreenPresentationSupportQNX( VkPhysicalDevice
  // physicalDevice, uint32_t queueFamilyIndex, struct _screen_window* window);
  VKFUNDEFINE(vkGetPhysicalDeviceScreenPresentationSupportQNX);
#endif

  bool TRY_LOAD_VK_VERSION_1_0();                         // 0
  bool TRY_LOAD_VK_VERSION_1_1();                         // 1
  bool TRY_LOAD_VK_VERSION_1_3();                         // 2
  bool TRY_LOAD_VK_KHR_surface();                         // 3
  bool TRY_LOAD_VK_KHR_swapchain();                       // 4
  bool TRY_LOAD_VK_KHR_display();                         // 5
  bool TRY_LOAD_VK_KHR_video_queue();                     // 6
  bool TRY_LOAD_VK_KHR_get_physical_device_properties2(); // 7
  bool TRY_LOAD_VK_KHR_device_group_creation();           // 8
  bool TRY_LOAD_VK_KHR_external_memory_capabilities();    // 9
  bool TRY_LOAD_VK_KHR_external_semaphore_capabilities(); // 10
  bool TRY_LOAD_VK_KHR_external_fence_capabilities();     // 11
  bool TRY_LOAD_VK_KHR_performance_query();               // 12
  bool TRY_LOAD_VK_KHR_get_surface_capabilities2();       // 13
  bool TRY_LOAD_VK_KHR_get_display_properties2();         // 14
  bool TRY_LOAD_VK_KHR_fragment_shading_rate();           // 15
  bool TRY_LOAD_VK_KHR_video_encode_queue();              // 16
  bool TRY_LOAD_VK_KHR_cooperative_matrix();              // 17
  bool TRY_LOAD_VK_KHR_calibrated_timestamps();           // 18
  bool TRY_LOAD_VK_EXT_debug_report();                    // 19
  bool TRY_LOAD_VK_NV_external_memory_capabilities();     // 20
  bool TRY_LOAD_VK_EXT_direct_mode_display();             // 21
  bool TRY_LOAD_VK_EXT_display_surface_counter();         // 22
  bool TRY_LOAD_VK_EXT_debug_utils();                     // 23
  bool TRY_LOAD_VK_EXT_sample_locations();                // 24
  bool TRY_LOAD_VK_EXT_calibrated_timestamps();           // 25
  bool TRY_LOAD_VK_EXT_tooling_info();                    // 26
  bool TRY_LOAD_VK_NV_cooperative_matrix();               // 27
  bool TRY_LOAD_VK_NV_coverage_reduction_mode();          // 28
  bool TRY_LOAD_VK_EXT_headless_surface();                // 29
  bool TRY_LOAD_VK_EXT_acquire_drm_display();             // 30
  bool TRY_LOAD_VK_NV_optical_flow();                     // 31
  bool TRY_LOAD_VK_KHR_android_surface();                 // 32
  bool TRY_LOAD_VK_FUCHSIA_imagepipe_surface();           // 33
  bool TRY_LOAD_VK_GGP_stream_descriptor_surface();       // 34
  bool TRY_LOAD_VK_MVK_ios_surface();                     // 35
  bool TRY_LOAD_VK_MVK_macos_surface();                   // 36
  bool TRY_LOAD_VK_NN_vi_surface();                       // 37
  bool TRY_LOAD_VK_KHR_wayland_surface();                 // 38
  bool TRY_LOAD_VK_KHR_win32_surface();                   // 39
  bool TRY_LOAD_VK_EXT_full_screen_exclusive();           // 40
  bool TRY_LOAD_VK_NV_acquire_winrt_display();            // 41
  bool TRY_LOAD_VK_KHR_xcb_surface();                     // 42
  bool TRY_LOAD_VK_KHR_xlib_surface();                    // 43
  bool TRY_LOAD_VK_EXT_directfb_surface();                // 44
  bool TRY_LOAD_VK_EXT_acquire_xlib_display();            // 45
  bool TRY_LOAD_VK_EXT_metal_surface();                   // 46
  bool TRY_LOAD_VK_QNX_screen_surface();                  // 47

  typedef bool (VkInstanceLayoutLoader::*EXTLOADER)();
  using MAP = ExtendsMap<std::string, EXTLOADER, size_t>;
  static std::vector<EXTLOADER> TRAN2FUN(const std::vector<std::string> &list);
  static std::vector<size_t> TRAN(const std::vector<std::string> &list);

  bool MappingToNeedLoad(const std::vector<size_t> &list);
  static std::vector<EXTLOADER>
  TRAN2FUN(const std::vector<std::string> &&list) {
    return TRAN2FUN(list);
  }
  static std::vector<size_t> TRAN(std::vector<std::string> &&list) {
    return TRAN(list);
  }
  inline bool MappingToNeedLoad(const std::vector<std::string> &list) {
    auto encd = TRAN(list);
    return MappingToNeedLoad(encd);
  }
  inline bool MappingToNeedLoad(std::vector<std::string> &&list) {
    return MappingToNeedLoad(list);
  }

  Flags LoadAll();
};
class VkDeviceLayoutLoader {
public:
  typedef APIProc (*UserptrLoadFunc)(void *userptr, std::string_view name);
  struct Flags : public LONGBITSET {
    Flags() : LONGBITSET(sizeof(Flags), 117) {}
    bool IS_LOAD_VK_VERSION_1_0 : 1;                                // 0
    bool IS_LOAD_VK_VERSION_1_1 : 1;                                // 1
    bool IS_LOAD_VK_VERSION_1_2 : 1;                                // 2
    bool IS_LOAD_VK_VERSION_1_3 : 1;                                // 3
    bool IS_LOAD_VK_KHR_swapchain : 1;                              // 4
    bool IS_LOAD_VK_KHR_display_swapchain : 1;                      // 5
    bool IS_LOAD_VK_KHR_video_queue : 1;                            // 6
    bool IS_LOAD_VK_KHR_video_decode_queue : 1;                     // 7
    bool IS_LOAD_VK_KHR_dynamic_rendering : 1;                      // 8
    bool IS_LOAD_VK_KHR_device_group : 1;                           // 9
    bool IS_LOAD_VK_KHR_maintenance1 : 1;                           // 10
    bool IS_LOAD_VK_KHR_external_memory_fd : 1;                     // 11
    bool IS_LOAD_VK_KHR_external_semaphore_fd : 1;                  // 12
    bool IS_LOAD_VK_KHR_push_descriptor : 1;                        // 13
    bool IS_LOAD_VK_KHR_descriptor_update_template : 1;             // 14
    bool IS_LOAD_VK_KHR_create_renderpass2 : 1;                     // 15
    bool IS_LOAD_VK_KHR_shared_presentable_image : 1;               // 16
    bool IS_LOAD_VK_KHR_external_fence_fd : 1;                      // 17
    bool IS_LOAD_VK_KHR_performance_query : 1;                      // 18
    bool IS_LOAD_VK_KHR_get_memory_requirements2 : 1;               // 19
    bool IS_LOAD_VK_KHR_sampler_ycbcr_conversion : 1;               // 20
    bool IS_LOAD_VK_KHR_bind_memory2 : 1;                           // 21
    bool IS_LOAD_VK_KHR_maintenance3 : 1;                           // 22
    bool IS_LOAD_VK_KHR_draw_indirect_count : 1;                    // 23
    bool IS_LOAD_VK_KHR_timeline_semaphore : 1;                     // 24
    bool IS_LOAD_VK_KHR_fragment_shading_rate : 1;                  // 25
    bool IS_LOAD_VK_KHR_dynamic_rendering_local_read : 1;           // 26
    bool IS_LOAD_VK_KHR_present_wait : 1;                           // 27
    bool IS_LOAD_VK_KHR_buffer_device_address : 1;                  // 28
    bool IS_LOAD_VK_KHR_deferred_host_operations : 1;               // 29
    bool IS_LOAD_VK_KHR_pipeline_executable_properties : 1;         // 30
    bool IS_LOAD_VK_KHR_map_memory2 : 1;                            // 31
    bool IS_LOAD_VK_KHR_video_encode_queue : 1;                     // 32
    bool IS_LOAD_VK_KHR_synchronization2 : 1;                       // 33
    bool IS_LOAD_VK_KHR_copy_commands2 : 1;                         // 34
    bool IS_LOAD_VK_KHR_ray_tracing_maintenance1 : 1;               // 35
    bool IS_LOAD_VK_KHR_maintenance4 : 1;                           // 36
    bool IS_LOAD_VK_KHR_maintenance5 : 1;                           // 37
    bool IS_LOAD_VK_KHR_line_rasterization : 1;                     // 38
    bool IS_LOAD_VK_KHR_calibrated_timestamps : 1;                  // 39
    bool IS_LOAD_VK_KHR_maintenance6 : 1;                           // 40
    bool IS_LOAD_VK_EXT_debug_marker : 1;                           // 41
    bool IS_LOAD_VK_EXT_transform_feedback : 1;                     // 42
    bool IS_LOAD_VK_NVX_binary_import : 1;                          // 43
    bool IS_LOAD_VK_NVX_image_view_handle : 1;                      // 44
    bool IS_LOAD_VK_AMD_draw_indirect_count : 1;                    // 45
    bool IS_LOAD_VK_AMD_shader_info : 1;                            // 46
    bool IS_LOAD_VK_EXT_conditional_rendering : 1;                  // 47
    bool IS_LOAD_VK_NV_clip_space_w_scaling : 1;                    // 48
    bool IS_LOAD_VK_EXT_display_control : 1;                        // 49
    bool IS_LOAD_VK_GOOGLE_display_timing : 1;                      // 50
    bool IS_LOAD_VK_EXT_discard_rectangles : 1;                     // 51
    bool IS_LOAD_VK_EXT_hdr_metadata : 1;                           // 52
    bool IS_LOAD_VK_EXT_debug_utils : 1;                            // 53
    bool IS_LOAD_VK_EXT_sample_locations : 1;                       // 54
    bool IS_LOAD_VK_EXT_image_drm_format_modifier : 1;              // 55
    bool IS_LOAD_VK_EXT_validation_cache : 1;                       // 56
    bool IS_LOAD_VK_NV_shading_rate_image : 1;                      // 57
    bool IS_LOAD_VK_NV_ray_tracing : 1;                             // 58
    bool IS_LOAD_VK_EXT_external_memory_host : 1;                   // 59
    bool IS_LOAD_VK_AMD_buffer_marker : 1;                          // 60
    bool IS_LOAD_VK_EXT_calibrated_timestamps : 1;                  // 61
    bool IS_LOAD_VK_NV_mesh_shader : 1;                             // 62
    bool IS_LOAD_VK_NV_scissor_exclusive : 1;                       // 63
    bool IS_LOAD_VK_NV_device_diagnostic_checkpoints : 1;           // 64
    bool IS_LOAD_VK_INTEL_performance_query : 1;                    // 65
    bool IS_LOAD_VK_AMD_display_native_hdr : 1;                     // 66
    bool IS_LOAD_VK_EXT_buffer_device_address : 1;                  // 67
    bool IS_LOAD_VK_EXT_line_rasterization : 1;                     // 68
    bool IS_LOAD_VK_EXT_host_query_reset : 1;                       // 69
    bool IS_LOAD_VK_EXT_extended_dynamic_state : 1;                 // 70
    bool IS_LOAD_VK_EXT_host_image_copy : 1;                        // 71
    bool IS_LOAD_VK_EXT_swapchain_maintenance1 : 1;                 // 72
    bool IS_LOAD_VK_NV_device_generated_commands : 1;               // 73
    bool IS_LOAD_VK_EXT_depth_bias_control : 1;                     // 74
    bool IS_LOAD_VK_EXT_private_data : 1;                           // 75
    bool IS_LOAD_VK_NV_cuda_kernel_launch : 1;                      // 76
    bool IS_LOAD_VK_EXT_descriptor_buffer : 1;                      // 77
    bool IS_LOAD_VK_NV_fragment_shading_rate_enums : 1;             // 78
    bool IS_LOAD_VK_EXT_device_fault : 1;                           // 79
    bool IS_LOAD_VK_EXT_vertex_input_dynamic_state : 1;             // 80
    bool IS_LOAD_VK_HUAWEI_subpass_shading : 1;                     // 81
    bool IS_LOAD_VK_HUAWEI_invocation_mask : 1;                     // 82
    bool IS_LOAD_VK_NV_external_memory_rdma : 1;                    // 83
    bool IS_LOAD_VK_EXT_pipeline_properties : 1;                    // 84
    bool IS_LOAD_VK_EXT_extended_dynamic_state2 : 1;                // 85
    bool IS_LOAD_VK_EXT_color_write_enable : 1;                     // 86
    bool IS_LOAD_VK_EXT_multi_draw : 1;                             // 87
    bool IS_LOAD_VK_EXT_opacity_micromap : 1;                       // 88
    bool IS_LOAD_VK_HUAWEI_cluster_culling_shader : 1;              // 89
    bool IS_LOAD_VK_EXT_pageable_device_local_memory : 1;           // 90
    bool IS_LOAD_VK_VALVE_descriptor_set_host_mapping : 1;          // 91
    bool IS_LOAD_VK_NV_copy_memory_indirect : 1;                    // 92
    bool IS_LOAD_VK_NV_memory_decompression : 1;                    // 93
    bool IS_LOAD_VK_NV_device_generated_commands_compute : 1;       // 94
    bool IS_LOAD_VK_EXT_extended_dynamic_state3 : 1;                // 95
    bool IS_LOAD_VK_EXT_shader_module_identifier : 1;               // 96
    bool IS_LOAD_VK_NV_optical_flow : 1;                            // 97
    bool IS_LOAD_VK_EXT_shader_object : 1;                          // 98
    bool IS_LOAD_VK_QCOM_tile_properties : 1;                       // 99
    bool IS_LOAD_VK_NV_low_latency2 : 1;                            // 100
    bool IS_LOAD_VK_EXT_attachment_feedback_loop_dynamic_state : 1; // 101
    bool IS_LOAD_VK_KHR_acceleration_structure : 1;                 // 102
    bool IS_LOAD_VK_KHR_ray_tracing_pipeline : 1;                   // 103
    bool IS_LOAD_VK_EXT_mesh_shader : 1;                            // 104
    // NEED VK_USE_PLATFORM_ANDROID_KHR
    bool IS_LOAD_VK_ANDROID_external_memory_android_hardware_buffer : 1; // 105
    // NEED VK_USE_PLATFORM_FUCHSIA
    bool IS_LOAD_VK_FUCHSIA_external_memory : 1; // 106
    // NEED VK_USE_PLATFORM_FUCHSIA
    bool IS_LOAD_VK_FUCHSIA_external_semaphore : 1; // 107
    // NEED VK_USE_PLATFORM_FUCHSIA
    bool IS_LOAD_VK_FUCHSIA_buffer_collection : 1; // 108
    // NEED VK_USE_PLATFORM_WIN32_KHR
    bool IS_LOAD_VK_KHR_external_memory_win32 : 1; // 109
    // NEED VK_USE_PLATFORM_WIN32_KHR
    bool IS_LOAD_VK_KHR_external_semaphore_win32 : 1; // 110
    // NEED VK_USE_PLATFORM_WIN32_KHR
    bool IS_LOAD_VK_KHR_external_fence_win32 : 1; // 111
    // NEED VK_USE_PLATFORM_WIN32_KHR
    bool IS_LOAD_VK_NV_external_memory_win32 : 1; // 112
    // NEED VK_USE_PLATFORM_WIN32_KHR
    bool IS_LOAD_VK_EXT_full_screen_exclusive : 1; // 113
    // NEED VK_USE_PLATFORM_METAL_EXT
    bool IS_LOAD_VK_EXT_metal_objects : 1; // 114
    // NEED VK_USE_PLATFORM_SCREEN_QNX
    bool IS_LOAD_VK_QNX_external_memory_screen_buffer : 1; // 115
    // NEED VK_ENABLE_BETA_EXTENSIONS
    bool IS_LOAD_VK_AMDX_shader_enqueue : 1; // 116
  };

private:
  Flags NowState;

public:
  Flags NeedLoad;
  UserptrLoadFunc LoadFunc;
  void *userptr;
  inline APIProc TryToGet(std::string_view name) {
    return LoadFunc(userptr, name);
  }
  inline const Flags &GetNowState() const { return NowState; }
  VkDeviceLayoutLoader();
  // VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetDeviceProcAddr( VkDevice
  // device, const char* pName);
  VKFUNDEFINE(vkGetDeviceProcAddr);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyDevice( VkDevice device, const
  // VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyDevice);
  // VKAPI_ATTR void VKAPI_CALL vkGetDeviceQueue( VkDevice device, uint32_t
  // queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue);
  VKFUNDEFINE(vkGetDeviceQueue);
  // VKAPI_ATTR VkResult VKAPI_CALL vkQueueSubmit( VkQueue queue, uint32_t
  // submitCount, const VkSubmitInfo* pSubmits, VkFence fence);
  VKFUNDEFINE(vkQueueSubmit);
  // VKAPI_ATTR VkResult VKAPI_CALL vkQueueWaitIdle( VkQueue queue);
  VKFUNDEFINE(vkQueueWaitIdle);
  // VKAPI_ATTR VkResult VKAPI_CALL vkDeviceWaitIdle( VkDevice device);
  VKFUNDEFINE(vkDeviceWaitIdle);
  // VKAPI_ATTR VkResult VKAPI_CALL vkAllocateMemory( VkDevice device, const
  // VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks*
  // pAllocator, VkDeviceMemory* pMemory);
  VKFUNDEFINE(vkAllocateMemory);
  // VKAPI_ATTR void VKAPI_CALL vkFreeMemory( VkDevice device, VkDeviceMemory
  // memory, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkFreeMemory);
  // VKAPI_ATTR VkResult VKAPI_CALL vkMapMemory( VkDevice device, VkDeviceMemory
  // memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags,
  // void** ppData);
  VKFUNDEFINE(vkMapMemory);
  // VKAPI_ATTR void VKAPI_CALL vkUnmapMemory( VkDevice device, VkDeviceMemory
  // memory);
  VKFUNDEFINE(vkUnmapMemory);
  // VKAPI_ATTR VkResult VKAPI_CALL vkFlushMappedMemoryRanges( VkDevice device,
  // uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges);
  VKFUNDEFINE(vkFlushMappedMemoryRanges);
  // VKAPI_ATTR VkResult VKAPI_CALL vkInvalidateMappedMemoryRanges( VkDevice
  // device, uint32_t memoryRangeCount, const VkMappedMemoryRange*
  // pMemoryRanges);
  VKFUNDEFINE(vkInvalidateMappedMemoryRanges);
  // VKAPI_ATTR void VKAPI_CALL vkGetDeviceMemoryCommitment( VkDevice device,
  // VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes);
  VKFUNDEFINE(vkGetDeviceMemoryCommitment);
  // VKAPI_ATTR VkResult VKAPI_CALL vkBindBufferMemory( VkDevice device,
  // VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset);
  VKFUNDEFINE(vkBindBufferMemory);
  // VKAPI_ATTR VkResult VKAPI_CALL vkBindImageMemory( VkDevice device, VkImage
  // image, VkDeviceMemory memory, VkDeviceSize memoryOffset);
  VKFUNDEFINE(vkBindImageMemory);
  // VKAPI_ATTR void VKAPI_CALL vkGetBufferMemoryRequirements( VkDevice device,
  // VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements);
  VKFUNDEFINE(vkGetBufferMemoryRequirements);
  // VKAPI_ATTR void VKAPI_CALL vkGetImageMemoryRequirements( VkDevice device,
  // VkImage image, VkMemoryRequirements* pMemoryRequirements);
  VKFUNDEFINE(vkGetImageMemoryRequirements);
  // VKAPI_ATTR void VKAPI_CALL vkGetImageSparseMemoryRequirements( VkDevice
  // device, VkImage image, uint32_t* pSparseMemoryRequirementCount,
  // VkSparseImageMemoryRequirements* pSparseMemoryRequirements);
  VKFUNDEFINE(vkGetImageSparseMemoryRequirements);
  // VKAPI_ATTR VkResult VKAPI_CALL vkQueueBindSparse( VkQueue queue, uint32_t
  // bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence);
  VKFUNDEFINE(vkQueueBindSparse);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateFence( VkDevice device, const
  // VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
  // VkFence* pFence);
  VKFUNDEFINE(vkCreateFence);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyFence( VkDevice device, VkFence fence,
  // const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyFence);
  // VKAPI_ATTR VkResult VKAPI_CALL vkResetFences( VkDevice device, uint32_t
  // fenceCount, const VkFence* pFences);
  VKFUNDEFINE(vkResetFences);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetFenceStatus( VkDevice device, VkFence
  // fence);
  VKFUNDEFINE(vkGetFenceStatus);
  // VKAPI_ATTR VkResult VKAPI_CALL vkWaitForFences( VkDevice device, uint32_t
  // fenceCount, const VkFence* pFences, VkBool32 waitAll, uint64_t timeout);
  VKFUNDEFINE(vkWaitForFences);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateSemaphore( VkDevice device, const
  // VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkSemaphore* pSemaphore);
  VKFUNDEFINE(vkCreateSemaphore);
  // VKAPI_ATTR void VKAPI_CALL vkDestroySemaphore( VkDevice device, VkSemaphore
  // semaphore, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroySemaphore);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateEvent( VkDevice device, const
  // VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
  // VkEvent* pEvent);
  VKFUNDEFINE(vkCreateEvent);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyEvent( VkDevice device, VkEvent event,
  // const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyEvent);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetEventStatus( VkDevice device, VkEvent
  // event);
  VKFUNDEFINE(vkGetEventStatus);
  // VKAPI_ATTR VkResult VKAPI_CALL vkSetEvent( VkDevice device, VkEvent event);
  VKFUNDEFINE(vkSetEvent);
  // VKAPI_ATTR VkResult VKAPI_CALL vkResetEvent( VkDevice device, VkEvent
  // event);
  VKFUNDEFINE(vkResetEvent);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateQueryPool( VkDevice device, const
  // VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkQueryPool* pQueryPool);
  VKFUNDEFINE(vkCreateQueryPool);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyQueryPool( VkDevice device, VkQueryPool
  // queryPool, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyQueryPool);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetQueryPoolResults( VkDevice device,
  // VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t
  // dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags);
  VKFUNDEFINE(vkGetQueryPoolResults);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateBuffer( VkDevice device, const
  // VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
  // VkBuffer* pBuffer);
  VKFUNDEFINE(vkCreateBuffer);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyBuffer( VkDevice device, VkBuffer
  // buffer, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyBuffer);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateBufferView( VkDevice device, const
  // VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkBufferView* pView);
  VKFUNDEFINE(vkCreateBufferView);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyBufferView( VkDevice device,
  // VkBufferView bufferView, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyBufferView);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateImage( VkDevice device, const
  // VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
  // VkImage* pImage);
  VKFUNDEFINE(vkCreateImage);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyImage( VkDevice device, VkImage image,
  // const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyImage);
  // VKAPI_ATTR void VKAPI_CALL vkGetImageSubresourceLayout( VkDevice device,
  // VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout*
  // pLayout);
  VKFUNDEFINE(vkGetImageSubresourceLayout);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateImageView( VkDevice device, const
  // VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkImageView* pView);
  VKFUNDEFINE(vkCreateImageView);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyImageView( VkDevice device, VkImageView
  // imageView, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyImageView);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateShaderModule( VkDevice device, const
  // VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkShaderModule* pShaderModule);
  VKFUNDEFINE(vkCreateShaderModule);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyShaderModule( VkDevice device,
  // VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyShaderModule);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreatePipelineCache( VkDevice device,
  // const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkPipelineCache* pPipelineCache);
  VKFUNDEFINE(vkCreatePipelineCache);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyPipelineCache( VkDevice device,
  // VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyPipelineCache);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPipelineCacheData( VkDevice device,
  // VkPipelineCache pipelineCache, size_t* pDataSize, void* pData);
  VKFUNDEFINE(vkGetPipelineCacheData);
  // VKAPI_ATTR VkResult VKAPI_CALL vkMergePipelineCaches( VkDevice device,
  // VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache*
  // pSrcCaches);
  VKFUNDEFINE(vkMergePipelineCaches);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateGraphicsPipelines( VkDevice device,
  // VkPipelineCache pipelineCache, uint32_t createInfoCount, const
  // VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks*
  // pAllocator, VkPipeline* pPipelines);
  VKFUNDEFINE(vkCreateGraphicsPipelines);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateComputePipelines( VkDevice device,
  // VkPipelineCache pipelineCache, uint32_t createInfoCount, const
  // VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks*
  // pAllocator, VkPipeline* pPipelines);
  VKFUNDEFINE(vkCreateComputePipelines);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyPipeline( VkDevice device, VkPipeline
  // pipeline, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyPipeline);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreatePipelineLayout( VkDevice device,
  // const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkPipelineLayout* pPipelineLayout);
  VKFUNDEFINE(vkCreatePipelineLayout);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyPipelineLayout( VkDevice device,
  // VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyPipelineLayout);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateSampler( VkDevice device, const
  // VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
  // VkSampler* pSampler);
  VKFUNDEFINE(vkCreateSampler);
  // VKAPI_ATTR void VKAPI_CALL vkDestroySampler( VkDevice device, VkSampler
  // sampler, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroySampler);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorSetLayout( VkDevice
  // device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout);
  VKFUNDEFINE(vkCreateDescriptorSetLayout);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorSetLayout( VkDevice device,
  // VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks*
  // pAllocator);
  VKFUNDEFINE(vkDestroyDescriptorSetLayout);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorPool( VkDevice device,
  // const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkDescriptorPool* pDescriptorPool);
  VKFUNDEFINE(vkCreateDescriptorPool);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorPool( VkDevice device,
  // VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyDescriptorPool);
  // VKAPI_ATTR VkResult VKAPI_CALL vkResetDescriptorPool( VkDevice device,
  // VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags);
  VKFUNDEFINE(vkResetDescriptorPool);
  // VKAPI_ATTR VkResult VKAPI_CALL vkAllocateDescriptorSets( VkDevice device,
  // const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet*
  // pDescriptorSets);
  VKFUNDEFINE(vkAllocateDescriptorSets);
  // VKAPI_ATTR VkResult VKAPI_CALL vkFreeDescriptorSets( VkDevice device,
  // VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const
  // VkDescriptorSet* pDescriptorSets);
  VKFUNDEFINE(vkFreeDescriptorSets);
  // VKAPI_ATTR void VKAPI_CALL vkUpdateDescriptorSets( VkDevice device,
  // uint32_t descriptorWriteCount, const VkWriteDescriptorSet*
  // pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet*
  // pDescriptorCopies);
  VKFUNDEFINE(vkUpdateDescriptorSets);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateFramebuffer( VkDevice device, const
  // VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkFramebuffer* pFramebuffer);
  VKFUNDEFINE(vkCreateFramebuffer);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyFramebuffer( VkDevice device,
  // VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyFramebuffer);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateRenderPass( VkDevice device, const
  // VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkRenderPass* pRenderPass);
  VKFUNDEFINE(vkCreateRenderPass);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyRenderPass( VkDevice device,
  // VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyRenderPass);
  // VKAPI_ATTR void VKAPI_CALL vkGetRenderAreaGranularity( VkDevice device,
  // VkRenderPass renderPass, VkExtent2D* pGranularity);
  VKFUNDEFINE(vkGetRenderAreaGranularity);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateCommandPool( VkDevice device, const
  // VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkCommandPool* pCommandPool);
  VKFUNDEFINE(vkCreateCommandPool);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyCommandPool( VkDevice device,
  // VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyCommandPool);
  // VKAPI_ATTR VkResult VKAPI_CALL vkResetCommandPool( VkDevice device,
  // VkCommandPool commandPool, VkCommandPoolResetFlags flags);
  VKFUNDEFINE(vkResetCommandPool);
  // VKAPI_ATTR VkResult VKAPI_CALL vkAllocateCommandBuffers( VkDevice device,
  // const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer*
  // pCommandBuffers);
  VKFUNDEFINE(vkAllocateCommandBuffers);
  // VKAPI_ATTR void VKAPI_CALL vkFreeCommandBuffers( VkDevice device,
  // VkCommandPool commandPool, uint32_t commandBufferCount, const
  // VkCommandBuffer* pCommandBuffers);
  VKFUNDEFINE(vkFreeCommandBuffers);
  // VKAPI_ATTR VkResult VKAPI_CALL vkBeginCommandBuffer( VkCommandBuffer
  // commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo);
  VKFUNDEFINE(vkBeginCommandBuffer);
  // VKAPI_ATTR VkResult VKAPI_CALL vkEndCommandBuffer( VkCommandBuffer
  // commandBuffer);
  VKFUNDEFINE(vkEndCommandBuffer);
  // VKAPI_ATTR VkResult VKAPI_CALL vkResetCommandBuffer( VkCommandBuffer
  // commandBuffer, VkCommandBufferResetFlags flags);
  VKFUNDEFINE(vkResetCommandBuffer);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBindPipeline( VkCommandBuffer
  // commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline);
  VKFUNDEFINE(vkCmdBindPipeline);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetViewport( VkCommandBuffer commandBuffer,
  // uint32_t firstViewport, uint32_t viewportCount, const VkViewport*
  // pViewports);
  VKFUNDEFINE(vkCmdSetViewport);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetScissor( VkCommandBuffer commandBuffer,
  // uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors);
  VKFUNDEFINE(vkCmdSetScissor);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetLineWidth( VkCommandBuffer
  // commandBuffer, float lineWidth);
  VKFUNDEFINE(vkCmdSetLineWidth);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBias( VkCommandBuffer
  // commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float
  // depthBiasSlopeFactor);
  VKFUNDEFINE(vkCmdSetDepthBias);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetBlendConstants( VkCommandBuffer
  // commandBuffer, const float blendConstants[4]);
  VKFUNDEFINE(vkCmdSetBlendConstants);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBounds( VkCommandBuffer
  // commandBuffer, float minDepthBounds, float maxDepthBounds);
  VKFUNDEFINE(vkCmdSetDepthBounds);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilCompareMask( VkCommandBuffer
  // commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask);
  VKFUNDEFINE(vkCmdSetStencilCompareMask);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilWriteMask( VkCommandBuffer
  // commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask);
  VKFUNDEFINE(vkCmdSetStencilWriteMask);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilReference( VkCommandBuffer
  // commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference);
  VKFUNDEFINE(vkCmdSetStencilReference);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBindDescriptorSets( VkCommandBuffer
  // commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout
  // layout, uint32_t firstSet, uint32_t descriptorSetCount, const
  // VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount, const
  // uint32_t* pDynamicOffsets);
  VKFUNDEFINE(vkCmdBindDescriptorSets);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBindIndexBuffer( VkCommandBuffer
  // commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType
  // indexType);
  VKFUNDEFINE(vkCmdBindIndexBuffer);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBindVertexBuffers( VkCommandBuffer
  // commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const
  // VkBuffer* pBuffers, const VkDeviceSize* pOffsets);
  VKFUNDEFINE(vkCmdBindVertexBuffers);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDraw( VkCommandBuffer commandBuffer,
  // uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex,
  // uint32_t firstInstance);
  VKFUNDEFINE(vkCmdDraw);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexed( VkCommandBuffer commandBuffer,
  // uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t
  // vertexOffset, uint32_t firstInstance);
  VKFUNDEFINE(vkCmdDrawIndexed);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirect( VkCommandBuffer
  // commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount,
  // uint32_t stride);
  VKFUNDEFINE(vkCmdDrawIndirect);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirect( VkCommandBuffer
  // commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount,
  // uint32_t stride);
  VKFUNDEFINE(vkCmdDrawIndexedIndirect);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDispatch( VkCommandBuffer commandBuffer,
  // uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
  VKFUNDEFINE(vkCmdDispatch);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDispatchIndirect( VkCommandBuffer
  // commandBuffer, VkBuffer buffer, VkDeviceSize offset);
  VKFUNDEFINE(vkCmdDispatchIndirect);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyBuffer( VkCommandBuffer commandBuffer,
  // VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const
  // VkBufferCopy* pRegions);
  VKFUNDEFINE(vkCmdCopyBuffer);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyImage( VkCommandBuffer commandBuffer,
  // VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage,
  // VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy*
  // pRegions);
  VKFUNDEFINE(vkCmdCopyImage);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBlitImage( VkCommandBuffer commandBuffer,
  // VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage,
  // VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit*
  // pRegions, VkFilter filter);
  VKFUNDEFINE(vkCmdBlitImage);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyBufferToImage( VkCommandBuffer
  // commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout
  // dstImageLayout, uint32_t regionCount, const VkBufferImageCopy* pRegions);
  VKFUNDEFINE(vkCmdCopyBufferToImage);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyImageToBuffer( VkCommandBuffer
  // commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer
  // dstBuffer, uint32_t regionCount, const VkBufferImageCopy* pRegions);
  VKFUNDEFINE(vkCmdCopyImageToBuffer);
  // VKAPI_ATTR void VKAPI_CALL vkCmdUpdateBuffer( VkCommandBuffer
  // commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize
  // dataSize, const void* pData);
  VKFUNDEFINE(vkCmdUpdateBuffer);
  // VKAPI_ATTR void VKAPI_CALL vkCmdFillBuffer( VkCommandBuffer commandBuffer,
  // VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t
  // data);
  VKFUNDEFINE(vkCmdFillBuffer);
  // VKAPI_ATTR void VKAPI_CALL vkCmdClearColorImage( VkCommandBuffer
  // commandBuffer, VkImage image, VkImageLayout imageLayout, const
  // VkClearColorValue* pColor, uint32_t rangeCount, const
  // VkImageSubresourceRange* pRanges);
  VKFUNDEFINE(vkCmdClearColorImage);
  // VKAPI_ATTR void VKAPI_CALL vkCmdClearDepthStencilImage( VkCommandBuffer
  // commandBuffer, VkImage image, VkImageLayout imageLayout, const
  // VkClearDepthStencilValue* pDepthStencil, uint32_t rangeCount, const
  // VkImageSubresourceRange* pRanges);
  VKFUNDEFINE(vkCmdClearDepthStencilImage);
  // VKAPI_ATTR void VKAPI_CALL vkCmdClearAttachments( VkCommandBuffer
  // commandBuffer, uint32_t attachmentCount, const VkClearAttachment*
  // pAttachments, uint32_t rectCount, const VkClearRect* pRects);
  VKFUNDEFINE(vkCmdClearAttachments);
  // VKAPI_ATTR void VKAPI_CALL vkCmdResolveImage( VkCommandBuffer
  // commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage
  // dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const
  // VkImageResolve* pRegions);
  VKFUNDEFINE(vkCmdResolveImage);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetEvent( VkCommandBuffer commandBuffer,
  // VkEvent event, VkPipelineStageFlags stageMask);
  VKFUNDEFINE(vkCmdSetEvent);
  // VKAPI_ATTR void VKAPI_CALL vkCmdResetEvent( VkCommandBuffer commandBuffer,
  // VkEvent event, VkPipelineStageFlags stageMask);
  VKFUNDEFINE(vkCmdResetEvent);
  // VKAPI_ATTR void VKAPI_CALL vkCmdWaitEvents( VkCommandBuffer commandBuffer,
  // uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags
  // srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t
  // memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t
  // bufferMemoryBarrierCount, const VkBufferMemoryBarrier*
  // pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const
  // VkImageMemoryBarrier* pImageMemoryBarriers);
  VKFUNDEFINE(vkCmdWaitEvents);
  // VKAPI_ATTR void VKAPI_CALL vkCmdPipelineBarrier( VkCommandBuffer
  // commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags
  // dstStageMask, VkDependencyFlags dependencyFlags, uint32_t
  // memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t
  // bufferMemoryBarrierCount, const VkBufferMemoryBarrier*
  // pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const
  // VkImageMemoryBarrier* pImageMemoryBarriers);
  VKFUNDEFINE(vkCmdPipelineBarrier);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBeginQuery( VkCommandBuffer commandBuffer,
  // VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags);
  VKFUNDEFINE(vkCmdBeginQuery);
  // VKAPI_ATTR void VKAPI_CALL vkCmdEndQuery( VkCommandBuffer commandBuffer,
  // VkQueryPool queryPool, uint32_t query);
  VKFUNDEFINE(vkCmdEndQuery);
  // VKAPI_ATTR void VKAPI_CALL vkCmdResetQueryPool( VkCommandBuffer
  // commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t
  // queryCount);
  VKFUNDEFINE(vkCmdResetQueryPool);
  // VKAPI_ATTR void VKAPI_CALL vkCmdWriteTimestamp( VkCommandBuffer
  // commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool
  // queryPool, uint32_t query);
  VKFUNDEFINE(vkCmdWriteTimestamp);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyQueryPoolResults( VkCommandBuffer
  // commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t
  // queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize
  // stride, VkQueryResultFlags flags);
  VKFUNDEFINE(vkCmdCopyQueryPoolResults);
  // VKAPI_ATTR void VKAPI_CALL vkCmdPushConstants( VkCommandBuffer
  // commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags,
  // uint32_t offset, uint32_t size, const void* pValues);
  VKFUNDEFINE(vkCmdPushConstants);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBeginRenderPass( VkCommandBuffer
  // commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin,
  // VkSubpassContents contents);
  VKFUNDEFINE(vkCmdBeginRenderPass);
  // VKAPI_ATTR void VKAPI_CALL vkCmdNextSubpass( VkCommandBuffer commandBuffer,
  // VkSubpassContents contents);
  VKFUNDEFINE(vkCmdNextSubpass);
  // VKAPI_ATTR void VKAPI_CALL vkCmdEndRenderPass( VkCommandBuffer
  // commandBuffer);
  VKFUNDEFINE(vkCmdEndRenderPass);
  // VKAPI_ATTR void VKAPI_CALL vkCmdExecuteCommands( VkCommandBuffer
  // commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer*
  // pCommandBuffers);
  VKFUNDEFINE(vkCmdExecuteCommands);
  // VKAPI_ATTR VkResult VKAPI_CALL vkBindBufferMemory2( VkDevice device,
  // uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos);
  VKFUNDEFINE(vkBindBufferMemory2);
  // VKAPI_ATTR VkResult VKAPI_CALL vkBindImageMemory2( VkDevice device,
  // uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos);
  VKFUNDEFINE(vkBindImageMemory2);
  // VKAPI_ATTR void VKAPI_CALL vkGetDeviceGroupPeerMemoryFeatures( VkDevice
  // device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t
  // remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures);
  VKFUNDEFINE(vkGetDeviceGroupPeerMemoryFeatures);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDeviceMask( VkCommandBuffer
  // commandBuffer, uint32_t deviceMask);
  VKFUNDEFINE(vkCmdSetDeviceMask);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDispatchBase( VkCommandBuffer
  // commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t
  // baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t
  // groupCountZ);
  VKFUNDEFINE(vkCmdDispatchBase);
  // VKAPI_ATTR void VKAPI_CALL vkGetImageMemoryRequirements2( VkDevice device,
  // const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2*
  // pMemoryRequirements);
  VKFUNDEFINE(vkGetImageMemoryRequirements2);
  // VKAPI_ATTR void VKAPI_CALL vkGetBufferMemoryRequirements2( VkDevice device,
  // const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2*
  // pMemoryRequirements);
  VKFUNDEFINE(vkGetBufferMemoryRequirements2);
  // VKAPI_ATTR void VKAPI_CALL vkGetImageSparseMemoryRequirements2( VkDevice
  // device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t*
  // pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2*
  // pSparseMemoryRequirements);
  VKFUNDEFINE(vkGetImageSparseMemoryRequirements2);
  // VKAPI_ATTR void VKAPI_CALL vkTrimCommandPool( VkDevice device,
  // VkCommandPool commandPool, VkCommandPoolTrimFlags flags);
  VKFUNDEFINE(vkTrimCommandPool);
  // VKAPI_ATTR void VKAPI_CALL vkGetDeviceQueue2( VkDevice device, const
  // VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue);
  VKFUNDEFINE(vkGetDeviceQueue2);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateSamplerYcbcrConversion( VkDevice
  // device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion*
  // pYcbcrConversion);
  VKFUNDEFINE(vkCreateSamplerYcbcrConversion);
  // VKAPI_ATTR void VKAPI_CALL vkDestroySamplerYcbcrConversion( VkDevice
  // device, VkSamplerYcbcrConversion ycbcrConversion, const
  // VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroySamplerYcbcrConversion);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorUpdateTemplate( VkDevice
  // device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate*
  // pDescriptorUpdateTemplate);
  VKFUNDEFINE(vkCreateDescriptorUpdateTemplate);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorUpdateTemplate( VkDevice
  // device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const
  // VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyDescriptorUpdateTemplate);
  // VKAPI_ATTR void VKAPI_CALL vkUpdateDescriptorSetWithTemplate( VkDevice
  // device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate
  // descriptorUpdateTemplate, const void* pData);
  VKFUNDEFINE(vkUpdateDescriptorSetWithTemplate);
  // VKAPI_ATTR void VKAPI_CALL vkGetDescriptorSetLayoutSupport( VkDevice
  // device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
  // VkDescriptorSetLayoutSupport* pSupport);
  VKFUNDEFINE(vkGetDescriptorSetLayoutSupport);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirectCount( VkCommandBuffer
  // commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
  // VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
  VKFUNDEFINE(vkCmdDrawIndirectCount);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirectCount( VkCommandBuffer
  // commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
  // VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
  VKFUNDEFINE(vkCmdDrawIndexedIndirectCount);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateRenderPass2( VkDevice device, const
  // VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkRenderPass* pRenderPass);
  VKFUNDEFINE(vkCreateRenderPass2);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBeginRenderPass2( VkCommandBuffer
  // commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, const
  // VkSubpassBeginInfo* pSubpassBeginInfo);
  VKFUNDEFINE(vkCmdBeginRenderPass2);
  // VKAPI_ATTR void VKAPI_CALL vkCmdNextSubpass2( VkCommandBuffer
  // commandBuffer, const VkSubpassBeginInfo* pSubpassBeginInfo, const
  // VkSubpassEndInfo* pSubpassEndInfo);
  VKFUNDEFINE(vkCmdNextSubpass2);
  // VKAPI_ATTR void VKAPI_CALL vkCmdEndRenderPass2( VkCommandBuffer
  // commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo);
  VKFUNDEFINE(vkCmdEndRenderPass2);
  // VKAPI_ATTR void VKAPI_CALL vkResetQueryPool( VkDevice device, VkQueryPool
  // queryPool, uint32_t firstQuery, uint32_t queryCount);
  VKFUNDEFINE(vkResetQueryPool);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreCounterValue( VkDevice device,
  // VkSemaphore semaphore, uint64_t* pValue);
  VKFUNDEFINE(vkGetSemaphoreCounterValue);
  // VKAPI_ATTR VkResult VKAPI_CALL vkWaitSemaphores( VkDevice device, const
  // VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout);
  VKFUNDEFINE(vkWaitSemaphores);
  // VKAPI_ATTR VkResult VKAPI_CALL vkSignalSemaphore( VkDevice device, const
  // VkSemaphoreSignalInfo* pSignalInfo);
  VKFUNDEFINE(vkSignalSemaphore);
  // VKAPI_ATTR VkDeviceAddress VKAPI_CALL vkGetBufferDeviceAddress( VkDevice
  // device, const VkBufferDeviceAddressInfo* pInfo);
  VKFUNDEFINE(vkGetBufferDeviceAddress);
  // VKAPI_ATTR uint64_t VKAPI_CALL vkGetBufferOpaqueCaptureAddress( VkDevice
  // device, const VkBufferDeviceAddressInfo* pInfo);
  VKFUNDEFINE(vkGetBufferOpaqueCaptureAddress);
  // VKAPI_ATTR uint64_t VKAPI_CALL vkGetDeviceMemoryOpaqueCaptureAddress(
  // VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo);
  VKFUNDEFINE(vkGetDeviceMemoryOpaqueCaptureAddress);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreatePrivateDataSlot( VkDevice device,
  // const VkPrivateDataSlotCreateInfo* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkPrivateDataSlot* pPrivateDataSlot);
  VKFUNDEFINE(vkCreatePrivateDataSlot);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyPrivateDataSlot( VkDevice device,
  // VkPrivateDataSlot privateDataSlot, const VkAllocationCallbacks*
  // pAllocator);
  VKFUNDEFINE(vkDestroyPrivateDataSlot);
  // VKAPI_ATTR VkResult VKAPI_CALL vkSetPrivateData( VkDevice device,
  // VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot
  // privateDataSlot, uint64_t data);
  VKFUNDEFINE(vkSetPrivateData);
  // VKAPI_ATTR void VKAPI_CALL vkGetPrivateData( VkDevice device, VkObjectType
  // objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot,
  // uint64_t* pData);
  VKFUNDEFINE(vkGetPrivateData);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetEvent2( VkCommandBuffer commandBuffer,
  // VkEvent event, const VkDependencyInfo* pDependencyInfo);
  VKFUNDEFINE(vkCmdSetEvent2);
  // VKAPI_ATTR void VKAPI_CALL vkCmdResetEvent2( VkCommandBuffer commandBuffer,
  // VkEvent event, VkPipelineStageFlags2 stageMask);
  VKFUNDEFINE(vkCmdResetEvent2);
  // VKAPI_ATTR void VKAPI_CALL vkCmdWaitEvents2( VkCommandBuffer commandBuffer,
  // uint32_t eventCount, const VkEvent* pEvents, const VkDependencyInfo*
  // pDependencyInfos);
  VKFUNDEFINE(vkCmdWaitEvents2);
  // VKAPI_ATTR void VKAPI_CALL vkCmdPipelineBarrier2( VkCommandBuffer
  // commandBuffer, const VkDependencyInfo* pDependencyInfo);
  VKFUNDEFINE(vkCmdPipelineBarrier2);
  // VKAPI_ATTR void VKAPI_CALL vkCmdWriteTimestamp2( VkCommandBuffer
  // commandBuffer, VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t
  // query);
  VKFUNDEFINE(vkCmdWriteTimestamp2);
  // VKAPI_ATTR VkResult VKAPI_CALL vkQueueSubmit2( VkQueue queue, uint32_t
  // submitCount, const VkSubmitInfo2* pSubmits, VkFence fence);
  VKFUNDEFINE(vkQueueSubmit2);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyBuffer2( VkCommandBuffer commandBuffer,
  // const VkCopyBufferInfo2* pCopyBufferInfo);
  VKFUNDEFINE(vkCmdCopyBuffer2);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyImage2( VkCommandBuffer commandBuffer,
  // const VkCopyImageInfo2* pCopyImageInfo);
  VKFUNDEFINE(vkCmdCopyImage2);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyBufferToImage2( VkCommandBuffer
  // commandBuffer, const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo);
  VKFUNDEFINE(vkCmdCopyBufferToImage2);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyImageToBuffer2( VkCommandBuffer
  // commandBuffer, const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo);
  VKFUNDEFINE(vkCmdCopyImageToBuffer2);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBlitImage2( VkCommandBuffer commandBuffer,
  // const VkBlitImageInfo2* pBlitImageInfo);
  VKFUNDEFINE(vkCmdBlitImage2);
  // VKAPI_ATTR void VKAPI_CALL vkCmdResolveImage2( VkCommandBuffer
  // commandBuffer, const VkResolveImageInfo2* pResolveImageInfo);
  VKFUNDEFINE(vkCmdResolveImage2);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBeginRendering( VkCommandBuffer
  // commandBuffer, const VkRenderingInfo* pRenderingInfo);
  VKFUNDEFINE(vkCmdBeginRendering);
  // VKAPI_ATTR void VKAPI_CALL vkCmdEndRendering( VkCommandBuffer
  // commandBuffer);
  VKFUNDEFINE(vkCmdEndRendering);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetCullMode( VkCommandBuffer commandBuffer,
  // VkCullModeFlags cullMode);
  VKFUNDEFINE(vkCmdSetCullMode);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetFrontFace( VkCommandBuffer
  // commandBuffer, VkFrontFace frontFace);
  VKFUNDEFINE(vkCmdSetFrontFace);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetPrimitiveTopology( VkCommandBuffer
  // commandBuffer, VkPrimitiveTopology primitiveTopology);
  VKFUNDEFINE(vkCmdSetPrimitiveTopology);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportWithCount( VkCommandBuffer
  // commandBuffer, uint32_t viewportCount, const VkViewport* pViewports);
  VKFUNDEFINE(vkCmdSetViewportWithCount);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetScissorWithCount( VkCommandBuffer
  // commandBuffer, uint32_t scissorCount, const VkRect2D* pScissors);
  VKFUNDEFINE(vkCmdSetScissorWithCount);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBindVertexBuffers2( VkCommandBuffer
  // commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const
  // VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize*
  // pSizes, const VkDeviceSize* pStrides);
  VKFUNDEFINE(vkCmdBindVertexBuffers2);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthTestEnable( VkCommandBuffer
  // commandBuffer, VkBool32 depthTestEnable);
  VKFUNDEFINE(vkCmdSetDepthTestEnable);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthWriteEnable( VkCommandBuffer
  // commandBuffer, VkBool32 depthWriteEnable);
  VKFUNDEFINE(vkCmdSetDepthWriteEnable);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthCompareOp( VkCommandBuffer
  // commandBuffer, VkCompareOp depthCompareOp);
  VKFUNDEFINE(vkCmdSetDepthCompareOp);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBoundsTestEnable( VkCommandBuffer
  // commandBuffer, VkBool32 depthBoundsTestEnable);
  VKFUNDEFINE(vkCmdSetDepthBoundsTestEnable);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilTestEnable( VkCommandBuffer
  // commandBuffer, VkBool32 stencilTestEnable);
  VKFUNDEFINE(vkCmdSetStencilTestEnable);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilOp( VkCommandBuffer
  // commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp
  // passOp, VkStencilOp depthFailOp, VkCompareOp compareOp);
  VKFUNDEFINE(vkCmdSetStencilOp);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetRasterizerDiscardEnable( VkCommandBuffer
  // commandBuffer, VkBool32 rasterizerDiscardEnable);
  VKFUNDEFINE(vkCmdSetRasterizerDiscardEnable);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBiasEnable( VkCommandBuffer
  // commandBuffer, VkBool32 depthBiasEnable);
  VKFUNDEFINE(vkCmdSetDepthBiasEnable);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetPrimitiveRestartEnable( VkCommandBuffer
  // commandBuffer, VkBool32 primitiveRestartEnable);
  VKFUNDEFINE(vkCmdSetPrimitiveRestartEnable);
  // VKAPI_ATTR void VKAPI_CALL vkGetDeviceBufferMemoryRequirements( VkDevice
  // device, const VkDeviceBufferMemoryRequirements* pInfo,
  // VkMemoryRequirements2* pMemoryRequirements);
  VKFUNDEFINE(vkGetDeviceBufferMemoryRequirements);
  // VKAPI_ATTR void VKAPI_CALL vkGetDeviceImageMemoryRequirements( VkDevice
  // device, const VkDeviceImageMemoryRequirements* pInfo,
  // VkMemoryRequirements2* pMemoryRequirements);
  VKFUNDEFINE(vkGetDeviceImageMemoryRequirements);
  // VKAPI_ATTR void VKAPI_CALL vkGetDeviceImageSparseMemoryRequirements(
  // VkDevice device, const VkDeviceImageMemoryRequirements* pInfo, uint32_t*
  // pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2*
  // pSparseMemoryRequirements);
  VKFUNDEFINE(vkGetDeviceImageSparseMemoryRequirements);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateSwapchainKHR( VkDevice device, const
  // VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkSwapchainKHR* pSwapchain);
  VKFUNDEFINE(vkCreateSwapchainKHR);
  // VKAPI_ATTR void VKAPI_CALL vkDestroySwapchainKHR( VkDevice device,
  // VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroySwapchainKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetSwapchainImagesKHR( VkDevice device,
  // VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount, VkImage*
  // pSwapchainImages);
  VKFUNDEFINE(vkGetSwapchainImagesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkAcquireNextImageKHR( VkDevice device,
  // VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence
  // fence, uint32_t* pImageIndex);
  VKFUNDEFINE(vkAcquireNextImageKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkQueuePresentKHR( VkQueue queue, const
  // VkPresentInfoKHR* pPresentInfo);
  VKFUNDEFINE(vkQueuePresentKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetDeviceGroupPresentCapabilitiesKHR(
  // VkDevice device, VkDeviceGroupPresentCapabilitiesKHR*
  // pDeviceGroupPresentCapabilities);
  VKFUNDEFINE(vkGetDeviceGroupPresentCapabilitiesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetDeviceGroupSurfacePresentModesKHR(
  // VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR*
  // pModes);
  VKFUNDEFINE(vkGetDeviceGroupSurfacePresentModesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkAcquireNextImage2KHR( VkDevice device,
  // const VkAcquireNextImageInfoKHR* pAcquireInfo, uint32_t* pImageIndex);
  VKFUNDEFINE(vkAcquireNextImage2KHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateSharedSwapchainsKHR( VkDevice
  // device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR*
  // pCreateInfos, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR*
  // pSwapchains);
  VKFUNDEFINE(vkCreateSharedSwapchainsKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateVideoSessionKHR( VkDevice device,
  // const VkVideoSessionCreateInfoKHR* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkVideoSessionKHR* pVideoSession);
  VKFUNDEFINE(vkCreateVideoSessionKHR);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyVideoSessionKHR( VkDevice device,
  // VkVideoSessionKHR videoSession, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyVideoSessionKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetVideoSessionMemoryRequirementsKHR(
  // VkDevice device, VkVideoSessionKHR videoSession, uint32_t*
  // pMemoryRequirementsCount, VkVideoSessionMemoryRequirementsKHR*
  // pMemoryRequirements);
  VKFUNDEFINE(vkGetVideoSessionMemoryRequirementsKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkBindVideoSessionMemoryKHR( VkDevice
  // device, VkVideoSessionKHR videoSession, uint32_t
  // bindSessionMemoryInfoCount, const VkBindVideoSessionMemoryInfoKHR*
  // pBindSessionMemoryInfos);
  VKFUNDEFINE(vkBindVideoSessionMemoryKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateVideoSessionParametersKHR( VkDevice
  // device, const VkVideoSessionParametersCreateInfoKHR* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkVideoSessionParametersKHR*
  // pVideoSessionParameters);
  VKFUNDEFINE(vkCreateVideoSessionParametersKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkUpdateVideoSessionParametersKHR( VkDevice
  // device, VkVideoSessionParametersKHR videoSessionParameters, const
  // VkVideoSessionParametersUpdateInfoKHR* pUpdateInfo);
  VKFUNDEFINE(vkUpdateVideoSessionParametersKHR);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyVideoSessionParametersKHR( VkDevice
  // device, VkVideoSessionParametersKHR videoSessionParameters, const
  // VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyVideoSessionParametersKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBeginVideoCodingKHR( VkCommandBuffer
  // commandBuffer, const VkVideoBeginCodingInfoKHR* pBeginInfo);
  VKFUNDEFINE(vkCmdBeginVideoCodingKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdEndVideoCodingKHR( VkCommandBuffer
  // commandBuffer, const VkVideoEndCodingInfoKHR* pEndCodingInfo);
  VKFUNDEFINE(vkCmdEndVideoCodingKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdControlVideoCodingKHR( VkCommandBuffer
  // commandBuffer, const VkVideoCodingControlInfoKHR* pCodingControlInfo);
  VKFUNDEFINE(vkCmdControlVideoCodingKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDecodeVideoKHR( VkCommandBuffer
  // commandBuffer, const VkVideoDecodeInfoKHR* pDecodeInfo);
  VKFUNDEFINE(vkCmdDecodeVideoKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBeginRenderingKHR( VkCommandBuffer
  // commandBuffer, const VkRenderingInfo* pRenderingInfo);
  VKFUNDEFINE(vkCmdBeginRenderingKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdEndRenderingKHR( VkCommandBuffer
  // commandBuffer);
  VKFUNDEFINE(vkCmdEndRenderingKHR);
  // VKAPI_ATTR void VKAPI_CALL vkGetDeviceGroupPeerMemoryFeaturesKHR( VkDevice
  // device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t
  // remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures);
  VKFUNDEFINE(vkGetDeviceGroupPeerMemoryFeaturesKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDeviceMaskKHR( VkCommandBuffer
  // commandBuffer, uint32_t deviceMask);
  VKFUNDEFINE(vkCmdSetDeviceMaskKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDispatchBaseKHR( VkCommandBuffer
  // commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t
  // baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t
  // groupCountZ);
  VKFUNDEFINE(vkCmdDispatchBaseKHR);
  // VKAPI_ATTR void VKAPI_CALL vkTrimCommandPoolKHR( VkDevice device,
  // VkCommandPool commandPool, VkCommandPoolTrimFlags flags);
  VKFUNDEFINE(vkTrimCommandPoolKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryFdKHR( VkDevice device, const
  // VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd);
  VKFUNDEFINE(vkGetMemoryFdKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryFdPropertiesKHR( VkDevice device,
  // VkExternalMemoryHandleTypeFlagBits handleType, int fd,
  // VkMemoryFdPropertiesKHR* pMemoryFdProperties);
  VKFUNDEFINE(vkGetMemoryFdPropertiesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkImportSemaphoreFdKHR( VkDevice device,
  // const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo);
  VKFUNDEFINE(vkImportSemaphoreFdKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreFdKHR( VkDevice device, const
  // VkSemaphoreGetFdInfoKHR* pGetFdInfo, int* pFd);
  VKFUNDEFINE(vkGetSemaphoreFdKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdPushDescriptorSetKHR( VkCommandBuffer
  // commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout
  // layout, uint32_t set, uint32_t descriptorWriteCount, const
  // VkWriteDescriptorSet* pDescriptorWrites);
  VKFUNDEFINE(vkCmdPushDescriptorSetKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdPushDescriptorSetWithTemplateKHR(
  // VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate
  // descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const
  // void* pData);
  VKFUNDEFINE(vkCmdPushDescriptorSetWithTemplateKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorUpdateTemplateKHR(
  // VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo,
  // const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate*
  // pDescriptorUpdateTemplate);
  VKFUNDEFINE(vkCreateDescriptorUpdateTemplateKHR);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorUpdateTemplateKHR( VkDevice
  // device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const
  // VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyDescriptorUpdateTemplateKHR);
  // VKAPI_ATTR void VKAPI_CALL vkUpdateDescriptorSetWithTemplateKHR( VkDevice
  // device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate
  // descriptorUpdateTemplate, const void* pData);
  VKFUNDEFINE(vkUpdateDescriptorSetWithTemplateKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateRenderPass2KHR( VkDevice device,
  // const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkRenderPass* pRenderPass);
  VKFUNDEFINE(vkCreateRenderPass2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBeginRenderPass2KHR( VkCommandBuffer
  // commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, const
  // VkSubpassBeginInfo* pSubpassBeginInfo);
  VKFUNDEFINE(vkCmdBeginRenderPass2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdNextSubpass2KHR( VkCommandBuffer
  // commandBuffer, const VkSubpassBeginInfo* pSubpassBeginInfo, const
  // VkSubpassEndInfo* pSubpassEndInfo);
  VKFUNDEFINE(vkCmdNextSubpass2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdEndRenderPass2KHR( VkCommandBuffer
  // commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo);
  VKFUNDEFINE(vkCmdEndRenderPass2KHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetSwapchainStatusKHR( VkDevice device,
  // VkSwapchainKHR swapchain);
  VKFUNDEFINE(vkGetSwapchainStatusKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkImportFenceFdKHR( VkDevice device, const
  // VkImportFenceFdInfoKHR* pImportFenceFdInfo);
  VKFUNDEFINE(vkImportFenceFdKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetFenceFdKHR( VkDevice device, const
  // VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd);
  VKFUNDEFINE(vkGetFenceFdKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkAcquireProfilingLockKHR( VkDevice device,
  // const VkAcquireProfilingLockInfoKHR* pInfo);
  VKFUNDEFINE(vkAcquireProfilingLockKHR);
  // VKAPI_ATTR void VKAPI_CALL vkReleaseProfilingLockKHR( VkDevice device);
  VKFUNDEFINE(vkReleaseProfilingLockKHR);
  // VKAPI_ATTR void VKAPI_CALL vkGetImageMemoryRequirements2KHR( VkDevice
  // device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2*
  // pMemoryRequirements);
  VKFUNDEFINE(vkGetImageMemoryRequirements2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkGetBufferMemoryRequirements2KHR( VkDevice
  // device, const VkBufferMemoryRequirementsInfo2* pInfo,
  // VkMemoryRequirements2* pMemoryRequirements);
  VKFUNDEFINE(vkGetBufferMemoryRequirements2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkGetImageSparseMemoryRequirements2KHR( VkDevice
  // device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t*
  // pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2*
  // pSparseMemoryRequirements);
  VKFUNDEFINE(vkGetImageSparseMemoryRequirements2KHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateSamplerYcbcrConversionKHR( VkDevice
  // device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion*
  // pYcbcrConversion);
  VKFUNDEFINE(vkCreateSamplerYcbcrConversionKHR);
  // VKAPI_ATTR void VKAPI_CALL vkDestroySamplerYcbcrConversionKHR( VkDevice
  // device, VkSamplerYcbcrConversion ycbcrConversion, const
  // VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroySamplerYcbcrConversionKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkBindBufferMemory2KHR( VkDevice device,
  // uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos);
  VKFUNDEFINE(vkBindBufferMemory2KHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkBindImageMemory2KHR( VkDevice device,
  // uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos);
  VKFUNDEFINE(vkBindImageMemory2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkGetDescriptorSetLayoutSupportKHR( VkDevice
  // device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
  // VkDescriptorSetLayoutSupport* pSupport);
  VKFUNDEFINE(vkGetDescriptorSetLayoutSupportKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirectCountKHR( VkCommandBuffer
  // commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
  // VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
  VKFUNDEFINE(vkCmdDrawIndirectCountKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirectCountKHR(
  // VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
  // VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t
  // maxDrawCount, uint32_t stride);
  VKFUNDEFINE(vkCmdDrawIndexedIndirectCountKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreCounterValueKHR( VkDevice
  // device, VkSemaphore semaphore, uint64_t* pValue);
  VKFUNDEFINE(vkGetSemaphoreCounterValueKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkWaitSemaphoresKHR( VkDevice device, const
  // VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout);
  VKFUNDEFINE(vkWaitSemaphoresKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkSignalSemaphoreKHR( VkDevice device, const
  // VkSemaphoreSignalInfo* pSignalInfo);
  VKFUNDEFINE(vkSignalSemaphoreKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetFragmentShadingRateKHR( VkCommandBuffer
  // commandBuffer, const VkExtent2D* pFragmentSize, const
  // VkFragmentShadingRateCombinerOpKHR combinerOps[2]);
  VKFUNDEFINE(vkCmdSetFragmentShadingRateKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetRenderingAttachmentLocationsKHR(
  // VkCommandBuffer commandBuffer, const VkRenderingAttachmentLocationInfoKHR*
  // pLocationInfo);
  VKFUNDEFINE(vkCmdSetRenderingAttachmentLocationsKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetRenderingInputAttachmentIndicesKHR(
  // VkCommandBuffer commandBuffer, const
  // VkRenderingInputAttachmentIndexInfoKHR* pLocationInfo);
  VKFUNDEFINE(vkCmdSetRenderingInputAttachmentIndicesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkWaitForPresentKHR( VkDevice device,
  // VkSwapchainKHR swapchain, uint64_t presentId, uint64_t timeout);
  VKFUNDEFINE(vkWaitForPresentKHR);
  // VKAPI_ATTR VkDeviceAddress VKAPI_CALL vkGetBufferDeviceAddressKHR( VkDevice
  // device, const VkBufferDeviceAddressInfo* pInfo);
  VKFUNDEFINE(vkGetBufferDeviceAddressKHR);
  // VKAPI_ATTR uint64_t VKAPI_CALL vkGetBufferOpaqueCaptureAddressKHR( VkDevice
  // device, const VkBufferDeviceAddressInfo* pInfo);
  VKFUNDEFINE(vkGetBufferOpaqueCaptureAddressKHR);
  // VKAPI_ATTR uint64_t VKAPI_CALL vkGetDeviceMemoryOpaqueCaptureAddressKHR(
  // VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo);
  VKFUNDEFINE(vkGetDeviceMemoryOpaqueCaptureAddressKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateDeferredOperationKHR( VkDevice
  // device, const VkAllocationCallbacks* pAllocator, VkDeferredOperationKHR*
  // pDeferredOperation);
  VKFUNDEFINE(vkCreateDeferredOperationKHR);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyDeferredOperationKHR( VkDevice device,
  // VkDeferredOperationKHR operation, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyDeferredOperationKHR);
  // VKAPI_ATTR uint32_t VKAPI_CALL vkGetDeferredOperationMaxConcurrencyKHR(
  // VkDevice device, VkDeferredOperationKHR operation);
  VKFUNDEFINE(vkGetDeferredOperationMaxConcurrencyKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetDeferredOperationResultKHR( VkDevice
  // device, VkDeferredOperationKHR operation);
  VKFUNDEFINE(vkGetDeferredOperationResultKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkDeferredOperationJoinKHR( VkDevice device,
  // VkDeferredOperationKHR operation);
  VKFUNDEFINE(vkDeferredOperationJoinKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPipelineExecutablePropertiesKHR(
  // VkDevice device, const VkPipelineInfoKHR* pPipelineInfo, uint32_t*
  // pExecutableCount, VkPipelineExecutablePropertiesKHR* pProperties);
  VKFUNDEFINE(vkGetPipelineExecutablePropertiesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPipelineExecutableStatisticsKHR(
  // VkDevice device, const VkPipelineExecutableInfoKHR* pExecutableInfo,
  // uint32_t* pStatisticCount, VkPipelineExecutableStatisticKHR* pStatistics);
  VKFUNDEFINE(vkGetPipelineExecutableStatisticsKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL
  // vkGetPipelineExecutableInternalRepresentationsKHR( VkDevice device, const
  // VkPipelineExecutableInfoKHR* pExecutableInfo, uint32_t*
  // pInternalRepresentationCount,
  // VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations);
  VKFUNDEFINE(vkGetPipelineExecutableInternalRepresentationsKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkMapMemory2KHR( VkDevice device, const
  // VkMemoryMapInfoKHR* pMemoryMapInfo, void** ppData);
  VKFUNDEFINE(vkMapMemory2KHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkUnmapMemory2KHR( VkDevice device, const
  // VkMemoryUnmapInfoKHR* pMemoryUnmapInfo);
  VKFUNDEFINE(vkUnmapMemory2KHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetEncodedVideoSessionParametersKHR(
  // VkDevice device, const VkVideoEncodeSessionParametersGetInfoKHR*
  // pVideoSessionParametersInfo, VkVideoEncodeSessionParametersFeedbackInfoKHR*
  // pFeedbackInfo, size_t* pDataSize, void* pData);
  VKFUNDEFINE(vkGetEncodedVideoSessionParametersKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdEncodeVideoKHR( VkCommandBuffer
  // commandBuffer, const VkVideoEncodeInfoKHR* pEncodeInfo);
  VKFUNDEFINE(vkCmdEncodeVideoKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetEvent2KHR( VkCommandBuffer
  // commandBuffer, VkEvent event, const VkDependencyInfo* pDependencyInfo);
  VKFUNDEFINE(vkCmdSetEvent2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdResetEvent2KHR( VkCommandBuffer
  // commandBuffer, VkEvent event, VkPipelineStageFlags2 stageMask);
  VKFUNDEFINE(vkCmdResetEvent2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdWaitEvents2KHR( VkCommandBuffer
  // commandBuffer, uint32_t eventCount, const VkEvent* pEvents, const
  // VkDependencyInfo* pDependencyInfos);
  VKFUNDEFINE(vkCmdWaitEvents2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdPipelineBarrier2KHR( VkCommandBuffer
  // commandBuffer, const VkDependencyInfo* pDependencyInfo);
  VKFUNDEFINE(vkCmdPipelineBarrier2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdWriteTimestamp2KHR( VkCommandBuffer
  // commandBuffer, VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t
  // query);
  VKFUNDEFINE(vkCmdWriteTimestamp2KHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkQueueSubmit2KHR( VkQueue queue, uint32_t
  // submitCount, const VkSubmitInfo2* pSubmits, VkFence fence);
  VKFUNDEFINE(vkQueueSubmit2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdWriteBufferMarker2AMD( VkCommandBuffer
  // commandBuffer, VkPipelineStageFlags2 stage, VkBuffer dstBuffer,
  // VkDeviceSize dstOffset, uint32_t marker);
  VKFUNDEFINE(vkCmdWriteBufferMarker2AMD);
  // VKAPI_ATTR void VKAPI_CALL vkGetQueueCheckpointData2NV( VkQueue queue,
  // uint32_t* pCheckpointDataCount, VkCheckpointData2NV* pCheckpointData);
  VKFUNDEFINE(vkGetQueueCheckpointData2NV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyBuffer2KHR( VkCommandBuffer
  // commandBuffer, const VkCopyBufferInfo2* pCopyBufferInfo);
  VKFUNDEFINE(vkCmdCopyBuffer2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyImage2KHR( VkCommandBuffer
  // commandBuffer, const VkCopyImageInfo2* pCopyImageInfo);
  VKFUNDEFINE(vkCmdCopyImage2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyBufferToImage2KHR( VkCommandBuffer
  // commandBuffer, const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo);
  VKFUNDEFINE(vkCmdCopyBufferToImage2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyImageToBuffer2KHR( VkCommandBuffer
  // commandBuffer, const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo);
  VKFUNDEFINE(vkCmdCopyImageToBuffer2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBlitImage2KHR( VkCommandBuffer
  // commandBuffer, const VkBlitImageInfo2* pBlitImageInfo);
  VKFUNDEFINE(vkCmdBlitImage2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdResolveImage2KHR( VkCommandBuffer
  // commandBuffer, const VkResolveImageInfo2* pResolveImageInfo);
  VKFUNDEFINE(vkCmdResolveImage2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdTraceRaysIndirect2KHR( VkCommandBuffer
  // commandBuffer, VkDeviceAddress indirectDeviceAddress);
  VKFUNDEFINE(vkCmdTraceRaysIndirect2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkGetDeviceBufferMemoryRequirementsKHR( VkDevice
  // device, const VkDeviceBufferMemoryRequirements* pInfo,
  // VkMemoryRequirements2* pMemoryRequirements);
  VKFUNDEFINE(vkGetDeviceBufferMemoryRequirementsKHR);
  // VKAPI_ATTR void VKAPI_CALL vkGetDeviceImageMemoryRequirementsKHR( VkDevice
  // device, const VkDeviceImageMemoryRequirements* pInfo,
  // VkMemoryRequirements2* pMemoryRequirements);
  VKFUNDEFINE(vkGetDeviceImageMemoryRequirementsKHR);
  // VKAPI_ATTR void VKAPI_CALL vkGetDeviceImageSparseMemoryRequirementsKHR(
  // VkDevice device, const VkDeviceImageMemoryRequirements* pInfo, uint32_t*
  // pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2*
  // pSparseMemoryRequirements);
  VKFUNDEFINE(vkGetDeviceImageSparseMemoryRequirementsKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBindIndexBuffer2KHR( VkCommandBuffer
  // commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkDeviceSize size,
  // VkIndexType indexType);
  VKFUNDEFINE(vkCmdBindIndexBuffer2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkGetRenderingAreaGranularityKHR( VkDevice
  // device, const VkRenderingAreaInfoKHR* pRenderingAreaInfo, VkExtent2D*
  // pGranularity);
  VKFUNDEFINE(vkGetRenderingAreaGranularityKHR);
  // VKAPI_ATTR void VKAPI_CALL vkGetDeviceImageSubresourceLayoutKHR( VkDevice
  // device, const VkDeviceImageSubresourceInfoKHR* pInfo,
  // VkSubresourceLayout2KHR* pLayout);
  VKFUNDEFINE(vkGetDeviceImageSubresourceLayoutKHR);
  // VKAPI_ATTR void VKAPI_CALL vkGetImageSubresourceLayout2KHR( VkDevice
  // device, VkImage image, const VkImageSubresource2KHR* pSubresource,
  // VkSubresourceLayout2KHR* pLayout);
  VKFUNDEFINE(vkGetImageSubresourceLayout2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetLineStippleKHR( VkCommandBuffer
  // commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern);
  VKFUNDEFINE(vkCmdSetLineStippleKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetCalibratedTimestampsKHR( VkDevice
  // device, uint32_t timestampCount, const VkCalibratedTimestampInfoKHR*
  // pTimestampInfos, uint64_t* pTimestamps, uint64_t* pMaxDeviation);
  VKFUNDEFINE(vkGetCalibratedTimestampsKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBindDescriptorSets2KHR( VkCommandBuffer
  // commandBuffer, const VkBindDescriptorSetsInfoKHR* pBindDescriptorSetsInfo);
  VKFUNDEFINE(vkCmdBindDescriptorSets2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdPushConstants2KHR( VkCommandBuffer
  // commandBuffer, const VkPushConstantsInfoKHR* pPushConstantsInfo);
  VKFUNDEFINE(vkCmdPushConstants2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdPushDescriptorSet2KHR( VkCommandBuffer
  // commandBuffer, const VkPushDescriptorSetInfoKHR* pPushDescriptorSetInfo);
  VKFUNDEFINE(vkCmdPushDescriptorSet2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdPushDescriptorSetWithTemplate2KHR(
  // VkCommandBuffer commandBuffer, const
  // VkPushDescriptorSetWithTemplateInfoKHR*
  // pPushDescriptorSetWithTemplateInfo);
  VKFUNDEFINE(vkCmdPushDescriptorSetWithTemplate2KHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDescriptorBufferOffsets2EXT(
  // VkCommandBuffer commandBuffer, const VkSetDescriptorBufferOffsetsInfoEXT*
  // pSetDescriptorBufferOffsetsInfo);
  VKFUNDEFINE(vkCmdSetDescriptorBufferOffsets2EXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBindDescriptorBufferEmbeddedSamplers2EXT(
  // VkCommandBuffer commandBuffer, const
  // VkBindDescriptorBufferEmbeddedSamplersInfoEXT*
  // pBindDescriptorBufferEmbeddedSamplersInfo);
  VKFUNDEFINE(vkCmdBindDescriptorBufferEmbeddedSamplers2EXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkDebugMarkerSetObjectTagEXT( VkDevice
  // device, const VkDebugMarkerObjectTagInfoEXT* pTagInfo);
  VKFUNDEFINE(vkDebugMarkerSetObjectTagEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkDebugMarkerSetObjectNameEXT( VkDevice
  // device, const VkDebugMarkerObjectNameInfoEXT* pNameInfo);
  VKFUNDEFINE(vkDebugMarkerSetObjectNameEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDebugMarkerBeginEXT( VkCommandBuffer
  // commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo);
  VKFUNDEFINE(vkCmdDebugMarkerBeginEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDebugMarkerEndEXT( VkCommandBuffer
  // commandBuffer);
  VKFUNDEFINE(vkCmdDebugMarkerEndEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDebugMarkerInsertEXT( VkCommandBuffer
  // commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo);
  VKFUNDEFINE(vkCmdDebugMarkerInsertEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBindTransformFeedbackBuffersEXT(
  // VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t
  // bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const
  // VkDeviceSize* pSizes);
  VKFUNDEFINE(vkCmdBindTransformFeedbackBuffersEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBeginTransformFeedbackEXT( VkCommandBuffer
  // commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount,
  // const VkBuffer* pCounterBuffers, const VkDeviceSize*
  // pCounterBufferOffsets);
  VKFUNDEFINE(vkCmdBeginTransformFeedbackEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdEndTransformFeedbackEXT( VkCommandBuffer
  // commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount,
  // const VkBuffer* pCounterBuffers, const VkDeviceSize*
  // pCounterBufferOffsets);
  VKFUNDEFINE(vkCmdEndTransformFeedbackEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBeginQueryIndexedEXT( VkCommandBuffer
  // commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags
  // flags, uint32_t index);
  VKFUNDEFINE(vkCmdBeginQueryIndexedEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdEndQueryIndexedEXT( VkCommandBuffer
  // commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index);
  VKFUNDEFINE(vkCmdEndQueryIndexedEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirectByteCountEXT( VkCommandBuffer
  // commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer
  // counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset,
  // uint32_t vertexStride);
  VKFUNDEFINE(vkCmdDrawIndirectByteCountEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateCuModuleNVX( VkDevice device, const
  // VkCuModuleCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkCuModuleNVX* pModule);
  VKFUNDEFINE(vkCreateCuModuleNVX);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateCuFunctionNVX( VkDevice device,
  // const VkCuFunctionCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkCuFunctionNVX* pFunction);
  VKFUNDEFINE(vkCreateCuFunctionNVX);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyCuModuleNVX( VkDevice device,
  // VkCuModuleNVX module, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyCuModuleNVX);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyCuFunctionNVX( VkDevice device,
  // VkCuFunctionNVX function, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyCuFunctionNVX);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCuLaunchKernelNVX( VkCommandBuffer
  // commandBuffer, const VkCuLaunchInfoNVX* pLaunchInfo);
  VKFUNDEFINE(vkCmdCuLaunchKernelNVX);
  // VKAPI_ATTR uint32_t VKAPI_CALL vkGetImageViewHandleNVX( VkDevice device,
  // const VkImageViewHandleInfoNVX* pInfo);
  VKFUNDEFINE(vkGetImageViewHandleNVX);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetImageViewAddressNVX( VkDevice device,
  // VkImageView imageView, VkImageViewAddressPropertiesNVX* pProperties);
  VKFUNDEFINE(vkGetImageViewAddressNVX);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirectCountAMD( VkCommandBuffer
  // commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
  // VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
  VKFUNDEFINE(vkCmdDrawIndirectCountAMD);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirectCountAMD(
  // VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
  // VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t
  // maxDrawCount, uint32_t stride);
  VKFUNDEFINE(vkCmdDrawIndexedIndirectCountAMD);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetShaderInfoAMD( VkDevice device,
  // VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD
  // infoType, size_t* pInfoSize, void* pInfo);
  VKFUNDEFINE(vkGetShaderInfoAMD);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBeginConditionalRenderingEXT(
  // VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT*
  // pConditionalRenderingBegin);
  VKFUNDEFINE(vkCmdBeginConditionalRenderingEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdEndConditionalRenderingEXT( VkCommandBuffer
  // commandBuffer);
  VKFUNDEFINE(vkCmdEndConditionalRenderingEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportWScalingNV( VkCommandBuffer
  // commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const
  // VkViewportWScalingNV* pViewportWScalings);
  VKFUNDEFINE(vkCmdSetViewportWScalingNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkDisplayPowerControlEXT( VkDevice device,
  // VkDisplayKHR display, const VkDisplayPowerInfoEXT* pDisplayPowerInfo);
  VKFUNDEFINE(vkDisplayPowerControlEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkRegisterDeviceEventEXT( VkDevice device,
  // const VkDeviceEventInfoEXT* pDeviceEventInfo, const VkAllocationCallbacks*
  // pAllocator, VkFence* pFence);
  VKFUNDEFINE(vkRegisterDeviceEventEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkRegisterDisplayEventEXT( VkDevice device,
  // VkDisplayKHR display, const VkDisplayEventInfoEXT* pDisplayEventInfo, const
  // VkAllocationCallbacks* pAllocator, VkFence* pFence);
  VKFUNDEFINE(vkRegisterDisplayEventEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetSwapchainCounterEXT( VkDevice device,
  // VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t*
  // pCounterValue);
  VKFUNDEFINE(vkGetSwapchainCounterEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetRefreshCycleDurationGOOGLE( VkDevice
  // device, VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE*
  // pDisplayTimingProperties);
  VKFUNDEFINE(vkGetRefreshCycleDurationGOOGLE);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPastPresentationTimingGOOGLE( VkDevice
  // device, VkSwapchainKHR swapchain, uint32_t* pPresentationTimingCount,
  // VkPastPresentationTimingGOOGLE* pPresentationTimings);
  VKFUNDEFINE(vkGetPastPresentationTimingGOOGLE);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDiscardRectangleEXT( VkCommandBuffer
  // commandBuffer, uint32_t firstDiscardRectangle, uint32_t
  // discardRectangleCount, const VkRect2D* pDiscardRectangles);
  VKFUNDEFINE(vkCmdSetDiscardRectangleEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDiscardRectangleEnableEXT(
  // VkCommandBuffer commandBuffer, VkBool32 discardRectangleEnable);
  VKFUNDEFINE(vkCmdSetDiscardRectangleEnableEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDiscardRectangleModeEXT( VkCommandBuffer
  // commandBuffer, VkDiscardRectangleModeEXT discardRectangleMode);
  VKFUNDEFINE(vkCmdSetDiscardRectangleModeEXT);
  // VKAPI_ATTR void VKAPI_CALL vkSetHdrMetadataEXT( VkDevice device, uint32_t
  // swapchainCount, const VkSwapchainKHR* pSwapchains, const VkHdrMetadataEXT*
  // pMetadata);
  VKFUNDEFINE(vkSetHdrMetadataEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkSetDebugUtilsObjectNameEXT( VkDevice
  // device, const VkDebugUtilsObjectNameInfoEXT* pNameInfo);
  VKFUNDEFINE(vkSetDebugUtilsObjectNameEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkSetDebugUtilsObjectTagEXT( VkDevice
  // device, const VkDebugUtilsObjectTagInfoEXT* pTagInfo);
  VKFUNDEFINE(vkSetDebugUtilsObjectTagEXT);
  // VKAPI_ATTR void VKAPI_CALL vkQueueBeginDebugUtilsLabelEXT( VkQueue queue,
  // const VkDebugUtilsLabelEXT* pLabelInfo);
  VKFUNDEFINE(vkQueueBeginDebugUtilsLabelEXT);
  // VKAPI_ATTR void VKAPI_CALL vkQueueEndDebugUtilsLabelEXT( VkQueue queue);
  VKFUNDEFINE(vkQueueEndDebugUtilsLabelEXT);
  // VKAPI_ATTR void VKAPI_CALL vkQueueInsertDebugUtilsLabelEXT( VkQueue queue,
  // const VkDebugUtilsLabelEXT* pLabelInfo);
  VKFUNDEFINE(vkQueueInsertDebugUtilsLabelEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBeginDebugUtilsLabelEXT( VkCommandBuffer
  // commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo);
  VKFUNDEFINE(vkCmdBeginDebugUtilsLabelEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdEndDebugUtilsLabelEXT( VkCommandBuffer
  // commandBuffer);
  VKFUNDEFINE(vkCmdEndDebugUtilsLabelEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdInsertDebugUtilsLabelEXT( VkCommandBuffer
  // commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo);
  VKFUNDEFINE(vkCmdInsertDebugUtilsLabelEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetSampleLocationsEXT( VkCommandBuffer
  // commandBuffer, const VkSampleLocationsInfoEXT* pSampleLocationsInfo);
  VKFUNDEFINE(vkCmdSetSampleLocationsEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetImageDrmFormatModifierPropertiesEXT(
  // VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT*
  // pProperties);
  VKFUNDEFINE(vkGetImageDrmFormatModifierPropertiesEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateValidationCacheEXT( VkDevice device,
  // const VkValidationCacheCreateInfoEXT* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkValidationCacheEXT* pValidationCache);
  VKFUNDEFINE(vkCreateValidationCacheEXT);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyValidationCacheEXT( VkDevice device,
  // VkValidationCacheEXT validationCache, const VkAllocationCallbacks*
  // pAllocator);
  VKFUNDEFINE(vkDestroyValidationCacheEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkMergeValidationCachesEXT( VkDevice device,
  // VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const
  // VkValidationCacheEXT* pSrcCaches);
  VKFUNDEFINE(vkMergeValidationCachesEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetValidationCacheDataEXT( VkDevice
  // device, VkValidationCacheEXT validationCache, size_t* pDataSize, void*
  // pData);
  VKFUNDEFINE(vkGetValidationCacheDataEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBindShadingRateImageNV( VkCommandBuffer
  // commandBuffer, VkImageView imageView, VkImageLayout imageLayout);
  VKFUNDEFINE(vkCmdBindShadingRateImageNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportShadingRatePaletteNV(
  // VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t
  // viewportCount, const VkShadingRatePaletteNV* pShadingRatePalettes);
  VKFUNDEFINE(vkCmdSetViewportShadingRatePaletteNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetCoarseSampleOrderNV( VkCommandBuffer
  // commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t
  // customSampleOrderCount, const VkCoarseSampleOrderCustomNV*
  // pCustomSampleOrders);
  VKFUNDEFINE(vkCmdSetCoarseSampleOrderNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateAccelerationStructureNV( VkDevice
  // device, const VkAccelerationStructureCreateInfoNV* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkAccelerationStructureNV*
  // pAccelerationStructure);
  VKFUNDEFINE(vkCreateAccelerationStructureNV);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyAccelerationStructureNV( VkDevice
  // device, VkAccelerationStructureNV accelerationStructure, const
  // VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyAccelerationStructureNV);
  // VKAPI_ATTR void VKAPI_CALL vkGetAccelerationStructureMemoryRequirementsNV(
  // VkDevice device, const VkAccelerationStructureMemoryRequirementsInfoNV*
  // pInfo, VkMemoryRequirements2KHR* pMemoryRequirements);
  VKFUNDEFINE(vkGetAccelerationStructureMemoryRequirementsNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkBindAccelerationStructureMemoryNV(
  // VkDevice device, uint32_t bindInfoCount, const
  // VkBindAccelerationStructureMemoryInfoNV* pBindInfos);
  VKFUNDEFINE(vkBindAccelerationStructureMemoryNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBuildAccelerationStructureNV(
  // VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV* pInfo,
  // VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update,
  // VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer
  // scratch, VkDeviceSize scratchOffset);
  VKFUNDEFINE(vkCmdBuildAccelerationStructureNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyAccelerationStructureNV(
  // VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst,
  // VkAccelerationStructureNV src, VkCopyAccelerationStructureModeKHR mode);
  VKFUNDEFINE(vkCmdCopyAccelerationStructureNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdTraceRaysNV( VkCommandBuffer commandBuffer,
  // VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize
  // raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer,
  // VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride,
  // VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset,
  // VkDeviceSize hitShaderBindingStride, VkBuffer
  // callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset,
  // VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height,
  // uint32_t depth);
  VKFUNDEFINE(vkCmdTraceRaysNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateRayTracingPipelinesNV( VkDevice
  // device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const
  // VkRayTracingPipelineCreateInfoNV* pCreateInfos, const
  // VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
  VKFUNDEFINE(vkCreateRayTracingPipelinesNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetRayTracingShaderGroupHandlesKHR(
  // VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t
  // groupCount, size_t dataSize, void* pData);
  VKFUNDEFINE(vkGetRayTracingShaderGroupHandlesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetRayTracingShaderGroupHandlesNV(
  // VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t
  // groupCount, size_t dataSize, void* pData);
  VKFUNDEFINE(vkGetRayTracingShaderGroupHandlesNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetAccelerationStructureHandleNV( VkDevice
  // device, VkAccelerationStructureNV accelerationStructure, size_t dataSize,
  // void* pData);
  VKFUNDEFINE(vkGetAccelerationStructureHandleNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdWriteAccelerationStructuresPropertiesNV(
  // VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const
  // VkAccelerationStructureNV* pAccelerationStructures, VkQueryType queryType,
  // VkQueryPool queryPool, uint32_t firstQuery);
  VKFUNDEFINE(vkCmdWriteAccelerationStructuresPropertiesNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCompileDeferredNV( VkDevice device,
  // VkPipeline pipeline, uint32_t shader);
  VKFUNDEFINE(vkCompileDeferredNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryHostPointerPropertiesEXT(
  // VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void*
  // pHostPointer, VkMemoryHostPointerPropertiesEXT*
  // pMemoryHostPointerProperties);
  VKFUNDEFINE(vkGetMemoryHostPointerPropertiesEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdWriteBufferMarkerAMD( VkCommandBuffer
  // commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer,
  // VkDeviceSize dstOffset, uint32_t marker);
  VKFUNDEFINE(vkCmdWriteBufferMarkerAMD);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetCalibratedTimestampsEXT( VkDevice
  // device, uint32_t timestampCount, const VkCalibratedTimestampInfoKHR*
  // pTimestampInfos, uint64_t* pTimestamps, uint64_t* pMaxDeviation);
  VKFUNDEFINE(vkGetCalibratedTimestampsEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksNV( VkCommandBuffer
  // commandBuffer, uint32_t taskCount, uint32_t firstTask);
  VKFUNDEFINE(vkCmdDrawMeshTasksNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksIndirectNV( VkCommandBuffer
  // commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount,
  // uint32_t stride);
  VKFUNDEFINE(vkCmdDrawMeshTasksIndirectNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksIndirectCountNV(
  // VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
  // VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t
  // maxDrawCount, uint32_t stride);
  VKFUNDEFINE(vkCmdDrawMeshTasksIndirectCountNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetExclusiveScissorEnableNV(
  // VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t
  // exclusiveScissorCount, const VkBool32* pExclusiveScissorEnables);
  VKFUNDEFINE(vkCmdSetExclusiveScissorEnableNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetExclusiveScissorNV( VkCommandBuffer
  // commandBuffer, uint32_t firstExclusiveScissor, uint32_t
  // exclusiveScissorCount, const VkRect2D* pExclusiveScissors);
  VKFUNDEFINE(vkCmdSetExclusiveScissorNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetCheckpointNV( VkCommandBuffer
  // commandBuffer, const void* pCheckpointMarker);
  VKFUNDEFINE(vkCmdSetCheckpointNV);
  // VKAPI_ATTR void VKAPI_CALL vkGetQueueCheckpointDataNV( VkQueue queue,
  // uint32_t* pCheckpointDataCount, VkCheckpointDataNV* pCheckpointData);
  VKFUNDEFINE(vkGetQueueCheckpointDataNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkInitializePerformanceApiINTEL( VkDevice
  // device, const VkInitializePerformanceApiInfoINTEL* pInitializeInfo);
  VKFUNDEFINE(vkInitializePerformanceApiINTEL);
  // VKAPI_ATTR void VKAPI_CALL vkUninitializePerformanceApiINTEL( VkDevice
  // device);
  VKFUNDEFINE(vkUninitializePerformanceApiINTEL);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCmdSetPerformanceMarkerINTEL(
  // VkCommandBuffer commandBuffer, const VkPerformanceMarkerInfoINTEL*
  // pMarkerInfo);
  VKFUNDEFINE(vkCmdSetPerformanceMarkerINTEL);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCmdSetPerformanceStreamMarkerINTEL(
  // VkCommandBuffer commandBuffer, const VkPerformanceStreamMarkerInfoINTEL*
  // pMarkerInfo);
  VKFUNDEFINE(vkCmdSetPerformanceStreamMarkerINTEL);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCmdSetPerformanceOverrideINTEL(
  // VkCommandBuffer commandBuffer, const VkPerformanceOverrideInfoINTEL*
  // pOverrideInfo);
  VKFUNDEFINE(vkCmdSetPerformanceOverrideINTEL);
  // VKAPI_ATTR VkResult VKAPI_CALL vkAcquirePerformanceConfigurationINTEL(
  // VkDevice device, const VkPerformanceConfigurationAcquireInfoINTEL*
  // pAcquireInfo, VkPerformanceConfigurationINTEL* pConfiguration);
  VKFUNDEFINE(vkAcquirePerformanceConfigurationINTEL);
  // VKAPI_ATTR VkResult VKAPI_CALL vkReleasePerformanceConfigurationINTEL(
  // VkDevice device, VkPerformanceConfigurationINTEL configuration);
  VKFUNDEFINE(vkReleasePerformanceConfigurationINTEL);
  // VKAPI_ATTR VkResult VKAPI_CALL vkQueueSetPerformanceConfigurationINTEL(
  // VkQueue queue, VkPerformanceConfigurationINTEL configuration);
  VKFUNDEFINE(vkQueueSetPerformanceConfigurationINTEL);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPerformanceParameterINTEL( VkDevice
  // device, VkPerformanceParameterTypeINTEL parameter, VkPerformanceValueINTEL*
  // pValue);
  VKFUNDEFINE(vkGetPerformanceParameterINTEL);
  // VKAPI_ATTR void VKAPI_CALL vkSetLocalDimmingAMD( VkDevice device,
  // VkSwapchainKHR swapChain, VkBool32 localDimmingEnable);
  VKFUNDEFINE(vkSetLocalDimmingAMD);
  // VKAPI_ATTR VkDeviceAddress VKAPI_CALL vkGetBufferDeviceAddressEXT( VkDevice
  // device, const VkBufferDeviceAddressInfo* pInfo);
  VKFUNDEFINE(vkGetBufferDeviceAddressEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetLineStippleEXT( VkCommandBuffer
  // commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern);
  VKFUNDEFINE(vkCmdSetLineStippleEXT);
  // VKAPI_ATTR void VKAPI_CALL vkResetQueryPoolEXT( VkDevice device,
  // VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount);
  VKFUNDEFINE(vkResetQueryPoolEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetCullModeEXT( VkCommandBuffer
  // commandBuffer, VkCullModeFlags cullMode);
  VKFUNDEFINE(vkCmdSetCullModeEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetFrontFaceEXT( VkCommandBuffer
  // commandBuffer, VkFrontFace frontFace);
  VKFUNDEFINE(vkCmdSetFrontFaceEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetPrimitiveTopologyEXT( VkCommandBuffer
  // commandBuffer, VkPrimitiveTopology primitiveTopology);
  VKFUNDEFINE(vkCmdSetPrimitiveTopologyEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportWithCountEXT( VkCommandBuffer
  // commandBuffer, uint32_t viewportCount, const VkViewport* pViewports);
  VKFUNDEFINE(vkCmdSetViewportWithCountEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetScissorWithCountEXT( VkCommandBuffer
  // commandBuffer, uint32_t scissorCount, const VkRect2D* pScissors);
  VKFUNDEFINE(vkCmdSetScissorWithCountEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBindVertexBuffers2EXT( VkCommandBuffer
  // commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const
  // VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize*
  // pSizes, const VkDeviceSize* pStrides);
  VKFUNDEFINE(vkCmdBindVertexBuffers2EXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthTestEnableEXT( VkCommandBuffer
  // commandBuffer, VkBool32 depthTestEnable);
  VKFUNDEFINE(vkCmdSetDepthTestEnableEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthWriteEnableEXT( VkCommandBuffer
  // commandBuffer, VkBool32 depthWriteEnable);
  VKFUNDEFINE(vkCmdSetDepthWriteEnableEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthCompareOpEXT( VkCommandBuffer
  // commandBuffer, VkCompareOp depthCompareOp);
  VKFUNDEFINE(vkCmdSetDepthCompareOpEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBoundsTestEnableEXT(
  // VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable);
  VKFUNDEFINE(vkCmdSetDepthBoundsTestEnableEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilTestEnableEXT( VkCommandBuffer
  // commandBuffer, VkBool32 stencilTestEnable);
  VKFUNDEFINE(vkCmdSetStencilTestEnableEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilOpEXT( VkCommandBuffer
  // commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp
  // passOp, VkStencilOp depthFailOp, VkCompareOp compareOp);
  VKFUNDEFINE(vkCmdSetStencilOpEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCopyMemoryToImageEXT( VkDevice device,
  // const VkCopyMemoryToImageInfoEXT* pCopyMemoryToImageInfo);
  VKFUNDEFINE(vkCopyMemoryToImageEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCopyImageToMemoryEXT( VkDevice device,
  // const VkCopyImageToMemoryInfoEXT* pCopyImageToMemoryInfo);
  VKFUNDEFINE(vkCopyImageToMemoryEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCopyImageToImageEXT( VkDevice device,
  // const VkCopyImageToImageInfoEXT* pCopyImageToImageInfo);
  VKFUNDEFINE(vkCopyImageToImageEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkTransitionImageLayoutEXT( VkDevice device,
  // uint32_t transitionCount, const VkHostImageLayoutTransitionInfoEXT*
  // pTransitions);
  VKFUNDEFINE(vkTransitionImageLayoutEXT);
  // VKAPI_ATTR void VKAPI_CALL vkGetImageSubresourceLayout2EXT( VkDevice
  // device, VkImage image, const VkImageSubresource2KHR* pSubresource,
  // VkSubresourceLayout2KHR* pLayout);
  VKFUNDEFINE(vkGetImageSubresourceLayout2EXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkReleaseSwapchainImagesEXT( VkDevice
  // device, const VkReleaseSwapchainImagesInfoEXT* pReleaseInfo);
  VKFUNDEFINE(vkReleaseSwapchainImagesEXT);
  // VKAPI_ATTR void VKAPI_CALL vkGetGeneratedCommandsMemoryRequirementsNV(
  // VkDevice device, const VkGeneratedCommandsMemoryRequirementsInfoNV* pInfo,
  // VkMemoryRequirements2* pMemoryRequirements);
  VKFUNDEFINE(vkGetGeneratedCommandsMemoryRequirementsNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdPreprocessGeneratedCommandsNV(
  // VkCommandBuffer commandBuffer, const VkGeneratedCommandsInfoNV*
  // pGeneratedCommandsInfo);
  VKFUNDEFINE(vkCmdPreprocessGeneratedCommandsNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdExecuteGeneratedCommandsNV( VkCommandBuffer
  // commandBuffer, VkBool32 isPreprocessed, const VkGeneratedCommandsInfoNV*
  // pGeneratedCommandsInfo);
  VKFUNDEFINE(vkCmdExecuteGeneratedCommandsNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBindPipelineShaderGroupNV( VkCommandBuffer
  // commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline,
  // uint32_t groupIndex);
  VKFUNDEFINE(vkCmdBindPipelineShaderGroupNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateIndirectCommandsLayoutNV( VkDevice
  // device, const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkIndirectCommandsLayoutNV*
  // pIndirectCommandsLayout);
  VKFUNDEFINE(vkCreateIndirectCommandsLayoutNV);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyIndirectCommandsLayoutNV( VkDevice
  // device, VkIndirectCommandsLayoutNV indirectCommandsLayout, const
  // VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyIndirectCommandsLayoutNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBias2EXT( VkCommandBuffer
  // commandBuffer, const VkDepthBiasInfoEXT* pDepthBiasInfo);
  VKFUNDEFINE(vkCmdSetDepthBias2EXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreatePrivateDataSlotEXT( VkDevice device,
  // const VkPrivateDataSlotCreateInfo* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkPrivateDataSlot* pPrivateDataSlot);
  VKFUNDEFINE(vkCreatePrivateDataSlotEXT);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyPrivateDataSlotEXT( VkDevice device,
  // VkPrivateDataSlot privateDataSlot, const VkAllocationCallbacks*
  // pAllocator);
  VKFUNDEFINE(vkDestroyPrivateDataSlotEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkSetPrivateDataEXT( VkDevice device,
  // VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot
  // privateDataSlot, uint64_t data);
  VKFUNDEFINE(vkSetPrivateDataEXT);
  // VKAPI_ATTR void VKAPI_CALL vkGetPrivateDataEXT( VkDevice device,
  // VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot
  // privateDataSlot, uint64_t* pData);
  VKFUNDEFINE(vkGetPrivateDataEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateCudaModuleNV( VkDevice device, const
  // VkCudaModuleCreateInfoNV* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkCudaModuleNV* pModule);
  VKFUNDEFINE(vkCreateCudaModuleNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetCudaModuleCacheNV( VkDevice device,
  // VkCudaModuleNV module, size_t* pCacheSize, void* pCacheData);
  VKFUNDEFINE(vkGetCudaModuleCacheNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateCudaFunctionNV( VkDevice device,
  // const VkCudaFunctionCreateInfoNV* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkCudaFunctionNV* pFunction);
  VKFUNDEFINE(vkCreateCudaFunctionNV);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyCudaModuleNV( VkDevice device,
  // VkCudaModuleNV module, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyCudaModuleNV);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyCudaFunctionNV( VkDevice device,
  // VkCudaFunctionNV function, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyCudaFunctionNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCudaLaunchKernelNV( VkCommandBuffer
  // commandBuffer, const VkCudaLaunchInfoNV* pLaunchInfo);
  VKFUNDEFINE(vkCmdCudaLaunchKernelNV);
  // VKAPI_ATTR void VKAPI_CALL vkGetDescriptorSetLayoutSizeEXT( VkDevice
  // device, VkDescriptorSetLayout layout, VkDeviceSize* pLayoutSizeInBytes);
  VKFUNDEFINE(vkGetDescriptorSetLayoutSizeEXT);
  // VKAPI_ATTR void VKAPI_CALL vkGetDescriptorSetLayoutBindingOffsetEXT(
  // VkDevice device, VkDescriptorSetLayout layout, uint32_t binding,
  // VkDeviceSize* pOffset);
  VKFUNDEFINE(vkGetDescriptorSetLayoutBindingOffsetEXT);
  // VKAPI_ATTR void VKAPI_CALL vkGetDescriptorEXT( VkDevice device, const
  // VkDescriptorGetInfoEXT* pDescriptorInfo, size_t dataSize, void*
  // pDescriptor);
  VKFUNDEFINE(vkGetDescriptorEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBindDescriptorBuffersEXT( VkCommandBuffer
  // commandBuffer, uint32_t bufferCount, const
  // VkDescriptorBufferBindingInfoEXT* pBindingInfos);
  VKFUNDEFINE(vkCmdBindDescriptorBuffersEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDescriptorBufferOffsetsEXT(
  // VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint,
  // VkPipelineLayout layout, uint32_t firstSet, uint32_t setCount, const
  // uint32_t* pBufferIndices, const VkDeviceSize* pOffsets);
  VKFUNDEFINE(vkCmdSetDescriptorBufferOffsetsEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBindDescriptorBufferEmbeddedSamplersEXT(
  // VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint,
  // VkPipelineLayout layout, uint32_t set);
  VKFUNDEFINE(vkCmdBindDescriptorBufferEmbeddedSamplersEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetBufferOpaqueCaptureDescriptorDataEXT(
  // VkDevice device, const VkBufferCaptureDescriptorDataInfoEXT* pInfo, void*
  // pData);
  VKFUNDEFINE(vkGetBufferOpaqueCaptureDescriptorDataEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetImageOpaqueCaptureDescriptorDataEXT(
  // VkDevice device, const VkImageCaptureDescriptorDataInfoEXT* pInfo, void*
  // pData);
  VKFUNDEFINE(vkGetImageOpaqueCaptureDescriptorDataEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL
  // vkGetImageViewOpaqueCaptureDescriptorDataEXT( VkDevice device, const
  // VkImageViewCaptureDescriptorDataInfoEXT* pInfo, void* pData);
  VKFUNDEFINE(vkGetImageViewOpaqueCaptureDescriptorDataEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetSamplerOpaqueCaptureDescriptorDataEXT(
  // VkDevice device, const VkSamplerCaptureDescriptorDataInfoEXT* pInfo, void*
  // pData);
  VKFUNDEFINE(vkGetSamplerOpaqueCaptureDescriptorDataEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL
  // vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT( VkDevice device,
  // const VkAccelerationStructureCaptureDescriptorDataInfoEXT* pInfo, void*
  // pData);
  VKFUNDEFINE(vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetFragmentShadingRateEnumNV(
  // VkCommandBuffer commandBuffer, VkFragmentShadingRateNV shadingRate, const
  // VkFragmentShadingRateCombinerOpKHR combinerOps[2]);
  VKFUNDEFINE(vkCmdSetFragmentShadingRateEnumNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetDeviceFaultInfoEXT( VkDevice device,
  // VkDeviceFaultCountsEXT* pFaultCounts, VkDeviceFaultInfoEXT* pFaultInfo);
  VKFUNDEFINE(vkGetDeviceFaultInfoEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetVertexInputEXT( VkCommandBuffer
  // commandBuffer, uint32_t vertexBindingDescriptionCount, const
  // VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions, uint32_t
  // vertexAttributeDescriptionCount, const
  // VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions);
  VKFUNDEFINE(vkCmdSetVertexInputEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL
  // vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI( VkDevice device,
  // VkRenderPass renderpass, VkExtent2D* pMaxWorkgroupSize);
  VKFUNDEFINE(vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSubpassShadingHUAWEI( VkCommandBuffer
  // commandBuffer);
  VKFUNDEFINE(vkCmdSubpassShadingHUAWEI);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBindInvocationMaskHUAWEI( VkCommandBuffer
  // commandBuffer, VkImageView imageView, VkImageLayout imageLayout);
  VKFUNDEFINE(vkCmdBindInvocationMaskHUAWEI);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryRemoteAddressNV( VkDevice device,
  // const VkMemoryGetRemoteAddressInfoNV* pMemoryGetRemoteAddressInfo,
  // VkRemoteAddressNV* pAddress);
  VKFUNDEFINE(vkGetMemoryRemoteAddressNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetPipelinePropertiesEXT( VkDevice device,
  // const VkPipelineInfoEXT* pPipelineInfo, VkBaseOutStructure*
  // pPipelineProperties);
  VKFUNDEFINE(vkGetPipelinePropertiesEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetPatchControlPointsEXT( VkCommandBuffer
  // commandBuffer, uint32_t patchControlPoints);
  VKFUNDEFINE(vkCmdSetPatchControlPointsEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetRasterizerDiscardEnableEXT(
  // VkCommandBuffer commandBuffer, VkBool32 rasterizerDiscardEnable);
  VKFUNDEFINE(vkCmdSetRasterizerDiscardEnableEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBiasEnableEXT( VkCommandBuffer
  // commandBuffer, VkBool32 depthBiasEnable);
  VKFUNDEFINE(vkCmdSetDepthBiasEnableEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetLogicOpEXT( VkCommandBuffer
  // commandBuffer, VkLogicOp logicOp);
  VKFUNDEFINE(vkCmdSetLogicOpEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetPrimitiveRestartEnableEXT(
  // VkCommandBuffer commandBuffer, VkBool32 primitiveRestartEnable);
  VKFUNDEFINE(vkCmdSetPrimitiveRestartEnableEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetColorWriteEnableEXT( VkCommandBuffer
  // commandBuffer, uint32_t attachmentCount, const VkBool32*
  // pColorWriteEnables);
  VKFUNDEFINE(vkCmdSetColorWriteEnableEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawMultiEXT( VkCommandBuffer
  // commandBuffer, uint32_t drawCount, const VkMultiDrawInfoEXT* pVertexInfo,
  // uint32_t instanceCount, uint32_t firstInstance, uint32_t stride);
  VKFUNDEFINE(vkCmdDrawMultiEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawMultiIndexedEXT( VkCommandBuffer
  // commandBuffer, uint32_t drawCount, const VkMultiDrawIndexedInfoEXT*
  // pIndexInfo, uint32_t instanceCount, uint32_t firstInstance, uint32_t
  // stride, const int32_t* pVertexOffset);
  VKFUNDEFINE(vkCmdDrawMultiIndexedEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateMicromapEXT( VkDevice device, const
  // VkMicromapCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks*
  // pAllocator, VkMicromapEXT* pMicromap);
  VKFUNDEFINE(vkCreateMicromapEXT);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyMicromapEXT( VkDevice device,
  // VkMicromapEXT micromap, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyMicromapEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBuildMicromapsEXT( VkCommandBuffer
  // commandBuffer, uint32_t infoCount, const VkMicromapBuildInfoEXT* pInfos);
  VKFUNDEFINE(vkCmdBuildMicromapsEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkBuildMicromapsEXT( VkDevice device,
  // VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const
  // VkMicromapBuildInfoEXT* pInfos);
  VKFUNDEFINE(vkBuildMicromapsEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCopyMicromapEXT( VkDevice device,
  // VkDeferredOperationKHR deferredOperation, const VkCopyMicromapInfoEXT*
  // pInfo);
  VKFUNDEFINE(vkCopyMicromapEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCopyMicromapToMemoryEXT( VkDevice device,
  // VkDeferredOperationKHR deferredOperation, const
  // VkCopyMicromapToMemoryInfoEXT* pInfo);
  VKFUNDEFINE(vkCopyMicromapToMemoryEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCopyMemoryToMicromapEXT( VkDevice device,
  // VkDeferredOperationKHR deferredOperation, const
  // VkCopyMemoryToMicromapInfoEXT* pInfo);
  VKFUNDEFINE(vkCopyMemoryToMicromapEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkWriteMicromapsPropertiesEXT( VkDevice
  // device, uint32_t micromapCount, const VkMicromapEXT* pMicromaps,
  // VkQueryType queryType, size_t dataSize, void* pData, size_t stride);
  VKFUNDEFINE(vkWriteMicromapsPropertiesEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyMicromapEXT( VkCommandBuffer
  // commandBuffer, const VkCopyMicromapInfoEXT* pInfo);
  VKFUNDEFINE(vkCmdCopyMicromapEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyMicromapToMemoryEXT( VkCommandBuffer
  // commandBuffer, const VkCopyMicromapToMemoryInfoEXT* pInfo);
  VKFUNDEFINE(vkCmdCopyMicromapToMemoryEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyMemoryToMicromapEXT( VkCommandBuffer
  // commandBuffer, const VkCopyMemoryToMicromapInfoEXT* pInfo);
  VKFUNDEFINE(vkCmdCopyMemoryToMicromapEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdWriteMicromapsPropertiesEXT(
  // VkCommandBuffer commandBuffer, uint32_t micromapCount, const VkMicromapEXT*
  // pMicromaps, VkQueryType queryType, VkQueryPool queryPool, uint32_t
  // firstQuery);
  VKFUNDEFINE(vkCmdWriteMicromapsPropertiesEXT);
  // VKAPI_ATTR void VKAPI_CALL vkGetDeviceMicromapCompatibilityEXT( VkDevice
  // device, const VkMicromapVersionInfoEXT* pVersionInfo,
  // VkAccelerationStructureCompatibilityKHR* pCompatibility);
  VKFUNDEFINE(vkGetDeviceMicromapCompatibilityEXT);
  // VKAPI_ATTR void VKAPI_CALL vkGetMicromapBuildSizesEXT( VkDevice device,
  // VkAccelerationStructureBuildTypeKHR buildType, const
  // VkMicromapBuildInfoEXT* pBuildInfo, VkMicromapBuildSizesInfoEXT*
  // pSizeInfo);
  VKFUNDEFINE(vkGetMicromapBuildSizesEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawClusterHUAWEI( VkCommandBuffer
  // commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t
  // groupCountZ);
  VKFUNDEFINE(vkCmdDrawClusterHUAWEI);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawClusterIndirectHUAWEI( VkCommandBuffer
  // commandBuffer, VkBuffer buffer, VkDeviceSize offset);
  VKFUNDEFINE(vkCmdDrawClusterIndirectHUAWEI);
  // VKAPI_ATTR void VKAPI_CALL vkSetDeviceMemoryPriorityEXT( VkDevice device,
  // VkDeviceMemory memory, float priority);
  VKFUNDEFINE(vkSetDeviceMemoryPriorityEXT);
  // VKAPI_ATTR void VKAPI_CALL vkGetDescriptorSetLayoutHostMappingInfoVALVE(
  // VkDevice device, const VkDescriptorSetBindingReferenceVALVE*
  // pBindingReference, VkDescriptorSetLayoutHostMappingInfoVALVE*
  // pHostMapping);
  VKFUNDEFINE(vkGetDescriptorSetLayoutHostMappingInfoVALVE);
  // VKAPI_ATTR void VKAPI_CALL vkGetDescriptorSetHostMappingVALVE( VkDevice
  // device, VkDescriptorSet descriptorSet, void** ppData);
  VKFUNDEFINE(vkGetDescriptorSetHostMappingVALVE);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyMemoryIndirectNV( VkCommandBuffer
  // commandBuffer, VkDeviceAddress copyBufferAddress, uint32_t copyCount,
  // uint32_t stride);
  VKFUNDEFINE(vkCmdCopyMemoryIndirectNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyMemoryToImageIndirectNV(
  // VkCommandBuffer commandBuffer, VkDeviceAddress copyBufferAddress, uint32_t
  // copyCount, uint32_t stride, VkImage dstImage, VkImageLayout dstImageLayout,
  // const VkImageSubresourceLayers* pImageSubresources);
  VKFUNDEFINE(vkCmdCopyMemoryToImageIndirectNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDecompressMemoryNV( VkCommandBuffer
  // commandBuffer, uint32_t decompressRegionCount, const
  // VkDecompressMemoryRegionNV* pDecompressMemoryRegions);
  VKFUNDEFINE(vkCmdDecompressMemoryNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDecompressMemoryIndirectCountNV(
  // VkCommandBuffer commandBuffer, VkDeviceAddress indirectCommandsAddress,
  // VkDeviceAddress indirectCommandsCountAddress, uint32_t stride);
  VKFUNDEFINE(vkCmdDecompressMemoryIndirectCountNV);
  // VKAPI_ATTR void VKAPI_CALL vkGetPipelineIndirectMemoryRequirementsNV(
  // VkDevice device, const VkComputePipelineCreateInfo* pCreateInfo,
  // VkMemoryRequirements2* pMemoryRequirements);
  VKFUNDEFINE(vkGetPipelineIndirectMemoryRequirementsNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdUpdatePipelineIndirectBufferNV(
  // VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint,
  // VkPipeline pipeline);
  VKFUNDEFINE(vkCmdUpdatePipelineIndirectBufferNV);
  // VKAPI_ATTR VkDeviceAddress VKAPI_CALL vkGetPipelineIndirectDeviceAddressNV(
  // VkDevice device, const VkPipelineIndirectDeviceAddressInfoNV* pInfo);
  VKFUNDEFINE(vkGetPipelineIndirectDeviceAddressNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthClampEnableEXT( VkCommandBuffer
  // commandBuffer, VkBool32 depthClampEnable);
  VKFUNDEFINE(vkCmdSetDepthClampEnableEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetPolygonModeEXT( VkCommandBuffer
  // commandBuffer, VkPolygonMode polygonMode);
  VKFUNDEFINE(vkCmdSetPolygonModeEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetRasterizationSamplesEXT( VkCommandBuffer
  // commandBuffer, VkSampleCountFlagBits rasterizationSamples);
  VKFUNDEFINE(vkCmdSetRasterizationSamplesEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetSampleMaskEXT( VkCommandBuffer
  // commandBuffer, VkSampleCountFlagBits samples, const VkSampleMask*
  // pSampleMask);
  VKFUNDEFINE(vkCmdSetSampleMaskEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetAlphaToCoverageEnableEXT(
  // VkCommandBuffer commandBuffer, VkBool32 alphaToCoverageEnable);
  VKFUNDEFINE(vkCmdSetAlphaToCoverageEnableEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetAlphaToOneEnableEXT( VkCommandBuffer
  // commandBuffer, VkBool32 alphaToOneEnable);
  VKFUNDEFINE(vkCmdSetAlphaToOneEnableEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetLogicOpEnableEXT( VkCommandBuffer
  // commandBuffer, VkBool32 logicOpEnable);
  VKFUNDEFINE(vkCmdSetLogicOpEnableEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetColorBlendEnableEXT( VkCommandBuffer
  // commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const
  // VkBool32* pColorBlendEnables);
  VKFUNDEFINE(vkCmdSetColorBlendEnableEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetColorBlendEquationEXT( VkCommandBuffer
  // commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const
  // VkColorBlendEquationEXT* pColorBlendEquations);
  VKFUNDEFINE(vkCmdSetColorBlendEquationEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetColorWriteMaskEXT( VkCommandBuffer
  // commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const
  // VkColorComponentFlags* pColorWriteMasks);
  VKFUNDEFINE(vkCmdSetColorWriteMaskEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetTessellationDomainOriginEXT(
  // VkCommandBuffer commandBuffer, VkTessellationDomainOrigin domainOrigin);
  VKFUNDEFINE(vkCmdSetTessellationDomainOriginEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetRasterizationStreamEXT( VkCommandBuffer
  // commandBuffer, uint32_t rasterizationStream);
  VKFUNDEFINE(vkCmdSetRasterizationStreamEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetConservativeRasterizationModeEXT(
  // VkCommandBuffer commandBuffer, VkConservativeRasterizationModeEXT
  // conservativeRasterizationMode);
  VKFUNDEFINE(vkCmdSetConservativeRasterizationModeEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetExtraPrimitiveOverestimationSizeEXT(
  // VkCommandBuffer commandBuffer, float extraPrimitiveOverestimationSize);
  VKFUNDEFINE(vkCmdSetExtraPrimitiveOverestimationSizeEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthClipEnableEXT( VkCommandBuffer
  // commandBuffer, VkBool32 depthClipEnable);
  VKFUNDEFINE(vkCmdSetDepthClipEnableEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetSampleLocationsEnableEXT(
  // VkCommandBuffer commandBuffer, VkBool32 sampleLocationsEnable);
  VKFUNDEFINE(vkCmdSetSampleLocationsEnableEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetColorBlendAdvancedEXT( VkCommandBuffer
  // commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const
  // VkColorBlendAdvancedEXT* pColorBlendAdvanced);
  VKFUNDEFINE(vkCmdSetColorBlendAdvancedEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetProvokingVertexModeEXT( VkCommandBuffer
  // commandBuffer, VkProvokingVertexModeEXT provokingVertexMode);
  VKFUNDEFINE(vkCmdSetProvokingVertexModeEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetLineRasterizationModeEXT(
  // VkCommandBuffer commandBuffer, VkLineRasterizationModeEXT
  // lineRasterizationMode);
  VKFUNDEFINE(vkCmdSetLineRasterizationModeEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetLineStippleEnableEXT( VkCommandBuffer
  // commandBuffer, VkBool32 stippledLineEnable);
  VKFUNDEFINE(vkCmdSetLineStippleEnableEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthClipNegativeOneToOneEXT(
  // VkCommandBuffer commandBuffer, VkBool32 negativeOneToOne);
  VKFUNDEFINE(vkCmdSetDepthClipNegativeOneToOneEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportWScalingEnableNV(
  // VkCommandBuffer commandBuffer, VkBool32 viewportWScalingEnable);
  VKFUNDEFINE(vkCmdSetViewportWScalingEnableNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportSwizzleNV( VkCommandBuffer
  // commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const
  // VkViewportSwizzleNV* pViewportSwizzles);
  VKFUNDEFINE(vkCmdSetViewportSwizzleNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetCoverageToColorEnableNV( VkCommandBuffer
  // commandBuffer, VkBool32 coverageToColorEnable);
  VKFUNDEFINE(vkCmdSetCoverageToColorEnableNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetCoverageToColorLocationNV(
  // VkCommandBuffer commandBuffer, uint32_t coverageToColorLocation);
  VKFUNDEFINE(vkCmdSetCoverageToColorLocationNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetCoverageModulationModeNV(
  // VkCommandBuffer commandBuffer, VkCoverageModulationModeNV
  // coverageModulationMode);
  VKFUNDEFINE(vkCmdSetCoverageModulationModeNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetCoverageModulationTableEnableNV(
  // VkCommandBuffer commandBuffer, VkBool32 coverageModulationTableEnable);
  VKFUNDEFINE(vkCmdSetCoverageModulationTableEnableNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetCoverageModulationTableNV(
  // VkCommandBuffer commandBuffer, uint32_t coverageModulationTableCount, const
  // float* pCoverageModulationTable);
  VKFUNDEFINE(vkCmdSetCoverageModulationTableNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetShadingRateImageEnableNV(
  // VkCommandBuffer commandBuffer, VkBool32 shadingRateImageEnable);
  VKFUNDEFINE(vkCmdSetShadingRateImageEnableNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetRepresentativeFragmentTestEnableNV(
  // VkCommandBuffer commandBuffer, VkBool32 representativeFragmentTestEnable);
  VKFUNDEFINE(vkCmdSetRepresentativeFragmentTestEnableNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetCoverageReductionModeNV( VkCommandBuffer
  // commandBuffer, VkCoverageReductionModeNV coverageReductionMode);
  VKFUNDEFINE(vkCmdSetCoverageReductionModeNV);
  // VKAPI_ATTR void VKAPI_CALL vkGetShaderModuleIdentifierEXT( VkDevice device,
  // VkShaderModule shaderModule, VkShaderModuleIdentifierEXT* pIdentifier);
  VKFUNDEFINE(vkGetShaderModuleIdentifierEXT);
  // VKAPI_ATTR void VKAPI_CALL vkGetShaderModuleCreateInfoIdentifierEXT(
  // VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo,
  // VkShaderModuleIdentifierEXT* pIdentifier);
  VKFUNDEFINE(vkGetShaderModuleCreateInfoIdentifierEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateOpticalFlowSessionNV( VkDevice
  // device, const VkOpticalFlowSessionCreateInfoNV* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkOpticalFlowSessionNV* pSession);
  VKFUNDEFINE(vkCreateOpticalFlowSessionNV);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyOpticalFlowSessionNV( VkDevice device,
  // VkOpticalFlowSessionNV session, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyOpticalFlowSessionNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkBindOpticalFlowSessionImageNV( VkDevice
  // device, VkOpticalFlowSessionNV session, VkOpticalFlowSessionBindingPointNV
  // bindingPoint, VkImageView view, VkImageLayout layout);
  VKFUNDEFINE(vkBindOpticalFlowSessionImageNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdOpticalFlowExecuteNV( VkCommandBuffer
  // commandBuffer, VkOpticalFlowSessionNV session, const
  // VkOpticalFlowExecuteInfoNV* pExecuteInfo);
  VKFUNDEFINE(vkCmdOpticalFlowExecuteNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateShadersEXT( VkDevice device,
  // uint32_t createInfoCount, const VkShaderCreateInfoEXT* pCreateInfos, const
  // VkAllocationCallbacks* pAllocator, VkShaderEXT* pShaders);
  VKFUNDEFINE(vkCreateShadersEXT);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyShaderEXT( VkDevice device, VkShaderEXT
  // shader, const VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyShaderEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetShaderBinaryDataEXT( VkDevice device,
  // VkShaderEXT shader, size_t* pDataSize, void* pData);
  VKFUNDEFINE(vkGetShaderBinaryDataEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBindShadersEXT( VkCommandBuffer
  // commandBuffer, uint32_t stageCount, const VkShaderStageFlagBits* pStages,
  // const VkShaderEXT* pShaders);
  VKFUNDEFINE(vkCmdBindShadersEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetFramebufferTilePropertiesQCOM( VkDevice
  // device, VkFramebuffer framebuffer, uint32_t* pPropertiesCount,
  // VkTilePropertiesQCOM* pProperties);
  VKFUNDEFINE(vkGetFramebufferTilePropertiesQCOM);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetDynamicRenderingTilePropertiesQCOM(
  // VkDevice device, const VkRenderingInfo* pRenderingInfo,
  // VkTilePropertiesQCOM* pProperties);
  VKFUNDEFINE(vkGetDynamicRenderingTilePropertiesQCOM);
  // VKAPI_ATTR VkResult VKAPI_CALL vkSetLatencySleepModeNV( VkDevice device,
  // VkSwapchainKHR swapchain, const VkLatencySleepModeInfoNV* pSleepModeInfo);
  VKFUNDEFINE(vkSetLatencySleepModeNV);
  // VKAPI_ATTR VkResult VKAPI_CALL vkLatencySleepNV( VkDevice device,
  // VkSwapchainKHR swapchain, const VkLatencySleepInfoNV* pSleepInfo);
  VKFUNDEFINE(vkLatencySleepNV);
  // VKAPI_ATTR void VKAPI_CALL vkSetLatencyMarkerNV( VkDevice device,
  // VkSwapchainKHR swapchain, const VkSetLatencyMarkerInfoNV*
  // pLatencyMarkerInfo);
  VKFUNDEFINE(vkSetLatencyMarkerNV);
  // VKAPI_ATTR void VKAPI_CALL vkGetLatencyTimingsNV( VkDevice device,
  // VkSwapchainKHR swapchain, VkGetLatencyMarkerInfoNV* pLatencyMarkerInfo);
  VKFUNDEFINE(vkGetLatencyTimingsNV);
  // VKAPI_ATTR void VKAPI_CALL vkQueueNotifyOutOfBandNV( VkQueue queue, const
  // VkOutOfBandQueueTypeInfoNV* pQueueTypeInfo);
  VKFUNDEFINE(vkQueueNotifyOutOfBandNV);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetAttachmentFeedbackLoopEnableEXT(
  // VkCommandBuffer commandBuffer, VkImageAspectFlags aspectMask);
  VKFUNDEFINE(vkCmdSetAttachmentFeedbackLoopEnableEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateAccelerationStructureKHR( VkDevice
  // device, const VkAccelerationStructureCreateInfoKHR* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkAccelerationStructureKHR*
  // pAccelerationStructure);
  VKFUNDEFINE(vkCreateAccelerationStructureKHR);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyAccelerationStructureKHR( VkDevice
  // device, VkAccelerationStructureKHR accelerationStructure, const
  // VkAllocationCallbacks* pAllocator);
  VKFUNDEFINE(vkDestroyAccelerationStructureKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBuildAccelerationStructuresKHR(
  // VkCommandBuffer commandBuffer, uint32_t infoCount, const
  // VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const
  // VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos);
  VKFUNDEFINE(vkCmdBuildAccelerationStructuresKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdBuildAccelerationStructuresIndirectKHR(
  // VkCommandBuffer commandBuffer, uint32_t infoCount, const
  // VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkDeviceAddress*
  // pIndirectDeviceAddresses, const uint32_t* pIndirectStrides, const uint32_t*
  // const* ppMaxPrimitiveCounts);
  VKFUNDEFINE(vkCmdBuildAccelerationStructuresIndirectKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkBuildAccelerationStructuresKHR( VkDevice
  // device, VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const
  // VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const
  // VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos);
  VKFUNDEFINE(vkBuildAccelerationStructuresKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCopyAccelerationStructureKHR( VkDevice
  // device, VkDeferredOperationKHR deferredOperation, const
  // VkCopyAccelerationStructureInfoKHR* pInfo);
  VKFUNDEFINE(vkCopyAccelerationStructureKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCopyAccelerationStructureToMemoryKHR(
  // VkDevice device, VkDeferredOperationKHR deferredOperation, const
  // VkCopyAccelerationStructureToMemoryInfoKHR* pInfo);
  VKFUNDEFINE(vkCopyAccelerationStructureToMemoryKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCopyMemoryToAccelerationStructureKHR(
  // VkDevice device, VkDeferredOperationKHR deferredOperation, const
  // VkCopyMemoryToAccelerationStructureInfoKHR* pInfo);
  VKFUNDEFINE(vkCopyMemoryToAccelerationStructureKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkWriteAccelerationStructuresPropertiesKHR(
  // VkDevice device, uint32_t accelerationStructureCount, const
  // VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType,
  // size_t dataSize, void* pData, size_t stride);
  VKFUNDEFINE(vkWriteAccelerationStructuresPropertiesKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyAccelerationStructureKHR(
  // VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureInfoKHR*
  // pInfo);
  VKFUNDEFINE(vkCmdCopyAccelerationStructureKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyAccelerationStructureToMemoryKHR(
  // VkCommandBuffer commandBuffer, const
  // VkCopyAccelerationStructureToMemoryInfoKHR* pInfo);
  VKFUNDEFINE(vkCmdCopyAccelerationStructureToMemoryKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdCopyMemoryToAccelerationStructureKHR(
  // VkCommandBuffer commandBuffer, const
  // VkCopyMemoryToAccelerationStructureInfoKHR* pInfo);
  VKFUNDEFINE(vkCmdCopyMemoryToAccelerationStructureKHR);
  // VKAPI_ATTR VkDeviceAddress VKAPI_CALL
  // vkGetAccelerationStructureDeviceAddressKHR( VkDevice device, const
  // VkAccelerationStructureDeviceAddressInfoKHR* pInfo);
  VKFUNDEFINE(vkGetAccelerationStructureDeviceAddressKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdWriteAccelerationStructuresPropertiesKHR(
  // VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const
  // VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType,
  // VkQueryPool queryPool, uint32_t firstQuery);
  VKFUNDEFINE(vkCmdWriteAccelerationStructuresPropertiesKHR);
  // VKAPI_ATTR void VKAPI_CALL
  // vkGetDeviceAccelerationStructureCompatibilityKHR( VkDevice device, const
  // VkAccelerationStructureVersionInfoKHR* pVersionInfo,
  // VkAccelerationStructureCompatibilityKHR* pCompatibility);
  VKFUNDEFINE(vkGetDeviceAccelerationStructureCompatibilityKHR);
  // VKAPI_ATTR void VKAPI_CALL vkGetAccelerationStructureBuildSizesKHR(
  // VkDevice device, VkAccelerationStructureBuildTypeKHR buildType, const
  // VkAccelerationStructureBuildGeometryInfoKHR* pBuildInfo, const uint32_t*
  // pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR* pSizeInfo);
  VKFUNDEFINE(vkGetAccelerationStructureBuildSizesKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdTraceRaysKHR( VkCommandBuffer
  // commandBuffer, const VkStridedDeviceAddressRegionKHR*
  // pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR*
  // pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR*
  // pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR*
  // pCallableShaderBindingTable, uint32_t width, uint32_t height, uint32_t
  // depth);
  VKFUNDEFINE(vkCmdTraceRaysKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateRayTracingPipelinesKHR( VkDevice
  // device, VkDeferredOperationKHR deferredOperation, VkPipelineCache
  // pipelineCache, uint32_t createInfoCount, const
  // VkRayTracingPipelineCreateInfoKHR* pCreateInfos, const
  // VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
  VKFUNDEFINE(vkCreateRayTracingPipelinesKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL
  // vkGetRayTracingCaptureReplayShaderGroupHandlesKHR( VkDevice device,
  // VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t
  // dataSize, void* pData);
  VKFUNDEFINE(vkGetRayTracingCaptureReplayShaderGroupHandlesKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdTraceRaysIndirectKHR( VkCommandBuffer
  // commandBuffer, const VkStridedDeviceAddressRegionKHR*
  // pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR*
  // pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR*
  // pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR*
  // pCallableShaderBindingTable, VkDeviceAddress indirectDeviceAddress);
  VKFUNDEFINE(vkCmdTraceRaysIndirectKHR);
  // VKAPI_ATTR VkDeviceSize VKAPI_CALL vkGetRayTracingShaderGroupStackSizeKHR(
  // VkDevice device, VkPipeline pipeline, uint32_t group,
  // VkShaderGroupShaderKHR groupShader);
  VKFUNDEFINE(vkGetRayTracingShaderGroupStackSizeKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdSetRayTracingPipelineStackSizeKHR(
  // VkCommandBuffer commandBuffer, uint32_t pipelineStackSize);
  VKFUNDEFINE(vkCmdSetRayTracingPipelineStackSizeKHR);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksEXT( VkCommandBuffer
  // commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t
  // groupCountZ);
  VKFUNDEFINE(vkCmdDrawMeshTasksEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksIndirectEXT( VkCommandBuffer
  // commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount,
  // uint32_t stride);
  VKFUNDEFINE(vkCmdDrawMeshTasksIndirectEXT);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksIndirectCountEXT(
  // VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
  // VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t
  // maxDrawCount, uint32_t stride);
  VKFUNDEFINE(vkCmdDrawMeshTasksIndirectCountEXT);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetAndroidHardwareBufferPropertiesANDROID(
  // VkDevice device, const struct AHardwareBuffer* buffer,
  // VkAndroidHardwareBufferPropertiesANDROID* pProperties);
  VKFUNDEFINE(vkGetAndroidHardwareBufferPropertiesANDROID);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryAndroidHardwareBufferANDROID(
  // VkDevice device, const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo,
  // struct AHardwareBuffer** pBuffer);
  VKFUNDEFINE(vkGetMemoryAndroidHardwareBufferANDROID);
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryZirconHandleFUCHSIA( VkDevice
  // device, const VkMemoryGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo,
  // zx_handle_t* pZirconHandle);
  VKFUNDEFINE(vkGetMemoryZirconHandleFUCHSIA);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryZirconHandlePropertiesFUCHSIA(
  // VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, zx_handle_t
  // zirconHandle, VkMemoryZirconHandlePropertiesFUCHSIA*
  // pMemoryZirconHandleProperties);
  VKFUNDEFINE(vkGetMemoryZirconHandlePropertiesFUCHSIA);
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
  // VKAPI_ATTR VkResult VKAPI_CALL vkImportSemaphoreZirconHandleFUCHSIA(
  // VkDevice device, const VkImportSemaphoreZirconHandleInfoFUCHSIA*
  // pImportSemaphoreZirconHandleInfo);
  VKFUNDEFINE(vkImportSemaphoreZirconHandleFUCHSIA);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreZirconHandleFUCHSIA( VkDevice
  // device, const VkSemaphoreGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo,
  // zx_handle_t* pZirconHandle);
  VKFUNDEFINE(vkGetSemaphoreZirconHandleFUCHSIA);
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateBufferCollectionFUCHSIA( VkDevice
  // device, const VkBufferCollectionCreateInfoFUCHSIA* pCreateInfo, const
  // VkAllocationCallbacks* pAllocator, VkBufferCollectionFUCHSIA* pCollection);
  VKFUNDEFINE(vkCreateBufferCollectionFUCHSIA);
  // VKAPI_ATTR VkResult VKAPI_CALL
  // vkSetBufferCollectionImageConstraintsFUCHSIA( VkDevice device,
  // VkBufferCollectionFUCHSIA collection, const VkImageConstraintsInfoFUCHSIA*
  // pImageConstraintsInfo);
  VKFUNDEFINE(vkSetBufferCollectionImageConstraintsFUCHSIA);
  // VKAPI_ATTR VkResult VKAPI_CALL
  // vkSetBufferCollectionBufferConstraintsFUCHSIA( VkDevice device,
  // VkBufferCollectionFUCHSIA collection, const VkBufferConstraintsInfoFUCHSIA*
  // pBufferConstraintsInfo);
  VKFUNDEFINE(vkSetBufferCollectionBufferConstraintsFUCHSIA);
  // VKAPI_ATTR void VKAPI_CALL vkDestroyBufferCollectionFUCHSIA( VkDevice
  // device, VkBufferCollectionFUCHSIA collection, const VkAllocationCallbacks*
  // pAllocator);
  VKFUNDEFINE(vkDestroyBufferCollectionFUCHSIA);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetBufferCollectionPropertiesFUCHSIA(
  // VkDevice device, VkBufferCollectionFUCHSIA collection,
  // VkBufferCollectionPropertiesFUCHSIA* pProperties);
  VKFUNDEFINE(vkGetBufferCollectionPropertiesFUCHSIA);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryWin32HandleKHR( VkDevice device,
  // const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle);
  VKFUNDEFINE(vkGetMemoryWin32HandleKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryWin32HandlePropertiesKHR(
  // VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, HANDLE
  // handle, VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties);
  VKFUNDEFINE(vkGetMemoryWin32HandlePropertiesKHR);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
  // VKAPI_ATTR VkResult VKAPI_CALL vkImportSemaphoreWin32HandleKHR( VkDevice
  // device, const VkImportSemaphoreWin32HandleInfoKHR*
  // pImportSemaphoreWin32HandleInfo);
  VKFUNDEFINE(vkImportSemaphoreWin32HandleKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreWin32HandleKHR( VkDevice
  // device, const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo,
  // HANDLE* pHandle);
  VKFUNDEFINE(vkGetSemaphoreWin32HandleKHR);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
  // VKAPI_ATTR VkResult VKAPI_CALL vkImportFenceWin32HandleKHR( VkDevice
  // device, const VkImportFenceWin32HandleInfoKHR*
  // pImportFenceWin32HandleInfo);
  VKFUNDEFINE(vkImportFenceWin32HandleKHR);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetFenceWin32HandleKHR( VkDevice device,
  // const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle);
  VKFUNDEFINE(vkGetFenceWin32HandleKHR);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryWin32HandleNV( VkDevice device,
  // VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType,
  // HANDLE* pHandle);
  VKFUNDEFINE(vkGetMemoryWin32HandleNV);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
  // VKAPI_ATTR VkResult VKAPI_CALL vkAcquireFullScreenExclusiveModeEXT(
  // VkDevice device, VkSwapchainKHR swapchain);
  VKFUNDEFINE(vkAcquireFullScreenExclusiveModeEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkReleaseFullScreenExclusiveModeEXT(
  // VkDevice device, VkSwapchainKHR swapchain);
  VKFUNDEFINE(vkReleaseFullScreenExclusiveModeEXT);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetDeviceGroupSurfacePresentModes2EXT(
  // VkDevice device, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
  // VkDeviceGroupPresentModeFlagsKHR* pModes);
  VKFUNDEFINE(vkGetDeviceGroupSurfacePresentModes2EXT);
#endif
#ifdef VK_USE_PLATFORM_METAL_EXT
  // VKAPI_ATTR void VKAPI_CALL vkExportMetalObjectsEXT( VkDevice device,
  // VkExportMetalObjectsInfoEXT* pMetalObjectsInfo);
  VKFUNDEFINE(vkExportMetalObjectsEXT);
#endif
#ifdef VK_USE_PLATFORM_SCREEN_QNX
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetScreenBufferPropertiesQNX( VkDevice
  // device, const struct _screen_buffer* buffer, VkScreenBufferPropertiesQNX*
  // pProperties);
  VKFUNDEFINE(vkGetScreenBufferPropertiesQNX);
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
  // VKAPI_ATTR VkResult VKAPI_CALL vkCreateExecutionGraphPipelinesAMDX(
  // VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount,
  // const VkExecutionGraphPipelineCreateInfoAMDX* pCreateInfos, const
  // VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
  VKFUNDEFINE(vkCreateExecutionGraphPipelinesAMDX);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetExecutionGraphPipelineScratchSizeAMDX(
  // VkDevice device, VkPipeline executionGraph,
  // VkExecutionGraphPipelineScratchSizeAMDX* pSizeInfo);
  VKFUNDEFINE(vkGetExecutionGraphPipelineScratchSizeAMDX);
  // VKAPI_ATTR VkResult VKAPI_CALL vkGetExecutionGraphPipelineNodeIndexAMDX(
  // VkDevice device, VkPipeline executionGraph, const
  // VkPipelineShaderStageNodeCreateInfoAMDX* pNodeInfo, uint32_t* pNodeIndex);
  VKFUNDEFINE(vkGetExecutionGraphPipelineNodeIndexAMDX);
  // VKAPI_ATTR void VKAPI_CALL vkCmdInitializeGraphScratchMemoryAMDX(
  // VkCommandBuffer commandBuffer, VkDeviceAddress scratch);
  VKFUNDEFINE(vkCmdInitializeGraphScratchMemoryAMDX);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDispatchGraphAMDX( VkCommandBuffer
  // commandBuffer, VkDeviceAddress scratch, const VkDispatchGraphCountInfoAMDX*
  // pCountInfo);
  VKFUNDEFINE(vkCmdDispatchGraphAMDX);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDispatchGraphIndirectAMDX( VkCommandBuffer
  // commandBuffer, VkDeviceAddress scratch, const VkDispatchGraphCountInfoAMDX*
  // pCountInfo);
  VKFUNDEFINE(vkCmdDispatchGraphIndirectAMDX);
  // VKAPI_ATTR void VKAPI_CALL vkCmdDispatchGraphIndirectCountAMDX(
  // VkCommandBuffer commandBuffer, VkDeviceAddress scratch, VkDeviceAddress
  // countInfo);
  VKFUNDEFINE(vkCmdDispatchGraphIndirectCountAMDX);
#endif

  bool TRY_LOAD_VK_VERSION_1_0();                                     // 0
  bool TRY_LOAD_VK_VERSION_1_1();                                     // 1
  bool TRY_LOAD_VK_VERSION_1_2();                                     // 2
  bool TRY_LOAD_VK_VERSION_1_3();                                     // 3
  bool TRY_LOAD_VK_KHR_swapchain();                                   // 4
  bool TRY_LOAD_VK_KHR_display_swapchain();                           // 5
  bool TRY_LOAD_VK_KHR_video_queue();                                 // 6
  bool TRY_LOAD_VK_KHR_video_decode_queue();                          // 7
  bool TRY_LOAD_VK_KHR_dynamic_rendering();                           // 8
  bool TRY_LOAD_VK_KHR_device_group();                                // 9
  bool TRY_LOAD_VK_KHR_maintenance1();                                // 10
  bool TRY_LOAD_VK_KHR_external_memory_fd();                          // 11
  bool TRY_LOAD_VK_KHR_external_semaphore_fd();                       // 12
  bool TRY_LOAD_VK_KHR_push_descriptor();                             // 13
  bool TRY_LOAD_VK_KHR_descriptor_update_template();                  // 14
  bool TRY_LOAD_VK_KHR_create_renderpass2();                          // 15
  bool TRY_LOAD_VK_KHR_shared_presentable_image();                    // 16
  bool TRY_LOAD_VK_KHR_external_fence_fd();                           // 17
  bool TRY_LOAD_VK_KHR_performance_query();                           // 18
  bool TRY_LOAD_VK_KHR_get_memory_requirements2();                    // 19
  bool TRY_LOAD_VK_KHR_sampler_ycbcr_conversion();                    // 20
  bool TRY_LOAD_VK_KHR_bind_memory2();                                // 21
  bool TRY_LOAD_VK_KHR_maintenance3();                                // 22
  bool TRY_LOAD_VK_KHR_draw_indirect_count();                         // 23
  bool TRY_LOAD_VK_KHR_timeline_semaphore();                          // 24
  bool TRY_LOAD_VK_KHR_fragment_shading_rate();                       // 25
  bool TRY_LOAD_VK_KHR_dynamic_rendering_local_read();                // 26
  bool TRY_LOAD_VK_KHR_present_wait();                                // 27
  bool TRY_LOAD_VK_KHR_buffer_device_address();                       // 28
  bool TRY_LOAD_VK_KHR_deferred_host_operations();                    // 29
  bool TRY_LOAD_VK_KHR_pipeline_executable_properties();              // 30
  bool TRY_LOAD_VK_KHR_map_memory2();                                 // 31
  bool TRY_LOAD_VK_KHR_video_encode_queue();                          // 32
  bool TRY_LOAD_VK_KHR_synchronization2();                            // 33
  bool TRY_LOAD_VK_KHR_copy_commands2();                              // 34
  bool TRY_LOAD_VK_KHR_ray_tracing_maintenance1();                    // 35
  bool TRY_LOAD_VK_KHR_maintenance4();                                // 36
  bool TRY_LOAD_VK_KHR_maintenance5();                                // 37
  bool TRY_LOAD_VK_KHR_line_rasterization();                          // 38
  bool TRY_LOAD_VK_KHR_calibrated_timestamps();                       // 39
  bool TRY_LOAD_VK_KHR_maintenance6();                                // 40
  bool TRY_LOAD_VK_EXT_debug_marker();                                // 41
  bool TRY_LOAD_VK_EXT_transform_feedback();                          // 42
  bool TRY_LOAD_VK_NVX_binary_import();                               // 43
  bool TRY_LOAD_VK_NVX_image_view_handle();                           // 44
  bool TRY_LOAD_VK_AMD_draw_indirect_count();                         // 45
  bool TRY_LOAD_VK_AMD_shader_info();                                 // 46
  bool TRY_LOAD_VK_EXT_conditional_rendering();                       // 47
  bool TRY_LOAD_VK_NV_clip_space_w_scaling();                         // 48
  bool TRY_LOAD_VK_EXT_display_control();                             // 49
  bool TRY_LOAD_VK_GOOGLE_display_timing();                           // 50
  bool TRY_LOAD_VK_EXT_discard_rectangles();                          // 51
  bool TRY_LOAD_VK_EXT_hdr_metadata();                                // 52
  bool TRY_LOAD_VK_EXT_debug_utils();                                 // 53
  bool TRY_LOAD_VK_EXT_sample_locations();                            // 54
  bool TRY_LOAD_VK_EXT_image_drm_format_modifier();                   // 55
  bool TRY_LOAD_VK_EXT_validation_cache();                            // 56
  bool TRY_LOAD_VK_NV_shading_rate_image();                           // 57
  bool TRY_LOAD_VK_NV_ray_tracing();                                  // 58
  bool TRY_LOAD_VK_EXT_external_memory_host();                        // 59
  bool TRY_LOAD_VK_AMD_buffer_marker();                               // 60
  bool TRY_LOAD_VK_EXT_calibrated_timestamps();                       // 61
  bool TRY_LOAD_VK_NV_mesh_shader();                                  // 62
  bool TRY_LOAD_VK_NV_scissor_exclusive();                            // 63
  bool TRY_LOAD_VK_NV_device_diagnostic_checkpoints();                // 64
  bool TRY_LOAD_VK_INTEL_performance_query();                         // 65
  bool TRY_LOAD_VK_AMD_display_native_hdr();                          // 66
  bool TRY_LOAD_VK_EXT_buffer_device_address();                       // 67
  bool TRY_LOAD_VK_EXT_line_rasterization();                          // 68
  bool TRY_LOAD_VK_EXT_host_query_reset();                            // 69
  bool TRY_LOAD_VK_EXT_extended_dynamic_state();                      // 70
  bool TRY_LOAD_VK_EXT_host_image_copy();                             // 71
  bool TRY_LOAD_VK_EXT_swapchain_maintenance1();                      // 72
  bool TRY_LOAD_VK_NV_device_generated_commands();                    // 73
  bool TRY_LOAD_VK_EXT_depth_bias_control();                          // 74
  bool TRY_LOAD_VK_EXT_private_data();                                // 75
  bool TRY_LOAD_VK_NV_cuda_kernel_launch();                           // 76
  bool TRY_LOAD_VK_EXT_descriptor_buffer();                           // 77
  bool TRY_LOAD_VK_NV_fragment_shading_rate_enums();                  // 78
  bool TRY_LOAD_VK_EXT_device_fault();                                // 79
  bool TRY_LOAD_VK_EXT_vertex_input_dynamic_state();                  // 80
  bool TRY_LOAD_VK_HUAWEI_subpass_shading();                          // 81
  bool TRY_LOAD_VK_HUAWEI_invocation_mask();                          // 82
  bool TRY_LOAD_VK_NV_external_memory_rdma();                         // 83
  bool TRY_LOAD_VK_EXT_pipeline_properties();                         // 84
  bool TRY_LOAD_VK_EXT_extended_dynamic_state2();                     // 85
  bool TRY_LOAD_VK_EXT_color_write_enable();                          // 86
  bool TRY_LOAD_VK_EXT_multi_draw();                                  // 87
  bool TRY_LOAD_VK_EXT_opacity_micromap();                            // 88
  bool TRY_LOAD_VK_HUAWEI_cluster_culling_shader();                   // 89
  bool TRY_LOAD_VK_EXT_pageable_device_local_memory();                // 90
  bool TRY_LOAD_VK_VALVE_descriptor_set_host_mapping();               // 91
  bool TRY_LOAD_VK_NV_copy_memory_indirect();                         // 92
  bool TRY_LOAD_VK_NV_memory_decompression();                         // 93
  bool TRY_LOAD_VK_NV_device_generated_commands_compute();            // 94
  bool TRY_LOAD_VK_EXT_extended_dynamic_state3();                     // 95
  bool TRY_LOAD_VK_EXT_shader_module_identifier();                    // 96
  bool TRY_LOAD_VK_NV_optical_flow();                                 // 97
  bool TRY_LOAD_VK_EXT_shader_object();                               // 98
  bool TRY_LOAD_VK_QCOM_tile_properties();                            // 99
  bool TRY_LOAD_VK_NV_low_latency2();                                 // 100
  bool TRY_LOAD_VK_EXT_attachment_feedback_loop_dynamic_state();      // 101
  bool TRY_LOAD_VK_KHR_acceleration_structure();                      // 102
  bool TRY_LOAD_VK_KHR_ray_tracing_pipeline();                        // 103
  bool TRY_LOAD_VK_EXT_mesh_shader();                                 // 104
  bool TRY_LOAD_VK_ANDROID_external_memory_android_hardware_buffer(); // 105
  bool TRY_LOAD_VK_FUCHSIA_external_memory();                         // 106
  bool TRY_LOAD_VK_FUCHSIA_external_semaphore();                      // 107
  bool TRY_LOAD_VK_FUCHSIA_buffer_collection();                       // 108
  bool TRY_LOAD_VK_KHR_external_memory_win32();                       // 109
  bool TRY_LOAD_VK_KHR_external_semaphore_win32();                    // 110
  bool TRY_LOAD_VK_KHR_external_fence_win32();                        // 111
  bool TRY_LOAD_VK_NV_external_memory_win32();                        // 112
  bool TRY_LOAD_VK_EXT_full_screen_exclusive();                       // 113
  bool TRY_LOAD_VK_EXT_metal_objects();                               // 114
  bool TRY_LOAD_VK_QNX_external_memory_screen_buffer();               // 115
  bool TRY_LOAD_VK_AMDX_shader_enqueue();                             // 116

  typedef bool (VkDeviceLayoutLoader::*EXTLOADER)();
  using MAP = ExtendsMap<std::string, EXTLOADER, size_t>;
  static std::vector<EXTLOADER> TRAN2FUN(const std::vector<std::string> &list);
  static std::vector<size_t> TRAN(const std::vector<std::string> &list);

  bool MappingToNeedLoad(const std::vector<size_t> &list);
  static std::vector<EXTLOADER>
  TRAN2FUN(const std::vector<std::string> &&list) {
    return TRAN2FUN(list);
  }
  static std::vector<size_t> TRAN(std::vector<std::string> &&list) {
    return TRAN(list);
  }
  inline bool MappingToNeedLoad(const std::vector<std::string> &list) {
    auto encd = TRAN(list);
    return MappingToNeedLoad(encd);
  }
  inline bool MappingToNeedLoad(std::vector<std::string> &&list) {
    return MappingToNeedLoad(list);
  }

  Flags LoadAll();
};
extern LIBHANNLE GetVkLibHandle();
class VkInstanceLayoutLoaderPHILoader : public VkInstanceLayoutLoader {
public:
  LIBHANNLE libHandle;
  VkInstance vkinstance;
  VkInstanceLayoutLoaderPHILoader();
  bool init();
  static APIProc phiLoadFunc(void *userptr, std::string_view name);
};
class VkDeviceLayoutLoaderPHILoader : public VkDeviceLayoutLoader {
public:
  LIBHANNLE libHandle;
  VkDevice vkdevice;
  VkDeviceLayoutLoaderPHILoader();
  bool init();
  static APIProc phiLoadFunc(void *userptr, std::string_view name);
};
// only one device
class VkPHILoader : public VkInstanceLayoutLoaderPHILoader,
                    public VkDeviceLayoutLoaderPHILoader {
public:
  VkPHILoader();
  LIBHANNLE lib;
  bool init();
  bool SetLoadExts(std::vector<std::string> &mapc);
  bool LoadAll();
  static bool TranVKVersionToMap(uint32_t vkversion,
                                 std::vector<std::string> &sa);
};
#undef VKFUNDEFINE