#pragma once
#include "../PhiLoader.hpp"
#include <GL/wgl.h>
#include <GL/wglext.h>
typedef PFNWGLCREATEBUFFERREGIONARBPROC PFN_wglCreateBufferRegionARB;
typedef PFNWGLDELETEBUFFERREGIONARBPROC PFN_wglDeleteBufferRegionARB;
typedef PFNWGLSAVEBUFFERREGIONARBPROC PFN_wglSaveBufferRegionARB;
typedef PFNWGLRESTOREBUFFERREGIONARBPROC PFN_wglRestoreBufferRegionARB;
typedef PFNWGLCREATECONTEXTATTRIBSARBPROC PFN_wglCreateContextAttribsARB;
typedef PFNWGLGETEXTENSIONSSTRINGARBPROC PFN_wglGetExtensionsStringARB;
typedef PFNWGLMAKECONTEXTCURRENTARBPROC PFN_wglMakeContextCurrentARB;
typedef PFNWGLGETCURRENTREADDCARBPROC PFN_wglGetCurrentReadDCARB;
typedef PFNWGLCREATEPBUFFERARBPROC PFN_wglCreatePbufferARB;
typedef PFNWGLGETPBUFFERDCARBPROC PFN_wglGetPbufferDCARB;
typedef PFNWGLRELEASEPBUFFERDCARBPROC PFN_wglReleasePbufferDCARB;
typedef PFNWGLDESTROYPBUFFERARBPROC PFN_wglDestroyPbufferARB;
typedef PFNWGLQUERYPBUFFERARBPROC PFN_wglQueryPbufferARB;
typedef PFNWGLGETPIXELFORMATATTRIBIVARBPROC PFN_wglGetPixelFormatAttribivARB;
typedef PFNWGLGETPIXELFORMATATTRIBFVARBPROC PFN_wglGetPixelFormatAttribfvARB;
typedef PFNWGLCHOOSEPIXELFORMATARBPROC PFN_wglChoosePixelFormatARB;
typedef PFNWGLBINDTEXIMAGEARBPROC PFN_wglBindTexImageARB;
typedef PFNWGLRELEASETEXIMAGEARBPROC PFN_wglReleaseTexImageARB;
typedef PFNWGLSETPBUFFERATTRIBARBPROC PFN_wglSetPbufferAttribARB;
typedef PFNWGLSETSTEREOEMITTERSTATE3DLPROC PFN_wglSetStereoEmitterState3DL;
typedef PFNWGLGETGPUIDSAMDPROC PFN_wglGetGPUIDsAMD;
typedef PFNWGLGETGPUINFOAMDPROC PFN_wglGetGPUInfoAMD;
typedef PFNWGLGETCONTEXTGPUIDAMDPROC PFN_wglGetContextGPUIDAMD;
typedef PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC PFN_wglCreateAssociatedContextAMD;
typedef PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC
    PFN_wglCreateAssociatedContextAttribsAMD;
typedef PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC PFN_wglDeleteAssociatedContextAMD;
typedef PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC
    PFN_wglMakeAssociatedContextCurrentAMD;
typedef PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC
    PFN_wglGetCurrentAssociatedContextAMD;
typedef PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC PFN_wglBlitContextFramebufferAMD;
typedef PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC PFN_wglCreateDisplayColorTableEXT;
typedef PFNWGLLOADDISPLAYCOLORTABLEEXTPROC PFN_wglLoadDisplayColorTableEXT;
typedef PFNWGLBINDDISPLAYCOLORTABLEEXTPROC PFN_wglBindDisplayColorTableEXT;
typedef PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC
    PFN_wglDestroyDisplayColorTableEXT;
typedef PFNWGLGETEXTENSIONSSTRINGEXTPROC PFN_wglGetExtensionsStringEXT;
typedef PFNWGLMAKECONTEXTCURRENTEXTPROC PFN_wglMakeContextCurrentEXT;
typedef PFNWGLGETCURRENTREADDCEXTPROC PFN_wglGetCurrentReadDCEXT;
typedef PFNWGLCREATEPBUFFEREXTPROC PFN_wglCreatePbufferEXT;
typedef PFNWGLGETPBUFFERDCEXTPROC PFN_wglGetPbufferDCEXT;
typedef PFNWGLRELEASEPBUFFERDCEXTPROC PFN_wglReleasePbufferDCEXT;
typedef PFNWGLDESTROYPBUFFEREXTPROC PFN_wglDestroyPbufferEXT;
typedef PFNWGLQUERYPBUFFEREXTPROC PFN_wglQueryPbufferEXT;
typedef PFNWGLGETPIXELFORMATATTRIBIVEXTPROC PFN_wglGetPixelFormatAttribivEXT;
typedef PFNWGLGETPIXELFORMATATTRIBFVEXTPROC PFN_wglGetPixelFormatAttribfvEXT;
typedef PFNWGLCHOOSEPIXELFORMATEXTPROC PFN_wglChoosePixelFormatEXT;
typedef PFNWGLSWAPINTERVALEXTPROC PFN_wglSwapIntervalEXT;
typedef PFNWGLGETSWAPINTERVALEXTPROC PFN_wglGetSwapIntervalEXT;
typedef PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC
    PFN_wglGetDigitalVideoParametersI3D;
typedef PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC
    PFN_wglSetDigitalVideoParametersI3D;
typedef PFNWGLGETGAMMATABLEPARAMETERSI3DPROC PFN_wglGetGammaTableParametersI3D;
typedef PFNWGLSETGAMMATABLEPARAMETERSI3DPROC PFN_wglSetGammaTableParametersI3D;
typedef PFNWGLGETGAMMATABLEI3DPROC PFN_wglGetGammaTableI3D;
typedef PFNWGLSETGAMMATABLEI3DPROC PFN_wglSetGammaTableI3D;
typedef PFNWGLENABLEGENLOCKI3DPROC PFN_wglEnableGenlockI3D;
typedef PFNWGLDISABLEGENLOCKI3DPROC PFN_wglDisableGenlockI3D;
typedef PFNWGLISENABLEDGENLOCKI3DPROC PFN_wglIsEnabledGenlockI3D;
typedef PFNWGLGENLOCKSOURCEI3DPROC PFN_wglGenlockSourceI3D;
typedef PFNWGLGETGENLOCKSOURCEI3DPROC PFN_wglGetGenlockSourceI3D;
typedef PFNWGLGENLOCKSOURCEEDGEI3DPROC PFN_wglGenlockSourceEdgeI3D;
typedef PFNWGLGETGENLOCKSOURCEEDGEI3DPROC PFN_wglGetGenlockSourceEdgeI3D;
typedef PFNWGLGENLOCKSAMPLERATEI3DPROC PFN_wglGenlockSampleRateI3D;
typedef PFNWGLGETGENLOCKSAMPLERATEI3DPROC PFN_wglGetGenlockSampleRateI3D;
typedef PFNWGLGENLOCKSOURCEDELAYI3DPROC PFN_wglGenlockSourceDelayI3D;
typedef PFNWGLGETGENLOCKSOURCEDELAYI3DPROC PFN_wglGetGenlockSourceDelayI3D;
typedef PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC
    PFN_wglQueryGenlockMaxSourceDelayI3D;
typedef PFNWGLCREATEIMAGEBUFFERI3DPROC PFN_wglCreateImageBufferI3D;
typedef PFNWGLDESTROYIMAGEBUFFERI3DPROC PFN_wglDestroyImageBufferI3D;
typedef PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC
    PFN_wglAssociateImageBufferEventsI3D;
typedef PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC
    PFN_wglReleaseImageBufferEventsI3D;
typedef PFNWGLENABLEFRAMELOCKI3DPROC PFN_wglEnableFrameLockI3D;
typedef PFNWGLDISABLEFRAMELOCKI3DPROC PFN_wglDisableFrameLockI3D;
typedef PFNWGLISENABLEDFRAMELOCKI3DPROC PFN_wglIsEnabledFrameLockI3D;
typedef PFNWGLQUERYFRAMELOCKMASTERI3DPROC PFN_wglQueryFrameLockMasterI3D;
typedef PFNWGLGETFRAMEUSAGEI3DPROC PFN_wglGetFrameUsageI3D;
typedef PFNWGLBEGINFRAMETRACKINGI3DPROC PFN_wglBeginFrameTrackingI3D;
typedef PFNWGLENDFRAMETRACKINGI3DPROC PFN_wglEndFrameTrackingI3D;
typedef PFNWGLQUERYFRAMETRACKINGI3DPROC PFN_wglQueryFrameTrackingI3D;
typedef PFNWGLDXSETRESOURCESHAREHANDLENVPROC PFN_wglDXSetResourceShareHandleNV;
typedef PFNWGLDXOPENDEVICENVPROC PFN_wglDXOpenDeviceNV;
typedef PFNWGLDXCLOSEDEVICENVPROC PFN_wglDXCloseDeviceNV;
typedef PFNWGLDXREGISTEROBJECTNVPROC PFN_wglDXRegisterObjectNV;
typedef PFNWGLDXUNREGISTEROBJECTNVPROC PFN_wglDXUnregisterObjectNV;
typedef PFNWGLDXOBJECTACCESSNVPROC PFN_wglDXObjectAccessNV;
typedef PFNWGLDXLOCKOBJECTSNVPROC PFN_wglDXLockObjectsNV;
typedef PFNWGLDXUNLOCKOBJECTSNVPROC PFN_wglDXUnlockObjectsNV;
typedef PFNWGLCOPYIMAGESUBDATANVPROC PFN_wglCopyImageSubDataNV;
typedef PFNWGLDELAYBEFORESWAPNVPROC PFN_wglDelayBeforeSwapNV;
typedef PFNWGLENUMGPUSNVPROC PFN_wglEnumGpusNV;
typedef PFNWGLENUMGPUDEVICESNVPROC PFN_wglEnumGpuDevicesNV;
typedef PFNWGLCREATEAFFINITYDCNVPROC PFN_wglCreateAffinityDCNV;
typedef PFNWGLENUMGPUSFROMAFFINITYDCNVPROC PFN_wglEnumGpusFromAffinityDCNV;
typedef PFNWGLDELETEDCNVPROC PFN_wglDeleteDCNV;
typedef PFNWGLENUMERATEVIDEODEVICESNVPROC PFN_wglEnumerateVideoDevicesNV;
typedef PFNWGLBINDVIDEODEVICENVPROC PFN_wglBindVideoDeviceNV;
typedef PFNWGLQUERYCURRENTCONTEXTNVPROC PFN_wglQueryCurrentContextNV;
typedef PFNWGLJOINSWAPGROUPNVPROC PFN_wglJoinSwapGroupNV;
typedef PFNWGLBINDSWAPBARRIERNVPROC PFN_wglBindSwapBarrierNV;
typedef PFNWGLQUERYSWAPGROUPNVPROC PFN_wglQuerySwapGroupNV;
typedef PFNWGLQUERYMAXSWAPGROUPSNVPROC PFN_wglQueryMaxSwapGroupsNV;
typedef PFNWGLQUERYFRAMECOUNTNVPROC PFN_wglQueryFrameCountNV;
typedef PFNWGLRESETFRAMECOUNTNVPROC PFN_wglResetFrameCountNV;
typedef PFNWGLALLOCATEMEMORYNVPROC PFN_wglAllocateMemoryNV;
typedef PFNWGLFREEMEMORYNVPROC PFN_wglFreeMemoryNV;
typedef PFNWGLBINDVIDEOCAPTUREDEVICENVPROC PFN_wglBindVideoCaptureDeviceNV;
typedef PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC
    PFN_wglEnumerateVideoCaptureDevicesNV;
typedef PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC PFN_wglLockVideoCaptureDeviceNV;
typedef PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC PFN_wglQueryVideoCaptureDeviceNV;
typedef PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC
    PFN_wglReleaseVideoCaptureDeviceNV;
typedef PFNWGLGETVIDEODEVICENVPROC PFN_wglGetVideoDeviceNV;
typedef PFNWGLRELEASEVIDEODEVICENVPROC PFN_wglReleaseVideoDeviceNV;
typedef PFNWGLBINDVIDEOIMAGENVPROC PFN_wglBindVideoImageNV;
typedef PFNWGLRELEASEVIDEOIMAGENVPROC PFN_wglReleaseVideoImageNV;
typedef PFNWGLSENDPBUFFERTOVIDEONVPROC PFN_wglSendPbufferToVideoNV;
typedef PFNWGLGETVIDEOINFONVPROC PFN_wglGetVideoInfoNV;
typedef PFNWGLGETSYNCVALUESOMLPROC PFN_wglGetSyncValuesOML;
typedef PFNWGLGETMSCRATEOMLPROC PFN_wglGetMscRateOML;
typedef PFNWGLSWAPBUFFERSMSCOMLPROC PFN_wglSwapBuffersMscOML;
typedef PFNWGLSWAPLAYERBUFFERSMSCOMLPROC PFN_wglSwapLayerBuffersMscOML;
typedef PFNWGLWAITFORMSCOMLPROC PFN_wglWaitForMscOML;
typedef PFNWGLWAITFORSBCOMLPROC PFN_wglWaitForSbcOML;
typedef PFNCHOOSEPIXELFORMATPROC PFN_ChoosePixelFormat;
typedef PFNDESCRIBEPIXELFORMATPROC PFN_DescribePixelFormat;
typedef PFNGETENHMETAFILEPIXELFORMATPROC PFN_GetEnhMetaFilePixelFormat;
typedef PFNGETPIXELFORMATPROC PFN_GetPixelFormat;
typedef PFNSETPIXELFORMATPROC PFN_SetPixelFormat;
typedef PFNSWAPBUFFERSPROC PFN_SwapBuffers;
typedef PFNWGLCOPYCONTEXTPROC PFN_wglCopyContext;
typedef PFNWGLCREATECONTEXTPROC PFN_wglCreateContext;
typedef PFNWGLCREATELAYERCONTEXTPROC PFN_wglCreateLayerContext;
typedef PFNWGLDELETECONTEXTPROC PFN_wglDeleteContext;
typedef PFNWGLDESCRIBELAYERPLANEPROC PFN_wglDescribeLayerPlane;
typedef PFNWGLGETCURRENTCONTEXTPROC PFN_wglGetCurrentContext;
typedef PFNWGLGETCURRENTDCPROC PFN_wglGetCurrentDC;
typedef PFNWGLGETLAYERPALETTEENTRIESPROC PFN_wglGetLayerPaletteEntries;
typedef PFNWGLGETPROCADDRESSPROC PFN_wglGetProcAddress;
typedef PFNWGLMAKECURRENTPROC PFN_wglMakeCurrent;
typedef PFNWGLREALIZELAYERPALETTEPROC PFN_wglRealizeLayerPalette;
typedef PFNWGLSETLAYERPALETTEENTRIESPROC PFN_wglSetLayerPaletteEntries;
typedef PFNWGLSHARELISTSPROC PFN_wglShareLists;
typedef PFNWGLSWAPLAYERBUFFERSPROC PFN_wglSwapLayerBuffers;
typedef PFNWGLUSEFONTBITMAPSPROC PFN_wglUseFontBitmaps;
typedef PFNWGLUSEFONTBITMAPSAPROC PFN_wglUseFontBitmapsA;
typedef PFNWGLUSEFONTBITMAPSWPROC PFN_wglUseFontBitmapsW;
typedef PFNWGLUSEFONTOUTLINESPROC PFN_wglUseFontOutlines;
typedef PFNWGLUSEFONTOUTLINESAPROC PFN_wglUseFontOutlinesA;
typedef PFNWGLUSEFONTOUTLINESWPROC PFN_wglUseFontOutlinesW;
#define VKFUNDEFINE(NAME) PFN_##NAME NAME##;

class WGLLoaderLoader {
public:
  typedef APIProc (*UserptrLoadFunc)(void *userptr, std::string_view name);
  struct Flags : public LONGBITSET {
    Flags() : LONGBITSET(sizeof(Flags), 32) {}
    bool IS_LOAD_WGL_ARB_buffer_region : 1;         // 0
    bool IS_LOAD_WGL_ARB_create_context : 1;        // 1
    bool IS_LOAD_WGL_ARB_extensions_string : 1;     // 2
    bool IS_LOAD_WGL_ARB_make_current_read : 1;     // 3
    bool IS_LOAD_WGL_ARB_pbuffer : 1;               // 4
    bool IS_LOAD_WGL_ARB_pixel_format : 1;          // 5
    bool IS_LOAD_WGL_ARB_render_texture : 1;        // 6
    bool IS_LOAD_WGL_3DL_stereo_control : 1;        // 7
    bool IS_LOAD_WGL_AMD_gpu_association : 1;       // 8
    bool IS_LOAD_WGL_EXT_display_color_table : 1;   // 9
    bool IS_LOAD_WGL_EXT_extensions_string : 1;     // 10
    bool IS_LOAD_WGL_EXT_make_current_read : 1;     // 11
    bool IS_LOAD_WGL_EXT_pbuffer : 1;               // 12
    bool IS_LOAD_WGL_EXT_pixel_format : 1;          // 13
    bool IS_LOAD_WGL_EXT_swap_control : 1;          // 14
    bool IS_LOAD_WGL_I3D_digital_video_control : 1; // 15
    bool IS_LOAD_WGL_I3D_gamma : 1;                 // 16
    bool IS_LOAD_WGL_I3D_genlock : 1;               // 17
    bool IS_LOAD_WGL_I3D_image_buffer : 1;          // 18
    bool IS_LOAD_WGL_I3D_swap_frame_lock : 1;       // 19
    bool IS_LOAD_WGL_I3D_swap_frame_usage : 1;      // 20
    bool IS_LOAD_WGL_NV_DX_interop : 1;             // 21
    bool IS_LOAD_WGL_NV_copy_image : 1;             // 22
    bool IS_LOAD_WGL_NV_delay_before_swap : 1;      // 23
    bool IS_LOAD_WGL_NV_gpu_affinity : 1;           // 24
    bool IS_LOAD_WGL_NV_present_video : 1;          // 25
    bool IS_LOAD_WGL_NV_swap_group : 1;             // 26
    bool IS_LOAD_WGL_NV_vertex_array_range : 1;     // 27
    bool IS_LOAD_WGL_NV_video_capture : 1;          // 28
    bool IS_LOAD_WGL_NV_video_output : 1;           // 29
    bool IS_LOAD_WGL_OML_sync_control : 1;          // 30
    bool IS_LOAD_WGL_VERSION_1_0 : 1;               // 31
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
  WGLLoaderLoader();
  // HANDLE WINAPI wglCreateBufferRegionARB (HDC hDC, int iLayerPlane, UINT
  // uType);
  VKFUNDEFINE(wglCreateBufferRegionARB);
  // VOID WINAPI wglDeleteBufferRegionARB (HANDLE hRegion);
  VKFUNDEFINE(wglDeleteBufferRegionARB);
  // BOOL WINAPI wglSaveBufferRegionARB (HANDLE hRegion, int x, int y, int
  // width, int height);
  VKFUNDEFINE(wglSaveBufferRegionARB);
  // BOOL WINAPI wglRestoreBufferRegionARB (HANDLE hRegion, int x, int y, int
  // width, int height, int xSrc, int ySrc);
  VKFUNDEFINE(wglRestoreBufferRegionARB);
  // HGLRC WINAPI wglCreateContextAttribsARB (HDC hDC, HGLRC hShareContext,
  // const int *attribList);
  VKFUNDEFINE(wglCreateContextAttribsARB);
  // const char *WINAPI wglGetExtensionsStringARB (HDC hdc);
  VKFUNDEFINE(wglGetExtensionsStringARB);
  // BOOL WINAPI wglMakeContextCurrentARB (HDC hDrawDC, HDC hReadDC, HGLRC
  // hglrc);
  VKFUNDEFINE(wglMakeContextCurrentARB);
  // HDC WINAPI wglGetCurrentReadDCARB (void);
  VKFUNDEFINE(wglGetCurrentReadDCARB);
  // HPBUFFERARB WINAPI wglCreatePbufferARB (HDC hDC, int iPixelFormat, int
  // iWidth, int iHeight, const int *piAttribList);
  VKFUNDEFINE(wglCreatePbufferARB);
  // HDC WINAPI wglGetPbufferDCARB (HPBUFFERARB hPbuffer);
  VKFUNDEFINE(wglGetPbufferDCARB);
  // int WINAPI wglReleasePbufferDCARB (HPBUFFERARB hPbuffer, HDC hDC);
  VKFUNDEFINE(wglReleasePbufferDCARB);
  // BOOL WINAPI wglDestroyPbufferARB (HPBUFFERARB hPbuffer);
  VKFUNDEFINE(wglDestroyPbufferARB);
  // BOOL WINAPI wglQueryPbufferARB (HPBUFFERARB hPbuffer, int iAttribute, int
  // *piValue);
  VKFUNDEFINE(wglQueryPbufferARB);
  // BOOL WINAPI wglGetPixelFormatAttribivARB (HDC hdc, int iPixelFormat, int
  // iLayerPlane, UINT nAttributes, const int *piAttributes, int *piValues);
  VKFUNDEFINE(wglGetPixelFormatAttribivARB);
  // BOOL WINAPI wglGetPixelFormatAttribfvARB (HDC hdc, int iPixelFormat, int
  // iLayerPlane, UINT nAttributes, const int *piAttributes, FLOAT *pfValues);
  VKFUNDEFINE(wglGetPixelFormatAttribfvARB);
  // BOOL WINAPI wglChoosePixelFormatARB (HDC hdc, const int *piAttribIList,
  // const FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT
  // *nNumFormats);
  VKFUNDEFINE(wglChoosePixelFormatARB);
  // BOOL WINAPI wglBindTexImageARB (HPBUFFERARB hPbuffer, int iBuffer);
  VKFUNDEFINE(wglBindTexImageARB);
  // BOOL WINAPI wglReleaseTexImageARB (HPBUFFERARB hPbuffer, int iBuffer);
  VKFUNDEFINE(wglReleaseTexImageARB);
  // BOOL WINAPI wglSetPbufferAttribARB (HPBUFFERARB hPbuffer, const int
  // *piAttribList);
  VKFUNDEFINE(wglSetPbufferAttribARB);
  // BOOL WINAPI wglSetStereoEmitterState3DL (HDC hDC, UINT uState);
  VKFUNDEFINE(wglSetStereoEmitterState3DL);
  // UINT WINAPI wglGetGPUIDsAMD (UINT maxCount, UINT *ids);
  VKFUNDEFINE(wglGetGPUIDsAMD);
  // INT WINAPI wglGetGPUInfoAMD (UINT id, INT property, GLenum dataType, UINT
  // size, void *data);
  VKFUNDEFINE(wglGetGPUInfoAMD);
  // UINT WINAPI wglGetContextGPUIDAMD (HGLRC hglrc);
  VKFUNDEFINE(wglGetContextGPUIDAMD);
  // HGLRC WINAPI wglCreateAssociatedContextAMD (UINT id);
  VKFUNDEFINE(wglCreateAssociatedContextAMD);
  // HGLRC WINAPI wglCreateAssociatedContextAttribsAMD (UINT id, HGLRC
  // hShareContext, const int *attribList);
  VKFUNDEFINE(wglCreateAssociatedContextAttribsAMD);
  // BOOL WINAPI wglDeleteAssociatedContextAMD (HGLRC hglrc);
  VKFUNDEFINE(wglDeleteAssociatedContextAMD);
  // BOOL WINAPI wglMakeAssociatedContextCurrentAMD (HGLRC hglrc);
  VKFUNDEFINE(wglMakeAssociatedContextCurrentAMD);
  // HGLRC WINAPI wglGetCurrentAssociatedContextAMD (void);
  VKFUNDEFINE(wglGetCurrentAssociatedContextAMD);
  // VOID WINAPI wglBlitContextFramebufferAMD (HGLRC dstCtx, GLint srcX0, GLint
  // srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1,
  // GLint dstY1, GLbitfield mask, GLenum filter);
  VKFUNDEFINE(wglBlitContextFramebufferAMD);
  // GLboolean WINAPI wglCreateDisplayColorTableEXT (GLushort id);
  VKFUNDEFINE(wglCreateDisplayColorTableEXT);
  // GLboolean WINAPI wglLoadDisplayColorTableEXT (const GLushort *table, GLuint
  // length);
  VKFUNDEFINE(wglLoadDisplayColorTableEXT);
  // GLboolean WINAPI wglBindDisplayColorTableEXT (GLushort id);
  VKFUNDEFINE(wglBindDisplayColorTableEXT);
  // VOID WINAPI wglDestroyDisplayColorTableEXT (GLushort id);
  VKFUNDEFINE(wglDestroyDisplayColorTableEXT);
  // const char *WINAPI wglGetExtensionsStringEXT (void);
  VKFUNDEFINE(wglGetExtensionsStringEXT);
  // BOOL WINAPI wglMakeContextCurrentEXT (HDC hDrawDC, HDC hReadDC, HGLRC
  // hglrc);
  VKFUNDEFINE(wglMakeContextCurrentEXT);
  // HDC WINAPI wglGetCurrentReadDCEXT (void);
  VKFUNDEFINE(wglGetCurrentReadDCEXT);
  // HPBUFFEREXT WINAPI wglCreatePbufferEXT (HDC hDC, int iPixelFormat, int
  // iWidth, int iHeight, const int *piAttribList);
  VKFUNDEFINE(wglCreatePbufferEXT);
  // HDC WINAPI wglGetPbufferDCEXT (HPBUFFEREXT hPbuffer);
  VKFUNDEFINE(wglGetPbufferDCEXT);
  // int WINAPI wglReleasePbufferDCEXT (HPBUFFEREXT hPbuffer, HDC hDC);
  VKFUNDEFINE(wglReleasePbufferDCEXT);
  // BOOL WINAPI wglDestroyPbufferEXT (HPBUFFEREXT hPbuffer);
  VKFUNDEFINE(wglDestroyPbufferEXT);
  // BOOL WINAPI wglQueryPbufferEXT (HPBUFFEREXT hPbuffer, int iAttribute, int
  // *piValue);
  VKFUNDEFINE(wglQueryPbufferEXT);
  // BOOL WINAPI wglGetPixelFormatAttribivEXT (HDC hdc, int iPixelFormat, int
  // iLayerPlane, UINT nAttributes, int *piAttributes, int *piValues);
  VKFUNDEFINE(wglGetPixelFormatAttribivEXT);
  // BOOL WINAPI wglGetPixelFormatAttribfvEXT (HDC hdc, int iPixelFormat, int
  // iLayerPlane, UINT nAttributes, int *piAttributes, FLOAT *pfValues);
  VKFUNDEFINE(wglGetPixelFormatAttribfvEXT);
  // BOOL WINAPI wglChoosePixelFormatEXT (HDC hdc, const int *piAttribIList,
  // const FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT
  // *nNumFormats);
  VKFUNDEFINE(wglChoosePixelFormatEXT);
  // BOOL WINAPI wglSwapIntervalEXT (int interval);
  VKFUNDEFINE(wglSwapIntervalEXT);
  // int WINAPI wglGetSwapIntervalEXT (void);
  VKFUNDEFINE(wglGetSwapIntervalEXT);
  // BOOL WINAPI wglGetDigitalVideoParametersI3D (HDC hDC, int iAttribute, int
  // *piValue);
  VKFUNDEFINE(wglGetDigitalVideoParametersI3D);
  // BOOL WINAPI wglSetDigitalVideoParametersI3D (HDC hDC, int iAttribute, const
  // int *piValue);
  VKFUNDEFINE(wglSetDigitalVideoParametersI3D);
  // BOOL WINAPI wglGetGammaTableParametersI3D (HDC hDC, int iAttribute, int
  // *piValue);
  VKFUNDEFINE(wglGetGammaTableParametersI3D);
  // BOOL WINAPI wglSetGammaTableParametersI3D (HDC hDC, int iAttribute, const
  // int *piValue);
  VKFUNDEFINE(wglSetGammaTableParametersI3D);
  // BOOL WINAPI wglGetGammaTableI3D (HDC hDC, int iEntries, USHORT *puRed,
  // USHORT *puGreen, USHORT *puBlue);
  VKFUNDEFINE(wglGetGammaTableI3D);
  // BOOL WINAPI wglSetGammaTableI3D (HDC hDC, int iEntries, const USHORT
  // *puRed, const USHORT *puGreen, const USHORT *puBlue);
  VKFUNDEFINE(wglSetGammaTableI3D);
  // BOOL WINAPI wglEnableGenlockI3D (HDC hDC);
  VKFUNDEFINE(wglEnableGenlockI3D);
  // BOOL WINAPI wglDisableGenlockI3D (HDC hDC);
  VKFUNDEFINE(wglDisableGenlockI3D);
  // BOOL WINAPI wglIsEnabledGenlockI3D (HDC hDC, BOOL *pFlag);
  VKFUNDEFINE(wglIsEnabledGenlockI3D);
  // BOOL WINAPI wglGenlockSourceI3D (HDC hDC, UINT uSource);
  VKFUNDEFINE(wglGenlockSourceI3D);
  // BOOL WINAPI wglGetGenlockSourceI3D (HDC hDC, UINT *uSource);
  VKFUNDEFINE(wglGetGenlockSourceI3D);
  // BOOL WINAPI wglGenlockSourceEdgeI3D (HDC hDC, UINT uEdge);
  VKFUNDEFINE(wglGenlockSourceEdgeI3D);
  // BOOL WINAPI wglGetGenlockSourceEdgeI3D (HDC hDC, UINT *uEdge);
  VKFUNDEFINE(wglGetGenlockSourceEdgeI3D);
  // BOOL WINAPI wglGenlockSampleRateI3D (HDC hDC, UINT uRate);
  VKFUNDEFINE(wglGenlockSampleRateI3D);
  // BOOL WINAPI wglGetGenlockSampleRateI3D (HDC hDC, UINT *uRate);
  VKFUNDEFINE(wglGetGenlockSampleRateI3D);
  // BOOL WINAPI wglGenlockSourceDelayI3D (HDC hDC, UINT uDelay);
  VKFUNDEFINE(wglGenlockSourceDelayI3D);
  // BOOL WINAPI wglGetGenlockSourceDelayI3D (HDC hDC, UINT *uDelay);
  VKFUNDEFINE(wglGetGenlockSourceDelayI3D);
  // BOOL WINAPI wglQueryGenlockMaxSourceDelayI3D (HDC hDC, UINT *uMaxLineDelay,
  // UINT *uMaxPixelDelay);
  VKFUNDEFINE(wglQueryGenlockMaxSourceDelayI3D);
  // LPVOID WINAPI wglCreateImageBufferI3D (HDC hDC, DWORD dwSize, UINT uFlags);
  VKFUNDEFINE(wglCreateImageBufferI3D);
  // BOOL WINAPI wglDestroyImageBufferI3D (HDC hDC, LPVOID pAddress);
  VKFUNDEFINE(wglDestroyImageBufferI3D);
  // BOOL WINAPI wglAssociateImageBufferEventsI3D (HDC hDC, const HANDLE
  // *pEvent, const LPVOID *pAddress, const DWORD *pSize, UINT count);
  VKFUNDEFINE(wglAssociateImageBufferEventsI3D);
  // BOOL WINAPI wglReleaseImageBufferEventsI3D (HDC hDC, const LPVOID
  // *pAddress, UINT count);
  VKFUNDEFINE(wglReleaseImageBufferEventsI3D);
  // BOOL WINAPI wglEnableFrameLockI3D (void);
  VKFUNDEFINE(wglEnableFrameLockI3D);
  // BOOL WINAPI wglDisableFrameLockI3D (void);
  VKFUNDEFINE(wglDisableFrameLockI3D);
  // BOOL WINAPI wglIsEnabledFrameLockI3D (BOOL *pFlag);
  VKFUNDEFINE(wglIsEnabledFrameLockI3D);
  // BOOL WINAPI wglQueryFrameLockMasterI3D (BOOL *pFlag);
  VKFUNDEFINE(wglQueryFrameLockMasterI3D);
  // BOOL WINAPI wglGetFrameUsageI3D (float *pUsage);
  VKFUNDEFINE(wglGetFrameUsageI3D);
  // BOOL WINAPI wglBeginFrameTrackingI3D (void);
  VKFUNDEFINE(wglBeginFrameTrackingI3D);
  // BOOL WINAPI wglEndFrameTrackingI3D (void);
  VKFUNDEFINE(wglEndFrameTrackingI3D);
  // BOOL WINAPI wglQueryFrameTrackingI3D (DWORD *pFrameCount, DWORD
  // *pMissedFrames, float *pLastMissedUsage);
  VKFUNDEFINE(wglQueryFrameTrackingI3D);
  // BOOL WINAPI wglDXSetResourceShareHandleNV (void *dxObject, HANDLE
  // shareHandle);
  VKFUNDEFINE(wglDXSetResourceShareHandleNV);
  // HANDLE WINAPI wglDXOpenDeviceNV (void *dxDevice);
  VKFUNDEFINE(wglDXOpenDeviceNV);
  // BOOL WINAPI wglDXCloseDeviceNV (HANDLE hDevice);
  VKFUNDEFINE(wglDXCloseDeviceNV);
  // HANDLE WINAPI wglDXRegisterObjectNV (HANDLE hDevice, void *dxObject, GLuint
  // name, GLenum type, GLenum access);
  VKFUNDEFINE(wglDXRegisterObjectNV);
  // BOOL WINAPI wglDXUnregisterObjectNV (HANDLE hDevice, HANDLE hObject);
  VKFUNDEFINE(wglDXUnregisterObjectNV);
  // BOOL WINAPI wglDXObjectAccessNV (HANDLE hObject, GLenum access);
  VKFUNDEFINE(wglDXObjectAccessNV);
  // BOOL WINAPI wglDXLockObjectsNV (HANDLE hDevice, GLint count, HANDLE
  // *hObjects);
  VKFUNDEFINE(wglDXLockObjectsNV);
  // BOOL WINAPI wglDXUnlockObjectsNV (HANDLE hDevice, GLint count, HANDLE
  // *hObjects);
  VKFUNDEFINE(wglDXUnlockObjectsNV);
  // BOOL WINAPI wglCopyImageSubDataNV (HGLRC hSrcRC, GLuint srcName, GLenum
  // srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC
  // hDstRC, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint
  // dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
  VKFUNDEFINE(wglCopyImageSubDataNV);
  // BOOL WINAPI wglDelayBeforeSwapNV (HDC hDC, GLfloat seconds);
  VKFUNDEFINE(wglDelayBeforeSwapNV);
  // BOOL WINAPI wglEnumGpusNV (UINT iGpuIndex, HGPUNV *phGpu);
  VKFUNDEFINE(wglEnumGpusNV);
  // BOOL WINAPI wglEnumGpuDevicesNV (HGPUNV hGpu, UINT iDeviceIndex,
  // PGPU_DEVICE lpGpuDevice);
  VKFUNDEFINE(wglEnumGpuDevicesNV);
  // HDC WINAPI wglCreateAffinityDCNV (const HGPUNV *phGpuList);
  VKFUNDEFINE(wglCreateAffinityDCNV);
  // BOOL WINAPI wglEnumGpusFromAffinityDCNV (HDC hAffinityDC, UINT iGpuIndex,
  // HGPUNV *hGpu);
  VKFUNDEFINE(wglEnumGpusFromAffinityDCNV);
  // BOOL WINAPI wglDeleteDCNV (HDC hdc);
  VKFUNDEFINE(wglDeleteDCNV);
  // int WINAPI wglEnumerateVideoDevicesNV (HDC hDc, HVIDEOOUTPUTDEVICENV
  // *phDeviceList);
  VKFUNDEFINE(wglEnumerateVideoDevicesNV);
  // BOOL WINAPI wglBindVideoDeviceNV (HDC hDc, unsigned int uVideoSlot,
  // HVIDEOOUTPUTDEVICENV hVideoDevice, const int *piAttribList);
  VKFUNDEFINE(wglBindVideoDeviceNV);
  // BOOL WINAPI wglQueryCurrentContextNV (int iAttribute, int *piValue);
  VKFUNDEFINE(wglQueryCurrentContextNV);
  // BOOL WINAPI wglJoinSwapGroupNV (HDC hDC, GLuint group);
  VKFUNDEFINE(wglJoinSwapGroupNV);
  // BOOL WINAPI wglBindSwapBarrierNV (GLuint group, GLuint barrier);
  VKFUNDEFINE(wglBindSwapBarrierNV);
  // BOOL WINAPI wglQuerySwapGroupNV (HDC hDC, GLuint *group, GLuint *barrier);
  VKFUNDEFINE(wglQuerySwapGroupNV);
  // BOOL WINAPI wglQueryMaxSwapGroupsNV (HDC hDC, GLuint *maxGroups, GLuint
  // *maxBarriers);
  VKFUNDEFINE(wglQueryMaxSwapGroupsNV);
  // BOOL WINAPI wglQueryFrameCountNV (HDC hDC, GLuint *count);
  VKFUNDEFINE(wglQueryFrameCountNV);
  // BOOL WINAPI wglResetFrameCountNV (HDC hDC);
  VKFUNDEFINE(wglResetFrameCountNV);
  // void *WINAPI wglAllocateMemoryNV (GLsizei size, GLfloat readfreq, GLfloat
  // writefreq, GLfloat priority);
  VKFUNDEFINE(wglAllocateMemoryNV);
  // void WINAPI wglFreeMemoryNV (void *pointer);
  VKFUNDEFINE(wglFreeMemoryNV);
  // BOOL WINAPI wglBindVideoCaptureDeviceNV (UINT uVideoSlot,
  // HVIDEOINPUTDEVICENV hDevice);
  VKFUNDEFINE(wglBindVideoCaptureDeviceNV);
  // UINT WINAPI wglEnumerateVideoCaptureDevicesNV (HDC hDc, HVIDEOINPUTDEVICENV
  // *phDeviceList);
  VKFUNDEFINE(wglEnumerateVideoCaptureDevicesNV);
  // BOOL WINAPI wglLockVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV
  // hDevice);
  VKFUNDEFINE(wglLockVideoCaptureDeviceNV);
  // BOOL WINAPI wglQueryVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV
  // hDevice, int iAttribute, int *piValue);
  VKFUNDEFINE(wglQueryVideoCaptureDeviceNV);
  // BOOL WINAPI wglReleaseVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV
  // hDevice);
  VKFUNDEFINE(wglReleaseVideoCaptureDeviceNV);
  // BOOL WINAPI wglGetVideoDeviceNV (HDC hDC, int numDevices, HPVIDEODEV
  // *hVideoDevice);
  VKFUNDEFINE(wglGetVideoDeviceNV);
  // BOOL WINAPI wglReleaseVideoDeviceNV (HPVIDEODEV hVideoDevice);
  VKFUNDEFINE(wglReleaseVideoDeviceNV);
  // BOOL WINAPI wglBindVideoImageNV (HPVIDEODEV hVideoDevice, HPBUFFERARB
  // hPbuffer, int iVideoBuffer);
  VKFUNDEFINE(wglBindVideoImageNV);
  // BOOL WINAPI wglReleaseVideoImageNV (HPBUFFERARB hPbuffer, int
  // iVideoBuffer);
  VKFUNDEFINE(wglReleaseVideoImageNV);
  // BOOL WINAPI wglSendPbufferToVideoNV (HPBUFFERARB hPbuffer, int iBufferType,
  // unsigned long *pulCounterPbuffer, BOOL bBlock);
  VKFUNDEFINE(wglSendPbufferToVideoNV);
  // BOOL WINAPI wglGetVideoInfoNV (HPVIDEODEV hpVideoDevice, unsigned long
  // *pulCounterOutputPbuffer, unsigned long *pulCounterOutputVideo);
  VKFUNDEFINE(wglGetVideoInfoNV);
  // BOOL WINAPI wglGetSyncValuesOML (HDC hdc, INT64 *ust, INT64 *msc, INT64
  // *sbc);
  VKFUNDEFINE(wglGetSyncValuesOML);
  // BOOL WINAPI wglGetMscRateOML (HDC hdc, INT32 *numerator, INT32
  // *denominator);
  VKFUNDEFINE(wglGetMscRateOML);
  // INT64 WINAPI wglSwapBuffersMscOML (HDC hdc, INT64 target_msc, INT64
  // divisor, INT64 remainder);
  VKFUNDEFINE(wglSwapBuffersMscOML);
  // INT64 WINAPI wglSwapLayerBuffersMscOML (HDC hdc, INT fuPlanes, INT64
  // target_msc, INT64 divisor, INT64 remainder);
  VKFUNDEFINE(wglSwapLayerBuffersMscOML);
  // BOOL WINAPI wglWaitForMscOML (HDC hdc, INT64 target_msc, INT64 divisor,
  // INT64 remainder, INT64 *ust, INT64 *msc, INT64 *sbc);
  VKFUNDEFINE(wglWaitForMscOML);
  // BOOL WINAPI wglWaitForSbcOML (HDC hdc, INT64 target_sbc, INT64 *ust, INT64
  // *msc, INT64 *sbc);
  VKFUNDEFINE(wglWaitForSbcOML);
  // int WINAPI ChoosePixelFormat (HDC hDc, const PIXELFORMATDESCRIPTOR *pPfd);
  VKFUNDEFINE(ChoosePixelFormat);
  // int WINAPI DescribePixelFormat (HDC hdc, int ipfd, UINT cjpfd,
  // PIXELFORMATDESCRIPTOR *ppfd);
  VKFUNDEFINE(DescribePixelFormat);
  // UINT WINAPI GetEnhMetaFilePixelFormat (HENHMETAFILE hemf, UINT cbBuffer,
  // PIXELFORMATDESCRIPTOR *ppfd);
  VKFUNDEFINE(GetEnhMetaFilePixelFormat);
  // int WINAPI GetPixelFormat (HDC hdc);
  VKFUNDEFINE(GetPixelFormat);
  // BOOL WINAPI SetPixelFormat (HDC hdc, int ipfd, const PIXELFORMATDESCRIPTOR
  // *ppfd);
  VKFUNDEFINE(SetPixelFormat);
  // BOOL WINAPI SwapBuffers (HDC hdc);
  VKFUNDEFINE(SwapBuffers);
  // BOOL WINAPI wglCopyContext (HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask);
  VKFUNDEFINE(wglCopyContext);
  // HGLRC WINAPI wglCreateContext (HDC hDc);
  VKFUNDEFINE(wglCreateContext);
  // HGLRC WINAPI wglCreateLayerContext (HDC hDc, int level);
  VKFUNDEFINE(wglCreateLayerContext);
  // BOOL WINAPI wglDeleteContext (HGLRC oldContext);
  VKFUNDEFINE(wglDeleteContext);
  // BOOL WINAPI wglDescribeLayerPlane (HDC hDc, int pixelFormat, int
  // layerPlane, UINT nBytes, LAYERPLANEDESCRIPTOR *plpd);
  VKFUNDEFINE(wglDescribeLayerPlane);
  // HGLRC WINAPI wglGetCurrentContext (void);
  VKFUNDEFINE(wglGetCurrentContext);
  // HDC WINAPI wglGetCurrentDC (void);
  VKFUNDEFINE(wglGetCurrentDC);
  // int WINAPI wglGetLayerPaletteEntries (HDC hdc, int iLayerPlane, int iStart,
  // int cEntries, COLORREF *pcr);
  VKFUNDEFINE(wglGetLayerPaletteEntries);
  // PROC WINAPI wglGetProcAddress (LPCSTR lpszProc);
  VKFUNDEFINE(wglGetProcAddress);
  // BOOL WINAPI wglMakeCurrent (HDC hDc, HGLRC newContext);
  VKFUNDEFINE(wglMakeCurrent);
  // BOOL WINAPI wglRealizeLayerPalette (HDC hdc, int iLayerPlane, BOOL
  // bRealize);
  VKFUNDEFINE(wglRealizeLayerPalette);
  // int WINAPI wglSetLayerPaletteEntries (HDC hdc, int iLayerPlane, int iStart,
  // int cEntries, const COLORREF *pcr);
  VKFUNDEFINE(wglSetLayerPaletteEntries);
  // BOOL WINAPI wglShareLists (HGLRC hrcSrvShare, HGLRC hrcSrvSource);
  VKFUNDEFINE(wglShareLists);
  // BOOL WINAPI wglSwapLayerBuffers (HDC hdc, UINT fuFlags);
  VKFUNDEFINE(wglSwapLayerBuffers);
  // BOOL WINAPI wglUseFontBitmaps (HDC hDC, DWORD first, DWORD count, DWORD
  // listBase);
  VKFUNDEFINE(wglUseFontBitmaps);
  // BOOL WINAPI wglUseFontBitmapsA (HDC hDC, DWORD first, DWORD count, DWORD
  // listBase);
  VKFUNDEFINE(wglUseFontBitmapsA);
  // BOOL WINAPI wglUseFontBitmapsW (HDC hDC, DWORD first, DWORD count, DWORD
  // listBase);
  VKFUNDEFINE(wglUseFontBitmapsW);
  // BOOL WINAPI wglUseFontOutlines (HDC hDC, DWORD first, DWORD count, DWORD
  // listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT
  // lpgmf);
  VKFUNDEFINE(wglUseFontOutlines);
  // BOOL WINAPI wglUseFontOutlinesA (HDC hDC, DWORD first, DWORD count, DWORD
  // listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT
  // lpgmf);
  VKFUNDEFINE(wglUseFontOutlinesA);
  // BOOL WINAPI wglUseFontOutlinesW (HDC hDC, DWORD first, DWORD count, DWORD
  // listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT
  // lpgmf);
  VKFUNDEFINE(wglUseFontOutlinesW);

  bool TRY_LOAD_WGL_ARB_buffer_region();         // 0
  bool TRY_LOAD_WGL_ARB_create_context();        // 1
  bool TRY_LOAD_WGL_ARB_extensions_string();     // 2
  bool TRY_LOAD_WGL_ARB_make_current_read();     // 3
  bool TRY_LOAD_WGL_ARB_pbuffer();               // 4
  bool TRY_LOAD_WGL_ARB_pixel_format();          // 5
  bool TRY_LOAD_WGL_ARB_render_texture();        // 6
  bool TRY_LOAD_WGL_3DL_stereo_control();        // 7
  bool TRY_LOAD_WGL_AMD_gpu_association();       // 8
  bool TRY_LOAD_WGL_EXT_display_color_table();   // 9
  bool TRY_LOAD_WGL_EXT_extensions_string();     // 10
  bool TRY_LOAD_WGL_EXT_make_current_read();     // 11
  bool TRY_LOAD_WGL_EXT_pbuffer();               // 12
  bool TRY_LOAD_WGL_EXT_pixel_format();          // 13
  bool TRY_LOAD_WGL_EXT_swap_control();          // 14
  bool TRY_LOAD_WGL_I3D_digital_video_control(); // 15
  bool TRY_LOAD_WGL_I3D_gamma();                 // 16
  bool TRY_LOAD_WGL_I3D_genlock();               // 17
  bool TRY_LOAD_WGL_I3D_image_buffer();          // 18
  bool TRY_LOAD_WGL_I3D_swap_frame_lock();       // 19
  bool TRY_LOAD_WGL_I3D_swap_frame_usage();      // 20
  bool TRY_LOAD_WGL_NV_DX_interop();             // 21
  bool TRY_LOAD_WGL_NV_copy_image();             // 22
  bool TRY_LOAD_WGL_NV_delay_before_swap();      // 23
  bool TRY_LOAD_WGL_NV_gpu_affinity();           // 24
  bool TRY_LOAD_WGL_NV_present_video();          // 25
  bool TRY_LOAD_WGL_NV_swap_group();             // 26
  bool TRY_LOAD_WGL_NV_vertex_array_range();     // 27
  bool TRY_LOAD_WGL_NV_video_capture();          // 28
  bool TRY_LOAD_WGL_NV_video_output();           // 29
  bool TRY_LOAD_WGL_OML_sync_control();          // 30
  bool TRY_LOAD_WGL_VERSION_1_0();               // 31

  typedef bool (WGLLoaderLoader::*EXTLOADER)();
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
extern LIBHANNLE GetWGLLoaderLibHandle();
class WGLLoaderPHILoader : public WGLLoaderLoader {
public:
  LIBHANNLE libHandle;
  WGLLoaderPHILoader();
  bool init();
  static APIProc phiLoadFunc(void *userptr, std::string_view name);
};

#undef VKFUNDEFINE