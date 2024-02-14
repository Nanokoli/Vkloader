// VKAPI_ATTR VkResult VKAPI_CALL vkCreateInstance( const VkInstanceCreateInfo*
// pCreateInfo, const VkAllocationCallbacks* pAllocator, VkInstance* pInstance);
#define VKCreateInstance incontext->vkCreateInstance
// VKAPI_ATTR void VKAPI_CALL vkDestroyInstance( VkInstance instance, const
// VkAllocationCallbacks* pAllocator);
#define VKDestroyInstance incontext->vkDestroyInstance
// VKAPI_ATTR VkResult VKAPI_CALL vkEnumeratePhysicalDevices( VkInstance
// instance, uint32_t* pPhysicalDeviceCount, VkPhysicalDevice*
// pPhysicalDevices);
#define VKEnumeratePhysicalDevices incontext->vkEnumeratePhysicalDevices
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFeatures( VkPhysicalDevice
// physicalDevice, VkPhysicalDeviceFeatures* pFeatures);
#define VKGetPhysicalDeviceFeatures incontext->vkGetPhysicalDeviceFeatures
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFormatProperties(
// VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties*
// pFormatProperties);
#define VKGetPhysicalDeviceFormatProperties                                    \
  incontext->vkGetPhysicalDeviceFormatProperties
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceImageFormatProperties(
// VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type,
// VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags,
// VkImageFormatProperties* pImageFormatProperties);
#define VKGetPhysicalDeviceImageFormatProperties                               \
  incontext->vkGetPhysicalDeviceImageFormatProperties
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceProperties( VkPhysicalDevice
// physicalDevice, VkPhysicalDeviceProperties* pProperties);
#define VKGetPhysicalDeviceProperties incontext->vkGetPhysicalDeviceProperties
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceQueueFamilyProperties(
// VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount,
// VkQueueFamilyProperties* pQueueFamilyProperties);
#define VKGetPhysicalDeviceQueueFamilyProperties                               \
  incontext->vkGetPhysicalDeviceQueueFamilyProperties
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMemoryProperties(
// VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties*
// pMemoryProperties);
#define VKGetPhysicalDeviceMemoryProperties                                    \
  incontext->vkGetPhysicalDeviceMemoryProperties
// VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetInstanceProcAddr( VkInstance
// instance, const char* pName);
#define VKGetInstanceProcAddr incontext->vkGetInstanceProcAddr
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateDevice( VkPhysicalDevice
// physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkDevice* pDevice);
#define VKCreateDevice incontext->vkCreateDevice
// VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceExtensionProperties( const
// char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties*
// pProperties);
#define VKEnumerateInstanceExtensionProperties                                 \
  incontext->vkEnumerateInstanceExtensionProperties
// VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateDeviceExtensionProperties(
// VkPhysicalDevice physicalDevice, const char* pLayerName, uint32_t*
// pPropertyCount, VkExtensionProperties* pProperties);
#define VKEnumerateDeviceExtensionProperties                                   \
  incontext->vkEnumerateDeviceExtensionProperties
// VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceLayerProperties( uint32_t*
// pPropertyCount, VkLayerProperties* pProperties);
#define VKEnumerateInstanceLayerProperties                                     \
  incontext->vkEnumerateInstanceLayerProperties
// VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateDeviceLayerProperties(
// VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkLayerProperties*
// pProperties);
#define VKEnumerateDeviceLayerProperties                                       \
  incontext->vkEnumerateDeviceLayerProperties
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceSparseImageFormatProperties(
// VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type,
// VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling,
// uint32_t* pPropertyCount, VkSparseImageFormatProperties* pProperties);
#define VKGetPhysicalDeviceSparseImageFormatProperties                         \
  incontext->vkGetPhysicalDeviceSparseImageFormatProperties
// VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceVersion( uint32_t*
// pApiVersion);
#define VKEnumerateInstanceVersion incontext->vkEnumerateInstanceVersion
// VKAPI_ATTR VkResult VKAPI_CALL vkEnumeratePhysicalDeviceGroups( VkInstance
// instance, uint32_t* pPhysicalDeviceGroupCount,
// VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties);
#define VKEnumeratePhysicalDeviceGroups                                        \
  incontext->vkEnumeratePhysicalDeviceGroups
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFeatures2( VkPhysicalDevice
// physicalDevice, VkPhysicalDeviceFeatures2* pFeatures);
#define VKGetPhysicalDeviceFeatures2 incontext->vkGetPhysicalDeviceFeatures2
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceProperties2( VkPhysicalDevice
// physicalDevice, VkPhysicalDeviceProperties2* pProperties);
#define VKGetPhysicalDeviceProperties2 incontext->vkGetPhysicalDeviceProperties2
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFormatProperties2(
// VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2*
// pFormatProperties);
#define VKGetPhysicalDeviceFormatProperties2                                   \
  incontext->vkGetPhysicalDeviceFormatProperties2
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceImageFormatProperties2(
// VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2*
// pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties);
#define VKGetPhysicalDeviceImageFormatProperties2                              \
  incontext->vkGetPhysicalDeviceImageFormatProperties2
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceQueueFamilyProperties2(
// VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount,
// VkQueueFamilyProperties2* pQueueFamilyProperties);
#define VKGetPhysicalDeviceQueueFamilyProperties2                              \
  incontext->vkGetPhysicalDeviceQueueFamilyProperties2
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMemoryProperties2(
// VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2*
// pMemoryProperties);
#define VKGetPhysicalDeviceMemoryProperties2                                   \
  incontext->vkGetPhysicalDeviceMemoryProperties2
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceSparseImageFormatProperties2(
// VkPhysicalDevice physicalDevice, const
// VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t*
// pPropertyCount, VkSparseImageFormatProperties2* pProperties);
#define VKGetPhysicalDeviceSparseImageFormatProperties2                        \
  incontext->vkGetPhysicalDeviceSparseImageFormatProperties2
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalBufferProperties(
// VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo*
// pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties);
#define VKGetPhysicalDeviceExternalBufferProperties                            \
  incontext->vkGetPhysicalDeviceExternalBufferProperties
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalFenceProperties(
// VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo*
// pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties);
#define VKGetPhysicalDeviceExternalFenceProperties                             \
  incontext->vkGetPhysicalDeviceExternalFenceProperties
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalSemaphoreProperties(
// VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo*
// pExternalSemaphoreInfo, VkExternalSemaphoreProperties*
// pExternalSemaphoreProperties);
#define VKGetPhysicalDeviceExternalSemaphoreProperties                         \
  incontext->vkGetPhysicalDeviceExternalSemaphoreProperties
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceToolProperties(
// VkPhysicalDevice physicalDevice, uint32_t* pToolCount,
// VkPhysicalDeviceToolProperties* pToolProperties);
#define VKGetPhysicalDeviceToolProperties                                      \
  incontext->vkGetPhysicalDeviceToolProperties
// VKAPI_ATTR void VKAPI_CALL vkDestroySurfaceKHR( VkInstance instance,
// VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator);
#define VKDestroySurfaceKHR incontext->vkDestroySurfaceKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceSupportKHR(
// VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR
// surface, VkBool32* pSupported);
#define VKGetPhysicalDeviceSurfaceSupportKHR                                   \
  incontext->vkGetPhysicalDeviceSurfaceSupportKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceCapabilitiesKHR(
// VkPhysicalDevice physicalDevice, VkSurfaceKHR surface,
// VkSurfaceCapabilitiesKHR* pSurfaceCapabilities);
#define VKGetPhysicalDeviceSurfaceCapabilitiesKHR                              \
  incontext->vkGetPhysicalDeviceSurfaceCapabilitiesKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceFormatsKHR(
// VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t*
// pSurfaceFormatCount, VkSurfaceFormatKHR* pSurfaceFormats);
#define VKGetPhysicalDeviceSurfaceFormatsKHR                                   \
  incontext->vkGetPhysicalDeviceSurfaceFormatsKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfacePresentModesKHR(
// VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t*
// pPresentModeCount, VkPresentModeKHR* pPresentModes);
#define VKGetPhysicalDeviceSurfacePresentModesKHR                              \
  incontext->vkGetPhysicalDeviceSurfacePresentModesKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDevicePresentRectanglesKHR(
// VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pRectCount,
// VkRect2D* pRects);
#define VKGetPhysicalDevicePresentRectanglesKHR                                \
  incontext->vkGetPhysicalDevicePresentRectanglesKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayPropertiesKHR(
// VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount,
// VkDisplayPropertiesKHR* pProperties);
#define VKGetPhysicalDeviceDisplayPropertiesKHR                                \
  incontext->vkGetPhysicalDeviceDisplayPropertiesKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayPlanePropertiesKHR(
// VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount,
// VkDisplayPlanePropertiesKHR* pProperties);
#define VKGetPhysicalDeviceDisplayPlanePropertiesKHR                           \
  incontext->vkGetPhysicalDeviceDisplayPlanePropertiesKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayPlaneSupportedDisplaysKHR(
// VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t*
// pDisplayCount, VkDisplayKHR* pDisplays);
#define VKGetDisplayPlaneSupportedDisplaysKHR                                  \
  incontext->vkGetDisplayPlaneSupportedDisplaysKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayModePropertiesKHR(
// VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t*
// pPropertyCount, VkDisplayModePropertiesKHR* pProperties);
#define VKGetDisplayModePropertiesKHR incontext->vkGetDisplayModePropertiesKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateDisplayModeKHR( VkPhysicalDevice
// physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR*
// pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR*
// pMode);
#define VKCreateDisplayModeKHR incontext->vkCreateDisplayModeKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayPlaneCapabilitiesKHR(
// VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex,
// VkDisplayPlaneCapabilitiesKHR* pCapabilities);
#define VKGetDisplayPlaneCapabilitiesKHR                                       \
  incontext->vkGetDisplayPlaneCapabilitiesKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateDisplayPlaneSurfaceKHR( VkInstance
// instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#define VKCreateDisplayPlaneSurfaceKHR incontext->vkCreateDisplayPlaneSurfaceKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceVideoCapabilitiesKHR(
// VkPhysicalDevice physicalDevice, const VkVideoProfileInfoKHR* pVideoProfile,
// VkVideoCapabilitiesKHR* pCapabilities);
#define VKGetPhysicalDeviceVideoCapabilitiesKHR                                \
  incontext->vkGetPhysicalDeviceVideoCapabilitiesKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceVideoFormatPropertiesKHR(
// VkPhysicalDevice physicalDevice, const VkPhysicalDeviceVideoFormatInfoKHR*
// pVideoFormatInfo, uint32_t* pVideoFormatPropertyCount,
// VkVideoFormatPropertiesKHR* pVideoFormatProperties);
#define VKGetPhysicalDeviceVideoFormatPropertiesKHR                            \
  incontext->vkGetPhysicalDeviceVideoFormatPropertiesKHR
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFeatures2KHR( VkPhysicalDevice
// physicalDevice, VkPhysicalDeviceFeatures2* pFeatures);
#define VKGetPhysicalDeviceFeatures2KHR                                        \
  incontext->vkGetPhysicalDeviceFeatures2KHR
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceProperties2KHR(
// VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties);
#define VKGetPhysicalDeviceProperties2KHR                                      \
  incontext->vkGetPhysicalDeviceProperties2KHR
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFormatProperties2KHR(
// VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2*
// pFormatProperties);
#define VKGetPhysicalDeviceFormatProperties2KHR                                \
  incontext->vkGetPhysicalDeviceFormatProperties2KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceImageFormatProperties2KHR(
// VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2*
// pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties);
#define VKGetPhysicalDeviceImageFormatProperties2KHR                           \
  incontext->vkGetPhysicalDeviceImageFormatProperties2KHR
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceQueueFamilyProperties2KHR(
// VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount,
// VkQueueFamilyProperties2* pQueueFamilyProperties);
#define VKGetPhysicalDeviceQueueFamilyProperties2KHR                           \
  incontext->vkGetPhysicalDeviceQueueFamilyProperties2KHR
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMemoryProperties2KHR(
// VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2*
// pMemoryProperties);
#define VKGetPhysicalDeviceMemoryProperties2KHR                                \
  incontext->vkGetPhysicalDeviceMemoryProperties2KHR
// VKAPI_ATTR void VKAPI_CALL
// vkGetPhysicalDeviceSparseImageFormatProperties2KHR( VkPhysicalDevice
// physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo,
// uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties);
#define VKGetPhysicalDeviceSparseImageFormatProperties2KHR                     \
  incontext->vkGetPhysicalDeviceSparseImageFormatProperties2KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkEnumeratePhysicalDeviceGroupsKHR( VkInstance
// instance, uint32_t* pPhysicalDeviceGroupCount,
// VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties);
#define VKEnumeratePhysicalDeviceGroupsKHR                                     \
  incontext->vkEnumeratePhysicalDeviceGroupsKHR
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalBufferPropertiesKHR(
// VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo*
// pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties);
#define VKGetPhysicalDeviceExternalBufferPropertiesKHR                         \
  incontext->vkGetPhysicalDeviceExternalBufferPropertiesKHR
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(
// VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo*
// pExternalSemaphoreInfo, VkExternalSemaphoreProperties*
// pExternalSemaphoreProperties);
#define VKGetPhysicalDeviceExternalSemaphorePropertiesKHR                      \
  incontext->vkGetPhysicalDeviceExternalSemaphorePropertiesKHR
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalFencePropertiesKHR(
// VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo*
// pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties);
#define VKGetPhysicalDeviceExternalFencePropertiesKHR                          \
  incontext->vkGetPhysicalDeviceExternalFencePropertiesKHR
// VKAPI_ATTR VkResult VKAPI_CALL
// vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(
// VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, uint32_t*
// pCounterCount, VkPerformanceCounterKHR* pCounters,
// VkPerformanceCounterDescriptionKHR* pCounterDescriptions);
#define VKEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR        \
  incontext->vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR
// VKAPI_ATTR void VKAPI_CALL
// vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR( VkPhysicalDevice
// physicalDevice, const VkQueryPoolPerformanceCreateInfoKHR*
// pPerformanceQueryCreateInfo, uint32_t* pNumPasses);
#define VKGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR                \
  incontext->vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceCapabilities2KHR(
// VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR*
// pSurfaceInfo, VkSurfaceCapabilities2KHR* pSurfaceCapabilities);
#define VKGetPhysicalDeviceSurfaceCapabilities2KHR                             \
  incontext->vkGetPhysicalDeviceSurfaceCapabilities2KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceFormats2KHR(
// VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR*
// pSurfaceInfo, uint32_t* pSurfaceFormatCount, VkSurfaceFormat2KHR*
// pSurfaceFormats);
#define VKGetPhysicalDeviceSurfaceFormats2KHR                                  \
  incontext->vkGetPhysicalDeviceSurfaceFormats2KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayProperties2KHR(
// VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount,
// VkDisplayProperties2KHR* pProperties);
#define VKGetPhysicalDeviceDisplayProperties2KHR                               \
  incontext->vkGetPhysicalDeviceDisplayProperties2KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayPlaneProperties2KHR(
// VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount,
// VkDisplayPlaneProperties2KHR* pProperties);
#define VKGetPhysicalDeviceDisplayPlaneProperties2KHR                          \
  incontext->vkGetPhysicalDeviceDisplayPlaneProperties2KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayModeProperties2KHR(
// VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t*
// pPropertyCount, VkDisplayModeProperties2KHR* pProperties);
#define VKGetDisplayModeProperties2KHR incontext->vkGetDisplayModeProperties2KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayPlaneCapabilities2KHR(
// VkPhysicalDevice physicalDevice, const VkDisplayPlaneInfo2KHR*
// pDisplayPlaneInfo, VkDisplayPlaneCapabilities2KHR* pCapabilities);
#define VKGetDisplayPlaneCapabilities2KHR                                      \
  incontext->vkGetDisplayPlaneCapabilities2KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceFragmentShadingRatesKHR(
// VkPhysicalDevice physicalDevice, uint32_t* pFragmentShadingRateCount,
// VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates);
#define VKGetPhysicalDeviceFragmentShadingRatesKHR                             \
  incontext->vkGetPhysicalDeviceFragmentShadingRatesKHR
// VKAPI_ATTR VkResult VKAPI_CALL
// vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR( VkPhysicalDevice
// physicalDevice, const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR*
// pQualityLevelInfo, VkVideoEncodeQualityLevelPropertiesKHR*
// pQualityLevelProperties);
#define VKGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR                \
  incontext->vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR
// VKAPI_ATTR VkResult VKAPI_CALL
// vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR( VkPhysicalDevice
// physicalDevice, uint32_t* pPropertyCount, VkCooperativeMatrixPropertiesKHR*
// pProperties);
#define VKGetPhysicalDeviceCooperativeMatrixPropertiesKHR                      \
  incontext->vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR
// VKAPI_ATTR VkResult VKAPI_CALL
// vkGetPhysicalDeviceCalibrateableTimeDomainsKHR( VkPhysicalDevice
// physicalDevice, uint32_t* pTimeDomainCount, VkTimeDomainKHR* pTimeDomains);
#define VKGetPhysicalDeviceCalibrateableTimeDomainsKHR                         \
  incontext->vkGetPhysicalDeviceCalibrateableTimeDomainsKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateDebugReportCallbackEXT( VkInstance
// instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback);
#define VKCreateDebugReportCallbackEXT incontext->vkCreateDebugReportCallbackEXT
// VKAPI_ATTR void VKAPI_CALL vkDestroyDebugReportCallbackEXT( VkInstance
// instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks*
// pAllocator);
#define VKDestroyDebugReportCallbackEXT                                        \
  incontext->vkDestroyDebugReportCallbackEXT
// VKAPI_ATTR void VKAPI_CALL vkDebugReportMessageEXT( VkInstance instance,
// VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t
// object, size_t location, int32_t messageCode, const char* pLayerPrefix, const
// char* pMessage);
#define VKDebugReportMessageEXT incontext->vkDebugReportMessageEXT
// VKAPI_ATTR VkResult VKAPI_CALL
// vkGetPhysicalDeviceExternalImageFormatPropertiesNV( VkPhysicalDevice
// physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling,
// VkImageUsageFlags usage, VkImageCreateFlags flags,
// VkExternalMemoryHandleTypeFlagsNV externalHandleType,
// VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties);
#define VKGetPhysicalDeviceExternalImageFormatPropertiesNV                     \
  incontext->vkGetPhysicalDeviceExternalImageFormatPropertiesNV
// VKAPI_ATTR VkResult VKAPI_CALL vkReleaseDisplayEXT( VkPhysicalDevice
// physicalDevice, VkDisplayKHR display);
#define VKReleaseDisplayEXT incontext->vkReleaseDisplayEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceCapabilities2EXT(
// VkPhysicalDevice physicalDevice, VkSurfaceKHR surface,
// VkSurfaceCapabilities2EXT* pSurfaceCapabilities);
#define VKGetPhysicalDeviceSurfaceCapabilities2EXT                             \
  incontext->vkGetPhysicalDeviceSurfaceCapabilities2EXT
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateDebugUtilsMessengerEXT( VkInstance
// instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger);
#define VKCreateDebugUtilsMessengerEXT incontext->vkCreateDebugUtilsMessengerEXT
// VKAPI_ATTR void VKAPI_CALL vkDestroyDebugUtilsMessengerEXT( VkInstance
// instance, VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks*
// pAllocator);
#define VKDestroyDebugUtilsMessengerEXT                                        \
  incontext->vkDestroyDebugUtilsMessengerEXT
// VKAPI_ATTR void VKAPI_CALL vkSubmitDebugUtilsMessageEXT( VkInstance instance,
// VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,
// VkDebugUtilsMessageTypeFlagsEXT messageTypes, const
// VkDebugUtilsMessengerCallbackDataEXT* pCallbackData);
#define VKSubmitDebugUtilsMessageEXT incontext->vkSubmitDebugUtilsMessageEXT
// VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMultisamplePropertiesEXT(
// VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples,
// VkMultisamplePropertiesEXT* pMultisampleProperties);
#define VKGetPhysicalDeviceMultisamplePropertiesEXT                            \
  incontext->vkGetPhysicalDeviceMultisamplePropertiesEXT
// VKAPI_ATTR VkResult VKAPI_CALL
// vkGetPhysicalDeviceCalibrateableTimeDomainsEXT( VkPhysicalDevice
// physicalDevice, uint32_t* pTimeDomainCount, VkTimeDomainKHR* pTimeDomains);
#define VKGetPhysicalDeviceCalibrateableTimeDomainsEXT                         \
  incontext->vkGetPhysicalDeviceCalibrateableTimeDomainsEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceToolPropertiesEXT(
// VkPhysicalDevice physicalDevice, uint32_t* pToolCount,
// VkPhysicalDeviceToolProperties* pToolProperties);
#define VKGetPhysicalDeviceToolPropertiesEXT                                   \
  incontext->vkGetPhysicalDeviceToolPropertiesEXT
// VKAPI_ATTR VkResult VKAPI_CALL
// vkGetPhysicalDeviceCooperativeMatrixPropertiesNV( VkPhysicalDevice
// physicalDevice, uint32_t* pPropertyCount, VkCooperativeMatrixPropertiesNV*
// pProperties);
#define VKGetPhysicalDeviceCooperativeMatrixPropertiesNV                       \
  incontext->vkGetPhysicalDeviceCooperativeMatrixPropertiesNV
// VKAPI_ATTR VkResult VKAPI_CALL
// vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
// VkPhysicalDevice physicalDevice, uint32_t* pCombinationCount,
// VkFramebufferMixedSamplesCombinationNV* pCombinations);
#define VKGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV      \
  incontext->vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateHeadlessSurfaceEXT( VkInstance
// instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#define VKCreateHeadlessSurfaceEXT incontext->vkCreateHeadlessSurfaceEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkAcquireDrmDisplayEXT( VkPhysicalDevice
// physicalDevice, int32_t drmFd, VkDisplayKHR display);
#define VKAcquireDrmDisplayEXT incontext->vkAcquireDrmDisplayEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkGetDrmDisplayEXT( VkPhysicalDevice
// physicalDevice, int32_t drmFd, uint32_t connectorId, VkDisplayKHR* display);
#define VKGetDrmDisplayEXT incontext->vkGetDrmDisplayEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceOpticalFlowImageFormatsNV(
// VkPhysicalDevice physicalDevice, const VkOpticalFlowImageFormatInfoNV*
// pOpticalFlowImageFormatInfo, uint32_t* pFormatCount,
// VkOpticalFlowImageFormatPropertiesNV* pImageFormatProperties);
#define VKGetPhysicalDeviceOpticalFlowImageFormatsNV                           \
  incontext->vkGetPhysicalDeviceOpticalFlowImageFormatsNV
#ifdef VK_USE_PLATFORM_ANDROID_KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateAndroidSurfaceKHR( VkInstance
// instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#define VKCreateAndroidSurfaceKHR incontext->vkCreateAndroidSurfaceKHR
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateImagePipeSurfaceFUCHSIA( VkInstance
// instance, const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#define VKCreateImagePipeSurfaceFUCHSIA                                        \
  incontext->vkCreateImagePipeSurfaceFUCHSIA
#endif
#ifdef VK_USE_PLATFORM_GGP
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateStreamDescriptorSurfaceGGP( VkInstance
// instance, const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#define VKCreateStreamDescriptorSurfaceGGP                                     \
  incontext->vkCreateStreamDescriptorSurfaceGGP
#endif
#ifdef VK_USE_PLATFORM_IOS_MVK
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateIOSSurfaceMVK( VkInstance instance,
// const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkSurfaceKHR* pSurface);
#define VKCreateIOSSurfaceMVK incontext->vkCreateIOSSurfaceMVK
#endif
#ifdef VK_USE_PLATFORM_MACOS_MVK
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateMacOSSurfaceMVK( VkInstance instance,
// const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkSurfaceKHR* pSurface);
#define VKCreateMacOSSurfaceMVK incontext->vkCreateMacOSSurfaceMVK
#endif
#ifdef VK_USE_PLATFORM_VI_NN
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateViSurfaceNN( VkInstance instance,
// const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkSurfaceKHR* pSurface);
#define VKCreateViSurfaceNN incontext->vkCreateViSurfaceNN
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateWaylandSurfaceKHR( VkInstance
// instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#define VKCreateWaylandSurfaceKHR incontext->vkCreateWaylandSurfaceKHR
// VKAPI_ATTR VkBool32 VKAPI_CALL
// vkGetPhysicalDeviceWaylandPresentationSupportKHR( VkPhysicalDevice
// physicalDevice, uint32_t queueFamilyIndex, struct wl_display* display);
#define VKGetPhysicalDeviceWaylandPresentationSupportKHR                       \
  incontext->vkGetPhysicalDeviceWaylandPresentationSupportKHR
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateWin32SurfaceKHR( VkInstance instance,
// const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkSurfaceKHR* pSurface);
#define VKCreateWin32SurfaceKHR incontext->vkCreateWin32SurfaceKHR
// VKAPI_ATTR VkBool32 VKAPI_CALL
// vkGetPhysicalDeviceWin32PresentationSupportKHR( VkPhysicalDevice
// physicalDevice, uint32_t queueFamilyIndex);
#define VKGetPhysicalDeviceWin32PresentationSupportKHR                         \
  incontext->vkGetPhysicalDeviceWin32PresentationSupportKHR
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfacePresentModes2EXT(
// VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR*
// pSurfaceInfo, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes);
#define VKGetPhysicalDeviceSurfacePresentModes2EXT                             \
  incontext->vkGetPhysicalDeviceSurfacePresentModes2EXT
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkAcquireWinrtDisplayNV( VkPhysicalDevice
// physicalDevice, VkDisplayKHR display);
#define VKAcquireWinrtDisplayNV incontext->vkAcquireWinrtDisplayNV
// VKAPI_ATTR VkResult VKAPI_CALL vkGetWinrtDisplayNV( VkPhysicalDevice
// physicalDevice, uint32_t deviceRelativeId, VkDisplayKHR* pDisplay);
#define VKGetWinrtDisplayNV incontext->vkGetWinrtDisplayNV
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateXcbSurfaceKHR( VkInstance instance,
// const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkSurfaceKHR* pSurface);
#define VKCreateXcbSurfaceKHR incontext->vkCreateXcbSurfaceKHR
// VKAPI_ATTR VkBool32 VKAPI_CALL vkGetPhysicalDeviceXcbPresentationSupportKHR(
// VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t*
// connection, xcb_visualid_t visual_id);
#define VKGetPhysicalDeviceXcbPresentationSupportKHR                           \
  incontext->vkGetPhysicalDeviceXcbPresentationSupportKHR
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateXlibSurfaceKHR( VkInstance instance,
// const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkSurfaceKHR* pSurface);
#define VKCreateXlibSurfaceKHR incontext->vkCreateXlibSurfaceKHR
// VKAPI_ATTR VkBool32 VKAPI_CALL vkGetPhysicalDeviceXlibPresentationSupportKHR(
// VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, Display* dpy,
// VisualID visualID);
#define VKGetPhysicalDeviceXlibPresentationSupportKHR                          \
  incontext->vkGetPhysicalDeviceXlibPresentationSupportKHR
#endif
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateDirectFBSurfaceEXT( VkInstance
// instance, const VkDirectFBSurfaceCreateInfoEXT* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#define VKCreateDirectFBSurfaceEXT incontext->vkCreateDirectFBSurfaceEXT
// VKAPI_ATTR VkBool32 VKAPI_CALL
// vkGetPhysicalDeviceDirectFBPresentationSupportEXT( VkPhysicalDevice
// physicalDevice, uint32_t queueFamilyIndex, IDirectFB* dfb);
#define VKGetPhysicalDeviceDirectFBPresentationSupportEXT                      \
  incontext->vkGetPhysicalDeviceDirectFBPresentationSupportEXT
#endif
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
// VKAPI_ATTR VkResult VKAPI_CALL vkAcquireXlibDisplayEXT( VkPhysicalDevice
// physicalDevice, Display* dpy, VkDisplayKHR display);
#define VKAcquireXlibDisplayEXT incontext->vkAcquireXlibDisplayEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkGetRandROutputDisplayEXT( VkPhysicalDevice
// physicalDevice, Display* dpy, RROutput rrOutput, VkDisplayKHR* pDisplay);
#define VKGetRandROutputDisplayEXT incontext->vkGetRandROutputDisplayEXT
#endif
#ifdef VK_USE_PLATFORM_METAL_EXT
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateMetalSurfaceEXT( VkInstance instance,
// const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkSurfaceKHR* pSurface);
#define VKCreateMetalSurfaceEXT incontext->vkCreateMetalSurfaceEXT
#endif
#ifdef VK_USE_PLATFORM_SCREEN_QNX
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateScreenSurfaceQNX( VkInstance instance,
// const VkScreenSurfaceCreateInfoQNX* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkSurfaceKHR* pSurface);
#define VKCreateScreenSurfaceQNX incontext->vkCreateScreenSurfaceQNX
// VKAPI_ATTR VkBool32 VKAPI_CALL
// vkGetPhysicalDeviceScreenPresentationSupportQNX( VkPhysicalDevice
// physicalDevice, uint32_t queueFamilyIndex, struct _screen_window* window);
#define VKGetPhysicalDeviceScreenPresentationSupportQNX                        \
  incontext->vkGetPhysicalDeviceScreenPresentationSupportQNX
#endif
// VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetDeviceProcAddr( VkDevice
// device, const char* pName);
#define VKGetDeviceProcAddr decontext->vkGetDeviceProcAddr
// VKAPI_ATTR void VKAPI_CALL vkDestroyDevice( VkDevice device, const
// VkAllocationCallbacks* pAllocator);
#define VKDestroyDevice decontext->vkDestroyDevice
// VKAPI_ATTR void VKAPI_CALL vkGetDeviceQueue( VkDevice device, uint32_t
// queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue);
#define VKGetDeviceQueue decontext->vkGetDeviceQueue
// VKAPI_ATTR VkResult VKAPI_CALL vkQueueSubmit( VkQueue queue, uint32_t
// submitCount, const VkSubmitInfo* pSubmits, VkFence fence);
#define VKQueueSubmit decontext->vkQueueSubmit
// VKAPI_ATTR VkResult VKAPI_CALL vkQueueWaitIdle( VkQueue queue);
#define VKQueueWaitIdle decontext->vkQueueWaitIdle
// VKAPI_ATTR VkResult VKAPI_CALL vkDeviceWaitIdle( VkDevice device);
#define VKDeviceWaitIdle decontext->vkDeviceWaitIdle
// VKAPI_ATTR VkResult VKAPI_CALL vkAllocateMemory( VkDevice device, const
// VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator,
// VkDeviceMemory* pMemory);
#define VKAllocateMemory decontext->vkAllocateMemory
// VKAPI_ATTR void VKAPI_CALL vkFreeMemory( VkDevice device, VkDeviceMemory
// memory, const VkAllocationCallbacks* pAllocator);
#define VKFreeMemory decontext->vkFreeMemory
// VKAPI_ATTR VkResult VKAPI_CALL vkMapMemory( VkDevice device, VkDeviceMemory
// memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags,
// void** ppData);
#define VKMapMemory decontext->vkMapMemory
// VKAPI_ATTR void VKAPI_CALL vkUnmapMemory( VkDevice device, VkDeviceMemory
// memory);
#define VKUnmapMemory decontext->vkUnmapMemory
// VKAPI_ATTR VkResult VKAPI_CALL vkFlushMappedMemoryRanges( VkDevice device,
// uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges);
#define VKFlushMappedMemoryRanges decontext->vkFlushMappedMemoryRanges
// VKAPI_ATTR VkResult VKAPI_CALL vkInvalidateMappedMemoryRanges( VkDevice
// device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges);
#define VKInvalidateMappedMemoryRanges decontext->vkInvalidateMappedMemoryRanges
// VKAPI_ATTR void VKAPI_CALL vkGetDeviceMemoryCommitment( VkDevice device,
// VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes);
#define VKGetDeviceMemoryCommitment decontext->vkGetDeviceMemoryCommitment
// VKAPI_ATTR VkResult VKAPI_CALL vkBindBufferMemory( VkDevice device, VkBuffer
// buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset);
#define VKBindBufferMemory decontext->vkBindBufferMemory
// VKAPI_ATTR VkResult VKAPI_CALL vkBindImageMemory( VkDevice device, VkImage
// image, VkDeviceMemory memory, VkDeviceSize memoryOffset);
#define VKBindImageMemory decontext->vkBindImageMemory
// VKAPI_ATTR void VKAPI_CALL vkGetBufferMemoryRequirements( VkDevice device,
// VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements);
#define VKGetBufferMemoryRequirements decontext->vkGetBufferMemoryRequirements
// VKAPI_ATTR void VKAPI_CALL vkGetImageMemoryRequirements( VkDevice device,
// VkImage image, VkMemoryRequirements* pMemoryRequirements);
#define VKGetImageMemoryRequirements decontext->vkGetImageMemoryRequirements
// VKAPI_ATTR void VKAPI_CALL vkGetImageSparseMemoryRequirements( VkDevice
// device, VkImage image, uint32_t* pSparseMemoryRequirementCount,
// VkSparseImageMemoryRequirements* pSparseMemoryRequirements);
#define VKGetImageSparseMemoryRequirements                                     \
  decontext->vkGetImageSparseMemoryRequirements
// VKAPI_ATTR VkResult VKAPI_CALL vkQueueBindSparse( VkQueue queue, uint32_t
// bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence);
#define VKQueueBindSparse decontext->vkQueueBindSparse
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateFence( VkDevice device, const
// VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
// VkFence* pFence);
#define VKCreateFence decontext->vkCreateFence
// VKAPI_ATTR void VKAPI_CALL vkDestroyFence( VkDevice device, VkFence fence,
// const VkAllocationCallbacks* pAllocator);
#define VKDestroyFence decontext->vkDestroyFence
// VKAPI_ATTR VkResult VKAPI_CALL vkResetFences( VkDevice device, uint32_t
// fenceCount, const VkFence* pFences);
#define VKResetFences decontext->vkResetFences
// VKAPI_ATTR VkResult VKAPI_CALL vkGetFenceStatus( VkDevice device, VkFence
// fence);
#define VKGetFenceStatus decontext->vkGetFenceStatus
// VKAPI_ATTR VkResult VKAPI_CALL vkWaitForFences( VkDevice device, uint32_t
// fenceCount, const VkFence* pFences, VkBool32 waitAll, uint64_t timeout);
#define VKWaitForFences decontext->vkWaitForFences
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateSemaphore( VkDevice device, const
// VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
// VkSemaphore* pSemaphore);
#define VKCreateSemaphore decontext->vkCreateSemaphore
// VKAPI_ATTR void VKAPI_CALL vkDestroySemaphore( VkDevice device, VkSemaphore
// semaphore, const VkAllocationCallbacks* pAllocator);
#define VKDestroySemaphore decontext->vkDestroySemaphore
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateEvent( VkDevice device, const
// VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
// VkEvent* pEvent);
#define VKCreateEvent decontext->vkCreateEvent
// VKAPI_ATTR void VKAPI_CALL vkDestroyEvent( VkDevice device, VkEvent event,
// const VkAllocationCallbacks* pAllocator);
#define VKDestroyEvent decontext->vkDestroyEvent
// VKAPI_ATTR VkResult VKAPI_CALL vkGetEventStatus( VkDevice device, VkEvent
// event);
#define VKGetEventStatus decontext->vkGetEventStatus
// VKAPI_ATTR VkResult VKAPI_CALL vkSetEvent( VkDevice device, VkEvent event);
#define VKSetEvent decontext->vkSetEvent
// VKAPI_ATTR VkResult VKAPI_CALL vkResetEvent( VkDevice device, VkEvent event);
#define VKResetEvent decontext->vkResetEvent
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateQueryPool( VkDevice device, const
// VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
// VkQueryPool* pQueryPool);
#define VKCreateQueryPool decontext->vkCreateQueryPool
// VKAPI_ATTR void VKAPI_CALL vkDestroyQueryPool( VkDevice device, VkQueryPool
// queryPool, const VkAllocationCallbacks* pAllocator);
#define VKDestroyQueryPool decontext->vkDestroyQueryPool
// VKAPI_ATTR VkResult VKAPI_CALL vkGetQueryPoolResults( VkDevice device,
// VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t
// dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags);
#define VKGetQueryPoolResults decontext->vkGetQueryPoolResults
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateBuffer( VkDevice device, const
// VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
// VkBuffer* pBuffer);
#define VKCreateBuffer decontext->vkCreateBuffer
// VKAPI_ATTR void VKAPI_CALL vkDestroyBuffer( VkDevice device, VkBuffer buffer,
// const VkAllocationCallbacks* pAllocator);
#define VKDestroyBuffer decontext->vkDestroyBuffer
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateBufferView( VkDevice device, const
// VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
// VkBufferView* pView);
#define VKCreateBufferView decontext->vkCreateBufferView
// VKAPI_ATTR void VKAPI_CALL vkDestroyBufferView( VkDevice device, VkBufferView
// bufferView, const VkAllocationCallbacks* pAllocator);
#define VKDestroyBufferView decontext->vkDestroyBufferView
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateImage( VkDevice device, const
// VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
// VkImage* pImage);
#define VKCreateImage decontext->vkCreateImage
// VKAPI_ATTR void VKAPI_CALL vkDestroyImage( VkDevice device, VkImage image,
// const VkAllocationCallbacks* pAllocator);
#define VKDestroyImage decontext->vkDestroyImage
// VKAPI_ATTR void VKAPI_CALL vkGetImageSubresourceLayout( VkDevice device,
// VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout*
// pLayout);
#define VKGetImageSubresourceLayout decontext->vkGetImageSubresourceLayout
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateImageView( VkDevice device, const
// VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
// VkImageView* pView);
#define VKCreateImageView decontext->vkCreateImageView
// VKAPI_ATTR void VKAPI_CALL vkDestroyImageView( VkDevice device, VkImageView
// imageView, const VkAllocationCallbacks* pAllocator);
#define VKDestroyImageView decontext->vkDestroyImageView
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateShaderModule( VkDevice device, const
// VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkShaderModule* pShaderModule);
#define VKCreateShaderModule decontext->vkCreateShaderModule
// VKAPI_ATTR void VKAPI_CALL vkDestroyShaderModule( VkDevice device,
// VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator);
#define VKDestroyShaderModule decontext->vkDestroyShaderModule
// VKAPI_ATTR VkResult VKAPI_CALL vkCreatePipelineCache( VkDevice device, const
// VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkPipelineCache* pPipelineCache);
#define VKCreatePipelineCache decontext->vkCreatePipelineCache
// VKAPI_ATTR void VKAPI_CALL vkDestroyPipelineCache( VkDevice device,
// VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator);
#define VKDestroyPipelineCache decontext->vkDestroyPipelineCache
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPipelineCacheData( VkDevice device,
// VkPipelineCache pipelineCache, size_t* pDataSize, void* pData);
#define VKGetPipelineCacheData decontext->vkGetPipelineCacheData
// VKAPI_ATTR VkResult VKAPI_CALL vkMergePipelineCaches( VkDevice device,
// VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache*
// pSrcCaches);
#define VKMergePipelineCaches decontext->vkMergePipelineCaches
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateGraphicsPipelines( VkDevice device,
// VkPipelineCache pipelineCache, uint32_t createInfoCount, const
// VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks*
// pAllocator, VkPipeline* pPipelines);
#define VKCreateGraphicsPipelines decontext->vkCreateGraphicsPipelines
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateComputePipelines( VkDevice device,
// VkPipelineCache pipelineCache, uint32_t createInfoCount, const
// VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks*
// pAllocator, VkPipeline* pPipelines);
#define VKCreateComputePipelines decontext->vkCreateComputePipelines
// VKAPI_ATTR void VKAPI_CALL vkDestroyPipeline( VkDevice device, VkPipeline
// pipeline, const VkAllocationCallbacks* pAllocator);
#define VKDestroyPipeline decontext->vkDestroyPipeline
// VKAPI_ATTR VkResult VKAPI_CALL vkCreatePipelineLayout( VkDevice device, const
// VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkPipelineLayout* pPipelineLayout);
#define VKCreatePipelineLayout decontext->vkCreatePipelineLayout
// VKAPI_ATTR void VKAPI_CALL vkDestroyPipelineLayout( VkDevice device,
// VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator);
#define VKDestroyPipelineLayout decontext->vkDestroyPipelineLayout
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateSampler( VkDevice device, const
// VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
// VkSampler* pSampler);
#define VKCreateSampler decontext->vkCreateSampler
// VKAPI_ATTR void VKAPI_CALL vkDestroySampler( VkDevice device, VkSampler
// sampler, const VkAllocationCallbacks* pAllocator);
#define VKDestroySampler decontext->vkDestroySampler
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorSetLayout( VkDevice device,
// const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout);
#define VKCreateDescriptorSetLayout decontext->vkCreateDescriptorSetLayout
// VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorSetLayout( VkDevice device,
// VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks*
// pAllocator);
#define VKDestroyDescriptorSetLayout decontext->vkDestroyDescriptorSetLayout
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorPool( VkDevice device, const
// VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkDescriptorPool* pDescriptorPool);
#define VKCreateDescriptorPool decontext->vkCreateDescriptorPool
// VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorPool( VkDevice device,
// VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator);
#define VKDestroyDescriptorPool decontext->vkDestroyDescriptorPool
// VKAPI_ATTR VkResult VKAPI_CALL vkResetDescriptorPool( VkDevice device,
// VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags);
#define VKResetDescriptorPool decontext->vkResetDescriptorPool
// VKAPI_ATTR VkResult VKAPI_CALL vkAllocateDescriptorSets( VkDevice device,
// const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet*
// pDescriptorSets);
#define VKAllocateDescriptorSets decontext->vkAllocateDescriptorSets
// VKAPI_ATTR VkResult VKAPI_CALL vkFreeDescriptorSets( VkDevice device,
// VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const
// VkDescriptorSet* pDescriptorSets);
#define VKFreeDescriptorSets decontext->vkFreeDescriptorSets
// VKAPI_ATTR void VKAPI_CALL vkUpdateDescriptorSets( VkDevice device, uint32_t
// descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites, uint32_t
// descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies);
#define VKUpdateDescriptorSets decontext->vkUpdateDescriptorSets
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateFramebuffer( VkDevice device, const
// VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkFramebuffer* pFramebuffer);
#define VKCreateFramebuffer decontext->vkCreateFramebuffer
// VKAPI_ATTR void VKAPI_CALL vkDestroyFramebuffer( VkDevice device,
// VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator);
#define VKDestroyFramebuffer decontext->vkDestroyFramebuffer
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateRenderPass( VkDevice device, const
// VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
// VkRenderPass* pRenderPass);
#define VKCreateRenderPass decontext->vkCreateRenderPass
// VKAPI_ATTR void VKAPI_CALL vkDestroyRenderPass( VkDevice device, VkRenderPass
// renderPass, const VkAllocationCallbacks* pAllocator);
#define VKDestroyRenderPass decontext->vkDestroyRenderPass
// VKAPI_ATTR void VKAPI_CALL vkGetRenderAreaGranularity( VkDevice device,
// VkRenderPass renderPass, VkExtent2D* pGranularity);
#define VKGetRenderAreaGranularity decontext->vkGetRenderAreaGranularity
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateCommandPool( VkDevice device, const
// VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkCommandPool* pCommandPool);
#define VKCreateCommandPool decontext->vkCreateCommandPool
// VKAPI_ATTR void VKAPI_CALL vkDestroyCommandPool( VkDevice device,
// VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator);
#define VKDestroyCommandPool decontext->vkDestroyCommandPool
// VKAPI_ATTR VkResult VKAPI_CALL vkResetCommandPool( VkDevice device,
// VkCommandPool commandPool, VkCommandPoolResetFlags flags);
#define VKResetCommandPool decontext->vkResetCommandPool
// VKAPI_ATTR VkResult VKAPI_CALL vkAllocateCommandBuffers( VkDevice device,
// const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer*
// pCommandBuffers);
#define VKAllocateCommandBuffers decontext->vkAllocateCommandBuffers
// VKAPI_ATTR void VKAPI_CALL vkFreeCommandBuffers( VkDevice device,
// VkCommandPool commandPool, uint32_t commandBufferCount, const
// VkCommandBuffer* pCommandBuffers);
#define VKFreeCommandBuffers decontext->vkFreeCommandBuffers
// VKAPI_ATTR VkResult VKAPI_CALL vkBeginCommandBuffer( VkCommandBuffer
// commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo);
#define VKBeginCommandBuffer decontext->vkBeginCommandBuffer
// VKAPI_ATTR VkResult VKAPI_CALL vkEndCommandBuffer( VkCommandBuffer
// commandBuffer);
#define VKEndCommandBuffer decontext->vkEndCommandBuffer
// VKAPI_ATTR VkResult VKAPI_CALL vkResetCommandBuffer( VkCommandBuffer
// commandBuffer, VkCommandBufferResetFlags flags);
#define VKResetCommandBuffer decontext->vkResetCommandBuffer
// VKAPI_ATTR void VKAPI_CALL vkCmdBindPipeline( VkCommandBuffer commandBuffer,
// VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline);
#define VKCmdBindPipeline decontext->vkCmdBindPipeline
// VKAPI_ATTR void VKAPI_CALL vkCmdSetViewport( VkCommandBuffer commandBuffer,
// uint32_t firstViewport, uint32_t viewportCount, const VkViewport*
// pViewports);
#define VKCmdSetViewport decontext->vkCmdSetViewport
// VKAPI_ATTR void VKAPI_CALL vkCmdSetScissor( VkCommandBuffer commandBuffer,
// uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors);
#define VKCmdSetScissor decontext->vkCmdSetScissor
// VKAPI_ATTR void VKAPI_CALL vkCmdSetLineWidth( VkCommandBuffer commandBuffer,
// float lineWidth);
#define VKCmdSetLineWidth decontext->vkCmdSetLineWidth
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBias( VkCommandBuffer commandBuffer,
// float depthBiasConstantFactor, float depthBiasClamp, float
// depthBiasSlopeFactor);
#define VKCmdSetDepthBias decontext->vkCmdSetDepthBias
// VKAPI_ATTR void VKAPI_CALL vkCmdSetBlendConstants( VkCommandBuffer
// commandBuffer, const float blendConstants[4]);
#define VKCmdSetBlendConstants decontext->vkCmdSetBlendConstants
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBounds( VkCommandBuffer
// commandBuffer, float minDepthBounds, float maxDepthBounds);
#define VKCmdSetDepthBounds decontext->vkCmdSetDepthBounds
// VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilCompareMask( VkCommandBuffer
// commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask);
#define VKCmdSetStencilCompareMask decontext->vkCmdSetStencilCompareMask
// VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilWriteMask( VkCommandBuffer
// commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask);
#define VKCmdSetStencilWriteMask decontext->vkCmdSetStencilWriteMask
// VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilReference( VkCommandBuffer
// commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference);
#define VKCmdSetStencilReference decontext->vkCmdSetStencilReference
// VKAPI_ATTR void VKAPI_CALL vkCmdBindDescriptorSets( VkCommandBuffer
// commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout
// layout, uint32_t firstSet, uint32_t descriptorSetCount, const
// VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount, const
// uint32_t* pDynamicOffsets);
#define VKCmdBindDescriptorSets decontext->vkCmdBindDescriptorSets
// VKAPI_ATTR void VKAPI_CALL vkCmdBindIndexBuffer( VkCommandBuffer
// commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType);
#define VKCmdBindIndexBuffer decontext->vkCmdBindIndexBuffer
// VKAPI_ATTR void VKAPI_CALL vkCmdBindVertexBuffers( VkCommandBuffer
// commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer*
// pBuffers, const VkDeviceSize* pOffsets);
#define VKCmdBindVertexBuffers decontext->vkCmdBindVertexBuffers
// VKAPI_ATTR void VKAPI_CALL vkCmdDraw( VkCommandBuffer commandBuffer, uint32_t
// vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t
// firstInstance);
#define VKCmdDraw decontext->vkCmdDraw
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexed( VkCommandBuffer commandBuffer,
// uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t
// vertexOffset, uint32_t firstInstance);
#define VKCmdDrawIndexed decontext->vkCmdDrawIndexed
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirect( VkCommandBuffer commandBuffer,
// VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
#define VKCmdDrawIndirect decontext->vkCmdDrawIndirect
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirect( VkCommandBuffer
// commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount,
// uint32_t stride);
#define VKCmdDrawIndexedIndirect decontext->vkCmdDrawIndexedIndirect
// VKAPI_ATTR void VKAPI_CALL vkCmdDispatch( VkCommandBuffer commandBuffer,
// uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
#define VKCmdDispatch decontext->vkCmdDispatch
// VKAPI_ATTR void VKAPI_CALL vkCmdDispatchIndirect( VkCommandBuffer
// commandBuffer, VkBuffer buffer, VkDeviceSize offset);
#define VKCmdDispatchIndirect decontext->vkCmdDispatchIndirect
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyBuffer( VkCommandBuffer commandBuffer,
// VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const
// VkBufferCopy* pRegions);
#define VKCmdCopyBuffer decontext->vkCmdCopyBuffer
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyImage( VkCommandBuffer commandBuffer,
// VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage,
// VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy*
// pRegions);
#define VKCmdCopyImage decontext->vkCmdCopyImage
// VKAPI_ATTR void VKAPI_CALL vkCmdBlitImage( VkCommandBuffer commandBuffer,
// VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage,
// VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit*
// pRegions, VkFilter filter);
#define VKCmdBlitImage decontext->vkCmdBlitImage
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyBufferToImage( VkCommandBuffer
// commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout
// dstImageLayout, uint32_t regionCount, const VkBufferImageCopy* pRegions);
#define VKCmdCopyBufferToImage decontext->vkCmdCopyBufferToImage
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyImageToBuffer( VkCommandBuffer
// commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer
// dstBuffer, uint32_t regionCount, const VkBufferImageCopy* pRegions);
#define VKCmdCopyImageToBuffer decontext->vkCmdCopyImageToBuffer
// VKAPI_ATTR void VKAPI_CALL vkCmdUpdateBuffer( VkCommandBuffer commandBuffer,
// VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const
// void* pData);
#define VKCmdUpdateBuffer decontext->vkCmdUpdateBuffer
// VKAPI_ATTR void VKAPI_CALL vkCmdFillBuffer( VkCommandBuffer commandBuffer,
// VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t
// data);
#define VKCmdFillBuffer decontext->vkCmdFillBuffer
// VKAPI_ATTR void VKAPI_CALL vkCmdClearColorImage( VkCommandBuffer
// commandBuffer, VkImage image, VkImageLayout imageLayout, const
// VkClearColorValue* pColor, uint32_t rangeCount, const
// VkImageSubresourceRange* pRanges);
#define VKCmdClearColorImage decontext->vkCmdClearColorImage
// VKAPI_ATTR void VKAPI_CALL vkCmdClearDepthStencilImage( VkCommandBuffer
// commandBuffer, VkImage image, VkImageLayout imageLayout, const
// VkClearDepthStencilValue* pDepthStencil, uint32_t rangeCount, const
// VkImageSubresourceRange* pRanges);
#define VKCmdClearDepthStencilImage decontext->vkCmdClearDepthStencilImage
// VKAPI_ATTR void VKAPI_CALL vkCmdClearAttachments( VkCommandBuffer
// commandBuffer, uint32_t attachmentCount, const VkClearAttachment*
// pAttachments, uint32_t rectCount, const VkClearRect* pRects);
#define VKCmdClearAttachments decontext->vkCmdClearAttachments
// VKAPI_ATTR void VKAPI_CALL vkCmdResolveImage( VkCommandBuffer commandBuffer,
// VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage,
// VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve*
// pRegions);
#define VKCmdResolveImage decontext->vkCmdResolveImage
// VKAPI_ATTR void VKAPI_CALL vkCmdSetEvent( VkCommandBuffer commandBuffer,
// VkEvent event, VkPipelineStageFlags stageMask);
#define VKCmdSetEvent decontext->vkCmdSetEvent
// VKAPI_ATTR void VKAPI_CALL vkCmdResetEvent( VkCommandBuffer commandBuffer,
// VkEvent event, VkPipelineStageFlags stageMask);
#define VKCmdResetEvent decontext->vkCmdResetEvent
// VKAPI_ATTR void VKAPI_CALL vkCmdWaitEvents( VkCommandBuffer commandBuffer,
// uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags
// srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount,
// const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount,
// const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t
// imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers);
#define VKCmdWaitEvents decontext->vkCmdWaitEvents
// VKAPI_ATTR void VKAPI_CALL vkCmdPipelineBarrier( VkCommandBuffer
// commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags
// dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount,
// const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount,
// const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t
// imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers);
#define VKCmdPipelineBarrier decontext->vkCmdPipelineBarrier
// VKAPI_ATTR void VKAPI_CALL vkCmdBeginQuery( VkCommandBuffer commandBuffer,
// VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags);
#define VKCmdBeginQuery decontext->vkCmdBeginQuery
// VKAPI_ATTR void VKAPI_CALL vkCmdEndQuery( VkCommandBuffer commandBuffer,
// VkQueryPool queryPool, uint32_t query);
#define VKCmdEndQuery decontext->vkCmdEndQuery
// VKAPI_ATTR void VKAPI_CALL vkCmdResetQueryPool( VkCommandBuffer
// commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t
// queryCount);
#define VKCmdResetQueryPool decontext->vkCmdResetQueryPool
// VKAPI_ATTR void VKAPI_CALL vkCmdWriteTimestamp( VkCommandBuffer
// commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool,
// uint32_t query);
#define VKCmdWriteTimestamp decontext->vkCmdWriteTimestamp
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyQueryPoolResults( VkCommandBuffer
// commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t
// queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride,
// VkQueryResultFlags flags);
#define VKCmdCopyQueryPoolResults decontext->vkCmdCopyQueryPoolResults
// VKAPI_ATTR void VKAPI_CALL vkCmdPushConstants( VkCommandBuffer commandBuffer,
// VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset,
// uint32_t size, const void* pValues);
#define VKCmdPushConstants decontext->vkCmdPushConstants
// VKAPI_ATTR void VKAPI_CALL vkCmdBeginRenderPass( VkCommandBuffer
// commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin,
// VkSubpassContents contents);
#define VKCmdBeginRenderPass decontext->vkCmdBeginRenderPass
// VKAPI_ATTR void VKAPI_CALL vkCmdNextSubpass( VkCommandBuffer commandBuffer,
// VkSubpassContents contents);
#define VKCmdNextSubpass decontext->vkCmdNextSubpass
// VKAPI_ATTR void VKAPI_CALL vkCmdEndRenderPass( VkCommandBuffer
// commandBuffer);
#define VKCmdEndRenderPass decontext->vkCmdEndRenderPass
// VKAPI_ATTR void VKAPI_CALL vkCmdExecuteCommands( VkCommandBuffer
// commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer*
// pCommandBuffers);
#define VKCmdExecuteCommands decontext->vkCmdExecuteCommands
// VKAPI_ATTR VkResult VKAPI_CALL vkBindBufferMemory2( VkDevice device, uint32_t
// bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos);
#define VKBindBufferMemory2 decontext->vkBindBufferMemory2
// VKAPI_ATTR VkResult VKAPI_CALL vkBindImageMemory2( VkDevice device, uint32_t
// bindInfoCount, const VkBindImageMemoryInfo* pBindInfos);
#define VKBindImageMemory2 decontext->vkBindImageMemory2
// VKAPI_ATTR void VKAPI_CALL vkGetDeviceGroupPeerMemoryFeatures( VkDevice
// device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t
// remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures);
#define VKGetDeviceGroupPeerMemoryFeatures                                     \
  decontext->vkGetDeviceGroupPeerMemoryFeatures
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDeviceMask( VkCommandBuffer commandBuffer,
// uint32_t deviceMask);
#define VKCmdSetDeviceMask decontext->vkCmdSetDeviceMask
// VKAPI_ATTR void VKAPI_CALL vkCmdDispatchBase( VkCommandBuffer commandBuffer,
// uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t
// groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
#define VKCmdDispatchBase decontext->vkCmdDispatchBase
// VKAPI_ATTR void VKAPI_CALL vkGetImageMemoryRequirements2( VkDevice device,
// const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2*
// pMemoryRequirements);
#define VKGetImageMemoryRequirements2 decontext->vkGetImageMemoryRequirements2
// VKAPI_ATTR void VKAPI_CALL vkGetBufferMemoryRequirements2( VkDevice device,
// const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2*
// pMemoryRequirements);
#define VKGetBufferMemoryRequirements2 decontext->vkGetBufferMemoryRequirements2
// VKAPI_ATTR void VKAPI_CALL vkGetImageSparseMemoryRequirements2( VkDevice
// device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t*
// pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2*
// pSparseMemoryRequirements);
#define VKGetImageSparseMemoryRequirements2                                    \
  decontext->vkGetImageSparseMemoryRequirements2
// VKAPI_ATTR void VKAPI_CALL vkTrimCommandPool( VkDevice device, VkCommandPool
// commandPool, VkCommandPoolTrimFlags flags);
#define VKTrimCommandPool decontext->vkTrimCommandPool
// VKAPI_ATTR void VKAPI_CALL vkGetDeviceQueue2( VkDevice device, const
// VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue);
#define VKGetDeviceQueue2 decontext->vkGetDeviceQueue2
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateSamplerYcbcrConversion( VkDevice
// device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion*
// pYcbcrConversion);
#define VKCreateSamplerYcbcrConversion decontext->vkCreateSamplerYcbcrConversion
// VKAPI_ATTR void VKAPI_CALL vkDestroySamplerYcbcrConversion( VkDevice device,
// VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks*
// pAllocator);
#define VKDestroySamplerYcbcrConversion                                        \
  decontext->vkDestroySamplerYcbcrConversion
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorUpdateTemplate( VkDevice
// device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate*
// pDescriptorUpdateTemplate);
#define VKCreateDescriptorUpdateTemplate                                       \
  decontext->vkCreateDescriptorUpdateTemplate
// VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorUpdateTemplate( VkDevice
// device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const
// VkAllocationCallbacks* pAllocator);
#define VKDestroyDescriptorUpdateTemplate                                      \
  decontext->vkDestroyDescriptorUpdateTemplate
// VKAPI_ATTR void VKAPI_CALL vkUpdateDescriptorSetWithTemplate( VkDevice
// device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate
// descriptorUpdateTemplate, const void* pData);
#define VKUpdateDescriptorSetWithTemplate                                      \
  decontext->vkUpdateDescriptorSetWithTemplate
// VKAPI_ATTR void VKAPI_CALL vkGetDescriptorSetLayoutSupport( VkDevice device,
// const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
// VkDescriptorSetLayoutSupport* pSupport);
#define VKGetDescriptorSetLayoutSupport                                        \
  decontext->vkGetDescriptorSetLayoutSupport
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirectCount( VkCommandBuffer
// commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
// VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
#define VKCmdDrawIndirectCount decontext->vkCmdDrawIndirectCount
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirectCount( VkCommandBuffer
// commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
// VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
#define VKCmdDrawIndexedIndirectCount decontext->vkCmdDrawIndexedIndirectCount
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateRenderPass2( VkDevice device, const
// VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkRenderPass* pRenderPass);
#define VKCreateRenderPass2 decontext->vkCreateRenderPass2
// VKAPI_ATTR void VKAPI_CALL vkCmdBeginRenderPass2( VkCommandBuffer
// commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, const
// VkSubpassBeginInfo* pSubpassBeginInfo);
#define VKCmdBeginRenderPass2 decontext->vkCmdBeginRenderPass2
// VKAPI_ATTR void VKAPI_CALL vkCmdNextSubpass2( VkCommandBuffer commandBuffer,
// const VkSubpassBeginInfo* pSubpassBeginInfo, const VkSubpassEndInfo*
// pSubpassEndInfo);
#define VKCmdNextSubpass2 decontext->vkCmdNextSubpass2
// VKAPI_ATTR void VKAPI_CALL vkCmdEndRenderPass2( VkCommandBuffer
// commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo);
#define VKCmdEndRenderPass2 decontext->vkCmdEndRenderPass2
// VKAPI_ATTR void VKAPI_CALL vkResetQueryPool( VkDevice device, VkQueryPool
// queryPool, uint32_t firstQuery, uint32_t queryCount);
#define VKResetQueryPool decontext->vkResetQueryPool
// VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreCounterValue( VkDevice device,
// VkSemaphore semaphore, uint64_t* pValue);
#define VKGetSemaphoreCounterValue decontext->vkGetSemaphoreCounterValue
// VKAPI_ATTR VkResult VKAPI_CALL vkWaitSemaphores( VkDevice device, const
// VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout);
#define VKWaitSemaphores decontext->vkWaitSemaphores
// VKAPI_ATTR VkResult VKAPI_CALL vkSignalSemaphore( VkDevice device, const
// VkSemaphoreSignalInfo* pSignalInfo);
#define VKSignalSemaphore decontext->vkSignalSemaphore
// VKAPI_ATTR VkDeviceAddress VKAPI_CALL vkGetBufferDeviceAddress( VkDevice
// device, const VkBufferDeviceAddressInfo* pInfo);
#define VKGetBufferDeviceAddress decontext->vkGetBufferDeviceAddress
// VKAPI_ATTR uint64_t VKAPI_CALL vkGetBufferOpaqueCaptureAddress( VkDevice
// device, const VkBufferDeviceAddressInfo* pInfo);
#define VKGetBufferOpaqueCaptureAddress                                        \
  decontext->vkGetBufferOpaqueCaptureAddress
// VKAPI_ATTR uint64_t VKAPI_CALL vkGetDeviceMemoryOpaqueCaptureAddress(
// VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo);
#define VKGetDeviceMemoryOpaqueCaptureAddress                                  \
  decontext->vkGetDeviceMemoryOpaqueCaptureAddress
// VKAPI_ATTR VkResult VKAPI_CALL vkCreatePrivateDataSlot( VkDevice device,
// const VkPrivateDataSlotCreateInfo* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkPrivateDataSlot* pPrivateDataSlot);
#define VKCreatePrivateDataSlot decontext->vkCreatePrivateDataSlot
// VKAPI_ATTR void VKAPI_CALL vkDestroyPrivateDataSlot( VkDevice device,
// VkPrivateDataSlot privateDataSlot, const VkAllocationCallbacks* pAllocator);
#define VKDestroyPrivateDataSlot decontext->vkDestroyPrivateDataSlot
// VKAPI_ATTR VkResult VKAPI_CALL vkSetPrivateData( VkDevice device,
// VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot
// privateDataSlot, uint64_t data);
#define VKSetPrivateData decontext->vkSetPrivateData
// VKAPI_ATTR void VKAPI_CALL vkGetPrivateData( VkDevice device, VkObjectType
// objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot,
// uint64_t* pData);
#define VKGetPrivateData decontext->vkGetPrivateData
// VKAPI_ATTR void VKAPI_CALL vkCmdSetEvent2( VkCommandBuffer commandBuffer,
// VkEvent event, const VkDependencyInfo* pDependencyInfo);
#define VKCmdSetEvent2 decontext->vkCmdSetEvent2
// VKAPI_ATTR void VKAPI_CALL vkCmdResetEvent2( VkCommandBuffer commandBuffer,
// VkEvent event, VkPipelineStageFlags2 stageMask);
#define VKCmdResetEvent2 decontext->vkCmdResetEvent2
// VKAPI_ATTR void VKAPI_CALL vkCmdWaitEvents2( VkCommandBuffer commandBuffer,
// uint32_t eventCount, const VkEvent* pEvents, const VkDependencyInfo*
// pDependencyInfos);
#define VKCmdWaitEvents2 decontext->vkCmdWaitEvents2
// VKAPI_ATTR void VKAPI_CALL vkCmdPipelineBarrier2( VkCommandBuffer
// commandBuffer, const VkDependencyInfo* pDependencyInfo);
#define VKCmdPipelineBarrier2 decontext->vkCmdPipelineBarrier2
// VKAPI_ATTR void VKAPI_CALL vkCmdWriteTimestamp2( VkCommandBuffer
// commandBuffer, VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t
// query);
#define VKCmdWriteTimestamp2 decontext->vkCmdWriteTimestamp2
// VKAPI_ATTR VkResult VKAPI_CALL vkQueueSubmit2( VkQueue queue, uint32_t
// submitCount, const VkSubmitInfo2* pSubmits, VkFence fence);
#define VKQueueSubmit2 decontext->vkQueueSubmit2
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyBuffer2( VkCommandBuffer commandBuffer,
// const VkCopyBufferInfo2* pCopyBufferInfo);
#define VKCmdCopyBuffer2 decontext->vkCmdCopyBuffer2
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyImage2( VkCommandBuffer commandBuffer,
// const VkCopyImageInfo2* pCopyImageInfo);
#define VKCmdCopyImage2 decontext->vkCmdCopyImage2
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyBufferToImage2( VkCommandBuffer
// commandBuffer, const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo);
#define VKCmdCopyBufferToImage2 decontext->vkCmdCopyBufferToImage2
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyImageToBuffer2( VkCommandBuffer
// commandBuffer, const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo);
#define VKCmdCopyImageToBuffer2 decontext->vkCmdCopyImageToBuffer2
// VKAPI_ATTR void VKAPI_CALL vkCmdBlitImage2( VkCommandBuffer commandBuffer,
// const VkBlitImageInfo2* pBlitImageInfo);
#define VKCmdBlitImage2 decontext->vkCmdBlitImage2
// VKAPI_ATTR void VKAPI_CALL vkCmdResolveImage2( VkCommandBuffer commandBuffer,
// const VkResolveImageInfo2* pResolveImageInfo);
#define VKCmdResolveImage2 decontext->vkCmdResolveImage2
// VKAPI_ATTR void VKAPI_CALL vkCmdBeginRendering( VkCommandBuffer
// commandBuffer, const VkRenderingInfo* pRenderingInfo);
#define VKCmdBeginRendering decontext->vkCmdBeginRendering
// VKAPI_ATTR void VKAPI_CALL vkCmdEndRendering( VkCommandBuffer commandBuffer);
#define VKCmdEndRendering decontext->vkCmdEndRendering
// VKAPI_ATTR void VKAPI_CALL vkCmdSetCullMode( VkCommandBuffer commandBuffer,
// VkCullModeFlags cullMode);
#define VKCmdSetCullMode decontext->vkCmdSetCullMode
// VKAPI_ATTR void VKAPI_CALL vkCmdSetFrontFace( VkCommandBuffer commandBuffer,
// VkFrontFace frontFace);
#define VKCmdSetFrontFace decontext->vkCmdSetFrontFace
// VKAPI_ATTR void VKAPI_CALL vkCmdSetPrimitiveTopology( VkCommandBuffer
// commandBuffer, VkPrimitiveTopology primitiveTopology);
#define VKCmdSetPrimitiveTopology decontext->vkCmdSetPrimitiveTopology
// VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportWithCount( VkCommandBuffer
// commandBuffer, uint32_t viewportCount, const VkViewport* pViewports);
#define VKCmdSetViewportWithCount decontext->vkCmdSetViewportWithCount
// VKAPI_ATTR void VKAPI_CALL vkCmdSetScissorWithCount( VkCommandBuffer
// commandBuffer, uint32_t scissorCount, const VkRect2D* pScissors);
#define VKCmdSetScissorWithCount decontext->vkCmdSetScissorWithCount
// VKAPI_ATTR void VKAPI_CALL vkCmdBindVertexBuffers2( VkCommandBuffer
// commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer*
// pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes, const
// VkDeviceSize* pStrides);
#define VKCmdBindVertexBuffers2 decontext->vkCmdBindVertexBuffers2
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthTestEnable( VkCommandBuffer
// commandBuffer, VkBool32 depthTestEnable);
#define VKCmdSetDepthTestEnable decontext->vkCmdSetDepthTestEnable
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthWriteEnable( VkCommandBuffer
// commandBuffer, VkBool32 depthWriteEnable);
#define VKCmdSetDepthWriteEnable decontext->vkCmdSetDepthWriteEnable
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthCompareOp( VkCommandBuffer
// commandBuffer, VkCompareOp depthCompareOp);
#define VKCmdSetDepthCompareOp decontext->vkCmdSetDepthCompareOp
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBoundsTestEnable( VkCommandBuffer
// commandBuffer, VkBool32 depthBoundsTestEnable);
#define VKCmdSetDepthBoundsTestEnable decontext->vkCmdSetDepthBoundsTestEnable
// VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilTestEnable( VkCommandBuffer
// commandBuffer, VkBool32 stencilTestEnable);
#define VKCmdSetStencilTestEnable decontext->vkCmdSetStencilTestEnable
// VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilOp( VkCommandBuffer commandBuffer,
// VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp,
// VkStencilOp depthFailOp, VkCompareOp compareOp);
#define VKCmdSetStencilOp decontext->vkCmdSetStencilOp
// VKAPI_ATTR void VKAPI_CALL vkCmdSetRasterizerDiscardEnable( VkCommandBuffer
// commandBuffer, VkBool32 rasterizerDiscardEnable);
#define VKCmdSetRasterizerDiscardEnable                                        \
  decontext->vkCmdSetRasterizerDiscardEnable
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBiasEnable( VkCommandBuffer
// commandBuffer, VkBool32 depthBiasEnable);
#define VKCmdSetDepthBiasEnable decontext->vkCmdSetDepthBiasEnable
// VKAPI_ATTR void VKAPI_CALL vkCmdSetPrimitiveRestartEnable( VkCommandBuffer
// commandBuffer, VkBool32 primitiveRestartEnable);
#define VKCmdSetPrimitiveRestartEnable decontext->vkCmdSetPrimitiveRestartEnable
// VKAPI_ATTR void VKAPI_CALL vkGetDeviceBufferMemoryRequirements( VkDevice
// device, const VkDeviceBufferMemoryRequirements* pInfo, VkMemoryRequirements2*
// pMemoryRequirements);
#define VKGetDeviceBufferMemoryRequirements                                    \
  decontext->vkGetDeviceBufferMemoryRequirements
// VKAPI_ATTR void VKAPI_CALL vkGetDeviceImageMemoryRequirements( VkDevice
// device, const VkDeviceImageMemoryRequirements* pInfo, VkMemoryRequirements2*
// pMemoryRequirements);
#define VKGetDeviceImageMemoryRequirements                                     \
  decontext->vkGetDeviceImageMemoryRequirements
// VKAPI_ATTR void VKAPI_CALL vkGetDeviceImageSparseMemoryRequirements( VkDevice
// device, const VkDeviceImageMemoryRequirements* pInfo, uint32_t*
// pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2*
// pSparseMemoryRequirements);
#define VKGetDeviceImageSparseMemoryRequirements                               \
  decontext->vkGetDeviceImageSparseMemoryRequirements
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateSwapchainKHR( VkDevice device, const
// VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkSwapchainKHR* pSwapchain);
#define VKCreateSwapchainKHR decontext->vkCreateSwapchainKHR
// VKAPI_ATTR void VKAPI_CALL vkDestroySwapchainKHR( VkDevice device,
// VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator);
#define VKDestroySwapchainKHR decontext->vkDestroySwapchainKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetSwapchainImagesKHR( VkDevice device,
// VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount, VkImage*
// pSwapchainImages);
#define VKGetSwapchainImagesKHR decontext->vkGetSwapchainImagesKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkAcquireNextImageKHR( VkDevice device,
// VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence
// fence, uint32_t* pImageIndex);
#define VKAcquireNextImageKHR decontext->vkAcquireNextImageKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkQueuePresentKHR( VkQueue queue, const
// VkPresentInfoKHR* pPresentInfo);
#define VKQueuePresentKHR decontext->vkQueuePresentKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetDeviceGroupPresentCapabilitiesKHR(
// VkDevice device, VkDeviceGroupPresentCapabilitiesKHR*
// pDeviceGroupPresentCapabilities);
#define VKGetDeviceGroupPresentCapabilitiesKHR                                 \
  decontext->vkGetDeviceGroupPresentCapabilitiesKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetDeviceGroupSurfacePresentModesKHR(
// VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR*
// pModes);
#define VKGetDeviceGroupSurfacePresentModesKHR                                 \
  decontext->vkGetDeviceGroupSurfacePresentModesKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkAcquireNextImage2KHR( VkDevice device, const
// VkAcquireNextImageInfoKHR* pAcquireInfo, uint32_t* pImageIndex);
#define VKAcquireNextImage2KHR decontext->vkAcquireNextImage2KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateSharedSwapchainsKHR( VkDevice device,
// uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const
// VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains);
#define VKCreateSharedSwapchainsKHR decontext->vkCreateSharedSwapchainsKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateVideoSessionKHR( VkDevice device,
// const VkVideoSessionCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkVideoSessionKHR* pVideoSession);
#define VKCreateVideoSessionKHR decontext->vkCreateVideoSessionKHR
// VKAPI_ATTR void VKAPI_CALL vkDestroyVideoSessionKHR( VkDevice device,
// VkVideoSessionKHR videoSession, const VkAllocationCallbacks* pAllocator);
#define VKDestroyVideoSessionKHR decontext->vkDestroyVideoSessionKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetVideoSessionMemoryRequirementsKHR(
// VkDevice device, VkVideoSessionKHR videoSession, uint32_t*
// pMemoryRequirementsCount, VkVideoSessionMemoryRequirementsKHR*
// pMemoryRequirements);
#define VKGetVideoSessionMemoryRequirementsKHR                                 \
  decontext->vkGetVideoSessionMemoryRequirementsKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkBindVideoSessionMemoryKHR( VkDevice device,
// VkVideoSessionKHR videoSession, uint32_t bindSessionMemoryInfoCount, const
// VkBindVideoSessionMemoryInfoKHR* pBindSessionMemoryInfos);
#define VKBindVideoSessionMemoryKHR decontext->vkBindVideoSessionMemoryKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateVideoSessionParametersKHR( VkDevice
// device, const VkVideoSessionParametersCreateInfoKHR* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkVideoSessionParametersKHR*
// pVideoSessionParameters);
#define VKCreateVideoSessionParametersKHR                                      \
  decontext->vkCreateVideoSessionParametersKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkUpdateVideoSessionParametersKHR( VkDevice
// device, VkVideoSessionParametersKHR videoSessionParameters, const
// VkVideoSessionParametersUpdateInfoKHR* pUpdateInfo);
#define VKUpdateVideoSessionParametersKHR                                      \
  decontext->vkUpdateVideoSessionParametersKHR
// VKAPI_ATTR void VKAPI_CALL vkDestroyVideoSessionParametersKHR( VkDevice
// device, VkVideoSessionParametersKHR videoSessionParameters, const
// VkAllocationCallbacks* pAllocator);
#define VKDestroyVideoSessionParametersKHR                                     \
  decontext->vkDestroyVideoSessionParametersKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdBeginVideoCodingKHR( VkCommandBuffer
// commandBuffer, const VkVideoBeginCodingInfoKHR* pBeginInfo);
#define VKCmdBeginVideoCodingKHR decontext->vkCmdBeginVideoCodingKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdEndVideoCodingKHR( VkCommandBuffer
// commandBuffer, const VkVideoEndCodingInfoKHR* pEndCodingInfo);
#define VKCmdEndVideoCodingKHR decontext->vkCmdEndVideoCodingKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdControlVideoCodingKHR( VkCommandBuffer
// commandBuffer, const VkVideoCodingControlInfoKHR* pCodingControlInfo);
#define VKCmdControlVideoCodingKHR decontext->vkCmdControlVideoCodingKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdDecodeVideoKHR( VkCommandBuffer
// commandBuffer, const VkVideoDecodeInfoKHR* pDecodeInfo);
#define VKCmdDecodeVideoKHR decontext->vkCmdDecodeVideoKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdBeginRenderingKHR( VkCommandBuffer
// commandBuffer, const VkRenderingInfo* pRenderingInfo);
#define VKCmdBeginRenderingKHR decontext->vkCmdBeginRenderingKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdEndRenderingKHR( VkCommandBuffer
// commandBuffer);
#define VKCmdEndRenderingKHR decontext->vkCmdEndRenderingKHR
// VKAPI_ATTR void VKAPI_CALL vkGetDeviceGroupPeerMemoryFeaturesKHR( VkDevice
// device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t
// remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures);
#define VKGetDeviceGroupPeerMemoryFeaturesKHR                                  \
  decontext->vkGetDeviceGroupPeerMemoryFeaturesKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDeviceMaskKHR( VkCommandBuffer
// commandBuffer, uint32_t deviceMask);
#define VKCmdSetDeviceMaskKHR decontext->vkCmdSetDeviceMaskKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdDispatchBaseKHR( VkCommandBuffer
// commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ,
// uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
#define VKCmdDispatchBaseKHR decontext->vkCmdDispatchBaseKHR
// VKAPI_ATTR void VKAPI_CALL vkTrimCommandPoolKHR( VkDevice device,
// VkCommandPool commandPool, VkCommandPoolTrimFlags flags);
#define VKTrimCommandPoolKHR decontext->vkTrimCommandPoolKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryFdKHR( VkDevice device, const
// VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd);
#define VKGetMemoryFdKHR decontext->vkGetMemoryFdKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryFdPropertiesKHR( VkDevice device,
// VkExternalMemoryHandleTypeFlagBits handleType, int fd,
// VkMemoryFdPropertiesKHR* pMemoryFdProperties);
#define VKGetMemoryFdPropertiesKHR decontext->vkGetMemoryFdPropertiesKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkImportSemaphoreFdKHR( VkDevice device, const
// VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo);
#define VKImportSemaphoreFdKHR decontext->vkImportSemaphoreFdKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreFdKHR( VkDevice device, const
// VkSemaphoreGetFdInfoKHR* pGetFdInfo, int* pFd);
#define VKGetSemaphoreFdKHR decontext->vkGetSemaphoreFdKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdPushDescriptorSetKHR( VkCommandBuffer
// commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout
// layout, uint32_t set, uint32_t descriptorWriteCount, const
// VkWriteDescriptorSet* pDescriptorWrites);
#define VKCmdPushDescriptorSetKHR decontext->vkCmdPushDescriptorSetKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdPushDescriptorSetWithTemplateKHR(
// VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate
// descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void*
// pData);
#define VKCmdPushDescriptorSetWithTemplateKHR                                  \
  decontext->vkCmdPushDescriptorSetWithTemplateKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorUpdateTemplateKHR( VkDevice
// device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate*
// pDescriptorUpdateTemplate);
#define VKCreateDescriptorUpdateTemplateKHR                                    \
  decontext->vkCreateDescriptorUpdateTemplateKHR
// VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorUpdateTemplateKHR( VkDevice
// device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const
// VkAllocationCallbacks* pAllocator);
#define VKDestroyDescriptorUpdateTemplateKHR                                   \
  decontext->vkDestroyDescriptorUpdateTemplateKHR
// VKAPI_ATTR void VKAPI_CALL vkUpdateDescriptorSetWithTemplateKHR( VkDevice
// device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate
// descriptorUpdateTemplate, const void* pData);
#define VKUpdateDescriptorSetWithTemplateKHR                                   \
  decontext->vkUpdateDescriptorSetWithTemplateKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateRenderPass2KHR( VkDevice device, const
// VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkRenderPass* pRenderPass);
#define VKCreateRenderPass2KHR decontext->vkCreateRenderPass2KHR
// VKAPI_ATTR void VKAPI_CALL vkCmdBeginRenderPass2KHR( VkCommandBuffer
// commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, const
// VkSubpassBeginInfo* pSubpassBeginInfo);
#define VKCmdBeginRenderPass2KHR decontext->vkCmdBeginRenderPass2KHR
// VKAPI_ATTR void VKAPI_CALL vkCmdNextSubpass2KHR( VkCommandBuffer
// commandBuffer, const VkSubpassBeginInfo* pSubpassBeginInfo, const
// VkSubpassEndInfo* pSubpassEndInfo);
#define VKCmdNextSubpass2KHR decontext->vkCmdNextSubpass2KHR
// VKAPI_ATTR void VKAPI_CALL vkCmdEndRenderPass2KHR( VkCommandBuffer
// commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo);
#define VKCmdEndRenderPass2KHR decontext->vkCmdEndRenderPass2KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetSwapchainStatusKHR( VkDevice device,
// VkSwapchainKHR swapchain);
#define VKGetSwapchainStatusKHR decontext->vkGetSwapchainStatusKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkImportFenceFdKHR( VkDevice device, const
// VkImportFenceFdInfoKHR* pImportFenceFdInfo);
#define VKImportFenceFdKHR decontext->vkImportFenceFdKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetFenceFdKHR( VkDevice device, const
// VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd);
#define VKGetFenceFdKHR decontext->vkGetFenceFdKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkAcquireProfilingLockKHR( VkDevice device,
// const VkAcquireProfilingLockInfoKHR* pInfo);
#define VKAcquireProfilingLockKHR decontext->vkAcquireProfilingLockKHR
// VKAPI_ATTR void VKAPI_CALL vkReleaseProfilingLockKHR( VkDevice device);
#define VKReleaseProfilingLockKHR decontext->vkReleaseProfilingLockKHR
// VKAPI_ATTR void VKAPI_CALL vkGetImageMemoryRequirements2KHR( VkDevice device,
// const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2*
// pMemoryRequirements);
#define VKGetImageMemoryRequirements2KHR                                       \
  decontext->vkGetImageMemoryRequirements2KHR
// VKAPI_ATTR void VKAPI_CALL vkGetBufferMemoryRequirements2KHR( VkDevice
// device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2*
// pMemoryRequirements);
#define VKGetBufferMemoryRequirements2KHR                                      \
  decontext->vkGetBufferMemoryRequirements2KHR
// VKAPI_ATTR void VKAPI_CALL vkGetImageSparseMemoryRequirements2KHR( VkDevice
// device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t*
// pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2*
// pSparseMemoryRequirements);
#define VKGetImageSparseMemoryRequirements2KHR                                 \
  decontext->vkGetImageSparseMemoryRequirements2KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateSamplerYcbcrConversionKHR( VkDevice
// device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion*
// pYcbcrConversion);
#define VKCreateSamplerYcbcrConversionKHR                                      \
  decontext->vkCreateSamplerYcbcrConversionKHR
// VKAPI_ATTR void VKAPI_CALL vkDestroySamplerYcbcrConversionKHR( VkDevice
// device, VkSamplerYcbcrConversion ycbcrConversion, const
// VkAllocationCallbacks* pAllocator);
#define VKDestroySamplerYcbcrConversionKHR                                     \
  decontext->vkDestroySamplerYcbcrConversionKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkBindBufferMemory2KHR( VkDevice device,
// uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos);
#define VKBindBufferMemory2KHR decontext->vkBindBufferMemory2KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkBindImageMemory2KHR( VkDevice device,
// uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos);
#define VKBindImageMemory2KHR decontext->vkBindImageMemory2KHR
// VKAPI_ATTR void VKAPI_CALL vkGetDescriptorSetLayoutSupportKHR( VkDevice
// device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
// VkDescriptorSetLayoutSupport* pSupport);
#define VKGetDescriptorSetLayoutSupportKHR                                     \
  decontext->vkGetDescriptorSetLayoutSupportKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirectCountKHR( VkCommandBuffer
// commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
// VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
#define VKCmdDrawIndirectCountKHR decontext->vkCmdDrawIndirectCountKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirectCountKHR( VkCommandBuffer
// commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
// VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
#define VKCmdDrawIndexedIndirectCountKHR                                       \
  decontext->vkCmdDrawIndexedIndirectCountKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreCounterValueKHR( VkDevice
// device, VkSemaphore semaphore, uint64_t* pValue);
#define VKGetSemaphoreCounterValueKHR decontext->vkGetSemaphoreCounterValueKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkWaitSemaphoresKHR( VkDevice device, const
// VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout);
#define VKWaitSemaphoresKHR decontext->vkWaitSemaphoresKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkSignalSemaphoreKHR( VkDevice device, const
// VkSemaphoreSignalInfo* pSignalInfo);
#define VKSignalSemaphoreKHR decontext->vkSignalSemaphoreKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdSetFragmentShadingRateKHR( VkCommandBuffer
// commandBuffer, const VkExtent2D* pFragmentSize, const
// VkFragmentShadingRateCombinerOpKHR combinerOps[2]);
#define VKCmdSetFragmentShadingRateKHR decontext->vkCmdSetFragmentShadingRateKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdSetRenderingAttachmentLocationsKHR(
// VkCommandBuffer commandBuffer, const VkRenderingAttachmentLocationInfoKHR*
// pLocationInfo);
#define VKCmdSetRenderingAttachmentLocationsKHR                                \
  decontext->vkCmdSetRenderingAttachmentLocationsKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdSetRenderingInputAttachmentIndicesKHR(
// VkCommandBuffer commandBuffer, const VkRenderingInputAttachmentIndexInfoKHR*
// pLocationInfo);
#define VKCmdSetRenderingInputAttachmentIndicesKHR                             \
  decontext->vkCmdSetRenderingInputAttachmentIndicesKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkWaitForPresentKHR( VkDevice device,
// VkSwapchainKHR swapchain, uint64_t presentId, uint64_t timeout);
#define VKWaitForPresentKHR decontext->vkWaitForPresentKHR
// VKAPI_ATTR VkDeviceAddress VKAPI_CALL vkGetBufferDeviceAddressKHR( VkDevice
// device, const VkBufferDeviceAddressInfo* pInfo);
#define VKGetBufferDeviceAddressKHR decontext->vkGetBufferDeviceAddressKHR
// VKAPI_ATTR uint64_t VKAPI_CALL vkGetBufferOpaqueCaptureAddressKHR( VkDevice
// device, const VkBufferDeviceAddressInfo* pInfo);
#define VKGetBufferOpaqueCaptureAddressKHR                                     \
  decontext->vkGetBufferOpaqueCaptureAddressKHR
// VKAPI_ATTR uint64_t VKAPI_CALL vkGetDeviceMemoryOpaqueCaptureAddressKHR(
// VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo);
#define VKGetDeviceMemoryOpaqueCaptureAddressKHR                               \
  decontext->vkGetDeviceMemoryOpaqueCaptureAddressKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateDeferredOperationKHR( VkDevice device,
// const VkAllocationCallbacks* pAllocator, VkDeferredOperationKHR*
// pDeferredOperation);
#define VKCreateDeferredOperationKHR decontext->vkCreateDeferredOperationKHR
// VKAPI_ATTR void VKAPI_CALL vkDestroyDeferredOperationKHR( VkDevice device,
// VkDeferredOperationKHR operation, const VkAllocationCallbacks* pAllocator);
#define VKDestroyDeferredOperationKHR decontext->vkDestroyDeferredOperationKHR
// VKAPI_ATTR uint32_t VKAPI_CALL vkGetDeferredOperationMaxConcurrencyKHR(
// VkDevice device, VkDeferredOperationKHR operation);
#define VKGetDeferredOperationMaxConcurrencyKHR                                \
  decontext->vkGetDeferredOperationMaxConcurrencyKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetDeferredOperationResultKHR( VkDevice
// device, VkDeferredOperationKHR operation);
#define VKGetDeferredOperationResultKHR                                        \
  decontext->vkGetDeferredOperationResultKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkDeferredOperationJoinKHR( VkDevice device,
// VkDeferredOperationKHR operation);
#define VKDeferredOperationJoinKHR decontext->vkDeferredOperationJoinKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPipelineExecutablePropertiesKHR( VkDevice
// device, const VkPipelineInfoKHR* pPipelineInfo, uint32_t* pExecutableCount,
// VkPipelineExecutablePropertiesKHR* pProperties);
#define VKGetPipelineExecutablePropertiesKHR                                   \
  decontext->vkGetPipelineExecutablePropertiesKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPipelineExecutableStatisticsKHR( VkDevice
// device, const VkPipelineExecutableInfoKHR* pExecutableInfo, uint32_t*
// pStatisticCount, VkPipelineExecutableStatisticKHR* pStatistics);
#define VKGetPipelineExecutableStatisticsKHR                                   \
  decontext->vkGetPipelineExecutableStatisticsKHR
// VKAPI_ATTR VkResult VKAPI_CALL
// vkGetPipelineExecutableInternalRepresentationsKHR( VkDevice device, const
// VkPipelineExecutableInfoKHR* pExecutableInfo, uint32_t*
// pInternalRepresentationCount, VkPipelineExecutableInternalRepresentationKHR*
// pInternalRepresentations);
#define VKGetPipelineExecutableInternalRepresentationsKHR                      \
  decontext->vkGetPipelineExecutableInternalRepresentationsKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkMapMemory2KHR( VkDevice device, const
// VkMemoryMapInfoKHR* pMemoryMapInfo, void** ppData);
#define VKMapMemory2KHR decontext->vkMapMemory2KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkUnmapMemory2KHR( VkDevice device, const
// VkMemoryUnmapInfoKHR* pMemoryUnmapInfo);
#define VKUnmapMemory2KHR decontext->vkUnmapMemory2KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetEncodedVideoSessionParametersKHR(
// VkDevice device, const VkVideoEncodeSessionParametersGetInfoKHR*
// pVideoSessionParametersInfo, VkVideoEncodeSessionParametersFeedbackInfoKHR*
// pFeedbackInfo, size_t* pDataSize, void* pData);
#define VKGetEncodedVideoSessionParametersKHR                                  \
  decontext->vkGetEncodedVideoSessionParametersKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdEncodeVideoKHR( VkCommandBuffer
// commandBuffer, const VkVideoEncodeInfoKHR* pEncodeInfo);
#define VKCmdEncodeVideoKHR decontext->vkCmdEncodeVideoKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdSetEvent2KHR( VkCommandBuffer commandBuffer,
// VkEvent event, const VkDependencyInfo* pDependencyInfo);
#define VKCmdSetEvent2KHR decontext->vkCmdSetEvent2KHR
// VKAPI_ATTR void VKAPI_CALL vkCmdResetEvent2KHR( VkCommandBuffer
// commandBuffer, VkEvent event, VkPipelineStageFlags2 stageMask);
#define VKCmdResetEvent2KHR decontext->vkCmdResetEvent2KHR
// VKAPI_ATTR void VKAPI_CALL vkCmdWaitEvents2KHR( VkCommandBuffer
// commandBuffer, uint32_t eventCount, const VkEvent* pEvents, const
// VkDependencyInfo* pDependencyInfos);
#define VKCmdWaitEvents2KHR decontext->vkCmdWaitEvents2KHR
// VKAPI_ATTR void VKAPI_CALL vkCmdPipelineBarrier2KHR( VkCommandBuffer
// commandBuffer, const VkDependencyInfo* pDependencyInfo);
#define VKCmdPipelineBarrier2KHR decontext->vkCmdPipelineBarrier2KHR
// VKAPI_ATTR void VKAPI_CALL vkCmdWriteTimestamp2KHR( VkCommandBuffer
// commandBuffer, VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t
// query);
#define VKCmdWriteTimestamp2KHR decontext->vkCmdWriteTimestamp2KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkQueueSubmit2KHR( VkQueue queue, uint32_t
// submitCount, const VkSubmitInfo2* pSubmits, VkFence fence);
#define VKQueueSubmit2KHR decontext->vkQueueSubmit2KHR
// VKAPI_ATTR void VKAPI_CALL vkCmdWriteBufferMarker2AMD( VkCommandBuffer
// commandBuffer, VkPipelineStageFlags2 stage, VkBuffer dstBuffer, VkDeviceSize
// dstOffset, uint32_t marker);
#define VKCmdWriteBufferMarker2AMD decontext->vkCmdWriteBufferMarker2AMD
// VKAPI_ATTR void VKAPI_CALL vkGetQueueCheckpointData2NV( VkQueue queue,
// uint32_t* pCheckpointDataCount, VkCheckpointData2NV* pCheckpointData);
#define VKGetQueueCheckpointData2NV decontext->vkGetQueueCheckpointData2NV
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyBuffer2KHR( VkCommandBuffer
// commandBuffer, const VkCopyBufferInfo2* pCopyBufferInfo);
#define VKCmdCopyBuffer2KHR decontext->vkCmdCopyBuffer2KHR
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyImage2KHR( VkCommandBuffer commandBuffer,
// const VkCopyImageInfo2* pCopyImageInfo);
#define VKCmdCopyImage2KHR decontext->vkCmdCopyImage2KHR
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyBufferToImage2KHR( VkCommandBuffer
// commandBuffer, const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo);
#define VKCmdCopyBufferToImage2KHR decontext->vkCmdCopyBufferToImage2KHR
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyImageToBuffer2KHR( VkCommandBuffer
// commandBuffer, const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo);
#define VKCmdCopyImageToBuffer2KHR decontext->vkCmdCopyImageToBuffer2KHR
// VKAPI_ATTR void VKAPI_CALL vkCmdBlitImage2KHR( VkCommandBuffer commandBuffer,
// const VkBlitImageInfo2* pBlitImageInfo);
#define VKCmdBlitImage2KHR decontext->vkCmdBlitImage2KHR
// VKAPI_ATTR void VKAPI_CALL vkCmdResolveImage2KHR( VkCommandBuffer
// commandBuffer, const VkResolveImageInfo2* pResolveImageInfo);
#define VKCmdResolveImage2KHR decontext->vkCmdResolveImage2KHR
// VKAPI_ATTR void VKAPI_CALL vkCmdTraceRaysIndirect2KHR( VkCommandBuffer
// commandBuffer, VkDeviceAddress indirectDeviceAddress);
#define VKCmdTraceRaysIndirect2KHR decontext->vkCmdTraceRaysIndirect2KHR
// VKAPI_ATTR void VKAPI_CALL vkGetDeviceBufferMemoryRequirementsKHR( VkDevice
// device, const VkDeviceBufferMemoryRequirements* pInfo, VkMemoryRequirements2*
// pMemoryRequirements);
#define VKGetDeviceBufferMemoryRequirementsKHR                                 \
  decontext->vkGetDeviceBufferMemoryRequirementsKHR
// VKAPI_ATTR void VKAPI_CALL vkGetDeviceImageMemoryRequirementsKHR( VkDevice
// device, const VkDeviceImageMemoryRequirements* pInfo, VkMemoryRequirements2*
// pMemoryRequirements);
#define VKGetDeviceImageMemoryRequirementsKHR                                  \
  decontext->vkGetDeviceImageMemoryRequirementsKHR
// VKAPI_ATTR void VKAPI_CALL vkGetDeviceImageSparseMemoryRequirementsKHR(
// VkDevice device, const VkDeviceImageMemoryRequirements* pInfo, uint32_t*
// pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2*
// pSparseMemoryRequirements);
#define VKGetDeviceImageSparseMemoryRequirementsKHR                            \
  decontext->vkGetDeviceImageSparseMemoryRequirementsKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdBindIndexBuffer2KHR( VkCommandBuffer
// commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkDeviceSize size,
// VkIndexType indexType);
#define VKCmdBindIndexBuffer2KHR decontext->vkCmdBindIndexBuffer2KHR
// VKAPI_ATTR void VKAPI_CALL vkGetRenderingAreaGranularityKHR( VkDevice device,
// const VkRenderingAreaInfoKHR* pRenderingAreaInfo, VkExtent2D* pGranularity);
#define VKGetRenderingAreaGranularityKHR                                       \
  decontext->vkGetRenderingAreaGranularityKHR
// VKAPI_ATTR void VKAPI_CALL vkGetDeviceImageSubresourceLayoutKHR( VkDevice
// device, const VkDeviceImageSubresourceInfoKHR* pInfo,
// VkSubresourceLayout2KHR* pLayout);
#define VKGetDeviceImageSubresourceLayoutKHR                                   \
  decontext->vkGetDeviceImageSubresourceLayoutKHR
// VKAPI_ATTR void VKAPI_CALL vkGetImageSubresourceLayout2KHR( VkDevice device,
// VkImage image, const VkImageSubresource2KHR* pSubresource,
// VkSubresourceLayout2KHR* pLayout);
#define VKGetImageSubresourceLayout2KHR                                        \
  decontext->vkGetImageSubresourceLayout2KHR
// VKAPI_ATTR void VKAPI_CALL vkCmdSetLineStippleKHR( VkCommandBuffer
// commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern);
#define VKCmdSetLineStippleKHR decontext->vkCmdSetLineStippleKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetCalibratedTimestampsKHR( VkDevice device,
// uint32_t timestampCount, const VkCalibratedTimestampInfoKHR* pTimestampInfos,
// uint64_t* pTimestamps, uint64_t* pMaxDeviation);
#define VKGetCalibratedTimestampsKHR decontext->vkGetCalibratedTimestampsKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdBindDescriptorSets2KHR( VkCommandBuffer
// commandBuffer, const VkBindDescriptorSetsInfoKHR* pBindDescriptorSetsInfo);
#define VKCmdBindDescriptorSets2KHR decontext->vkCmdBindDescriptorSets2KHR
// VKAPI_ATTR void VKAPI_CALL vkCmdPushConstants2KHR( VkCommandBuffer
// commandBuffer, const VkPushConstantsInfoKHR* pPushConstantsInfo);
#define VKCmdPushConstants2KHR decontext->vkCmdPushConstants2KHR
// VKAPI_ATTR void VKAPI_CALL vkCmdPushDescriptorSet2KHR( VkCommandBuffer
// commandBuffer, const VkPushDescriptorSetInfoKHR* pPushDescriptorSetInfo);
#define VKCmdPushDescriptorSet2KHR decontext->vkCmdPushDescriptorSet2KHR
// VKAPI_ATTR void VKAPI_CALL vkCmdPushDescriptorSetWithTemplate2KHR(
// VkCommandBuffer commandBuffer, const VkPushDescriptorSetWithTemplateInfoKHR*
// pPushDescriptorSetWithTemplateInfo);
#define VKCmdPushDescriptorSetWithTemplate2KHR                                 \
  decontext->vkCmdPushDescriptorSetWithTemplate2KHR
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDescriptorBufferOffsets2EXT(
// VkCommandBuffer commandBuffer, const VkSetDescriptorBufferOffsetsInfoEXT*
// pSetDescriptorBufferOffsetsInfo);
#define VKCmdSetDescriptorBufferOffsets2EXT                                    \
  decontext->vkCmdSetDescriptorBufferOffsets2EXT
// VKAPI_ATTR void VKAPI_CALL vkCmdBindDescriptorBufferEmbeddedSamplers2EXT(
// VkCommandBuffer commandBuffer, const
// VkBindDescriptorBufferEmbeddedSamplersInfoEXT*
// pBindDescriptorBufferEmbeddedSamplersInfo);
#define VKCmdBindDescriptorBufferEmbeddedSamplers2EXT                          \
  decontext->vkCmdBindDescriptorBufferEmbeddedSamplers2EXT
// VKAPI_ATTR VkResult VKAPI_CALL vkDebugMarkerSetObjectTagEXT( VkDevice device,
// const VkDebugMarkerObjectTagInfoEXT* pTagInfo);
#define VKDebugMarkerSetObjectTagEXT decontext->vkDebugMarkerSetObjectTagEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkDebugMarkerSetObjectNameEXT( VkDevice
// device, const VkDebugMarkerObjectNameInfoEXT* pNameInfo);
#define VKDebugMarkerSetObjectNameEXT decontext->vkDebugMarkerSetObjectNameEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdDebugMarkerBeginEXT( VkCommandBuffer
// commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo);
#define VKCmdDebugMarkerBeginEXT decontext->vkCmdDebugMarkerBeginEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdDebugMarkerEndEXT( VkCommandBuffer
// commandBuffer);
#define VKCmdDebugMarkerEndEXT decontext->vkCmdDebugMarkerEndEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdDebugMarkerInsertEXT( VkCommandBuffer
// commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo);
#define VKCmdDebugMarkerInsertEXT decontext->vkCmdDebugMarkerInsertEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdBindTransformFeedbackBuffersEXT(
// VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount,
// const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize*
// pSizes);
#define VKCmdBindTransformFeedbackBuffersEXT                                   \
  decontext->vkCmdBindTransformFeedbackBuffersEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdBeginTransformFeedbackEXT( VkCommandBuffer
// commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount,
// const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets);
#define VKCmdBeginTransformFeedbackEXT decontext->vkCmdBeginTransformFeedbackEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdEndTransformFeedbackEXT( VkCommandBuffer
// commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount,
// const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets);
#define VKCmdEndTransformFeedbackEXT decontext->vkCmdEndTransformFeedbackEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdBeginQueryIndexedEXT( VkCommandBuffer
// commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags
// flags, uint32_t index);
#define VKCmdBeginQueryIndexedEXT decontext->vkCmdBeginQueryIndexedEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdEndQueryIndexedEXT( VkCommandBuffer
// commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index);
#define VKCmdEndQueryIndexedEXT decontext->vkCmdEndQueryIndexedEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirectByteCountEXT( VkCommandBuffer
// commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer
// counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset,
// uint32_t vertexStride);
#define VKCmdDrawIndirectByteCountEXT decontext->vkCmdDrawIndirectByteCountEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateCuModuleNVX( VkDevice device, const
// VkCuModuleCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkCuModuleNVX* pModule);
#define VKCreateCuModuleNVX decontext->vkCreateCuModuleNVX
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateCuFunctionNVX( VkDevice device, const
// VkCuFunctionCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkCuFunctionNVX* pFunction);
#define VKCreateCuFunctionNVX decontext->vkCreateCuFunctionNVX
// VKAPI_ATTR void VKAPI_CALL vkDestroyCuModuleNVX( VkDevice device,
// VkCuModuleNVX module, const VkAllocationCallbacks* pAllocator);
#define VKDestroyCuModuleNVX decontext->vkDestroyCuModuleNVX
// VKAPI_ATTR void VKAPI_CALL vkDestroyCuFunctionNVX( VkDevice device,
// VkCuFunctionNVX function, const VkAllocationCallbacks* pAllocator);
#define VKDestroyCuFunctionNVX decontext->vkDestroyCuFunctionNVX
// VKAPI_ATTR void VKAPI_CALL vkCmdCuLaunchKernelNVX( VkCommandBuffer
// commandBuffer, const VkCuLaunchInfoNVX* pLaunchInfo);
#define VKCmdCuLaunchKernelNVX decontext->vkCmdCuLaunchKernelNVX
// VKAPI_ATTR uint32_t VKAPI_CALL vkGetImageViewHandleNVX( VkDevice device,
// const VkImageViewHandleInfoNVX* pInfo);
#define VKGetImageViewHandleNVX decontext->vkGetImageViewHandleNVX
// VKAPI_ATTR VkResult VKAPI_CALL vkGetImageViewAddressNVX( VkDevice device,
// VkImageView imageView, VkImageViewAddressPropertiesNVX* pProperties);
#define VKGetImageViewAddressNVX decontext->vkGetImageViewAddressNVX
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirectCountAMD( VkCommandBuffer
// commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
// VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
#define VKCmdDrawIndirectCountAMD decontext->vkCmdDrawIndirectCountAMD
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirectCountAMD( VkCommandBuffer
// commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
// VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
#define VKCmdDrawIndexedIndirectCountAMD                                       \
  decontext->vkCmdDrawIndexedIndirectCountAMD
// VKAPI_ATTR VkResult VKAPI_CALL vkGetShaderInfoAMD( VkDevice device,
// VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD
// infoType, size_t* pInfoSize, void* pInfo);
#define VKGetShaderInfoAMD decontext->vkGetShaderInfoAMD
// VKAPI_ATTR void VKAPI_CALL vkCmdBeginConditionalRenderingEXT( VkCommandBuffer
// commandBuffer, const VkConditionalRenderingBeginInfoEXT*
// pConditionalRenderingBegin);
#define VKCmdBeginConditionalRenderingEXT                                      \
  decontext->vkCmdBeginConditionalRenderingEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdEndConditionalRenderingEXT( VkCommandBuffer
// commandBuffer);
#define VKCmdEndConditionalRenderingEXT                                        \
  decontext->vkCmdEndConditionalRenderingEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportWScalingNV( VkCommandBuffer
// commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const
// VkViewportWScalingNV* pViewportWScalings);
#define VKCmdSetViewportWScalingNV decontext->vkCmdSetViewportWScalingNV
// VKAPI_ATTR VkResult VKAPI_CALL vkDisplayPowerControlEXT( VkDevice device,
// VkDisplayKHR display, const VkDisplayPowerInfoEXT* pDisplayPowerInfo);
#define VKDisplayPowerControlEXT decontext->vkDisplayPowerControlEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkRegisterDeviceEventEXT( VkDevice device,
// const VkDeviceEventInfoEXT* pDeviceEventInfo, const VkAllocationCallbacks*
// pAllocator, VkFence* pFence);
#define VKRegisterDeviceEventEXT decontext->vkRegisterDeviceEventEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkRegisterDisplayEventEXT( VkDevice device,
// VkDisplayKHR display, const VkDisplayEventInfoEXT* pDisplayEventInfo, const
// VkAllocationCallbacks* pAllocator, VkFence* pFence);
#define VKRegisterDisplayEventEXT decontext->vkRegisterDisplayEventEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkGetSwapchainCounterEXT( VkDevice device,
// VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t*
// pCounterValue);
#define VKGetSwapchainCounterEXT decontext->vkGetSwapchainCounterEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkGetRefreshCycleDurationGOOGLE( VkDevice
// device, VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE*
// pDisplayTimingProperties);
#define VKGetRefreshCycleDurationGOOGLE                                        \
  decontext->vkGetRefreshCycleDurationGOOGLE
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPastPresentationTimingGOOGLE( VkDevice
// device, VkSwapchainKHR swapchain, uint32_t* pPresentationTimingCount,
// VkPastPresentationTimingGOOGLE* pPresentationTimings);
#define VKGetPastPresentationTimingGOOGLE                                      \
  decontext->vkGetPastPresentationTimingGOOGLE
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDiscardRectangleEXT( VkCommandBuffer
// commandBuffer, uint32_t firstDiscardRectangle, uint32_t
// discardRectangleCount, const VkRect2D* pDiscardRectangles);
#define VKCmdSetDiscardRectangleEXT decontext->vkCmdSetDiscardRectangleEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDiscardRectangleEnableEXT( VkCommandBuffer
// commandBuffer, VkBool32 discardRectangleEnable);
#define VKCmdSetDiscardRectangleEnableEXT                                      \
  decontext->vkCmdSetDiscardRectangleEnableEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDiscardRectangleModeEXT( VkCommandBuffer
// commandBuffer, VkDiscardRectangleModeEXT discardRectangleMode);
#define VKCmdSetDiscardRectangleModeEXT                                        \
  decontext->vkCmdSetDiscardRectangleModeEXT
// VKAPI_ATTR void VKAPI_CALL vkSetHdrMetadataEXT( VkDevice device, uint32_t
// swapchainCount, const VkSwapchainKHR* pSwapchains, const VkHdrMetadataEXT*
// pMetadata);
#define VKSetHdrMetadataEXT decontext->vkSetHdrMetadataEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkSetDebugUtilsObjectNameEXT( VkDevice device,
// const VkDebugUtilsObjectNameInfoEXT* pNameInfo);
#define VKSetDebugUtilsObjectNameEXT decontext->vkSetDebugUtilsObjectNameEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkSetDebugUtilsObjectTagEXT( VkDevice device,
// const VkDebugUtilsObjectTagInfoEXT* pTagInfo);
#define VKSetDebugUtilsObjectTagEXT decontext->vkSetDebugUtilsObjectTagEXT
// VKAPI_ATTR void VKAPI_CALL vkQueueBeginDebugUtilsLabelEXT( VkQueue queue,
// const VkDebugUtilsLabelEXT* pLabelInfo);
#define VKQueueBeginDebugUtilsLabelEXT decontext->vkQueueBeginDebugUtilsLabelEXT
// VKAPI_ATTR void VKAPI_CALL vkQueueEndDebugUtilsLabelEXT( VkQueue queue);
#define VKQueueEndDebugUtilsLabelEXT decontext->vkQueueEndDebugUtilsLabelEXT
// VKAPI_ATTR void VKAPI_CALL vkQueueInsertDebugUtilsLabelEXT( VkQueue queue,
// const VkDebugUtilsLabelEXT* pLabelInfo);
#define VKQueueInsertDebugUtilsLabelEXT                                        \
  decontext->vkQueueInsertDebugUtilsLabelEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdBeginDebugUtilsLabelEXT( VkCommandBuffer
// commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo);
#define VKCmdBeginDebugUtilsLabelEXT decontext->vkCmdBeginDebugUtilsLabelEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdEndDebugUtilsLabelEXT( VkCommandBuffer
// commandBuffer);
#define VKCmdEndDebugUtilsLabelEXT decontext->vkCmdEndDebugUtilsLabelEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdInsertDebugUtilsLabelEXT( VkCommandBuffer
// commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo);
#define VKCmdInsertDebugUtilsLabelEXT decontext->vkCmdInsertDebugUtilsLabelEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetSampleLocationsEXT( VkCommandBuffer
// commandBuffer, const VkSampleLocationsInfoEXT* pSampleLocationsInfo);
#define VKCmdSetSampleLocationsEXT decontext->vkCmdSetSampleLocationsEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkGetImageDrmFormatModifierPropertiesEXT(
// VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT*
// pProperties);
#define VKGetImageDrmFormatModifierPropertiesEXT                               \
  decontext->vkGetImageDrmFormatModifierPropertiesEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateValidationCacheEXT( VkDevice device,
// const VkValidationCacheCreateInfoEXT* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkValidationCacheEXT* pValidationCache);
#define VKCreateValidationCacheEXT decontext->vkCreateValidationCacheEXT
// VKAPI_ATTR void VKAPI_CALL vkDestroyValidationCacheEXT( VkDevice device,
// VkValidationCacheEXT validationCache, const VkAllocationCallbacks*
// pAllocator);
#define VKDestroyValidationCacheEXT decontext->vkDestroyValidationCacheEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkMergeValidationCachesEXT( VkDevice device,
// VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const
// VkValidationCacheEXT* pSrcCaches);
#define VKMergeValidationCachesEXT decontext->vkMergeValidationCachesEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkGetValidationCacheDataEXT( VkDevice device,
// VkValidationCacheEXT validationCache, size_t* pDataSize, void* pData);
#define VKGetValidationCacheDataEXT decontext->vkGetValidationCacheDataEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdBindShadingRateImageNV( VkCommandBuffer
// commandBuffer, VkImageView imageView, VkImageLayout imageLayout);
#define VKCmdBindShadingRateImageNV decontext->vkCmdBindShadingRateImageNV
// VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportShadingRatePaletteNV(
// VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t
// viewportCount, const VkShadingRatePaletteNV* pShadingRatePalettes);
#define VKCmdSetViewportShadingRatePaletteNV                                   \
  decontext->vkCmdSetViewportShadingRatePaletteNV
// VKAPI_ATTR void VKAPI_CALL vkCmdSetCoarseSampleOrderNV( VkCommandBuffer
// commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t
// customSampleOrderCount, const VkCoarseSampleOrderCustomNV*
// pCustomSampleOrders);
#define VKCmdSetCoarseSampleOrderNV decontext->vkCmdSetCoarseSampleOrderNV
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateAccelerationStructureNV( VkDevice
// device, const VkAccelerationStructureCreateInfoNV* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkAccelerationStructureNV*
// pAccelerationStructure);
#define VKCreateAccelerationStructureNV                                        \
  decontext->vkCreateAccelerationStructureNV
// VKAPI_ATTR void VKAPI_CALL vkDestroyAccelerationStructureNV( VkDevice device,
// VkAccelerationStructureNV accelerationStructure, const VkAllocationCallbacks*
// pAllocator);
#define VKDestroyAccelerationStructureNV                                       \
  decontext->vkDestroyAccelerationStructureNV
// VKAPI_ATTR void VKAPI_CALL vkGetAccelerationStructureMemoryRequirementsNV(
// VkDevice device, const VkAccelerationStructureMemoryRequirementsInfoNV*
// pInfo, VkMemoryRequirements2KHR* pMemoryRequirements);
#define VKGetAccelerationStructureMemoryRequirementsNV                         \
  decontext->vkGetAccelerationStructureMemoryRequirementsNV
// VKAPI_ATTR VkResult VKAPI_CALL vkBindAccelerationStructureMemoryNV( VkDevice
// device, uint32_t bindInfoCount, const
// VkBindAccelerationStructureMemoryInfoNV* pBindInfos);
#define VKBindAccelerationStructureMemoryNV                                    \
  decontext->vkBindAccelerationStructureMemoryNV
// VKAPI_ATTR void VKAPI_CALL vkCmdBuildAccelerationStructureNV( VkCommandBuffer
// commandBuffer, const VkAccelerationStructureInfoNV* pInfo, VkBuffer
// instanceData, VkDeviceSize instanceOffset, VkBool32 update,
// VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer
// scratch, VkDeviceSize scratchOffset);
#define VKCmdBuildAccelerationStructureNV                                      \
  decontext->vkCmdBuildAccelerationStructureNV
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyAccelerationStructureNV( VkCommandBuffer
// commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src,
// VkCopyAccelerationStructureModeKHR mode);
#define VKCmdCopyAccelerationStructureNV                                       \
  decontext->vkCmdCopyAccelerationStructureNV
// VKAPI_ATTR void VKAPI_CALL vkCmdTraceRaysNV( VkCommandBuffer commandBuffer,
// VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize
// raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer,
// VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride,
// VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset,
// VkDeviceSize hitShaderBindingStride, VkBuffer
// callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset,
// VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height,
// uint32_t depth);
#define VKCmdTraceRaysNV decontext->vkCmdTraceRaysNV
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateRayTracingPipelinesNV( VkDevice
// device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const
// VkRayTracingPipelineCreateInfoNV* pCreateInfos, const VkAllocationCallbacks*
// pAllocator, VkPipeline* pPipelines);
#define VKCreateRayTracingPipelinesNV decontext->vkCreateRayTracingPipelinesNV
// VKAPI_ATTR VkResult VKAPI_CALL vkGetRayTracingShaderGroupHandlesKHR( VkDevice
// device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t
// dataSize, void* pData);
#define VKGetRayTracingShaderGroupHandlesKHR                                   \
  decontext->vkGetRayTracingShaderGroupHandlesKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetRayTracingShaderGroupHandlesNV( VkDevice
// device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t
// dataSize, void* pData);
#define VKGetRayTracingShaderGroupHandlesNV                                    \
  decontext->vkGetRayTracingShaderGroupHandlesNV
// VKAPI_ATTR VkResult VKAPI_CALL vkGetAccelerationStructureHandleNV( VkDevice
// device, VkAccelerationStructureNV accelerationStructure, size_t dataSize,
// void* pData);
#define VKGetAccelerationStructureHandleNV                                     \
  decontext->vkGetAccelerationStructureHandleNV
// VKAPI_ATTR void VKAPI_CALL vkCmdWriteAccelerationStructuresPropertiesNV(
// VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const
// VkAccelerationStructureNV* pAccelerationStructures, VkQueryType queryType,
// VkQueryPool queryPool, uint32_t firstQuery);
#define VKCmdWriteAccelerationStructuresPropertiesNV                           \
  decontext->vkCmdWriteAccelerationStructuresPropertiesNV
// VKAPI_ATTR VkResult VKAPI_CALL vkCompileDeferredNV( VkDevice device,
// VkPipeline pipeline, uint32_t shader);
#define VKCompileDeferredNV decontext->vkCompileDeferredNV
// VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryHostPointerPropertiesEXT( VkDevice
// device, VkExternalMemoryHandleTypeFlagBits handleType, const void*
// pHostPointer, VkMemoryHostPointerPropertiesEXT*
// pMemoryHostPointerProperties);
#define VKGetMemoryHostPointerPropertiesEXT                                    \
  decontext->vkGetMemoryHostPointerPropertiesEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdWriteBufferMarkerAMD( VkCommandBuffer
// commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer,
// VkDeviceSize dstOffset, uint32_t marker);
#define VKCmdWriteBufferMarkerAMD decontext->vkCmdWriteBufferMarkerAMD
// VKAPI_ATTR VkResult VKAPI_CALL vkGetCalibratedTimestampsEXT( VkDevice device,
// uint32_t timestampCount, const VkCalibratedTimestampInfoKHR* pTimestampInfos,
// uint64_t* pTimestamps, uint64_t* pMaxDeviation);
#define VKGetCalibratedTimestampsEXT decontext->vkGetCalibratedTimestampsEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksNV( VkCommandBuffer
// commandBuffer, uint32_t taskCount, uint32_t firstTask);
#define VKCmdDrawMeshTasksNV decontext->vkCmdDrawMeshTasksNV
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksIndirectNV( VkCommandBuffer
// commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount,
// uint32_t stride);
#define VKCmdDrawMeshTasksIndirectNV decontext->vkCmdDrawMeshTasksIndirectNV
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksIndirectCountNV( VkCommandBuffer
// commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
// VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
#define VKCmdDrawMeshTasksIndirectCountNV                                      \
  decontext->vkCmdDrawMeshTasksIndirectCountNV
// VKAPI_ATTR void VKAPI_CALL vkCmdSetExclusiveScissorEnableNV( VkCommandBuffer
// commandBuffer, uint32_t firstExclusiveScissor, uint32_t
// exclusiveScissorCount, const VkBool32* pExclusiveScissorEnables);
#define VKCmdSetExclusiveScissorEnableNV                                       \
  decontext->vkCmdSetExclusiveScissorEnableNV
// VKAPI_ATTR void VKAPI_CALL vkCmdSetExclusiveScissorNV( VkCommandBuffer
// commandBuffer, uint32_t firstExclusiveScissor, uint32_t
// exclusiveScissorCount, const VkRect2D* pExclusiveScissors);
#define VKCmdSetExclusiveScissorNV decontext->vkCmdSetExclusiveScissorNV
// VKAPI_ATTR void VKAPI_CALL vkCmdSetCheckpointNV( VkCommandBuffer
// commandBuffer, const void* pCheckpointMarker);
#define VKCmdSetCheckpointNV decontext->vkCmdSetCheckpointNV
// VKAPI_ATTR void VKAPI_CALL vkGetQueueCheckpointDataNV( VkQueue queue,
// uint32_t* pCheckpointDataCount, VkCheckpointDataNV* pCheckpointData);
#define VKGetQueueCheckpointDataNV decontext->vkGetQueueCheckpointDataNV
// VKAPI_ATTR VkResult VKAPI_CALL vkInitializePerformanceApiINTEL( VkDevice
// device, const VkInitializePerformanceApiInfoINTEL* pInitializeInfo);
#define VKInitializePerformanceApiINTEL                                        \
  decontext->vkInitializePerformanceApiINTEL
// VKAPI_ATTR void VKAPI_CALL vkUninitializePerformanceApiINTEL( VkDevice
// device);
#define VKUninitializePerformanceApiINTEL                                      \
  decontext->vkUninitializePerformanceApiINTEL
// VKAPI_ATTR VkResult VKAPI_CALL vkCmdSetPerformanceMarkerINTEL(
// VkCommandBuffer commandBuffer, const VkPerformanceMarkerInfoINTEL*
// pMarkerInfo);
#define VKCmdSetPerformanceMarkerINTEL decontext->vkCmdSetPerformanceMarkerINTEL
// VKAPI_ATTR VkResult VKAPI_CALL vkCmdSetPerformanceStreamMarkerINTEL(
// VkCommandBuffer commandBuffer, const VkPerformanceStreamMarkerInfoINTEL*
// pMarkerInfo);
#define VKCmdSetPerformanceStreamMarkerINTEL                                   \
  decontext->vkCmdSetPerformanceStreamMarkerINTEL
// VKAPI_ATTR VkResult VKAPI_CALL vkCmdSetPerformanceOverrideINTEL(
// VkCommandBuffer commandBuffer, const VkPerformanceOverrideInfoINTEL*
// pOverrideInfo);
#define VKCmdSetPerformanceOverrideINTEL                                       \
  decontext->vkCmdSetPerformanceOverrideINTEL
// VKAPI_ATTR VkResult VKAPI_CALL vkAcquirePerformanceConfigurationINTEL(
// VkDevice device, const VkPerformanceConfigurationAcquireInfoINTEL*
// pAcquireInfo, VkPerformanceConfigurationINTEL* pConfiguration);
#define VKAcquirePerformanceConfigurationINTEL                                 \
  decontext->vkAcquirePerformanceConfigurationINTEL
// VKAPI_ATTR VkResult VKAPI_CALL vkReleasePerformanceConfigurationINTEL(
// VkDevice device, VkPerformanceConfigurationINTEL configuration);
#define VKReleasePerformanceConfigurationINTEL                                 \
  decontext->vkReleasePerformanceConfigurationINTEL
// VKAPI_ATTR VkResult VKAPI_CALL vkQueueSetPerformanceConfigurationINTEL(
// VkQueue queue, VkPerformanceConfigurationINTEL configuration);
#define VKQueueSetPerformanceConfigurationINTEL                                \
  decontext->vkQueueSetPerformanceConfigurationINTEL
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPerformanceParameterINTEL( VkDevice
// device, VkPerformanceParameterTypeINTEL parameter, VkPerformanceValueINTEL*
// pValue);
#define VKGetPerformanceParameterINTEL decontext->vkGetPerformanceParameterINTEL
// VKAPI_ATTR void VKAPI_CALL vkSetLocalDimmingAMD( VkDevice device,
// VkSwapchainKHR swapChain, VkBool32 localDimmingEnable);
#define VKSetLocalDimmingAMD decontext->vkSetLocalDimmingAMD
// VKAPI_ATTR VkDeviceAddress VKAPI_CALL vkGetBufferDeviceAddressEXT( VkDevice
// device, const VkBufferDeviceAddressInfo* pInfo);
#define VKGetBufferDeviceAddressEXT decontext->vkGetBufferDeviceAddressEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetLineStippleEXT( VkCommandBuffer
// commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern);
#define VKCmdSetLineStippleEXT decontext->vkCmdSetLineStippleEXT
// VKAPI_ATTR void VKAPI_CALL vkResetQueryPoolEXT( VkDevice device, VkQueryPool
// queryPool, uint32_t firstQuery, uint32_t queryCount);
#define VKResetQueryPoolEXT decontext->vkResetQueryPoolEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetCullModeEXT( VkCommandBuffer
// commandBuffer, VkCullModeFlags cullMode);
#define VKCmdSetCullModeEXT decontext->vkCmdSetCullModeEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetFrontFaceEXT( VkCommandBuffer
// commandBuffer, VkFrontFace frontFace);
#define VKCmdSetFrontFaceEXT decontext->vkCmdSetFrontFaceEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetPrimitiveTopologyEXT( VkCommandBuffer
// commandBuffer, VkPrimitiveTopology primitiveTopology);
#define VKCmdSetPrimitiveTopologyEXT decontext->vkCmdSetPrimitiveTopologyEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportWithCountEXT( VkCommandBuffer
// commandBuffer, uint32_t viewportCount, const VkViewport* pViewports);
#define VKCmdSetViewportWithCountEXT decontext->vkCmdSetViewportWithCountEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetScissorWithCountEXT( VkCommandBuffer
// commandBuffer, uint32_t scissorCount, const VkRect2D* pScissors);
#define VKCmdSetScissorWithCountEXT decontext->vkCmdSetScissorWithCountEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdBindVertexBuffers2EXT( VkCommandBuffer
// commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer*
// pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes, const
// VkDeviceSize* pStrides);
#define VKCmdBindVertexBuffers2EXT decontext->vkCmdBindVertexBuffers2EXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthTestEnableEXT( VkCommandBuffer
// commandBuffer, VkBool32 depthTestEnable);
#define VKCmdSetDepthTestEnableEXT decontext->vkCmdSetDepthTestEnableEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthWriteEnableEXT( VkCommandBuffer
// commandBuffer, VkBool32 depthWriteEnable);
#define VKCmdSetDepthWriteEnableEXT decontext->vkCmdSetDepthWriteEnableEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthCompareOpEXT( VkCommandBuffer
// commandBuffer, VkCompareOp depthCompareOp);
#define VKCmdSetDepthCompareOpEXT decontext->vkCmdSetDepthCompareOpEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBoundsTestEnableEXT( VkCommandBuffer
// commandBuffer, VkBool32 depthBoundsTestEnable);
#define VKCmdSetDepthBoundsTestEnableEXT                                       \
  decontext->vkCmdSetDepthBoundsTestEnableEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilTestEnableEXT( VkCommandBuffer
// commandBuffer, VkBool32 stencilTestEnable);
#define VKCmdSetStencilTestEnableEXT decontext->vkCmdSetStencilTestEnableEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilOpEXT( VkCommandBuffer
// commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp
// passOp, VkStencilOp depthFailOp, VkCompareOp compareOp);
#define VKCmdSetStencilOpEXT decontext->vkCmdSetStencilOpEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkCopyMemoryToImageEXT( VkDevice device, const
// VkCopyMemoryToImageInfoEXT* pCopyMemoryToImageInfo);
#define VKCopyMemoryToImageEXT decontext->vkCopyMemoryToImageEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkCopyImageToMemoryEXT( VkDevice device, const
// VkCopyImageToMemoryInfoEXT* pCopyImageToMemoryInfo);
#define VKCopyImageToMemoryEXT decontext->vkCopyImageToMemoryEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkCopyImageToImageEXT( VkDevice device, const
// VkCopyImageToImageInfoEXT* pCopyImageToImageInfo);
#define VKCopyImageToImageEXT decontext->vkCopyImageToImageEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkTransitionImageLayoutEXT( VkDevice device,
// uint32_t transitionCount, const VkHostImageLayoutTransitionInfoEXT*
// pTransitions);
#define VKTransitionImageLayoutEXT decontext->vkTransitionImageLayoutEXT
// VKAPI_ATTR void VKAPI_CALL vkGetImageSubresourceLayout2EXT( VkDevice device,
// VkImage image, const VkImageSubresource2KHR* pSubresource,
// VkSubresourceLayout2KHR* pLayout);
#define VKGetImageSubresourceLayout2EXT                                        \
  decontext->vkGetImageSubresourceLayout2EXT
// VKAPI_ATTR VkResult VKAPI_CALL vkReleaseSwapchainImagesEXT( VkDevice device,
// const VkReleaseSwapchainImagesInfoEXT* pReleaseInfo);
#define VKReleaseSwapchainImagesEXT decontext->vkReleaseSwapchainImagesEXT
// VKAPI_ATTR void VKAPI_CALL vkGetGeneratedCommandsMemoryRequirementsNV(
// VkDevice device, const VkGeneratedCommandsMemoryRequirementsInfoNV* pInfo,
// VkMemoryRequirements2* pMemoryRequirements);
#define VKGetGeneratedCommandsMemoryRequirementsNV                             \
  decontext->vkGetGeneratedCommandsMemoryRequirementsNV
// VKAPI_ATTR void VKAPI_CALL vkCmdPreprocessGeneratedCommandsNV(
// VkCommandBuffer commandBuffer, const VkGeneratedCommandsInfoNV*
// pGeneratedCommandsInfo);
#define VKCmdPreprocessGeneratedCommandsNV                                     \
  decontext->vkCmdPreprocessGeneratedCommandsNV
// VKAPI_ATTR void VKAPI_CALL vkCmdExecuteGeneratedCommandsNV( VkCommandBuffer
// commandBuffer, VkBool32 isPreprocessed, const VkGeneratedCommandsInfoNV*
// pGeneratedCommandsInfo);
#define VKCmdExecuteGeneratedCommandsNV                                        \
  decontext->vkCmdExecuteGeneratedCommandsNV
// VKAPI_ATTR void VKAPI_CALL vkCmdBindPipelineShaderGroupNV( VkCommandBuffer
// commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline,
// uint32_t groupIndex);
#define VKCmdBindPipelineShaderGroupNV decontext->vkCmdBindPipelineShaderGroupNV
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateIndirectCommandsLayoutNV( VkDevice
// device, const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkIndirectCommandsLayoutNV*
// pIndirectCommandsLayout);
#define VKCreateIndirectCommandsLayoutNV                                       \
  decontext->vkCreateIndirectCommandsLayoutNV
// VKAPI_ATTR void VKAPI_CALL vkDestroyIndirectCommandsLayoutNV( VkDevice
// device, VkIndirectCommandsLayoutNV indirectCommandsLayout, const
// VkAllocationCallbacks* pAllocator);
#define VKDestroyIndirectCommandsLayoutNV                                      \
  decontext->vkDestroyIndirectCommandsLayoutNV
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBias2EXT( VkCommandBuffer
// commandBuffer, const VkDepthBiasInfoEXT* pDepthBiasInfo);
#define VKCmdSetDepthBias2EXT decontext->vkCmdSetDepthBias2EXT
// VKAPI_ATTR VkResult VKAPI_CALL vkCreatePrivateDataSlotEXT( VkDevice device,
// const VkPrivateDataSlotCreateInfo* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkPrivateDataSlot* pPrivateDataSlot);
#define VKCreatePrivateDataSlotEXT decontext->vkCreatePrivateDataSlotEXT
// VKAPI_ATTR void VKAPI_CALL vkDestroyPrivateDataSlotEXT( VkDevice device,
// VkPrivateDataSlot privateDataSlot, const VkAllocationCallbacks* pAllocator);
#define VKDestroyPrivateDataSlotEXT decontext->vkDestroyPrivateDataSlotEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkSetPrivateDataEXT( VkDevice device,
// VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot
// privateDataSlot, uint64_t data);
#define VKSetPrivateDataEXT decontext->vkSetPrivateDataEXT
// VKAPI_ATTR void VKAPI_CALL vkGetPrivateDataEXT( VkDevice device, VkObjectType
// objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot,
// uint64_t* pData);
#define VKGetPrivateDataEXT decontext->vkGetPrivateDataEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateCudaModuleNV( VkDevice device, const
// VkCudaModuleCreateInfoNV* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkCudaModuleNV* pModule);
#define VKCreateCudaModuleNV decontext->vkCreateCudaModuleNV
// VKAPI_ATTR VkResult VKAPI_CALL vkGetCudaModuleCacheNV( VkDevice device,
// VkCudaModuleNV module, size_t* pCacheSize, void* pCacheData);
#define VKGetCudaModuleCacheNV decontext->vkGetCudaModuleCacheNV
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateCudaFunctionNV( VkDevice device, const
// VkCudaFunctionCreateInfoNV* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkCudaFunctionNV* pFunction);
#define VKCreateCudaFunctionNV decontext->vkCreateCudaFunctionNV
// VKAPI_ATTR void VKAPI_CALL vkDestroyCudaModuleNV( VkDevice device,
// VkCudaModuleNV module, const VkAllocationCallbacks* pAllocator);
#define VKDestroyCudaModuleNV decontext->vkDestroyCudaModuleNV
// VKAPI_ATTR void VKAPI_CALL vkDestroyCudaFunctionNV( VkDevice device,
// VkCudaFunctionNV function, const VkAllocationCallbacks* pAllocator);
#define VKDestroyCudaFunctionNV decontext->vkDestroyCudaFunctionNV
// VKAPI_ATTR void VKAPI_CALL vkCmdCudaLaunchKernelNV( VkCommandBuffer
// commandBuffer, const VkCudaLaunchInfoNV* pLaunchInfo);
#define VKCmdCudaLaunchKernelNV decontext->vkCmdCudaLaunchKernelNV
// VKAPI_ATTR void VKAPI_CALL vkGetDescriptorSetLayoutSizeEXT( VkDevice device,
// VkDescriptorSetLayout layout, VkDeviceSize* pLayoutSizeInBytes);
#define VKGetDescriptorSetLayoutSizeEXT                                        \
  decontext->vkGetDescriptorSetLayoutSizeEXT
// VKAPI_ATTR void VKAPI_CALL vkGetDescriptorSetLayoutBindingOffsetEXT( VkDevice
// device, VkDescriptorSetLayout layout, uint32_t binding, VkDeviceSize*
// pOffset);
#define VKGetDescriptorSetLayoutBindingOffsetEXT                               \
  decontext->vkGetDescriptorSetLayoutBindingOffsetEXT
// VKAPI_ATTR void VKAPI_CALL vkGetDescriptorEXT( VkDevice device, const
// VkDescriptorGetInfoEXT* pDescriptorInfo, size_t dataSize, void* pDescriptor);
#define VKGetDescriptorEXT decontext->vkGetDescriptorEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdBindDescriptorBuffersEXT( VkCommandBuffer
// commandBuffer, uint32_t bufferCount, const VkDescriptorBufferBindingInfoEXT*
// pBindingInfos);
#define VKCmdBindDescriptorBuffersEXT decontext->vkCmdBindDescriptorBuffersEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDescriptorBufferOffsetsEXT(
// VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint,
// VkPipelineLayout layout, uint32_t firstSet, uint32_t setCount, const
// uint32_t* pBufferIndices, const VkDeviceSize* pOffsets);
#define VKCmdSetDescriptorBufferOffsetsEXT                                     \
  decontext->vkCmdSetDescriptorBufferOffsetsEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdBindDescriptorBufferEmbeddedSamplersEXT(
// VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint,
// VkPipelineLayout layout, uint32_t set);
#define VKCmdBindDescriptorBufferEmbeddedSamplersEXT                           \
  decontext->vkCmdBindDescriptorBufferEmbeddedSamplersEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkGetBufferOpaqueCaptureDescriptorDataEXT(
// VkDevice device, const VkBufferCaptureDescriptorDataInfoEXT* pInfo, void*
// pData);
#define VKGetBufferOpaqueCaptureDescriptorDataEXT                              \
  decontext->vkGetBufferOpaqueCaptureDescriptorDataEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkGetImageOpaqueCaptureDescriptorDataEXT(
// VkDevice device, const VkImageCaptureDescriptorDataInfoEXT* pInfo, void*
// pData);
#define VKGetImageOpaqueCaptureDescriptorDataEXT                               \
  decontext->vkGetImageOpaqueCaptureDescriptorDataEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkGetImageViewOpaqueCaptureDescriptorDataEXT(
// VkDevice device, const VkImageViewCaptureDescriptorDataInfoEXT* pInfo, void*
// pData);
#define VKGetImageViewOpaqueCaptureDescriptorDataEXT                           \
  decontext->vkGetImageViewOpaqueCaptureDescriptorDataEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkGetSamplerOpaqueCaptureDescriptorDataEXT(
// VkDevice device, const VkSamplerCaptureDescriptorDataInfoEXT* pInfo, void*
// pData);
#define VKGetSamplerOpaqueCaptureDescriptorDataEXT                             \
  decontext->vkGetSamplerOpaqueCaptureDescriptorDataEXT
// VKAPI_ATTR VkResult VKAPI_CALL
// vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT( VkDevice device,
// const VkAccelerationStructureCaptureDescriptorDataInfoEXT* pInfo, void*
// pData);
#define VKGetAccelerationStructureOpaqueCaptureDescriptorDataEXT               \
  decontext->vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetFragmentShadingRateEnumNV( VkCommandBuffer
// commandBuffer, VkFragmentShadingRateNV shadingRate, const
// VkFragmentShadingRateCombinerOpKHR combinerOps[2]);
#define VKCmdSetFragmentShadingRateEnumNV                                      \
  decontext->vkCmdSetFragmentShadingRateEnumNV
// VKAPI_ATTR VkResult VKAPI_CALL vkGetDeviceFaultInfoEXT( VkDevice device,
// VkDeviceFaultCountsEXT* pFaultCounts, VkDeviceFaultInfoEXT* pFaultInfo);
#define VKGetDeviceFaultInfoEXT decontext->vkGetDeviceFaultInfoEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetVertexInputEXT( VkCommandBuffer
// commandBuffer, uint32_t vertexBindingDescriptionCount, const
// VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions, uint32_t
// vertexAttributeDescriptionCount, const VkVertexInputAttributeDescription2EXT*
// pVertexAttributeDescriptions);
#define VKCmdSetVertexInputEXT decontext->vkCmdSetVertexInputEXT
// VKAPI_ATTR VkResult VKAPI_CALL
// vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI( VkDevice device,
// VkRenderPass renderpass, VkExtent2D* pMaxWorkgroupSize);
#define VKGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI                        \
  decontext->vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI
// VKAPI_ATTR void VKAPI_CALL vkCmdSubpassShadingHUAWEI( VkCommandBuffer
// commandBuffer);
#define VKCmdSubpassShadingHUAWEI decontext->vkCmdSubpassShadingHUAWEI
// VKAPI_ATTR void VKAPI_CALL vkCmdBindInvocationMaskHUAWEI( VkCommandBuffer
// commandBuffer, VkImageView imageView, VkImageLayout imageLayout);
#define VKCmdBindInvocationMaskHUAWEI decontext->vkCmdBindInvocationMaskHUAWEI
// VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryRemoteAddressNV( VkDevice device,
// const VkMemoryGetRemoteAddressInfoNV* pMemoryGetRemoteAddressInfo,
// VkRemoteAddressNV* pAddress);
#define VKGetMemoryRemoteAddressNV decontext->vkGetMemoryRemoteAddressNV
// VKAPI_ATTR VkResult VKAPI_CALL vkGetPipelinePropertiesEXT( VkDevice device,
// const VkPipelineInfoEXT* pPipelineInfo, VkBaseOutStructure*
// pPipelineProperties);
#define VKGetPipelinePropertiesEXT decontext->vkGetPipelinePropertiesEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetPatchControlPointsEXT( VkCommandBuffer
// commandBuffer, uint32_t patchControlPoints);
#define VKCmdSetPatchControlPointsEXT decontext->vkCmdSetPatchControlPointsEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetRasterizerDiscardEnableEXT(
// VkCommandBuffer commandBuffer, VkBool32 rasterizerDiscardEnable);
#define VKCmdSetRasterizerDiscardEnableEXT                                     \
  decontext->vkCmdSetRasterizerDiscardEnableEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBiasEnableEXT( VkCommandBuffer
// commandBuffer, VkBool32 depthBiasEnable);
#define VKCmdSetDepthBiasEnableEXT decontext->vkCmdSetDepthBiasEnableEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetLogicOpEXT( VkCommandBuffer commandBuffer,
// VkLogicOp logicOp);
#define VKCmdSetLogicOpEXT decontext->vkCmdSetLogicOpEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetPrimitiveRestartEnableEXT( VkCommandBuffer
// commandBuffer, VkBool32 primitiveRestartEnable);
#define VKCmdSetPrimitiveRestartEnableEXT                                      \
  decontext->vkCmdSetPrimitiveRestartEnableEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetColorWriteEnableEXT( VkCommandBuffer
// commandBuffer, uint32_t attachmentCount, const VkBool32* pColorWriteEnables);
#define VKCmdSetColorWriteEnableEXT decontext->vkCmdSetColorWriteEnableEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawMultiEXT( VkCommandBuffer commandBuffer,
// uint32_t drawCount, const VkMultiDrawInfoEXT* pVertexInfo, uint32_t
// instanceCount, uint32_t firstInstance, uint32_t stride);
#define VKCmdDrawMultiEXT decontext->vkCmdDrawMultiEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawMultiIndexedEXT( VkCommandBuffer
// commandBuffer, uint32_t drawCount, const VkMultiDrawIndexedInfoEXT*
// pIndexInfo, uint32_t instanceCount, uint32_t firstInstance, uint32_t stride,
// const int32_t* pVertexOffset);
#define VKCmdDrawMultiIndexedEXT decontext->vkCmdDrawMultiIndexedEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateMicromapEXT( VkDevice device, const
// VkMicromapCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks*
// pAllocator, VkMicromapEXT* pMicromap);
#define VKCreateMicromapEXT decontext->vkCreateMicromapEXT
// VKAPI_ATTR void VKAPI_CALL vkDestroyMicromapEXT( VkDevice device,
// VkMicromapEXT micromap, const VkAllocationCallbacks* pAllocator);
#define VKDestroyMicromapEXT decontext->vkDestroyMicromapEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdBuildMicromapsEXT( VkCommandBuffer
// commandBuffer, uint32_t infoCount, const VkMicromapBuildInfoEXT* pInfos);
#define VKCmdBuildMicromapsEXT decontext->vkCmdBuildMicromapsEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkBuildMicromapsEXT( VkDevice device,
// VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const
// VkMicromapBuildInfoEXT* pInfos);
#define VKBuildMicromapsEXT decontext->vkBuildMicromapsEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkCopyMicromapEXT( VkDevice device,
// VkDeferredOperationKHR deferredOperation, const VkCopyMicromapInfoEXT*
// pInfo);
#define VKCopyMicromapEXT decontext->vkCopyMicromapEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkCopyMicromapToMemoryEXT( VkDevice device,
// VkDeferredOperationKHR deferredOperation, const
// VkCopyMicromapToMemoryInfoEXT* pInfo);
#define VKCopyMicromapToMemoryEXT decontext->vkCopyMicromapToMemoryEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkCopyMemoryToMicromapEXT( VkDevice device,
// VkDeferredOperationKHR deferredOperation, const
// VkCopyMemoryToMicromapInfoEXT* pInfo);
#define VKCopyMemoryToMicromapEXT decontext->vkCopyMemoryToMicromapEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkWriteMicromapsPropertiesEXT( VkDevice
// device, uint32_t micromapCount, const VkMicromapEXT* pMicromaps, VkQueryType
// queryType, size_t dataSize, void* pData, size_t stride);
#define VKWriteMicromapsPropertiesEXT decontext->vkWriteMicromapsPropertiesEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyMicromapEXT( VkCommandBuffer
// commandBuffer, const VkCopyMicromapInfoEXT* pInfo);
#define VKCmdCopyMicromapEXT decontext->vkCmdCopyMicromapEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyMicromapToMemoryEXT( VkCommandBuffer
// commandBuffer, const VkCopyMicromapToMemoryInfoEXT* pInfo);
#define VKCmdCopyMicromapToMemoryEXT decontext->vkCmdCopyMicromapToMemoryEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyMemoryToMicromapEXT( VkCommandBuffer
// commandBuffer, const VkCopyMemoryToMicromapInfoEXT* pInfo);
#define VKCmdCopyMemoryToMicromapEXT decontext->vkCmdCopyMemoryToMicromapEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdWriteMicromapsPropertiesEXT( VkCommandBuffer
// commandBuffer, uint32_t micromapCount, const VkMicromapEXT* pMicromaps,
// VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery);
#define VKCmdWriteMicromapsPropertiesEXT                                       \
  decontext->vkCmdWriteMicromapsPropertiesEXT
// VKAPI_ATTR void VKAPI_CALL vkGetDeviceMicromapCompatibilityEXT( VkDevice
// device, const VkMicromapVersionInfoEXT* pVersionInfo,
// VkAccelerationStructureCompatibilityKHR* pCompatibility);
#define VKGetDeviceMicromapCompatibilityEXT                                    \
  decontext->vkGetDeviceMicromapCompatibilityEXT
// VKAPI_ATTR void VKAPI_CALL vkGetMicromapBuildSizesEXT( VkDevice device,
// VkAccelerationStructureBuildTypeKHR buildType, const VkMicromapBuildInfoEXT*
// pBuildInfo, VkMicromapBuildSizesInfoEXT* pSizeInfo);
#define VKGetMicromapBuildSizesEXT decontext->vkGetMicromapBuildSizesEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawClusterHUAWEI( VkCommandBuffer
// commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t
// groupCountZ);
#define VKCmdDrawClusterHUAWEI decontext->vkCmdDrawClusterHUAWEI
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawClusterIndirectHUAWEI( VkCommandBuffer
// commandBuffer, VkBuffer buffer, VkDeviceSize offset);
#define VKCmdDrawClusterIndirectHUAWEI decontext->vkCmdDrawClusterIndirectHUAWEI
// VKAPI_ATTR void VKAPI_CALL vkSetDeviceMemoryPriorityEXT( VkDevice device,
// VkDeviceMemory memory, float priority);
#define VKSetDeviceMemoryPriorityEXT decontext->vkSetDeviceMemoryPriorityEXT
// VKAPI_ATTR void VKAPI_CALL vkGetDescriptorSetLayoutHostMappingInfoVALVE(
// VkDevice device, const VkDescriptorSetBindingReferenceVALVE*
// pBindingReference, VkDescriptorSetLayoutHostMappingInfoVALVE* pHostMapping);
#define VKGetDescriptorSetLayoutHostMappingInfoVALVE                           \
  decontext->vkGetDescriptorSetLayoutHostMappingInfoVALVE
// VKAPI_ATTR void VKAPI_CALL vkGetDescriptorSetHostMappingVALVE( VkDevice
// device, VkDescriptorSet descriptorSet, void** ppData);
#define VKGetDescriptorSetHostMappingVALVE                                     \
  decontext->vkGetDescriptorSetHostMappingVALVE
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyMemoryIndirectNV( VkCommandBuffer
// commandBuffer, VkDeviceAddress copyBufferAddress, uint32_t copyCount,
// uint32_t stride);
#define VKCmdCopyMemoryIndirectNV decontext->vkCmdCopyMemoryIndirectNV
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyMemoryToImageIndirectNV( VkCommandBuffer
// commandBuffer, VkDeviceAddress copyBufferAddress, uint32_t copyCount,
// uint32_t stride, VkImage dstImage, VkImageLayout dstImageLayout, const
// VkImageSubresourceLayers* pImageSubresources);
#define VKCmdCopyMemoryToImageIndirectNV                                       \
  decontext->vkCmdCopyMemoryToImageIndirectNV
// VKAPI_ATTR void VKAPI_CALL vkCmdDecompressMemoryNV( VkCommandBuffer
// commandBuffer, uint32_t decompressRegionCount, const
// VkDecompressMemoryRegionNV* pDecompressMemoryRegions);
#define VKCmdDecompressMemoryNV decontext->vkCmdDecompressMemoryNV
// VKAPI_ATTR void VKAPI_CALL vkCmdDecompressMemoryIndirectCountNV(
// VkCommandBuffer commandBuffer, VkDeviceAddress indirectCommandsAddress,
// VkDeviceAddress indirectCommandsCountAddress, uint32_t stride);
#define VKCmdDecompressMemoryIndirectCountNV                                   \
  decontext->vkCmdDecompressMemoryIndirectCountNV
// VKAPI_ATTR void VKAPI_CALL vkGetPipelineIndirectMemoryRequirementsNV(
// VkDevice device, const VkComputePipelineCreateInfo* pCreateInfo,
// VkMemoryRequirements2* pMemoryRequirements);
#define VKGetPipelineIndirectMemoryRequirementsNV                              \
  decontext->vkGetPipelineIndirectMemoryRequirementsNV
// VKAPI_ATTR void VKAPI_CALL vkCmdUpdatePipelineIndirectBufferNV(
// VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint,
// VkPipeline pipeline);
#define VKCmdUpdatePipelineIndirectBufferNV                                    \
  decontext->vkCmdUpdatePipelineIndirectBufferNV
// VKAPI_ATTR VkDeviceAddress VKAPI_CALL vkGetPipelineIndirectDeviceAddressNV(
// VkDevice device, const VkPipelineIndirectDeviceAddressInfoNV* pInfo);
#define VKGetPipelineIndirectDeviceAddressNV                                   \
  decontext->vkGetPipelineIndirectDeviceAddressNV
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthClampEnableEXT( VkCommandBuffer
// commandBuffer, VkBool32 depthClampEnable);
#define VKCmdSetDepthClampEnableEXT decontext->vkCmdSetDepthClampEnableEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetPolygonModeEXT( VkCommandBuffer
// commandBuffer, VkPolygonMode polygonMode);
#define VKCmdSetPolygonModeEXT decontext->vkCmdSetPolygonModeEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetRasterizationSamplesEXT( VkCommandBuffer
// commandBuffer, VkSampleCountFlagBits rasterizationSamples);
#define VKCmdSetRasterizationSamplesEXT                                        \
  decontext->vkCmdSetRasterizationSamplesEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetSampleMaskEXT( VkCommandBuffer
// commandBuffer, VkSampleCountFlagBits samples, const VkSampleMask*
// pSampleMask);
#define VKCmdSetSampleMaskEXT decontext->vkCmdSetSampleMaskEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetAlphaToCoverageEnableEXT( VkCommandBuffer
// commandBuffer, VkBool32 alphaToCoverageEnable);
#define VKCmdSetAlphaToCoverageEnableEXT                                       \
  decontext->vkCmdSetAlphaToCoverageEnableEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetAlphaToOneEnableEXT( VkCommandBuffer
// commandBuffer, VkBool32 alphaToOneEnable);
#define VKCmdSetAlphaToOneEnableEXT decontext->vkCmdSetAlphaToOneEnableEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetLogicOpEnableEXT( VkCommandBuffer
// commandBuffer, VkBool32 logicOpEnable);
#define VKCmdSetLogicOpEnableEXT decontext->vkCmdSetLogicOpEnableEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetColorBlendEnableEXT( VkCommandBuffer
// commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const
// VkBool32* pColorBlendEnables);
#define VKCmdSetColorBlendEnableEXT decontext->vkCmdSetColorBlendEnableEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetColorBlendEquationEXT( VkCommandBuffer
// commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const
// VkColorBlendEquationEXT* pColorBlendEquations);
#define VKCmdSetColorBlendEquationEXT decontext->vkCmdSetColorBlendEquationEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetColorWriteMaskEXT( VkCommandBuffer
// commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const
// VkColorComponentFlags* pColorWriteMasks);
#define VKCmdSetColorWriteMaskEXT decontext->vkCmdSetColorWriteMaskEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetTessellationDomainOriginEXT(
// VkCommandBuffer commandBuffer, VkTessellationDomainOrigin domainOrigin);
#define VKCmdSetTessellationDomainOriginEXT                                    \
  decontext->vkCmdSetTessellationDomainOriginEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetRasterizationStreamEXT( VkCommandBuffer
// commandBuffer, uint32_t rasterizationStream);
#define VKCmdSetRasterizationStreamEXT decontext->vkCmdSetRasterizationStreamEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetConservativeRasterizationModeEXT(
// VkCommandBuffer commandBuffer, VkConservativeRasterizationModeEXT
// conservativeRasterizationMode);
#define VKCmdSetConservativeRasterizationModeEXT                               \
  decontext->vkCmdSetConservativeRasterizationModeEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetExtraPrimitiveOverestimationSizeEXT(
// VkCommandBuffer commandBuffer, float extraPrimitiveOverestimationSize);
#define VKCmdSetExtraPrimitiveOverestimationSizeEXT                            \
  decontext->vkCmdSetExtraPrimitiveOverestimationSizeEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthClipEnableEXT( VkCommandBuffer
// commandBuffer, VkBool32 depthClipEnable);
#define VKCmdSetDepthClipEnableEXT decontext->vkCmdSetDepthClipEnableEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetSampleLocationsEnableEXT( VkCommandBuffer
// commandBuffer, VkBool32 sampleLocationsEnable);
#define VKCmdSetSampleLocationsEnableEXT                                       \
  decontext->vkCmdSetSampleLocationsEnableEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetColorBlendAdvancedEXT( VkCommandBuffer
// commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const
// VkColorBlendAdvancedEXT* pColorBlendAdvanced);
#define VKCmdSetColorBlendAdvancedEXT decontext->vkCmdSetColorBlendAdvancedEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetProvokingVertexModeEXT( VkCommandBuffer
// commandBuffer, VkProvokingVertexModeEXT provokingVertexMode);
#define VKCmdSetProvokingVertexModeEXT decontext->vkCmdSetProvokingVertexModeEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetLineRasterizationModeEXT( VkCommandBuffer
// commandBuffer, VkLineRasterizationModeEXT lineRasterizationMode);
#define VKCmdSetLineRasterizationModeEXT                                       \
  decontext->vkCmdSetLineRasterizationModeEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetLineStippleEnableEXT( VkCommandBuffer
// commandBuffer, VkBool32 stippledLineEnable);
#define VKCmdSetLineStippleEnableEXT decontext->vkCmdSetLineStippleEnableEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthClipNegativeOneToOneEXT(
// VkCommandBuffer commandBuffer, VkBool32 negativeOneToOne);
#define VKCmdSetDepthClipNegativeOneToOneEXT                                   \
  decontext->vkCmdSetDepthClipNegativeOneToOneEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportWScalingEnableNV( VkCommandBuffer
// commandBuffer, VkBool32 viewportWScalingEnable);
#define VKCmdSetViewportWScalingEnableNV                                       \
  decontext->vkCmdSetViewportWScalingEnableNV
// VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportSwizzleNV( VkCommandBuffer
// commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const
// VkViewportSwizzleNV* pViewportSwizzles);
#define VKCmdSetViewportSwizzleNV decontext->vkCmdSetViewportSwizzleNV
// VKAPI_ATTR void VKAPI_CALL vkCmdSetCoverageToColorEnableNV( VkCommandBuffer
// commandBuffer, VkBool32 coverageToColorEnable);
#define VKCmdSetCoverageToColorEnableNV                                        \
  decontext->vkCmdSetCoverageToColorEnableNV
// VKAPI_ATTR void VKAPI_CALL vkCmdSetCoverageToColorLocationNV( VkCommandBuffer
// commandBuffer, uint32_t coverageToColorLocation);
#define VKCmdSetCoverageToColorLocationNV                                      \
  decontext->vkCmdSetCoverageToColorLocationNV
// VKAPI_ATTR void VKAPI_CALL vkCmdSetCoverageModulationModeNV( VkCommandBuffer
// commandBuffer, VkCoverageModulationModeNV coverageModulationMode);
#define VKCmdSetCoverageModulationModeNV                                       \
  decontext->vkCmdSetCoverageModulationModeNV
// VKAPI_ATTR void VKAPI_CALL vkCmdSetCoverageModulationTableEnableNV(
// VkCommandBuffer commandBuffer, VkBool32 coverageModulationTableEnable);
#define VKCmdSetCoverageModulationTableEnableNV                                \
  decontext->vkCmdSetCoverageModulationTableEnableNV
// VKAPI_ATTR void VKAPI_CALL vkCmdSetCoverageModulationTableNV( VkCommandBuffer
// commandBuffer, uint32_t coverageModulationTableCount, const float*
// pCoverageModulationTable);
#define VKCmdSetCoverageModulationTableNV                                      \
  decontext->vkCmdSetCoverageModulationTableNV
// VKAPI_ATTR void VKAPI_CALL vkCmdSetShadingRateImageEnableNV( VkCommandBuffer
// commandBuffer, VkBool32 shadingRateImageEnable);
#define VKCmdSetShadingRateImageEnableNV                                       \
  decontext->vkCmdSetShadingRateImageEnableNV
// VKAPI_ATTR void VKAPI_CALL vkCmdSetRepresentativeFragmentTestEnableNV(
// VkCommandBuffer commandBuffer, VkBool32 representativeFragmentTestEnable);
#define VKCmdSetRepresentativeFragmentTestEnableNV                             \
  decontext->vkCmdSetRepresentativeFragmentTestEnableNV
// VKAPI_ATTR void VKAPI_CALL vkCmdSetCoverageReductionModeNV( VkCommandBuffer
// commandBuffer, VkCoverageReductionModeNV coverageReductionMode);
#define VKCmdSetCoverageReductionModeNV                                        \
  decontext->vkCmdSetCoverageReductionModeNV
// VKAPI_ATTR void VKAPI_CALL vkGetShaderModuleIdentifierEXT( VkDevice device,
// VkShaderModule shaderModule, VkShaderModuleIdentifierEXT* pIdentifier);
#define VKGetShaderModuleIdentifierEXT decontext->vkGetShaderModuleIdentifierEXT
// VKAPI_ATTR void VKAPI_CALL vkGetShaderModuleCreateInfoIdentifierEXT( VkDevice
// device, const VkShaderModuleCreateInfo* pCreateInfo,
// VkShaderModuleIdentifierEXT* pIdentifier);
#define VKGetShaderModuleCreateInfoIdentifierEXT                               \
  decontext->vkGetShaderModuleCreateInfoIdentifierEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateOpticalFlowSessionNV( VkDevice device,
// const VkOpticalFlowSessionCreateInfoNV* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkOpticalFlowSessionNV* pSession);
#define VKCreateOpticalFlowSessionNV decontext->vkCreateOpticalFlowSessionNV
// VKAPI_ATTR void VKAPI_CALL vkDestroyOpticalFlowSessionNV( VkDevice device,
// VkOpticalFlowSessionNV session, const VkAllocationCallbacks* pAllocator);
#define VKDestroyOpticalFlowSessionNV decontext->vkDestroyOpticalFlowSessionNV
// VKAPI_ATTR VkResult VKAPI_CALL vkBindOpticalFlowSessionImageNV( VkDevice
// device, VkOpticalFlowSessionNV session, VkOpticalFlowSessionBindingPointNV
// bindingPoint, VkImageView view, VkImageLayout layout);
#define VKBindOpticalFlowSessionImageNV                                        \
  decontext->vkBindOpticalFlowSessionImageNV
// VKAPI_ATTR void VKAPI_CALL vkCmdOpticalFlowExecuteNV( VkCommandBuffer
// commandBuffer, VkOpticalFlowSessionNV session, const
// VkOpticalFlowExecuteInfoNV* pExecuteInfo);
#define VKCmdOpticalFlowExecuteNV decontext->vkCmdOpticalFlowExecuteNV
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateShadersEXT( VkDevice device, uint32_t
// createInfoCount, const VkShaderCreateInfoEXT* pCreateInfos, const
// VkAllocationCallbacks* pAllocator, VkShaderEXT* pShaders);
#define VKCreateShadersEXT decontext->vkCreateShadersEXT
// VKAPI_ATTR void VKAPI_CALL vkDestroyShaderEXT( VkDevice device, VkShaderEXT
// shader, const VkAllocationCallbacks* pAllocator);
#define VKDestroyShaderEXT decontext->vkDestroyShaderEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkGetShaderBinaryDataEXT( VkDevice device,
// VkShaderEXT shader, size_t* pDataSize, void* pData);
#define VKGetShaderBinaryDataEXT decontext->vkGetShaderBinaryDataEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdBindShadersEXT( VkCommandBuffer
// commandBuffer, uint32_t stageCount, const VkShaderStageFlagBits* pStages,
// const VkShaderEXT* pShaders);
#define VKCmdBindShadersEXT decontext->vkCmdBindShadersEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkGetFramebufferTilePropertiesQCOM( VkDevice
// device, VkFramebuffer framebuffer, uint32_t* pPropertiesCount,
// VkTilePropertiesQCOM* pProperties);
#define VKGetFramebufferTilePropertiesQCOM                                     \
  decontext->vkGetFramebufferTilePropertiesQCOM
// VKAPI_ATTR VkResult VKAPI_CALL vkGetDynamicRenderingTilePropertiesQCOM(
// VkDevice device, const VkRenderingInfo* pRenderingInfo, VkTilePropertiesQCOM*
// pProperties);
#define VKGetDynamicRenderingTilePropertiesQCOM                                \
  decontext->vkGetDynamicRenderingTilePropertiesQCOM
// VKAPI_ATTR VkResult VKAPI_CALL vkSetLatencySleepModeNV( VkDevice device,
// VkSwapchainKHR swapchain, const VkLatencySleepModeInfoNV* pSleepModeInfo);
#define VKSetLatencySleepModeNV decontext->vkSetLatencySleepModeNV
// VKAPI_ATTR VkResult VKAPI_CALL vkLatencySleepNV( VkDevice device,
// VkSwapchainKHR swapchain, const VkLatencySleepInfoNV* pSleepInfo);
#define VKLatencySleepNV decontext->vkLatencySleepNV
// VKAPI_ATTR void VKAPI_CALL vkSetLatencyMarkerNV( VkDevice device,
// VkSwapchainKHR swapchain, const VkSetLatencyMarkerInfoNV*
// pLatencyMarkerInfo);
#define VKSetLatencyMarkerNV decontext->vkSetLatencyMarkerNV
// VKAPI_ATTR void VKAPI_CALL vkGetLatencyTimingsNV( VkDevice device,
// VkSwapchainKHR swapchain, VkGetLatencyMarkerInfoNV* pLatencyMarkerInfo);
#define VKGetLatencyTimingsNV decontext->vkGetLatencyTimingsNV
// VKAPI_ATTR void VKAPI_CALL vkQueueNotifyOutOfBandNV( VkQueue queue, const
// VkOutOfBandQueueTypeInfoNV* pQueueTypeInfo);
#define VKQueueNotifyOutOfBandNV decontext->vkQueueNotifyOutOfBandNV
// VKAPI_ATTR void VKAPI_CALL vkCmdSetAttachmentFeedbackLoopEnableEXT(
// VkCommandBuffer commandBuffer, VkImageAspectFlags aspectMask);
#define VKCmdSetAttachmentFeedbackLoopEnableEXT                                \
  decontext->vkCmdSetAttachmentFeedbackLoopEnableEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateAccelerationStructureKHR( VkDevice
// device, const VkAccelerationStructureCreateInfoKHR* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkAccelerationStructureKHR*
// pAccelerationStructure);
#define VKCreateAccelerationStructureKHR                                       \
  decontext->vkCreateAccelerationStructureKHR
// VKAPI_ATTR void VKAPI_CALL vkDestroyAccelerationStructureKHR( VkDevice
// device, VkAccelerationStructureKHR accelerationStructure, const
// VkAllocationCallbacks* pAllocator);
#define VKDestroyAccelerationStructureKHR                                      \
  decontext->vkDestroyAccelerationStructureKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdBuildAccelerationStructuresKHR(
// VkCommandBuffer commandBuffer, uint32_t infoCount, const
// VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const
// VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos);
#define VKCmdBuildAccelerationStructuresKHR                                    \
  decontext->vkCmdBuildAccelerationStructuresKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdBuildAccelerationStructuresIndirectKHR(
// VkCommandBuffer commandBuffer, uint32_t infoCount, const
// VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkDeviceAddress*
// pIndirectDeviceAddresses, const uint32_t* pIndirectStrides, const uint32_t*
// const* ppMaxPrimitiveCounts);
#define VKCmdBuildAccelerationStructuresIndirectKHR                            \
  decontext->vkCmdBuildAccelerationStructuresIndirectKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkBuildAccelerationStructuresKHR( VkDevice
// device, VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const
// VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const
// VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos);
#define VKBuildAccelerationStructuresKHR                                       \
  decontext->vkBuildAccelerationStructuresKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkCopyAccelerationStructureKHR( VkDevice
// device, VkDeferredOperationKHR deferredOperation, const
// VkCopyAccelerationStructureInfoKHR* pInfo);
#define VKCopyAccelerationStructureKHR decontext->vkCopyAccelerationStructureKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkCopyAccelerationStructureToMemoryKHR(
// VkDevice device, VkDeferredOperationKHR deferredOperation, const
// VkCopyAccelerationStructureToMemoryInfoKHR* pInfo);
#define VKCopyAccelerationStructureToMemoryKHR                                 \
  decontext->vkCopyAccelerationStructureToMemoryKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkCopyMemoryToAccelerationStructureKHR(
// VkDevice device, VkDeferredOperationKHR deferredOperation, const
// VkCopyMemoryToAccelerationStructureInfoKHR* pInfo);
#define VKCopyMemoryToAccelerationStructureKHR                                 \
  decontext->vkCopyMemoryToAccelerationStructureKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkWriteAccelerationStructuresPropertiesKHR(
// VkDevice device, uint32_t accelerationStructureCount, const
// VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType,
// size_t dataSize, void* pData, size_t stride);
#define VKWriteAccelerationStructuresPropertiesKHR                             \
  decontext->vkWriteAccelerationStructuresPropertiesKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyAccelerationStructureKHR( VkCommandBuffer
// commandBuffer, const VkCopyAccelerationStructureInfoKHR* pInfo);
#define VKCmdCopyAccelerationStructureKHR                                      \
  decontext->vkCmdCopyAccelerationStructureKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyAccelerationStructureToMemoryKHR(
// VkCommandBuffer commandBuffer, const
// VkCopyAccelerationStructureToMemoryInfoKHR* pInfo);
#define VKCmdCopyAccelerationStructureToMemoryKHR                              \
  decontext->vkCmdCopyAccelerationStructureToMemoryKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdCopyMemoryToAccelerationStructureKHR(
// VkCommandBuffer commandBuffer, const
// VkCopyMemoryToAccelerationStructureInfoKHR* pInfo);
#define VKCmdCopyMemoryToAccelerationStructureKHR                              \
  decontext->vkCmdCopyMemoryToAccelerationStructureKHR
// VKAPI_ATTR VkDeviceAddress VKAPI_CALL
// vkGetAccelerationStructureDeviceAddressKHR( VkDevice device, const
// VkAccelerationStructureDeviceAddressInfoKHR* pInfo);
#define VKGetAccelerationStructureDeviceAddressKHR                             \
  decontext->vkGetAccelerationStructureDeviceAddressKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdWriteAccelerationStructuresPropertiesKHR(
// VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const
// VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType,
// VkQueryPool queryPool, uint32_t firstQuery);
#define VKCmdWriteAccelerationStructuresPropertiesKHR                          \
  decontext->vkCmdWriteAccelerationStructuresPropertiesKHR
// VKAPI_ATTR void VKAPI_CALL vkGetDeviceAccelerationStructureCompatibilityKHR(
// VkDevice device, const VkAccelerationStructureVersionInfoKHR* pVersionInfo,
// VkAccelerationStructureCompatibilityKHR* pCompatibility);
#define VKGetDeviceAccelerationStructureCompatibilityKHR                       \
  decontext->vkGetDeviceAccelerationStructureCompatibilityKHR
// VKAPI_ATTR void VKAPI_CALL vkGetAccelerationStructureBuildSizesKHR( VkDevice
// device, VkAccelerationStructureBuildTypeKHR buildType, const
// VkAccelerationStructureBuildGeometryInfoKHR* pBuildInfo, const uint32_t*
// pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR* pSizeInfo);
#define VKGetAccelerationStructureBuildSizesKHR                                \
  decontext->vkGetAccelerationStructureBuildSizesKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdTraceRaysKHR( VkCommandBuffer commandBuffer,
// const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const
// VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const
// VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const
// VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, uint32_t width,
// uint32_t height, uint32_t depth);
#define VKCmdTraceRaysKHR decontext->vkCmdTraceRaysKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateRayTracingPipelinesKHR( VkDevice
// device, VkDeferredOperationKHR deferredOperation, VkPipelineCache
// pipelineCache, uint32_t createInfoCount, const
// VkRayTracingPipelineCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks*
// pAllocator, VkPipeline* pPipelines);
#define VKCreateRayTracingPipelinesKHR decontext->vkCreateRayTracingPipelinesKHR
// VKAPI_ATTR VkResult VKAPI_CALL
// vkGetRayTracingCaptureReplayShaderGroupHandlesKHR( VkDevice device,
// VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t
// dataSize, void* pData);
#define VKGetRayTracingCaptureReplayShaderGroupHandlesKHR                      \
  decontext->vkGetRayTracingCaptureReplayShaderGroupHandlesKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdTraceRaysIndirectKHR( VkCommandBuffer
// commandBuffer, const VkStridedDeviceAddressRegionKHR*
// pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR*
// pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR*
// pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR*
// pCallableShaderBindingTable, VkDeviceAddress indirectDeviceAddress);
#define VKCmdTraceRaysIndirectKHR decontext->vkCmdTraceRaysIndirectKHR
// VKAPI_ATTR VkDeviceSize VKAPI_CALL vkGetRayTracingShaderGroupStackSizeKHR(
// VkDevice device, VkPipeline pipeline, uint32_t group, VkShaderGroupShaderKHR
// groupShader);
#define VKGetRayTracingShaderGroupStackSizeKHR                                 \
  decontext->vkGetRayTracingShaderGroupStackSizeKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdSetRayTracingPipelineStackSizeKHR(
// VkCommandBuffer commandBuffer, uint32_t pipelineStackSize);
#define VKCmdSetRayTracingPipelineStackSizeKHR                                 \
  decontext->vkCmdSetRayTracingPipelineStackSizeKHR
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksEXT( VkCommandBuffer
// commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t
// groupCountZ);
#define VKCmdDrawMeshTasksEXT decontext->vkCmdDrawMeshTasksEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksIndirectEXT( VkCommandBuffer
// commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount,
// uint32_t stride);
#define VKCmdDrawMeshTasksIndirectEXT decontext->vkCmdDrawMeshTasksIndirectEXT
// VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksIndirectCountEXT(
// VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer
// countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t
// stride);
#define VKCmdDrawMeshTasksIndirectCountEXT                                     \
  decontext->vkCmdDrawMeshTasksIndirectCountEXT
#ifdef VK_USE_PLATFORM_ANDROID_KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetAndroidHardwareBufferPropertiesANDROID(
// VkDevice device, const struct AHardwareBuffer* buffer,
// VkAndroidHardwareBufferPropertiesANDROID* pProperties);
#define VKGetAndroidHardwareBufferPropertiesANDROID                            \
  decontext->vkGetAndroidHardwareBufferPropertiesANDROID
// VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryAndroidHardwareBufferANDROID(
// VkDevice device, const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo,
// struct AHardwareBuffer** pBuffer);
#define VKGetMemoryAndroidHardwareBufferANDROID                                \
  decontext->vkGetMemoryAndroidHardwareBufferANDROID
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
// VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryZirconHandleFUCHSIA( VkDevice
// device, const VkMemoryGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo,
// zx_handle_t* pZirconHandle);
#define VKGetMemoryZirconHandleFUCHSIA decontext->vkGetMemoryZirconHandleFUCHSIA
// VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryZirconHandlePropertiesFUCHSIA(
// VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, zx_handle_t
// zirconHandle, VkMemoryZirconHandlePropertiesFUCHSIA*
// pMemoryZirconHandleProperties);
#define VKGetMemoryZirconHandlePropertiesFUCHSIA                               \
  decontext->vkGetMemoryZirconHandlePropertiesFUCHSIA
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
// VKAPI_ATTR VkResult VKAPI_CALL vkImportSemaphoreZirconHandleFUCHSIA( VkDevice
// device, const VkImportSemaphoreZirconHandleInfoFUCHSIA*
// pImportSemaphoreZirconHandleInfo);
#define VKImportSemaphoreZirconHandleFUCHSIA                                   \
  decontext->vkImportSemaphoreZirconHandleFUCHSIA
// VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreZirconHandleFUCHSIA( VkDevice
// device, const VkSemaphoreGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo,
// zx_handle_t* pZirconHandle);
#define VKGetSemaphoreZirconHandleFUCHSIA                                      \
  decontext->vkGetSemaphoreZirconHandleFUCHSIA
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateBufferCollectionFUCHSIA( VkDevice
// device, const VkBufferCollectionCreateInfoFUCHSIA* pCreateInfo, const
// VkAllocationCallbacks* pAllocator, VkBufferCollectionFUCHSIA* pCollection);
#define VKCreateBufferCollectionFUCHSIA                                        \
  decontext->vkCreateBufferCollectionFUCHSIA
// VKAPI_ATTR VkResult VKAPI_CALL vkSetBufferCollectionImageConstraintsFUCHSIA(
// VkDevice device, VkBufferCollectionFUCHSIA collection, const
// VkImageConstraintsInfoFUCHSIA* pImageConstraintsInfo);
#define VKSetBufferCollectionImageConstraintsFUCHSIA                           \
  decontext->vkSetBufferCollectionImageConstraintsFUCHSIA
// VKAPI_ATTR VkResult VKAPI_CALL vkSetBufferCollectionBufferConstraintsFUCHSIA(
// VkDevice device, VkBufferCollectionFUCHSIA collection, const
// VkBufferConstraintsInfoFUCHSIA* pBufferConstraintsInfo);
#define VKSetBufferCollectionBufferConstraintsFUCHSIA                          \
  decontext->vkSetBufferCollectionBufferConstraintsFUCHSIA
// VKAPI_ATTR void VKAPI_CALL vkDestroyBufferCollectionFUCHSIA( VkDevice device,
// VkBufferCollectionFUCHSIA collection, const VkAllocationCallbacks*
// pAllocator);
#define VKDestroyBufferCollectionFUCHSIA                                       \
  decontext->vkDestroyBufferCollectionFUCHSIA
// VKAPI_ATTR VkResult VKAPI_CALL vkGetBufferCollectionPropertiesFUCHSIA(
// VkDevice device, VkBufferCollectionFUCHSIA collection,
// VkBufferCollectionPropertiesFUCHSIA* pProperties);
#define VKGetBufferCollectionPropertiesFUCHSIA                                 \
  decontext->vkGetBufferCollectionPropertiesFUCHSIA
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryWin32HandleKHR( VkDevice device,
// const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle);
#define VKGetMemoryWin32HandleKHR decontext->vkGetMemoryWin32HandleKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryWin32HandlePropertiesKHR( VkDevice
// device, VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle,
// VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties);
#define VKGetMemoryWin32HandlePropertiesKHR                                    \
  decontext->vkGetMemoryWin32HandlePropertiesKHR
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkImportSemaphoreWin32HandleKHR( VkDevice
// device, const VkImportSemaphoreWin32HandleInfoKHR*
// pImportSemaphoreWin32HandleInfo);
#define VKImportSemaphoreWin32HandleKHR                                        \
  decontext->vkImportSemaphoreWin32HandleKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreWin32HandleKHR( VkDevice device,
// const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE*
// pHandle);
#define VKGetSemaphoreWin32HandleKHR decontext->vkGetSemaphoreWin32HandleKHR
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkImportFenceWin32HandleKHR( VkDevice device,
// const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo);
#define VKImportFenceWin32HandleKHR decontext->vkImportFenceWin32HandleKHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetFenceWin32HandleKHR( VkDevice device,
// const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle);
#define VKGetFenceWin32HandleKHR decontext->vkGetFenceWin32HandleKHR
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryWin32HandleNV( VkDevice device,
// VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE*
// pHandle);
#define VKGetMemoryWin32HandleNV decontext->vkGetMemoryWin32HandleNV
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
// VKAPI_ATTR VkResult VKAPI_CALL vkAcquireFullScreenExclusiveModeEXT( VkDevice
// device, VkSwapchainKHR swapchain);
#define VKAcquireFullScreenExclusiveModeEXT                                    \
  decontext->vkAcquireFullScreenExclusiveModeEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkReleaseFullScreenExclusiveModeEXT( VkDevice
// device, VkSwapchainKHR swapchain);
#define VKReleaseFullScreenExclusiveModeEXT                                    \
  decontext->vkReleaseFullScreenExclusiveModeEXT
// VKAPI_ATTR VkResult VKAPI_CALL vkGetDeviceGroupSurfacePresentModes2EXT(
// VkDevice device, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
// VkDeviceGroupPresentModeFlagsKHR* pModes);
#define VKGetDeviceGroupSurfacePresentModes2EXT                                \
  decontext->vkGetDeviceGroupSurfacePresentModes2EXT
#endif
#ifdef VK_USE_PLATFORM_METAL_EXT
// VKAPI_ATTR void VKAPI_CALL vkExportMetalObjectsEXT( VkDevice device,
// VkExportMetalObjectsInfoEXT* pMetalObjectsInfo);
#define VKExportMetalObjectsEXT decontext->vkExportMetalObjectsEXT
#endif
#ifdef VK_USE_PLATFORM_SCREEN_QNX
// VKAPI_ATTR VkResult VKAPI_CALL vkGetScreenBufferPropertiesQNX( VkDevice
// device, const struct _screen_buffer* buffer, VkScreenBufferPropertiesQNX*
// pProperties);
#define VKGetScreenBufferPropertiesQNX decontext->vkGetScreenBufferPropertiesQNX
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
// VKAPI_ATTR VkResult VKAPI_CALL vkCreateExecutionGraphPipelinesAMDX( VkDevice
// device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const
// VkExecutionGraphPipelineCreateInfoAMDX* pCreateInfos, const
// VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
#define VKCreateExecutionGraphPipelinesAMDX                                    \
  decontext->vkCreateExecutionGraphPipelinesAMDX
// VKAPI_ATTR VkResult VKAPI_CALL vkGetExecutionGraphPipelineScratchSizeAMDX(
// VkDevice device, VkPipeline executionGraph,
// VkExecutionGraphPipelineScratchSizeAMDX* pSizeInfo);
#define VKGetExecutionGraphPipelineScratchSizeAMDX                             \
  decontext->vkGetExecutionGraphPipelineScratchSizeAMDX
// VKAPI_ATTR VkResult VKAPI_CALL vkGetExecutionGraphPipelineNodeIndexAMDX(
// VkDevice device, VkPipeline executionGraph, const
// VkPipelineShaderStageNodeCreateInfoAMDX* pNodeInfo, uint32_t* pNodeIndex);
#define VKGetExecutionGraphPipelineNodeIndexAMDX                               \
  decontext->vkGetExecutionGraphPipelineNodeIndexAMDX
// VKAPI_ATTR void VKAPI_CALL vkCmdInitializeGraphScratchMemoryAMDX(
// VkCommandBuffer commandBuffer, VkDeviceAddress scratch);
#define VKCmdInitializeGraphScratchMemoryAMDX                                  \
  decontext->vkCmdInitializeGraphScratchMemoryAMDX
// VKAPI_ATTR void VKAPI_CALL vkCmdDispatchGraphAMDX( VkCommandBuffer
// commandBuffer, VkDeviceAddress scratch, const VkDispatchGraphCountInfoAMDX*
// pCountInfo);
#define VKCmdDispatchGraphAMDX decontext->vkCmdDispatchGraphAMDX
// VKAPI_ATTR void VKAPI_CALL vkCmdDispatchGraphIndirectAMDX( VkCommandBuffer
// commandBuffer, VkDeviceAddress scratch, const VkDispatchGraphCountInfoAMDX*
// pCountInfo);
#define VKCmdDispatchGraphIndirectAMDX decontext->vkCmdDispatchGraphIndirectAMDX
// VKAPI_ATTR void VKAPI_CALL vkCmdDispatchGraphIndirectCountAMDX(
// VkCommandBuffer commandBuffer, VkDeviceAddress scratch, VkDeviceAddress
// countInfo);
#define VKCmdDispatchGraphIndirectCountAMDX                                    \
  decontext->vkCmdDispatchGraphIndirectCountAMDX
#endif
