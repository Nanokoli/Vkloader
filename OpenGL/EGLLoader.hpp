#pragma once
#include "../PhiLoader.hpp"
#include <EGL/egl.h>
#include <EGL/eglext.h>
typedef PFNEGLCHOOSECONFIGPROC PFN_eglChooseConfig;
typedef PFNEGLCOPYBUFFERSPROC PFN_eglCopyBuffers;
typedef PFNEGLCREATECONTEXTPROC PFN_eglCreateContext;
typedef PFNEGLCREATEPBUFFERSURFACEPROC PFN_eglCreatePbufferSurface;
typedef PFNEGLCREATEPIXMAPSURFACEPROC PFN_eglCreatePixmapSurface;
typedef PFNEGLCREATEWINDOWSURFACEPROC PFN_eglCreateWindowSurface;
typedef PFNEGLDESTROYCONTEXTPROC PFN_eglDestroyContext;
typedef PFNEGLDESTROYSURFACEPROC PFN_eglDestroySurface;
typedef PFNEGLGETCONFIGATTRIBPROC PFN_eglGetConfigAttrib;
typedef PFNEGLGETCONFIGSPROC PFN_eglGetConfigs;
typedef PFNEGLGETCURRENTDISPLAYPROC PFN_eglGetCurrentDisplay;
typedef PFNEGLGETCURRENTSURFACEPROC PFN_eglGetCurrentSurface;
typedef PFNEGLGETDISPLAYPROC PFN_eglGetDisplay;
typedef PFNEGLGETERRORPROC PFN_eglGetError;
typedef PFNEGLGETPROCADDRESSPROC PFN_eglGetProcAddress;
typedef PFNEGLINITIALIZEPROC PFN_eglInitialize;
typedef PFNEGLMAKECURRENTPROC PFN_eglMakeCurrent;
typedef PFNEGLQUERYCONTEXTPROC PFN_eglQueryContext;
typedef PFNEGLQUERYSTRINGPROC PFN_eglQueryString;
typedef PFNEGLQUERYSURFACEPROC PFN_eglQuerySurface;
typedef PFNEGLSWAPBUFFERSPROC PFN_eglSwapBuffers;
typedef PFNEGLTERMINATEPROC PFN_eglTerminate;
typedef PFNEGLWAITGLPROC PFN_eglWaitGL;
typedef PFNEGLWAITNATIVEPROC PFN_eglWaitNative;
typedef PFNEGLBINDTEXIMAGEPROC PFN_eglBindTexImage;
typedef PFNEGLRELEASETEXIMAGEPROC PFN_eglReleaseTexImage;
typedef PFNEGLSURFACEATTRIBPROC PFN_eglSurfaceAttrib;
typedef PFNEGLSWAPINTERVALPROC PFN_eglSwapInterval;
typedef PFNEGLBINDAPIPROC PFN_eglBindAPI;
typedef PFNEGLQUERYAPIPROC PFN_eglQueryAPI;
typedef PFNEGLCREATEPBUFFERFROMCLIENTBUFFERPROC
    PFN_eglCreatePbufferFromClientBuffer;
typedef PFNEGLRELEASETHREADPROC PFN_eglReleaseThread;
typedef PFNEGLWAITCLIENTPROC PFN_eglWaitClient;
typedef PFNEGLGETCURRENTCONTEXTPROC PFN_eglGetCurrentContext;
typedef PFNEGLCREATESYNCPROC PFN_eglCreateSync;
typedef PFNEGLDESTROYSYNCPROC PFN_eglDestroySync;
typedef PFNEGLCLIENTWAITSYNCPROC PFN_eglClientWaitSync;
typedef PFNEGLGETSYNCATTRIBPROC PFN_eglGetSyncAttrib;
typedef PFNEGLCREATEIMAGEPROC PFN_eglCreateImage;
typedef PFNEGLDESTROYIMAGEPROC PFN_eglDestroyImage;
typedef PFNEGLGETPLATFORMDISPLAYPROC PFN_eglGetPlatformDisplay;
typedef PFNEGLCREATEPLATFORMWINDOWSURFACEPROC
    PFN_eglCreatePlatformWindowSurface;
typedef PFNEGLCREATEPLATFORMPIXMAPSURFACEPROC
    PFN_eglCreatePlatformPixmapSurface;
typedef PFNEGLWAITSYNCPROC PFN_eglWaitSync;
typedef PFNEGLCREATESYNC64KHRPROC PFN_eglCreateSync64KHR;
typedef PFNEGLDEBUGMESSAGECONTROLKHRPROC PFN_eglDebugMessageControlKHR;
typedef PFNEGLQUERYDEBUGKHRPROC PFN_eglQueryDebugKHR;
typedef PFNEGLLABELOBJECTKHRPROC PFN_eglLabelObjectKHR;
typedef PFNEGLQUERYDISPLAYATTRIBKHRPROC PFN_eglQueryDisplayAttribKHR;
typedef PFNEGLCREATESYNCKHRPROC PFN_eglCreateSyncKHR;
typedef PFNEGLDESTROYSYNCKHRPROC PFN_eglDestroySyncKHR;
typedef PFNEGLCLIENTWAITSYNCKHRPROC PFN_eglClientWaitSyncKHR;
typedef PFNEGLGETSYNCATTRIBKHRPROC PFN_eglGetSyncAttribKHR;
typedef PFNEGLCREATEIMAGEKHRPROC PFN_eglCreateImageKHR;
typedef PFNEGLDESTROYIMAGEKHRPROC PFN_eglDestroyImageKHR;
typedef PFNEGLLOCKSURFACEKHRPROC PFN_eglLockSurfaceKHR;
typedef PFNEGLUNLOCKSURFACEKHRPROC PFN_eglUnlockSurfaceKHR;
typedef PFNEGLQUERYSURFACE64KHRPROC PFN_eglQuerySurface64KHR;
typedef PFNEGLSETDAMAGEREGIONKHRPROC PFN_eglSetDamageRegionKHR;
typedef PFNEGLSIGNALSYNCKHRPROC PFN_eglSignalSyncKHR;
typedef PFNEGLCREATESTREAMKHRPROC PFN_eglCreateStreamKHR;
typedef PFNEGLDESTROYSTREAMKHRPROC PFN_eglDestroyStreamKHR;
typedef PFNEGLSTREAMATTRIBKHRPROC PFN_eglStreamAttribKHR;
typedef PFNEGLQUERYSTREAMKHRPROC PFN_eglQueryStreamKHR;
typedef PFNEGLQUERYSTREAMU64KHRPROC PFN_eglQueryStreamu64KHR;
typedef PFNEGLCREATESTREAMATTRIBKHRPROC PFN_eglCreateStreamAttribKHR;
typedef PFNEGLSETSTREAMATTRIBKHRPROC PFN_eglSetStreamAttribKHR;
typedef PFNEGLQUERYSTREAMATTRIBKHRPROC PFN_eglQueryStreamAttribKHR;
typedef PFNEGLSTREAMCONSUMERACQUIREATTRIBKHRPROC
    PFN_eglStreamConsumerAcquireAttribKHR;
typedef PFNEGLSTREAMCONSUMERRELEASEATTRIBKHRPROC
    PFN_eglStreamConsumerReleaseAttribKHR;
typedef PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC
    PFN_eglStreamConsumerGLTextureExternalKHR;
typedef PFNEGLSTREAMCONSUMERACQUIREKHRPROC PFN_eglStreamConsumerAcquireKHR;
typedef PFNEGLSTREAMCONSUMERRELEASEKHRPROC PFN_eglStreamConsumerReleaseKHR;
typedef PFNEGLGETSTREAMFILEDESCRIPTORKHRPROC PFN_eglGetStreamFileDescriptorKHR;
typedef PFNEGLCREATESTREAMFROMFILEDESCRIPTORKHRPROC
    PFN_eglCreateStreamFromFileDescriptorKHR;
typedef PFNEGLQUERYSTREAMTIMEKHRPROC PFN_eglQueryStreamTimeKHR;
typedef PFNEGLCREATESTREAMPRODUCERSURFACEKHRPROC
    PFN_eglCreateStreamProducerSurfaceKHR;
typedef PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC PFN_eglSwapBuffersWithDamageKHR;
typedef PFNEGLWAITSYNCKHRPROC PFN_eglWaitSyncKHR;
typedef PFNEGLSETBLOBCACHEFUNCSANDROIDPROC PFN_eglSetBlobCacheFuncsANDROID;
typedef PFNEGLCREATENATIVECLIENTBUFFERANDROIDPROC
    PFN_eglCreateNativeClientBufferANDROID;
typedef PFNEGLGETCOMPOSITORTIMINGSUPPORTEDANDROIDPROC
    PFN_eglGetCompositorTimingSupportedANDROID;
typedef PFNEGLGETCOMPOSITORTIMINGANDROIDPROC PFN_eglGetCompositorTimingANDROID;
typedef PFNEGLGETNEXTFRAMEIDANDROIDPROC PFN_eglGetNextFrameIdANDROID;
typedef PFNEGLGETFRAMETIMESTAMPSUPPORTEDANDROIDPROC
    PFN_eglGetFrameTimestampSupportedANDROID;
typedef PFNEGLGETFRAMETIMESTAMPSANDROIDPROC PFN_eglGetFrameTimestampsANDROID;
typedef PFNEGLGETNATIVECLIENTBUFFERANDROIDPROC
    PFN_eglGetNativeClientBufferANDROID;
typedef PFNEGLDUPNATIVEFENCEFDANDROIDPROC PFN_eglDupNativeFenceFDANDROID;
typedef PFNEGLPRESENTATIONTIMEANDROIDPROC PFN_eglPresentationTimeANDROID;
typedef PFNEGLQUERYSURFACEPOINTERANGLEPROC PFN_eglQuerySurfacePointerANGLE;
typedef PFNEGLGETMSCRATEANGLEPROC PFN_eglGetMscRateANGLE;
typedef PFNEGLCLIENTSIGNALSYNCEXTPROC PFN_eglClientSignalSyncEXT;
typedef PFNEGLCOMPOSITORSETCONTEXTLISTEXTPROC
    PFN_eglCompositorSetContextListEXT;
typedef PFNEGLCOMPOSITORSETCONTEXTATTRIBUTESEXTPROC
    PFN_eglCompositorSetContextAttributesEXT;
typedef PFNEGLCOMPOSITORSETWINDOWLISTEXTPROC PFN_eglCompositorSetWindowListEXT;
typedef PFNEGLCOMPOSITORSETWINDOWATTRIBUTESEXTPROC
    PFN_eglCompositorSetWindowAttributesEXT;
typedef PFNEGLCOMPOSITORBINDTEXWINDOWEXTPROC PFN_eglCompositorBindTexWindowEXT;
typedef PFNEGLCOMPOSITORSETSIZEEXTPROC PFN_eglCompositorSetSizeEXT;
typedef PFNEGLCOMPOSITORSWAPPOLICYEXTPROC PFN_eglCompositorSwapPolicyEXT;
typedef PFNEGLQUERYDEVICEATTRIBEXTPROC PFN_eglQueryDeviceAttribEXT;
typedef PFNEGLQUERYDEVICESTRINGEXTPROC PFN_eglQueryDeviceStringEXT;
typedef PFNEGLQUERYDEVICESEXTPROC PFN_eglQueryDevicesEXT;
typedef PFNEGLQUERYDISPLAYATTRIBEXTPROC PFN_eglQueryDisplayAttribEXT;
typedef PFNEGLQUERYDEVICEBINARYEXTPROC PFN_eglQueryDeviceBinaryEXT;
typedef PFNEGLQUERYDMABUFFORMATSEXTPROC PFN_eglQueryDmaBufFormatsEXT;
typedef PFNEGLQUERYDMABUFMODIFIERSEXTPROC PFN_eglQueryDmaBufModifiersEXT;
typedef PFNEGLGETOUTPUTLAYERSEXTPROC PFN_eglGetOutputLayersEXT;
typedef PFNEGLGETOUTPUTPORTSEXTPROC PFN_eglGetOutputPortsEXT;
typedef PFNEGLOUTPUTLAYERATTRIBEXTPROC PFN_eglOutputLayerAttribEXT;
typedef PFNEGLQUERYOUTPUTLAYERATTRIBEXTPROC PFN_eglQueryOutputLayerAttribEXT;
typedef PFNEGLQUERYOUTPUTLAYERSTRINGEXTPROC PFN_eglQueryOutputLayerStringEXT;
typedef PFNEGLOUTPUTPORTATTRIBEXTPROC PFN_eglOutputPortAttribEXT;
typedef PFNEGLQUERYOUTPUTPORTATTRIBEXTPROC PFN_eglQueryOutputPortAttribEXT;
typedef PFNEGLQUERYOUTPUTPORTSTRINGEXTPROC PFN_eglQueryOutputPortStringEXT;
typedef PFNEGLGETPLATFORMDISPLAYEXTPROC PFN_eglGetPlatformDisplayEXT;
typedef PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC
    PFN_eglCreatePlatformWindowSurfaceEXT;
typedef PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC
    PFN_eglCreatePlatformPixmapSurfaceEXT;
typedef PFNEGLSTREAMCONSUMEROUTPUTEXTPROC PFN_eglStreamConsumerOutputEXT;
typedef PFNEGLQUERYSUPPORTEDCOMPRESSIONRATESEXTPROC
    PFN_eglQuerySupportedCompressionRatesEXT;
typedef PFNEGLSWAPBUFFERSWITHDAMAGEEXTPROC PFN_eglSwapBuffersWithDamageEXT;
typedef PFNEGLUNSIGNALSYNCEXTPROC PFN_eglUnsignalSyncEXT;
typedef PFNEGLCREATEPIXMAPSURFACEHIPROC PFN_eglCreatePixmapSurfaceHI;
typedef PFNEGLCREATEDRMIMAGEMESAPROC PFN_eglCreateDRMImageMESA;
typedef PFNEGLEXPORTDRMIMAGEMESAPROC PFN_eglExportDRMImageMESA;
typedef PFNEGLEXPORTDMABUFIMAGEQUERYMESAPROC PFN_eglExportDMABUFImageQueryMESA;
typedef PFNEGLEXPORTDMABUFIMAGEMESAPROC PFN_eglExportDMABUFImageMESA;
typedef PFNEGLGETDISPLAYDRIVERCONFIGPROC PFN_eglGetDisplayDriverConfig;
typedef PFNEGLGETDISPLAYDRIVERNAMEPROC PFN_eglGetDisplayDriverName;
typedef PFNEGLSWAPBUFFERSREGIONNOKPROC PFN_eglSwapBuffersRegionNOK;
typedef PFNEGLSWAPBUFFERSREGION2NOKPROC PFN_eglSwapBuffersRegion2NOK;
typedef PFNEGLQUERYNATIVEDISPLAYNVPROC PFN_eglQueryNativeDisplayNV;
typedef PFNEGLQUERYNATIVEWINDOWNVPROC PFN_eglQueryNativeWindowNV;
typedef PFNEGLQUERYNATIVEPIXMAPNVPROC PFN_eglQueryNativePixmapNV;
typedef PFNEGLPOSTSUBBUFFERNVPROC PFN_eglPostSubBufferNV;
typedef PFNEGLSTREAMIMAGECONSUMERCONNECTNVPROC
    PFN_eglStreamImageConsumerConnectNV;
typedef PFNEGLQUERYSTREAMCONSUMEREVENTNVPROC PFN_eglQueryStreamConsumerEventNV;
typedef PFNEGLSTREAMACQUIREIMAGENVPROC PFN_eglStreamAcquireImageNV;
typedef PFNEGLSTREAMRELEASEIMAGENVPROC PFN_eglStreamReleaseImageNV;
typedef PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALATTRIBSNVPROC
    PFN_eglStreamConsumerGLTextureExternalAttribsNV;
typedef PFNEGLSTREAMFLUSHNVPROC PFN_eglStreamFlushNV;
typedef PFNEGLQUERYDISPLAYATTRIBNVPROC PFN_eglQueryDisplayAttribNV;
typedef PFNEGLSETSTREAMMETADATANVPROC PFN_eglSetStreamMetadataNV;
typedef PFNEGLQUERYSTREAMMETADATANVPROC PFN_eglQueryStreamMetadataNV;
typedef PFNEGLRESETSTREAMNVPROC PFN_eglResetStreamNV;
typedef PFNEGLCREATESTREAMSYNCNVPROC PFN_eglCreateStreamSyncNV;
typedef PFNEGLCREATEFENCESYNCNVPROC PFN_eglCreateFenceSyncNV;
typedef PFNEGLDESTROYSYNCNVPROC PFN_eglDestroySyncNV;
typedef PFNEGLFENCENVPROC PFN_eglFenceNV;
typedef PFNEGLCLIENTWAITSYNCNVPROC PFN_eglClientWaitSyncNV;
typedef PFNEGLSIGNALSYNCNVPROC PFN_eglSignalSyncNV;
typedef PFNEGLGETSYNCATTRIBNVPROC PFN_eglGetSyncAttribNV;
typedef PFNEGLGETSYSTEMTIMEFREQUENCYNVPROC PFN_eglGetSystemTimeFrequencyNV;
typedef PFNEGLGETSYSTEMTIMENVPROC PFN_eglGetSystemTimeNV;
typedef PFNEGLBINDWAYLANDDISPLAYWLPROC PFN_eglBindWaylandDisplayWL;
typedef PFNEGLUNBINDWAYLANDDISPLAYWLPROC PFN_eglUnbindWaylandDisplayWL;
typedef PFNEGLQUERYWAYLANDBUFFERWLPROC PFN_eglQueryWaylandBufferWL;
typedef PFNEGLCREATEWAYLANDBUFFERFROMIMAGEWLPROC
    PFN_eglCreateWaylandBufferFromImageWL;
#define VKFUNDEFINE(NAME) PFN_##NAME NAME##;

class EGLLoaderLoader {
public:
  typedef APIProc (*UserptrLoadFunc)(void *userptr, std::string_view name);
  struct Flags : public LONGBITSET {
    Flags() : LONGBITSET(sizeof(Flags), 59) {}
    bool IS_LOAD_EGL_VERSION_1_0 : 1;                         // 0
    bool IS_LOAD_EGL_VERSION_1_1 : 1;                         // 1
    bool IS_LOAD_EGL_VERSION_1_2 : 1;                         // 2
    bool IS_LOAD_EGL_VERSION_1_4 : 1;                         // 3
    bool IS_LOAD_EGL_VERSION_1_5 : 1;                         // 4
    bool IS_LOAD_EGL_KHR_cl_event2 : 1;                       // 5
    bool IS_LOAD_EGL_KHR_debug : 1;                           // 6
    bool IS_LOAD_EGL_KHR_display_reference : 1;               // 7
    bool IS_LOAD_EGL_KHR_fence_sync : 1;                      // 8
    bool IS_LOAD_EGL_KHR_image : 1;                           // 9
    bool IS_LOAD_EGL_KHR_lock_surface : 1;                    // 10
    bool IS_LOAD_EGL_KHR_lock_surface3 : 1;                   // 11
    bool IS_LOAD_EGL_KHR_partial_update : 1;                  // 12
    bool IS_LOAD_EGL_KHR_reusable_sync : 1;                   // 13
    bool IS_LOAD_EGL_KHR_stream : 1;                          // 14
    bool IS_LOAD_EGL_KHR_stream_attrib : 1;                   // 15
    bool IS_LOAD_EGL_KHR_stream_consumer_gltexture : 1;       // 16
    bool IS_LOAD_EGL_KHR_stream_cross_process_fd : 1;         // 17
    bool IS_LOAD_EGL_KHR_stream_fifo : 1;                     // 18
    bool IS_LOAD_EGL_KHR_stream_producer_eglsurface : 1;      // 19
    bool IS_LOAD_EGL_KHR_swap_buffers_with_damage : 1;        // 20
    bool IS_LOAD_EGL_KHR_wait_sync : 1;                       // 21
    bool IS_LOAD_EGL_ANDROID_blob_cache : 1;                  // 22
    bool IS_LOAD_EGL_ANDROID_create_native_client_buffer : 1; // 23
    bool IS_LOAD_EGL_ANDROID_get_frame_timestamps : 1;        // 24
    bool IS_LOAD_EGL_ANDROID_get_native_client_buffer : 1;    // 25
    bool IS_LOAD_EGL_ANDROID_native_fence_sync : 1;           // 26
    bool IS_LOAD_EGL_ANDROID_presentation_time : 1;           // 27
    bool IS_LOAD_EGL_ANGLE_query_surface_pointer : 1;         // 28
    bool IS_LOAD_EGL_ANGLE_sync_control_rate : 1;             // 29
    bool IS_LOAD_EGL_EXT_client_sync : 1;                     // 30
    bool IS_LOAD_EGL_EXT_compositor : 1;                      // 31
    bool IS_LOAD_EGL_EXT_device_base : 1;                     // 32
    bool IS_LOAD_EGL_EXT_device_persistent_id : 1;            // 33
    bool IS_LOAD_EGL_EXT_image_dma_buf_import_modifiers : 1;  // 34
    bool IS_LOAD_EGL_EXT_output_base : 1;                     // 35
    bool IS_LOAD_EGL_EXT_platform_base : 1;                   // 36
    bool IS_LOAD_EGL_EXT_stream_consumer_egloutput : 1;       // 37
    bool IS_LOAD_EGL_EXT_surface_compression : 1;             // 38
    bool IS_LOAD_EGL_EXT_swap_buffers_with_damage : 1;        // 39
    bool IS_LOAD_EGL_EXT_sync_reuse : 1;                      // 40
    bool IS_LOAD_EGL_HI_clientpixmap : 1;                     // 41
    bool IS_LOAD_EGL_MESA_drm_image : 1;                      // 42
    bool IS_LOAD_EGL_MESA_image_dma_buf_export : 1;           // 43
    bool IS_LOAD_EGL_MESA_query_driver : 1;                   // 44
    bool IS_LOAD_EGL_NOK_swap_region : 1;                     // 45
    bool IS_LOAD_EGL_NOK_swap_region2 : 1;                    // 46
    bool IS_LOAD_EGL_NV_native_query : 1;                     // 47
    bool IS_LOAD_EGL_NV_post_sub_buffer : 1;                  // 48
    bool IS_LOAD_EGL_NV_stream_consumer_eglimage : 1;         // 49
    bool IS_LOAD_EGL_NV_stream_consumer_gltexture_yuv : 1;    // 50
    bool IS_LOAD_EGL_NV_stream_flush : 1;                     // 51
    bool IS_LOAD_EGL_NV_stream_metadata : 1;                  // 52
    bool IS_LOAD_EGL_NV_stream_reset : 1;                     // 53
    bool IS_LOAD_EGL_NV_stream_sync : 1;                      // 54
    bool IS_LOAD_EGL_NV_sync : 1;                             // 55
    bool IS_LOAD_EGL_NV_system_time : 1;                      // 56
    bool IS_LOAD_EGL_WL_bind_wayland_display : 1;             // 57
    bool IS_LOAD_EGL_WL_create_wayland_buffer_from_image : 1; // 58
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
  EGLLoaderLoader();
  // EGLAPI EGLBoolean EGLAPIENTRY eglChooseConfig (EGLDisplay dpy, const EGLint
  // *attrib_list, EGLConfig *configs, EGLint config_size, EGLint *num_config);
  VKFUNDEFINE(eglChooseConfig);
  // EGLAPI EGLBoolean EGLAPIENTRY eglCopyBuffers (EGLDisplay dpy, EGLSurface
  // surface, EGLNativePixmapType target);
  VKFUNDEFINE(eglCopyBuffers);
  // EGLAPI EGLContext EGLAPIENTRY eglCreateContext (EGLDisplay dpy, EGLConfig
  // config, EGLContext share_context, const EGLint *attrib_list);
  VKFUNDEFINE(eglCreateContext);
  // EGLAPI EGLSurface EGLAPIENTRY eglCreatePbufferSurface (EGLDisplay dpy,
  // EGLConfig config, const EGLint *attrib_list);
  VKFUNDEFINE(eglCreatePbufferSurface);
  // EGLAPI EGLSurface EGLAPIENTRY eglCreatePixmapSurface (EGLDisplay dpy,
  // EGLConfig config, EGLNativePixmapType pixmap, const EGLint *attrib_list);
  VKFUNDEFINE(eglCreatePixmapSurface);
  // EGLAPI EGLSurface EGLAPIENTRY eglCreateWindowSurface (EGLDisplay dpy,
  // EGLConfig config, EGLNativeWindowType win, const EGLint *attrib_list);
  VKFUNDEFINE(eglCreateWindowSurface);
  // EGLAPI EGLBoolean EGLAPIENTRY eglDestroyContext (EGLDisplay dpy, EGLContext
  // ctx);
  VKFUNDEFINE(eglDestroyContext);
  // EGLAPI EGLBoolean EGLAPIENTRY eglDestroySurface (EGLDisplay dpy, EGLSurface
  // surface);
  VKFUNDEFINE(eglDestroySurface);
  // EGLAPI EGLBoolean EGLAPIENTRY eglGetConfigAttrib (EGLDisplay dpy, EGLConfig
  // config, EGLint attribute, EGLint *value);
  VKFUNDEFINE(eglGetConfigAttrib);
  // EGLAPI EGLBoolean EGLAPIENTRY eglGetConfigs (EGLDisplay dpy, EGLConfig
  // *configs, EGLint config_size, EGLint *num_config);
  VKFUNDEFINE(eglGetConfigs);
  // EGLAPI EGLDisplay EGLAPIENTRY eglGetCurrentDisplay (void);
  VKFUNDEFINE(eglGetCurrentDisplay);
  // EGLAPI EGLSurface EGLAPIENTRY eglGetCurrentSurface (EGLint readdraw);
  VKFUNDEFINE(eglGetCurrentSurface);
  // EGLAPI EGLDisplay EGLAPIENTRY eglGetDisplay (EGLNativeDisplayType
  // display_id);
  VKFUNDEFINE(eglGetDisplay);
  // EGLAPI EGLint EGLAPIENTRY eglGetError (void);
  VKFUNDEFINE(eglGetError);
  // EGLAPI __eglMustCastToProperFunctionPointerType EGLAPIENTRY
  // eglGetProcAddress (const char *procname);
  VKFUNDEFINE(eglGetProcAddress);
  // EGLAPI EGLBoolean EGLAPIENTRY eglInitialize (EGLDisplay dpy, EGLint *major,
  // EGLint *minor);
  VKFUNDEFINE(eglInitialize);
  // EGLAPI EGLBoolean EGLAPIENTRY eglMakeCurrent (EGLDisplay dpy, EGLSurface
  // draw, EGLSurface read, EGLContext ctx);
  VKFUNDEFINE(eglMakeCurrent);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryContext (EGLDisplay dpy, EGLContext
  // ctx, EGLint attribute, EGLint *value);
  VKFUNDEFINE(eglQueryContext);
  // EGLAPI const char *EGLAPIENTRY eglQueryString (EGLDisplay dpy, EGLint
  // name);
  VKFUNDEFINE(eglQueryString);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQuerySurface (EGLDisplay dpy, EGLSurface
  // surface, EGLint attribute, EGLint *value);
  VKFUNDEFINE(eglQuerySurface);
  // EGLAPI EGLBoolean EGLAPIENTRY eglSwapBuffers (EGLDisplay dpy, EGLSurface
  // surface);
  VKFUNDEFINE(eglSwapBuffers);
  // EGLAPI EGLBoolean EGLAPIENTRY eglTerminate (EGLDisplay dpy);
  VKFUNDEFINE(eglTerminate);
  // EGLAPI EGLBoolean EGLAPIENTRY eglWaitGL (void);
  VKFUNDEFINE(eglWaitGL);
  // EGLAPI EGLBoolean EGLAPIENTRY eglWaitNative (EGLint engine);
  VKFUNDEFINE(eglWaitNative);
  // EGLAPI EGLBoolean EGLAPIENTRY eglBindTexImage (EGLDisplay dpy, EGLSurface
  // surface, EGLint buffer);
  VKFUNDEFINE(eglBindTexImage);
  // EGLAPI EGLBoolean EGLAPIENTRY eglReleaseTexImage (EGLDisplay dpy,
  // EGLSurface surface, EGLint buffer);
  VKFUNDEFINE(eglReleaseTexImage);
  // EGLAPI EGLBoolean EGLAPIENTRY eglSurfaceAttrib (EGLDisplay dpy, EGLSurface
  // surface, EGLint attribute, EGLint value);
  VKFUNDEFINE(eglSurfaceAttrib);
  // EGLAPI EGLBoolean EGLAPIENTRY eglSwapInterval (EGLDisplay dpy, EGLint
  // interval);
  VKFUNDEFINE(eglSwapInterval);
  // EGLAPI EGLBoolean EGLAPIENTRY eglBindAPI (EGLenum api);
  VKFUNDEFINE(eglBindAPI);
  // EGLAPI EGLenum EGLAPIENTRY eglQueryAPI (void);
  VKFUNDEFINE(eglQueryAPI);
  // EGLAPI EGLSurface EGLAPIENTRY eglCreatePbufferFromClientBuffer (EGLDisplay
  // dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const
  // EGLint *attrib_list);
  VKFUNDEFINE(eglCreatePbufferFromClientBuffer);
  // EGLAPI EGLBoolean EGLAPIENTRY eglReleaseThread (void);
  VKFUNDEFINE(eglReleaseThread);
  // EGLAPI EGLBoolean EGLAPIENTRY eglWaitClient (void);
  VKFUNDEFINE(eglWaitClient);
  // EGLAPI EGLContext EGLAPIENTRY eglGetCurrentContext (void);
  VKFUNDEFINE(eglGetCurrentContext);
  // EGLAPI EGLSync EGLAPIENTRY eglCreateSync (EGLDisplay dpy, EGLenum type,
  // const EGLAttrib *attrib_list);
  VKFUNDEFINE(eglCreateSync);
  // EGLAPI EGLBoolean EGLAPIENTRY eglDestroySync (EGLDisplay dpy, EGLSync
  // sync);
  VKFUNDEFINE(eglDestroySync);
  // EGLAPI EGLint EGLAPIENTRY eglClientWaitSync (EGLDisplay dpy, EGLSync sync,
  // EGLint flags, EGLTime timeout);
  VKFUNDEFINE(eglClientWaitSync);
  // EGLAPI EGLBoolean EGLAPIENTRY eglGetSyncAttrib (EGLDisplay dpy, EGLSync
  // sync, EGLint attribute, EGLAttrib *value);
  VKFUNDEFINE(eglGetSyncAttrib);
  // EGLAPI EGLImage EGLAPIENTRY eglCreateImage (EGLDisplay dpy, EGLContext ctx,
  // EGLenum target, EGLClientBuffer buffer, const EGLAttrib *attrib_list);
  VKFUNDEFINE(eglCreateImage);
  // EGLAPI EGLBoolean EGLAPIENTRY eglDestroyImage (EGLDisplay dpy, EGLImage
  // image);
  VKFUNDEFINE(eglDestroyImage);
  // EGLAPI EGLDisplay EGLAPIENTRY eglGetPlatformDisplay (EGLenum platform, void
  // *native_display, const EGLAttrib *attrib_list);
  VKFUNDEFINE(eglGetPlatformDisplay);
  // EGLAPI EGLSurface EGLAPIENTRY eglCreatePlatformWindowSurface (EGLDisplay
  // dpy, EGLConfig config, void *native_window, const EGLAttrib *attrib_list);
  VKFUNDEFINE(eglCreatePlatformWindowSurface);
  // EGLAPI EGLSurface EGLAPIENTRY eglCreatePlatformPixmapSurface (EGLDisplay
  // dpy, EGLConfig config, void *native_pixmap, const EGLAttrib *attrib_list);
  VKFUNDEFINE(eglCreatePlatformPixmapSurface);
  // EGLAPI EGLBoolean EGLAPIENTRY eglWaitSync (EGLDisplay dpy, EGLSync sync,
  // EGLint flags);
  VKFUNDEFINE(eglWaitSync);
  // EGLAPI EGLSyncKHR EGLAPIENTRY eglCreateSync64KHR (EGLDisplay dpy, EGLenum
  // type, const EGLAttribKHR *attrib_list);
  VKFUNDEFINE(eglCreateSync64KHR);
  // EGLAPI EGLint EGLAPIENTRY eglDebugMessageControlKHR (EGLDEBUGPROCKHR
  // callback, const EGLAttrib *attrib_list);
  VKFUNDEFINE(eglDebugMessageControlKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryDebugKHR (EGLint attribute, EGLAttrib
  // *value);
  VKFUNDEFINE(eglQueryDebugKHR);
  // EGLAPI EGLint EGLAPIENTRY eglLabelObjectKHR (EGLDisplay display, EGLenum
  // objectType, EGLObjectKHR object, EGLLabelKHR label);
  VKFUNDEFINE(eglLabelObjectKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryDisplayAttribKHR (EGLDisplay dpy,
  // EGLint name, EGLAttrib *value);
  VKFUNDEFINE(eglQueryDisplayAttribKHR);
  // EGLAPI EGLSyncKHR EGLAPIENTRY eglCreateSyncKHR (EGLDisplay dpy, EGLenum
  // type, const EGLint *attrib_list);
  VKFUNDEFINE(eglCreateSyncKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglDestroySyncKHR (EGLDisplay dpy, EGLSyncKHR
  // sync);
  VKFUNDEFINE(eglDestroySyncKHR);
  // EGLAPI EGLint EGLAPIENTRY eglClientWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR
  // sync, EGLint flags, EGLTimeKHR timeout);
  VKFUNDEFINE(eglClientWaitSyncKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglGetSyncAttribKHR (EGLDisplay dpy,
  // EGLSyncKHR sync, EGLint attribute, EGLint *value);
  VKFUNDEFINE(eglGetSyncAttribKHR);
  // EGLAPI EGLImageKHR EGLAPIENTRY eglCreateImageKHR (EGLDisplay dpy,
  // EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint
  // *attrib_list);
  VKFUNDEFINE(eglCreateImageKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglDestroyImageKHR (EGLDisplay dpy,
  // EGLImageKHR image);
  VKFUNDEFINE(eglDestroyImageKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglLockSurfaceKHR (EGLDisplay dpy, EGLSurface
  // surface, const EGLint *attrib_list);
  VKFUNDEFINE(eglLockSurfaceKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglUnlockSurfaceKHR (EGLDisplay dpy,
  // EGLSurface surface);
  VKFUNDEFINE(eglUnlockSurfaceKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQuerySurface64KHR (EGLDisplay dpy,
  // EGLSurface surface, EGLint attribute, EGLAttribKHR *value);
  VKFUNDEFINE(eglQuerySurface64KHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglSetDamageRegionKHR (EGLDisplay dpy,
  // EGLSurface surface, EGLint *rects, EGLint n_rects);
  VKFUNDEFINE(eglSetDamageRegionKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglSignalSyncKHR (EGLDisplay dpy, EGLSyncKHR
  // sync, EGLenum mode);
  VKFUNDEFINE(eglSignalSyncKHR);
  // EGLAPI EGLStreamKHR EGLAPIENTRY eglCreateStreamKHR (EGLDisplay dpy, const
  // EGLint *attrib_list);
  VKFUNDEFINE(eglCreateStreamKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglDestroyStreamKHR (EGLDisplay dpy,
  // EGLStreamKHR stream);
  VKFUNDEFINE(eglDestroyStreamKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglStreamAttribKHR (EGLDisplay dpy,
  // EGLStreamKHR stream, EGLenum attribute, EGLint value);
  VKFUNDEFINE(eglStreamAttribKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryStreamKHR (EGLDisplay dpy,
  // EGLStreamKHR stream, EGLenum attribute, EGLint *value);
  VKFUNDEFINE(eglQueryStreamKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryStreamu64KHR (EGLDisplay dpy,
  // EGLStreamKHR stream, EGLenum attribute, EGLuint64KHR *value);
  VKFUNDEFINE(eglQueryStreamu64KHR);
  // EGLAPI EGLStreamKHR EGLAPIENTRY eglCreateStreamAttribKHR (EGLDisplay dpy,
  // const EGLAttrib *attrib_list);
  VKFUNDEFINE(eglCreateStreamAttribKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglSetStreamAttribKHR (EGLDisplay dpy,
  // EGLStreamKHR stream, EGLenum attribute, EGLAttrib value);
  VKFUNDEFINE(eglSetStreamAttribKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryStreamAttribKHR (EGLDisplay dpy,
  // EGLStreamKHR stream, EGLenum attribute, EGLAttrib *value);
  VKFUNDEFINE(eglQueryStreamAttribKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglStreamConsumerAcquireAttribKHR (EGLDisplay
  // dpy, EGLStreamKHR stream, const EGLAttrib *attrib_list);
  VKFUNDEFINE(eglStreamConsumerAcquireAttribKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglStreamConsumerReleaseAttribKHR (EGLDisplay
  // dpy, EGLStreamKHR stream, const EGLAttrib *attrib_list);
  VKFUNDEFINE(eglStreamConsumerReleaseAttribKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglStreamConsumerGLTextureExternalKHR
  // (EGLDisplay dpy, EGLStreamKHR stream);
  VKFUNDEFINE(eglStreamConsumerGLTextureExternalKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglStreamConsumerAcquireKHR (EGLDisplay dpy,
  // EGLStreamKHR stream);
  VKFUNDEFINE(eglStreamConsumerAcquireKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglStreamConsumerReleaseKHR (EGLDisplay dpy,
  // EGLStreamKHR stream);
  VKFUNDEFINE(eglStreamConsumerReleaseKHR);
  // EGLAPI EGLNativeFileDescriptorKHR EGLAPIENTRY eglGetStreamFileDescriptorKHR
  // (EGLDisplay dpy, EGLStreamKHR stream);
  VKFUNDEFINE(eglGetStreamFileDescriptorKHR);
  // EGLAPI EGLStreamKHR EGLAPIENTRY eglCreateStreamFromFileDescriptorKHR
  // (EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor);
  VKFUNDEFINE(eglCreateStreamFromFileDescriptorKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryStreamTimeKHR (EGLDisplay dpy,
  // EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR *value);
  VKFUNDEFINE(eglQueryStreamTimeKHR);
  // EGLAPI EGLSurface EGLAPIENTRY eglCreateStreamProducerSurfaceKHR (EGLDisplay
  // dpy, EGLConfig config, EGLStreamKHR stream, const EGLint *attrib_list);
  VKFUNDEFINE(eglCreateStreamProducerSurfaceKHR);
  // EGLAPI EGLBoolean EGLAPIENTRY eglSwapBuffersWithDamageKHR (EGLDisplay dpy,
  // EGLSurface surface, const EGLint *rects, EGLint n_rects);
  VKFUNDEFINE(eglSwapBuffersWithDamageKHR);
  // EGLAPI EGLint EGLAPIENTRY eglWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR sync,
  // EGLint flags);
  VKFUNDEFINE(eglWaitSyncKHR);
  // EGLAPI void EGLAPIENTRY eglSetBlobCacheFuncsANDROID (EGLDisplay dpy,
  // EGLSetBlobFuncANDROID set, EGLGetBlobFuncANDROID get);
  VKFUNDEFINE(eglSetBlobCacheFuncsANDROID);
  // EGLAPI EGLClientBuffer EGLAPIENTRY eglCreateNativeClientBufferANDROID
  // (const EGLint *attrib_list);
  VKFUNDEFINE(eglCreateNativeClientBufferANDROID);
  // EGLAPI EGLBoolean EGLAPIENTRY eglGetCompositorTimingSupportedANDROID
  // (EGLDisplay dpy, EGLSurface surface, EGLint name);
  VKFUNDEFINE(eglGetCompositorTimingSupportedANDROID);
  // EGLAPI EGLBoolean EGLAPIENTRY eglGetCompositorTimingANDROID (EGLDisplay
  // dpy, EGLSurface surface, EGLint numTimestamps, const EGLint *names,
  // EGLnsecsANDROID *values);
  VKFUNDEFINE(eglGetCompositorTimingANDROID);
  // EGLAPI EGLBoolean EGLAPIENTRY eglGetNextFrameIdANDROID (EGLDisplay dpy,
  // EGLSurface surface, EGLuint64KHR *frameId);
  VKFUNDEFINE(eglGetNextFrameIdANDROID);
  // EGLAPI EGLBoolean EGLAPIENTRY eglGetFrameTimestampSupportedANDROID
  // (EGLDisplay dpy, EGLSurface surface, EGLint timestamp);
  VKFUNDEFINE(eglGetFrameTimestampSupportedANDROID);
  // EGLAPI EGLBoolean EGLAPIENTRY eglGetFrameTimestampsANDROID (EGLDisplay dpy,
  // EGLSurface surface, EGLuint64KHR frameId, EGLint numTimestamps, const
  // EGLint *timestamps, EGLnsecsANDROID *values);
  VKFUNDEFINE(eglGetFrameTimestampsANDROID);
  // EGLAPI EGLClientBuffer EGLAPIENTRY eglGetNativeClientBufferANDROID (const
  // struct AHardwareBuffer *buffer);
  VKFUNDEFINE(eglGetNativeClientBufferANDROID);
  // EGLAPI EGLint EGLAPIENTRY eglDupNativeFenceFDANDROID (EGLDisplay dpy,
  // EGLSyncKHR sync);
  VKFUNDEFINE(eglDupNativeFenceFDANDROID);
  // EGLAPI EGLBoolean EGLAPIENTRY eglPresentationTimeANDROID (EGLDisplay dpy,
  // EGLSurface surface, EGLnsecsANDROID time);
  VKFUNDEFINE(eglPresentationTimeANDROID);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQuerySurfacePointerANGLE (EGLDisplay dpy,
  // EGLSurface surface, EGLint attribute, void **value);
  VKFUNDEFINE(eglQuerySurfacePointerANGLE);
  // EGLAPI EGLBoolean EGLAPIENTRY eglGetMscRateANGLE (EGLDisplay dpy,
  // EGLSurface surface, EGLint *numerator, EGLint *denominator);
  VKFUNDEFINE(eglGetMscRateANGLE);
  // EGLAPI EGLBoolean EGLAPIENTRY eglClientSignalSyncEXT (EGLDisplay dpy,
  // EGLSync sync, const EGLAttrib *attrib_list);
  VKFUNDEFINE(eglClientSignalSyncEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglCompositorSetContextListEXT (const EGLint
  // *external_ref_ids, EGLint num_entries);
  VKFUNDEFINE(eglCompositorSetContextListEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglCompositorSetContextAttributesEXT (EGLint
  // external_ref_id, const EGLint *context_attributes, EGLint num_entries);
  VKFUNDEFINE(eglCompositorSetContextAttributesEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglCompositorSetWindowListEXT (EGLint
  // external_ref_id, const EGLint *external_win_ids, EGLint num_entries);
  VKFUNDEFINE(eglCompositorSetWindowListEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglCompositorSetWindowAttributesEXT (EGLint
  // external_win_id, const EGLint *window_attributes, EGLint num_entries);
  VKFUNDEFINE(eglCompositorSetWindowAttributesEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglCompositorBindTexWindowEXT (EGLint
  // external_win_id);
  VKFUNDEFINE(eglCompositorBindTexWindowEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglCompositorSetSizeEXT (EGLint
  // external_win_id, EGLint width, EGLint height);
  VKFUNDEFINE(eglCompositorSetSizeEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglCompositorSwapPolicyEXT (EGLint
  // external_win_id, EGLint policy);
  VKFUNDEFINE(eglCompositorSwapPolicyEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryDeviceAttribEXT (EGLDeviceEXT device,
  // EGLint attribute, EGLAttrib *value);
  VKFUNDEFINE(eglQueryDeviceAttribEXT);
  // EGLAPI const char *EGLAPIENTRY eglQueryDeviceStringEXT (EGLDeviceEXT
  // device, EGLint name);
  VKFUNDEFINE(eglQueryDeviceStringEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryDevicesEXT (EGLint max_devices,
  // EGLDeviceEXT *devices, EGLint *num_devices);
  VKFUNDEFINE(eglQueryDevicesEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryDisplayAttribEXT (EGLDisplay dpy,
  // EGLint attribute, EGLAttrib *value);
  VKFUNDEFINE(eglQueryDisplayAttribEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryDeviceBinaryEXT (EGLDeviceEXT device,
  // EGLint name, EGLint max_size, void *value, EGLint *size);
  VKFUNDEFINE(eglQueryDeviceBinaryEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryDmaBufFormatsEXT (EGLDisplay dpy,
  // EGLint max_formats, EGLint *formats, EGLint *num_formats);
  VKFUNDEFINE(eglQueryDmaBufFormatsEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryDmaBufModifiersEXT (EGLDisplay dpy,
  // EGLint format, EGLint max_modifiers, EGLuint64KHR *modifiers, EGLBoolean
  // *external_only, EGLint *num_modifiers);
  VKFUNDEFINE(eglQueryDmaBufModifiersEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglGetOutputLayersEXT (EGLDisplay dpy, const
  // EGLAttrib *attrib_list, EGLOutputLayerEXT *layers, EGLint max_layers,
  // EGLint *num_layers);
  VKFUNDEFINE(eglGetOutputLayersEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglGetOutputPortsEXT (EGLDisplay dpy, const
  // EGLAttrib *attrib_list, EGLOutputPortEXT *ports, EGLint max_ports, EGLint
  // *num_ports);
  VKFUNDEFINE(eglGetOutputPortsEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglOutputLayerAttribEXT (EGLDisplay dpy,
  // EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib value);
  VKFUNDEFINE(eglOutputLayerAttribEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryOutputLayerAttribEXT (EGLDisplay dpy,
  // EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib *value);
  VKFUNDEFINE(eglQueryOutputLayerAttribEXT);
  // EGLAPI const char *EGLAPIENTRY eglQueryOutputLayerStringEXT (EGLDisplay
  // dpy, EGLOutputLayerEXT layer, EGLint name);
  VKFUNDEFINE(eglQueryOutputLayerStringEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglOutputPortAttribEXT (EGLDisplay dpy,
  // EGLOutputPortEXT port, EGLint attribute, EGLAttrib value);
  VKFUNDEFINE(eglOutputPortAttribEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryOutputPortAttribEXT (EGLDisplay dpy,
  // EGLOutputPortEXT port, EGLint attribute, EGLAttrib *value);
  VKFUNDEFINE(eglQueryOutputPortAttribEXT);
  // EGLAPI const char *EGLAPIENTRY eglQueryOutputPortStringEXT (EGLDisplay dpy,
  // EGLOutputPortEXT port, EGLint name);
  VKFUNDEFINE(eglQueryOutputPortStringEXT);
  // EGLAPI EGLDisplay EGLAPIENTRY eglGetPlatformDisplayEXT (EGLenum platform,
  // void *native_display, const EGLint *attrib_list);
  VKFUNDEFINE(eglGetPlatformDisplayEXT);
  // EGLAPI EGLSurface EGLAPIENTRY eglCreatePlatformWindowSurfaceEXT (EGLDisplay
  // dpy, EGLConfig config, void *native_window, const EGLint *attrib_list);
  VKFUNDEFINE(eglCreatePlatformWindowSurfaceEXT);
  // EGLAPI EGLSurface EGLAPIENTRY eglCreatePlatformPixmapSurfaceEXT (EGLDisplay
  // dpy, EGLConfig config, void *native_pixmap, const EGLint *attrib_list);
  VKFUNDEFINE(eglCreatePlatformPixmapSurfaceEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglStreamConsumerOutputEXT (EGLDisplay dpy,
  // EGLStreamKHR stream, EGLOutputLayerEXT layer);
  VKFUNDEFINE(eglStreamConsumerOutputEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQuerySupportedCompressionRatesEXT
  // (EGLDisplay dpy, EGLConfig config, const EGLAttrib *attrib_list, EGLint
  // *rates, EGLint rate_size, EGLint *num_rates);
  VKFUNDEFINE(eglQuerySupportedCompressionRatesEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglSwapBuffersWithDamageEXT (EGLDisplay dpy,
  // EGLSurface surface, const EGLint *rects, EGLint n_rects);
  VKFUNDEFINE(eglSwapBuffersWithDamageEXT);
  // EGLAPI EGLBoolean EGLAPIENTRY eglUnsignalSyncEXT (EGLDisplay dpy, EGLSync
  // sync, const EGLAttrib *attrib_list);
  VKFUNDEFINE(eglUnsignalSyncEXT);
  // EGLAPI EGLSurface EGLAPIENTRY eglCreatePixmapSurfaceHI (EGLDisplay dpy,
  // EGLConfig config, struct EGLClientPixmapHI *pixmap);
  VKFUNDEFINE(eglCreatePixmapSurfaceHI);
  // EGLAPI EGLImageKHR EGLAPIENTRY eglCreateDRMImageMESA (EGLDisplay dpy, const
  // EGLint *attrib_list);
  VKFUNDEFINE(eglCreateDRMImageMESA);
  // EGLAPI EGLBoolean EGLAPIENTRY eglExportDRMImageMESA (EGLDisplay dpy,
  // EGLImageKHR image, EGLint *name, EGLint *handle, EGLint *stride);
  VKFUNDEFINE(eglExportDRMImageMESA);
  // EGLAPI EGLBoolean EGLAPIENTRY eglExportDMABUFImageQueryMESA (EGLDisplay
  // dpy, EGLImageKHR image, int *fourcc, int *num_planes, EGLuint64KHR
  // *modifiers);
  VKFUNDEFINE(eglExportDMABUFImageQueryMESA);
  // EGLAPI EGLBoolean EGLAPIENTRY eglExportDMABUFImageMESA (EGLDisplay dpy,
  // EGLImageKHR image, int *fds, EGLint *strides, EGLint *offsets);
  VKFUNDEFINE(eglExportDMABUFImageMESA);
  // EGLAPI char *EGLAPIENTRY eglGetDisplayDriverConfig (EGLDisplay dpy);
  VKFUNDEFINE(eglGetDisplayDriverConfig);
  // EGLAPI const char *EGLAPIENTRY eglGetDisplayDriverName (EGLDisplay dpy);
  VKFUNDEFINE(eglGetDisplayDriverName);
  // EGLAPI EGLBoolean EGLAPIENTRY eglSwapBuffersRegionNOK (EGLDisplay dpy,
  // EGLSurface surface, EGLint numRects, const EGLint *rects);
  VKFUNDEFINE(eglSwapBuffersRegionNOK);
  // EGLAPI EGLBoolean EGLAPIENTRY eglSwapBuffersRegion2NOK (EGLDisplay dpy,
  // EGLSurface surface, EGLint numRects, const EGLint *rects);
  VKFUNDEFINE(eglSwapBuffersRegion2NOK);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryNativeDisplayNV (EGLDisplay dpy,
  // EGLNativeDisplayType *display_id);
  VKFUNDEFINE(eglQueryNativeDisplayNV);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryNativeWindowNV (EGLDisplay dpy,
  // EGLSurface surf, EGLNativeWindowType *window);
  VKFUNDEFINE(eglQueryNativeWindowNV);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryNativePixmapNV (EGLDisplay dpy,
  // EGLSurface surf, EGLNativePixmapType *pixmap);
  VKFUNDEFINE(eglQueryNativePixmapNV);
  // EGLAPI EGLBoolean EGLAPIENTRY eglPostSubBufferNV (EGLDisplay dpy,
  // EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height);
  VKFUNDEFINE(eglPostSubBufferNV);
  // EGLAPI EGLBoolean EGLAPIENTRY eglStreamImageConsumerConnectNV (EGLDisplay
  // dpy, EGLStreamKHR stream, EGLint num_modifiers, const EGLuint64KHR
  // *modifiers, const EGLAttrib *attrib_list);
  VKFUNDEFINE(eglStreamImageConsumerConnectNV);
  // EGLAPI EGLint EGLAPIENTRY eglQueryStreamConsumerEventNV (EGLDisplay dpy,
  // EGLStreamKHR stream, EGLTime timeout, EGLenum *event, EGLAttrib *aux);
  VKFUNDEFINE(eglQueryStreamConsumerEventNV);
  // EGLAPI EGLBoolean EGLAPIENTRY eglStreamAcquireImageNV (EGLDisplay dpy,
  // EGLStreamKHR stream, EGLImage *pImage, EGLSync sync);
  VKFUNDEFINE(eglStreamAcquireImageNV);
  // EGLAPI EGLBoolean EGLAPIENTRY eglStreamReleaseImageNV (EGLDisplay dpy,
  // EGLStreamKHR stream, EGLImage image, EGLSync sync);
  VKFUNDEFINE(eglStreamReleaseImageNV);
  // EGLAPI EGLBoolean EGLAPIENTRY eglStreamConsumerGLTextureExternalAttribsNV
  // (EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib *attrib_list);
  VKFUNDEFINE(eglStreamConsumerGLTextureExternalAttribsNV);
  // EGLAPI EGLBoolean EGLAPIENTRY eglStreamFlushNV (EGLDisplay dpy,
  // EGLStreamKHR stream);
  VKFUNDEFINE(eglStreamFlushNV);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryDisplayAttribNV (EGLDisplay dpy,
  // EGLint attribute, EGLAttrib *value);
  VKFUNDEFINE(eglQueryDisplayAttribNV);
  // EGLAPI EGLBoolean EGLAPIENTRY eglSetStreamMetadataNV (EGLDisplay dpy,
  // EGLStreamKHR stream, EGLint n, EGLint offset, EGLint size, const void
  // *data);
  VKFUNDEFINE(eglSetStreamMetadataNV);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryStreamMetadataNV (EGLDisplay dpy,
  // EGLStreamKHR stream, EGLenum name, EGLint n, EGLint offset, EGLint size,
  // void *data);
  VKFUNDEFINE(eglQueryStreamMetadataNV);
  // EGLAPI EGLBoolean EGLAPIENTRY eglResetStreamNV (EGLDisplay dpy,
  // EGLStreamKHR stream);
  VKFUNDEFINE(eglResetStreamNV);
  // EGLAPI EGLSyncKHR EGLAPIENTRY eglCreateStreamSyncNV (EGLDisplay dpy,
  // EGLStreamKHR stream, EGLenum type, const EGLint *attrib_list);
  VKFUNDEFINE(eglCreateStreamSyncNV);
  // EGLAPI EGLSyncNV EGLAPIENTRY eglCreateFenceSyncNV (EGLDisplay dpy, EGLenum
  // condition, const EGLint *attrib_list);
  VKFUNDEFINE(eglCreateFenceSyncNV);
  // EGLAPI EGLBoolean EGLAPIENTRY eglDestroySyncNV (EGLSyncNV sync);
  VKFUNDEFINE(eglDestroySyncNV);
  // EGLAPI EGLBoolean EGLAPIENTRY eglFenceNV (EGLSyncNV sync);
  VKFUNDEFINE(eglFenceNV);
  // EGLAPI EGLint EGLAPIENTRY eglClientWaitSyncNV (EGLSyncNV sync, EGLint
  // flags, EGLTimeNV timeout);
  VKFUNDEFINE(eglClientWaitSyncNV);
  // EGLAPI EGLBoolean EGLAPIENTRY eglSignalSyncNV (EGLSyncNV sync, EGLenum
  // mode);
  VKFUNDEFINE(eglSignalSyncNV);
  // EGLAPI EGLBoolean EGLAPIENTRY eglGetSyncAttribNV (EGLSyncNV sync, EGLint
  // attribute, EGLint *value);
  VKFUNDEFINE(eglGetSyncAttribNV);
  // EGLAPI EGLuint64NV EGLAPIENTRY eglGetSystemTimeFrequencyNV (void);
  VKFUNDEFINE(eglGetSystemTimeFrequencyNV);
  // EGLAPI EGLuint64NV EGLAPIENTRY eglGetSystemTimeNV (void);
  VKFUNDEFINE(eglGetSystemTimeNV);
  // EGLAPI EGLBoolean EGLAPIENTRY eglBindWaylandDisplayWL (EGLDisplay dpy,
  // struct wl_display *display);
  VKFUNDEFINE(eglBindWaylandDisplayWL);
  // EGLAPI EGLBoolean EGLAPIENTRY eglUnbindWaylandDisplayWL (EGLDisplay dpy,
  // struct wl_display *display);
  VKFUNDEFINE(eglUnbindWaylandDisplayWL);
  // EGLAPI EGLBoolean EGLAPIENTRY eglQueryWaylandBufferWL (EGLDisplay dpy,
  // struct wl_resource *buffer, EGLint attribute, EGLint *value);
  VKFUNDEFINE(eglQueryWaylandBufferWL);
  // EGLAPI struct wl_buffer *EGLAPIENTRY eglCreateWaylandBufferFromImageWL
  // (EGLDisplay dpy, EGLImageKHR image);
  VKFUNDEFINE(eglCreateWaylandBufferFromImageWL);

  bool TRY_LOAD_EGL_VERSION_1_0();                         // 0
  bool TRY_LOAD_EGL_VERSION_1_1();                         // 1
  bool TRY_LOAD_EGL_VERSION_1_2();                         // 2
  bool TRY_LOAD_EGL_VERSION_1_4();                         // 3
  bool TRY_LOAD_EGL_VERSION_1_5();                         // 4
  bool TRY_LOAD_EGL_KHR_cl_event2();                       // 5
  bool TRY_LOAD_EGL_KHR_debug();                           // 6
  bool TRY_LOAD_EGL_KHR_display_reference();               // 7
  bool TRY_LOAD_EGL_KHR_fence_sync();                      // 8
  bool TRY_LOAD_EGL_KHR_image();                           // 9
  bool TRY_LOAD_EGL_KHR_lock_surface();                    // 10
  bool TRY_LOAD_EGL_KHR_lock_surface3();                   // 11
  bool TRY_LOAD_EGL_KHR_partial_update();                  // 12
  bool TRY_LOAD_EGL_KHR_reusable_sync();                   // 13
  bool TRY_LOAD_EGL_KHR_stream();                          // 14
  bool TRY_LOAD_EGL_KHR_stream_attrib();                   // 15
  bool TRY_LOAD_EGL_KHR_stream_consumer_gltexture();       // 16
  bool TRY_LOAD_EGL_KHR_stream_cross_process_fd();         // 17
  bool TRY_LOAD_EGL_KHR_stream_fifo();                     // 18
  bool TRY_LOAD_EGL_KHR_stream_producer_eglsurface();      // 19
  bool TRY_LOAD_EGL_KHR_swap_buffers_with_damage();        // 20
  bool TRY_LOAD_EGL_KHR_wait_sync();                       // 21
  bool TRY_LOAD_EGL_ANDROID_blob_cache();                  // 22
  bool TRY_LOAD_EGL_ANDROID_create_native_client_buffer(); // 23
  bool TRY_LOAD_EGL_ANDROID_get_frame_timestamps();        // 24
  bool TRY_LOAD_EGL_ANDROID_get_native_client_buffer();    // 25
  bool TRY_LOAD_EGL_ANDROID_native_fence_sync();           // 26
  bool TRY_LOAD_EGL_ANDROID_presentation_time();           // 27
  bool TRY_LOAD_EGL_ANGLE_query_surface_pointer();         // 28
  bool TRY_LOAD_EGL_ANGLE_sync_control_rate();             // 29
  bool TRY_LOAD_EGL_EXT_client_sync();                     // 30
  bool TRY_LOAD_EGL_EXT_compositor();                      // 31
  bool TRY_LOAD_EGL_EXT_device_base();                     // 32
  bool TRY_LOAD_EGL_EXT_device_persistent_id();            // 33
  bool TRY_LOAD_EGL_EXT_image_dma_buf_import_modifiers();  // 34
  bool TRY_LOAD_EGL_EXT_output_base();                     // 35
  bool TRY_LOAD_EGL_EXT_platform_base();                   // 36
  bool TRY_LOAD_EGL_EXT_stream_consumer_egloutput();       // 37
  bool TRY_LOAD_EGL_EXT_surface_compression();             // 38
  bool TRY_LOAD_EGL_EXT_swap_buffers_with_damage();        // 39
  bool TRY_LOAD_EGL_EXT_sync_reuse();                      // 40
  bool TRY_LOAD_EGL_HI_clientpixmap();                     // 41
  bool TRY_LOAD_EGL_MESA_drm_image();                      // 42
  bool TRY_LOAD_EGL_MESA_image_dma_buf_export();           // 43
  bool TRY_LOAD_EGL_MESA_query_driver();                   // 44
  bool TRY_LOAD_EGL_NOK_swap_region();                     // 45
  bool TRY_LOAD_EGL_NOK_swap_region2();                    // 46
  bool TRY_LOAD_EGL_NV_native_query();                     // 47
  bool TRY_LOAD_EGL_NV_post_sub_buffer();                  // 48
  bool TRY_LOAD_EGL_NV_stream_consumer_eglimage();         // 49
  bool TRY_LOAD_EGL_NV_stream_consumer_gltexture_yuv();    // 50
  bool TRY_LOAD_EGL_NV_stream_flush();                     // 51
  bool TRY_LOAD_EGL_NV_stream_metadata();                  // 52
  bool TRY_LOAD_EGL_NV_stream_reset();                     // 53
  bool TRY_LOAD_EGL_NV_stream_sync();                      // 54
  bool TRY_LOAD_EGL_NV_sync();                             // 55
  bool TRY_LOAD_EGL_NV_system_time();                      // 56
  bool TRY_LOAD_EGL_WL_bind_wayland_display();             // 57
  bool TRY_LOAD_EGL_WL_create_wayland_buffer_from_image(); // 58

  typedef bool (EGLLoaderLoader::*EXTLOADER)();
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
extern LIBHANNLE GetEGLLoaderLibHandle();
class EGLLoaderPHILoader : public EGLLoaderLoader {
public:
  LIBHANNLE libHandle;
  EGLLoaderPHILoader();
  bool init();
  static APIProc phiLoadFunc(void *userptr, std::string_view name);
};

#undef VKFUNDEFINE