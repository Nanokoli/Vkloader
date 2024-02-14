// HANDLE WINAPI wglCreateBufferRegionARB (HDC hDC, int iLayerPlane, UINT
// uType);
#define WGlCreateBufferRegionARB WGLLoadercontext->wglCreateBufferRegionARB
// VOID WINAPI wglDeleteBufferRegionARB (HANDLE hRegion);
#define WGlDeleteBufferRegionARB WGLLoadercontext->wglDeleteBufferRegionARB
// BOOL WINAPI wglSaveBufferRegionARB (HANDLE hRegion, int x, int y, int width,
// int height);
#define WGlSaveBufferRegionARB WGLLoadercontext->wglSaveBufferRegionARB
// BOOL WINAPI wglRestoreBufferRegionARB (HANDLE hRegion, int x, int y, int
// width, int height, int xSrc, int ySrc);
#define WGlRestoreBufferRegionARB WGLLoadercontext->wglRestoreBufferRegionARB
// HGLRC WINAPI wglCreateContextAttribsARB (HDC hDC, HGLRC hShareContext, const
// int *attribList);
#define WGlCreateContextAttribsARB WGLLoadercontext->wglCreateContextAttribsARB
// const char *WINAPI wglGetExtensionsStringARB (HDC hdc);
#define WGlGetExtensionsStringARB WGLLoadercontext->wglGetExtensionsStringARB
// BOOL WINAPI wglMakeContextCurrentARB (HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
#define WGlMakeContextCurrentARB WGLLoadercontext->wglMakeContextCurrentARB
// HDC WINAPI wglGetCurrentReadDCARB (void);
#define WGlGetCurrentReadDCARB WGLLoadercontext->wglGetCurrentReadDCARB
// HPBUFFERARB WINAPI wglCreatePbufferARB (HDC hDC, int iPixelFormat, int
// iWidth, int iHeight, const int *piAttribList);
#define WGlCreatePbufferARB WGLLoadercontext->wglCreatePbufferARB
// HDC WINAPI wglGetPbufferDCARB (HPBUFFERARB hPbuffer);
#define WGlGetPbufferDCARB WGLLoadercontext->wglGetPbufferDCARB
// int WINAPI wglReleasePbufferDCARB (HPBUFFERARB hPbuffer, HDC hDC);
#define WGlReleasePbufferDCARB WGLLoadercontext->wglReleasePbufferDCARB
// BOOL WINAPI wglDestroyPbufferARB (HPBUFFERARB hPbuffer);
#define WGlDestroyPbufferARB WGLLoadercontext->wglDestroyPbufferARB
// BOOL WINAPI wglQueryPbufferARB (HPBUFFERARB hPbuffer, int iAttribute, int
// *piValue);
#define WGlQueryPbufferARB WGLLoadercontext->wglQueryPbufferARB
// BOOL WINAPI wglGetPixelFormatAttribivARB (HDC hdc, int iPixelFormat, int
// iLayerPlane, UINT nAttributes, const int *piAttributes, int *piValues);
#define WGlGetPixelFormatAttribivARB                                           \
  WGLLoadercontext->wglGetPixelFormatAttribivARB
// BOOL WINAPI wglGetPixelFormatAttribfvARB (HDC hdc, int iPixelFormat, int
// iLayerPlane, UINT nAttributes, const int *piAttributes, FLOAT *pfValues);
#define WGlGetPixelFormatAttribfvARB                                           \
  WGLLoadercontext->wglGetPixelFormatAttribfvARB
// BOOL WINAPI wglChoosePixelFormatARB (HDC hdc, const int *piAttribIList, const
// FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT *nNumFormats);
#define WGlChoosePixelFormatARB WGLLoadercontext->wglChoosePixelFormatARB
// BOOL WINAPI wglBindTexImageARB (HPBUFFERARB hPbuffer, int iBuffer);
#define WGlBindTexImageARB WGLLoadercontext->wglBindTexImageARB
// BOOL WINAPI wglReleaseTexImageARB (HPBUFFERARB hPbuffer, int iBuffer);
#define WGlReleaseTexImageARB WGLLoadercontext->wglReleaseTexImageARB
// BOOL WINAPI wglSetPbufferAttribARB (HPBUFFERARB hPbuffer, const int
// *piAttribList);
#define WGlSetPbufferAttribARB WGLLoadercontext->wglSetPbufferAttribARB
// BOOL WINAPI wglSetStereoEmitterState3DL (HDC hDC, UINT uState);
#define WGlSetStereoEmitterState3DL                                            \
  WGLLoadercontext->wglSetStereoEmitterState3DL
// UINT WINAPI wglGetGPUIDsAMD (UINT maxCount, UINT *ids);
#define WGlGetGPUIDsAMD WGLLoadercontext->wglGetGPUIDsAMD
// INT WINAPI wglGetGPUInfoAMD (UINT id, INT property, GLenum dataType, UINT
// size, void *data);
#define WGlGetGPUInfoAMD WGLLoadercontext->wglGetGPUInfoAMD
// UINT WINAPI wglGetContextGPUIDAMD (HGLRC hglrc);
#define WGlGetContextGPUIDAMD WGLLoadercontext->wglGetContextGPUIDAMD
// HGLRC WINAPI wglCreateAssociatedContextAMD (UINT id);
#define WGlCreateAssociatedContextAMD                                          \
  WGLLoadercontext->wglCreateAssociatedContextAMD
// HGLRC WINAPI wglCreateAssociatedContextAttribsAMD (UINT id, HGLRC
// hShareContext, const int *attribList);
#define WGlCreateAssociatedContextAttribsAMD                                   \
  WGLLoadercontext->wglCreateAssociatedContextAttribsAMD
// BOOL WINAPI wglDeleteAssociatedContextAMD (HGLRC hglrc);
#define WGlDeleteAssociatedContextAMD                                          \
  WGLLoadercontext->wglDeleteAssociatedContextAMD
// BOOL WINAPI wglMakeAssociatedContextCurrentAMD (HGLRC hglrc);
#define WGlMakeAssociatedContextCurrentAMD                                     \
  WGLLoadercontext->wglMakeAssociatedContextCurrentAMD
// HGLRC WINAPI wglGetCurrentAssociatedContextAMD (void);
#define WGlGetCurrentAssociatedContextAMD                                      \
  WGLLoadercontext->wglGetCurrentAssociatedContextAMD
// VOID WINAPI wglBlitContextFramebufferAMD (HGLRC dstCtx, GLint srcX0, GLint
// srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint
// dstY1, GLbitfield mask, GLenum filter);
#define WGlBlitContextFramebufferAMD                                           \
  WGLLoadercontext->wglBlitContextFramebufferAMD
// GLboolean WINAPI wglCreateDisplayColorTableEXT (GLushort id);
#define WGlCreateDisplayColorTableEXT                                          \
  WGLLoadercontext->wglCreateDisplayColorTableEXT
// GLboolean WINAPI wglLoadDisplayColorTableEXT (const GLushort *table, GLuint
// length);
#define WGlLoadDisplayColorTableEXT                                            \
  WGLLoadercontext->wglLoadDisplayColorTableEXT
// GLboolean WINAPI wglBindDisplayColorTableEXT (GLushort id);
#define WGlBindDisplayColorTableEXT                                            \
  WGLLoadercontext->wglBindDisplayColorTableEXT
// VOID WINAPI wglDestroyDisplayColorTableEXT (GLushort id);
#define WGlDestroyDisplayColorTableEXT                                         \
  WGLLoadercontext->wglDestroyDisplayColorTableEXT
// const char *WINAPI wglGetExtensionsStringEXT (void);
#define WGlGetExtensionsStringEXT WGLLoadercontext->wglGetExtensionsStringEXT
// BOOL WINAPI wglMakeContextCurrentEXT (HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
#define WGlMakeContextCurrentEXT WGLLoadercontext->wglMakeContextCurrentEXT
// HDC WINAPI wglGetCurrentReadDCEXT (void);
#define WGlGetCurrentReadDCEXT WGLLoadercontext->wglGetCurrentReadDCEXT
// HPBUFFEREXT WINAPI wglCreatePbufferEXT (HDC hDC, int iPixelFormat, int
// iWidth, int iHeight, const int *piAttribList);
#define WGlCreatePbufferEXT WGLLoadercontext->wglCreatePbufferEXT
// HDC WINAPI wglGetPbufferDCEXT (HPBUFFEREXT hPbuffer);
#define WGlGetPbufferDCEXT WGLLoadercontext->wglGetPbufferDCEXT
// int WINAPI wglReleasePbufferDCEXT (HPBUFFEREXT hPbuffer, HDC hDC);
#define WGlReleasePbufferDCEXT WGLLoadercontext->wglReleasePbufferDCEXT
// BOOL WINAPI wglDestroyPbufferEXT (HPBUFFEREXT hPbuffer);
#define WGlDestroyPbufferEXT WGLLoadercontext->wglDestroyPbufferEXT
// BOOL WINAPI wglQueryPbufferEXT (HPBUFFEREXT hPbuffer, int iAttribute, int
// *piValue);
#define WGlQueryPbufferEXT WGLLoadercontext->wglQueryPbufferEXT
// BOOL WINAPI wglGetPixelFormatAttribivEXT (HDC hdc, int iPixelFormat, int
// iLayerPlane, UINT nAttributes, int *piAttributes, int *piValues);
#define WGlGetPixelFormatAttribivEXT                                           \
  WGLLoadercontext->wglGetPixelFormatAttribivEXT
// BOOL WINAPI wglGetPixelFormatAttribfvEXT (HDC hdc, int iPixelFormat, int
// iLayerPlane, UINT nAttributes, int *piAttributes, FLOAT *pfValues);
#define WGlGetPixelFormatAttribfvEXT                                           \
  WGLLoadercontext->wglGetPixelFormatAttribfvEXT
// BOOL WINAPI wglChoosePixelFormatEXT (HDC hdc, const int *piAttribIList, const
// FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT *nNumFormats);
#define WGlChoosePixelFormatEXT WGLLoadercontext->wglChoosePixelFormatEXT
// BOOL WINAPI wglSwapIntervalEXT (int interval);
#define WGlSwapIntervalEXT WGLLoadercontext->wglSwapIntervalEXT
// int WINAPI wglGetSwapIntervalEXT (void);
#define WGlGetSwapIntervalEXT WGLLoadercontext->wglGetSwapIntervalEXT
// BOOL WINAPI wglGetDigitalVideoParametersI3D (HDC hDC, int iAttribute, int
// *piValue);
#define WGlGetDigitalVideoParametersI3D                                        \
  WGLLoadercontext->wglGetDigitalVideoParametersI3D
// BOOL WINAPI wglSetDigitalVideoParametersI3D (HDC hDC, int iAttribute, const
// int *piValue);
#define WGlSetDigitalVideoParametersI3D                                        \
  WGLLoadercontext->wglSetDigitalVideoParametersI3D
// BOOL WINAPI wglGetGammaTableParametersI3D (HDC hDC, int iAttribute, int
// *piValue);
#define WGlGetGammaTableParametersI3D                                          \
  WGLLoadercontext->wglGetGammaTableParametersI3D
// BOOL WINAPI wglSetGammaTableParametersI3D (HDC hDC, int iAttribute, const int
// *piValue);
#define WGlSetGammaTableParametersI3D                                          \
  WGLLoadercontext->wglSetGammaTableParametersI3D
// BOOL WINAPI wglGetGammaTableI3D (HDC hDC, int iEntries, USHORT *puRed, USHORT
// *puGreen, USHORT *puBlue);
#define WGlGetGammaTableI3D WGLLoadercontext->wglGetGammaTableI3D
// BOOL WINAPI wglSetGammaTableI3D (HDC hDC, int iEntries, const USHORT *puRed,
// const USHORT *puGreen, const USHORT *puBlue);
#define WGlSetGammaTableI3D WGLLoadercontext->wglSetGammaTableI3D
// BOOL WINAPI wglEnableGenlockI3D (HDC hDC);
#define WGlEnableGenlockI3D WGLLoadercontext->wglEnableGenlockI3D
// BOOL WINAPI wglDisableGenlockI3D (HDC hDC);
#define WGlDisableGenlockI3D WGLLoadercontext->wglDisableGenlockI3D
// BOOL WINAPI wglIsEnabledGenlockI3D (HDC hDC, BOOL *pFlag);
#define WGlIsEnabledGenlockI3D WGLLoadercontext->wglIsEnabledGenlockI3D
// BOOL WINAPI wglGenlockSourceI3D (HDC hDC, UINT uSource);
#define WGlGenlockSourceI3D WGLLoadercontext->wglGenlockSourceI3D
// BOOL WINAPI wglGetGenlockSourceI3D (HDC hDC, UINT *uSource);
#define WGlGetGenlockSourceI3D WGLLoadercontext->wglGetGenlockSourceI3D
// BOOL WINAPI wglGenlockSourceEdgeI3D (HDC hDC, UINT uEdge);
#define WGlGenlockSourceEdgeI3D WGLLoadercontext->wglGenlockSourceEdgeI3D
// BOOL WINAPI wglGetGenlockSourceEdgeI3D (HDC hDC, UINT *uEdge);
#define WGlGetGenlockSourceEdgeI3D WGLLoadercontext->wglGetGenlockSourceEdgeI3D
// BOOL WINAPI wglGenlockSampleRateI3D (HDC hDC, UINT uRate);
#define WGlGenlockSampleRateI3D WGLLoadercontext->wglGenlockSampleRateI3D
// BOOL WINAPI wglGetGenlockSampleRateI3D (HDC hDC, UINT *uRate);
#define WGlGetGenlockSampleRateI3D WGLLoadercontext->wglGetGenlockSampleRateI3D
// BOOL WINAPI wglGenlockSourceDelayI3D (HDC hDC, UINT uDelay);
#define WGlGenlockSourceDelayI3D WGLLoadercontext->wglGenlockSourceDelayI3D
// BOOL WINAPI wglGetGenlockSourceDelayI3D (HDC hDC, UINT *uDelay);
#define WGlGetGenlockSourceDelayI3D                                            \
  WGLLoadercontext->wglGetGenlockSourceDelayI3D
// BOOL WINAPI wglQueryGenlockMaxSourceDelayI3D (HDC hDC, UINT *uMaxLineDelay,
// UINT *uMaxPixelDelay);
#define WGlQueryGenlockMaxSourceDelayI3D                                       \
  WGLLoadercontext->wglQueryGenlockMaxSourceDelayI3D
// LPVOID WINAPI wglCreateImageBufferI3D (HDC hDC, DWORD dwSize, UINT uFlags);
#define WGlCreateImageBufferI3D WGLLoadercontext->wglCreateImageBufferI3D
// BOOL WINAPI wglDestroyImageBufferI3D (HDC hDC, LPVOID pAddress);
#define WGlDestroyImageBufferI3D WGLLoadercontext->wglDestroyImageBufferI3D
// BOOL WINAPI wglAssociateImageBufferEventsI3D (HDC hDC, const HANDLE *pEvent,
// const LPVOID *pAddress, const DWORD *pSize, UINT count);
#define WGlAssociateImageBufferEventsI3D                                       \
  WGLLoadercontext->wglAssociateImageBufferEventsI3D
// BOOL WINAPI wglReleaseImageBufferEventsI3D (HDC hDC, const LPVOID *pAddress,
// UINT count);
#define WGlReleaseImageBufferEventsI3D                                         \
  WGLLoadercontext->wglReleaseImageBufferEventsI3D
// BOOL WINAPI wglEnableFrameLockI3D (void);
#define WGlEnableFrameLockI3D WGLLoadercontext->wglEnableFrameLockI3D
// BOOL WINAPI wglDisableFrameLockI3D (void);
#define WGlDisableFrameLockI3D WGLLoadercontext->wglDisableFrameLockI3D
// BOOL WINAPI wglIsEnabledFrameLockI3D (BOOL *pFlag);
#define WGlIsEnabledFrameLockI3D WGLLoadercontext->wglIsEnabledFrameLockI3D
// BOOL WINAPI wglQueryFrameLockMasterI3D (BOOL *pFlag);
#define WGlQueryFrameLockMasterI3D WGLLoadercontext->wglQueryFrameLockMasterI3D
// BOOL WINAPI wglGetFrameUsageI3D (float *pUsage);
#define WGlGetFrameUsageI3D WGLLoadercontext->wglGetFrameUsageI3D
// BOOL WINAPI wglBeginFrameTrackingI3D (void);
#define WGlBeginFrameTrackingI3D WGLLoadercontext->wglBeginFrameTrackingI3D
// BOOL WINAPI wglEndFrameTrackingI3D (void);
#define WGlEndFrameTrackingI3D WGLLoadercontext->wglEndFrameTrackingI3D
// BOOL WINAPI wglQueryFrameTrackingI3D (DWORD *pFrameCount, DWORD
// *pMissedFrames, float *pLastMissedUsage);
#define WGlQueryFrameTrackingI3D WGLLoadercontext->wglQueryFrameTrackingI3D
// BOOL WINAPI wglDXSetResourceShareHandleNV (void *dxObject, HANDLE
// shareHandle);
#define WGlDXSetResourceShareHandleNV                                          \
  WGLLoadercontext->wglDXSetResourceShareHandleNV
// HANDLE WINAPI wglDXOpenDeviceNV (void *dxDevice);
#define WGlDXOpenDeviceNV WGLLoadercontext->wglDXOpenDeviceNV
// BOOL WINAPI wglDXCloseDeviceNV (HANDLE hDevice);
#define WGlDXCloseDeviceNV WGLLoadercontext->wglDXCloseDeviceNV
// HANDLE WINAPI wglDXRegisterObjectNV (HANDLE hDevice, void *dxObject, GLuint
// name, GLenum type, GLenum access);
#define WGlDXRegisterObjectNV WGLLoadercontext->wglDXRegisterObjectNV
// BOOL WINAPI wglDXUnregisterObjectNV (HANDLE hDevice, HANDLE hObject);
#define WGlDXUnregisterObjectNV WGLLoadercontext->wglDXUnregisterObjectNV
// BOOL WINAPI wglDXObjectAccessNV (HANDLE hObject, GLenum access);
#define WGlDXObjectAccessNV WGLLoadercontext->wglDXObjectAccessNV
// BOOL WINAPI wglDXLockObjectsNV (HANDLE hDevice, GLint count, HANDLE
// *hObjects);
#define WGlDXLockObjectsNV WGLLoadercontext->wglDXLockObjectsNV
// BOOL WINAPI wglDXUnlockObjectsNV (HANDLE hDevice, GLint count, HANDLE
// *hObjects);
#define WGlDXUnlockObjectsNV WGLLoadercontext->wglDXUnlockObjectsNV
// BOOL WINAPI wglCopyImageSubDataNV (HGLRC hSrcRC, GLuint srcName, GLenum
// srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC hDstRC,
// GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY,
// GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
#define WGlCopyImageSubDataNV WGLLoadercontext->wglCopyImageSubDataNV
// BOOL WINAPI wglDelayBeforeSwapNV (HDC hDC, GLfloat seconds);
#define WGlDelayBeforeSwapNV WGLLoadercontext->wglDelayBeforeSwapNV
// BOOL WINAPI wglEnumGpusNV (UINT iGpuIndex, HGPUNV *phGpu);
#define WGlEnumGpusNV WGLLoadercontext->wglEnumGpusNV
// BOOL WINAPI wglEnumGpuDevicesNV (HGPUNV hGpu, UINT iDeviceIndex, PGPU_DEVICE
// lpGpuDevice);
#define WGlEnumGpuDevicesNV WGLLoadercontext->wglEnumGpuDevicesNV
// HDC WINAPI wglCreateAffinityDCNV (const HGPUNV *phGpuList);
#define WGlCreateAffinityDCNV WGLLoadercontext->wglCreateAffinityDCNV
// BOOL WINAPI wglEnumGpusFromAffinityDCNV (HDC hAffinityDC, UINT iGpuIndex,
// HGPUNV *hGpu);
#define WGlEnumGpusFromAffinityDCNV                                            \
  WGLLoadercontext->wglEnumGpusFromAffinityDCNV
// BOOL WINAPI wglDeleteDCNV (HDC hdc);
#define WGlDeleteDCNV WGLLoadercontext->wglDeleteDCNV
// int WINAPI wglEnumerateVideoDevicesNV (HDC hDc, HVIDEOOUTPUTDEVICENV
// *phDeviceList);
#define WGlEnumerateVideoDevicesNV WGLLoadercontext->wglEnumerateVideoDevicesNV
// BOOL WINAPI wglBindVideoDeviceNV (HDC hDc, unsigned int uVideoSlot,
// HVIDEOOUTPUTDEVICENV hVideoDevice, const int *piAttribList);
#define WGlBindVideoDeviceNV WGLLoadercontext->wglBindVideoDeviceNV
// BOOL WINAPI wglQueryCurrentContextNV (int iAttribute, int *piValue);
#define WGlQueryCurrentContextNV WGLLoadercontext->wglQueryCurrentContextNV
// BOOL WINAPI wglJoinSwapGroupNV (HDC hDC, GLuint group);
#define WGlJoinSwapGroupNV WGLLoadercontext->wglJoinSwapGroupNV
// BOOL WINAPI wglBindSwapBarrierNV (GLuint group, GLuint barrier);
#define WGlBindSwapBarrierNV WGLLoadercontext->wglBindSwapBarrierNV
// BOOL WINAPI wglQuerySwapGroupNV (HDC hDC, GLuint *group, GLuint *barrier);
#define WGlQuerySwapGroupNV WGLLoadercontext->wglQuerySwapGroupNV
// BOOL WINAPI wglQueryMaxSwapGroupsNV (HDC hDC, GLuint *maxGroups, GLuint
// *maxBarriers);
#define WGlQueryMaxSwapGroupsNV WGLLoadercontext->wglQueryMaxSwapGroupsNV
// BOOL WINAPI wglQueryFrameCountNV (HDC hDC, GLuint *count);
#define WGlQueryFrameCountNV WGLLoadercontext->wglQueryFrameCountNV
// BOOL WINAPI wglResetFrameCountNV (HDC hDC);
#define WGlResetFrameCountNV WGLLoadercontext->wglResetFrameCountNV
// void *WINAPI wglAllocateMemoryNV (GLsizei size, GLfloat readfreq, GLfloat
// writefreq, GLfloat priority);
#define WGlAllocateMemoryNV WGLLoadercontext->wglAllocateMemoryNV
// void WINAPI wglFreeMemoryNV (void *pointer);
#define WGlFreeMemoryNV WGLLoadercontext->wglFreeMemoryNV
// BOOL WINAPI wglBindVideoCaptureDeviceNV (UINT uVideoSlot, HVIDEOINPUTDEVICENV
// hDevice);
#define WGlBindVideoCaptureDeviceNV                                            \
  WGLLoadercontext->wglBindVideoCaptureDeviceNV
// UINT WINAPI wglEnumerateVideoCaptureDevicesNV (HDC hDc, HVIDEOINPUTDEVICENV
// *phDeviceList);
#define WGlEnumerateVideoCaptureDevicesNV                                      \
  WGLLoadercontext->wglEnumerateVideoCaptureDevicesNV
// BOOL WINAPI wglLockVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV
// hDevice);
#define WGlLockVideoCaptureDeviceNV                                            \
  WGLLoadercontext->wglLockVideoCaptureDeviceNV
// BOOL WINAPI wglQueryVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV
// hDevice, int iAttribute, int *piValue);
#define WGlQueryVideoCaptureDeviceNV                                           \
  WGLLoadercontext->wglQueryVideoCaptureDeviceNV
// BOOL WINAPI wglReleaseVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV
// hDevice);
#define WGlReleaseVideoCaptureDeviceNV                                         \
  WGLLoadercontext->wglReleaseVideoCaptureDeviceNV
// BOOL WINAPI wglGetVideoDeviceNV (HDC hDC, int numDevices, HPVIDEODEV
// *hVideoDevice);
#define WGlGetVideoDeviceNV WGLLoadercontext->wglGetVideoDeviceNV
// BOOL WINAPI wglReleaseVideoDeviceNV (HPVIDEODEV hVideoDevice);
#define WGlReleaseVideoDeviceNV WGLLoadercontext->wglReleaseVideoDeviceNV
// BOOL WINAPI wglBindVideoImageNV (HPVIDEODEV hVideoDevice, HPBUFFERARB
// hPbuffer, int iVideoBuffer);
#define WGlBindVideoImageNV WGLLoadercontext->wglBindVideoImageNV
// BOOL WINAPI wglReleaseVideoImageNV (HPBUFFERARB hPbuffer, int iVideoBuffer);
#define WGlReleaseVideoImageNV WGLLoadercontext->wglReleaseVideoImageNV
// BOOL WINAPI wglSendPbufferToVideoNV (HPBUFFERARB hPbuffer, int iBufferType,
// unsigned long *pulCounterPbuffer, BOOL bBlock);
#define WGlSendPbufferToVideoNV WGLLoadercontext->wglSendPbufferToVideoNV
// BOOL WINAPI wglGetVideoInfoNV (HPVIDEODEV hpVideoDevice, unsigned long
// *pulCounterOutputPbuffer, unsigned long *pulCounterOutputVideo);
#define WGlGetVideoInfoNV WGLLoadercontext->wglGetVideoInfoNV
// BOOL WINAPI wglGetSyncValuesOML (HDC hdc, INT64 *ust, INT64 *msc, INT64
// *sbc);
#define WGlGetSyncValuesOML WGLLoadercontext->wglGetSyncValuesOML
// BOOL WINAPI wglGetMscRateOML (HDC hdc, INT32 *numerator, INT32 *denominator);
#define WGlGetMscRateOML WGLLoadercontext->wglGetMscRateOML
// INT64 WINAPI wglSwapBuffersMscOML (HDC hdc, INT64 target_msc, INT64 divisor,
// INT64 remainder);
#define WGlSwapBuffersMscOML WGLLoadercontext->wglSwapBuffersMscOML
// INT64 WINAPI wglSwapLayerBuffersMscOML (HDC hdc, INT fuPlanes, INT64
// target_msc, INT64 divisor, INT64 remainder);
#define WGlSwapLayerBuffersMscOML WGLLoadercontext->wglSwapLayerBuffersMscOML
// BOOL WINAPI wglWaitForMscOML (HDC hdc, INT64 target_msc, INT64 divisor, INT64
// remainder, INT64 *ust, INT64 *msc, INT64 *sbc);
#define WGlWaitForMscOML WGLLoadercontext->wglWaitForMscOML
// BOOL WINAPI wglWaitForSbcOML (HDC hdc, INT64 target_sbc, INT64 *ust, INT64
// *msc, INT64 *sbc);
#define WGlWaitForSbcOML WGLLoadercontext->wglWaitForSbcOML
// int WINAPI ChoosePixelFormat (HDC hDc, const PIXELFORMATDESCRIPTOR *pPfd);
#define CHoosePixelFormat WGLLoadercontext->ChoosePixelFormat
// int WINAPI DescribePixelFormat (HDC hdc, int ipfd, UINT cjpfd,
// PIXELFORMATDESCRIPTOR *ppfd);
#define DEscribePixelFormat WGLLoadercontext->DescribePixelFormat
// UINT WINAPI GetEnhMetaFilePixelFormat (HENHMETAFILE hemf, UINT cbBuffer,
// PIXELFORMATDESCRIPTOR *ppfd);
#define GEtEnhMetaFilePixelFormat WGLLoadercontext->GetEnhMetaFilePixelFormat
// int WINAPI GetPixelFormat (HDC hdc);
#define GEtPixelFormat WGLLoadercontext->GetPixelFormat
// BOOL WINAPI SetPixelFormat (HDC hdc, int ipfd, const PIXELFORMATDESCRIPTOR
// *ppfd);
#define SEtPixelFormat WGLLoadercontext->SetPixelFormat
// BOOL WINAPI SwapBuffers (HDC hdc);
#define SWapBuffers WGLLoadercontext->SwapBuffers
// BOOL WINAPI wglCopyContext (HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask);
#define WGlCopyContext WGLLoadercontext->wglCopyContext
// HGLRC WINAPI wglCreateContext (HDC hDc);
#define WGlCreateContext WGLLoadercontext->wglCreateContext
// HGLRC WINAPI wglCreateLayerContext (HDC hDc, int level);
#define WGlCreateLayerContext WGLLoadercontext->wglCreateLayerContext
// BOOL WINAPI wglDeleteContext (HGLRC oldContext);
#define WGlDeleteContext WGLLoadercontext->wglDeleteContext
// BOOL WINAPI wglDescribeLayerPlane (HDC hDc, int pixelFormat, int layerPlane,
// UINT nBytes, LAYERPLANEDESCRIPTOR *plpd);
#define WGlDescribeLayerPlane WGLLoadercontext->wglDescribeLayerPlane
// HGLRC WINAPI wglGetCurrentContext (void);
#define WGlGetCurrentContext WGLLoadercontext->wglGetCurrentContext
// HDC WINAPI wglGetCurrentDC (void);
#define WGlGetCurrentDC WGLLoadercontext->wglGetCurrentDC
// int WINAPI wglGetLayerPaletteEntries (HDC hdc, int iLayerPlane, int iStart,
// int cEntries, COLORREF *pcr);
#define WGlGetLayerPaletteEntries WGLLoadercontext->wglGetLayerPaletteEntries
// PROC WINAPI wglGetProcAddress (LPCSTR lpszProc);
#define WGlGetProcAddress WGLLoadercontext->wglGetProcAddress
// BOOL WINAPI wglMakeCurrent (HDC hDc, HGLRC newContext);
#define WGlMakeCurrent WGLLoadercontext->wglMakeCurrent
// BOOL WINAPI wglRealizeLayerPalette (HDC hdc, int iLayerPlane, BOOL bRealize);
#define WGlRealizeLayerPalette WGLLoadercontext->wglRealizeLayerPalette
// int WINAPI wglSetLayerPaletteEntries (HDC hdc, int iLayerPlane, int iStart,
// int cEntries, const COLORREF *pcr);
#define WGlSetLayerPaletteEntries WGLLoadercontext->wglSetLayerPaletteEntries
// BOOL WINAPI wglShareLists (HGLRC hrcSrvShare, HGLRC hrcSrvSource);
#define WGlShareLists WGLLoadercontext->wglShareLists
// BOOL WINAPI wglSwapLayerBuffers (HDC hdc, UINT fuFlags);
#define WGlSwapLayerBuffers WGLLoadercontext->wglSwapLayerBuffers
// BOOL WINAPI wglUseFontBitmaps (HDC hDC, DWORD first, DWORD count, DWORD
// listBase);
#define WGlUseFontBitmaps WGLLoadercontext->wglUseFontBitmaps
// BOOL WINAPI wglUseFontBitmapsA (HDC hDC, DWORD first, DWORD count, DWORD
// listBase);
#define WGlUseFontBitmapsA WGLLoadercontext->wglUseFontBitmapsA
// BOOL WINAPI wglUseFontBitmapsW (HDC hDC, DWORD first, DWORD count, DWORD
// listBase);
#define WGlUseFontBitmapsW WGLLoadercontext->wglUseFontBitmapsW
// BOOL WINAPI wglUseFontOutlines (HDC hDC, DWORD first, DWORD count, DWORD
// listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT
// lpgmf);
#define WGlUseFontOutlines WGLLoadercontext->wglUseFontOutlines
// BOOL WINAPI wglUseFontOutlinesA (HDC hDC, DWORD first, DWORD count, DWORD
// listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT
// lpgmf);
#define WGlUseFontOutlinesA WGLLoadercontext->wglUseFontOutlinesA
// BOOL WINAPI wglUseFontOutlinesW (HDC hDC, DWORD first, DWORD count, DWORD
// listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT
// lpgmf);
#define WGlUseFontOutlinesW WGLLoadercontext->wglUseFontOutlinesW
