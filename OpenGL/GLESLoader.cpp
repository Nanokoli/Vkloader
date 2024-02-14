#include "GLESLoader.hpp"

#define IMVKPFUN(NAME)                                                         \
  isAllLoaded = ((NAME = (PFN_##NAME)LoadFunc(userptr, #NAME)) != nullptr)     \
                    ? isAllLoaded                                              \
                    : false;
#define IFNEEDLOADVKEXT(NAME)                                                  \
  isAllLoaded.IS_LOAD_##NAME =                                                 \
      (NeedLoad.IS_LOAD_##NAME ? TRY_LOAD_##NAME##() : true);

GLESLoaderPHILoader::GLESLoaderPHILoader() {
  libHandle = nullptr;
  userptr = this;
  LoadFunc = phiLoadFunc;
}
bool GLESLoaderPHILoader::init() {
  if (!libHandle) {
    libHandle = GetGLESLoaderLibHandle();
  }
  return libHandle;
}
APIProc GLESLoaderPHILoader::phiLoadFunc(void *userptr, std::string_view name) {
  GLESLoaderPHILoader *context = (GLESLoaderPHILoader *)userptr;
  return GetPtrFrom_handle(context->libHandle, name.data());
}

GLESLoaderLoader::GLESLoaderLoader() {
  NowState.AllSetFalse();
  NeedLoad.AllSetFalse();
}
GLESLoaderLoader::Flags GLESLoaderLoader::LoadAll() {
  Flags isAllLoaded;
  isAllLoaded.AllSetFalse();
  IFNEEDLOADVKEXT(GL_VERSION_ES_CM_1_0);
  IFNEEDLOADVKEXT(GL_OES_point_size_array);
  IFNEEDLOADVKEXT(GL_OES_EGL_image);
  IFNEEDLOADVKEXT(GL_OES_blend_equation_separate);
  IFNEEDLOADVKEXT(GL_OES_blend_func_separate);
  IFNEEDLOADVKEXT(GL_OES_blend_subtract);
  IFNEEDLOADVKEXT(GL_OES_draw_texture);
  IFNEEDLOADVKEXT(GL_OES_fixed_point);
  IFNEEDLOADVKEXT(GL_OES_framebuffer_object);
  IFNEEDLOADVKEXT(GL_OES_mapbuffer);
  IFNEEDLOADVKEXT(GL_OES_matrix_palette);
  IFNEEDLOADVKEXT(GL_OES_query_matrix);
  IFNEEDLOADVKEXT(GL_OES_single_precision);
  IFNEEDLOADVKEXT(GL_OES_texture_cube_map);
  IFNEEDLOADVKEXT(GL_OES_vertex_array_object);
  IFNEEDLOADVKEXT(GL_APPLE_copy_texture_levels);
  IFNEEDLOADVKEXT(GL_APPLE_framebuffer_multisample);
  IFNEEDLOADVKEXT(GL_APPLE_sync);
  IFNEEDLOADVKEXT(GL_EXT_debug_marker);
  IFNEEDLOADVKEXT(GL_EXT_discard_framebuffer);
  IFNEEDLOADVKEXT(GL_EXT_map_buffer_range);
  IFNEEDLOADVKEXT(GL_EXT_multi_draw_arrays);
  IFNEEDLOADVKEXT(GL_EXT_multisampled_render_to_texture);
  IFNEEDLOADVKEXT(GL_EXT_robustness);
  IFNEEDLOADVKEXT(GL_EXT_texture_storage);
  IFNEEDLOADVKEXT(GL_IMG_multisampled_render_to_texture);
  IFNEEDLOADVKEXT(GL_IMG_user_clip_plane);
  IFNEEDLOADVKEXT(GL_NV_fence);
  IFNEEDLOADVKEXT(GL_QCOM_driver_control);
  IFNEEDLOADVKEXT(GL_QCOM_extended_get);
  IFNEEDLOADVKEXT(GL_QCOM_extended_get2);
  IFNEEDLOADVKEXT(GL_QCOM_tiled_rendering);
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_VERSION_ES_CM_1_0() {
  bool isAllLoaded = true;
  IMVKPFUN(glAlphaFunc);
  IMVKPFUN(glClearColor);
  IMVKPFUN(glClearDepthf);
  IMVKPFUN(glClipPlanef);
  IMVKPFUN(glColor4f);
  IMVKPFUN(glDepthRangef);
  IMVKPFUN(glFogf);
  IMVKPFUN(glFogfv);
  IMVKPFUN(glFrustumf);
  IMVKPFUN(glGetClipPlanef);
  IMVKPFUN(glGetFloatv);
  IMVKPFUN(glGetLightfv);
  IMVKPFUN(glGetMaterialfv);
  IMVKPFUN(glGetTexEnvfv);
  IMVKPFUN(glGetTexParameterfv);
  IMVKPFUN(glLightModelf);
  IMVKPFUN(glLightModelfv);
  IMVKPFUN(glLightf);
  IMVKPFUN(glLightfv);
  IMVKPFUN(glLineWidth);
  IMVKPFUN(glLoadMatrixf);
  IMVKPFUN(glMaterialf);
  IMVKPFUN(glMaterialfv);
  IMVKPFUN(glMultMatrixf);
  IMVKPFUN(glMultiTexCoord4f);
  IMVKPFUN(glNormal3f);
  IMVKPFUN(glOrthof);
  IMVKPFUN(glPointParameterf);
  IMVKPFUN(glPointParameterfv);
  IMVKPFUN(glPointSize);
  IMVKPFUN(glPolygonOffset);
  IMVKPFUN(glRotatef);
  IMVKPFUN(glScalef);
  IMVKPFUN(glTexEnvf);
  IMVKPFUN(glTexEnvfv);
  IMVKPFUN(glTexParameterf);
  IMVKPFUN(glTexParameterfv);
  IMVKPFUN(glTranslatef);
  IMVKPFUN(glActiveTexture);
  IMVKPFUN(glAlphaFuncx);
  IMVKPFUN(glBindBuffer);
  IMVKPFUN(glBindTexture);
  IMVKPFUN(glBlendFunc);
  IMVKPFUN(glBufferData);
  IMVKPFUN(glBufferSubData);
  IMVKPFUN(glClear);
  IMVKPFUN(glClearColorx);
  IMVKPFUN(glClearDepthx);
  IMVKPFUN(glClearStencil);
  IMVKPFUN(glClientActiveTexture);
  IMVKPFUN(glClipPlanex);
  IMVKPFUN(glColor4ub);
  IMVKPFUN(glColor4x);
  IMVKPFUN(glColorMask);
  IMVKPFUN(glColorPointer);
  IMVKPFUN(glCompressedTexImage2D);
  IMVKPFUN(glCompressedTexSubImage2D);
  IMVKPFUN(glCopyTexImage2D);
  IMVKPFUN(glCopyTexSubImage2D);
  IMVKPFUN(glCullFace);
  IMVKPFUN(glDeleteBuffers);
  IMVKPFUN(glDeleteTextures);
  IMVKPFUN(glDepthFunc);
  IMVKPFUN(glDepthMask);
  IMVKPFUN(glDepthRangex);
  IMVKPFUN(glDisable);
  IMVKPFUN(glDisableClientState);
  IMVKPFUN(glDrawArrays);
  IMVKPFUN(glDrawElements);
  IMVKPFUN(glEnable);
  IMVKPFUN(glEnableClientState);
  IMVKPFUN(glFinish);
  IMVKPFUN(glFlush);
  IMVKPFUN(glFogx);
  IMVKPFUN(glFogxv);
  IMVKPFUN(glFrontFace);
  IMVKPFUN(glFrustumx);
  IMVKPFUN(glGetBooleanv);
  IMVKPFUN(glGetBufferParameteriv);
  IMVKPFUN(glGetClipPlanex);
  IMVKPFUN(glGenBuffers);
  IMVKPFUN(glGenTextures);
  IMVKPFUN(glGetError);
  IMVKPFUN(glGetFixedv);
  IMVKPFUN(glGetIntegerv);
  IMVKPFUN(glGetLightxv);
  IMVKPFUN(glGetMaterialxv);
  IMVKPFUN(glGetPointerv);
  IMVKPFUN(glGetString);
  IMVKPFUN(glGetTexEnviv);
  IMVKPFUN(glGetTexEnvxv);
  IMVKPFUN(glGetTexParameteriv);
  IMVKPFUN(glGetTexParameterxv);
  IMVKPFUN(glHint);
  IMVKPFUN(glIsBuffer);
  IMVKPFUN(glIsEnabled);
  IMVKPFUN(glIsTexture);
  IMVKPFUN(glLightModelx);
  IMVKPFUN(glLightModelxv);
  IMVKPFUN(glLightx);
  IMVKPFUN(glLightxv);
  IMVKPFUN(glLineWidthx);
  IMVKPFUN(glLoadIdentity);
  IMVKPFUN(glLoadMatrixx);
  IMVKPFUN(glLogicOp);
  IMVKPFUN(glMaterialx);
  IMVKPFUN(glMaterialxv);
  IMVKPFUN(glMatrixMode);
  IMVKPFUN(glMultMatrixx);
  IMVKPFUN(glMultiTexCoord4x);
  IMVKPFUN(glNormal3x);
  IMVKPFUN(glNormalPointer);
  IMVKPFUN(glOrthox);
  IMVKPFUN(glPixelStorei);
  IMVKPFUN(glPointParameterx);
  IMVKPFUN(glPointParameterxv);
  IMVKPFUN(glPointSizex);
  IMVKPFUN(glPolygonOffsetx);
  IMVKPFUN(glPopMatrix);
  IMVKPFUN(glPushMatrix);
  IMVKPFUN(glReadPixels);
  IMVKPFUN(glRotatex);
  IMVKPFUN(glSampleCoverage);
  IMVKPFUN(glSampleCoveragex);
  IMVKPFUN(glScalex);
  IMVKPFUN(glScissor);
  IMVKPFUN(glShadeModel);
  IMVKPFUN(glStencilFunc);
  IMVKPFUN(glStencilMask);
  IMVKPFUN(glStencilOp);
  IMVKPFUN(glTexCoordPointer);
  IMVKPFUN(glTexEnvi);
  IMVKPFUN(glTexEnvx);
  IMVKPFUN(glTexEnviv);
  IMVKPFUN(glTexEnvxv);
  IMVKPFUN(glTexImage2D);
  IMVKPFUN(glTexParameteri);
  IMVKPFUN(glTexParameterx);
  IMVKPFUN(glTexParameteriv);
  IMVKPFUN(glTexParameterxv);
  IMVKPFUN(glTexSubImage2D);
  IMVKPFUN(glTranslatex);
  IMVKPFUN(glVertexPointer);
  IMVKPFUN(glViewport);
  NowState.IS_LOAD_GL_VERSION_ES_CM_1_0 = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_OES_point_size_array() {
  bool isAllLoaded = true;
  IMVKPFUN(glPointSizePointerOES);
  NowState.IS_LOAD_GL_OES_point_size_array = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_OES_EGL_image() {
  bool isAllLoaded = true;
  IMVKPFUN(glEGLImageTargetTexture2DOES);
  IMVKPFUN(glEGLImageTargetRenderbufferStorageOES);
  NowState.IS_LOAD_GL_OES_EGL_image = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_OES_blend_equation_separate() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlendEquationSeparateOES);
  NowState.IS_LOAD_GL_OES_blend_equation_separate = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_OES_blend_func_separate() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlendFuncSeparateOES);
  NowState.IS_LOAD_GL_OES_blend_func_separate = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_OES_blend_subtract() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlendEquationOES);
  NowState.IS_LOAD_GL_OES_blend_subtract = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_OES_draw_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawTexsOES);
  IMVKPFUN(glDrawTexiOES);
  IMVKPFUN(glDrawTexxOES);
  IMVKPFUN(glDrawTexsvOES);
  IMVKPFUN(glDrawTexivOES);
  IMVKPFUN(glDrawTexxvOES);
  IMVKPFUN(glDrawTexfOES);
  IMVKPFUN(glDrawTexfvOES);
  NowState.IS_LOAD_GL_OES_draw_texture = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_OES_fixed_point() {
  bool isAllLoaded = true;
  IMVKPFUN(glAlphaFuncxOES);
  IMVKPFUN(glClearColorxOES);
  IMVKPFUN(glClearDepthxOES);
  IMVKPFUN(glClipPlanexOES);
  IMVKPFUN(glColor4xOES);
  IMVKPFUN(glDepthRangexOES);
  IMVKPFUN(glFogxOES);
  IMVKPFUN(glFogxvOES);
  IMVKPFUN(glFrustumxOES);
  IMVKPFUN(glGetClipPlanexOES);
  IMVKPFUN(glGetFixedvOES);
  IMVKPFUN(glGetTexEnvxvOES);
  IMVKPFUN(glGetTexParameterxvOES);
  IMVKPFUN(glLightModelxOES);
  IMVKPFUN(glLightModelxvOES);
  IMVKPFUN(glLightxOES);
  IMVKPFUN(glLightxvOES);
  IMVKPFUN(glLineWidthxOES);
  IMVKPFUN(glLoadMatrixxOES);
  IMVKPFUN(glMaterialxOES);
  IMVKPFUN(glMaterialxvOES);
  IMVKPFUN(glMultMatrixxOES);
  IMVKPFUN(glMultiTexCoord4xOES);
  IMVKPFUN(glNormal3xOES);
  IMVKPFUN(glOrthoxOES);
  IMVKPFUN(glPointParameterxvOES);
  IMVKPFUN(glPointSizexOES);
  IMVKPFUN(glPolygonOffsetxOES);
  IMVKPFUN(glRotatexOES);
  IMVKPFUN(glScalexOES);
  IMVKPFUN(glTexEnvxOES);
  IMVKPFUN(glTexEnvxvOES);
  IMVKPFUN(glTexParameterxOES);
  IMVKPFUN(glTexParameterxvOES);
  IMVKPFUN(glTranslatexOES);
  IMVKPFUN(glGetLightxvOES);
  IMVKPFUN(glGetMaterialxvOES);
  IMVKPFUN(glPointParameterxOES);
  IMVKPFUN(glSampleCoveragexOES);
  IMVKPFUN(glGetTexGenxvOES);
  IMVKPFUN(glTexGenxOES);
  IMVKPFUN(glTexGenxvOES);
  NowState.IS_LOAD_GL_OES_fixed_point = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_OES_framebuffer_object() {
  bool isAllLoaded = true;
  IMVKPFUN(glIsRenderbufferOES);
  IMVKPFUN(glBindRenderbufferOES);
  IMVKPFUN(glDeleteRenderbuffersOES);
  IMVKPFUN(glGenRenderbuffersOES);
  IMVKPFUN(glRenderbufferStorageOES);
  IMVKPFUN(glGetRenderbufferParameterivOES);
  IMVKPFUN(glIsFramebufferOES);
  IMVKPFUN(glBindFramebufferOES);
  IMVKPFUN(glDeleteFramebuffersOES);
  IMVKPFUN(glGenFramebuffersOES);
  IMVKPFUN(glCheckFramebufferStatusOES);
  IMVKPFUN(glFramebufferRenderbufferOES);
  IMVKPFUN(glFramebufferTexture2DOES);
  IMVKPFUN(glGetFramebufferAttachmentParameterivOES);
  IMVKPFUN(glGenerateMipmapOES);
  NowState.IS_LOAD_GL_OES_framebuffer_object = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_OES_mapbuffer() {
  bool isAllLoaded = true;
  IMVKPFUN(glMapBufferOES);
  IMVKPFUN(glUnmapBufferOES);
  IMVKPFUN(glGetBufferPointervOES);
  NowState.IS_LOAD_GL_OES_mapbuffer = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_OES_matrix_palette() {
  bool isAllLoaded = true;
  IMVKPFUN(glCurrentPaletteMatrixOES);
  IMVKPFUN(glLoadPaletteFromModelViewMatrixOES);
  IMVKPFUN(glMatrixIndexPointerOES);
  IMVKPFUN(glWeightPointerOES);
  NowState.IS_LOAD_GL_OES_matrix_palette = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_OES_query_matrix() {
  bool isAllLoaded = true;
  IMVKPFUN(glQueryMatrixxOES);
  NowState.IS_LOAD_GL_OES_query_matrix = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_OES_single_precision() {
  bool isAllLoaded = true;
  IMVKPFUN(glClearDepthfOES);
  IMVKPFUN(glClipPlanefOES);
  IMVKPFUN(glDepthRangefOES);
  IMVKPFUN(glFrustumfOES);
  IMVKPFUN(glGetClipPlanefOES);
  IMVKPFUN(glOrthofOES);
  NowState.IS_LOAD_GL_OES_single_precision = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_OES_texture_cube_map() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexGenfOES);
  IMVKPFUN(glTexGenfvOES);
  IMVKPFUN(glTexGeniOES);
  IMVKPFUN(glTexGenivOES);
  IMVKPFUN(glGetTexGenfvOES);
  IMVKPFUN(glGetTexGenivOES);
  NowState.IS_LOAD_GL_OES_texture_cube_map = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_OES_vertex_array_object() {
  bool isAllLoaded = true;
  IMVKPFUN(glBindVertexArrayOES);
  IMVKPFUN(glDeleteVertexArraysOES);
  IMVKPFUN(glGenVertexArraysOES);
  IMVKPFUN(glIsVertexArrayOES);
  NowState.IS_LOAD_GL_OES_vertex_array_object = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_APPLE_copy_texture_levels() {
  bool isAllLoaded = true;
  IMVKPFUN(glCopyTextureLevelsAPPLE);
  NowState.IS_LOAD_GL_APPLE_copy_texture_levels = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_APPLE_framebuffer_multisample() {
  bool isAllLoaded = true;
  IMVKPFUN(glRenderbufferStorageMultisampleAPPLE);
  IMVKPFUN(glResolveMultisampleFramebufferAPPLE);
  NowState.IS_LOAD_GL_APPLE_framebuffer_multisample = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_APPLE_sync() {
  bool isAllLoaded = true;
  IMVKPFUN(glFenceSyncAPPLE);
  IMVKPFUN(glIsSyncAPPLE);
  IMVKPFUN(glDeleteSyncAPPLE);
  IMVKPFUN(glClientWaitSyncAPPLE);
  IMVKPFUN(glWaitSyncAPPLE);
  IMVKPFUN(glGetInteger64vAPPLE);
  IMVKPFUN(glGetSyncivAPPLE);
  NowState.IS_LOAD_GL_APPLE_sync = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_EXT_debug_marker() {
  bool isAllLoaded = true;
  IMVKPFUN(glInsertEventMarkerEXT);
  IMVKPFUN(glPushGroupMarkerEXT);
  IMVKPFUN(glPopGroupMarkerEXT);
  NowState.IS_LOAD_GL_EXT_debug_marker = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_EXT_discard_framebuffer() {
  bool isAllLoaded = true;
  IMVKPFUN(glDiscardFramebufferEXT);
  NowState.IS_LOAD_GL_EXT_discard_framebuffer = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_EXT_map_buffer_range() {
  bool isAllLoaded = true;
  IMVKPFUN(glMapBufferRangeEXT);
  IMVKPFUN(glFlushMappedBufferRangeEXT);
  NowState.IS_LOAD_GL_EXT_map_buffer_range = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_EXT_multi_draw_arrays() {
  bool isAllLoaded = true;
  IMVKPFUN(glMultiDrawArraysEXT);
  IMVKPFUN(glMultiDrawElementsEXT);
  NowState.IS_LOAD_GL_EXT_multi_draw_arrays = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_EXT_multisampled_render_to_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glRenderbufferStorageMultisampleEXT);
  IMVKPFUN(glFramebufferTexture2DMultisampleEXT);
  NowState.IS_LOAD_GL_EXT_multisampled_render_to_texture = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_EXT_robustness() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetGraphicsResetStatusEXT);
  IMVKPFUN(glReadnPixelsEXT);
  IMVKPFUN(glGetnUniformfvEXT);
  IMVKPFUN(glGetnUniformivEXT);
  NowState.IS_LOAD_GL_EXT_robustness = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_EXT_texture_storage() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexStorage1DEXT);
  IMVKPFUN(glTexStorage2DEXT);
  IMVKPFUN(glTexStorage3DEXT);
  IMVKPFUN(glTextureStorage1DEXT);
  IMVKPFUN(glTextureStorage2DEXT);
  IMVKPFUN(glTextureStorage3DEXT);
  NowState.IS_LOAD_GL_EXT_texture_storage = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_IMG_multisampled_render_to_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glRenderbufferStorageMultisampleIMG);
  IMVKPFUN(glFramebufferTexture2DMultisampleIMG);
  NowState.IS_LOAD_GL_IMG_multisampled_render_to_texture = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_IMG_user_clip_plane() {
  bool isAllLoaded = true;
  IMVKPFUN(glClipPlanefIMG);
  IMVKPFUN(glClipPlanexIMG);
  NowState.IS_LOAD_GL_IMG_user_clip_plane = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_NV_fence() {
  bool isAllLoaded = true;
  IMVKPFUN(glDeleteFencesNV);
  IMVKPFUN(glGenFencesNV);
  IMVKPFUN(glIsFenceNV);
  IMVKPFUN(glTestFenceNV);
  IMVKPFUN(glGetFenceivNV);
  IMVKPFUN(glFinishFenceNV);
  IMVKPFUN(glSetFenceNV);
  NowState.IS_LOAD_GL_NV_fence = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_QCOM_driver_control() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetDriverControlsQCOM);
  IMVKPFUN(glGetDriverControlStringQCOM);
  IMVKPFUN(glEnableDriverControlQCOM);
  IMVKPFUN(glDisableDriverControlQCOM);
  NowState.IS_LOAD_GL_QCOM_driver_control = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_QCOM_extended_get() {
  bool isAllLoaded = true;
  IMVKPFUN(glExtGetTexturesQCOM);
  IMVKPFUN(glExtGetBuffersQCOM);
  IMVKPFUN(glExtGetRenderbuffersQCOM);
  IMVKPFUN(glExtGetFramebuffersQCOM);
  IMVKPFUN(glExtGetTexLevelParameterivQCOM);
  IMVKPFUN(glExtTexObjectStateOverrideiQCOM);
  IMVKPFUN(glExtGetTexSubImageQCOM);
  IMVKPFUN(glExtGetBufferPointervQCOM);
  NowState.IS_LOAD_GL_QCOM_extended_get = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_QCOM_extended_get2() {
  bool isAllLoaded = true;
  IMVKPFUN(glExtGetShadersQCOM);
  IMVKPFUN(glExtGetProgramsQCOM);
  IMVKPFUN(glExtIsProgramBinaryQCOM);
  IMVKPFUN(glExtGetProgramBinarySourceQCOM);
  NowState.IS_LOAD_GL_QCOM_extended_get2 = isAllLoaded;
  return isAllLoaded;
}
bool GLESLoaderLoader::TRY_LOAD_GL_QCOM_tiled_rendering() {
  bool isAllLoaded = true;
  IMVKPFUN(glStartTilingQCOM);
  IMVKPFUN(glEndTilingQCOM);
  NowState.IS_LOAD_GL_QCOM_tiled_rendering = isAllLoaded;
  return isAllLoaded;
}
static GLESLoaderLoader::GLESLoaderLoader::MAP GLESLoaderLoadermapping = {
    {{"GL_VERSION_ES_CM_1_0", &GLESLoaderLoader::TRY_LOAD_GL_VERSION_ES_CM_1_0,
      0},
     {"GL_OES_point_size_array",
      &GLESLoaderLoader::TRY_LOAD_GL_OES_point_size_array, 1},
     {"GL_OES_EGL_image", &GLESLoaderLoader::TRY_LOAD_GL_OES_EGL_image, 2},
     {"GL_OES_blend_equation_separate",
      &GLESLoaderLoader::TRY_LOAD_GL_OES_blend_equation_separate, 3},
     {"GL_OES_blend_func_separate",
      &GLESLoaderLoader::TRY_LOAD_GL_OES_blend_func_separate, 4},
     {"GL_OES_blend_subtract",
      &GLESLoaderLoader::TRY_LOAD_GL_OES_blend_subtract, 5},
     {"GL_OES_draw_texture", &GLESLoaderLoader::TRY_LOAD_GL_OES_draw_texture,
      6},
     {"GL_OES_fixed_point", &GLESLoaderLoader::TRY_LOAD_GL_OES_fixed_point, 7},
     {"GL_OES_framebuffer_object",
      &GLESLoaderLoader::TRY_LOAD_GL_OES_framebuffer_object, 8},
     {"GL_OES_mapbuffer", &GLESLoaderLoader::TRY_LOAD_GL_OES_mapbuffer, 9},
     {"GL_OES_matrix_palette",
      &GLESLoaderLoader::TRY_LOAD_GL_OES_matrix_palette, 10},
     {"GL_OES_query_matrix", &GLESLoaderLoader::TRY_LOAD_GL_OES_query_matrix,
      11},
     {"GL_OES_single_precision",
      &GLESLoaderLoader::TRY_LOAD_GL_OES_single_precision, 12},
     {"GL_OES_texture_cube_map",
      &GLESLoaderLoader::TRY_LOAD_GL_OES_texture_cube_map, 13},
     {"GL_OES_vertex_array_object",
      &GLESLoaderLoader::TRY_LOAD_GL_OES_vertex_array_object, 14},
     {"GL_APPLE_copy_texture_levels",
      &GLESLoaderLoader::TRY_LOAD_GL_APPLE_copy_texture_levels, 15},
     {"GL_APPLE_framebuffer_multisample",
      &GLESLoaderLoader::TRY_LOAD_GL_APPLE_framebuffer_multisample, 16},
     {"GL_APPLE_sync", &GLESLoaderLoader::TRY_LOAD_GL_APPLE_sync, 17},
     {"GL_EXT_debug_marker", &GLESLoaderLoader::TRY_LOAD_GL_EXT_debug_marker,
      18},
     {"GL_EXT_discard_framebuffer",
      &GLESLoaderLoader::TRY_LOAD_GL_EXT_discard_framebuffer, 19},
     {"GL_EXT_map_buffer_range",
      &GLESLoaderLoader::TRY_LOAD_GL_EXT_map_buffer_range, 20},
     {"GL_EXT_multi_draw_arrays",
      &GLESLoaderLoader::TRY_LOAD_GL_EXT_multi_draw_arrays, 21},
     {"GL_EXT_multisampled_render_to_texture",
      &GLESLoaderLoader::TRY_LOAD_GL_EXT_multisampled_render_to_texture, 22},
     {"GL_EXT_robustness", &GLESLoaderLoader::TRY_LOAD_GL_EXT_robustness, 23},
     {"GL_EXT_texture_storage",
      &GLESLoaderLoader::TRY_LOAD_GL_EXT_texture_storage, 24},
     {"GL_IMG_multisampled_render_to_texture",
      &GLESLoaderLoader::TRY_LOAD_GL_IMG_multisampled_render_to_texture, 25},
     {"GL_IMG_user_clip_plane",
      &GLESLoaderLoader::TRY_LOAD_GL_IMG_user_clip_plane, 26},
     {"GL_NV_fence", &GLESLoaderLoader::TRY_LOAD_GL_NV_fence, 27},
     {"GL_QCOM_driver_control",
      &GLESLoaderLoader::TRY_LOAD_GL_QCOM_driver_control, 28},
     {"GL_QCOM_extended_get", &GLESLoaderLoader::TRY_LOAD_GL_QCOM_extended_get,
      29},
     {"GL_QCOM_extended_get2",
      &GLESLoaderLoader::TRY_LOAD_GL_QCOM_extended_get2, 30},
     {"GL_QCOM_tiled_rendering",
      &GLESLoaderLoader::TRY_LOAD_GL_QCOM_tiled_rendering, 31}}};
std::vector<GLESLoaderLoader::GLESLoaderLoader::EXTLOADER>
GLESLoaderLoader::TRAN2FUN(const std::vector<std::string> &list) {
  std::vector<EXTLOADER> output;
  for (auto &s : list) {
    auto as = GLESLoaderLoadermapping.TYPE1map[s];
    if (as) {
      output.push_back(as->type2);
    } else {
      output.push_back(0);
    }
  }
  return output;
}
std::vector<size_t>
GLESLoaderLoader::TRAN(const std::vector<std::string> &list) {
  std::vector<size_t> output;
  for (auto &s : list) {
    auto as = GLESLoaderLoadermapping.TYPE1map[s];
    if (as) {
      output.push_back(as->type3);
    } else {
      output.push_back(-1);
    }
  }
  return output;
}
bool GLESLoaderLoader::MappingToNeedLoad(const std::vector<size_t> &list) {
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
