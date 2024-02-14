#include "VkLoader.hpp"

#define IMVKPFUN(NAME)                                                         \
  isAllLoaded = ((NAME = (PFN_##NAME)LoadFunc(userptr, #NAME)) != nullptr)     \
                    ? isAllLoaded                                              \
                    : false;
#define IFNEEDLOADVKEXT(NAME)                                                  \
  isAllLoaded.IS_LOAD_##NAME =                                                 \
      (NeedLoad.IS_LOAD_##NAME ? TRY_LOAD_##NAME##() : true);

VkInstanceLayoutLoaderPHILoader::VkInstanceLayoutLoaderPHILoader() {
  libHandle = nullptr;
  vkinstance = VK_NULL_HANDLE;
  userptr = this;
  LoadFunc = phiLoadFunc;
}
bool VkInstanceLayoutLoaderPHILoader::init() {
  if (!libHandle) {
    libHandle = GetVkLibHandle();
  }
  return libHandle;
}
APIProc VkInstanceLayoutLoaderPHILoader::phiLoadFunc(void *userptr,
                                                     std::string_view name) {
  VkInstanceLayoutLoaderPHILoader *context =
      (VkInstanceLayoutLoaderPHILoader *)userptr;
  if (!context) {
    return 0;
  }
  if (context->vkinstance && context->vkGetInstanceProcAddr) {
    return context->vkGetInstanceProcAddr(context->vkinstance, name.data());
  }
  if (context->libHandle) {
    return GetPtrFrom_handle(context->libHandle, name.data());
  }
  return 0;
}
VkDeviceLayoutLoaderPHILoader::VkDeviceLayoutLoaderPHILoader() {
  libHandle = nullptr;
  vkdevice = VK_NULL_HANDLE;
  userptr = this;
  LoadFunc = phiLoadFunc;
}
bool VkDeviceLayoutLoaderPHILoader::init() {
  if (!libHandle) {
    libHandle = GetVkLibHandle();
  }
  return libHandle;
}
APIProc VkDeviceLayoutLoaderPHILoader::phiLoadFunc(void *userptr,
                                                   std::string_view name) {
  VkDeviceLayoutLoaderPHILoader *context =
      (VkDeviceLayoutLoaderPHILoader *)userptr;
  if (!context) {
    return 0;
  }
  if (context->vkdevice && context->vkGetDeviceProcAddr) {
    return context->vkGetDeviceProcAddr(context->vkdevice, name.data());
  }
  if (context->libHandle) {
    return GetPtrFrom_handle(context->libHandle, name.data());
  }
  return 0;
}
// only one device
VkPHILoader::VkPHILoader() {}
bool VkPHILoader::init() {
  if (!lib) {
    VkPHILoader::lib = GetVkLibHandle();
  }
  VkInstanceLayoutLoaderPHILoader::libHandle = lib;
  VkDeviceLayoutLoaderPHILoader::libHandle = lib;
  return VkPHILoader::lib;
}
bool VkPHILoader::SetLoadExts(std::vector<std::string> &mapc) {
  VkInstanceLayoutLoaderPHILoader::MappingToNeedLoad(mapc);
  VkDeviceLayoutLoaderPHILoader::MappingToNeedLoad(mapc);
  return true;
}
bool VkPHILoader::LoadAll() {
  return VkInstanceLayoutLoaderPHILoader::LoadAll().IsAllTrue() &&
         VkDeviceLayoutLoaderPHILoader::LoadAll().IsAllTrue();
}
bool VkPHILoader::TranVKVersionToMap(uint32_t vkversion,
                                     std::vector<std::string> &sa) {
  int major = VK_VERSION_MAJOR(vkversion);
  int minor = VK_VERSION_MINOR(vkversion);
  sa.push_back("VK_VERSION_1_0");
  if (major != 1) {
    return false;
  }
  if (minor >= 1)
    sa.push_back("VK_VERSION_1_1");
  if (minor >= 2)
    sa.push_back("VK_VERSION_1_2");
  if (minor >= 3)
    sa.push_back("VK_VERSION_1_3");
  if (minor >= 4) //?
    sa.push_back("VK_VERSION_1_4");
  if (minor >= 5)
    sa.push_back("VK_VERSION_1_5");
  return true;
}
VkInstanceLayoutLoader::VkInstanceLayoutLoader() {
  NowState.AllSetFalse();
  NeedLoad.AllSetFalse();
}
VkInstanceLayoutLoader::Flags VkInstanceLayoutLoader::LoadAll() {
  Flags isAllLoaded;
  isAllLoaded.AllSetFalse();
  IFNEEDLOADVKEXT(VK_VERSION_1_0);
  IFNEEDLOADVKEXT(VK_VERSION_1_1);
  IFNEEDLOADVKEXT(VK_VERSION_1_3);
  IFNEEDLOADVKEXT(VK_KHR_surface);
  IFNEEDLOADVKEXT(VK_KHR_swapchain);
  IFNEEDLOADVKEXT(VK_KHR_display);
  IFNEEDLOADVKEXT(VK_KHR_video_queue);
  IFNEEDLOADVKEXT(VK_KHR_get_physical_device_properties2);
  IFNEEDLOADVKEXT(VK_KHR_device_group_creation);
  IFNEEDLOADVKEXT(VK_KHR_external_memory_capabilities);
  IFNEEDLOADVKEXT(VK_KHR_external_semaphore_capabilities);
  IFNEEDLOADVKEXT(VK_KHR_external_fence_capabilities);
  IFNEEDLOADVKEXT(VK_KHR_performance_query);
  IFNEEDLOADVKEXT(VK_KHR_get_surface_capabilities2);
  IFNEEDLOADVKEXT(VK_KHR_get_display_properties2);
  IFNEEDLOADVKEXT(VK_KHR_fragment_shading_rate);
  IFNEEDLOADVKEXT(VK_KHR_video_encode_queue);
  IFNEEDLOADVKEXT(VK_KHR_cooperative_matrix);
  IFNEEDLOADVKEXT(VK_KHR_calibrated_timestamps);
  IFNEEDLOADVKEXT(VK_EXT_debug_report);
  IFNEEDLOADVKEXT(VK_NV_external_memory_capabilities);
  IFNEEDLOADVKEXT(VK_EXT_direct_mode_display);
  IFNEEDLOADVKEXT(VK_EXT_display_surface_counter);
  IFNEEDLOADVKEXT(VK_EXT_debug_utils);
  IFNEEDLOADVKEXT(VK_EXT_sample_locations);
  IFNEEDLOADVKEXT(VK_EXT_calibrated_timestamps);
  IFNEEDLOADVKEXT(VK_EXT_tooling_info);
  IFNEEDLOADVKEXT(VK_NV_cooperative_matrix);
  IFNEEDLOADVKEXT(VK_NV_coverage_reduction_mode);
  IFNEEDLOADVKEXT(VK_EXT_headless_surface);
  IFNEEDLOADVKEXT(VK_EXT_acquire_drm_display);
  IFNEEDLOADVKEXT(VK_NV_optical_flow);
  IFNEEDLOADVKEXT(VK_KHR_android_surface);
  IFNEEDLOADVKEXT(VK_FUCHSIA_imagepipe_surface);
  IFNEEDLOADVKEXT(VK_GGP_stream_descriptor_surface);
  IFNEEDLOADVKEXT(VK_MVK_ios_surface);
  IFNEEDLOADVKEXT(VK_MVK_macos_surface);
  IFNEEDLOADVKEXT(VK_NN_vi_surface);
  IFNEEDLOADVKEXT(VK_KHR_wayland_surface);
  IFNEEDLOADVKEXT(VK_KHR_win32_surface);
  IFNEEDLOADVKEXT(VK_EXT_full_screen_exclusive);
  IFNEEDLOADVKEXT(VK_NV_acquire_winrt_display);
  IFNEEDLOADVKEXT(VK_KHR_xcb_surface);
  IFNEEDLOADVKEXT(VK_KHR_xlib_surface);
  IFNEEDLOADVKEXT(VK_EXT_directfb_surface);
  IFNEEDLOADVKEXT(VK_EXT_acquire_xlib_display);
  IFNEEDLOADVKEXT(VK_EXT_metal_surface);
  IFNEEDLOADVKEXT(VK_QNX_screen_surface);
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_VERSION_1_0() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreateInstance);
  IMVKPFUN(vkDestroyInstance);
  IMVKPFUN(vkEnumeratePhysicalDevices);
  IMVKPFUN(vkGetPhysicalDeviceFeatures);
  IMVKPFUN(vkGetPhysicalDeviceFormatProperties);
  IMVKPFUN(vkGetPhysicalDeviceImageFormatProperties);
  IMVKPFUN(vkGetPhysicalDeviceProperties);
  IMVKPFUN(vkGetPhysicalDeviceQueueFamilyProperties);
  IMVKPFUN(vkGetPhysicalDeviceMemoryProperties);
  IMVKPFUN(vkGetInstanceProcAddr);
  IMVKPFUN(vkCreateDevice);
  IMVKPFUN(vkEnumerateInstanceExtensionProperties);
  IMVKPFUN(vkEnumerateDeviceExtensionProperties);
  IMVKPFUN(vkEnumerateInstanceLayerProperties);
  IMVKPFUN(vkEnumerateDeviceLayerProperties);
  IMVKPFUN(vkGetPhysicalDeviceSparseImageFormatProperties);
  NowState.IS_LOAD_VK_VERSION_1_0 = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_VERSION_1_1() {
  bool isAllLoaded = true;
  IMVKPFUN(vkEnumerateInstanceVersion);
  IMVKPFUN(vkEnumeratePhysicalDeviceGroups);
  IMVKPFUN(vkGetPhysicalDeviceFeatures2);
  IMVKPFUN(vkGetPhysicalDeviceProperties2);
  IMVKPFUN(vkGetPhysicalDeviceFormatProperties2);
  IMVKPFUN(vkGetPhysicalDeviceImageFormatProperties2);
  IMVKPFUN(vkGetPhysicalDeviceQueueFamilyProperties2);
  IMVKPFUN(vkGetPhysicalDeviceMemoryProperties2);
  IMVKPFUN(vkGetPhysicalDeviceSparseImageFormatProperties2);
  IMVKPFUN(vkGetPhysicalDeviceExternalBufferProperties);
  IMVKPFUN(vkGetPhysicalDeviceExternalFenceProperties);
  IMVKPFUN(vkGetPhysicalDeviceExternalSemaphoreProperties);
  NowState.IS_LOAD_VK_VERSION_1_1 = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_VERSION_1_3() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceToolProperties);
  NowState.IS_LOAD_VK_VERSION_1_3 = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_surface() {
  bool isAllLoaded = true;
  IMVKPFUN(vkDestroySurfaceKHR);
  IMVKPFUN(vkGetPhysicalDeviceSurfaceSupportKHR);
  IMVKPFUN(vkGetPhysicalDeviceSurfaceCapabilitiesKHR);
  IMVKPFUN(vkGetPhysicalDeviceSurfaceFormatsKHR);
  IMVKPFUN(vkGetPhysicalDeviceSurfacePresentModesKHR);
  NowState.IS_LOAD_VK_KHR_surface = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_swapchain() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDevicePresentRectanglesKHR);
  NowState.IS_LOAD_VK_KHR_swapchain = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_display() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceDisplayPropertiesKHR);
  IMVKPFUN(vkGetPhysicalDeviceDisplayPlanePropertiesKHR);
  IMVKPFUN(vkGetDisplayPlaneSupportedDisplaysKHR);
  IMVKPFUN(vkGetDisplayModePropertiesKHR);
  IMVKPFUN(vkCreateDisplayModeKHR);
  IMVKPFUN(vkGetDisplayPlaneCapabilitiesKHR);
  IMVKPFUN(vkCreateDisplayPlaneSurfaceKHR);
  NowState.IS_LOAD_VK_KHR_display = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_video_queue() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceVideoCapabilitiesKHR);
  IMVKPFUN(vkGetPhysicalDeviceVideoFormatPropertiesKHR);
  NowState.IS_LOAD_VK_KHR_video_queue = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_get_physical_device_properties2() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceFeatures2KHR);
  IMVKPFUN(vkGetPhysicalDeviceProperties2KHR);
  IMVKPFUN(vkGetPhysicalDeviceFormatProperties2KHR);
  IMVKPFUN(vkGetPhysicalDeviceImageFormatProperties2KHR);
  IMVKPFUN(vkGetPhysicalDeviceQueueFamilyProperties2KHR);
  IMVKPFUN(vkGetPhysicalDeviceMemoryProperties2KHR);
  IMVKPFUN(vkGetPhysicalDeviceSparseImageFormatProperties2KHR);
  NowState.IS_LOAD_VK_KHR_get_physical_device_properties2 = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_device_group_creation() {
  bool isAllLoaded = true;
  IMVKPFUN(vkEnumeratePhysicalDeviceGroupsKHR);
  NowState.IS_LOAD_VK_KHR_device_group_creation = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_external_memory_capabilities() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceExternalBufferPropertiesKHR);
  NowState.IS_LOAD_VK_KHR_external_memory_capabilities = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_external_semaphore_capabilities() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceExternalSemaphorePropertiesKHR);
  NowState.IS_LOAD_VK_KHR_external_semaphore_capabilities = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_external_fence_capabilities() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceExternalFencePropertiesKHR);
  NowState.IS_LOAD_VK_KHR_external_fence_capabilities = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_performance_query() {
  bool isAllLoaded = true;
  IMVKPFUN(vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR);
  IMVKPFUN(vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR);
  NowState.IS_LOAD_VK_KHR_performance_query = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_get_surface_capabilities2() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceSurfaceCapabilities2KHR);
  IMVKPFUN(vkGetPhysicalDeviceSurfaceFormats2KHR);
  NowState.IS_LOAD_VK_KHR_get_surface_capabilities2 = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_get_display_properties2() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceDisplayProperties2KHR);
  IMVKPFUN(vkGetPhysicalDeviceDisplayPlaneProperties2KHR);
  IMVKPFUN(vkGetDisplayModeProperties2KHR);
  IMVKPFUN(vkGetDisplayPlaneCapabilities2KHR);
  NowState.IS_LOAD_VK_KHR_get_display_properties2 = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_fragment_shading_rate() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceFragmentShadingRatesKHR);
  NowState.IS_LOAD_VK_KHR_fragment_shading_rate = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_video_encode_queue() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR);
  NowState.IS_LOAD_VK_KHR_video_encode_queue = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_cooperative_matrix() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR);
  NowState.IS_LOAD_VK_KHR_cooperative_matrix = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_calibrated_timestamps() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceCalibrateableTimeDomainsKHR);
  NowState.IS_LOAD_VK_KHR_calibrated_timestamps = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_debug_report() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreateDebugReportCallbackEXT);
  IMVKPFUN(vkDestroyDebugReportCallbackEXT);
  IMVKPFUN(vkDebugReportMessageEXT);
  NowState.IS_LOAD_VK_EXT_debug_report = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_NV_external_memory_capabilities() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceExternalImageFormatPropertiesNV);
  NowState.IS_LOAD_VK_NV_external_memory_capabilities = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_direct_mode_display() {
  bool isAllLoaded = true;
  IMVKPFUN(vkReleaseDisplayEXT);
  NowState.IS_LOAD_VK_EXT_direct_mode_display = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_display_surface_counter() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceSurfaceCapabilities2EXT);
  NowState.IS_LOAD_VK_EXT_display_surface_counter = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_debug_utils() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreateDebugUtilsMessengerEXT);
  IMVKPFUN(vkDestroyDebugUtilsMessengerEXT);
  IMVKPFUN(vkSubmitDebugUtilsMessageEXT);
  NowState.IS_LOAD_VK_EXT_debug_utils = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_sample_locations() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceMultisamplePropertiesEXT);
  NowState.IS_LOAD_VK_EXT_sample_locations = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_calibrated_timestamps() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceCalibrateableTimeDomainsEXT);
  NowState.IS_LOAD_VK_EXT_calibrated_timestamps = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_tooling_info() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceToolPropertiesEXT);
  NowState.IS_LOAD_VK_EXT_tooling_info = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_NV_cooperative_matrix() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceCooperativeMatrixPropertiesNV);
  NowState.IS_LOAD_VK_NV_cooperative_matrix = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_NV_coverage_reduction_mode() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV);
  NowState.IS_LOAD_VK_NV_coverage_reduction_mode = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_headless_surface() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreateHeadlessSurfaceEXT);
  NowState.IS_LOAD_VK_EXT_headless_surface = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_acquire_drm_display() {
  bool isAllLoaded = true;
  IMVKPFUN(vkAcquireDrmDisplayEXT);
  IMVKPFUN(vkGetDrmDisplayEXT);
  NowState.IS_LOAD_VK_EXT_acquire_drm_display = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_NV_optical_flow() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPhysicalDeviceOpticalFlowImageFormatsNV);
  NowState.IS_LOAD_VK_NV_optical_flow = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_android_surface() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
  IMVKPFUN(vkCreateAndroidSurfaceKHR);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_KHR_android_surface = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_FUCHSIA_imagepipe_surface() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_FUCHSIA
  IMVKPFUN(vkCreateImagePipeSurfaceFUCHSIA);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_FUCHSIA_imagepipe_surface = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_GGP_stream_descriptor_surface() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_GGP
  IMVKPFUN(vkCreateStreamDescriptorSurfaceGGP);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_GGP_stream_descriptor_surface = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_MVK_ios_surface() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_IOS_MVK
  IMVKPFUN(vkCreateIOSSurfaceMVK);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_MVK_ios_surface = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_MVK_macos_surface() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_MACOS_MVK
  IMVKPFUN(vkCreateMacOSSurfaceMVK);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_MVK_macos_surface = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_NN_vi_surface() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_VI_NN
  IMVKPFUN(vkCreateViSurfaceNN);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_NN_vi_surface = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_wayland_surface() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
  IMVKPFUN(vkCreateWaylandSurfaceKHR);
  IMVKPFUN(vkGetPhysicalDeviceWaylandPresentationSupportKHR);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_KHR_wayland_surface = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_win32_surface() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_WIN32_KHR
  IMVKPFUN(vkCreateWin32SurfaceKHR);
  IMVKPFUN(vkGetPhysicalDeviceWin32PresentationSupportKHR);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_KHR_win32_surface = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_full_screen_exclusive() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_WIN32_KHR
  IMVKPFUN(vkGetPhysicalDeviceSurfacePresentModes2EXT);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_EXT_full_screen_exclusive = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_NV_acquire_winrt_display() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_WIN32_KHR
  IMVKPFUN(vkAcquireWinrtDisplayNV);
  IMVKPFUN(vkGetWinrtDisplayNV);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_NV_acquire_winrt_display = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_xcb_surface() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_XCB_KHR
  IMVKPFUN(vkCreateXcbSurfaceKHR);
  IMVKPFUN(vkGetPhysicalDeviceXcbPresentationSupportKHR);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_KHR_xcb_surface = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_xlib_surface() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_XLIB_KHR
  IMVKPFUN(vkCreateXlibSurfaceKHR);
  IMVKPFUN(vkGetPhysicalDeviceXlibPresentationSupportKHR);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_KHR_xlib_surface = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_directfb_surface() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
  IMVKPFUN(vkCreateDirectFBSurfaceEXT);
  IMVKPFUN(vkGetPhysicalDeviceDirectFBPresentationSupportEXT);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_EXT_directfb_surface = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_acquire_xlib_display() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
  IMVKPFUN(vkAcquireXlibDisplayEXT);
  IMVKPFUN(vkGetRandROutputDisplayEXT);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_EXT_acquire_xlib_display = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_metal_surface() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_METAL_EXT
  IMVKPFUN(vkCreateMetalSurfaceEXT);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_EXT_metal_surface = isAllLoaded;
  return isAllLoaded;
}
bool VkInstanceLayoutLoader::TRY_LOAD_VK_QNX_screen_surface() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_SCREEN_QNX
  IMVKPFUN(vkCreateScreenSurfaceQNX);
  IMVKPFUN(vkGetPhysicalDeviceScreenPresentationSupportQNX);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_QNX_screen_surface = isAllLoaded;
  return isAllLoaded;
}
static VkInstanceLayoutLoader::VkInstanceLayoutLoader::MAP
    VkInstanceLayoutLoadermapping = {
        {{"VK_VERSION_1_0", &VkInstanceLayoutLoader::TRY_LOAD_VK_VERSION_1_0,
          0},
         {"VK_VERSION_1_1", &VkInstanceLayoutLoader::TRY_LOAD_VK_VERSION_1_1,
          1},
         {"VK_VERSION_1_3", &VkInstanceLayoutLoader::TRY_LOAD_VK_VERSION_1_3,
          2},
         {"VK_KHR_surface", &VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_surface,
          3},
         {"VK_KHR_swapchain",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_swapchain, 4},
         {"VK_KHR_display", &VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_display,
          5},
         {"VK_KHR_video_queue",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_video_queue, 6},
         {"VK_KHR_get_physical_device_properties2",
          &VkInstanceLayoutLoader::
              TRY_LOAD_VK_KHR_get_physical_device_properties2,
          7},
         {"VK_KHR_device_group_creation",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_device_group_creation, 8},
         {"VK_KHR_external_memory_capabilities",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_external_memory_capabilities,
          9},
         {"VK_KHR_external_semaphore_capabilities",
          &VkInstanceLayoutLoader::
              TRY_LOAD_VK_KHR_external_semaphore_capabilities,
          10},
         {"VK_KHR_external_fence_capabilities",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_external_fence_capabilities,
          11},
         {"VK_KHR_performance_query",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_performance_query, 12},
         {"VK_KHR_get_surface_capabilities2",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_get_surface_capabilities2,
          13},
         {"VK_KHR_get_display_properties2",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_get_display_properties2, 14},
         {"VK_KHR_fragment_shading_rate",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_fragment_shading_rate, 15},
         {"VK_KHR_video_encode_queue",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_video_encode_queue, 16},
         {"VK_KHR_cooperative_matrix",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_cooperative_matrix, 17},
         {"VK_KHR_calibrated_timestamps",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_calibrated_timestamps, 18},
         {"VK_EXT_debug_report",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_debug_report, 19},
         {"VK_NV_external_memory_capabilities",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_NV_external_memory_capabilities,
          20},
         {"VK_EXT_direct_mode_display",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_direct_mode_display, 21},
         {"VK_EXT_display_surface_counter",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_display_surface_counter, 22},
         {"VK_EXT_debug_utils",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_debug_utils, 23},
         {"VK_EXT_sample_locations",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_sample_locations, 24},
         {"VK_EXT_calibrated_timestamps",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_calibrated_timestamps, 25},
         {"VK_EXT_tooling_info",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_tooling_info, 26},
         {"VK_NV_cooperative_matrix",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_NV_cooperative_matrix, 27},
         {"VK_NV_coverage_reduction_mode",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_NV_coverage_reduction_mode, 28},
         {"VK_EXT_headless_surface",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_headless_surface, 29},
         {"VK_EXT_acquire_drm_display",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_acquire_drm_display, 30},
         {"VK_NV_optical_flow",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_NV_optical_flow, 31},
         {"VK_KHR_android_surface",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_android_surface, 32},
         {"VK_FUCHSIA_imagepipe_surface",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_FUCHSIA_imagepipe_surface, 33},
         {"VK_GGP_stream_descriptor_surface",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_GGP_stream_descriptor_surface,
          34},
         {"VK_MVK_ios_surface",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_MVK_ios_surface, 35},
         {"VK_MVK_macos_surface",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_MVK_macos_surface, 36},
         {"VK_NN_vi_surface",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_NN_vi_surface, 37},
         {"VK_KHR_wayland_surface",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_wayland_surface, 38},
         {"VK_KHR_win32_surface",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_win32_surface, 39},
         {"VK_EXT_full_screen_exclusive",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_full_screen_exclusive, 40},
         {"VK_NV_acquire_winrt_display",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_NV_acquire_winrt_display, 41},
         {"VK_KHR_xcb_surface",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_xcb_surface, 42},
         {"VK_KHR_xlib_surface",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_KHR_xlib_surface, 43},
         {"VK_EXT_directfb_surface",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_directfb_surface, 44},
         {"VK_EXT_acquire_xlib_display",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_acquire_xlib_display, 45},
         {"VK_EXT_metal_surface",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_EXT_metal_surface, 46},
         {"VK_QNX_screen_surface",
          &VkInstanceLayoutLoader::TRY_LOAD_VK_QNX_screen_surface, 47}}};
std::vector<VkInstanceLayoutLoader::VkInstanceLayoutLoader::EXTLOADER>
VkInstanceLayoutLoader::TRAN2FUN(const std::vector<std::string> &list) {
  std::vector<EXTLOADER> output;
  for (auto &s : list) {
    auto as = VkInstanceLayoutLoadermapping.TYPE1map[s];
    if (as) {
      output.push_back(as->type2);
    } else {
      output.push_back(0);
    }
  }
  return output;
}
std::vector<size_t>
VkInstanceLayoutLoader::TRAN(const std::vector<std::string> &list) {
  std::vector<size_t> output;
  for (auto &s : list) {
    auto as = VkInstanceLayoutLoadermapping.TYPE1map[s];
    if (as) {
      output.push_back(as->type3);
    } else {
      output.push_back(-1);
    }
  }
  return output;
}
bool VkInstanceLayoutLoader::MappingToNeedLoad(
    const std::vector<size_t> &list) {
  NeedLoad.AllSetFalse();
  for (auto &bit : list) {
    if (bit >= NeedLoad.bits) {
      continue;
    }
    NeedLoad.SetBit(bit, true);
  }
  return true;
}
VkDeviceLayoutLoader::VkDeviceLayoutLoader() {
  NowState.AllSetFalse();
  NeedLoad.AllSetFalse();
}
VkDeviceLayoutLoader::Flags VkDeviceLayoutLoader::LoadAll() {
  Flags isAllLoaded;
  isAllLoaded.AllSetFalse();
  IFNEEDLOADVKEXT(VK_VERSION_1_0);
  IFNEEDLOADVKEXT(VK_VERSION_1_1);
  IFNEEDLOADVKEXT(VK_VERSION_1_2);
  IFNEEDLOADVKEXT(VK_VERSION_1_3);
  IFNEEDLOADVKEXT(VK_KHR_swapchain);
  IFNEEDLOADVKEXT(VK_KHR_display_swapchain);
  IFNEEDLOADVKEXT(VK_KHR_video_queue);
  IFNEEDLOADVKEXT(VK_KHR_video_decode_queue);
  IFNEEDLOADVKEXT(VK_KHR_dynamic_rendering);
  IFNEEDLOADVKEXT(VK_KHR_device_group);
  IFNEEDLOADVKEXT(VK_KHR_maintenance1);
  IFNEEDLOADVKEXT(VK_KHR_external_memory_fd);
  IFNEEDLOADVKEXT(VK_KHR_external_semaphore_fd);
  IFNEEDLOADVKEXT(VK_KHR_push_descriptor);
  IFNEEDLOADVKEXT(VK_KHR_descriptor_update_template);
  IFNEEDLOADVKEXT(VK_KHR_create_renderpass2);
  IFNEEDLOADVKEXT(VK_KHR_shared_presentable_image);
  IFNEEDLOADVKEXT(VK_KHR_external_fence_fd);
  IFNEEDLOADVKEXT(VK_KHR_performance_query);
  IFNEEDLOADVKEXT(VK_KHR_get_memory_requirements2);
  IFNEEDLOADVKEXT(VK_KHR_sampler_ycbcr_conversion);
  IFNEEDLOADVKEXT(VK_KHR_bind_memory2);
  IFNEEDLOADVKEXT(VK_KHR_maintenance3);
  IFNEEDLOADVKEXT(VK_KHR_draw_indirect_count);
  IFNEEDLOADVKEXT(VK_KHR_timeline_semaphore);
  IFNEEDLOADVKEXT(VK_KHR_fragment_shading_rate);
  IFNEEDLOADVKEXT(VK_KHR_dynamic_rendering_local_read);
  IFNEEDLOADVKEXT(VK_KHR_present_wait);
  IFNEEDLOADVKEXT(VK_KHR_buffer_device_address);
  IFNEEDLOADVKEXT(VK_KHR_deferred_host_operations);
  IFNEEDLOADVKEXT(VK_KHR_pipeline_executable_properties);
  IFNEEDLOADVKEXT(VK_KHR_map_memory2);
  IFNEEDLOADVKEXT(VK_KHR_video_encode_queue);
  IFNEEDLOADVKEXT(VK_KHR_synchronization2);
  IFNEEDLOADVKEXT(VK_KHR_copy_commands2);
  IFNEEDLOADVKEXT(VK_KHR_ray_tracing_maintenance1);
  IFNEEDLOADVKEXT(VK_KHR_maintenance4);
  IFNEEDLOADVKEXT(VK_KHR_maintenance5);
  IFNEEDLOADVKEXT(VK_KHR_line_rasterization);
  IFNEEDLOADVKEXT(VK_KHR_calibrated_timestamps);
  IFNEEDLOADVKEXT(VK_KHR_maintenance6);
  IFNEEDLOADVKEXT(VK_EXT_debug_marker);
  IFNEEDLOADVKEXT(VK_EXT_transform_feedback);
  IFNEEDLOADVKEXT(VK_NVX_binary_import);
  IFNEEDLOADVKEXT(VK_NVX_image_view_handle);
  IFNEEDLOADVKEXT(VK_AMD_draw_indirect_count);
  IFNEEDLOADVKEXT(VK_AMD_shader_info);
  IFNEEDLOADVKEXT(VK_EXT_conditional_rendering);
  IFNEEDLOADVKEXT(VK_NV_clip_space_w_scaling);
  IFNEEDLOADVKEXT(VK_EXT_display_control);
  IFNEEDLOADVKEXT(VK_GOOGLE_display_timing);
  IFNEEDLOADVKEXT(VK_EXT_discard_rectangles);
  IFNEEDLOADVKEXT(VK_EXT_hdr_metadata);
  IFNEEDLOADVKEXT(VK_EXT_debug_utils);
  IFNEEDLOADVKEXT(VK_EXT_sample_locations);
  IFNEEDLOADVKEXT(VK_EXT_image_drm_format_modifier);
  IFNEEDLOADVKEXT(VK_EXT_validation_cache);
  IFNEEDLOADVKEXT(VK_NV_shading_rate_image);
  IFNEEDLOADVKEXT(VK_NV_ray_tracing);
  IFNEEDLOADVKEXT(VK_EXT_external_memory_host);
  IFNEEDLOADVKEXT(VK_AMD_buffer_marker);
  IFNEEDLOADVKEXT(VK_EXT_calibrated_timestamps);
  IFNEEDLOADVKEXT(VK_NV_mesh_shader);
  IFNEEDLOADVKEXT(VK_NV_scissor_exclusive);
  IFNEEDLOADVKEXT(VK_NV_device_diagnostic_checkpoints);
  IFNEEDLOADVKEXT(VK_INTEL_performance_query);
  IFNEEDLOADVKEXT(VK_AMD_display_native_hdr);
  IFNEEDLOADVKEXT(VK_EXT_buffer_device_address);
  IFNEEDLOADVKEXT(VK_EXT_line_rasterization);
  IFNEEDLOADVKEXT(VK_EXT_host_query_reset);
  IFNEEDLOADVKEXT(VK_EXT_extended_dynamic_state);
  IFNEEDLOADVKEXT(VK_EXT_host_image_copy);
  IFNEEDLOADVKEXT(VK_EXT_swapchain_maintenance1);
  IFNEEDLOADVKEXT(VK_NV_device_generated_commands);
  IFNEEDLOADVKEXT(VK_EXT_depth_bias_control);
  IFNEEDLOADVKEXT(VK_EXT_private_data);
  IFNEEDLOADVKEXT(VK_NV_cuda_kernel_launch);
  IFNEEDLOADVKEXT(VK_EXT_descriptor_buffer);
  IFNEEDLOADVKEXT(VK_NV_fragment_shading_rate_enums);
  IFNEEDLOADVKEXT(VK_EXT_device_fault);
  IFNEEDLOADVKEXT(VK_EXT_vertex_input_dynamic_state);
  IFNEEDLOADVKEXT(VK_HUAWEI_subpass_shading);
  IFNEEDLOADVKEXT(VK_HUAWEI_invocation_mask);
  IFNEEDLOADVKEXT(VK_NV_external_memory_rdma);
  IFNEEDLOADVKEXT(VK_EXT_pipeline_properties);
  IFNEEDLOADVKEXT(VK_EXT_extended_dynamic_state2);
  IFNEEDLOADVKEXT(VK_EXT_color_write_enable);
  IFNEEDLOADVKEXT(VK_EXT_multi_draw);
  IFNEEDLOADVKEXT(VK_EXT_opacity_micromap);
  IFNEEDLOADVKEXT(VK_HUAWEI_cluster_culling_shader);
  IFNEEDLOADVKEXT(VK_EXT_pageable_device_local_memory);
  IFNEEDLOADVKEXT(VK_VALVE_descriptor_set_host_mapping);
  IFNEEDLOADVKEXT(VK_NV_copy_memory_indirect);
  IFNEEDLOADVKEXT(VK_NV_memory_decompression);
  IFNEEDLOADVKEXT(VK_NV_device_generated_commands_compute);
  IFNEEDLOADVKEXT(VK_EXT_extended_dynamic_state3);
  IFNEEDLOADVKEXT(VK_EXT_shader_module_identifier);
  IFNEEDLOADVKEXT(VK_NV_optical_flow);
  IFNEEDLOADVKEXT(VK_EXT_shader_object);
  IFNEEDLOADVKEXT(VK_QCOM_tile_properties);
  IFNEEDLOADVKEXT(VK_NV_low_latency2);
  IFNEEDLOADVKEXT(VK_EXT_attachment_feedback_loop_dynamic_state);
  IFNEEDLOADVKEXT(VK_KHR_acceleration_structure);
  IFNEEDLOADVKEXT(VK_KHR_ray_tracing_pipeline);
  IFNEEDLOADVKEXT(VK_EXT_mesh_shader);
  IFNEEDLOADVKEXT(VK_ANDROID_external_memory_android_hardware_buffer);
  IFNEEDLOADVKEXT(VK_FUCHSIA_external_memory);
  IFNEEDLOADVKEXT(VK_FUCHSIA_external_semaphore);
  IFNEEDLOADVKEXT(VK_FUCHSIA_buffer_collection);
  IFNEEDLOADVKEXT(VK_KHR_external_memory_win32);
  IFNEEDLOADVKEXT(VK_KHR_external_semaphore_win32);
  IFNEEDLOADVKEXT(VK_KHR_external_fence_win32);
  IFNEEDLOADVKEXT(VK_NV_external_memory_win32);
  IFNEEDLOADVKEXT(VK_EXT_full_screen_exclusive);
  IFNEEDLOADVKEXT(VK_EXT_metal_objects);
  IFNEEDLOADVKEXT(VK_QNX_external_memory_screen_buffer);
  IFNEEDLOADVKEXT(VK_AMDX_shader_enqueue);
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_VERSION_1_0() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetDeviceProcAddr);
  IMVKPFUN(vkDestroyDevice);
  IMVKPFUN(vkGetDeviceQueue);
  IMVKPFUN(vkQueueSubmit);
  IMVKPFUN(vkQueueWaitIdle);
  IMVKPFUN(vkDeviceWaitIdle);
  IMVKPFUN(vkAllocateMemory);
  IMVKPFUN(vkFreeMemory);
  IMVKPFUN(vkMapMemory);
  IMVKPFUN(vkUnmapMemory);
  IMVKPFUN(vkFlushMappedMemoryRanges);
  IMVKPFUN(vkInvalidateMappedMemoryRanges);
  IMVKPFUN(vkGetDeviceMemoryCommitment);
  IMVKPFUN(vkBindBufferMemory);
  IMVKPFUN(vkBindImageMemory);
  IMVKPFUN(vkGetBufferMemoryRequirements);
  IMVKPFUN(vkGetImageMemoryRequirements);
  IMVKPFUN(vkGetImageSparseMemoryRequirements);
  IMVKPFUN(vkQueueBindSparse);
  IMVKPFUN(vkCreateFence);
  IMVKPFUN(vkDestroyFence);
  IMVKPFUN(vkResetFences);
  IMVKPFUN(vkGetFenceStatus);
  IMVKPFUN(vkWaitForFences);
  IMVKPFUN(vkCreateSemaphore);
  IMVKPFUN(vkDestroySemaphore);
  IMVKPFUN(vkCreateEvent);
  IMVKPFUN(vkDestroyEvent);
  IMVKPFUN(vkGetEventStatus);
  IMVKPFUN(vkSetEvent);
  IMVKPFUN(vkResetEvent);
  IMVKPFUN(vkCreateQueryPool);
  IMVKPFUN(vkDestroyQueryPool);
  IMVKPFUN(vkGetQueryPoolResults);
  IMVKPFUN(vkCreateBuffer);
  IMVKPFUN(vkDestroyBuffer);
  IMVKPFUN(vkCreateBufferView);
  IMVKPFUN(vkDestroyBufferView);
  IMVKPFUN(vkCreateImage);
  IMVKPFUN(vkDestroyImage);
  IMVKPFUN(vkGetImageSubresourceLayout);
  IMVKPFUN(vkCreateImageView);
  IMVKPFUN(vkDestroyImageView);
  IMVKPFUN(vkCreateShaderModule);
  IMVKPFUN(vkDestroyShaderModule);
  IMVKPFUN(vkCreatePipelineCache);
  IMVKPFUN(vkDestroyPipelineCache);
  IMVKPFUN(vkGetPipelineCacheData);
  IMVKPFUN(vkMergePipelineCaches);
  IMVKPFUN(vkCreateGraphicsPipelines);
  IMVKPFUN(vkCreateComputePipelines);
  IMVKPFUN(vkDestroyPipeline);
  IMVKPFUN(vkCreatePipelineLayout);
  IMVKPFUN(vkDestroyPipelineLayout);
  IMVKPFUN(vkCreateSampler);
  IMVKPFUN(vkDestroySampler);
  IMVKPFUN(vkCreateDescriptorSetLayout);
  IMVKPFUN(vkDestroyDescriptorSetLayout);
  IMVKPFUN(vkCreateDescriptorPool);
  IMVKPFUN(vkDestroyDescriptorPool);
  IMVKPFUN(vkResetDescriptorPool);
  IMVKPFUN(vkAllocateDescriptorSets);
  IMVKPFUN(vkFreeDescriptorSets);
  IMVKPFUN(vkUpdateDescriptorSets);
  IMVKPFUN(vkCreateFramebuffer);
  IMVKPFUN(vkDestroyFramebuffer);
  IMVKPFUN(vkCreateRenderPass);
  IMVKPFUN(vkDestroyRenderPass);
  IMVKPFUN(vkGetRenderAreaGranularity);
  IMVKPFUN(vkCreateCommandPool);
  IMVKPFUN(vkDestroyCommandPool);
  IMVKPFUN(vkResetCommandPool);
  IMVKPFUN(vkAllocateCommandBuffers);
  IMVKPFUN(vkFreeCommandBuffers);
  IMVKPFUN(vkBeginCommandBuffer);
  IMVKPFUN(vkEndCommandBuffer);
  IMVKPFUN(vkResetCommandBuffer);
  IMVKPFUN(vkCmdBindPipeline);
  IMVKPFUN(vkCmdSetViewport);
  IMVKPFUN(vkCmdSetScissor);
  IMVKPFUN(vkCmdSetLineWidth);
  IMVKPFUN(vkCmdSetDepthBias);
  IMVKPFUN(vkCmdSetBlendConstants);
  IMVKPFUN(vkCmdSetDepthBounds);
  IMVKPFUN(vkCmdSetStencilCompareMask);
  IMVKPFUN(vkCmdSetStencilWriteMask);
  IMVKPFUN(vkCmdSetStencilReference);
  IMVKPFUN(vkCmdBindDescriptorSets);
  IMVKPFUN(vkCmdBindIndexBuffer);
  IMVKPFUN(vkCmdBindVertexBuffers);
  IMVKPFUN(vkCmdDraw);
  IMVKPFUN(vkCmdDrawIndexed);
  IMVKPFUN(vkCmdDrawIndirect);
  IMVKPFUN(vkCmdDrawIndexedIndirect);
  IMVKPFUN(vkCmdDispatch);
  IMVKPFUN(vkCmdDispatchIndirect);
  IMVKPFUN(vkCmdCopyBuffer);
  IMVKPFUN(vkCmdCopyImage);
  IMVKPFUN(vkCmdBlitImage);
  IMVKPFUN(vkCmdCopyBufferToImage);
  IMVKPFUN(vkCmdCopyImageToBuffer);
  IMVKPFUN(vkCmdUpdateBuffer);
  IMVKPFUN(vkCmdFillBuffer);
  IMVKPFUN(vkCmdClearColorImage);
  IMVKPFUN(vkCmdClearDepthStencilImage);
  IMVKPFUN(vkCmdClearAttachments);
  IMVKPFUN(vkCmdResolveImage);
  IMVKPFUN(vkCmdSetEvent);
  IMVKPFUN(vkCmdResetEvent);
  IMVKPFUN(vkCmdWaitEvents);
  IMVKPFUN(vkCmdPipelineBarrier);
  IMVKPFUN(vkCmdBeginQuery);
  IMVKPFUN(vkCmdEndQuery);
  IMVKPFUN(vkCmdResetQueryPool);
  IMVKPFUN(vkCmdWriteTimestamp);
  IMVKPFUN(vkCmdCopyQueryPoolResults);
  IMVKPFUN(vkCmdPushConstants);
  IMVKPFUN(vkCmdBeginRenderPass);
  IMVKPFUN(vkCmdNextSubpass);
  IMVKPFUN(vkCmdEndRenderPass);
  IMVKPFUN(vkCmdExecuteCommands);
  NowState.IS_LOAD_VK_VERSION_1_0 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_VERSION_1_1() {
  bool isAllLoaded = true;
  IMVKPFUN(vkBindBufferMemory2);
  IMVKPFUN(vkBindImageMemory2);
  IMVKPFUN(vkGetDeviceGroupPeerMemoryFeatures);
  IMVKPFUN(vkCmdSetDeviceMask);
  IMVKPFUN(vkCmdDispatchBase);
  IMVKPFUN(vkGetImageMemoryRequirements2);
  IMVKPFUN(vkGetBufferMemoryRequirements2);
  IMVKPFUN(vkGetImageSparseMemoryRequirements2);
  IMVKPFUN(vkTrimCommandPool);
  IMVKPFUN(vkGetDeviceQueue2);
  IMVKPFUN(vkCreateSamplerYcbcrConversion);
  IMVKPFUN(vkDestroySamplerYcbcrConversion);
  IMVKPFUN(vkCreateDescriptorUpdateTemplate);
  IMVKPFUN(vkDestroyDescriptorUpdateTemplate);
  IMVKPFUN(vkUpdateDescriptorSetWithTemplate);
  IMVKPFUN(vkGetDescriptorSetLayoutSupport);
  NowState.IS_LOAD_VK_VERSION_1_1 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_VERSION_1_2() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdDrawIndirectCount);
  IMVKPFUN(vkCmdDrawIndexedIndirectCount);
  IMVKPFUN(vkCreateRenderPass2);
  IMVKPFUN(vkCmdBeginRenderPass2);
  IMVKPFUN(vkCmdNextSubpass2);
  IMVKPFUN(vkCmdEndRenderPass2);
  IMVKPFUN(vkResetQueryPool);
  IMVKPFUN(vkGetSemaphoreCounterValue);
  IMVKPFUN(vkWaitSemaphores);
  IMVKPFUN(vkSignalSemaphore);
  IMVKPFUN(vkGetBufferDeviceAddress);
  IMVKPFUN(vkGetBufferOpaqueCaptureAddress);
  IMVKPFUN(vkGetDeviceMemoryOpaqueCaptureAddress);
  NowState.IS_LOAD_VK_VERSION_1_2 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_VERSION_1_3() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreatePrivateDataSlot);
  IMVKPFUN(vkDestroyPrivateDataSlot);
  IMVKPFUN(vkSetPrivateData);
  IMVKPFUN(vkGetPrivateData);
  IMVKPFUN(vkCmdSetEvent2);
  IMVKPFUN(vkCmdResetEvent2);
  IMVKPFUN(vkCmdWaitEvents2);
  IMVKPFUN(vkCmdPipelineBarrier2);
  IMVKPFUN(vkCmdWriteTimestamp2);
  IMVKPFUN(vkQueueSubmit2);
  IMVKPFUN(vkCmdCopyBuffer2);
  IMVKPFUN(vkCmdCopyImage2);
  IMVKPFUN(vkCmdCopyBufferToImage2);
  IMVKPFUN(vkCmdCopyImageToBuffer2);
  IMVKPFUN(vkCmdBlitImage2);
  IMVKPFUN(vkCmdResolveImage2);
  IMVKPFUN(vkCmdBeginRendering);
  IMVKPFUN(vkCmdEndRendering);
  IMVKPFUN(vkCmdSetCullMode);
  IMVKPFUN(vkCmdSetFrontFace);
  IMVKPFUN(vkCmdSetPrimitiveTopology);
  IMVKPFUN(vkCmdSetViewportWithCount);
  IMVKPFUN(vkCmdSetScissorWithCount);
  IMVKPFUN(vkCmdBindVertexBuffers2);
  IMVKPFUN(vkCmdSetDepthTestEnable);
  IMVKPFUN(vkCmdSetDepthWriteEnable);
  IMVKPFUN(vkCmdSetDepthCompareOp);
  IMVKPFUN(vkCmdSetDepthBoundsTestEnable);
  IMVKPFUN(vkCmdSetStencilTestEnable);
  IMVKPFUN(vkCmdSetStencilOp);
  IMVKPFUN(vkCmdSetRasterizerDiscardEnable);
  IMVKPFUN(vkCmdSetDepthBiasEnable);
  IMVKPFUN(vkCmdSetPrimitiveRestartEnable);
  IMVKPFUN(vkGetDeviceBufferMemoryRequirements);
  IMVKPFUN(vkGetDeviceImageMemoryRequirements);
  IMVKPFUN(vkGetDeviceImageSparseMemoryRequirements);
  NowState.IS_LOAD_VK_VERSION_1_3 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_swapchain() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreateSwapchainKHR);
  IMVKPFUN(vkDestroySwapchainKHR);
  IMVKPFUN(vkGetSwapchainImagesKHR);
  IMVKPFUN(vkAcquireNextImageKHR);
  IMVKPFUN(vkQueuePresentKHR);
  IMVKPFUN(vkGetDeviceGroupPresentCapabilitiesKHR);
  IMVKPFUN(vkGetDeviceGroupSurfacePresentModesKHR);
  IMVKPFUN(vkAcquireNextImage2KHR);
  NowState.IS_LOAD_VK_KHR_swapchain = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_display_swapchain() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreateSharedSwapchainsKHR);
  NowState.IS_LOAD_VK_KHR_display_swapchain = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_video_queue() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreateVideoSessionKHR);
  IMVKPFUN(vkDestroyVideoSessionKHR);
  IMVKPFUN(vkGetVideoSessionMemoryRequirementsKHR);
  IMVKPFUN(vkBindVideoSessionMemoryKHR);
  IMVKPFUN(vkCreateVideoSessionParametersKHR);
  IMVKPFUN(vkUpdateVideoSessionParametersKHR);
  IMVKPFUN(vkDestroyVideoSessionParametersKHR);
  IMVKPFUN(vkCmdBeginVideoCodingKHR);
  IMVKPFUN(vkCmdEndVideoCodingKHR);
  IMVKPFUN(vkCmdControlVideoCodingKHR);
  NowState.IS_LOAD_VK_KHR_video_queue = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_video_decode_queue() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdDecodeVideoKHR);
  NowState.IS_LOAD_VK_KHR_video_decode_queue = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_dynamic_rendering() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdBeginRenderingKHR);
  IMVKPFUN(vkCmdEndRenderingKHR);
  NowState.IS_LOAD_VK_KHR_dynamic_rendering = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_device_group() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetDeviceGroupPeerMemoryFeaturesKHR);
  IMVKPFUN(vkCmdSetDeviceMaskKHR);
  IMVKPFUN(vkCmdDispatchBaseKHR);
  NowState.IS_LOAD_VK_KHR_device_group = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_maintenance1() {
  bool isAllLoaded = true;
  IMVKPFUN(vkTrimCommandPoolKHR);
  NowState.IS_LOAD_VK_KHR_maintenance1 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_external_memory_fd() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetMemoryFdKHR);
  IMVKPFUN(vkGetMemoryFdPropertiesKHR);
  NowState.IS_LOAD_VK_KHR_external_memory_fd = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_external_semaphore_fd() {
  bool isAllLoaded = true;
  IMVKPFUN(vkImportSemaphoreFdKHR);
  IMVKPFUN(vkGetSemaphoreFdKHR);
  NowState.IS_LOAD_VK_KHR_external_semaphore_fd = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_push_descriptor() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdPushDescriptorSetKHR);
  IMVKPFUN(vkCmdPushDescriptorSetWithTemplateKHR);
  NowState.IS_LOAD_VK_KHR_push_descriptor = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_descriptor_update_template() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreateDescriptorUpdateTemplateKHR);
  IMVKPFUN(vkDestroyDescriptorUpdateTemplateKHR);
  IMVKPFUN(vkUpdateDescriptorSetWithTemplateKHR);
  NowState.IS_LOAD_VK_KHR_descriptor_update_template = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_create_renderpass2() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreateRenderPass2KHR);
  IMVKPFUN(vkCmdBeginRenderPass2KHR);
  IMVKPFUN(vkCmdNextSubpass2KHR);
  IMVKPFUN(vkCmdEndRenderPass2KHR);
  NowState.IS_LOAD_VK_KHR_create_renderpass2 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_shared_presentable_image() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetSwapchainStatusKHR);
  NowState.IS_LOAD_VK_KHR_shared_presentable_image = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_external_fence_fd() {
  bool isAllLoaded = true;
  IMVKPFUN(vkImportFenceFdKHR);
  IMVKPFUN(vkGetFenceFdKHR);
  NowState.IS_LOAD_VK_KHR_external_fence_fd = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_performance_query() {
  bool isAllLoaded = true;
  IMVKPFUN(vkAcquireProfilingLockKHR);
  IMVKPFUN(vkReleaseProfilingLockKHR);
  NowState.IS_LOAD_VK_KHR_performance_query = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_get_memory_requirements2() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetImageMemoryRequirements2KHR);
  IMVKPFUN(vkGetBufferMemoryRequirements2KHR);
  IMVKPFUN(vkGetImageSparseMemoryRequirements2KHR);
  NowState.IS_LOAD_VK_KHR_get_memory_requirements2 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_sampler_ycbcr_conversion() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreateSamplerYcbcrConversionKHR);
  IMVKPFUN(vkDestroySamplerYcbcrConversionKHR);
  NowState.IS_LOAD_VK_KHR_sampler_ycbcr_conversion = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_bind_memory2() {
  bool isAllLoaded = true;
  IMVKPFUN(vkBindBufferMemory2KHR);
  IMVKPFUN(vkBindImageMemory2KHR);
  NowState.IS_LOAD_VK_KHR_bind_memory2 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_maintenance3() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetDescriptorSetLayoutSupportKHR);
  NowState.IS_LOAD_VK_KHR_maintenance3 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_draw_indirect_count() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdDrawIndirectCountKHR);
  IMVKPFUN(vkCmdDrawIndexedIndirectCountKHR);
  NowState.IS_LOAD_VK_KHR_draw_indirect_count = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_timeline_semaphore() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetSemaphoreCounterValueKHR);
  IMVKPFUN(vkWaitSemaphoresKHR);
  IMVKPFUN(vkSignalSemaphoreKHR);
  NowState.IS_LOAD_VK_KHR_timeline_semaphore = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_fragment_shading_rate() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdSetFragmentShadingRateKHR);
  NowState.IS_LOAD_VK_KHR_fragment_shading_rate = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_dynamic_rendering_local_read() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdSetRenderingAttachmentLocationsKHR);
  IMVKPFUN(vkCmdSetRenderingInputAttachmentIndicesKHR);
  NowState.IS_LOAD_VK_KHR_dynamic_rendering_local_read = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_present_wait() {
  bool isAllLoaded = true;
  IMVKPFUN(vkWaitForPresentKHR);
  NowState.IS_LOAD_VK_KHR_present_wait = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_buffer_device_address() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetBufferDeviceAddressKHR);
  IMVKPFUN(vkGetBufferOpaqueCaptureAddressKHR);
  IMVKPFUN(vkGetDeviceMemoryOpaqueCaptureAddressKHR);
  NowState.IS_LOAD_VK_KHR_buffer_device_address = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_deferred_host_operations() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreateDeferredOperationKHR);
  IMVKPFUN(vkDestroyDeferredOperationKHR);
  IMVKPFUN(vkGetDeferredOperationMaxConcurrencyKHR);
  IMVKPFUN(vkGetDeferredOperationResultKHR);
  IMVKPFUN(vkDeferredOperationJoinKHR);
  NowState.IS_LOAD_VK_KHR_deferred_host_operations = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_pipeline_executable_properties() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPipelineExecutablePropertiesKHR);
  IMVKPFUN(vkGetPipelineExecutableStatisticsKHR);
  IMVKPFUN(vkGetPipelineExecutableInternalRepresentationsKHR);
  NowState.IS_LOAD_VK_KHR_pipeline_executable_properties = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_map_memory2() {
  bool isAllLoaded = true;
  IMVKPFUN(vkMapMemory2KHR);
  IMVKPFUN(vkUnmapMemory2KHR);
  NowState.IS_LOAD_VK_KHR_map_memory2 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_video_encode_queue() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetEncodedVideoSessionParametersKHR);
  IMVKPFUN(vkCmdEncodeVideoKHR);
  NowState.IS_LOAD_VK_KHR_video_encode_queue = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_synchronization2() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdSetEvent2KHR);
  IMVKPFUN(vkCmdResetEvent2KHR);
  IMVKPFUN(vkCmdWaitEvents2KHR);
  IMVKPFUN(vkCmdPipelineBarrier2KHR);
  IMVKPFUN(vkCmdWriteTimestamp2KHR);
  IMVKPFUN(vkQueueSubmit2KHR);
  IMVKPFUN(vkCmdWriteBufferMarker2AMD);
  IMVKPFUN(vkGetQueueCheckpointData2NV);
  NowState.IS_LOAD_VK_KHR_synchronization2 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_copy_commands2() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdCopyBuffer2KHR);
  IMVKPFUN(vkCmdCopyImage2KHR);
  IMVKPFUN(vkCmdCopyBufferToImage2KHR);
  IMVKPFUN(vkCmdCopyImageToBuffer2KHR);
  IMVKPFUN(vkCmdBlitImage2KHR);
  IMVKPFUN(vkCmdResolveImage2KHR);
  NowState.IS_LOAD_VK_KHR_copy_commands2 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_ray_tracing_maintenance1() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdTraceRaysIndirect2KHR);
  NowState.IS_LOAD_VK_KHR_ray_tracing_maintenance1 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_maintenance4() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetDeviceBufferMemoryRequirementsKHR);
  IMVKPFUN(vkGetDeviceImageMemoryRequirementsKHR);
  IMVKPFUN(vkGetDeviceImageSparseMemoryRequirementsKHR);
  NowState.IS_LOAD_VK_KHR_maintenance4 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_maintenance5() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdBindIndexBuffer2KHR);
  IMVKPFUN(vkGetRenderingAreaGranularityKHR);
  IMVKPFUN(vkGetDeviceImageSubresourceLayoutKHR);
  IMVKPFUN(vkGetImageSubresourceLayout2KHR);
  NowState.IS_LOAD_VK_KHR_maintenance5 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_line_rasterization() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdSetLineStippleKHR);
  NowState.IS_LOAD_VK_KHR_line_rasterization = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_calibrated_timestamps() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetCalibratedTimestampsKHR);
  NowState.IS_LOAD_VK_KHR_calibrated_timestamps = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_maintenance6() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdBindDescriptorSets2KHR);
  IMVKPFUN(vkCmdPushConstants2KHR);
  IMVKPFUN(vkCmdPushDescriptorSet2KHR);
  IMVKPFUN(vkCmdPushDescriptorSetWithTemplate2KHR);
  IMVKPFUN(vkCmdSetDescriptorBufferOffsets2EXT);
  IMVKPFUN(vkCmdBindDescriptorBufferEmbeddedSamplers2EXT);
  NowState.IS_LOAD_VK_KHR_maintenance6 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_debug_marker() {
  bool isAllLoaded = true;
  IMVKPFUN(vkDebugMarkerSetObjectTagEXT);
  IMVKPFUN(vkDebugMarkerSetObjectNameEXT);
  IMVKPFUN(vkCmdDebugMarkerBeginEXT);
  IMVKPFUN(vkCmdDebugMarkerEndEXT);
  IMVKPFUN(vkCmdDebugMarkerInsertEXT);
  NowState.IS_LOAD_VK_EXT_debug_marker = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_transform_feedback() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdBindTransformFeedbackBuffersEXT);
  IMVKPFUN(vkCmdBeginTransformFeedbackEXT);
  IMVKPFUN(vkCmdEndTransformFeedbackEXT);
  IMVKPFUN(vkCmdBeginQueryIndexedEXT);
  IMVKPFUN(vkCmdEndQueryIndexedEXT);
  IMVKPFUN(vkCmdDrawIndirectByteCountEXT);
  NowState.IS_LOAD_VK_EXT_transform_feedback = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_NVX_binary_import() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreateCuModuleNVX);
  IMVKPFUN(vkCreateCuFunctionNVX);
  IMVKPFUN(vkDestroyCuModuleNVX);
  IMVKPFUN(vkDestroyCuFunctionNVX);
  IMVKPFUN(vkCmdCuLaunchKernelNVX);
  NowState.IS_LOAD_VK_NVX_binary_import = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_NVX_image_view_handle() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetImageViewHandleNVX);
  IMVKPFUN(vkGetImageViewAddressNVX);
  NowState.IS_LOAD_VK_NVX_image_view_handle = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_AMD_draw_indirect_count() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdDrawIndirectCountAMD);
  IMVKPFUN(vkCmdDrawIndexedIndirectCountAMD);
  NowState.IS_LOAD_VK_AMD_draw_indirect_count = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_AMD_shader_info() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetShaderInfoAMD);
  NowState.IS_LOAD_VK_AMD_shader_info = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_conditional_rendering() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdBeginConditionalRenderingEXT);
  IMVKPFUN(vkCmdEndConditionalRenderingEXT);
  NowState.IS_LOAD_VK_EXT_conditional_rendering = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_NV_clip_space_w_scaling() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdSetViewportWScalingNV);
  NowState.IS_LOAD_VK_NV_clip_space_w_scaling = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_display_control() {
  bool isAllLoaded = true;
  IMVKPFUN(vkDisplayPowerControlEXT);
  IMVKPFUN(vkRegisterDeviceEventEXT);
  IMVKPFUN(vkRegisterDisplayEventEXT);
  IMVKPFUN(vkGetSwapchainCounterEXT);
  NowState.IS_LOAD_VK_EXT_display_control = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_GOOGLE_display_timing() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetRefreshCycleDurationGOOGLE);
  IMVKPFUN(vkGetPastPresentationTimingGOOGLE);
  NowState.IS_LOAD_VK_GOOGLE_display_timing = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_discard_rectangles() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdSetDiscardRectangleEXT);
  IMVKPFUN(vkCmdSetDiscardRectangleEnableEXT);
  IMVKPFUN(vkCmdSetDiscardRectangleModeEXT);
  NowState.IS_LOAD_VK_EXT_discard_rectangles = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_hdr_metadata() {
  bool isAllLoaded = true;
  IMVKPFUN(vkSetHdrMetadataEXT);
  NowState.IS_LOAD_VK_EXT_hdr_metadata = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_debug_utils() {
  bool isAllLoaded = true;
  IMVKPFUN(vkSetDebugUtilsObjectNameEXT);
  IMVKPFUN(vkSetDebugUtilsObjectTagEXT);
  IMVKPFUN(vkQueueBeginDebugUtilsLabelEXT);
  IMVKPFUN(vkQueueEndDebugUtilsLabelEXT);
  IMVKPFUN(vkQueueInsertDebugUtilsLabelEXT);
  IMVKPFUN(vkCmdBeginDebugUtilsLabelEXT);
  IMVKPFUN(vkCmdEndDebugUtilsLabelEXT);
  IMVKPFUN(vkCmdInsertDebugUtilsLabelEXT);
  NowState.IS_LOAD_VK_EXT_debug_utils = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_sample_locations() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdSetSampleLocationsEXT);
  NowState.IS_LOAD_VK_EXT_sample_locations = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_image_drm_format_modifier() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetImageDrmFormatModifierPropertiesEXT);
  NowState.IS_LOAD_VK_EXT_image_drm_format_modifier = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_validation_cache() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreateValidationCacheEXT);
  IMVKPFUN(vkDestroyValidationCacheEXT);
  IMVKPFUN(vkMergeValidationCachesEXT);
  IMVKPFUN(vkGetValidationCacheDataEXT);
  NowState.IS_LOAD_VK_EXT_validation_cache = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_NV_shading_rate_image() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdBindShadingRateImageNV);
  IMVKPFUN(vkCmdSetViewportShadingRatePaletteNV);
  IMVKPFUN(vkCmdSetCoarseSampleOrderNV);
  NowState.IS_LOAD_VK_NV_shading_rate_image = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_NV_ray_tracing() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreateAccelerationStructureNV);
  IMVKPFUN(vkDestroyAccelerationStructureNV);
  IMVKPFUN(vkGetAccelerationStructureMemoryRequirementsNV);
  IMVKPFUN(vkBindAccelerationStructureMemoryNV);
  IMVKPFUN(vkCmdBuildAccelerationStructureNV);
  IMVKPFUN(vkCmdCopyAccelerationStructureNV);
  IMVKPFUN(vkCmdTraceRaysNV);
  IMVKPFUN(vkCreateRayTracingPipelinesNV);
  IMVKPFUN(vkGetRayTracingShaderGroupHandlesKHR);
  IMVKPFUN(vkGetRayTracingShaderGroupHandlesNV);
  IMVKPFUN(vkGetAccelerationStructureHandleNV);
  IMVKPFUN(vkCmdWriteAccelerationStructuresPropertiesNV);
  IMVKPFUN(vkCompileDeferredNV);
  NowState.IS_LOAD_VK_NV_ray_tracing = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_external_memory_host() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetMemoryHostPointerPropertiesEXT);
  NowState.IS_LOAD_VK_EXT_external_memory_host = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_AMD_buffer_marker() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdWriteBufferMarkerAMD);
  NowState.IS_LOAD_VK_AMD_buffer_marker = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_calibrated_timestamps() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetCalibratedTimestampsEXT);
  NowState.IS_LOAD_VK_EXT_calibrated_timestamps = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_NV_mesh_shader() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdDrawMeshTasksNV);
  IMVKPFUN(vkCmdDrawMeshTasksIndirectNV);
  IMVKPFUN(vkCmdDrawMeshTasksIndirectCountNV);
  NowState.IS_LOAD_VK_NV_mesh_shader = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_NV_scissor_exclusive() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdSetExclusiveScissorEnableNV);
  IMVKPFUN(vkCmdSetExclusiveScissorNV);
  NowState.IS_LOAD_VK_NV_scissor_exclusive = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_NV_device_diagnostic_checkpoints() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdSetCheckpointNV);
  IMVKPFUN(vkGetQueueCheckpointDataNV);
  NowState.IS_LOAD_VK_NV_device_diagnostic_checkpoints = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_INTEL_performance_query() {
  bool isAllLoaded = true;
  IMVKPFUN(vkInitializePerformanceApiINTEL);
  IMVKPFUN(vkUninitializePerformanceApiINTEL);
  IMVKPFUN(vkCmdSetPerformanceMarkerINTEL);
  IMVKPFUN(vkCmdSetPerformanceStreamMarkerINTEL);
  IMVKPFUN(vkCmdSetPerformanceOverrideINTEL);
  IMVKPFUN(vkAcquirePerformanceConfigurationINTEL);
  IMVKPFUN(vkReleasePerformanceConfigurationINTEL);
  IMVKPFUN(vkQueueSetPerformanceConfigurationINTEL);
  IMVKPFUN(vkGetPerformanceParameterINTEL);
  NowState.IS_LOAD_VK_INTEL_performance_query = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_AMD_display_native_hdr() {
  bool isAllLoaded = true;
  IMVKPFUN(vkSetLocalDimmingAMD);
  NowState.IS_LOAD_VK_AMD_display_native_hdr = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_buffer_device_address() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetBufferDeviceAddressEXT);
  NowState.IS_LOAD_VK_EXT_buffer_device_address = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_line_rasterization() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdSetLineStippleEXT);
  NowState.IS_LOAD_VK_EXT_line_rasterization = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_host_query_reset() {
  bool isAllLoaded = true;
  IMVKPFUN(vkResetQueryPoolEXT);
  NowState.IS_LOAD_VK_EXT_host_query_reset = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_extended_dynamic_state() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdSetCullModeEXT);
  IMVKPFUN(vkCmdSetFrontFaceEXT);
  IMVKPFUN(vkCmdSetPrimitiveTopologyEXT);
  IMVKPFUN(vkCmdSetViewportWithCountEXT);
  IMVKPFUN(vkCmdSetScissorWithCountEXT);
  IMVKPFUN(vkCmdBindVertexBuffers2EXT);
  IMVKPFUN(vkCmdSetDepthTestEnableEXT);
  IMVKPFUN(vkCmdSetDepthWriteEnableEXT);
  IMVKPFUN(vkCmdSetDepthCompareOpEXT);
  IMVKPFUN(vkCmdSetDepthBoundsTestEnableEXT);
  IMVKPFUN(vkCmdSetStencilTestEnableEXT);
  IMVKPFUN(vkCmdSetStencilOpEXT);
  NowState.IS_LOAD_VK_EXT_extended_dynamic_state = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_host_image_copy() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCopyMemoryToImageEXT);
  IMVKPFUN(vkCopyImageToMemoryEXT);
  IMVKPFUN(vkCopyImageToImageEXT);
  IMVKPFUN(vkTransitionImageLayoutEXT);
  IMVKPFUN(vkGetImageSubresourceLayout2EXT);
  NowState.IS_LOAD_VK_EXT_host_image_copy = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_swapchain_maintenance1() {
  bool isAllLoaded = true;
  IMVKPFUN(vkReleaseSwapchainImagesEXT);
  NowState.IS_LOAD_VK_EXT_swapchain_maintenance1 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_NV_device_generated_commands() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetGeneratedCommandsMemoryRequirementsNV);
  IMVKPFUN(vkCmdPreprocessGeneratedCommandsNV);
  IMVKPFUN(vkCmdExecuteGeneratedCommandsNV);
  IMVKPFUN(vkCmdBindPipelineShaderGroupNV);
  IMVKPFUN(vkCreateIndirectCommandsLayoutNV);
  IMVKPFUN(vkDestroyIndirectCommandsLayoutNV);
  NowState.IS_LOAD_VK_NV_device_generated_commands = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_depth_bias_control() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdSetDepthBias2EXT);
  NowState.IS_LOAD_VK_EXT_depth_bias_control = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_private_data() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreatePrivateDataSlotEXT);
  IMVKPFUN(vkDestroyPrivateDataSlotEXT);
  IMVKPFUN(vkSetPrivateDataEXT);
  IMVKPFUN(vkGetPrivateDataEXT);
  NowState.IS_LOAD_VK_EXT_private_data = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_NV_cuda_kernel_launch() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreateCudaModuleNV);
  IMVKPFUN(vkGetCudaModuleCacheNV);
  IMVKPFUN(vkCreateCudaFunctionNV);
  IMVKPFUN(vkDestroyCudaModuleNV);
  IMVKPFUN(vkDestroyCudaFunctionNV);
  IMVKPFUN(vkCmdCudaLaunchKernelNV);
  NowState.IS_LOAD_VK_NV_cuda_kernel_launch = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_descriptor_buffer() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetDescriptorSetLayoutSizeEXT);
  IMVKPFUN(vkGetDescriptorSetLayoutBindingOffsetEXT);
  IMVKPFUN(vkGetDescriptorEXT);
  IMVKPFUN(vkCmdBindDescriptorBuffersEXT);
  IMVKPFUN(vkCmdSetDescriptorBufferOffsetsEXT);
  IMVKPFUN(vkCmdBindDescriptorBufferEmbeddedSamplersEXT);
  IMVKPFUN(vkGetBufferOpaqueCaptureDescriptorDataEXT);
  IMVKPFUN(vkGetImageOpaqueCaptureDescriptorDataEXT);
  IMVKPFUN(vkGetImageViewOpaqueCaptureDescriptorDataEXT);
  IMVKPFUN(vkGetSamplerOpaqueCaptureDescriptorDataEXT);
  IMVKPFUN(vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT);
  NowState.IS_LOAD_VK_EXT_descriptor_buffer = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_NV_fragment_shading_rate_enums() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdSetFragmentShadingRateEnumNV);
  NowState.IS_LOAD_VK_NV_fragment_shading_rate_enums = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_device_fault() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetDeviceFaultInfoEXT);
  NowState.IS_LOAD_VK_EXT_device_fault = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_vertex_input_dynamic_state() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdSetVertexInputEXT);
  NowState.IS_LOAD_VK_EXT_vertex_input_dynamic_state = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_HUAWEI_subpass_shading() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI);
  IMVKPFUN(vkCmdSubpassShadingHUAWEI);
  NowState.IS_LOAD_VK_HUAWEI_subpass_shading = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_HUAWEI_invocation_mask() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdBindInvocationMaskHUAWEI);
  NowState.IS_LOAD_VK_HUAWEI_invocation_mask = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_NV_external_memory_rdma() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetMemoryRemoteAddressNV);
  NowState.IS_LOAD_VK_NV_external_memory_rdma = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_pipeline_properties() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPipelinePropertiesEXT);
  NowState.IS_LOAD_VK_EXT_pipeline_properties = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_extended_dynamic_state2() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdSetPatchControlPointsEXT);
  IMVKPFUN(vkCmdSetRasterizerDiscardEnableEXT);
  IMVKPFUN(vkCmdSetDepthBiasEnableEXT);
  IMVKPFUN(vkCmdSetLogicOpEXT);
  IMVKPFUN(vkCmdSetPrimitiveRestartEnableEXT);
  NowState.IS_LOAD_VK_EXT_extended_dynamic_state2 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_color_write_enable() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdSetColorWriteEnableEXT);
  NowState.IS_LOAD_VK_EXT_color_write_enable = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_multi_draw() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdDrawMultiEXT);
  IMVKPFUN(vkCmdDrawMultiIndexedEXT);
  NowState.IS_LOAD_VK_EXT_multi_draw = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_opacity_micromap() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreateMicromapEXT);
  IMVKPFUN(vkDestroyMicromapEXT);
  IMVKPFUN(vkCmdBuildMicromapsEXT);
  IMVKPFUN(vkBuildMicromapsEXT);
  IMVKPFUN(vkCopyMicromapEXT);
  IMVKPFUN(vkCopyMicromapToMemoryEXT);
  IMVKPFUN(vkCopyMemoryToMicromapEXT);
  IMVKPFUN(vkWriteMicromapsPropertiesEXT);
  IMVKPFUN(vkCmdCopyMicromapEXT);
  IMVKPFUN(vkCmdCopyMicromapToMemoryEXT);
  IMVKPFUN(vkCmdCopyMemoryToMicromapEXT);
  IMVKPFUN(vkCmdWriteMicromapsPropertiesEXT);
  IMVKPFUN(vkGetDeviceMicromapCompatibilityEXT);
  IMVKPFUN(vkGetMicromapBuildSizesEXT);
  NowState.IS_LOAD_VK_EXT_opacity_micromap = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_HUAWEI_cluster_culling_shader() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdDrawClusterHUAWEI);
  IMVKPFUN(vkCmdDrawClusterIndirectHUAWEI);
  NowState.IS_LOAD_VK_HUAWEI_cluster_culling_shader = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_pageable_device_local_memory() {
  bool isAllLoaded = true;
  IMVKPFUN(vkSetDeviceMemoryPriorityEXT);
  NowState.IS_LOAD_VK_EXT_pageable_device_local_memory = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_VALVE_descriptor_set_host_mapping() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetDescriptorSetLayoutHostMappingInfoVALVE);
  IMVKPFUN(vkGetDescriptorSetHostMappingVALVE);
  NowState.IS_LOAD_VK_VALVE_descriptor_set_host_mapping = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_NV_copy_memory_indirect() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdCopyMemoryIndirectNV);
  IMVKPFUN(vkCmdCopyMemoryToImageIndirectNV);
  NowState.IS_LOAD_VK_NV_copy_memory_indirect = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_NV_memory_decompression() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdDecompressMemoryNV);
  IMVKPFUN(vkCmdDecompressMemoryIndirectCountNV);
  NowState.IS_LOAD_VK_NV_memory_decompression = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_NV_device_generated_commands_compute() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetPipelineIndirectMemoryRequirementsNV);
  IMVKPFUN(vkCmdUpdatePipelineIndirectBufferNV);
  IMVKPFUN(vkGetPipelineIndirectDeviceAddressNV);
  NowState.IS_LOAD_VK_NV_device_generated_commands_compute = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_extended_dynamic_state3() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdSetDepthClampEnableEXT);
  IMVKPFUN(vkCmdSetPolygonModeEXT);
  IMVKPFUN(vkCmdSetRasterizationSamplesEXT);
  IMVKPFUN(vkCmdSetSampleMaskEXT);
  IMVKPFUN(vkCmdSetAlphaToCoverageEnableEXT);
  IMVKPFUN(vkCmdSetAlphaToOneEnableEXT);
  IMVKPFUN(vkCmdSetLogicOpEnableEXT);
  IMVKPFUN(vkCmdSetColorBlendEnableEXT);
  IMVKPFUN(vkCmdSetColorBlendEquationEXT);
  IMVKPFUN(vkCmdSetColorWriteMaskEXT);
  IMVKPFUN(vkCmdSetTessellationDomainOriginEXT);
  IMVKPFUN(vkCmdSetRasterizationStreamEXT);
  IMVKPFUN(vkCmdSetConservativeRasterizationModeEXT);
  IMVKPFUN(vkCmdSetExtraPrimitiveOverestimationSizeEXT);
  IMVKPFUN(vkCmdSetDepthClipEnableEXT);
  IMVKPFUN(vkCmdSetSampleLocationsEnableEXT);
  IMVKPFUN(vkCmdSetColorBlendAdvancedEXT);
  IMVKPFUN(vkCmdSetProvokingVertexModeEXT);
  IMVKPFUN(vkCmdSetLineRasterizationModeEXT);
  IMVKPFUN(vkCmdSetLineStippleEnableEXT);
  IMVKPFUN(vkCmdSetDepthClipNegativeOneToOneEXT);
  IMVKPFUN(vkCmdSetViewportWScalingEnableNV);
  IMVKPFUN(vkCmdSetViewportSwizzleNV);
  IMVKPFUN(vkCmdSetCoverageToColorEnableNV);
  IMVKPFUN(vkCmdSetCoverageToColorLocationNV);
  IMVKPFUN(vkCmdSetCoverageModulationModeNV);
  IMVKPFUN(vkCmdSetCoverageModulationTableEnableNV);
  IMVKPFUN(vkCmdSetCoverageModulationTableNV);
  IMVKPFUN(vkCmdSetShadingRateImageEnableNV);
  IMVKPFUN(vkCmdSetRepresentativeFragmentTestEnableNV);
  IMVKPFUN(vkCmdSetCoverageReductionModeNV);
  NowState.IS_LOAD_VK_EXT_extended_dynamic_state3 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_shader_module_identifier() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetShaderModuleIdentifierEXT);
  IMVKPFUN(vkGetShaderModuleCreateInfoIdentifierEXT);
  NowState.IS_LOAD_VK_EXT_shader_module_identifier = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_NV_optical_flow() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreateOpticalFlowSessionNV);
  IMVKPFUN(vkDestroyOpticalFlowSessionNV);
  IMVKPFUN(vkBindOpticalFlowSessionImageNV);
  IMVKPFUN(vkCmdOpticalFlowExecuteNV);
  NowState.IS_LOAD_VK_NV_optical_flow = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_shader_object() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreateShadersEXT);
  IMVKPFUN(vkDestroyShaderEXT);
  IMVKPFUN(vkGetShaderBinaryDataEXT);
  IMVKPFUN(vkCmdBindShadersEXT);
  NowState.IS_LOAD_VK_EXT_shader_object = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_QCOM_tile_properties() {
  bool isAllLoaded = true;
  IMVKPFUN(vkGetFramebufferTilePropertiesQCOM);
  IMVKPFUN(vkGetDynamicRenderingTilePropertiesQCOM);
  NowState.IS_LOAD_VK_QCOM_tile_properties = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_NV_low_latency2() {
  bool isAllLoaded = true;
  IMVKPFUN(vkSetLatencySleepModeNV);
  IMVKPFUN(vkLatencySleepNV);
  IMVKPFUN(vkSetLatencyMarkerNV);
  IMVKPFUN(vkGetLatencyTimingsNV);
  IMVKPFUN(vkQueueNotifyOutOfBandNV);
  NowState.IS_LOAD_VK_NV_low_latency2 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::
    TRY_LOAD_VK_EXT_attachment_feedback_loop_dynamic_state() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdSetAttachmentFeedbackLoopEnableEXT);
  NowState.IS_LOAD_VK_EXT_attachment_feedback_loop_dynamic_state = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_acceleration_structure() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCreateAccelerationStructureKHR);
  IMVKPFUN(vkDestroyAccelerationStructureKHR);
  IMVKPFUN(vkCmdBuildAccelerationStructuresKHR);
  IMVKPFUN(vkCmdBuildAccelerationStructuresIndirectKHR);
  IMVKPFUN(vkBuildAccelerationStructuresKHR);
  IMVKPFUN(vkCopyAccelerationStructureKHR);
  IMVKPFUN(vkCopyAccelerationStructureToMemoryKHR);
  IMVKPFUN(vkCopyMemoryToAccelerationStructureKHR);
  IMVKPFUN(vkWriteAccelerationStructuresPropertiesKHR);
  IMVKPFUN(vkCmdCopyAccelerationStructureKHR);
  IMVKPFUN(vkCmdCopyAccelerationStructureToMemoryKHR);
  IMVKPFUN(vkCmdCopyMemoryToAccelerationStructureKHR);
  IMVKPFUN(vkGetAccelerationStructureDeviceAddressKHR);
  IMVKPFUN(vkCmdWriteAccelerationStructuresPropertiesKHR);
  IMVKPFUN(vkGetDeviceAccelerationStructureCompatibilityKHR);
  IMVKPFUN(vkGetAccelerationStructureBuildSizesKHR);
  NowState.IS_LOAD_VK_KHR_acceleration_structure = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_ray_tracing_pipeline() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdTraceRaysKHR);
  IMVKPFUN(vkCreateRayTracingPipelinesKHR);
  IMVKPFUN(vkGetRayTracingCaptureReplayShaderGroupHandlesKHR);
  IMVKPFUN(vkCmdTraceRaysIndirectKHR);
  IMVKPFUN(vkGetRayTracingShaderGroupStackSizeKHR);
  IMVKPFUN(vkCmdSetRayTracingPipelineStackSizeKHR);
  NowState.IS_LOAD_VK_KHR_ray_tracing_pipeline = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_mesh_shader() {
  bool isAllLoaded = true;
  IMVKPFUN(vkCmdDrawMeshTasksEXT);
  IMVKPFUN(vkCmdDrawMeshTasksIndirectEXT);
  IMVKPFUN(vkCmdDrawMeshTasksIndirectCountEXT);
  NowState.IS_LOAD_VK_EXT_mesh_shader = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::
    TRY_LOAD_VK_ANDROID_external_memory_android_hardware_buffer() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
  IMVKPFUN(vkGetAndroidHardwareBufferPropertiesANDROID);
  IMVKPFUN(vkGetMemoryAndroidHardwareBufferANDROID);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_ANDROID_external_memory_android_hardware_buffer =
      isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_FUCHSIA_external_memory() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_FUCHSIA
  IMVKPFUN(vkGetMemoryZirconHandleFUCHSIA);
  IMVKPFUN(vkGetMemoryZirconHandlePropertiesFUCHSIA);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_FUCHSIA_external_memory = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_FUCHSIA_external_semaphore() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_FUCHSIA
  IMVKPFUN(vkImportSemaphoreZirconHandleFUCHSIA);
  IMVKPFUN(vkGetSemaphoreZirconHandleFUCHSIA);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_FUCHSIA_external_semaphore = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_FUCHSIA_buffer_collection() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_FUCHSIA
  IMVKPFUN(vkCreateBufferCollectionFUCHSIA);
  IMVKPFUN(vkSetBufferCollectionImageConstraintsFUCHSIA);
  IMVKPFUN(vkSetBufferCollectionBufferConstraintsFUCHSIA);
  IMVKPFUN(vkDestroyBufferCollectionFUCHSIA);
  IMVKPFUN(vkGetBufferCollectionPropertiesFUCHSIA);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_FUCHSIA_buffer_collection = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_external_memory_win32() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_WIN32_KHR
  IMVKPFUN(vkGetMemoryWin32HandleKHR);
  IMVKPFUN(vkGetMemoryWin32HandlePropertiesKHR);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_KHR_external_memory_win32 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_external_semaphore_win32() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_WIN32_KHR
  IMVKPFUN(vkImportSemaphoreWin32HandleKHR);
  IMVKPFUN(vkGetSemaphoreWin32HandleKHR);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_KHR_external_semaphore_win32 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_external_fence_win32() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_WIN32_KHR
  IMVKPFUN(vkImportFenceWin32HandleKHR);
  IMVKPFUN(vkGetFenceWin32HandleKHR);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_KHR_external_fence_win32 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_NV_external_memory_win32() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_WIN32_KHR
  IMVKPFUN(vkGetMemoryWin32HandleNV);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_NV_external_memory_win32 = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_full_screen_exclusive() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_WIN32_KHR
  IMVKPFUN(vkAcquireFullScreenExclusiveModeEXT);
  IMVKPFUN(vkReleaseFullScreenExclusiveModeEXT);
  IMVKPFUN(vkGetDeviceGroupSurfacePresentModes2EXT);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_EXT_full_screen_exclusive = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_metal_objects() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_METAL_EXT
  IMVKPFUN(vkExportMetalObjectsEXT);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_EXT_metal_objects = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_QNX_external_memory_screen_buffer() {
  bool isAllLoaded = true;
#ifdef VK_USE_PLATFORM_SCREEN_QNX
  IMVKPFUN(vkGetScreenBufferPropertiesQNX);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_QNX_external_memory_screen_buffer = isAllLoaded;
  return isAllLoaded;
}
bool VkDeviceLayoutLoader::TRY_LOAD_VK_AMDX_shader_enqueue() {
  bool isAllLoaded = true;
#ifdef VK_ENABLE_BETA_EXTENSIONS
  IMVKPFUN(vkCreateExecutionGraphPipelinesAMDX);
  IMVKPFUN(vkGetExecutionGraphPipelineScratchSizeAMDX);
  IMVKPFUN(vkGetExecutionGraphPipelineNodeIndexAMDX);
  IMVKPFUN(vkCmdInitializeGraphScratchMemoryAMDX);
  IMVKPFUN(vkCmdDispatchGraphAMDX);
  IMVKPFUN(vkCmdDispatchGraphIndirectAMDX);
  IMVKPFUN(vkCmdDispatchGraphIndirectCountAMDX);
#else
  isAllLoaded = false;
#endif
  NowState.IS_LOAD_VK_AMDX_shader_enqueue = isAllLoaded;
  return isAllLoaded;
}
static VkDeviceLayoutLoader::VkDeviceLayoutLoader::MAP
    VkDeviceLayoutLoadermapping = {
        {{"VK_VERSION_1_0", &VkDeviceLayoutLoader::TRY_LOAD_VK_VERSION_1_0, 0},
         {"VK_VERSION_1_1", &VkDeviceLayoutLoader::TRY_LOAD_VK_VERSION_1_1, 1},
         {"VK_VERSION_1_2", &VkDeviceLayoutLoader::TRY_LOAD_VK_VERSION_1_2, 2},
         {"VK_VERSION_1_3", &VkDeviceLayoutLoader::TRY_LOAD_VK_VERSION_1_3, 3},
         {"VK_KHR_swapchain", &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_swapchain,
          4},
         {"VK_KHR_display_swapchain",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_display_swapchain, 5},
         {"VK_KHR_video_queue",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_video_queue, 6},
         {"VK_KHR_video_decode_queue",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_video_decode_queue, 7},
         {"VK_KHR_dynamic_rendering",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_dynamic_rendering, 8},
         {"VK_KHR_device_group",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_device_group, 9},
         {"VK_KHR_maintenance1",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_maintenance1, 10},
         {"VK_KHR_external_memory_fd",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_external_memory_fd, 11},
         {"VK_KHR_external_semaphore_fd",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_external_semaphore_fd, 12},
         {"VK_KHR_push_descriptor",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_push_descriptor, 13},
         {"VK_KHR_descriptor_update_template",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_descriptor_update_template,
          14},
         {"VK_KHR_create_renderpass2",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_create_renderpass2, 15},
         {"VK_KHR_shared_presentable_image",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_shared_presentable_image, 16},
         {"VK_KHR_external_fence_fd",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_external_fence_fd, 17},
         {"VK_KHR_performance_query",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_performance_query, 18},
         {"VK_KHR_get_memory_requirements2",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_get_memory_requirements2, 19},
         {"VK_KHR_sampler_ycbcr_conversion",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_sampler_ycbcr_conversion, 20},
         {"VK_KHR_bind_memory2",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_bind_memory2, 21},
         {"VK_KHR_maintenance3",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_maintenance3, 22},
         {"VK_KHR_draw_indirect_count",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_draw_indirect_count, 23},
         {"VK_KHR_timeline_semaphore",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_timeline_semaphore, 24},
         {"VK_KHR_fragment_shading_rate",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_fragment_shading_rate, 25},
         {"VK_KHR_dynamic_rendering_local_read",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_dynamic_rendering_local_read,
          26},
         {"VK_KHR_present_wait",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_present_wait, 27},
         {"VK_KHR_buffer_device_address",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_buffer_device_address, 28},
         {"VK_KHR_deferred_host_operations",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_deferred_host_operations, 29},
         {"VK_KHR_pipeline_executable_properties",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_pipeline_executable_properties,
          30},
         {"VK_KHR_map_memory2",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_map_memory2, 31},
         {"VK_KHR_video_encode_queue",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_video_encode_queue, 32},
         {"VK_KHR_synchronization2",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_synchronization2, 33},
         {"VK_KHR_copy_commands2",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_copy_commands2, 34},
         {"VK_KHR_ray_tracing_maintenance1",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_ray_tracing_maintenance1, 35},
         {"VK_KHR_maintenance4",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_maintenance4, 36},
         {"VK_KHR_maintenance5",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_maintenance5, 37},
         {"VK_KHR_line_rasterization",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_line_rasterization, 38},
         {"VK_KHR_calibrated_timestamps",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_calibrated_timestamps, 39},
         {"VK_KHR_maintenance6",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_maintenance6, 40},
         {"VK_EXT_debug_marker",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_debug_marker, 41},
         {"VK_EXT_transform_feedback",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_transform_feedback, 42},
         {"VK_NVX_binary_import",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_NVX_binary_import, 43},
         {"VK_NVX_image_view_handle",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_NVX_image_view_handle, 44},
         {"VK_AMD_draw_indirect_count",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_AMD_draw_indirect_count, 45},
         {"VK_AMD_shader_info",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_AMD_shader_info, 46},
         {"VK_EXT_conditional_rendering",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_conditional_rendering, 47},
         {"VK_NV_clip_space_w_scaling",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_NV_clip_space_w_scaling, 48},
         {"VK_EXT_display_control",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_display_control, 49},
         {"VK_GOOGLE_display_timing",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_GOOGLE_display_timing, 50},
         {"VK_EXT_discard_rectangles",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_discard_rectangles, 51},
         {"VK_EXT_hdr_metadata",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_hdr_metadata, 52},
         {"VK_EXT_debug_utils",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_debug_utils, 53},
         {"VK_EXT_sample_locations",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_sample_locations, 54},
         {"VK_EXT_image_drm_format_modifier",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_image_drm_format_modifier, 55},
         {"VK_EXT_validation_cache",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_validation_cache, 56},
         {"VK_NV_shading_rate_image",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_NV_shading_rate_image, 57},
         {"VK_NV_ray_tracing",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_NV_ray_tracing, 58},
         {"VK_EXT_external_memory_host",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_external_memory_host, 59},
         {"VK_AMD_buffer_marker",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_AMD_buffer_marker, 60},
         {"VK_EXT_calibrated_timestamps",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_calibrated_timestamps, 61},
         {"VK_NV_mesh_shader",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_NV_mesh_shader, 62},
         {"VK_NV_scissor_exclusive",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_NV_scissor_exclusive, 63},
         {"VK_NV_device_diagnostic_checkpoints",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_NV_device_diagnostic_checkpoints,
          64},
         {"VK_INTEL_performance_query",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_INTEL_performance_query, 65},
         {"VK_AMD_display_native_hdr",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_AMD_display_native_hdr, 66},
         {"VK_EXT_buffer_device_address",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_buffer_device_address, 67},
         {"VK_EXT_line_rasterization",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_line_rasterization, 68},
         {"VK_EXT_host_query_reset",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_host_query_reset, 69},
         {"VK_EXT_extended_dynamic_state",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_extended_dynamic_state, 70},
         {"VK_EXT_host_image_copy",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_host_image_copy, 71},
         {"VK_EXT_swapchain_maintenance1",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_swapchain_maintenance1, 72},
         {"VK_NV_device_generated_commands",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_NV_device_generated_commands, 73},
         {"VK_EXT_depth_bias_control",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_depth_bias_control, 74},
         {"VK_EXT_private_data",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_private_data, 75},
         {"VK_NV_cuda_kernel_launch",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_NV_cuda_kernel_launch, 76},
         {"VK_EXT_descriptor_buffer",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_descriptor_buffer, 77},
         {"VK_NV_fragment_shading_rate_enums",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_NV_fragment_shading_rate_enums,
          78},
         {"VK_EXT_device_fault",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_device_fault, 79},
         {"VK_EXT_vertex_input_dynamic_state",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_vertex_input_dynamic_state,
          80},
         {"VK_HUAWEI_subpass_shading",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_HUAWEI_subpass_shading, 81},
         {"VK_HUAWEI_invocation_mask",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_HUAWEI_invocation_mask, 82},
         {"VK_NV_external_memory_rdma",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_NV_external_memory_rdma, 83},
         {"VK_EXT_pipeline_properties",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_pipeline_properties, 84},
         {"VK_EXT_extended_dynamic_state2",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_extended_dynamic_state2, 85},
         {"VK_EXT_color_write_enable",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_color_write_enable, 86},
         {"VK_EXT_multi_draw",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_multi_draw, 87},
         {"VK_EXT_opacity_micromap",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_opacity_micromap, 88},
         {"VK_HUAWEI_cluster_culling_shader",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_HUAWEI_cluster_culling_shader, 89},
         {"VK_EXT_pageable_device_local_memory",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_pageable_device_local_memory,
          90},
         {"VK_VALVE_descriptor_set_host_mapping",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_VALVE_descriptor_set_host_mapping,
          91},
         {"VK_NV_copy_memory_indirect",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_NV_copy_memory_indirect, 92},
         {"VK_NV_memory_decompression",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_NV_memory_decompression, 93},
         {"VK_NV_device_generated_commands_compute",
          &VkDeviceLayoutLoader::
              TRY_LOAD_VK_NV_device_generated_commands_compute,
          94},
         {"VK_EXT_extended_dynamic_state3",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_extended_dynamic_state3, 95},
         {"VK_EXT_shader_module_identifier",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_shader_module_identifier, 96},
         {"VK_NV_optical_flow",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_NV_optical_flow, 97},
         {"VK_EXT_shader_object",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_shader_object, 98},
         {"VK_QCOM_tile_properties",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_QCOM_tile_properties, 99},
         {"VK_NV_low_latency2",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_NV_low_latency2, 100},
         {"VK_EXT_attachment_feedback_loop_dynamic_state",
          &VkDeviceLayoutLoader::
              TRY_LOAD_VK_EXT_attachment_feedback_loop_dynamic_state,
          101},
         {"VK_KHR_acceleration_structure",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_acceleration_structure, 102},
         {"VK_KHR_ray_tracing_pipeline",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_ray_tracing_pipeline, 103},
         {"VK_EXT_mesh_shader",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_mesh_shader, 104},
         {"VK_ANDROID_external_memory_android_hardware_buffer",
          &VkDeviceLayoutLoader::
              TRY_LOAD_VK_ANDROID_external_memory_android_hardware_buffer,
          105},
         {"VK_FUCHSIA_external_memory",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_FUCHSIA_external_memory, 106},
         {"VK_FUCHSIA_external_semaphore",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_FUCHSIA_external_semaphore, 107},
         {"VK_FUCHSIA_buffer_collection",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_FUCHSIA_buffer_collection, 108},
         {"VK_KHR_external_memory_win32",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_external_memory_win32, 109},
         {"VK_KHR_external_semaphore_win32",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_external_semaphore_win32, 110},
         {"VK_KHR_external_fence_win32",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_KHR_external_fence_win32, 111},
         {"VK_NV_external_memory_win32",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_NV_external_memory_win32, 112},
         {"VK_EXT_full_screen_exclusive",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_full_screen_exclusive, 113},
         {"VK_EXT_metal_objects",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_EXT_metal_objects, 114},
         {"VK_QNX_external_memory_screen_buffer",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_QNX_external_memory_screen_buffer,
          115},
         {"VK_AMDX_shader_enqueue",
          &VkDeviceLayoutLoader::TRY_LOAD_VK_AMDX_shader_enqueue, 116}}};
std::vector<VkDeviceLayoutLoader::VkDeviceLayoutLoader::EXTLOADER>
VkDeviceLayoutLoader::TRAN2FUN(const std::vector<std::string> &list) {
  std::vector<EXTLOADER> output;
  for (auto &s : list) {
    auto as = VkDeviceLayoutLoadermapping.TYPE1map[s];
    if (as) {
      output.push_back(as->type2);
    } else {
      output.push_back(0);
    }
  }
  return output;
}
std::vector<size_t>
VkDeviceLayoutLoader::TRAN(const std::vector<std::string> &list) {
  std::vector<size_t> output;
  for (auto &s : list) {
    auto as = VkDeviceLayoutLoadermapping.TYPE1map[s];
    if (as) {
      output.push_back(as->type3);
    } else {
      output.push_back(-1);
    }
  }
  return output;
}
bool VkDeviceLayoutLoader::MappingToNeedLoad(const std::vector<size_t> &list) {
  NeedLoad.AllSetFalse();
  for (auto &bit : list) {
    if (bit >= NeedLoad.bits) {
      continue;
    }
    NeedLoad.SetBit(bit, true);
  }
  return true;
}

#undef IMVKPFUN
#undef IFNEEDLOADVKEXT
