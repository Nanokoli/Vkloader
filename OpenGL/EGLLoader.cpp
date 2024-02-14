#include "EGLLoader.hpp"

#define IMVKPFUN(NAME)                                                         \
  isAllLoaded = ((NAME = (PFN_##NAME)LoadFunc(userptr, #NAME)) != nullptr)     \
                    ? isAllLoaded                                              \
                    : false;
#define IFNEEDLOADVKEXT(NAME)                                                  \
  isAllLoaded.IS_LOAD_##NAME =                                                 \
      (NeedLoad.IS_LOAD_##NAME ? TRY_LOAD_##NAME##() : true);

EGLLoaderPHILoader::EGLLoaderPHILoader() {
  libHandle = nullptr;
  userptr = this;
  LoadFunc = phiLoadFunc;
}
bool EGLLoaderPHILoader::init() {
  if (!libHandle) {
    libHandle = GetEGLLoaderLibHandle();
  }
  return libHandle;
}
APIProc EGLLoaderPHILoader::phiLoadFunc(void *userptr, std::string_view name) {
  EGLLoaderPHILoader *context = (EGLLoaderPHILoader *)userptr;
  return GetPtrFrom_handle(context->libHandle, name.data());
}

EGLLoaderLoader::EGLLoaderLoader() {
  NowState.AllSetFalse();
  NeedLoad.AllSetFalse();
}
EGLLoaderLoader::Flags EGLLoaderLoader::LoadAll() {
  Flags isAllLoaded;
  isAllLoaded.AllSetFalse();
  IFNEEDLOADVKEXT(EGL_VERSION_1_0);
  IFNEEDLOADVKEXT(EGL_VERSION_1_1);
  IFNEEDLOADVKEXT(EGL_VERSION_1_2);
  IFNEEDLOADVKEXT(EGL_VERSION_1_4);
  IFNEEDLOADVKEXT(EGL_VERSION_1_5);
  IFNEEDLOADVKEXT(EGL_KHR_cl_event2);
  IFNEEDLOADVKEXT(EGL_KHR_debug);
  IFNEEDLOADVKEXT(EGL_KHR_display_reference);
  IFNEEDLOADVKEXT(EGL_KHR_fence_sync);
  IFNEEDLOADVKEXT(EGL_KHR_image);
  IFNEEDLOADVKEXT(EGL_KHR_lock_surface);
  IFNEEDLOADVKEXT(EGL_KHR_lock_surface3);
  IFNEEDLOADVKEXT(EGL_KHR_partial_update);
  IFNEEDLOADVKEXT(EGL_KHR_reusable_sync);
  IFNEEDLOADVKEXT(EGL_KHR_stream);
  IFNEEDLOADVKEXT(EGL_KHR_stream_attrib);
  IFNEEDLOADVKEXT(EGL_KHR_stream_consumer_gltexture);
  IFNEEDLOADVKEXT(EGL_KHR_stream_cross_process_fd);
  IFNEEDLOADVKEXT(EGL_KHR_stream_fifo);
  IFNEEDLOADVKEXT(EGL_KHR_stream_producer_eglsurface);
  IFNEEDLOADVKEXT(EGL_KHR_swap_buffers_with_damage);
  IFNEEDLOADVKEXT(EGL_KHR_wait_sync);
  IFNEEDLOADVKEXT(EGL_ANDROID_blob_cache);
  IFNEEDLOADVKEXT(EGL_ANDROID_create_native_client_buffer);
  IFNEEDLOADVKEXT(EGL_ANDROID_get_frame_timestamps);
  IFNEEDLOADVKEXT(EGL_ANDROID_get_native_client_buffer);
  IFNEEDLOADVKEXT(EGL_ANDROID_native_fence_sync);
  IFNEEDLOADVKEXT(EGL_ANDROID_presentation_time);
  IFNEEDLOADVKEXT(EGL_ANGLE_query_surface_pointer);
  IFNEEDLOADVKEXT(EGL_ANGLE_sync_control_rate);
  IFNEEDLOADVKEXT(EGL_EXT_client_sync);
  IFNEEDLOADVKEXT(EGL_EXT_compositor);
  IFNEEDLOADVKEXT(EGL_EXT_device_base);
  IFNEEDLOADVKEXT(EGL_EXT_device_persistent_id);
  IFNEEDLOADVKEXT(EGL_EXT_image_dma_buf_import_modifiers);
  IFNEEDLOADVKEXT(EGL_EXT_output_base);
  IFNEEDLOADVKEXT(EGL_EXT_platform_base);
  IFNEEDLOADVKEXT(EGL_EXT_stream_consumer_egloutput);
  IFNEEDLOADVKEXT(EGL_EXT_surface_compression);
  IFNEEDLOADVKEXT(EGL_EXT_swap_buffers_with_damage);
  IFNEEDLOADVKEXT(EGL_EXT_sync_reuse);
  IFNEEDLOADVKEXT(EGL_HI_clientpixmap);
  IFNEEDLOADVKEXT(EGL_MESA_drm_image);
  IFNEEDLOADVKEXT(EGL_MESA_image_dma_buf_export);
  IFNEEDLOADVKEXT(EGL_MESA_query_driver);
  IFNEEDLOADVKEXT(EGL_NOK_swap_region);
  IFNEEDLOADVKEXT(EGL_NOK_swap_region2);
  IFNEEDLOADVKEXT(EGL_NV_native_query);
  IFNEEDLOADVKEXT(EGL_NV_post_sub_buffer);
  IFNEEDLOADVKEXT(EGL_NV_stream_consumer_eglimage);
  IFNEEDLOADVKEXT(EGL_NV_stream_consumer_gltexture_yuv);
  IFNEEDLOADVKEXT(EGL_NV_stream_flush);
  IFNEEDLOADVKEXT(EGL_NV_stream_metadata);
  IFNEEDLOADVKEXT(EGL_NV_stream_reset);
  IFNEEDLOADVKEXT(EGL_NV_stream_sync);
  IFNEEDLOADVKEXT(EGL_NV_sync);
  IFNEEDLOADVKEXT(EGL_NV_system_time);
  IFNEEDLOADVKEXT(EGL_WL_bind_wayland_display);
  IFNEEDLOADVKEXT(EGL_WL_create_wayland_buffer_from_image);
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_VERSION_1_0() {
  bool isAllLoaded = true;
  IMVKPFUN(eglChooseConfig);
  IMVKPFUN(eglCopyBuffers);
  IMVKPFUN(eglCreateContext);
  IMVKPFUN(eglCreatePbufferSurface);
  IMVKPFUN(eglCreatePixmapSurface);
  IMVKPFUN(eglCreateWindowSurface);
  IMVKPFUN(eglDestroyContext);
  IMVKPFUN(eglDestroySurface);
  IMVKPFUN(eglGetConfigAttrib);
  IMVKPFUN(eglGetConfigs);
  IMVKPFUN(eglGetCurrentDisplay);
  IMVKPFUN(eglGetCurrentSurface);
  IMVKPFUN(eglGetDisplay);
  IMVKPFUN(eglGetError);
  IMVKPFUN(eglGetProcAddress);
  IMVKPFUN(eglInitialize);
  IMVKPFUN(eglMakeCurrent);
  IMVKPFUN(eglQueryContext);
  IMVKPFUN(eglQueryString);
  IMVKPFUN(eglQuerySurface);
  IMVKPFUN(eglSwapBuffers);
  IMVKPFUN(eglTerminate);
  IMVKPFUN(eglWaitGL);
  IMVKPFUN(eglWaitNative);
  NowState.IS_LOAD_EGL_VERSION_1_0 = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_VERSION_1_1() {
  bool isAllLoaded = true;
  IMVKPFUN(eglBindTexImage);
  IMVKPFUN(eglReleaseTexImage);
  IMVKPFUN(eglSurfaceAttrib);
  IMVKPFUN(eglSwapInterval);
  NowState.IS_LOAD_EGL_VERSION_1_1 = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_VERSION_1_2() {
  bool isAllLoaded = true;
  IMVKPFUN(eglBindAPI);
  IMVKPFUN(eglQueryAPI);
  IMVKPFUN(eglCreatePbufferFromClientBuffer);
  IMVKPFUN(eglReleaseThread);
  IMVKPFUN(eglWaitClient);
  NowState.IS_LOAD_EGL_VERSION_1_2 = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_VERSION_1_4() {
  bool isAllLoaded = true;
  IMVKPFUN(eglGetCurrentContext);
  NowState.IS_LOAD_EGL_VERSION_1_4 = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_VERSION_1_5() {
  bool isAllLoaded = true;
  IMVKPFUN(eglCreateSync);
  IMVKPFUN(eglDestroySync);
  IMVKPFUN(eglClientWaitSync);
  IMVKPFUN(eglGetSyncAttrib);
  IMVKPFUN(eglCreateImage);
  IMVKPFUN(eglDestroyImage);
  IMVKPFUN(eglGetPlatformDisplay);
  IMVKPFUN(eglCreatePlatformWindowSurface);
  IMVKPFUN(eglCreatePlatformPixmapSurface);
  IMVKPFUN(eglWaitSync);
  NowState.IS_LOAD_EGL_VERSION_1_5 = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_KHR_cl_event2() {
  bool isAllLoaded = true;
  IMVKPFUN(eglCreateSync64KHR);
  NowState.IS_LOAD_EGL_KHR_cl_event2 = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_KHR_debug() {
  bool isAllLoaded = true;
  IMVKPFUN(eglDebugMessageControlKHR);
  IMVKPFUN(eglQueryDebugKHR);
  IMVKPFUN(eglLabelObjectKHR);
  NowState.IS_LOAD_EGL_KHR_debug = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_KHR_display_reference() {
  bool isAllLoaded = true;
  IMVKPFUN(eglQueryDisplayAttribKHR);
  NowState.IS_LOAD_EGL_KHR_display_reference = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_KHR_fence_sync() {
  bool isAllLoaded = true;
  IMVKPFUN(eglCreateSyncKHR);
  IMVKPFUN(eglDestroySyncKHR);
  IMVKPFUN(eglClientWaitSyncKHR);
  IMVKPFUN(eglGetSyncAttribKHR);
  NowState.IS_LOAD_EGL_KHR_fence_sync = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_KHR_image() {
  bool isAllLoaded = true;
  IMVKPFUN(eglCreateImageKHR);
  IMVKPFUN(eglDestroyImageKHR);
  NowState.IS_LOAD_EGL_KHR_image = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_KHR_lock_surface() {
  bool isAllLoaded = true;
  IMVKPFUN(eglLockSurfaceKHR);
  IMVKPFUN(eglUnlockSurfaceKHR);
  NowState.IS_LOAD_EGL_KHR_lock_surface = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_KHR_lock_surface3() {
  bool isAllLoaded = true;
  IMVKPFUN(eglQuerySurface64KHR);
  NowState.IS_LOAD_EGL_KHR_lock_surface3 = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_KHR_partial_update() {
  bool isAllLoaded = true;
  IMVKPFUN(eglSetDamageRegionKHR);
  NowState.IS_LOAD_EGL_KHR_partial_update = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_KHR_reusable_sync() {
  bool isAllLoaded = true;
  IMVKPFUN(eglSignalSyncKHR);
  NowState.IS_LOAD_EGL_KHR_reusable_sync = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_KHR_stream() {
  bool isAllLoaded = true;
  IMVKPFUN(eglCreateStreamKHR);
  IMVKPFUN(eglDestroyStreamKHR);
  IMVKPFUN(eglStreamAttribKHR);
  IMVKPFUN(eglQueryStreamKHR);
  IMVKPFUN(eglQueryStreamu64KHR);
  NowState.IS_LOAD_EGL_KHR_stream = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_KHR_stream_attrib() {
  bool isAllLoaded = true;
  IMVKPFUN(eglCreateStreamAttribKHR);
  IMVKPFUN(eglSetStreamAttribKHR);
  IMVKPFUN(eglQueryStreamAttribKHR);
  IMVKPFUN(eglStreamConsumerAcquireAttribKHR);
  IMVKPFUN(eglStreamConsumerReleaseAttribKHR);
  NowState.IS_LOAD_EGL_KHR_stream_attrib = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_KHR_stream_consumer_gltexture() {
  bool isAllLoaded = true;
  IMVKPFUN(eglStreamConsumerGLTextureExternalKHR);
  IMVKPFUN(eglStreamConsumerAcquireKHR);
  IMVKPFUN(eglStreamConsumerReleaseKHR);
  NowState.IS_LOAD_EGL_KHR_stream_consumer_gltexture = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_KHR_stream_cross_process_fd() {
  bool isAllLoaded = true;
  IMVKPFUN(eglGetStreamFileDescriptorKHR);
  IMVKPFUN(eglCreateStreamFromFileDescriptorKHR);
  NowState.IS_LOAD_EGL_KHR_stream_cross_process_fd = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_KHR_stream_fifo() {
  bool isAllLoaded = true;
  IMVKPFUN(eglQueryStreamTimeKHR);
  NowState.IS_LOAD_EGL_KHR_stream_fifo = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_KHR_stream_producer_eglsurface() {
  bool isAllLoaded = true;
  IMVKPFUN(eglCreateStreamProducerSurfaceKHR);
  NowState.IS_LOAD_EGL_KHR_stream_producer_eglsurface = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_KHR_swap_buffers_with_damage() {
  bool isAllLoaded = true;
  IMVKPFUN(eglSwapBuffersWithDamageKHR);
  NowState.IS_LOAD_EGL_KHR_swap_buffers_with_damage = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_KHR_wait_sync() {
  bool isAllLoaded = true;
  IMVKPFUN(eglWaitSyncKHR);
  NowState.IS_LOAD_EGL_KHR_wait_sync = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_ANDROID_blob_cache() {
  bool isAllLoaded = true;
  IMVKPFUN(eglSetBlobCacheFuncsANDROID);
  NowState.IS_LOAD_EGL_ANDROID_blob_cache = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_ANDROID_create_native_client_buffer() {
  bool isAllLoaded = true;
  IMVKPFUN(eglCreateNativeClientBufferANDROID);
  NowState.IS_LOAD_EGL_ANDROID_create_native_client_buffer = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_ANDROID_get_frame_timestamps() {
  bool isAllLoaded = true;
  IMVKPFUN(eglGetCompositorTimingSupportedANDROID);
  IMVKPFUN(eglGetCompositorTimingANDROID);
  IMVKPFUN(eglGetNextFrameIdANDROID);
  IMVKPFUN(eglGetFrameTimestampSupportedANDROID);
  IMVKPFUN(eglGetFrameTimestampsANDROID);
  NowState.IS_LOAD_EGL_ANDROID_get_frame_timestamps = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_ANDROID_get_native_client_buffer() {
  bool isAllLoaded = true;
  IMVKPFUN(eglGetNativeClientBufferANDROID);
  NowState.IS_LOAD_EGL_ANDROID_get_native_client_buffer = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_ANDROID_native_fence_sync() {
  bool isAllLoaded = true;
  IMVKPFUN(eglDupNativeFenceFDANDROID);
  NowState.IS_LOAD_EGL_ANDROID_native_fence_sync = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_ANDROID_presentation_time() {
  bool isAllLoaded = true;
  IMVKPFUN(eglPresentationTimeANDROID);
  NowState.IS_LOAD_EGL_ANDROID_presentation_time = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_ANGLE_query_surface_pointer() {
  bool isAllLoaded = true;
  IMVKPFUN(eglQuerySurfacePointerANGLE);
  NowState.IS_LOAD_EGL_ANGLE_query_surface_pointer = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_ANGLE_sync_control_rate() {
  bool isAllLoaded = true;
  IMVKPFUN(eglGetMscRateANGLE);
  NowState.IS_LOAD_EGL_ANGLE_sync_control_rate = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_EXT_client_sync() {
  bool isAllLoaded = true;
  IMVKPFUN(eglClientSignalSyncEXT);
  NowState.IS_LOAD_EGL_EXT_client_sync = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_EXT_compositor() {
  bool isAllLoaded = true;
  IMVKPFUN(eglCompositorSetContextListEXT);
  IMVKPFUN(eglCompositorSetContextAttributesEXT);
  IMVKPFUN(eglCompositorSetWindowListEXT);
  IMVKPFUN(eglCompositorSetWindowAttributesEXT);
  IMVKPFUN(eglCompositorBindTexWindowEXT);
  IMVKPFUN(eglCompositorSetSizeEXT);
  IMVKPFUN(eglCompositorSwapPolicyEXT);
  NowState.IS_LOAD_EGL_EXT_compositor = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_EXT_device_base() {
  bool isAllLoaded = true;
  IMVKPFUN(eglQueryDeviceAttribEXT);
  IMVKPFUN(eglQueryDeviceStringEXT);
  IMVKPFUN(eglQueryDevicesEXT);
  IMVKPFUN(eglQueryDisplayAttribEXT);
  NowState.IS_LOAD_EGL_EXT_device_base = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_EXT_device_persistent_id() {
  bool isAllLoaded = true;
  IMVKPFUN(eglQueryDeviceBinaryEXT);
  NowState.IS_LOAD_EGL_EXT_device_persistent_id = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_EXT_image_dma_buf_import_modifiers() {
  bool isAllLoaded = true;
  IMVKPFUN(eglQueryDmaBufFormatsEXT);
  IMVKPFUN(eglQueryDmaBufModifiersEXT);
  NowState.IS_LOAD_EGL_EXT_image_dma_buf_import_modifiers = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_EXT_output_base() {
  bool isAllLoaded = true;
  IMVKPFUN(eglGetOutputLayersEXT);
  IMVKPFUN(eglGetOutputPortsEXT);
  IMVKPFUN(eglOutputLayerAttribEXT);
  IMVKPFUN(eglQueryOutputLayerAttribEXT);
  IMVKPFUN(eglQueryOutputLayerStringEXT);
  IMVKPFUN(eglOutputPortAttribEXT);
  IMVKPFUN(eglQueryOutputPortAttribEXT);
  IMVKPFUN(eglQueryOutputPortStringEXT);
  NowState.IS_LOAD_EGL_EXT_output_base = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_EXT_platform_base() {
  bool isAllLoaded = true;
  IMVKPFUN(eglGetPlatformDisplayEXT);
  IMVKPFUN(eglCreatePlatformWindowSurfaceEXT);
  IMVKPFUN(eglCreatePlatformPixmapSurfaceEXT);
  NowState.IS_LOAD_EGL_EXT_platform_base = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_EXT_stream_consumer_egloutput() {
  bool isAllLoaded = true;
  IMVKPFUN(eglStreamConsumerOutputEXT);
  NowState.IS_LOAD_EGL_EXT_stream_consumer_egloutput = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_EXT_surface_compression() {
  bool isAllLoaded = true;
  IMVKPFUN(eglQuerySupportedCompressionRatesEXT);
  NowState.IS_LOAD_EGL_EXT_surface_compression = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_EXT_swap_buffers_with_damage() {
  bool isAllLoaded = true;
  IMVKPFUN(eglSwapBuffersWithDamageEXT);
  NowState.IS_LOAD_EGL_EXT_swap_buffers_with_damage = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_EXT_sync_reuse() {
  bool isAllLoaded = true;
  IMVKPFUN(eglUnsignalSyncEXT);
  NowState.IS_LOAD_EGL_EXT_sync_reuse = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_HI_clientpixmap() {
  bool isAllLoaded = true;
  IMVKPFUN(eglCreatePixmapSurfaceHI);
  NowState.IS_LOAD_EGL_HI_clientpixmap = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_MESA_drm_image() {
  bool isAllLoaded = true;
  IMVKPFUN(eglCreateDRMImageMESA);
  IMVKPFUN(eglExportDRMImageMESA);
  NowState.IS_LOAD_EGL_MESA_drm_image = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_MESA_image_dma_buf_export() {
  bool isAllLoaded = true;
  IMVKPFUN(eglExportDMABUFImageQueryMESA);
  IMVKPFUN(eglExportDMABUFImageMESA);
  NowState.IS_LOAD_EGL_MESA_image_dma_buf_export = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_MESA_query_driver() {
  bool isAllLoaded = true;
  IMVKPFUN(eglGetDisplayDriverConfig);
  IMVKPFUN(eglGetDisplayDriverName);
  NowState.IS_LOAD_EGL_MESA_query_driver = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_NOK_swap_region() {
  bool isAllLoaded = true;
  IMVKPFUN(eglSwapBuffersRegionNOK);
  NowState.IS_LOAD_EGL_NOK_swap_region = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_NOK_swap_region2() {
  bool isAllLoaded = true;
  IMVKPFUN(eglSwapBuffersRegion2NOK);
  NowState.IS_LOAD_EGL_NOK_swap_region2 = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_NV_native_query() {
  bool isAllLoaded = true;
  IMVKPFUN(eglQueryNativeDisplayNV);
  IMVKPFUN(eglQueryNativeWindowNV);
  IMVKPFUN(eglQueryNativePixmapNV);
  NowState.IS_LOAD_EGL_NV_native_query = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_NV_post_sub_buffer() {
  bool isAllLoaded = true;
  IMVKPFUN(eglPostSubBufferNV);
  NowState.IS_LOAD_EGL_NV_post_sub_buffer = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_NV_stream_consumer_eglimage() {
  bool isAllLoaded = true;
  IMVKPFUN(eglStreamImageConsumerConnectNV);
  IMVKPFUN(eglQueryStreamConsumerEventNV);
  IMVKPFUN(eglStreamAcquireImageNV);
  IMVKPFUN(eglStreamReleaseImageNV);
  NowState.IS_LOAD_EGL_NV_stream_consumer_eglimage = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_NV_stream_consumer_gltexture_yuv() {
  bool isAllLoaded = true;
  IMVKPFUN(eglStreamConsumerGLTextureExternalAttribsNV);
  NowState.IS_LOAD_EGL_NV_stream_consumer_gltexture_yuv = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_NV_stream_flush() {
  bool isAllLoaded = true;
  IMVKPFUN(eglStreamFlushNV);
  NowState.IS_LOAD_EGL_NV_stream_flush = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_NV_stream_metadata() {
  bool isAllLoaded = true;
  IMVKPFUN(eglQueryDisplayAttribNV);
  IMVKPFUN(eglSetStreamMetadataNV);
  IMVKPFUN(eglQueryStreamMetadataNV);
  NowState.IS_LOAD_EGL_NV_stream_metadata = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_NV_stream_reset() {
  bool isAllLoaded = true;
  IMVKPFUN(eglResetStreamNV);
  NowState.IS_LOAD_EGL_NV_stream_reset = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_NV_stream_sync() {
  bool isAllLoaded = true;
  IMVKPFUN(eglCreateStreamSyncNV);
  NowState.IS_LOAD_EGL_NV_stream_sync = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_NV_sync() {
  bool isAllLoaded = true;
  IMVKPFUN(eglCreateFenceSyncNV);
  IMVKPFUN(eglDestroySyncNV);
  IMVKPFUN(eglFenceNV);
  IMVKPFUN(eglClientWaitSyncNV);
  IMVKPFUN(eglSignalSyncNV);
  IMVKPFUN(eglGetSyncAttribNV);
  NowState.IS_LOAD_EGL_NV_sync = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_NV_system_time() {
  bool isAllLoaded = true;
  IMVKPFUN(eglGetSystemTimeFrequencyNV);
  IMVKPFUN(eglGetSystemTimeNV);
  NowState.IS_LOAD_EGL_NV_system_time = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_WL_bind_wayland_display() {
  bool isAllLoaded = true;
  IMVKPFUN(eglBindWaylandDisplayWL);
  IMVKPFUN(eglUnbindWaylandDisplayWL);
  IMVKPFUN(eglQueryWaylandBufferWL);
  NowState.IS_LOAD_EGL_WL_bind_wayland_display = isAllLoaded;
  return isAllLoaded;
}
bool EGLLoaderLoader::TRY_LOAD_EGL_WL_create_wayland_buffer_from_image() {
  bool isAllLoaded = true;
  IMVKPFUN(eglCreateWaylandBufferFromImageWL);
  NowState.IS_LOAD_EGL_WL_create_wayland_buffer_from_image = isAllLoaded;
  return isAllLoaded;
}
static EGLLoaderLoader::EGLLoaderLoader::MAP EGLLoaderLoadermapping = {
    {{"EGL_VERSION_1_0", &EGLLoaderLoader::TRY_LOAD_EGL_VERSION_1_0, 0},
     {"EGL_VERSION_1_1", &EGLLoaderLoader::TRY_LOAD_EGL_VERSION_1_1, 1},
     {"EGL_VERSION_1_2", &EGLLoaderLoader::TRY_LOAD_EGL_VERSION_1_2, 2},
     {"EGL_VERSION_1_4", &EGLLoaderLoader::TRY_LOAD_EGL_VERSION_1_4, 3},
     {"EGL_VERSION_1_5", &EGLLoaderLoader::TRY_LOAD_EGL_VERSION_1_5, 4},
     {"EGL_KHR_cl_event2", &EGLLoaderLoader::TRY_LOAD_EGL_KHR_cl_event2, 5},
     {"EGL_KHR_debug", &EGLLoaderLoader::TRY_LOAD_EGL_KHR_debug, 6},
     {"EGL_KHR_display_reference",
      &EGLLoaderLoader::TRY_LOAD_EGL_KHR_display_reference, 7},
     {"EGL_KHR_fence_sync", &EGLLoaderLoader::TRY_LOAD_EGL_KHR_fence_sync, 8},
     {"EGL_KHR_image", &EGLLoaderLoader::TRY_LOAD_EGL_KHR_image, 9},
     {"EGL_KHR_lock_surface", &EGLLoaderLoader::TRY_LOAD_EGL_KHR_lock_surface,
      10},
     {"EGL_KHR_lock_surface3", &EGLLoaderLoader::TRY_LOAD_EGL_KHR_lock_surface3,
      11},
     {"EGL_KHR_partial_update",
      &EGLLoaderLoader::TRY_LOAD_EGL_KHR_partial_update, 12},
     {"EGL_KHR_reusable_sync", &EGLLoaderLoader::TRY_LOAD_EGL_KHR_reusable_sync,
      13},
     {"EGL_KHR_stream", &EGLLoaderLoader::TRY_LOAD_EGL_KHR_stream, 14},
     {"EGL_KHR_stream_attrib", &EGLLoaderLoader::TRY_LOAD_EGL_KHR_stream_attrib,
      15},
     {"EGL_KHR_stream_consumer_gltexture",
      &EGLLoaderLoader::TRY_LOAD_EGL_KHR_stream_consumer_gltexture, 16},
     {"EGL_KHR_stream_cross_process_fd",
      &EGLLoaderLoader::TRY_LOAD_EGL_KHR_stream_cross_process_fd, 17},
     {"EGL_KHR_stream_fifo", &EGLLoaderLoader::TRY_LOAD_EGL_KHR_stream_fifo,
      18},
     {"EGL_KHR_stream_producer_eglsurface",
      &EGLLoaderLoader::TRY_LOAD_EGL_KHR_stream_producer_eglsurface, 19},
     {"EGL_KHR_swap_buffers_with_damage",
      &EGLLoaderLoader::TRY_LOAD_EGL_KHR_swap_buffers_with_damage, 20},
     {"EGL_KHR_wait_sync", &EGLLoaderLoader::TRY_LOAD_EGL_KHR_wait_sync, 21},
     {"EGL_ANDROID_blob_cache",
      &EGLLoaderLoader::TRY_LOAD_EGL_ANDROID_blob_cache, 22},
     {"EGL_ANDROID_create_native_client_buffer",
      &EGLLoaderLoader::TRY_LOAD_EGL_ANDROID_create_native_client_buffer, 23},
     {"EGL_ANDROID_get_frame_timestamps",
      &EGLLoaderLoader::TRY_LOAD_EGL_ANDROID_get_frame_timestamps, 24},
     {"EGL_ANDROID_get_native_client_buffer",
      &EGLLoaderLoader::TRY_LOAD_EGL_ANDROID_get_native_client_buffer, 25},
     {"EGL_ANDROID_native_fence_sync",
      &EGLLoaderLoader::TRY_LOAD_EGL_ANDROID_native_fence_sync, 26},
     {"EGL_ANDROID_presentation_time",
      &EGLLoaderLoader::TRY_LOAD_EGL_ANDROID_presentation_time, 27},
     {"EGL_ANGLE_query_surface_pointer",
      &EGLLoaderLoader::TRY_LOAD_EGL_ANGLE_query_surface_pointer, 28},
     {"EGL_ANGLE_sync_control_rate",
      &EGLLoaderLoader::TRY_LOAD_EGL_ANGLE_sync_control_rate, 29},
     {"EGL_EXT_client_sync", &EGLLoaderLoader::TRY_LOAD_EGL_EXT_client_sync,
      30},
     {"EGL_EXT_compositor", &EGLLoaderLoader::TRY_LOAD_EGL_EXT_compositor, 31},
     {"EGL_EXT_device_base", &EGLLoaderLoader::TRY_LOAD_EGL_EXT_device_base,
      32},
     {"EGL_EXT_device_persistent_id",
      &EGLLoaderLoader::TRY_LOAD_EGL_EXT_device_persistent_id, 33},
     {"EGL_EXT_image_dma_buf_import_modifiers",
      &EGLLoaderLoader::TRY_LOAD_EGL_EXT_image_dma_buf_import_modifiers, 34},
     {"EGL_EXT_output_base", &EGLLoaderLoader::TRY_LOAD_EGL_EXT_output_base,
      35},
     {"EGL_EXT_platform_base", &EGLLoaderLoader::TRY_LOAD_EGL_EXT_platform_base,
      36},
     {"EGL_EXT_stream_consumer_egloutput",
      &EGLLoaderLoader::TRY_LOAD_EGL_EXT_stream_consumer_egloutput, 37},
     {"EGL_EXT_surface_compression",
      &EGLLoaderLoader::TRY_LOAD_EGL_EXT_surface_compression, 38},
     {"EGL_EXT_swap_buffers_with_damage",
      &EGLLoaderLoader::TRY_LOAD_EGL_EXT_swap_buffers_with_damage, 39},
     {"EGL_EXT_sync_reuse", &EGLLoaderLoader::TRY_LOAD_EGL_EXT_sync_reuse, 40},
     {"EGL_HI_clientpixmap", &EGLLoaderLoader::TRY_LOAD_EGL_HI_clientpixmap,
      41},
     {"EGL_MESA_drm_image", &EGLLoaderLoader::TRY_LOAD_EGL_MESA_drm_image, 42},
     {"EGL_MESA_image_dma_buf_export",
      &EGLLoaderLoader::TRY_LOAD_EGL_MESA_image_dma_buf_export, 43},
     {"EGL_MESA_query_driver", &EGLLoaderLoader::TRY_LOAD_EGL_MESA_query_driver,
      44},
     {"EGL_NOK_swap_region", &EGLLoaderLoader::TRY_LOAD_EGL_NOK_swap_region,
      45},
     {"EGL_NOK_swap_region2", &EGLLoaderLoader::TRY_LOAD_EGL_NOK_swap_region2,
      46},
     {"EGL_NV_native_query", &EGLLoaderLoader::TRY_LOAD_EGL_NV_native_query,
      47},
     {"EGL_NV_post_sub_buffer",
      &EGLLoaderLoader::TRY_LOAD_EGL_NV_post_sub_buffer, 48},
     {"EGL_NV_stream_consumer_eglimage",
      &EGLLoaderLoader::TRY_LOAD_EGL_NV_stream_consumer_eglimage, 49},
     {"EGL_NV_stream_consumer_gltexture_yuv",
      &EGLLoaderLoader::TRY_LOAD_EGL_NV_stream_consumer_gltexture_yuv, 50},
     {"EGL_NV_stream_flush", &EGLLoaderLoader::TRY_LOAD_EGL_NV_stream_flush,
      51},
     {"EGL_NV_stream_metadata",
      &EGLLoaderLoader::TRY_LOAD_EGL_NV_stream_metadata, 52},
     {"EGL_NV_stream_reset", &EGLLoaderLoader::TRY_LOAD_EGL_NV_stream_reset,
      53},
     {"EGL_NV_stream_sync", &EGLLoaderLoader::TRY_LOAD_EGL_NV_stream_sync, 54},
     {"EGL_NV_sync", &EGLLoaderLoader::TRY_LOAD_EGL_NV_sync, 55},
     {"EGL_NV_system_time", &EGLLoaderLoader::TRY_LOAD_EGL_NV_system_time, 56},
     {"EGL_WL_bind_wayland_display",
      &EGLLoaderLoader::TRY_LOAD_EGL_WL_bind_wayland_display, 57},
     {"EGL_WL_create_wayland_buffer_from_image",
      &EGLLoaderLoader::TRY_LOAD_EGL_WL_create_wayland_buffer_from_image, 58}}};
std::vector<EGLLoaderLoader::EGLLoaderLoader::EXTLOADER>
EGLLoaderLoader::TRAN2FUN(const std::vector<std::string> &list) {
  std::vector<EXTLOADER> output;
  for (auto &s : list) {
    auto as = EGLLoaderLoadermapping.TYPE1map[s];
    if (as) {
      output.push_back(as->type2);
    } else {
      output.push_back(0);
    }
  }
  return output;
}
std::vector<size_t>
EGLLoaderLoader::TRAN(const std::vector<std::string> &list) {
  std::vector<size_t> output;
  for (auto &s : list) {
    auto as = EGLLoaderLoadermapping.TYPE1map[s];
    if (as) {
      output.push_back(as->type3);
    } else {
      output.push_back(-1);
    }
  }
  return output;
}
bool EGLLoaderLoader::MappingToNeedLoad(const std::vector<size_t> &list) {
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
