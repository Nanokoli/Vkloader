// EGLAPI EGLBoolean EGLAPIENTRY eglChooseConfig (EGLDisplay dpy, const EGLint
// *attrib_list, EGLConfig *configs, EGLint config_size, EGLint *num_config);
#define EGlChooseConfig EGLLoadercontext->eglChooseConfig
// EGLAPI EGLBoolean EGLAPIENTRY eglCopyBuffers (EGLDisplay dpy, EGLSurface
// surface, EGLNativePixmapType target);
#define EGlCopyBuffers EGLLoadercontext->eglCopyBuffers
// EGLAPI EGLContext EGLAPIENTRY eglCreateContext (EGLDisplay dpy, EGLConfig
// config, EGLContext share_context, const EGLint *attrib_list);
#define EGlCreateContext EGLLoadercontext->eglCreateContext
// EGLAPI EGLSurface EGLAPIENTRY eglCreatePbufferSurface (EGLDisplay dpy,
// EGLConfig config, const EGLint *attrib_list);
#define EGlCreatePbufferSurface EGLLoadercontext->eglCreatePbufferSurface
// EGLAPI EGLSurface EGLAPIENTRY eglCreatePixmapSurface (EGLDisplay dpy,
// EGLConfig config, EGLNativePixmapType pixmap, const EGLint *attrib_list);
#define EGlCreatePixmapSurface EGLLoadercontext->eglCreatePixmapSurface
// EGLAPI EGLSurface EGLAPIENTRY eglCreateWindowSurface (EGLDisplay dpy,
// EGLConfig config, EGLNativeWindowType win, const EGLint *attrib_list);
#define EGlCreateWindowSurface EGLLoadercontext->eglCreateWindowSurface
// EGLAPI EGLBoolean EGLAPIENTRY eglDestroyContext (EGLDisplay dpy, EGLContext
// ctx);
#define EGlDestroyContext EGLLoadercontext->eglDestroyContext
// EGLAPI EGLBoolean EGLAPIENTRY eglDestroySurface (EGLDisplay dpy, EGLSurface
// surface);
#define EGlDestroySurface EGLLoadercontext->eglDestroySurface
// EGLAPI EGLBoolean EGLAPIENTRY eglGetConfigAttrib (EGLDisplay dpy, EGLConfig
// config, EGLint attribute, EGLint *value);
#define EGlGetConfigAttrib EGLLoadercontext->eglGetConfigAttrib
// EGLAPI EGLBoolean EGLAPIENTRY eglGetConfigs (EGLDisplay dpy, EGLConfig
// *configs, EGLint config_size, EGLint *num_config);
#define EGlGetConfigs EGLLoadercontext->eglGetConfigs
// EGLAPI EGLDisplay EGLAPIENTRY eglGetCurrentDisplay (void);
#define EGlGetCurrentDisplay EGLLoadercontext->eglGetCurrentDisplay
// EGLAPI EGLSurface EGLAPIENTRY eglGetCurrentSurface (EGLint readdraw);
#define EGlGetCurrentSurface EGLLoadercontext->eglGetCurrentSurface
// EGLAPI EGLDisplay EGLAPIENTRY eglGetDisplay (EGLNativeDisplayType
// display_id);
#define EGlGetDisplay EGLLoadercontext->eglGetDisplay
// EGLAPI EGLint EGLAPIENTRY eglGetError (void);
#define EGlGetError EGLLoadercontext->eglGetError
// EGLAPI __eglMustCastToProperFunctionPointerType EGLAPIENTRY eglGetProcAddress
// (const char *procname);
#define EGlGetProcAddress EGLLoadercontext->eglGetProcAddress
// EGLAPI EGLBoolean EGLAPIENTRY eglInitialize (EGLDisplay dpy, EGLint *major,
// EGLint *minor);
#define EGlInitialize EGLLoadercontext->eglInitialize
// EGLAPI EGLBoolean EGLAPIENTRY eglMakeCurrent (EGLDisplay dpy, EGLSurface
// draw, EGLSurface read, EGLContext ctx);
#define EGlMakeCurrent EGLLoadercontext->eglMakeCurrent
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryContext (EGLDisplay dpy, EGLContext
// ctx, EGLint attribute, EGLint *value);
#define EGlQueryContext EGLLoadercontext->eglQueryContext
// EGLAPI const char *EGLAPIENTRY eglQueryString (EGLDisplay dpy, EGLint name);
#define EGlQueryString EGLLoadercontext->eglQueryString
// EGLAPI EGLBoolean EGLAPIENTRY eglQuerySurface (EGLDisplay dpy, EGLSurface
// surface, EGLint attribute, EGLint *value);
#define EGlQuerySurface EGLLoadercontext->eglQuerySurface
// EGLAPI EGLBoolean EGLAPIENTRY eglSwapBuffers (EGLDisplay dpy, EGLSurface
// surface);
#define EGlSwapBuffers EGLLoadercontext->eglSwapBuffers
// EGLAPI EGLBoolean EGLAPIENTRY eglTerminate (EGLDisplay dpy);
#define EGlTerminate EGLLoadercontext->eglTerminate
// EGLAPI EGLBoolean EGLAPIENTRY eglWaitGL (void);
#define EGlWaitGL EGLLoadercontext->eglWaitGL
// EGLAPI EGLBoolean EGLAPIENTRY eglWaitNative (EGLint engine);
#define EGlWaitNative EGLLoadercontext->eglWaitNative
// EGLAPI EGLBoolean EGLAPIENTRY eglBindTexImage (EGLDisplay dpy, EGLSurface
// surface, EGLint buffer);
#define EGlBindTexImage EGLLoadercontext->eglBindTexImage
// EGLAPI EGLBoolean EGLAPIENTRY eglReleaseTexImage (EGLDisplay dpy, EGLSurface
// surface, EGLint buffer);
#define EGlReleaseTexImage EGLLoadercontext->eglReleaseTexImage
// EGLAPI EGLBoolean EGLAPIENTRY eglSurfaceAttrib (EGLDisplay dpy, EGLSurface
// surface, EGLint attribute, EGLint value);
#define EGlSurfaceAttrib EGLLoadercontext->eglSurfaceAttrib
// EGLAPI EGLBoolean EGLAPIENTRY eglSwapInterval (EGLDisplay dpy, EGLint
// interval);
#define EGlSwapInterval EGLLoadercontext->eglSwapInterval
// EGLAPI EGLBoolean EGLAPIENTRY eglBindAPI (EGLenum api);
#define EGlBindAPI EGLLoadercontext->eglBindAPI
// EGLAPI EGLenum EGLAPIENTRY eglQueryAPI (void);
#define EGlQueryAPI EGLLoadercontext->eglQueryAPI
// EGLAPI EGLSurface EGLAPIENTRY eglCreatePbufferFromClientBuffer (EGLDisplay
// dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint
// *attrib_list);
#define EGlCreatePbufferFromClientBuffer                                       \
  EGLLoadercontext->eglCreatePbufferFromClientBuffer
// EGLAPI EGLBoolean EGLAPIENTRY eglReleaseThread (void);
#define EGlReleaseThread EGLLoadercontext->eglReleaseThread
// EGLAPI EGLBoolean EGLAPIENTRY eglWaitClient (void);
#define EGlWaitClient EGLLoadercontext->eglWaitClient
// EGLAPI EGLContext EGLAPIENTRY eglGetCurrentContext (void);
#define EGlGetCurrentContext EGLLoadercontext->eglGetCurrentContext
// EGLAPI EGLSync EGLAPIENTRY eglCreateSync (EGLDisplay dpy, EGLenum type, const
// EGLAttrib *attrib_list);
#define EGlCreateSync EGLLoadercontext->eglCreateSync
// EGLAPI EGLBoolean EGLAPIENTRY eglDestroySync (EGLDisplay dpy, EGLSync sync);
#define EGlDestroySync EGLLoadercontext->eglDestroySync
// EGLAPI EGLint EGLAPIENTRY eglClientWaitSync (EGLDisplay dpy, EGLSync sync,
// EGLint flags, EGLTime timeout);
#define EGlClientWaitSync EGLLoadercontext->eglClientWaitSync
// EGLAPI EGLBoolean EGLAPIENTRY eglGetSyncAttrib (EGLDisplay dpy, EGLSync sync,
// EGLint attribute, EGLAttrib *value);
#define EGlGetSyncAttrib EGLLoadercontext->eglGetSyncAttrib
// EGLAPI EGLImage EGLAPIENTRY eglCreateImage (EGLDisplay dpy, EGLContext ctx,
// EGLenum target, EGLClientBuffer buffer, const EGLAttrib *attrib_list);
#define EGlCreateImage EGLLoadercontext->eglCreateImage
// EGLAPI EGLBoolean EGLAPIENTRY eglDestroyImage (EGLDisplay dpy, EGLImage
// image);
#define EGlDestroyImage EGLLoadercontext->eglDestroyImage
// EGLAPI EGLDisplay EGLAPIENTRY eglGetPlatformDisplay (EGLenum platform, void
// *native_display, const EGLAttrib *attrib_list);
#define EGlGetPlatformDisplay EGLLoadercontext->eglGetPlatformDisplay
// EGLAPI EGLSurface EGLAPIENTRY eglCreatePlatformWindowSurface (EGLDisplay dpy,
// EGLConfig config, void *native_window, const EGLAttrib *attrib_list);
#define EGlCreatePlatformWindowSurface                                         \
  EGLLoadercontext->eglCreatePlatformWindowSurface
// EGLAPI EGLSurface EGLAPIENTRY eglCreatePlatformPixmapSurface (EGLDisplay dpy,
// EGLConfig config, void *native_pixmap, const EGLAttrib *attrib_list);
#define EGlCreatePlatformPixmapSurface                                         \
  EGLLoadercontext->eglCreatePlatformPixmapSurface
// EGLAPI EGLBoolean EGLAPIENTRY eglWaitSync (EGLDisplay dpy, EGLSync sync,
// EGLint flags);
#define EGlWaitSync EGLLoadercontext->eglWaitSync
// EGLAPI EGLSyncKHR EGLAPIENTRY eglCreateSync64KHR (EGLDisplay dpy, EGLenum
// type, const EGLAttribKHR *attrib_list);
#define EGlCreateSync64KHR EGLLoadercontext->eglCreateSync64KHR
// EGLAPI EGLint EGLAPIENTRY eglDebugMessageControlKHR (EGLDEBUGPROCKHR
// callback, const EGLAttrib *attrib_list);
#define EGlDebugMessageControlKHR EGLLoadercontext->eglDebugMessageControlKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryDebugKHR (EGLint attribute, EGLAttrib
// *value);
#define EGlQueryDebugKHR EGLLoadercontext->eglQueryDebugKHR
// EGLAPI EGLint EGLAPIENTRY eglLabelObjectKHR (EGLDisplay display, EGLenum
// objectType, EGLObjectKHR object, EGLLabelKHR label);
#define EGlLabelObjectKHR EGLLoadercontext->eglLabelObjectKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryDisplayAttribKHR (EGLDisplay dpy,
// EGLint name, EGLAttrib *value);
#define EGlQueryDisplayAttribKHR EGLLoadercontext->eglQueryDisplayAttribKHR
// EGLAPI EGLSyncKHR EGLAPIENTRY eglCreateSyncKHR (EGLDisplay dpy, EGLenum type,
// const EGLint *attrib_list);
#define EGlCreateSyncKHR EGLLoadercontext->eglCreateSyncKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglDestroySyncKHR (EGLDisplay dpy, EGLSyncKHR
// sync);
#define EGlDestroySyncKHR EGLLoadercontext->eglDestroySyncKHR
// EGLAPI EGLint EGLAPIENTRY eglClientWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR
// sync, EGLint flags, EGLTimeKHR timeout);
#define EGlClientWaitSyncKHR EGLLoadercontext->eglClientWaitSyncKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglGetSyncAttribKHR (EGLDisplay dpy, EGLSyncKHR
// sync, EGLint attribute, EGLint *value);
#define EGlGetSyncAttribKHR EGLLoadercontext->eglGetSyncAttribKHR
// EGLAPI EGLImageKHR EGLAPIENTRY eglCreateImageKHR (EGLDisplay dpy, EGLContext
// ctx, EGLenum target, EGLClientBuffer buffer, const EGLint *attrib_list);
#define EGlCreateImageKHR EGLLoadercontext->eglCreateImageKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglDestroyImageKHR (EGLDisplay dpy, EGLImageKHR
// image);
#define EGlDestroyImageKHR EGLLoadercontext->eglDestroyImageKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglLockSurfaceKHR (EGLDisplay dpy, EGLSurface
// surface, const EGLint *attrib_list);
#define EGlLockSurfaceKHR EGLLoadercontext->eglLockSurfaceKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglUnlockSurfaceKHR (EGLDisplay dpy, EGLSurface
// surface);
#define EGlUnlockSurfaceKHR EGLLoadercontext->eglUnlockSurfaceKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglQuerySurface64KHR (EGLDisplay dpy,
// EGLSurface surface, EGLint attribute, EGLAttribKHR *value);
#define EGlQuerySurface64KHR EGLLoadercontext->eglQuerySurface64KHR
// EGLAPI EGLBoolean EGLAPIENTRY eglSetDamageRegionKHR (EGLDisplay dpy,
// EGLSurface surface, EGLint *rects, EGLint n_rects);
#define EGlSetDamageRegionKHR EGLLoadercontext->eglSetDamageRegionKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglSignalSyncKHR (EGLDisplay dpy, EGLSyncKHR
// sync, EGLenum mode);
#define EGlSignalSyncKHR EGLLoadercontext->eglSignalSyncKHR
// EGLAPI EGLStreamKHR EGLAPIENTRY eglCreateStreamKHR (EGLDisplay dpy, const
// EGLint *attrib_list);
#define EGlCreateStreamKHR EGLLoadercontext->eglCreateStreamKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglDestroyStreamKHR (EGLDisplay dpy,
// EGLStreamKHR stream);
#define EGlDestroyStreamKHR EGLLoadercontext->eglDestroyStreamKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglStreamAttribKHR (EGLDisplay dpy,
// EGLStreamKHR stream, EGLenum attribute, EGLint value);
#define EGlStreamAttribKHR EGLLoadercontext->eglStreamAttribKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryStreamKHR (EGLDisplay dpy, EGLStreamKHR
// stream, EGLenum attribute, EGLint *value);
#define EGlQueryStreamKHR EGLLoadercontext->eglQueryStreamKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryStreamu64KHR (EGLDisplay dpy,
// EGLStreamKHR stream, EGLenum attribute, EGLuint64KHR *value);
#define EGlQueryStreamu64KHR EGLLoadercontext->eglQueryStreamu64KHR
// EGLAPI EGLStreamKHR EGLAPIENTRY eglCreateStreamAttribKHR (EGLDisplay dpy,
// const EGLAttrib *attrib_list);
#define EGlCreateStreamAttribKHR EGLLoadercontext->eglCreateStreamAttribKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglSetStreamAttribKHR (EGLDisplay dpy,
// EGLStreamKHR stream, EGLenum attribute, EGLAttrib value);
#define EGlSetStreamAttribKHR EGLLoadercontext->eglSetStreamAttribKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryStreamAttribKHR (EGLDisplay dpy,
// EGLStreamKHR stream, EGLenum attribute, EGLAttrib *value);
#define EGlQueryStreamAttribKHR EGLLoadercontext->eglQueryStreamAttribKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglStreamConsumerAcquireAttribKHR (EGLDisplay
// dpy, EGLStreamKHR stream, const EGLAttrib *attrib_list);
#define EGlStreamConsumerAcquireAttribKHR                                      \
  EGLLoadercontext->eglStreamConsumerAcquireAttribKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglStreamConsumerReleaseAttribKHR (EGLDisplay
// dpy, EGLStreamKHR stream, const EGLAttrib *attrib_list);
#define EGlStreamConsumerReleaseAttribKHR                                      \
  EGLLoadercontext->eglStreamConsumerReleaseAttribKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglStreamConsumerGLTextureExternalKHR
// (EGLDisplay dpy, EGLStreamKHR stream);
#define EGlStreamConsumerGLTextureExternalKHR                                  \
  EGLLoadercontext->eglStreamConsumerGLTextureExternalKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglStreamConsumerAcquireKHR (EGLDisplay dpy,
// EGLStreamKHR stream);
#define EGlStreamConsumerAcquireKHR                                            \
  EGLLoadercontext->eglStreamConsumerAcquireKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglStreamConsumerReleaseKHR (EGLDisplay dpy,
// EGLStreamKHR stream);
#define EGlStreamConsumerReleaseKHR                                            \
  EGLLoadercontext->eglStreamConsumerReleaseKHR
// EGLAPI EGLNativeFileDescriptorKHR EGLAPIENTRY eglGetStreamFileDescriptorKHR
// (EGLDisplay dpy, EGLStreamKHR stream);
#define EGlGetStreamFileDescriptorKHR                                          \
  EGLLoadercontext->eglGetStreamFileDescriptorKHR
// EGLAPI EGLStreamKHR EGLAPIENTRY eglCreateStreamFromFileDescriptorKHR
// (EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor);
#define EGlCreateStreamFromFileDescriptorKHR                                   \
  EGLLoadercontext->eglCreateStreamFromFileDescriptorKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryStreamTimeKHR (EGLDisplay dpy,
// EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR *value);
#define EGlQueryStreamTimeKHR EGLLoadercontext->eglQueryStreamTimeKHR
// EGLAPI EGLSurface EGLAPIENTRY eglCreateStreamProducerSurfaceKHR (EGLDisplay
// dpy, EGLConfig config, EGLStreamKHR stream, const EGLint *attrib_list);
#define EGlCreateStreamProducerSurfaceKHR                                      \
  EGLLoadercontext->eglCreateStreamProducerSurfaceKHR
// EGLAPI EGLBoolean EGLAPIENTRY eglSwapBuffersWithDamageKHR (EGLDisplay dpy,
// EGLSurface surface, const EGLint *rects, EGLint n_rects);
#define EGlSwapBuffersWithDamageKHR                                            \
  EGLLoadercontext->eglSwapBuffersWithDamageKHR
// EGLAPI EGLint EGLAPIENTRY eglWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR sync,
// EGLint flags);
#define EGlWaitSyncKHR EGLLoadercontext->eglWaitSyncKHR
// EGLAPI void EGLAPIENTRY eglSetBlobCacheFuncsANDROID (EGLDisplay dpy,
// EGLSetBlobFuncANDROID set, EGLGetBlobFuncANDROID get);
#define EGlSetBlobCacheFuncsANDROID                                            \
  EGLLoadercontext->eglSetBlobCacheFuncsANDROID
// EGLAPI EGLClientBuffer EGLAPIENTRY eglCreateNativeClientBufferANDROID (const
// EGLint *attrib_list);
#define EGlCreateNativeClientBufferANDROID                                     \
  EGLLoadercontext->eglCreateNativeClientBufferANDROID
// EGLAPI EGLBoolean EGLAPIENTRY eglGetCompositorTimingSupportedANDROID
// (EGLDisplay dpy, EGLSurface surface, EGLint name);
#define EGlGetCompositorTimingSupportedANDROID                                 \
  EGLLoadercontext->eglGetCompositorTimingSupportedANDROID
// EGLAPI EGLBoolean EGLAPIENTRY eglGetCompositorTimingANDROID (EGLDisplay dpy,
// EGLSurface surface, EGLint numTimestamps, const EGLint *names,
// EGLnsecsANDROID *values);
#define EGlGetCompositorTimingANDROID                                          \
  EGLLoadercontext->eglGetCompositorTimingANDROID
// EGLAPI EGLBoolean EGLAPIENTRY eglGetNextFrameIdANDROID (EGLDisplay dpy,
// EGLSurface surface, EGLuint64KHR *frameId);
#define EGlGetNextFrameIdANDROID EGLLoadercontext->eglGetNextFrameIdANDROID
// EGLAPI EGLBoolean EGLAPIENTRY eglGetFrameTimestampSupportedANDROID
// (EGLDisplay dpy, EGLSurface surface, EGLint timestamp);
#define EGlGetFrameTimestampSupportedANDROID                                   \
  EGLLoadercontext->eglGetFrameTimestampSupportedANDROID
// EGLAPI EGLBoolean EGLAPIENTRY eglGetFrameTimestampsANDROID (EGLDisplay dpy,
// EGLSurface surface, EGLuint64KHR frameId, EGLint numTimestamps, const EGLint
// *timestamps, EGLnsecsANDROID *values);
#define EGlGetFrameTimestampsANDROID                                           \
  EGLLoadercontext->eglGetFrameTimestampsANDROID
// EGLAPI EGLClientBuffer EGLAPIENTRY eglGetNativeClientBufferANDROID (const
// struct AHardwareBuffer *buffer);
#define EGlGetNativeClientBufferANDROID                                        \
  EGLLoadercontext->eglGetNativeClientBufferANDROID
// EGLAPI EGLint EGLAPIENTRY eglDupNativeFenceFDANDROID (EGLDisplay dpy,
// EGLSyncKHR sync);
#define EGlDupNativeFenceFDANDROID EGLLoadercontext->eglDupNativeFenceFDANDROID
// EGLAPI EGLBoolean EGLAPIENTRY eglPresentationTimeANDROID (EGLDisplay dpy,
// EGLSurface surface, EGLnsecsANDROID time);
#define EGlPresentationTimeANDROID EGLLoadercontext->eglPresentationTimeANDROID
// EGLAPI EGLBoolean EGLAPIENTRY eglQuerySurfacePointerANGLE (EGLDisplay dpy,
// EGLSurface surface, EGLint attribute, void **value);
#define EGlQuerySurfacePointerANGLE                                            \
  EGLLoadercontext->eglQuerySurfacePointerANGLE
// EGLAPI EGLBoolean EGLAPIENTRY eglGetMscRateANGLE (EGLDisplay dpy, EGLSurface
// surface, EGLint *numerator, EGLint *denominator);
#define EGlGetMscRateANGLE EGLLoadercontext->eglGetMscRateANGLE
// EGLAPI EGLBoolean EGLAPIENTRY eglClientSignalSyncEXT (EGLDisplay dpy, EGLSync
// sync, const EGLAttrib *attrib_list);
#define EGlClientSignalSyncEXT EGLLoadercontext->eglClientSignalSyncEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglCompositorSetContextListEXT (const EGLint
// *external_ref_ids, EGLint num_entries);
#define EGlCompositorSetContextListEXT                                         \
  EGLLoadercontext->eglCompositorSetContextListEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglCompositorSetContextAttributesEXT (EGLint
// external_ref_id, const EGLint *context_attributes, EGLint num_entries);
#define EGlCompositorSetContextAttributesEXT                                   \
  EGLLoadercontext->eglCompositorSetContextAttributesEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglCompositorSetWindowListEXT (EGLint
// external_ref_id, const EGLint *external_win_ids, EGLint num_entries);
#define EGlCompositorSetWindowListEXT                                          \
  EGLLoadercontext->eglCompositorSetWindowListEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglCompositorSetWindowAttributesEXT (EGLint
// external_win_id, const EGLint *window_attributes, EGLint num_entries);
#define EGlCompositorSetWindowAttributesEXT                                    \
  EGLLoadercontext->eglCompositorSetWindowAttributesEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglCompositorBindTexWindowEXT (EGLint
// external_win_id);
#define EGlCompositorBindTexWindowEXT                                          \
  EGLLoadercontext->eglCompositorBindTexWindowEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglCompositorSetSizeEXT (EGLint
// external_win_id, EGLint width, EGLint height);
#define EGlCompositorSetSizeEXT EGLLoadercontext->eglCompositorSetSizeEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglCompositorSwapPolicyEXT (EGLint
// external_win_id, EGLint policy);
#define EGlCompositorSwapPolicyEXT EGLLoadercontext->eglCompositorSwapPolicyEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryDeviceAttribEXT (EGLDeviceEXT device,
// EGLint attribute, EGLAttrib *value);
#define EGlQueryDeviceAttribEXT EGLLoadercontext->eglQueryDeviceAttribEXT
// EGLAPI const char *EGLAPIENTRY eglQueryDeviceStringEXT (EGLDeviceEXT device,
// EGLint name);
#define EGlQueryDeviceStringEXT EGLLoadercontext->eglQueryDeviceStringEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryDevicesEXT (EGLint max_devices,
// EGLDeviceEXT *devices, EGLint *num_devices);
#define EGlQueryDevicesEXT EGLLoadercontext->eglQueryDevicesEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryDisplayAttribEXT (EGLDisplay dpy,
// EGLint attribute, EGLAttrib *value);
#define EGlQueryDisplayAttribEXT EGLLoadercontext->eglQueryDisplayAttribEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryDeviceBinaryEXT (EGLDeviceEXT device,
// EGLint name, EGLint max_size, void *value, EGLint *size);
#define EGlQueryDeviceBinaryEXT EGLLoadercontext->eglQueryDeviceBinaryEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryDmaBufFormatsEXT (EGLDisplay dpy,
// EGLint max_formats, EGLint *formats, EGLint *num_formats);
#define EGlQueryDmaBufFormatsEXT EGLLoadercontext->eglQueryDmaBufFormatsEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryDmaBufModifiersEXT (EGLDisplay dpy,
// EGLint format, EGLint max_modifiers, EGLuint64KHR *modifiers, EGLBoolean
// *external_only, EGLint *num_modifiers);
#define EGlQueryDmaBufModifiersEXT EGLLoadercontext->eglQueryDmaBufModifiersEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglGetOutputLayersEXT (EGLDisplay dpy, const
// EGLAttrib *attrib_list, EGLOutputLayerEXT *layers, EGLint max_layers, EGLint
// *num_layers);
#define EGlGetOutputLayersEXT EGLLoadercontext->eglGetOutputLayersEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglGetOutputPortsEXT (EGLDisplay dpy, const
// EGLAttrib *attrib_list, EGLOutputPortEXT *ports, EGLint max_ports, EGLint
// *num_ports);
#define EGlGetOutputPortsEXT EGLLoadercontext->eglGetOutputPortsEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglOutputLayerAttribEXT (EGLDisplay dpy,
// EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib value);
#define EGlOutputLayerAttribEXT EGLLoadercontext->eglOutputLayerAttribEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryOutputLayerAttribEXT (EGLDisplay dpy,
// EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib *value);
#define EGlQueryOutputLayerAttribEXT                                           \
  EGLLoadercontext->eglQueryOutputLayerAttribEXT
// EGLAPI const char *EGLAPIENTRY eglQueryOutputLayerStringEXT (EGLDisplay dpy,
// EGLOutputLayerEXT layer, EGLint name);
#define EGlQueryOutputLayerStringEXT                                           \
  EGLLoadercontext->eglQueryOutputLayerStringEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglOutputPortAttribEXT (EGLDisplay dpy,
// EGLOutputPortEXT port, EGLint attribute, EGLAttrib value);
#define EGlOutputPortAttribEXT EGLLoadercontext->eglOutputPortAttribEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryOutputPortAttribEXT (EGLDisplay dpy,
// EGLOutputPortEXT port, EGLint attribute, EGLAttrib *value);
#define EGlQueryOutputPortAttribEXT                                            \
  EGLLoadercontext->eglQueryOutputPortAttribEXT
// EGLAPI const char *EGLAPIENTRY eglQueryOutputPortStringEXT (EGLDisplay dpy,
// EGLOutputPortEXT port, EGLint name);
#define EGlQueryOutputPortStringEXT                                            \
  EGLLoadercontext->eglQueryOutputPortStringEXT
// EGLAPI EGLDisplay EGLAPIENTRY eglGetPlatformDisplayEXT (EGLenum platform,
// void *native_display, const EGLint *attrib_list);
#define EGlGetPlatformDisplayEXT EGLLoadercontext->eglGetPlatformDisplayEXT
// EGLAPI EGLSurface EGLAPIENTRY eglCreatePlatformWindowSurfaceEXT (EGLDisplay
// dpy, EGLConfig config, void *native_window, const EGLint *attrib_list);
#define EGlCreatePlatformWindowSurfaceEXT                                      \
  EGLLoadercontext->eglCreatePlatformWindowSurfaceEXT
// EGLAPI EGLSurface EGLAPIENTRY eglCreatePlatformPixmapSurfaceEXT (EGLDisplay
// dpy, EGLConfig config, void *native_pixmap, const EGLint *attrib_list);
#define EGlCreatePlatformPixmapSurfaceEXT                                      \
  EGLLoadercontext->eglCreatePlatformPixmapSurfaceEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglStreamConsumerOutputEXT (EGLDisplay dpy,
// EGLStreamKHR stream, EGLOutputLayerEXT layer);
#define EGlStreamConsumerOutputEXT EGLLoadercontext->eglStreamConsumerOutputEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglQuerySupportedCompressionRatesEXT
// (EGLDisplay dpy, EGLConfig config, const EGLAttrib *attrib_list, EGLint
// *rates, EGLint rate_size, EGLint *num_rates);
#define EGlQuerySupportedCompressionRatesEXT                                   \
  EGLLoadercontext->eglQuerySupportedCompressionRatesEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglSwapBuffersWithDamageEXT (EGLDisplay dpy,
// EGLSurface surface, const EGLint *rects, EGLint n_rects);
#define EGlSwapBuffersWithDamageEXT                                            \
  EGLLoadercontext->eglSwapBuffersWithDamageEXT
// EGLAPI EGLBoolean EGLAPIENTRY eglUnsignalSyncEXT (EGLDisplay dpy, EGLSync
// sync, const EGLAttrib *attrib_list);
#define EGlUnsignalSyncEXT EGLLoadercontext->eglUnsignalSyncEXT
// EGLAPI EGLSurface EGLAPIENTRY eglCreatePixmapSurfaceHI (EGLDisplay dpy,
// EGLConfig config, struct EGLClientPixmapHI *pixmap);
#define EGlCreatePixmapSurfaceHI EGLLoadercontext->eglCreatePixmapSurfaceHI
// EGLAPI EGLImageKHR EGLAPIENTRY eglCreateDRMImageMESA (EGLDisplay dpy, const
// EGLint *attrib_list);
#define EGlCreateDRMImageMESA EGLLoadercontext->eglCreateDRMImageMESA
// EGLAPI EGLBoolean EGLAPIENTRY eglExportDRMImageMESA (EGLDisplay dpy,
// EGLImageKHR image, EGLint *name, EGLint *handle, EGLint *stride);
#define EGlExportDRMImageMESA EGLLoadercontext->eglExportDRMImageMESA
// EGLAPI EGLBoolean EGLAPIENTRY eglExportDMABUFImageQueryMESA (EGLDisplay dpy,
// EGLImageKHR image, int *fourcc, int *num_planes, EGLuint64KHR *modifiers);
#define EGlExportDMABUFImageQueryMESA                                          \
  EGLLoadercontext->eglExportDMABUFImageQueryMESA
// EGLAPI EGLBoolean EGLAPIENTRY eglExportDMABUFImageMESA (EGLDisplay dpy,
// EGLImageKHR image, int *fds, EGLint *strides, EGLint *offsets);
#define EGlExportDMABUFImageMESA EGLLoadercontext->eglExportDMABUFImageMESA
// EGLAPI char *EGLAPIENTRY eglGetDisplayDriverConfig (EGLDisplay dpy);
#define EGlGetDisplayDriverConfig EGLLoadercontext->eglGetDisplayDriverConfig
// EGLAPI const char *EGLAPIENTRY eglGetDisplayDriverName (EGLDisplay dpy);
#define EGlGetDisplayDriverName EGLLoadercontext->eglGetDisplayDriverName
// EGLAPI EGLBoolean EGLAPIENTRY eglSwapBuffersRegionNOK (EGLDisplay dpy,
// EGLSurface surface, EGLint numRects, const EGLint *rects);
#define EGlSwapBuffersRegionNOK EGLLoadercontext->eglSwapBuffersRegionNOK
// EGLAPI EGLBoolean EGLAPIENTRY eglSwapBuffersRegion2NOK (EGLDisplay dpy,
// EGLSurface surface, EGLint numRects, const EGLint *rects);
#define EGlSwapBuffersRegion2NOK EGLLoadercontext->eglSwapBuffersRegion2NOK
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryNativeDisplayNV (EGLDisplay dpy,
// EGLNativeDisplayType *display_id);
#define EGlQueryNativeDisplayNV EGLLoadercontext->eglQueryNativeDisplayNV
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryNativeWindowNV (EGLDisplay dpy,
// EGLSurface surf, EGLNativeWindowType *window);
#define EGlQueryNativeWindowNV EGLLoadercontext->eglQueryNativeWindowNV
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryNativePixmapNV (EGLDisplay dpy,
// EGLSurface surf, EGLNativePixmapType *pixmap);
#define EGlQueryNativePixmapNV EGLLoadercontext->eglQueryNativePixmapNV
// EGLAPI EGLBoolean EGLAPIENTRY eglPostSubBufferNV (EGLDisplay dpy, EGLSurface
// surface, EGLint x, EGLint y, EGLint width, EGLint height);
#define EGlPostSubBufferNV EGLLoadercontext->eglPostSubBufferNV
// EGLAPI EGLBoolean EGLAPIENTRY eglStreamImageConsumerConnectNV (EGLDisplay
// dpy, EGLStreamKHR stream, EGLint num_modifiers, const EGLuint64KHR
// *modifiers, const EGLAttrib *attrib_list);
#define EGlStreamImageConsumerConnectNV                                        \
  EGLLoadercontext->eglStreamImageConsumerConnectNV
// EGLAPI EGLint EGLAPIENTRY eglQueryStreamConsumerEventNV (EGLDisplay dpy,
// EGLStreamKHR stream, EGLTime timeout, EGLenum *event, EGLAttrib *aux);
#define EGlQueryStreamConsumerEventNV                                          \
  EGLLoadercontext->eglQueryStreamConsumerEventNV
// EGLAPI EGLBoolean EGLAPIENTRY eglStreamAcquireImageNV (EGLDisplay dpy,
// EGLStreamKHR stream, EGLImage *pImage, EGLSync sync);
#define EGlStreamAcquireImageNV EGLLoadercontext->eglStreamAcquireImageNV
// EGLAPI EGLBoolean EGLAPIENTRY eglStreamReleaseImageNV (EGLDisplay dpy,
// EGLStreamKHR stream, EGLImage image, EGLSync sync);
#define EGlStreamReleaseImageNV EGLLoadercontext->eglStreamReleaseImageNV
// EGLAPI EGLBoolean EGLAPIENTRY eglStreamConsumerGLTextureExternalAttribsNV
// (EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib *attrib_list);
#define EGlStreamConsumerGLTextureExternalAttribsNV                            \
  EGLLoadercontext->eglStreamConsumerGLTextureExternalAttribsNV
// EGLAPI EGLBoolean EGLAPIENTRY eglStreamFlushNV (EGLDisplay dpy, EGLStreamKHR
// stream);
#define EGlStreamFlushNV EGLLoadercontext->eglStreamFlushNV
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryDisplayAttribNV (EGLDisplay dpy, EGLint
// attribute, EGLAttrib *value);
#define EGlQueryDisplayAttribNV EGLLoadercontext->eglQueryDisplayAttribNV
// EGLAPI EGLBoolean EGLAPIENTRY eglSetStreamMetadataNV (EGLDisplay dpy,
// EGLStreamKHR stream, EGLint n, EGLint offset, EGLint size, const void *data);
#define EGlSetStreamMetadataNV EGLLoadercontext->eglSetStreamMetadataNV
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryStreamMetadataNV (EGLDisplay dpy,
// EGLStreamKHR stream, EGLenum name, EGLint n, EGLint offset, EGLint size, void
// *data);
#define EGlQueryStreamMetadataNV EGLLoadercontext->eglQueryStreamMetadataNV
// EGLAPI EGLBoolean EGLAPIENTRY eglResetStreamNV (EGLDisplay dpy, EGLStreamKHR
// stream);
#define EGlResetStreamNV EGLLoadercontext->eglResetStreamNV
// EGLAPI EGLSyncKHR EGLAPIENTRY eglCreateStreamSyncNV (EGLDisplay dpy,
// EGLStreamKHR stream, EGLenum type, const EGLint *attrib_list);
#define EGlCreateStreamSyncNV EGLLoadercontext->eglCreateStreamSyncNV
// EGLAPI EGLSyncNV EGLAPIENTRY eglCreateFenceSyncNV (EGLDisplay dpy, EGLenum
// condition, const EGLint *attrib_list);
#define EGlCreateFenceSyncNV EGLLoadercontext->eglCreateFenceSyncNV
// EGLAPI EGLBoolean EGLAPIENTRY eglDestroySyncNV (EGLSyncNV sync);
#define EGlDestroySyncNV EGLLoadercontext->eglDestroySyncNV
// EGLAPI EGLBoolean EGLAPIENTRY eglFenceNV (EGLSyncNV sync);
#define EGlFenceNV EGLLoadercontext->eglFenceNV
// EGLAPI EGLint EGLAPIENTRY eglClientWaitSyncNV (EGLSyncNV sync, EGLint flags,
// EGLTimeNV timeout);
#define EGlClientWaitSyncNV EGLLoadercontext->eglClientWaitSyncNV
// EGLAPI EGLBoolean EGLAPIENTRY eglSignalSyncNV (EGLSyncNV sync, EGLenum mode);
#define EGlSignalSyncNV EGLLoadercontext->eglSignalSyncNV
// EGLAPI EGLBoolean EGLAPIENTRY eglGetSyncAttribNV (EGLSyncNV sync, EGLint
// attribute, EGLint *value);
#define EGlGetSyncAttribNV EGLLoadercontext->eglGetSyncAttribNV
// EGLAPI EGLuint64NV EGLAPIENTRY eglGetSystemTimeFrequencyNV (void);
#define EGlGetSystemTimeFrequencyNV                                            \
  EGLLoadercontext->eglGetSystemTimeFrequencyNV
// EGLAPI EGLuint64NV EGLAPIENTRY eglGetSystemTimeNV (void);
#define EGlGetSystemTimeNV EGLLoadercontext->eglGetSystemTimeNV
// EGLAPI EGLBoolean EGLAPIENTRY eglBindWaylandDisplayWL (EGLDisplay dpy, struct
// wl_display *display);
#define EGlBindWaylandDisplayWL EGLLoadercontext->eglBindWaylandDisplayWL
// EGLAPI EGLBoolean EGLAPIENTRY eglUnbindWaylandDisplayWL (EGLDisplay dpy,
// struct wl_display *display);
#define EGlUnbindWaylandDisplayWL EGLLoadercontext->eglUnbindWaylandDisplayWL
// EGLAPI EGLBoolean EGLAPIENTRY eglQueryWaylandBufferWL (EGLDisplay dpy, struct
// wl_resource *buffer, EGLint attribute, EGLint *value);
#define EGlQueryWaylandBufferWL EGLLoadercontext->eglQueryWaylandBufferWL
// EGLAPI struct wl_buffer *EGLAPIENTRY eglCreateWaylandBufferFromImageWL
// (EGLDisplay dpy, EGLImageKHR image);
#define EGlCreateWaylandBufferFromImageWL                                      \
  EGLLoadercontext->eglCreateWaylandBufferFromImageWL
