#include "WGLLoader.hpp"

#define IMVKPFUN(NAME)                                                         \
  isAllLoaded = ((NAME = (PFN_##NAME)LoadFunc(userptr, #NAME)) != nullptr)     \
                    ? isAllLoaded                                              \
                    : false;
#define IFNEEDLOADVKEXT(NAME)                                                  \
  isAllLoaded.IS_LOAD_##NAME =                                                 \
      (NeedLoad.IS_LOAD_##NAME ? TRY_LOAD_##NAME##() : true);

WGLLoaderPHILoader::WGLLoaderPHILoader() {
  libHandle = nullptr;
  userptr = this;
  LoadFunc = phiLoadFunc;
}
bool WGLLoaderPHILoader::init() {
  if (!libHandle) {
    libHandle = GetWGLLoaderLibHandle();
  }
  return libHandle;
}
APIProc WGLLoaderPHILoader::phiLoadFunc(void *userptr, std::string_view name) {
  WGLLoaderPHILoader *context = (WGLLoaderPHILoader *)userptr;
  return GetPtrFrom_handle(context->libHandle, name.data());
}

WGLLoaderLoader::WGLLoaderLoader() {
  NowState.AllSetFalse();
  NeedLoad.AllSetFalse();
}
WGLLoaderLoader::Flags WGLLoaderLoader::LoadAll() {
  Flags isAllLoaded;
  isAllLoaded.AllSetFalse();
  IFNEEDLOADVKEXT(WGL_ARB_buffer_region);
  IFNEEDLOADVKEXT(WGL_ARB_create_context);
  IFNEEDLOADVKEXT(WGL_ARB_extensions_string);
  IFNEEDLOADVKEXT(WGL_ARB_make_current_read);
  IFNEEDLOADVKEXT(WGL_ARB_pbuffer);
  IFNEEDLOADVKEXT(WGL_ARB_pixel_format);
  IFNEEDLOADVKEXT(WGL_ARB_render_texture);
  IFNEEDLOADVKEXT(WGL_3DL_stereo_control);
  IFNEEDLOADVKEXT(WGL_AMD_gpu_association);
  IFNEEDLOADVKEXT(WGL_EXT_display_color_table);
  IFNEEDLOADVKEXT(WGL_EXT_extensions_string);
  IFNEEDLOADVKEXT(WGL_EXT_make_current_read);
  IFNEEDLOADVKEXT(WGL_EXT_pbuffer);
  IFNEEDLOADVKEXT(WGL_EXT_pixel_format);
  IFNEEDLOADVKEXT(WGL_EXT_swap_control);
  IFNEEDLOADVKEXT(WGL_I3D_digital_video_control);
  IFNEEDLOADVKEXT(WGL_I3D_gamma);
  IFNEEDLOADVKEXT(WGL_I3D_genlock);
  IFNEEDLOADVKEXT(WGL_I3D_image_buffer);
  IFNEEDLOADVKEXT(WGL_I3D_swap_frame_lock);
  IFNEEDLOADVKEXT(WGL_I3D_swap_frame_usage);
  IFNEEDLOADVKEXT(WGL_NV_DX_interop);
  IFNEEDLOADVKEXT(WGL_NV_copy_image);
  IFNEEDLOADVKEXT(WGL_NV_delay_before_swap);
  IFNEEDLOADVKEXT(WGL_NV_gpu_affinity);
  IFNEEDLOADVKEXT(WGL_NV_present_video);
  IFNEEDLOADVKEXT(WGL_NV_swap_group);
  IFNEEDLOADVKEXT(WGL_NV_vertex_array_range);
  IFNEEDLOADVKEXT(WGL_NV_video_capture);
  IFNEEDLOADVKEXT(WGL_NV_video_output);
  IFNEEDLOADVKEXT(WGL_OML_sync_control);
  IFNEEDLOADVKEXT(WGL_VERSION_1_0);
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_ARB_buffer_region() {
  bool isAllLoaded = true;
  IMVKPFUN(wglCreateBufferRegionARB);
  IMVKPFUN(wglDeleteBufferRegionARB);
  IMVKPFUN(wglSaveBufferRegionARB);
  IMVKPFUN(wglRestoreBufferRegionARB);
  NowState.IS_LOAD_WGL_ARB_buffer_region = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_ARB_create_context() {
  bool isAllLoaded = true;
  IMVKPFUN(wglCreateContextAttribsARB);
  NowState.IS_LOAD_WGL_ARB_create_context = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_ARB_extensions_string() {
  bool isAllLoaded = true;
  IMVKPFUN(wglGetExtensionsStringARB);
  NowState.IS_LOAD_WGL_ARB_extensions_string = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_ARB_make_current_read() {
  bool isAllLoaded = true;
  IMVKPFUN(wglMakeContextCurrentARB);
  IMVKPFUN(wglGetCurrentReadDCARB);
  NowState.IS_LOAD_WGL_ARB_make_current_read = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_ARB_pbuffer() {
  bool isAllLoaded = true;
  IMVKPFUN(wglCreatePbufferARB);
  IMVKPFUN(wglGetPbufferDCARB);
  IMVKPFUN(wglReleasePbufferDCARB);
  IMVKPFUN(wglDestroyPbufferARB);
  IMVKPFUN(wglQueryPbufferARB);
  NowState.IS_LOAD_WGL_ARB_pbuffer = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_ARB_pixel_format() {
  bool isAllLoaded = true;
  IMVKPFUN(wglGetPixelFormatAttribivARB);
  IMVKPFUN(wglGetPixelFormatAttribfvARB);
  IMVKPFUN(wglChoosePixelFormatARB);
  NowState.IS_LOAD_WGL_ARB_pixel_format = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_ARB_render_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(wglBindTexImageARB);
  IMVKPFUN(wglReleaseTexImageARB);
  IMVKPFUN(wglSetPbufferAttribARB);
  NowState.IS_LOAD_WGL_ARB_render_texture = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_3DL_stereo_control() {
  bool isAllLoaded = true;
  IMVKPFUN(wglSetStereoEmitterState3DL);
  NowState.IS_LOAD_WGL_3DL_stereo_control = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_AMD_gpu_association() {
  bool isAllLoaded = true;
  IMVKPFUN(wglGetGPUIDsAMD);
  IMVKPFUN(wglGetGPUInfoAMD);
  IMVKPFUN(wglGetContextGPUIDAMD);
  IMVKPFUN(wglCreateAssociatedContextAMD);
  IMVKPFUN(wglCreateAssociatedContextAttribsAMD);
  IMVKPFUN(wglDeleteAssociatedContextAMD);
  IMVKPFUN(wglMakeAssociatedContextCurrentAMD);
  IMVKPFUN(wglGetCurrentAssociatedContextAMD);
  IMVKPFUN(wglBlitContextFramebufferAMD);
  NowState.IS_LOAD_WGL_AMD_gpu_association = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_EXT_display_color_table() {
  bool isAllLoaded = true;
  IMVKPFUN(wglCreateDisplayColorTableEXT);
  IMVKPFUN(wglLoadDisplayColorTableEXT);
  IMVKPFUN(wglBindDisplayColorTableEXT);
  IMVKPFUN(wglDestroyDisplayColorTableEXT);
  NowState.IS_LOAD_WGL_EXT_display_color_table = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_EXT_extensions_string() {
  bool isAllLoaded = true;
  IMVKPFUN(wglGetExtensionsStringEXT);
  NowState.IS_LOAD_WGL_EXT_extensions_string = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_EXT_make_current_read() {
  bool isAllLoaded = true;
  IMVKPFUN(wglMakeContextCurrentEXT);
  IMVKPFUN(wglGetCurrentReadDCEXT);
  NowState.IS_LOAD_WGL_EXT_make_current_read = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_EXT_pbuffer() {
  bool isAllLoaded = true;
  IMVKPFUN(wglCreatePbufferEXT);
  IMVKPFUN(wglGetPbufferDCEXT);
  IMVKPFUN(wglReleasePbufferDCEXT);
  IMVKPFUN(wglDestroyPbufferEXT);
  IMVKPFUN(wglQueryPbufferEXT);
  NowState.IS_LOAD_WGL_EXT_pbuffer = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_EXT_pixel_format() {
  bool isAllLoaded = true;
  IMVKPFUN(wglGetPixelFormatAttribivEXT);
  IMVKPFUN(wglGetPixelFormatAttribfvEXT);
  IMVKPFUN(wglChoosePixelFormatEXT);
  NowState.IS_LOAD_WGL_EXT_pixel_format = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_EXT_swap_control() {
  bool isAllLoaded = true;
  IMVKPFUN(wglSwapIntervalEXT);
  IMVKPFUN(wglGetSwapIntervalEXT);
  NowState.IS_LOAD_WGL_EXT_swap_control = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_I3D_digital_video_control() {
  bool isAllLoaded = true;
  IMVKPFUN(wglGetDigitalVideoParametersI3D);
  IMVKPFUN(wglSetDigitalVideoParametersI3D);
  NowState.IS_LOAD_WGL_I3D_digital_video_control = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_I3D_gamma() {
  bool isAllLoaded = true;
  IMVKPFUN(wglGetGammaTableParametersI3D);
  IMVKPFUN(wglSetGammaTableParametersI3D);
  IMVKPFUN(wglGetGammaTableI3D);
  IMVKPFUN(wglSetGammaTableI3D);
  NowState.IS_LOAD_WGL_I3D_gamma = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_I3D_genlock() {
  bool isAllLoaded = true;
  IMVKPFUN(wglEnableGenlockI3D);
  IMVKPFUN(wglDisableGenlockI3D);
  IMVKPFUN(wglIsEnabledGenlockI3D);
  IMVKPFUN(wglGenlockSourceI3D);
  IMVKPFUN(wglGetGenlockSourceI3D);
  IMVKPFUN(wglGenlockSourceEdgeI3D);
  IMVKPFUN(wglGetGenlockSourceEdgeI3D);
  IMVKPFUN(wglGenlockSampleRateI3D);
  IMVKPFUN(wglGetGenlockSampleRateI3D);
  IMVKPFUN(wglGenlockSourceDelayI3D);
  IMVKPFUN(wglGetGenlockSourceDelayI3D);
  IMVKPFUN(wglQueryGenlockMaxSourceDelayI3D);
  NowState.IS_LOAD_WGL_I3D_genlock = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_I3D_image_buffer() {
  bool isAllLoaded = true;
  IMVKPFUN(wglCreateImageBufferI3D);
  IMVKPFUN(wglDestroyImageBufferI3D);
  IMVKPFUN(wglAssociateImageBufferEventsI3D);
  IMVKPFUN(wglReleaseImageBufferEventsI3D);
  NowState.IS_LOAD_WGL_I3D_image_buffer = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_I3D_swap_frame_lock() {
  bool isAllLoaded = true;
  IMVKPFUN(wglEnableFrameLockI3D);
  IMVKPFUN(wglDisableFrameLockI3D);
  IMVKPFUN(wglIsEnabledFrameLockI3D);
  IMVKPFUN(wglQueryFrameLockMasterI3D);
  NowState.IS_LOAD_WGL_I3D_swap_frame_lock = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_I3D_swap_frame_usage() {
  bool isAllLoaded = true;
  IMVKPFUN(wglGetFrameUsageI3D);
  IMVKPFUN(wglBeginFrameTrackingI3D);
  IMVKPFUN(wglEndFrameTrackingI3D);
  IMVKPFUN(wglQueryFrameTrackingI3D);
  NowState.IS_LOAD_WGL_I3D_swap_frame_usage = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_NV_DX_interop() {
  bool isAllLoaded = true;
  IMVKPFUN(wglDXSetResourceShareHandleNV);
  IMVKPFUN(wglDXOpenDeviceNV);
  IMVKPFUN(wglDXCloseDeviceNV);
  IMVKPFUN(wglDXRegisterObjectNV);
  IMVKPFUN(wglDXUnregisterObjectNV);
  IMVKPFUN(wglDXObjectAccessNV);
  IMVKPFUN(wglDXLockObjectsNV);
  IMVKPFUN(wglDXUnlockObjectsNV);
  NowState.IS_LOAD_WGL_NV_DX_interop = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_NV_copy_image() {
  bool isAllLoaded = true;
  IMVKPFUN(wglCopyImageSubDataNV);
  NowState.IS_LOAD_WGL_NV_copy_image = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_NV_delay_before_swap() {
  bool isAllLoaded = true;
  IMVKPFUN(wglDelayBeforeSwapNV);
  NowState.IS_LOAD_WGL_NV_delay_before_swap = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_NV_gpu_affinity() {
  bool isAllLoaded = true;
  IMVKPFUN(wglEnumGpusNV);
  IMVKPFUN(wglEnumGpuDevicesNV);
  IMVKPFUN(wglCreateAffinityDCNV);
  IMVKPFUN(wglEnumGpusFromAffinityDCNV);
  IMVKPFUN(wglDeleteDCNV);
  NowState.IS_LOAD_WGL_NV_gpu_affinity = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_NV_present_video() {
  bool isAllLoaded = true;
  IMVKPFUN(wglEnumerateVideoDevicesNV);
  IMVKPFUN(wglBindVideoDeviceNV);
  IMVKPFUN(wglQueryCurrentContextNV);
  NowState.IS_LOAD_WGL_NV_present_video = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_NV_swap_group() {
  bool isAllLoaded = true;
  IMVKPFUN(wglJoinSwapGroupNV);
  IMVKPFUN(wglBindSwapBarrierNV);
  IMVKPFUN(wglQuerySwapGroupNV);
  IMVKPFUN(wglQueryMaxSwapGroupsNV);
  IMVKPFUN(wglQueryFrameCountNV);
  IMVKPFUN(wglResetFrameCountNV);
  NowState.IS_LOAD_WGL_NV_swap_group = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_NV_vertex_array_range() {
  bool isAllLoaded = true;
  IMVKPFUN(wglAllocateMemoryNV);
  IMVKPFUN(wglFreeMemoryNV);
  NowState.IS_LOAD_WGL_NV_vertex_array_range = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_NV_video_capture() {
  bool isAllLoaded = true;
  IMVKPFUN(wglBindVideoCaptureDeviceNV);
  IMVKPFUN(wglEnumerateVideoCaptureDevicesNV);
  IMVKPFUN(wglLockVideoCaptureDeviceNV);
  IMVKPFUN(wglQueryVideoCaptureDeviceNV);
  IMVKPFUN(wglReleaseVideoCaptureDeviceNV);
  NowState.IS_LOAD_WGL_NV_video_capture = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_NV_video_output() {
  bool isAllLoaded = true;
  IMVKPFUN(wglGetVideoDeviceNV);
  IMVKPFUN(wglReleaseVideoDeviceNV);
  IMVKPFUN(wglBindVideoImageNV);
  IMVKPFUN(wglReleaseVideoImageNV);
  IMVKPFUN(wglSendPbufferToVideoNV);
  IMVKPFUN(wglGetVideoInfoNV);
  NowState.IS_LOAD_WGL_NV_video_output = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_OML_sync_control() {
  bool isAllLoaded = true;
  IMVKPFUN(wglGetSyncValuesOML);
  IMVKPFUN(wglGetMscRateOML);
  IMVKPFUN(wglSwapBuffersMscOML);
  IMVKPFUN(wglSwapLayerBuffersMscOML);
  IMVKPFUN(wglWaitForMscOML);
  IMVKPFUN(wglWaitForSbcOML);
  NowState.IS_LOAD_WGL_OML_sync_control = isAllLoaded;
  return isAllLoaded;
}
bool WGLLoaderLoader::TRY_LOAD_WGL_VERSION_1_0() {
  bool isAllLoaded = true;
  IMVKPFUN(ChoosePixelFormat);
  IMVKPFUN(DescribePixelFormat);
  IMVKPFUN(GetEnhMetaFilePixelFormat);
  IMVKPFUN(GetPixelFormat);
  IMVKPFUN(SetPixelFormat);
  IMVKPFUN(SwapBuffers);
  IMVKPFUN(wglCopyContext);
  IMVKPFUN(wglCreateContext);
  IMVKPFUN(wglCreateLayerContext);
  IMVKPFUN(wglDeleteContext);
  IMVKPFUN(wglDescribeLayerPlane);
  IMVKPFUN(wglGetCurrentContext);
  IMVKPFUN(wglGetCurrentDC);
  IMVKPFUN(wglGetLayerPaletteEntries);
  IMVKPFUN(wglGetProcAddress);
  IMVKPFUN(wglMakeCurrent);
  IMVKPFUN(wglRealizeLayerPalette);
  IMVKPFUN(wglSetLayerPaletteEntries);
  IMVKPFUN(wglShareLists);
  IMVKPFUN(wglSwapLayerBuffers);
  IMVKPFUN(wglUseFontBitmaps);
  IMVKPFUN(wglUseFontBitmapsA);
  IMVKPFUN(wglUseFontBitmapsW);
  IMVKPFUN(wglUseFontOutlines);
  IMVKPFUN(wglUseFontOutlinesA);
  IMVKPFUN(wglUseFontOutlinesW);
  NowState.IS_LOAD_WGL_VERSION_1_0 = isAllLoaded;
  return isAllLoaded;
}
static WGLLoaderLoader::WGLLoaderLoader::MAP WGLLoaderLoadermapping = {
    {{"WGL_ARB_buffer_region", &WGLLoaderLoader::TRY_LOAD_WGL_ARB_buffer_region,
      0},
     {"WGL_ARB_create_context",
      &WGLLoaderLoader::TRY_LOAD_WGL_ARB_create_context, 1},
     {"WGL_ARB_extensions_string",
      &WGLLoaderLoader::TRY_LOAD_WGL_ARB_extensions_string, 2},
     {"WGL_ARB_make_current_read",
      &WGLLoaderLoader::TRY_LOAD_WGL_ARB_make_current_read, 3},
     {"WGL_ARB_pbuffer", &WGLLoaderLoader::TRY_LOAD_WGL_ARB_pbuffer, 4},
     {"WGL_ARB_pixel_format", &WGLLoaderLoader::TRY_LOAD_WGL_ARB_pixel_format,
      5},
     {"WGL_ARB_render_texture",
      &WGLLoaderLoader::TRY_LOAD_WGL_ARB_render_texture, 6},
     {"WGL_3DL_stereo_control",
      &WGLLoaderLoader::TRY_LOAD_WGL_3DL_stereo_control, 7},
     {"WGL_AMD_gpu_association",
      &WGLLoaderLoader::TRY_LOAD_WGL_AMD_gpu_association, 8},
     {"WGL_EXT_display_color_table",
      &WGLLoaderLoader::TRY_LOAD_WGL_EXT_display_color_table, 9},
     {"WGL_EXT_extensions_string",
      &WGLLoaderLoader::TRY_LOAD_WGL_EXT_extensions_string, 10},
     {"WGL_EXT_make_current_read",
      &WGLLoaderLoader::TRY_LOAD_WGL_EXT_make_current_read, 11},
     {"WGL_EXT_pbuffer", &WGLLoaderLoader::TRY_LOAD_WGL_EXT_pbuffer, 12},
     {"WGL_EXT_pixel_format", &WGLLoaderLoader::TRY_LOAD_WGL_EXT_pixel_format,
      13},
     {"WGL_EXT_swap_control", &WGLLoaderLoader::TRY_LOAD_WGL_EXT_swap_control,
      14},
     {"WGL_I3D_digital_video_control",
      &WGLLoaderLoader::TRY_LOAD_WGL_I3D_digital_video_control, 15},
     {"WGL_I3D_gamma", &WGLLoaderLoader::TRY_LOAD_WGL_I3D_gamma, 16},
     {"WGL_I3D_genlock", &WGLLoaderLoader::TRY_LOAD_WGL_I3D_genlock, 17},
     {"WGL_I3D_image_buffer", &WGLLoaderLoader::TRY_LOAD_WGL_I3D_image_buffer,
      18},
     {"WGL_I3D_swap_frame_lock",
      &WGLLoaderLoader::TRY_LOAD_WGL_I3D_swap_frame_lock, 19},
     {"WGL_I3D_swap_frame_usage",
      &WGLLoaderLoader::TRY_LOAD_WGL_I3D_swap_frame_usage, 20},
     {"WGL_NV_DX_interop", &WGLLoaderLoader::TRY_LOAD_WGL_NV_DX_interop, 21},
     {"WGL_NV_copy_image", &WGLLoaderLoader::TRY_LOAD_WGL_NV_copy_image, 22},
     {"WGL_NV_delay_before_swap",
      &WGLLoaderLoader::TRY_LOAD_WGL_NV_delay_before_swap, 23},
     {"WGL_NV_gpu_affinity", &WGLLoaderLoader::TRY_LOAD_WGL_NV_gpu_affinity,
      24},
     {"WGL_NV_present_video", &WGLLoaderLoader::TRY_LOAD_WGL_NV_present_video,
      25},
     {"WGL_NV_swap_group", &WGLLoaderLoader::TRY_LOAD_WGL_NV_swap_group, 26},
     {"WGL_NV_vertex_array_range",
      &WGLLoaderLoader::TRY_LOAD_WGL_NV_vertex_array_range, 27},
     {"WGL_NV_video_capture", &WGLLoaderLoader::TRY_LOAD_WGL_NV_video_capture,
      28},
     {"WGL_NV_video_output", &WGLLoaderLoader::TRY_LOAD_WGL_NV_video_output,
      29},
     {"WGL_OML_sync_control", &WGLLoaderLoader::TRY_LOAD_WGL_OML_sync_control,
      30},
     {"WGL_VERSION_1_0", &WGLLoaderLoader::TRY_LOAD_WGL_VERSION_1_0, 31}}};
std::vector<WGLLoaderLoader::WGLLoaderLoader::EXTLOADER>
WGLLoaderLoader::TRAN2FUN(const std::vector<std::string> &list) {
  std::vector<EXTLOADER> output;
  for (auto &s : list) {
    auto as = WGLLoaderLoadermapping.TYPE1map[s];
    if (as) {
      output.push_back(as->type2);
    } else {
      output.push_back(0);
    }
  }
  return output;
}
std::vector<size_t>
WGLLoaderLoader::TRAN(const std::vector<std::string> &list) {
  std::vector<size_t> output;
  for (auto &s : list) {
    auto as = WGLLoaderLoadermapping.TYPE1map[s];
    if (as) {
      output.push_back(as->type3);
    } else {
      output.push_back(-1);
    }
  }
  return output;
}
bool WGLLoaderLoader::MappingToNeedLoad(const std::vector<size_t> &list) {
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
