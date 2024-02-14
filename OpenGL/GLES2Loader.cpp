#include "GLES2Loader.hpp"

#define IMVKPFUN(NAME)                                                         \
  isAllLoaded = ((NAME = (PFN_##NAME)LoadFunc(userptr, #NAME)) != nullptr)     \
                    ? isAllLoaded                                              \
                    : false;
#define IFNEEDLOADVKEXT(NAME)                                                  \
  isAllLoaded.IS_LOAD_##NAME =                                                 \
      (NeedLoad.IS_LOAD_##NAME ? TRY_LOAD_##NAME##() : true);

GLES2LoaderPHILoader::GLES2LoaderPHILoader() {
  libHandle = nullptr;
  userptr = this;
  LoadFunc = phiLoadFunc;
}
bool GLES2LoaderPHILoader::init() {
  if (!libHandle) {
    libHandle = GetGLES2LoaderLibHandle();
  }
  return libHandle;
}
APIProc GLES2LoaderPHILoader::phiLoadFunc(void *userptr,
                                          std::string_view name) {
  GLES2LoaderPHILoader *context = (GLES2LoaderPHILoader *)userptr;
  return GetPtrFrom_handle(context->libHandle, name.data());
}

GLES2LoaderLoader::GLES2LoaderLoader() {
  NowState.AllSetFalse();
  NeedLoad.AllSetFalse();
}
GLES2LoaderLoader::Flags GLES2LoaderLoader::LoadAll() {
  Flags isAllLoaded;
  isAllLoaded.AllSetFalse();
  IFNEEDLOADVKEXT(GL_ES_VERSION_2_0);
  IFNEEDLOADVKEXT(GL_ES_VERSION_3_0);
  IFNEEDLOADVKEXT(GL_ES_VERSION_3_1);
  IFNEEDLOADVKEXT(GL_ES_VERSION_3_2);
  IFNEEDLOADVKEXT(GL_KHR_blend_equation_advanced);
  IFNEEDLOADVKEXT(GL_KHR_debug);
  IFNEEDLOADVKEXT(GL_KHR_parallel_shader_compile);
  IFNEEDLOADVKEXT(GL_KHR_robustness);
  IFNEEDLOADVKEXT(GL_OES_EGL_image);
  IFNEEDLOADVKEXT(GL_OES_copy_image);
  IFNEEDLOADVKEXT(GL_OES_draw_buffers_indexed);
  IFNEEDLOADVKEXT(GL_OES_draw_elements_base_vertex);
  IFNEEDLOADVKEXT(GL_OES_geometry_shader);
  IFNEEDLOADVKEXT(GL_OES_get_program_binary);
  IFNEEDLOADVKEXT(GL_OES_mapbuffer);
  IFNEEDLOADVKEXT(GL_OES_primitive_bounding_box);
  IFNEEDLOADVKEXT(GL_OES_sample_shading);
  IFNEEDLOADVKEXT(GL_OES_tessellation_shader);
  IFNEEDLOADVKEXT(GL_OES_texture_3D);
  IFNEEDLOADVKEXT(GL_OES_texture_border_clamp);
  IFNEEDLOADVKEXT(GL_OES_texture_buffer);
  IFNEEDLOADVKEXT(GL_OES_texture_storage_multisample_2d_array);
  IFNEEDLOADVKEXT(GL_OES_texture_view);
  IFNEEDLOADVKEXT(GL_OES_vertex_array_object);
  IFNEEDLOADVKEXT(GL_OES_viewport_array);
  IFNEEDLOADVKEXT(GL_AMD_framebuffer_multisample_advanced);
  IFNEEDLOADVKEXT(GL_AMD_performance_monitor);
  IFNEEDLOADVKEXT(GL_ANGLE_framebuffer_blit);
  IFNEEDLOADVKEXT(GL_ANGLE_framebuffer_multisample);
  IFNEEDLOADVKEXT(GL_ANGLE_instanced_arrays);
  IFNEEDLOADVKEXT(GL_ANGLE_translated_shader_source);
  IFNEEDLOADVKEXT(GL_APPLE_copy_texture_levels);
  IFNEEDLOADVKEXT(GL_APPLE_framebuffer_multisample);
  IFNEEDLOADVKEXT(GL_APPLE_sync);
  IFNEEDLOADVKEXT(GL_ARM_shader_core_properties);
  IFNEEDLOADVKEXT(GL_EXT_EGL_image_storage);
  IFNEEDLOADVKEXT(GL_EXT_base_instance);
  IFNEEDLOADVKEXT(GL_EXT_blend_func_extended);
  IFNEEDLOADVKEXT(GL_EXT_buffer_storage);
  IFNEEDLOADVKEXT(GL_EXT_clear_texture);
  IFNEEDLOADVKEXT(GL_EXT_clip_control);
  IFNEEDLOADVKEXT(GL_EXT_copy_image);
  IFNEEDLOADVKEXT(GL_EXT_debug_label);
  IFNEEDLOADVKEXT(GL_EXT_debug_marker);
  IFNEEDLOADVKEXT(GL_EXT_discard_framebuffer);
  IFNEEDLOADVKEXT(GL_EXT_disjoint_timer_query);
  IFNEEDLOADVKEXT(GL_EXT_draw_buffers);
  IFNEEDLOADVKEXT(GL_EXT_draw_buffers_indexed);
  IFNEEDLOADVKEXT(GL_EXT_draw_elements_base_vertex);
  IFNEEDLOADVKEXT(GL_EXT_draw_instanced);
  IFNEEDLOADVKEXT(GL_EXT_draw_transform_feedback);
  IFNEEDLOADVKEXT(GL_EXT_external_buffer);
  IFNEEDLOADVKEXT(GL_EXT_fragment_shading_rate);
  IFNEEDLOADVKEXT(GL_EXT_framebuffer_blit_layers);
  IFNEEDLOADVKEXT(GL_EXT_geometry_shader);
  IFNEEDLOADVKEXT(GL_EXT_instanced_arrays);
  IFNEEDLOADVKEXT(GL_EXT_map_buffer_range);
  IFNEEDLOADVKEXT(GL_EXT_memory_object);
  IFNEEDLOADVKEXT(GL_EXT_memory_object_fd);
  IFNEEDLOADVKEXT(GL_EXT_memory_object_win32);
  IFNEEDLOADVKEXT(GL_EXT_multi_draw_arrays);
  IFNEEDLOADVKEXT(GL_EXT_multi_draw_indirect);
  IFNEEDLOADVKEXT(GL_EXT_multisampled_render_to_texture);
  IFNEEDLOADVKEXT(GL_EXT_multiview_draw_buffers);
  IFNEEDLOADVKEXT(GL_EXT_polygon_offset_clamp);
  IFNEEDLOADVKEXT(GL_EXT_primitive_bounding_box);
  IFNEEDLOADVKEXT(GL_EXT_raster_multisample);
  IFNEEDLOADVKEXT(GL_EXT_robustness);
  IFNEEDLOADVKEXT(GL_EXT_semaphore);
  IFNEEDLOADVKEXT(GL_EXT_semaphore_fd);
  IFNEEDLOADVKEXT(GL_EXT_semaphore_win32);
  IFNEEDLOADVKEXT(GL_EXT_separate_shader_objects);
  IFNEEDLOADVKEXT(GL_EXT_shader_framebuffer_fetch_non_coherent);
  IFNEEDLOADVKEXT(GL_EXT_shader_pixel_local_storage2);
  IFNEEDLOADVKEXT(GL_EXT_sparse_texture);
  IFNEEDLOADVKEXT(GL_EXT_tessellation_shader);
  IFNEEDLOADVKEXT(GL_EXT_texture_border_clamp);
  IFNEEDLOADVKEXT(GL_EXT_texture_buffer);
  IFNEEDLOADVKEXT(GL_EXT_texture_storage);
  IFNEEDLOADVKEXT(GL_EXT_texture_storage_compression);
  IFNEEDLOADVKEXT(GL_EXT_texture_view);
  IFNEEDLOADVKEXT(GL_EXT_win32_keyed_mutex);
  IFNEEDLOADVKEXT(GL_EXT_window_rectangles);
  IFNEEDLOADVKEXT(GL_IMG_bindless_texture);
  IFNEEDLOADVKEXT(GL_IMG_framebuffer_downsample);
  IFNEEDLOADVKEXT(GL_IMG_multisampled_render_to_texture);
  IFNEEDLOADVKEXT(GL_INTEL_framebuffer_CMAA);
  IFNEEDLOADVKEXT(GL_INTEL_performance_query);
  IFNEEDLOADVKEXT(GL_MESA_framebuffer_flip_y);
  IFNEEDLOADVKEXT(GL_MESA_sampler_objects);
  IFNEEDLOADVKEXT(GL_NV_bindless_texture);
  IFNEEDLOADVKEXT(GL_NV_blend_equation_advanced);
  IFNEEDLOADVKEXT(GL_NV_clip_space_w_scaling);
  IFNEEDLOADVKEXT(GL_NV_conditional_render);
  IFNEEDLOADVKEXT(GL_NV_conservative_raster);
  IFNEEDLOADVKEXT(GL_NV_conservative_raster_pre_snap_triangles);
  IFNEEDLOADVKEXT(GL_NV_copy_buffer);
  IFNEEDLOADVKEXT(GL_NV_coverage_sample);
  IFNEEDLOADVKEXT(GL_NV_draw_buffers);
  IFNEEDLOADVKEXT(GL_NV_draw_instanced);
  IFNEEDLOADVKEXT(GL_NV_draw_vulkan_image);
  IFNEEDLOADVKEXT(GL_NV_fence);
  IFNEEDLOADVKEXT(GL_NV_fragment_coverage_to_color);
  IFNEEDLOADVKEXT(GL_NV_framebuffer_blit);
  IFNEEDLOADVKEXT(GL_NV_framebuffer_mixed_samples);
  IFNEEDLOADVKEXT(GL_NV_framebuffer_multisample);
  IFNEEDLOADVKEXT(GL_NV_gpu_shader5);
  IFNEEDLOADVKEXT(GL_NV_instanced_arrays);
  IFNEEDLOADVKEXT(GL_NV_internalformat_sample_query);
  IFNEEDLOADVKEXT(GL_NV_memory_attachment);
  IFNEEDLOADVKEXT(GL_NV_memory_object_sparse);
  IFNEEDLOADVKEXT(GL_NV_mesh_shader);
  IFNEEDLOADVKEXT(GL_NV_non_square_matrices);
  IFNEEDLOADVKEXT(GL_NV_path_rendering);
  IFNEEDLOADVKEXT(GL_NV_polygon_mode);
  IFNEEDLOADVKEXT(GL_NV_read_buffer);
  IFNEEDLOADVKEXT(GL_NV_sample_locations);
  IFNEEDLOADVKEXT(GL_NV_scissor_exclusive);
  IFNEEDLOADVKEXT(GL_NV_shading_rate_image);
  IFNEEDLOADVKEXT(GL_NV_timeline_semaphore);
  IFNEEDLOADVKEXT(GL_NV_viewport_array);
  IFNEEDLOADVKEXT(GL_NV_viewport_swizzle);
  IFNEEDLOADVKEXT(GL_OVR_multiview);
  IFNEEDLOADVKEXT(GL_OVR_multiview_multisampled_render_to_texture);
  IFNEEDLOADVKEXT(GL_QCOM_alpha_test);
  IFNEEDLOADVKEXT(GL_QCOM_driver_control);
  IFNEEDLOADVKEXT(GL_QCOM_extended_get);
  IFNEEDLOADVKEXT(GL_QCOM_extended_get2);
  IFNEEDLOADVKEXT(GL_QCOM_frame_extrapolation);
  IFNEEDLOADVKEXT(GL_QCOM_framebuffer_foveated);
  IFNEEDLOADVKEXT(GL_QCOM_motion_estimation);
  IFNEEDLOADVKEXT(GL_QCOM_shader_framebuffer_fetch_noncoherent);
  IFNEEDLOADVKEXT(GL_QCOM_shading_rate);
  IFNEEDLOADVKEXT(GL_QCOM_texture_foveated);
  IFNEEDLOADVKEXT(GL_QCOM_tiled_rendering);
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_ES_VERSION_2_0() {
  bool isAllLoaded = true;
  IMVKPFUN(glActiveTexture);
  IMVKPFUN(glAttachShader);
  IMVKPFUN(glBindAttribLocation);
  IMVKPFUN(glBindBuffer);
  IMVKPFUN(glBindFramebuffer);
  IMVKPFUN(glBindRenderbuffer);
  IMVKPFUN(glBindTexture);
  IMVKPFUN(glBlendColor);
  IMVKPFUN(glBlendEquation);
  IMVKPFUN(glBlendEquationSeparate);
  IMVKPFUN(glBlendFunc);
  IMVKPFUN(glBlendFuncSeparate);
  IMVKPFUN(glBufferData);
  IMVKPFUN(glBufferSubData);
  IMVKPFUN(glCheckFramebufferStatus);
  IMVKPFUN(glClear);
  IMVKPFUN(glClearColor);
  IMVKPFUN(glClearDepthf);
  IMVKPFUN(glClearStencil);
  IMVKPFUN(glColorMask);
  IMVKPFUN(glCompileShader);
  IMVKPFUN(glCompressedTexImage2D);
  IMVKPFUN(glCompressedTexSubImage2D);
  IMVKPFUN(glCopyTexImage2D);
  IMVKPFUN(glCopyTexSubImage2D);
  IMVKPFUN(glCreateProgram);
  IMVKPFUN(glCreateShader);
  IMVKPFUN(glCullFace);
  IMVKPFUN(glDeleteBuffers);
  IMVKPFUN(glDeleteFramebuffers);
  IMVKPFUN(glDeleteProgram);
  IMVKPFUN(glDeleteRenderbuffers);
  IMVKPFUN(glDeleteShader);
  IMVKPFUN(glDeleteTextures);
  IMVKPFUN(glDepthFunc);
  IMVKPFUN(glDepthMask);
  IMVKPFUN(glDepthRangef);
  IMVKPFUN(glDetachShader);
  IMVKPFUN(glDisable);
  IMVKPFUN(glDisableVertexAttribArray);
  IMVKPFUN(glDrawArrays);
  IMVKPFUN(glDrawElements);
  IMVKPFUN(glEnable);
  IMVKPFUN(glEnableVertexAttribArray);
  IMVKPFUN(glFinish);
  IMVKPFUN(glFlush);
  IMVKPFUN(glFramebufferRenderbuffer);
  IMVKPFUN(glFramebufferTexture2D);
  IMVKPFUN(glFrontFace);
  IMVKPFUN(glGenBuffers);
  IMVKPFUN(glGenerateMipmap);
  IMVKPFUN(glGenFramebuffers);
  IMVKPFUN(glGenRenderbuffers);
  IMVKPFUN(glGenTextures);
  IMVKPFUN(glGetActiveAttrib);
  IMVKPFUN(glGetActiveUniform);
  IMVKPFUN(glGetAttachedShaders);
  IMVKPFUN(glGetAttribLocation);
  IMVKPFUN(glGetBooleanv);
  IMVKPFUN(glGetBufferParameteriv);
  IMVKPFUN(glGetError);
  IMVKPFUN(glGetFloatv);
  IMVKPFUN(glGetFramebufferAttachmentParameteriv);
  IMVKPFUN(glGetIntegerv);
  IMVKPFUN(glGetProgramiv);
  IMVKPFUN(glGetProgramInfoLog);
  IMVKPFUN(glGetRenderbufferParameteriv);
  IMVKPFUN(glGetShaderiv);
  IMVKPFUN(glGetShaderInfoLog);
  IMVKPFUN(glGetShaderPrecisionFormat);
  IMVKPFUN(glGetShaderSource);
  IMVKPFUN(glGetString);
  IMVKPFUN(glGetTexParameterfv);
  IMVKPFUN(glGetTexParameteriv);
  IMVKPFUN(glGetUniformfv);
  IMVKPFUN(glGetUniformiv);
  IMVKPFUN(glGetUniformLocation);
  IMVKPFUN(glGetVertexAttribfv);
  IMVKPFUN(glGetVertexAttribiv);
  IMVKPFUN(glGetVertexAttribPointerv);
  IMVKPFUN(glHint);
  IMVKPFUN(glIsBuffer);
  IMVKPFUN(glIsEnabled);
  IMVKPFUN(glIsFramebuffer);
  IMVKPFUN(glIsProgram);
  IMVKPFUN(glIsRenderbuffer);
  IMVKPFUN(glIsShader);
  IMVKPFUN(glIsTexture);
  IMVKPFUN(glLineWidth);
  IMVKPFUN(glLinkProgram);
  IMVKPFUN(glPixelStorei);
  IMVKPFUN(glPolygonOffset);
  IMVKPFUN(glReadPixels);
  IMVKPFUN(glReleaseShaderCompiler);
  IMVKPFUN(glRenderbufferStorage);
  IMVKPFUN(glSampleCoverage);
  IMVKPFUN(glScissor);
  IMVKPFUN(glShaderBinary);
  IMVKPFUN(glShaderSource);
  IMVKPFUN(glStencilFunc);
  IMVKPFUN(glStencilFuncSeparate);
  IMVKPFUN(glStencilMask);
  IMVKPFUN(glStencilMaskSeparate);
  IMVKPFUN(glStencilOp);
  IMVKPFUN(glStencilOpSeparate);
  IMVKPFUN(glTexImage2D);
  IMVKPFUN(glTexParameterf);
  IMVKPFUN(glTexParameterfv);
  IMVKPFUN(glTexParameteri);
  IMVKPFUN(glTexParameteriv);
  IMVKPFUN(glTexSubImage2D);
  IMVKPFUN(glUniform1f);
  IMVKPFUN(glUniform1fv);
  IMVKPFUN(glUniform1i);
  IMVKPFUN(glUniform1iv);
  IMVKPFUN(glUniform2f);
  IMVKPFUN(glUniform2fv);
  IMVKPFUN(glUniform2i);
  IMVKPFUN(glUniform2iv);
  IMVKPFUN(glUniform3f);
  IMVKPFUN(glUniform3fv);
  IMVKPFUN(glUniform3i);
  IMVKPFUN(glUniform3iv);
  IMVKPFUN(glUniform4f);
  IMVKPFUN(glUniform4fv);
  IMVKPFUN(glUniform4i);
  IMVKPFUN(glUniform4iv);
  IMVKPFUN(glUniformMatrix2fv);
  IMVKPFUN(glUniformMatrix3fv);
  IMVKPFUN(glUniformMatrix4fv);
  IMVKPFUN(glUseProgram);
  IMVKPFUN(glValidateProgram);
  IMVKPFUN(glVertexAttrib1f);
  IMVKPFUN(glVertexAttrib1fv);
  IMVKPFUN(glVertexAttrib2f);
  IMVKPFUN(glVertexAttrib2fv);
  IMVKPFUN(glVertexAttrib3f);
  IMVKPFUN(glVertexAttrib3fv);
  IMVKPFUN(glVertexAttrib4f);
  IMVKPFUN(glVertexAttrib4fv);
  IMVKPFUN(glVertexAttribPointer);
  IMVKPFUN(glViewport);
  NowState.IS_LOAD_GL_ES_VERSION_2_0 = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_ES_VERSION_3_0() {
  bool isAllLoaded = true;
  IMVKPFUN(glReadBuffer);
  IMVKPFUN(glDrawRangeElements);
  IMVKPFUN(glTexImage3D);
  IMVKPFUN(glTexSubImage3D);
  IMVKPFUN(glCopyTexSubImage3D);
  IMVKPFUN(glCompressedTexImage3D);
  IMVKPFUN(glCompressedTexSubImage3D);
  IMVKPFUN(glGenQueries);
  IMVKPFUN(glDeleteQueries);
  IMVKPFUN(glIsQuery);
  IMVKPFUN(glBeginQuery);
  IMVKPFUN(glEndQuery);
  IMVKPFUN(glGetQueryiv);
  IMVKPFUN(glGetQueryObjectuiv);
  IMVKPFUN(glUnmapBuffer);
  IMVKPFUN(glGetBufferPointerv);
  IMVKPFUN(glDrawBuffers);
  IMVKPFUN(glUniformMatrix2x3fv);
  IMVKPFUN(glUniformMatrix3x2fv);
  IMVKPFUN(glUniformMatrix2x4fv);
  IMVKPFUN(glUniformMatrix4x2fv);
  IMVKPFUN(glUniformMatrix3x4fv);
  IMVKPFUN(glUniformMatrix4x3fv);
  IMVKPFUN(glBlitFramebuffer);
  IMVKPFUN(glRenderbufferStorageMultisample);
  IMVKPFUN(glFramebufferTextureLayer);
  IMVKPFUN(glMapBufferRange);
  IMVKPFUN(glFlushMappedBufferRange);
  IMVKPFUN(glBindVertexArray);
  IMVKPFUN(glDeleteVertexArrays);
  IMVKPFUN(glGenVertexArrays);
  IMVKPFUN(glIsVertexArray);
  IMVKPFUN(glGetIntegeri_v);
  IMVKPFUN(glBeginTransformFeedback);
  IMVKPFUN(glEndTransformFeedback);
  IMVKPFUN(glBindBufferRange);
  IMVKPFUN(glBindBufferBase);
  IMVKPFUN(glTransformFeedbackVaryings);
  IMVKPFUN(glGetTransformFeedbackVarying);
  IMVKPFUN(glVertexAttribIPointer);
  IMVKPFUN(glGetVertexAttribIiv);
  IMVKPFUN(glGetVertexAttribIuiv);
  IMVKPFUN(glVertexAttribI4i);
  IMVKPFUN(glVertexAttribI4ui);
  IMVKPFUN(glVertexAttribI4iv);
  IMVKPFUN(glVertexAttribI4uiv);
  IMVKPFUN(glGetUniformuiv);
  IMVKPFUN(glGetFragDataLocation);
  IMVKPFUN(glUniform1ui);
  IMVKPFUN(glUniform2ui);
  IMVKPFUN(glUniform3ui);
  IMVKPFUN(glUniform4ui);
  IMVKPFUN(glUniform1uiv);
  IMVKPFUN(glUniform2uiv);
  IMVKPFUN(glUniform3uiv);
  IMVKPFUN(glUniform4uiv);
  IMVKPFUN(glClearBufferiv);
  IMVKPFUN(glClearBufferuiv);
  IMVKPFUN(glClearBufferfv);
  IMVKPFUN(glClearBufferfi);
  IMVKPFUN(glGetStringi);
  IMVKPFUN(glCopyBufferSubData);
  IMVKPFUN(glGetUniformIndices);
  IMVKPFUN(glGetActiveUniformsiv);
  IMVKPFUN(glGetUniformBlockIndex);
  IMVKPFUN(glGetActiveUniformBlockiv);
  IMVKPFUN(glGetActiveUniformBlockName);
  IMVKPFUN(glUniformBlockBinding);
  IMVKPFUN(glDrawArraysInstanced);
  IMVKPFUN(glDrawElementsInstanced);
  IMVKPFUN(glFenceSync);
  IMVKPFUN(glIsSync);
  IMVKPFUN(glDeleteSync);
  IMVKPFUN(glClientWaitSync);
  IMVKPFUN(glWaitSync);
  IMVKPFUN(glGetInteger64v);
  IMVKPFUN(glGetSynciv);
  IMVKPFUN(glGetInteger64i_v);
  IMVKPFUN(glGetBufferParameteri64v);
  IMVKPFUN(glGenSamplers);
  IMVKPFUN(glDeleteSamplers);
  IMVKPFUN(glIsSampler);
  IMVKPFUN(glBindSampler);
  IMVKPFUN(glSamplerParameteri);
  IMVKPFUN(glSamplerParameteriv);
  IMVKPFUN(glSamplerParameterf);
  IMVKPFUN(glSamplerParameterfv);
  IMVKPFUN(glGetSamplerParameteriv);
  IMVKPFUN(glGetSamplerParameterfv);
  IMVKPFUN(glVertexAttribDivisor);
  IMVKPFUN(glBindTransformFeedback);
  IMVKPFUN(glDeleteTransformFeedbacks);
  IMVKPFUN(glGenTransformFeedbacks);
  IMVKPFUN(glIsTransformFeedback);
  IMVKPFUN(glPauseTransformFeedback);
  IMVKPFUN(glResumeTransformFeedback);
  IMVKPFUN(glGetProgramBinary);
  IMVKPFUN(glProgramBinary);
  IMVKPFUN(glProgramParameteri);
  IMVKPFUN(glInvalidateFramebuffer);
  IMVKPFUN(glInvalidateSubFramebuffer);
  IMVKPFUN(glTexStorage2D);
  IMVKPFUN(glTexStorage3D);
  IMVKPFUN(glGetInternalformativ);
  NowState.IS_LOAD_GL_ES_VERSION_3_0 = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_ES_VERSION_3_1() {
  bool isAllLoaded = true;
  IMVKPFUN(glDispatchCompute);
  IMVKPFUN(glDispatchComputeIndirect);
  IMVKPFUN(glDrawArraysIndirect);
  IMVKPFUN(glDrawElementsIndirect);
  IMVKPFUN(glFramebufferParameteri);
  IMVKPFUN(glGetFramebufferParameteriv);
  IMVKPFUN(glGetProgramInterfaceiv);
  IMVKPFUN(glGetProgramResourceIndex);
  IMVKPFUN(glGetProgramResourceName);
  IMVKPFUN(glGetProgramResourceiv);
  IMVKPFUN(glGetProgramResourceLocation);
  IMVKPFUN(glUseProgramStages);
  IMVKPFUN(glActiveShaderProgram);
  IMVKPFUN(glCreateShaderProgramv);
  IMVKPFUN(glBindProgramPipeline);
  IMVKPFUN(glDeleteProgramPipelines);
  IMVKPFUN(glGenProgramPipelines);
  IMVKPFUN(glIsProgramPipeline);
  IMVKPFUN(glGetProgramPipelineiv);
  IMVKPFUN(glProgramUniform1i);
  IMVKPFUN(glProgramUniform2i);
  IMVKPFUN(glProgramUniform3i);
  IMVKPFUN(glProgramUniform4i);
  IMVKPFUN(glProgramUniform1ui);
  IMVKPFUN(glProgramUniform2ui);
  IMVKPFUN(glProgramUniform3ui);
  IMVKPFUN(glProgramUniform4ui);
  IMVKPFUN(glProgramUniform1f);
  IMVKPFUN(glProgramUniform2f);
  IMVKPFUN(glProgramUniform3f);
  IMVKPFUN(glProgramUniform4f);
  IMVKPFUN(glProgramUniform1iv);
  IMVKPFUN(glProgramUniform2iv);
  IMVKPFUN(glProgramUniform3iv);
  IMVKPFUN(glProgramUniform4iv);
  IMVKPFUN(glProgramUniform1uiv);
  IMVKPFUN(glProgramUniform2uiv);
  IMVKPFUN(glProgramUniform3uiv);
  IMVKPFUN(glProgramUniform4uiv);
  IMVKPFUN(glProgramUniform1fv);
  IMVKPFUN(glProgramUniform2fv);
  IMVKPFUN(glProgramUniform3fv);
  IMVKPFUN(glProgramUniform4fv);
  IMVKPFUN(glProgramUniformMatrix2fv);
  IMVKPFUN(glProgramUniformMatrix3fv);
  IMVKPFUN(glProgramUniformMatrix4fv);
  IMVKPFUN(glProgramUniformMatrix2x3fv);
  IMVKPFUN(glProgramUniformMatrix3x2fv);
  IMVKPFUN(glProgramUniformMatrix2x4fv);
  IMVKPFUN(glProgramUniformMatrix4x2fv);
  IMVKPFUN(glProgramUniformMatrix3x4fv);
  IMVKPFUN(glProgramUniformMatrix4x3fv);
  IMVKPFUN(glValidateProgramPipeline);
  IMVKPFUN(glGetProgramPipelineInfoLog);
  IMVKPFUN(glBindImageTexture);
  IMVKPFUN(glGetBooleani_v);
  IMVKPFUN(glMemoryBarrier);
  IMVKPFUN(glMemoryBarrierByRegion);
  IMVKPFUN(glTexStorage2DMultisample);
  IMVKPFUN(glGetMultisamplefv);
  IMVKPFUN(glSampleMaski);
  IMVKPFUN(glGetTexLevelParameteriv);
  IMVKPFUN(glGetTexLevelParameterfv);
  IMVKPFUN(glBindVertexBuffer);
  IMVKPFUN(glVertexAttribFormat);
  IMVKPFUN(glVertexAttribIFormat);
  IMVKPFUN(glVertexAttribBinding);
  IMVKPFUN(glVertexBindingDivisor);
  NowState.IS_LOAD_GL_ES_VERSION_3_1 = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_ES_VERSION_3_2() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlendBarrier);
  IMVKPFUN(glCopyImageSubData);
  IMVKPFUN(glDebugMessageControl);
  IMVKPFUN(glDebugMessageInsert);
  IMVKPFUN(glDebugMessageCallback);
  IMVKPFUN(glGetDebugMessageLog);
  IMVKPFUN(glPushDebugGroup);
  IMVKPFUN(glPopDebugGroup);
  IMVKPFUN(glObjectLabel);
  IMVKPFUN(glGetObjectLabel);
  IMVKPFUN(glObjectPtrLabel);
  IMVKPFUN(glGetObjectPtrLabel);
  IMVKPFUN(glGetPointerv);
  IMVKPFUN(glEnablei);
  IMVKPFUN(glDisablei);
  IMVKPFUN(glBlendEquationi);
  IMVKPFUN(glBlendEquationSeparatei);
  IMVKPFUN(glBlendFunci);
  IMVKPFUN(glBlendFuncSeparatei);
  IMVKPFUN(glColorMaski);
  IMVKPFUN(glIsEnabledi);
  IMVKPFUN(glDrawElementsBaseVertex);
  IMVKPFUN(glDrawRangeElementsBaseVertex);
  IMVKPFUN(glDrawElementsInstancedBaseVertex);
  IMVKPFUN(glFramebufferTexture);
  IMVKPFUN(glPrimitiveBoundingBox);
  IMVKPFUN(glGetGraphicsResetStatus);
  IMVKPFUN(glReadnPixels);
  IMVKPFUN(glGetnUniformfv);
  IMVKPFUN(glGetnUniformiv);
  IMVKPFUN(glGetnUniformuiv);
  IMVKPFUN(glMinSampleShading);
  IMVKPFUN(glPatchParameteri);
  IMVKPFUN(glTexParameterIiv);
  IMVKPFUN(glTexParameterIuiv);
  IMVKPFUN(glGetTexParameterIiv);
  IMVKPFUN(glGetTexParameterIuiv);
  IMVKPFUN(glSamplerParameterIiv);
  IMVKPFUN(glSamplerParameterIuiv);
  IMVKPFUN(glGetSamplerParameterIiv);
  IMVKPFUN(glGetSamplerParameterIuiv);
  IMVKPFUN(glTexBuffer);
  IMVKPFUN(glTexBufferRange);
  IMVKPFUN(glTexStorage3DMultisample);
  NowState.IS_LOAD_GL_ES_VERSION_3_2 = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_KHR_blend_equation_advanced() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlendBarrierKHR);
  NowState.IS_LOAD_GL_KHR_blend_equation_advanced = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_KHR_debug() {
  bool isAllLoaded = true;
  IMVKPFUN(glDebugMessageControlKHR);
  IMVKPFUN(glDebugMessageInsertKHR);
  IMVKPFUN(glDebugMessageCallbackKHR);
  IMVKPFUN(glGetDebugMessageLogKHR);
  IMVKPFUN(glPushDebugGroupKHR);
  IMVKPFUN(glPopDebugGroupKHR);
  IMVKPFUN(glObjectLabelKHR);
  IMVKPFUN(glGetObjectLabelKHR);
  IMVKPFUN(glObjectPtrLabelKHR);
  IMVKPFUN(glGetObjectPtrLabelKHR);
  IMVKPFUN(glGetPointervKHR);
  NowState.IS_LOAD_GL_KHR_debug = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_KHR_parallel_shader_compile() {
  bool isAllLoaded = true;
  IMVKPFUN(glMaxShaderCompilerThreadsKHR);
  NowState.IS_LOAD_GL_KHR_parallel_shader_compile = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_KHR_robustness() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetGraphicsResetStatusKHR);
  IMVKPFUN(glReadnPixelsKHR);
  IMVKPFUN(glGetnUniformfvKHR);
  IMVKPFUN(glGetnUniformivKHR);
  IMVKPFUN(glGetnUniformuivKHR);
  NowState.IS_LOAD_GL_KHR_robustness = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_OES_EGL_image() {
  bool isAllLoaded = true;
  IMVKPFUN(glEGLImageTargetTexture2DOES);
  IMVKPFUN(glEGLImageTargetRenderbufferStorageOES);
  NowState.IS_LOAD_GL_OES_EGL_image = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_OES_copy_image() {
  bool isAllLoaded = true;
  IMVKPFUN(glCopyImageSubDataOES);
  NowState.IS_LOAD_GL_OES_copy_image = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_OES_draw_buffers_indexed() {
  bool isAllLoaded = true;
  IMVKPFUN(glEnableiOES);
  IMVKPFUN(glDisableiOES);
  IMVKPFUN(glBlendEquationiOES);
  IMVKPFUN(glBlendEquationSeparateiOES);
  IMVKPFUN(glBlendFunciOES);
  IMVKPFUN(glBlendFuncSeparateiOES);
  IMVKPFUN(glColorMaskiOES);
  IMVKPFUN(glIsEnablediOES);
  NowState.IS_LOAD_GL_OES_draw_buffers_indexed = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_OES_draw_elements_base_vertex() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawElementsBaseVertexOES);
  IMVKPFUN(glDrawRangeElementsBaseVertexOES);
  IMVKPFUN(glDrawElementsInstancedBaseVertexOES);
  IMVKPFUN(glMultiDrawElementsBaseVertexEXT);
  NowState.IS_LOAD_GL_OES_draw_elements_base_vertex = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_OES_geometry_shader() {
  bool isAllLoaded = true;
  IMVKPFUN(glFramebufferTextureOES);
  NowState.IS_LOAD_GL_OES_geometry_shader = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_OES_get_program_binary() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetProgramBinaryOES);
  IMVKPFUN(glProgramBinaryOES);
  NowState.IS_LOAD_GL_OES_get_program_binary = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_OES_mapbuffer() {
  bool isAllLoaded = true;
  IMVKPFUN(glMapBufferOES);
  IMVKPFUN(glUnmapBufferOES);
  IMVKPFUN(glGetBufferPointervOES);
  NowState.IS_LOAD_GL_OES_mapbuffer = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_OES_primitive_bounding_box() {
  bool isAllLoaded = true;
  IMVKPFUN(glPrimitiveBoundingBoxOES);
  NowState.IS_LOAD_GL_OES_primitive_bounding_box = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_OES_sample_shading() {
  bool isAllLoaded = true;
  IMVKPFUN(glMinSampleShadingOES);
  NowState.IS_LOAD_GL_OES_sample_shading = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_OES_tessellation_shader() {
  bool isAllLoaded = true;
  IMVKPFUN(glPatchParameteriOES);
  NowState.IS_LOAD_GL_OES_tessellation_shader = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_OES_texture_3D() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexImage3DOES);
  IMVKPFUN(glTexSubImage3DOES);
  IMVKPFUN(glCopyTexSubImage3DOES);
  IMVKPFUN(glCompressedTexImage3DOES);
  IMVKPFUN(glCompressedTexSubImage3DOES);
  IMVKPFUN(glFramebufferTexture3DOES);
  NowState.IS_LOAD_GL_OES_texture_3D = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_OES_texture_border_clamp() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexParameterIivOES);
  IMVKPFUN(glTexParameterIuivOES);
  IMVKPFUN(glGetTexParameterIivOES);
  IMVKPFUN(glGetTexParameterIuivOES);
  IMVKPFUN(glSamplerParameterIivOES);
  IMVKPFUN(glSamplerParameterIuivOES);
  IMVKPFUN(glGetSamplerParameterIivOES);
  IMVKPFUN(glGetSamplerParameterIuivOES);
  NowState.IS_LOAD_GL_OES_texture_border_clamp = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_OES_texture_buffer() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexBufferOES);
  IMVKPFUN(glTexBufferRangeOES);
  NowState.IS_LOAD_GL_OES_texture_buffer = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_OES_texture_storage_multisample_2d_array() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexStorage3DMultisampleOES);
  NowState.IS_LOAD_GL_OES_texture_storage_multisample_2d_array = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_OES_texture_view() {
  bool isAllLoaded = true;
  IMVKPFUN(glTextureViewOES);
  NowState.IS_LOAD_GL_OES_texture_view = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_OES_vertex_array_object() {
  bool isAllLoaded = true;
  IMVKPFUN(glBindVertexArrayOES);
  IMVKPFUN(glDeleteVertexArraysOES);
  IMVKPFUN(glGenVertexArraysOES);
  IMVKPFUN(glIsVertexArrayOES);
  NowState.IS_LOAD_GL_OES_vertex_array_object = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_OES_viewport_array() {
  bool isAllLoaded = true;
  IMVKPFUN(glViewportArrayvOES);
  IMVKPFUN(glViewportIndexedfOES);
  IMVKPFUN(glViewportIndexedfvOES);
  IMVKPFUN(glScissorArrayvOES);
  IMVKPFUN(glScissorIndexedOES);
  IMVKPFUN(glScissorIndexedvOES);
  IMVKPFUN(glDepthRangeArrayfvOES);
  IMVKPFUN(glDepthRangeIndexedfOES);
  IMVKPFUN(glGetFloati_vOES);
  NowState.IS_LOAD_GL_OES_viewport_array = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_AMD_framebuffer_multisample_advanced() {
  bool isAllLoaded = true;
  IMVKPFUN(glRenderbufferStorageMultisampleAdvancedAMD);
  IMVKPFUN(glNamedRenderbufferStorageMultisampleAdvancedAMD);
  NowState.IS_LOAD_GL_AMD_framebuffer_multisample_advanced = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_AMD_performance_monitor() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetPerfMonitorGroupsAMD);
  IMVKPFUN(glGetPerfMonitorCountersAMD);
  IMVKPFUN(glGetPerfMonitorGroupStringAMD);
  IMVKPFUN(glGetPerfMonitorCounterStringAMD);
  IMVKPFUN(glGetPerfMonitorCounterInfoAMD);
  IMVKPFUN(glGenPerfMonitorsAMD);
  IMVKPFUN(glDeletePerfMonitorsAMD);
  IMVKPFUN(glSelectPerfMonitorCountersAMD);
  IMVKPFUN(glBeginPerfMonitorAMD);
  IMVKPFUN(glEndPerfMonitorAMD);
  IMVKPFUN(glGetPerfMonitorCounterDataAMD);
  NowState.IS_LOAD_GL_AMD_performance_monitor = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_ANGLE_framebuffer_blit() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlitFramebufferANGLE);
  NowState.IS_LOAD_GL_ANGLE_framebuffer_blit = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_ANGLE_framebuffer_multisample() {
  bool isAllLoaded = true;
  IMVKPFUN(glRenderbufferStorageMultisampleANGLE);
  NowState.IS_LOAD_GL_ANGLE_framebuffer_multisample = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_ANGLE_instanced_arrays() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawArraysInstancedANGLE);
  IMVKPFUN(glDrawElementsInstancedANGLE);
  IMVKPFUN(glVertexAttribDivisorANGLE);
  NowState.IS_LOAD_GL_ANGLE_instanced_arrays = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_ANGLE_translated_shader_source() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetTranslatedShaderSourceANGLE);
  NowState.IS_LOAD_GL_ANGLE_translated_shader_source = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_APPLE_copy_texture_levels() {
  bool isAllLoaded = true;
  IMVKPFUN(glCopyTextureLevelsAPPLE);
  NowState.IS_LOAD_GL_APPLE_copy_texture_levels = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_APPLE_framebuffer_multisample() {
  bool isAllLoaded = true;
  IMVKPFUN(glRenderbufferStorageMultisampleAPPLE);
  IMVKPFUN(glResolveMultisampleFramebufferAPPLE);
  NowState.IS_LOAD_GL_APPLE_framebuffer_multisample = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_APPLE_sync() {
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
bool GLES2LoaderLoader::TRY_LOAD_GL_ARM_shader_core_properties() {
  bool isAllLoaded = true;
  IMVKPFUN(glMaxActiveShaderCoresARM);
  NowState.IS_LOAD_GL_ARM_shader_core_properties = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_EGL_image_storage() {
  bool isAllLoaded = true;
  IMVKPFUN(glEGLImageTargetTexStorageEXT);
  IMVKPFUN(glEGLImageTargetTextureStorageEXT);
  NowState.IS_LOAD_GL_EXT_EGL_image_storage = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_base_instance() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawArraysInstancedBaseInstanceEXT);
  IMVKPFUN(glDrawElementsInstancedBaseInstanceEXT);
  IMVKPFUN(glDrawElementsInstancedBaseVertexBaseInstanceEXT);
  NowState.IS_LOAD_GL_EXT_base_instance = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_blend_func_extended() {
  bool isAllLoaded = true;
  IMVKPFUN(glBindFragDataLocationIndexedEXT);
  IMVKPFUN(glBindFragDataLocationEXT);
  IMVKPFUN(glGetProgramResourceLocationIndexEXT);
  IMVKPFUN(glGetFragDataIndexEXT);
  NowState.IS_LOAD_GL_EXT_blend_func_extended = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_buffer_storage() {
  bool isAllLoaded = true;
  IMVKPFUN(glBufferStorageEXT);
  NowState.IS_LOAD_GL_EXT_buffer_storage = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_clear_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glClearTexImageEXT);
  IMVKPFUN(glClearTexSubImageEXT);
  NowState.IS_LOAD_GL_EXT_clear_texture = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_clip_control() {
  bool isAllLoaded = true;
  IMVKPFUN(glClipControlEXT);
  NowState.IS_LOAD_GL_EXT_clip_control = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_copy_image() {
  bool isAllLoaded = true;
  IMVKPFUN(glCopyImageSubDataEXT);
  NowState.IS_LOAD_GL_EXT_copy_image = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_debug_label() {
  bool isAllLoaded = true;
  IMVKPFUN(glLabelObjectEXT);
  IMVKPFUN(glGetObjectLabelEXT);
  NowState.IS_LOAD_GL_EXT_debug_label = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_debug_marker() {
  bool isAllLoaded = true;
  IMVKPFUN(glInsertEventMarkerEXT);
  IMVKPFUN(glPushGroupMarkerEXT);
  IMVKPFUN(glPopGroupMarkerEXT);
  NowState.IS_LOAD_GL_EXT_debug_marker = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_discard_framebuffer() {
  bool isAllLoaded = true;
  IMVKPFUN(glDiscardFramebufferEXT);
  NowState.IS_LOAD_GL_EXT_discard_framebuffer = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_disjoint_timer_query() {
  bool isAllLoaded = true;
  IMVKPFUN(glGenQueriesEXT);
  IMVKPFUN(glDeleteQueriesEXT);
  IMVKPFUN(glIsQueryEXT);
  IMVKPFUN(glBeginQueryEXT);
  IMVKPFUN(glEndQueryEXT);
  IMVKPFUN(glQueryCounterEXT);
  IMVKPFUN(glGetQueryivEXT);
  IMVKPFUN(glGetQueryObjectivEXT);
  IMVKPFUN(glGetQueryObjectuivEXT);
  IMVKPFUN(glGetQueryObjecti64vEXT);
  IMVKPFUN(glGetQueryObjectui64vEXT);
  IMVKPFUN(glGetInteger64vEXT);
  NowState.IS_LOAD_GL_EXT_disjoint_timer_query = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_draw_buffers() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawBuffersEXT);
  NowState.IS_LOAD_GL_EXT_draw_buffers = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_draw_buffers_indexed() {
  bool isAllLoaded = true;
  IMVKPFUN(glEnableiEXT);
  IMVKPFUN(glDisableiEXT);
  IMVKPFUN(glBlendEquationiEXT);
  IMVKPFUN(glBlendEquationSeparateiEXT);
  IMVKPFUN(glBlendFunciEXT);
  IMVKPFUN(glBlendFuncSeparateiEXT);
  IMVKPFUN(glColorMaskiEXT);
  IMVKPFUN(glIsEnablediEXT);
  NowState.IS_LOAD_GL_EXT_draw_buffers_indexed = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_draw_elements_base_vertex() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawElementsBaseVertexEXT);
  IMVKPFUN(glDrawRangeElementsBaseVertexEXT);
  IMVKPFUN(glDrawElementsInstancedBaseVertexEXT);
  NowState.IS_LOAD_GL_EXT_draw_elements_base_vertex = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_draw_instanced() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawArraysInstancedEXT);
  IMVKPFUN(glDrawElementsInstancedEXT);
  NowState.IS_LOAD_GL_EXT_draw_instanced = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_draw_transform_feedback() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawTransformFeedbackEXT);
  IMVKPFUN(glDrawTransformFeedbackInstancedEXT);
  NowState.IS_LOAD_GL_EXT_draw_transform_feedback = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_external_buffer() {
  bool isAllLoaded = true;
  IMVKPFUN(glBufferStorageExternalEXT);
  IMVKPFUN(glNamedBufferStorageExternalEXT);
  NowState.IS_LOAD_GL_EXT_external_buffer = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_fragment_shading_rate() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetFragmentShadingRatesEXT);
  IMVKPFUN(glShadingRateEXT);
  IMVKPFUN(glShadingRateCombinerOpsEXT);
  IMVKPFUN(glFramebufferShadingRateEXT);
  NowState.IS_LOAD_GL_EXT_fragment_shading_rate = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_framebuffer_blit_layers() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlitFramebufferLayersEXT);
  IMVKPFUN(glBlitFramebufferLayerEXT);
  NowState.IS_LOAD_GL_EXT_framebuffer_blit_layers = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_geometry_shader() {
  bool isAllLoaded = true;
  IMVKPFUN(glFramebufferTextureEXT);
  NowState.IS_LOAD_GL_EXT_geometry_shader = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_instanced_arrays() {
  bool isAllLoaded = true;
  IMVKPFUN(glVertexAttribDivisorEXT);
  NowState.IS_LOAD_GL_EXT_instanced_arrays = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_map_buffer_range() {
  bool isAllLoaded = true;
  IMVKPFUN(glMapBufferRangeEXT);
  IMVKPFUN(glFlushMappedBufferRangeEXT);
  NowState.IS_LOAD_GL_EXT_map_buffer_range = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_memory_object() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetUnsignedBytevEXT);
  IMVKPFUN(glGetUnsignedBytei_vEXT);
  IMVKPFUN(glDeleteMemoryObjectsEXT);
  IMVKPFUN(glIsMemoryObjectEXT);
  IMVKPFUN(glCreateMemoryObjectsEXT);
  IMVKPFUN(glMemoryObjectParameterivEXT);
  IMVKPFUN(glGetMemoryObjectParameterivEXT);
  IMVKPFUN(glTexStorageMem2DEXT);
  IMVKPFUN(glTexStorageMem2DMultisampleEXT);
  IMVKPFUN(glTexStorageMem3DEXT);
  IMVKPFUN(glTexStorageMem3DMultisampleEXT);
  IMVKPFUN(glBufferStorageMemEXT);
  IMVKPFUN(glTextureStorageMem2DEXT);
  IMVKPFUN(glTextureStorageMem2DMultisampleEXT);
  IMVKPFUN(glTextureStorageMem3DEXT);
  IMVKPFUN(glTextureStorageMem3DMultisampleEXT);
  IMVKPFUN(glNamedBufferStorageMemEXT);
  NowState.IS_LOAD_GL_EXT_memory_object = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_memory_object_fd() {
  bool isAllLoaded = true;
  IMVKPFUN(glImportMemoryFdEXT);
  NowState.IS_LOAD_GL_EXT_memory_object_fd = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_memory_object_win32() {
  bool isAllLoaded = true;
  IMVKPFUN(glImportMemoryWin32HandleEXT);
  IMVKPFUN(glImportMemoryWin32NameEXT);
  NowState.IS_LOAD_GL_EXT_memory_object_win32 = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_multi_draw_arrays() {
  bool isAllLoaded = true;
  IMVKPFUN(glMultiDrawArraysEXT);
  IMVKPFUN(glMultiDrawElementsEXT);
  NowState.IS_LOAD_GL_EXT_multi_draw_arrays = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_multi_draw_indirect() {
  bool isAllLoaded = true;
  IMVKPFUN(glMultiDrawArraysIndirectEXT);
  IMVKPFUN(glMultiDrawElementsIndirectEXT);
  NowState.IS_LOAD_GL_EXT_multi_draw_indirect = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_multisampled_render_to_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glRenderbufferStorageMultisampleEXT);
  IMVKPFUN(glFramebufferTexture2DMultisampleEXT);
  NowState.IS_LOAD_GL_EXT_multisampled_render_to_texture = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_multiview_draw_buffers() {
  bool isAllLoaded = true;
  IMVKPFUN(glReadBufferIndexedEXT);
  IMVKPFUN(glDrawBuffersIndexedEXT);
  IMVKPFUN(glGetIntegeri_vEXT);
  NowState.IS_LOAD_GL_EXT_multiview_draw_buffers = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_polygon_offset_clamp() {
  bool isAllLoaded = true;
  IMVKPFUN(glPolygonOffsetClampEXT);
  NowState.IS_LOAD_GL_EXT_polygon_offset_clamp = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_primitive_bounding_box() {
  bool isAllLoaded = true;
  IMVKPFUN(glPrimitiveBoundingBoxEXT);
  NowState.IS_LOAD_GL_EXT_primitive_bounding_box = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_raster_multisample() {
  bool isAllLoaded = true;
  IMVKPFUN(glRasterSamplesEXT);
  NowState.IS_LOAD_GL_EXT_raster_multisample = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_robustness() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetGraphicsResetStatusEXT);
  IMVKPFUN(glReadnPixelsEXT);
  IMVKPFUN(glGetnUniformfvEXT);
  IMVKPFUN(glGetnUniformivEXT);
  NowState.IS_LOAD_GL_EXT_robustness = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_semaphore() {
  bool isAllLoaded = true;
  IMVKPFUN(glGenSemaphoresEXT);
  IMVKPFUN(glDeleteSemaphoresEXT);
  IMVKPFUN(glIsSemaphoreEXT);
  IMVKPFUN(glSemaphoreParameterui64vEXT);
  IMVKPFUN(glGetSemaphoreParameterui64vEXT);
  IMVKPFUN(glWaitSemaphoreEXT);
  IMVKPFUN(glSignalSemaphoreEXT);
  NowState.IS_LOAD_GL_EXT_semaphore = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_semaphore_fd() {
  bool isAllLoaded = true;
  IMVKPFUN(glImportSemaphoreFdEXT);
  NowState.IS_LOAD_GL_EXT_semaphore_fd = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_semaphore_win32() {
  bool isAllLoaded = true;
  IMVKPFUN(glImportSemaphoreWin32HandleEXT);
  IMVKPFUN(glImportSemaphoreWin32NameEXT);
  NowState.IS_LOAD_GL_EXT_semaphore_win32 = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_separate_shader_objects() {
  bool isAllLoaded = true;
  IMVKPFUN(glActiveShaderProgramEXT);
  IMVKPFUN(glBindProgramPipelineEXT);
  IMVKPFUN(glCreateShaderProgramvEXT);
  IMVKPFUN(glDeleteProgramPipelinesEXT);
  IMVKPFUN(glGenProgramPipelinesEXT);
  IMVKPFUN(glGetProgramPipelineInfoLogEXT);
  IMVKPFUN(glGetProgramPipelineivEXT);
  IMVKPFUN(glIsProgramPipelineEXT);
  IMVKPFUN(glProgramParameteriEXT);
  IMVKPFUN(glProgramUniform1fEXT);
  IMVKPFUN(glProgramUniform1fvEXT);
  IMVKPFUN(glProgramUniform1iEXT);
  IMVKPFUN(glProgramUniform1ivEXT);
  IMVKPFUN(glProgramUniform2fEXT);
  IMVKPFUN(glProgramUniform2fvEXT);
  IMVKPFUN(glProgramUniform2iEXT);
  IMVKPFUN(glProgramUniform2ivEXT);
  IMVKPFUN(glProgramUniform3fEXT);
  IMVKPFUN(glProgramUniform3fvEXT);
  IMVKPFUN(glProgramUniform3iEXT);
  IMVKPFUN(glProgramUniform3ivEXT);
  IMVKPFUN(glProgramUniform4fEXT);
  IMVKPFUN(glProgramUniform4fvEXT);
  IMVKPFUN(glProgramUniform4iEXT);
  IMVKPFUN(glProgramUniform4ivEXT);
  IMVKPFUN(glProgramUniformMatrix2fvEXT);
  IMVKPFUN(glProgramUniformMatrix3fvEXT);
  IMVKPFUN(glProgramUniformMatrix4fvEXT);
  IMVKPFUN(glUseProgramStagesEXT);
  IMVKPFUN(glValidateProgramPipelineEXT);
  IMVKPFUN(glProgramUniform1uiEXT);
  IMVKPFUN(glProgramUniform2uiEXT);
  IMVKPFUN(glProgramUniform3uiEXT);
  IMVKPFUN(glProgramUniform4uiEXT);
  IMVKPFUN(glProgramUniform1uivEXT);
  IMVKPFUN(glProgramUniform2uivEXT);
  IMVKPFUN(glProgramUniform3uivEXT);
  IMVKPFUN(glProgramUniform4uivEXT);
  IMVKPFUN(glProgramUniformMatrix2x3fvEXT);
  IMVKPFUN(glProgramUniformMatrix3x2fvEXT);
  IMVKPFUN(glProgramUniformMatrix2x4fvEXT);
  IMVKPFUN(glProgramUniformMatrix4x2fvEXT);
  IMVKPFUN(glProgramUniformMatrix3x4fvEXT);
  IMVKPFUN(glProgramUniformMatrix4x3fvEXT);
  NowState.IS_LOAD_GL_EXT_separate_shader_objects = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::
    TRY_LOAD_GL_EXT_shader_framebuffer_fetch_non_coherent() {
  bool isAllLoaded = true;
  IMVKPFUN(glFramebufferFetchBarrierEXT);
  NowState.IS_LOAD_GL_EXT_shader_framebuffer_fetch_non_coherent = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_shader_pixel_local_storage2() {
  bool isAllLoaded = true;
  IMVKPFUN(glFramebufferPixelLocalStorageSizeEXT);
  IMVKPFUN(glGetFramebufferPixelLocalStorageSizeEXT);
  IMVKPFUN(glClearPixelLocalStorageuiEXT);
  NowState.IS_LOAD_GL_EXT_shader_pixel_local_storage2 = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_sparse_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexPageCommitmentEXT);
  NowState.IS_LOAD_GL_EXT_sparse_texture = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_tessellation_shader() {
  bool isAllLoaded = true;
  IMVKPFUN(glPatchParameteriEXT);
  NowState.IS_LOAD_GL_EXT_tessellation_shader = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_texture_border_clamp() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexParameterIivEXT);
  IMVKPFUN(glTexParameterIuivEXT);
  IMVKPFUN(glGetTexParameterIivEXT);
  IMVKPFUN(glGetTexParameterIuivEXT);
  IMVKPFUN(glSamplerParameterIivEXT);
  IMVKPFUN(glSamplerParameterIuivEXT);
  IMVKPFUN(glGetSamplerParameterIivEXT);
  IMVKPFUN(glGetSamplerParameterIuivEXT);
  NowState.IS_LOAD_GL_EXT_texture_border_clamp = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_texture_buffer() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexBufferEXT);
  IMVKPFUN(glTexBufferRangeEXT);
  NowState.IS_LOAD_GL_EXT_texture_buffer = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_texture_storage() {
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
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_texture_storage_compression() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexStorageAttribs2DEXT);
  IMVKPFUN(glTexStorageAttribs3DEXT);
  NowState.IS_LOAD_GL_EXT_texture_storage_compression = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_texture_view() {
  bool isAllLoaded = true;
  IMVKPFUN(glTextureViewEXT);
  NowState.IS_LOAD_GL_EXT_texture_view = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_win32_keyed_mutex() {
  bool isAllLoaded = true;
  IMVKPFUN(glAcquireKeyedMutexWin32EXT);
  IMVKPFUN(glReleaseKeyedMutexWin32EXT);
  NowState.IS_LOAD_GL_EXT_win32_keyed_mutex = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_EXT_window_rectangles() {
  bool isAllLoaded = true;
  IMVKPFUN(glWindowRectanglesEXT);
  NowState.IS_LOAD_GL_EXT_window_rectangles = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_IMG_bindless_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetTextureHandleIMG);
  IMVKPFUN(glGetTextureSamplerHandleIMG);
  IMVKPFUN(glUniformHandleui64IMG);
  IMVKPFUN(glUniformHandleui64vIMG);
  IMVKPFUN(glProgramUniformHandleui64IMG);
  IMVKPFUN(glProgramUniformHandleui64vIMG);
  NowState.IS_LOAD_GL_IMG_bindless_texture = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_IMG_framebuffer_downsample() {
  bool isAllLoaded = true;
  IMVKPFUN(glFramebufferTexture2DDownsampleIMG);
  IMVKPFUN(glFramebufferTextureLayerDownsampleIMG);
  NowState.IS_LOAD_GL_IMG_framebuffer_downsample = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_IMG_multisampled_render_to_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glRenderbufferStorageMultisampleIMG);
  IMVKPFUN(glFramebufferTexture2DMultisampleIMG);
  NowState.IS_LOAD_GL_IMG_multisampled_render_to_texture = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_INTEL_framebuffer_CMAA() {
  bool isAllLoaded = true;
  IMVKPFUN(glApplyFramebufferAttachmentCMAAINTEL);
  NowState.IS_LOAD_GL_INTEL_framebuffer_CMAA = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_INTEL_performance_query() {
  bool isAllLoaded = true;
  IMVKPFUN(glBeginPerfQueryINTEL);
  IMVKPFUN(glCreatePerfQueryINTEL);
  IMVKPFUN(glDeletePerfQueryINTEL);
  IMVKPFUN(glEndPerfQueryINTEL);
  IMVKPFUN(glGetFirstPerfQueryIdINTEL);
  IMVKPFUN(glGetNextPerfQueryIdINTEL);
  IMVKPFUN(glGetPerfCounterInfoINTEL);
  IMVKPFUN(glGetPerfQueryDataINTEL);
  IMVKPFUN(glGetPerfQueryIdByNameINTEL);
  IMVKPFUN(glGetPerfQueryInfoINTEL);
  NowState.IS_LOAD_GL_INTEL_performance_query = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_MESA_framebuffer_flip_y() {
  bool isAllLoaded = true;
  IMVKPFUN(glFramebufferParameteriMESA);
  IMVKPFUN(glGetFramebufferParameterivMESA);
  NowState.IS_LOAD_GL_MESA_framebuffer_flip_y = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_MESA_sampler_objects() {
  bool isAllLoaded = true;
  NowState.IS_LOAD_GL_MESA_sampler_objects = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_bindless_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetTextureHandleNV);
  IMVKPFUN(glGetTextureSamplerHandleNV);
  IMVKPFUN(glMakeTextureHandleResidentNV);
  IMVKPFUN(glMakeTextureHandleNonResidentNV);
  IMVKPFUN(glGetImageHandleNV);
  IMVKPFUN(glMakeImageHandleResidentNV);
  IMVKPFUN(glMakeImageHandleNonResidentNV);
  IMVKPFUN(glUniformHandleui64NV);
  IMVKPFUN(glUniformHandleui64vNV);
  IMVKPFUN(glProgramUniformHandleui64NV);
  IMVKPFUN(glProgramUniformHandleui64vNV);
  IMVKPFUN(glIsTextureHandleResidentNV);
  IMVKPFUN(glIsImageHandleResidentNV);
  NowState.IS_LOAD_GL_NV_bindless_texture = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_blend_equation_advanced() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlendParameteriNV);
  IMVKPFUN(glBlendBarrierNV);
  NowState.IS_LOAD_GL_NV_blend_equation_advanced = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_clip_space_w_scaling() {
  bool isAllLoaded = true;
  IMVKPFUN(glViewportPositionWScaleNV);
  NowState.IS_LOAD_GL_NV_clip_space_w_scaling = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_conditional_render() {
  bool isAllLoaded = true;
  IMVKPFUN(glBeginConditionalRenderNV);
  IMVKPFUN(glEndConditionalRenderNV);
  NowState.IS_LOAD_GL_NV_conditional_render = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_conservative_raster() {
  bool isAllLoaded = true;
  IMVKPFUN(glSubpixelPrecisionBiasNV);
  NowState.IS_LOAD_GL_NV_conservative_raster = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::
    TRY_LOAD_GL_NV_conservative_raster_pre_snap_triangles() {
  bool isAllLoaded = true;
  IMVKPFUN(glConservativeRasterParameteriNV);
  NowState.IS_LOAD_GL_NV_conservative_raster_pre_snap_triangles = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_copy_buffer() {
  bool isAllLoaded = true;
  IMVKPFUN(glCopyBufferSubDataNV);
  NowState.IS_LOAD_GL_NV_copy_buffer = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_coverage_sample() {
  bool isAllLoaded = true;
  IMVKPFUN(glCoverageMaskNV);
  IMVKPFUN(glCoverageOperationNV);
  NowState.IS_LOAD_GL_NV_coverage_sample = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_draw_buffers() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawBuffersNV);
  NowState.IS_LOAD_GL_NV_draw_buffers = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_draw_instanced() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawArraysInstancedNV);
  IMVKPFUN(glDrawElementsInstancedNV);
  NowState.IS_LOAD_GL_NV_draw_instanced = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_draw_vulkan_image() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawVkImageNV);
  IMVKPFUN(glGetVkProcAddrNV);
  IMVKPFUN(glWaitVkSemaphoreNV);
  IMVKPFUN(glSignalVkSemaphoreNV);
  IMVKPFUN(glSignalVkFenceNV);
  NowState.IS_LOAD_GL_NV_draw_vulkan_image = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_fence() {
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
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_fragment_coverage_to_color() {
  bool isAllLoaded = true;
  IMVKPFUN(glFragmentCoverageColorNV);
  NowState.IS_LOAD_GL_NV_fragment_coverage_to_color = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_framebuffer_blit() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlitFramebufferNV);
  NowState.IS_LOAD_GL_NV_framebuffer_blit = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_framebuffer_mixed_samples() {
  bool isAllLoaded = true;
  IMVKPFUN(glCoverageModulationTableNV);
  IMVKPFUN(glGetCoverageModulationTableNV);
  IMVKPFUN(glCoverageModulationNV);
  NowState.IS_LOAD_GL_NV_framebuffer_mixed_samples = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_framebuffer_multisample() {
  bool isAllLoaded = true;
  IMVKPFUN(glRenderbufferStorageMultisampleNV);
  NowState.IS_LOAD_GL_NV_framebuffer_multisample = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_gpu_shader5() {
  bool isAllLoaded = true;
  IMVKPFUN(glUniform1i64NV);
  IMVKPFUN(glUniform2i64NV);
  IMVKPFUN(glUniform3i64NV);
  IMVKPFUN(glUniform4i64NV);
  IMVKPFUN(glUniform1i64vNV);
  IMVKPFUN(glUniform2i64vNV);
  IMVKPFUN(glUniform3i64vNV);
  IMVKPFUN(glUniform4i64vNV);
  IMVKPFUN(glUniform1ui64NV);
  IMVKPFUN(glUniform2ui64NV);
  IMVKPFUN(glUniform3ui64NV);
  IMVKPFUN(glUniform4ui64NV);
  IMVKPFUN(glUniform1ui64vNV);
  IMVKPFUN(glUniform2ui64vNV);
  IMVKPFUN(glUniform3ui64vNV);
  IMVKPFUN(glUniform4ui64vNV);
  IMVKPFUN(glGetUniformi64vNV);
  IMVKPFUN(glProgramUniform1i64NV);
  IMVKPFUN(glProgramUniform2i64NV);
  IMVKPFUN(glProgramUniform3i64NV);
  IMVKPFUN(glProgramUniform4i64NV);
  IMVKPFUN(glProgramUniform1i64vNV);
  IMVKPFUN(glProgramUniform2i64vNV);
  IMVKPFUN(glProgramUniform3i64vNV);
  IMVKPFUN(glProgramUniform4i64vNV);
  IMVKPFUN(glProgramUniform1ui64NV);
  IMVKPFUN(glProgramUniform2ui64NV);
  IMVKPFUN(glProgramUniform3ui64NV);
  IMVKPFUN(glProgramUniform4ui64NV);
  IMVKPFUN(glProgramUniform1ui64vNV);
  IMVKPFUN(glProgramUniform2ui64vNV);
  IMVKPFUN(glProgramUniform3ui64vNV);
  IMVKPFUN(glProgramUniform4ui64vNV);
  NowState.IS_LOAD_GL_NV_gpu_shader5 = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_instanced_arrays() {
  bool isAllLoaded = true;
  IMVKPFUN(glVertexAttribDivisorNV);
  NowState.IS_LOAD_GL_NV_instanced_arrays = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_internalformat_sample_query() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetInternalformatSampleivNV);
  NowState.IS_LOAD_GL_NV_internalformat_sample_query = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_memory_attachment() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetMemoryObjectDetachedResourcesuivNV);
  IMVKPFUN(glResetMemoryObjectParameterNV);
  IMVKPFUN(glTexAttachMemoryNV);
  IMVKPFUN(glBufferAttachMemoryNV);
  IMVKPFUN(glTextureAttachMemoryNV);
  IMVKPFUN(glNamedBufferAttachMemoryNV);
  NowState.IS_LOAD_GL_NV_memory_attachment = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_memory_object_sparse() {
  bool isAllLoaded = true;
  IMVKPFUN(glBufferPageCommitmentMemNV);
  IMVKPFUN(glTexPageCommitmentMemNV);
  IMVKPFUN(glNamedBufferPageCommitmentMemNV);
  IMVKPFUN(glTexturePageCommitmentMemNV);
  NowState.IS_LOAD_GL_NV_memory_object_sparse = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_mesh_shader() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawMeshTasksNV);
  IMVKPFUN(glDrawMeshTasksIndirectNV);
  IMVKPFUN(glMultiDrawMeshTasksIndirectNV);
  IMVKPFUN(glMultiDrawMeshTasksIndirectCountNV);
  NowState.IS_LOAD_GL_NV_mesh_shader = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_non_square_matrices() {
  bool isAllLoaded = true;
  IMVKPFUN(glUniformMatrix2x3fvNV);
  IMVKPFUN(glUniformMatrix3x2fvNV);
  IMVKPFUN(glUniformMatrix2x4fvNV);
  IMVKPFUN(glUniformMatrix4x2fvNV);
  IMVKPFUN(glUniformMatrix3x4fvNV);
  IMVKPFUN(glUniformMatrix4x3fvNV);
  NowState.IS_LOAD_GL_NV_non_square_matrices = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_path_rendering() {
  bool isAllLoaded = true;
  IMVKPFUN(glGenPathsNV);
  IMVKPFUN(glDeletePathsNV);
  IMVKPFUN(glIsPathNV);
  IMVKPFUN(glPathCommandsNV);
  IMVKPFUN(glPathCoordsNV);
  IMVKPFUN(glPathSubCommandsNV);
  IMVKPFUN(glPathSubCoordsNV);
  IMVKPFUN(glPathStringNV);
  IMVKPFUN(glPathGlyphsNV);
  IMVKPFUN(glPathGlyphRangeNV);
  IMVKPFUN(glWeightPathsNV);
  IMVKPFUN(glCopyPathNV);
  IMVKPFUN(glInterpolatePathsNV);
  IMVKPFUN(glTransformPathNV);
  IMVKPFUN(glPathParameterivNV);
  IMVKPFUN(glPathParameteriNV);
  IMVKPFUN(glPathParameterfvNV);
  IMVKPFUN(glPathParameterfNV);
  IMVKPFUN(glPathDashArrayNV);
  IMVKPFUN(glPathStencilFuncNV);
  IMVKPFUN(glPathStencilDepthOffsetNV);
  IMVKPFUN(glStencilFillPathNV);
  IMVKPFUN(glStencilStrokePathNV);
  IMVKPFUN(glStencilFillPathInstancedNV);
  IMVKPFUN(glStencilStrokePathInstancedNV);
  IMVKPFUN(glPathCoverDepthFuncNV);
  IMVKPFUN(glCoverFillPathNV);
  IMVKPFUN(glCoverStrokePathNV);
  IMVKPFUN(glCoverFillPathInstancedNV);
  IMVKPFUN(glCoverStrokePathInstancedNV);
  IMVKPFUN(glGetPathParameterivNV);
  IMVKPFUN(glGetPathParameterfvNV);
  IMVKPFUN(glGetPathCommandsNV);
  IMVKPFUN(glGetPathCoordsNV);
  IMVKPFUN(glGetPathDashArrayNV);
  IMVKPFUN(glGetPathMetricsNV);
  IMVKPFUN(glGetPathMetricRangeNV);
  IMVKPFUN(glGetPathSpacingNV);
  IMVKPFUN(glIsPointInFillPathNV);
  IMVKPFUN(glIsPointInStrokePathNV);
  IMVKPFUN(glGetPathLengthNV);
  IMVKPFUN(glPointAlongPathNV);
  IMVKPFUN(glMatrixLoad3x2fNV);
  IMVKPFUN(glMatrixLoad3x3fNV);
  IMVKPFUN(glMatrixLoadTranspose3x3fNV);
  IMVKPFUN(glMatrixMult3x2fNV);
  IMVKPFUN(glMatrixMult3x3fNV);
  IMVKPFUN(glMatrixMultTranspose3x3fNV);
  IMVKPFUN(glStencilThenCoverFillPathNV);
  IMVKPFUN(glStencilThenCoverStrokePathNV);
  IMVKPFUN(glStencilThenCoverFillPathInstancedNV);
  IMVKPFUN(glStencilThenCoverStrokePathInstancedNV);
  IMVKPFUN(glPathGlyphIndexRangeNV);
  IMVKPFUN(glPathGlyphIndexArrayNV);
  IMVKPFUN(glPathMemoryGlyphIndexArrayNV);
  IMVKPFUN(glProgramPathFragmentInputGenNV);
  IMVKPFUN(glGetProgramResourcefvNV);
  IMVKPFUN(glMatrixFrustumEXT);
  IMVKPFUN(glMatrixLoadIdentityEXT);
  IMVKPFUN(glMatrixLoadTransposefEXT);
  IMVKPFUN(glMatrixLoadTransposedEXT);
  IMVKPFUN(glMatrixLoadfEXT);
  IMVKPFUN(glMatrixLoaddEXT);
  IMVKPFUN(glMatrixMultTransposefEXT);
  IMVKPFUN(glMatrixMultTransposedEXT);
  IMVKPFUN(glMatrixMultfEXT);
  IMVKPFUN(glMatrixMultdEXT);
  IMVKPFUN(glMatrixOrthoEXT);
  IMVKPFUN(glMatrixPopEXT);
  IMVKPFUN(glMatrixPushEXT);
  IMVKPFUN(glMatrixRotatefEXT);
  IMVKPFUN(glMatrixRotatedEXT);
  IMVKPFUN(glMatrixScalefEXT);
  IMVKPFUN(glMatrixScaledEXT);
  IMVKPFUN(glMatrixTranslatefEXT);
  IMVKPFUN(glMatrixTranslatedEXT);
  NowState.IS_LOAD_GL_NV_path_rendering = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_polygon_mode() {
  bool isAllLoaded = true;
  IMVKPFUN(glPolygonModeNV);
  NowState.IS_LOAD_GL_NV_polygon_mode = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_read_buffer() {
  bool isAllLoaded = true;
  IMVKPFUN(glReadBufferNV);
  NowState.IS_LOAD_GL_NV_read_buffer = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_sample_locations() {
  bool isAllLoaded = true;
  IMVKPFUN(glFramebufferSampleLocationsfvNV);
  IMVKPFUN(glNamedFramebufferSampleLocationsfvNV);
  IMVKPFUN(glResolveDepthValuesNV);
  NowState.IS_LOAD_GL_NV_sample_locations = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_scissor_exclusive() {
  bool isAllLoaded = true;
  IMVKPFUN(glScissorExclusiveNV);
  IMVKPFUN(glScissorExclusiveArrayvNV);
  NowState.IS_LOAD_GL_NV_scissor_exclusive = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_shading_rate_image() {
  bool isAllLoaded = true;
  IMVKPFUN(glBindShadingRateImageNV);
  IMVKPFUN(glGetShadingRateImagePaletteNV);
  IMVKPFUN(glGetShadingRateSampleLocationivNV);
  IMVKPFUN(glShadingRateImageBarrierNV);
  IMVKPFUN(glShadingRateImagePaletteNV);
  IMVKPFUN(glShadingRateSampleOrderNV);
  IMVKPFUN(glShadingRateSampleOrderCustomNV);
  NowState.IS_LOAD_GL_NV_shading_rate_image = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_timeline_semaphore() {
  bool isAllLoaded = true;
  IMVKPFUN(glCreateSemaphoresNV);
  IMVKPFUN(glSemaphoreParameterivNV);
  IMVKPFUN(glGetSemaphoreParameterivNV);
  NowState.IS_LOAD_GL_NV_timeline_semaphore = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_viewport_array() {
  bool isAllLoaded = true;
  IMVKPFUN(glViewportArrayvNV);
  IMVKPFUN(glViewportIndexedfNV);
  IMVKPFUN(glViewportIndexedfvNV);
  IMVKPFUN(glScissorArrayvNV);
  IMVKPFUN(glScissorIndexedNV);
  IMVKPFUN(glScissorIndexedvNV);
  IMVKPFUN(glDepthRangeArrayfvNV);
  IMVKPFUN(glDepthRangeIndexedfNV);
  IMVKPFUN(glGetFloati_vNV);
  IMVKPFUN(glEnableiNV);
  IMVKPFUN(glDisableiNV);
  IMVKPFUN(glIsEnablediNV);
  NowState.IS_LOAD_GL_NV_viewport_array = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_NV_viewport_swizzle() {
  bool isAllLoaded = true;
  IMVKPFUN(glViewportSwizzleNV);
  NowState.IS_LOAD_GL_NV_viewport_swizzle = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_OVR_multiview() {
  bool isAllLoaded = true;
  IMVKPFUN(glFramebufferTextureMultiviewOVR);
  NowState.IS_LOAD_GL_OVR_multiview = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::
    TRY_LOAD_GL_OVR_multiview_multisampled_render_to_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glFramebufferTextureMultisampleMultiviewOVR);
  NowState.IS_LOAD_GL_OVR_multiview_multisampled_render_to_texture =
      isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_QCOM_alpha_test() {
  bool isAllLoaded = true;
  IMVKPFUN(glAlphaFuncQCOM);
  NowState.IS_LOAD_GL_QCOM_alpha_test = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_QCOM_driver_control() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetDriverControlsQCOM);
  IMVKPFUN(glGetDriverControlStringQCOM);
  IMVKPFUN(glEnableDriverControlQCOM);
  IMVKPFUN(glDisableDriverControlQCOM);
  NowState.IS_LOAD_GL_QCOM_driver_control = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_QCOM_extended_get() {
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
bool GLES2LoaderLoader::TRY_LOAD_GL_QCOM_extended_get2() {
  bool isAllLoaded = true;
  IMVKPFUN(glExtGetShadersQCOM);
  IMVKPFUN(glExtGetProgramsQCOM);
  IMVKPFUN(glExtIsProgramBinaryQCOM);
  IMVKPFUN(glExtGetProgramBinarySourceQCOM);
  NowState.IS_LOAD_GL_QCOM_extended_get2 = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_QCOM_frame_extrapolation() {
  bool isAllLoaded = true;
  IMVKPFUN(glExtrapolateTex2DQCOM);
  NowState.IS_LOAD_GL_QCOM_frame_extrapolation = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_QCOM_framebuffer_foveated() {
  bool isAllLoaded = true;
  IMVKPFUN(glFramebufferFoveationConfigQCOM);
  IMVKPFUN(glFramebufferFoveationParametersQCOM);
  NowState.IS_LOAD_GL_QCOM_framebuffer_foveated = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_QCOM_motion_estimation() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexEstimateMotionQCOM);
  IMVKPFUN(glTexEstimateMotionRegionsQCOM);
  NowState.IS_LOAD_GL_QCOM_motion_estimation = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::
    TRY_LOAD_GL_QCOM_shader_framebuffer_fetch_noncoherent() {
  bool isAllLoaded = true;
  IMVKPFUN(glFramebufferFetchBarrierQCOM);
  NowState.IS_LOAD_GL_QCOM_shader_framebuffer_fetch_noncoherent = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_QCOM_shading_rate() {
  bool isAllLoaded = true;
  IMVKPFUN(glShadingRateQCOM);
  NowState.IS_LOAD_GL_QCOM_shading_rate = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_QCOM_texture_foveated() {
  bool isAllLoaded = true;
  IMVKPFUN(glTextureFoveationParametersQCOM);
  NowState.IS_LOAD_GL_QCOM_texture_foveated = isAllLoaded;
  return isAllLoaded;
}
bool GLES2LoaderLoader::TRY_LOAD_GL_QCOM_tiled_rendering() {
  bool isAllLoaded = true;
  IMVKPFUN(glStartTilingQCOM);
  IMVKPFUN(glEndTilingQCOM);
  NowState.IS_LOAD_GL_QCOM_tiled_rendering = isAllLoaded;
  return isAllLoaded;
}
static GLES2LoaderLoader::GLES2LoaderLoader::MAP GLES2LoaderLoadermapping = {
    {{"GL_ES_VERSION_2_0", &GLES2LoaderLoader::TRY_LOAD_GL_ES_VERSION_2_0, 0},
     {"GL_ES_VERSION_3_0", &GLES2LoaderLoader::TRY_LOAD_GL_ES_VERSION_3_0, 1},
     {"GL_ES_VERSION_3_1", &GLES2LoaderLoader::TRY_LOAD_GL_ES_VERSION_3_1, 2},
     {"GL_ES_VERSION_3_2", &GLES2LoaderLoader::TRY_LOAD_GL_ES_VERSION_3_2, 3},
     {"GL_KHR_blend_equation_advanced",
      &GLES2LoaderLoader::TRY_LOAD_GL_KHR_blend_equation_advanced, 4},
     {"GL_KHR_debug", &GLES2LoaderLoader::TRY_LOAD_GL_KHR_debug, 5},
     {"GL_KHR_parallel_shader_compile",
      &GLES2LoaderLoader::TRY_LOAD_GL_KHR_parallel_shader_compile, 6},
     {"GL_KHR_robustness", &GLES2LoaderLoader::TRY_LOAD_GL_KHR_robustness, 7},
     {"GL_OES_EGL_image", &GLES2LoaderLoader::TRY_LOAD_GL_OES_EGL_image, 8},
     {"GL_OES_copy_image", &GLES2LoaderLoader::TRY_LOAD_GL_OES_copy_image, 9},
     {"GL_OES_draw_buffers_indexed",
      &GLES2LoaderLoader::TRY_LOAD_GL_OES_draw_buffers_indexed, 10},
     {"GL_OES_draw_elements_base_vertex",
      &GLES2LoaderLoader::TRY_LOAD_GL_OES_draw_elements_base_vertex, 11},
     {"GL_OES_geometry_shader",
      &GLES2LoaderLoader::TRY_LOAD_GL_OES_geometry_shader, 12},
     {"GL_OES_get_program_binary",
      &GLES2LoaderLoader::TRY_LOAD_GL_OES_get_program_binary, 13},
     {"GL_OES_mapbuffer", &GLES2LoaderLoader::TRY_LOAD_GL_OES_mapbuffer, 14},
     {"GL_OES_primitive_bounding_box",
      &GLES2LoaderLoader::TRY_LOAD_GL_OES_primitive_bounding_box, 15},
     {"GL_OES_sample_shading",
      &GLES2LoaderLoader::TRY_LOAD_GL_OES_sample_shading, 16},
     {"GL_OES_tessellation_shader",
      &GLES2LoaderLoader::TRY_LOAD_GL_OES_tessellation_shader, 17},
     {"GL_OES_texture_3D", &GLES2LoaderLoader::TRY_LOAD_GL_OES_texture_3D, 18},
     {"GL_OES_texture_border_clamp",
      &GLES2LoaderLoader::TRY_LOAD_GL_OES_texture_border_clamp, 19},
     {"GL_OES_texture_buffer",
      &GLES2LoaderLoader::TRY_LOAD_GL_OES_texture_buffer, 20},
     {"GL_OES_texture_storage_multisample_2d_array",
      &GLES2LoaderLoader::TRY_LOAD_GL_OES_texture_storage_multisample_2d_array,
      21},
     {"GL_OES_texture_view", &GLES2LoaderLoader::TRY_LOAD_GL_OES_texture_view,
      22},
     {"GL_OES_vertex_array_object",
      &GLES2LoaderLoader::TRY_LOAD_GL_OES_vertex_array_object, 23},
     {"GL_OES_viewport_array",
      &GLES2LoaderLoader::TRY_LOAD_GL_OES_viewport_array, 24},
     {"GL_AMD_framebuffer_multisample_advanced",
      &GLES2LoaderLoader::TRY_LOAD_GL_AMD_framebuffer_multisample_advanced, 25},
     {"GL_AMD_performance_monitor",
      &GLES2LoaderLoader::TRY_LOAD_GL_AMD_performance_monitor, 26},
     {"GL_ANGLE_framebuffer_blit",
      &GLES2LoaderLoader::TRY_LOAD_GL_ANGLE_framebuffer_blit, 27},
     {"GL_ANGLE_framebuffer_multisample",
      &GLES2LoaderLoader::TRY_LOAD_GL_ANGLE_framebuffer_multisample, 28},
     {"GL_ANGLE_instanced_arrays",
      &GLES2LoaderLoader::TRY_LOAD_GL_ANGLE_instanced_arrays, 29},
     {"GL_ANGLE_translated_shader_source",
      &GLES2LoaderLoader::TRY_LOAD_GL_ANGLE_translated_shader_source, 30},
     {"GL_APPLE_copy_texture_levels",
      &GLES2LoaderLoader::TRY_LOAD_GL_APPLE_copy_texture_levels, 31},
     {"GL_APPLE_framebuffer_multisample",
      &GLES2LoaderLoader::TRY_LOAD_GL_APPLE_framebuffer_multisample, 32},
     {"GL_APPLE_sync", &GLES2LoaderLoader::TRY_LOAD_GL_APPLE_sync, 33},
     {"GL_ARM_shader_core_properties",
      &GLES2LoaderLoader::TRY_LOAD_GL_ARM_shader_core_properties, 34},
     {"GL_EXT_EGL_image_storage",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_EGL_image_storage, 35},
     {"GL_EXT_base_instance", &GLES2LoaderLoader::TRY_LOAD_GL_EXT_base_instance,
      36},
     {"GL_EXT_blend_func_extended",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_blend_func_extended, 37},
     {"GL_EXT_buffer_storage",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_buffer_storage, 38},
     {"GL_EXT_clear_texture", &GLES2LoaderLoader::TRY_LOAD_GL_EXT_clear_texture,
      39},
     {"GL_EXT_clip_control", &GLES2LoaderLoader::TRY_LOAD_GL_EXT_clip_control,
      40},
     {"GL_EXT_copy_image", &GLES2LoaderLoader::TRY_LOAD_GL_EXT_copy_image, 41},
     {"GL_EXT_debug_label", &GLES2LoaderLoader::TRY_LOAD_GL_EXT_debug_label,
      42},
     {"GL_EXT_debug_marker", &GLES2LoaderLoader::TRY_LOAD_GL_EXT_debug_marker,
      43},
     {"GL_EXT_discard_framebuffer",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_discard_framebuffer, 44},
     {"GL_EXT_disjoint_timer_query",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_disjoint_timer_query, 45},
     {"GL_EXT_draw_buffers", &GLES2LoaderLoader::TRY_LOAD_GL_EXT_draw_buffers,
      46},
     {"GL_EXT_draw_buffers_indexed",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_draw_buffers_indexed, 47},
     {"GL_EXT_draw_elements_base_vertex",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_draw_elements_base_vertex, 48},
     {"GL_EXT_draw_instanced",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_draw_instanced, 49},
     {"GL_EXT_draw_transform_feedback",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_draw_transform_feedback, 50},
     {"GL_EXT_external_buffer",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_external_buffer, 51},
     {"GL_EXT_fragment_shading_rate",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_fragment_shading_rate, 52},
     {"GL_EXT_framebuffer_blit_layers",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_framebuffer_blit_layers, 53},
     {"GL_EXT_geometry_shader",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_geometry_shader, 54},
     {"GL_EXT_instanced_arrays",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_instanced_arrays, 55},
     {"GL_EXT_map_buffer_range",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_map_buffer_range, 56},
     {"GL_EXT_memory_object", &GLES2LoaderLoader::TRY_LOAD_GL_EXT_memory_object,
      57},
     {"GL_EXT_memory_object_fd",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_memory_object_fd, 58},
     {"GL_EXT_memory_object_win32",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_memory_object_win32, 59},
     {"GL_EXT_multi_draw_arrays",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_multi_draw_arrays, 60},
     {"GL_EXT_multi_draw_indirect",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_multi_draw_indirect, 61},
     {"GL_EXT_multisampled_render_to_texture",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_multisampled_render_to_texture, 62},
     {"GL_EXT_multiview_draw_buffers",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_multiview_draw_buffers, 63},
     {"GL_EXT_polygon_offset_clamp",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_polygon_offset_clamp, 64},
     {"GL_EXT_primitive_bounding_box",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_primitive_bounding_box, 65},
     {"GL_EXT_raster_multisample",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_raster_multisample, 66},
     {"GL_EXT_robustness", &GLES2LoaderLoader::TRY_LOAD_GL_EXT_robustness, 67},
     {"GL_EXT_semaphore", &GLES2LoaderLoader::TRY_LOAD_GL_EXT_semaphore, 68},
     {"GL_EXT_semaphore_fd", &GLES2LoaderLoader::TRY_LOAD_GL_EXT_semaphore_fd,
      69},
     {"GL_EXT_semaphore_win32",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_semaphore_win32, 70},
     {"GL_EXT_separate_shader_objects",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_separate_shader_objects, 71},
     {"GL_EXT_shader_framebuffer_fetch_non_coherent",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_shader_framebuffer_fetch_non_coherent,
      72},
     {"GL_EXT_shader_pixel_local_storage2",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_shader_pixel_local_storage2, 73},
     {"GL_EXT_sparse_texture",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_sparse_texture, 74},
     {"GL_EXT_tessellation_shader",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_tessellation_shader, 75},
     {"GL_EXT_texture_border_clamp",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_texture_border_clamp, 76},
     {"GL_EXT_texture_buffer",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_texture_buffer, 77},
     {"GL_EXT_texture_storage",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_texture_storage, 78},
     {"GL_EXT_texture_storage_compression",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_texture_storage_compression, 79},
     {"GL_EXT_texture_view", &GLES2LoaderLoader::TRY_LOAD_GL_EXT_texture_view,
      80},
     {"GL_EXT_win32_keyed_mutex",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_win32_keyed_mutex, 81},
     {"GL_EXT_window_rectangles",
      &GLES2LoaderLoader::TRY_LOAD_GL_EXT_window_rectangles, 82},
     {"GL_IMG_bindless_texture",
      &GLES2LoaderLoader::TRY_LOAD_GL_IMG_bindless_texture, 83},
     {"GL_IMG_framebuffer_downsample",
      &GLES2LoaderLoader::TRY_LOAD_GL_IMG_framebuffer_downsample, 84},
     {"GL_IMG_multisampled_render_to_texture",
      &GLES2LoaderLoader::TRY_LOAD_GL_IMG_multisampled_render_to_texture, 85},
     {"GL_INTEL_framebuffer_CMAA",
      &GLES2LoaderLoader::TRY_LOAD_GL_INTEL_framebuffer_CMAA, 86},
     {"GL_INTEL_performance_query",
      &GLES2LoaderLoader::TRY_LOAD_GL_INTEL_performance_query, 87},
     {"GL_MESA_framebuffer_flip_y",
      &GLES2LoaderLoader::TRY_LOAD_GL_MESA_framebuffer_flip_y, 88},
     {"GL_MESA_sampler_objects",
      &GLES2LoaderLoader::TRY_LOAD_GL_MESA_sampler_objects, 89},
     {"GL_NV_bindless_texture",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_bindless_texture, 90},
     {"GL_NV_blend_equation_advanced",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_blend_equation_advanced, 91},
     {"GL_NV_clip_space_w_scaling",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_clip_space_w_scaling, 92},
     {"GL_NV_conditional_render",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_conditional_render, 93},
     {"GL_NV_conservative_raster",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_conservative_raster, 94},
     {"GL_NV_conservative_raster_pre_snap_triangles",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_conservative_raster_pre_snap_triangles,
      95},
     {"GL_NV_copy_buffer", &GLES2LoaderLoader::TRY_LOAD_GL_NV_copy_buffer, 96},
     {"GL_NV_coverage_sample",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_coverage_sample, 97},
     {"GL_NV_draw_buffers", &GLES2LoaderLoader::TRY_LOAD_GL_NV_draw_buffers,
      98},
     {"GL_NV_draw_instanced", &GLES2LoaderLoader::TRY_LOAD_GL_NV_draw_instanced,
      99},
     {"GL_NV_draw_vulkan_image",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_draw_vulkan_image, 100},
     {"GL_NV_fence", &GLES2LoaderLoader::TRY_LOAD_GL_NV_fence, 101},
     {"GL_NV_fragment_coverage_to_color",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_fragment_coverage_to_color, 102},
     {"GL_NV_framebuffer_blit",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_framebuffer_blit, 103},
     {"GL_NV_framebuffer_mixed_samples",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_framebuffer_mixed_samples, 104},
     {"GL_NV_framebuffer_multisample",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_framebuffer_multisample, 105},
     {"GL_NV_gpu_shader5", &GLES2LoaderLoader::TRY_LOAD_GL_NV_gpu_shader5, 106},
     {"GL_NV_instanced_arrays",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_instanced_arrays, 107},
     {"GL_NV_internalformat_sample_query",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_internalformat_sample_query, 108},
     {"GL_NV_memory_attachment",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_memory_attachment, 109},
     {"GL_NV_memory_object_sparse",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_memory_object_sparse, 110},
     {"GL_NV_mesh_shader", &GLES2LoaderLoader::TRY_LOAD_GL_NV_mesh_shader, 111},
     {"GL_NV_non_square_matrices",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_non_square_matrices, 112},
     {"GL_NV_path_rendering", &GLES2LoaderLoader::TRY_LOAD_GL_NV_path_rendering,
      113},
     {"GL_NV_polygon_mode", &GLES2LoaderLoader::TRY_LOAD_GL_NV_polygon_mode,
      114},
     {"GL_NV_read_buffer", &GLES2LoaderLoader::TRY_LOAD_GL_NV_read_buffer, 115},
     {"GL_NV_sample_locations",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_sample_locations, 116},
     {"GL_NV_scissor_exclusive",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_scissor_exclusive, 117},
     {"GL_NV_shading_rate_image",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_shading_rate_image, 118},
     {"GL_NV_timeline_semaphore",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_timeline_semaphore, 119},
     {"GL_NV_viewport_array", &GLES2LoaderLoader::TRY_LOAD_GL_NV_viewport_array,
      120},
     {"GL_NV_viewport_swizzle",
      &GLES2LoaderLoader::TRY_LOAD_GL_NV_viewport_swizzle, 121},
     {"GL_OVR_multiview", &GLES2LoaderLoader::TRY_LOAD_GL_OVR_multiview, 122},
     {"GL_OVR_multiview_multisampled_render_to_texture",
      &GLES2LoaderLoader::
          TRY_LOAD_GL_OVR_multiview_multisampled_render_to_texture,
      123},
     {"GL_QCOM_alpha_test", &GLES2LoaderLoader::TRY_LOAD_GL_QCOM_alpha_test,
      124},
     {"GL_QCOM_driver_control",
      &GLES2LoaderLoader::TRY_LOAD_GL_QCOM_driver_control, 125},
     {"GL_QCOM_extended_get", &GLES2LoaderLoader::TRY_LOAD_GL_QCOM_extended_get,
      126},
     {"GL_QCOM_extended_get2",
      &GLES2LoaderLoader::TRY_LOAD_GL_QCOM_extended_get2, 127},
     {"GL_QCOM_frame_extrapolation",
      &GLES2LoaderLoader::TRY_LOAD_GL_QCOM_frame_extrapolation, 128},
     {"GL_QCOM_framebuffer_foveated",
      &GLES2LoaderLoader::TRY_LOAD_GL_QCOM_framebuffer_foveated, 129},
     {"GL_QCOM_motion_estimation",
      &GLES2LoaderLoader::TRY_LOAD_GL_QCOM_motion_estimation, 130},
     {"GL_QCOM_shader_framebuffer_fetch_noncoherent",
      &GLES2LoaderLoader::TRY_LOAD_GL_QCOM_shader_framebuffer_fetch_noncoherent,
      131},
     {"GL_QCOM_shading_rate", &GLES2LoaderLoader::TRY_LOAD_GL_QCOM_shading_rate,
      132},
     {"GL_QCOM_texture_foveated",
      &GLES2LoaderLoader::TRY_LOAD_GL_QCOM_texture_foveated, 133},
     {"GL_QCOM_tiled_rendering",
      &GLES2LoaderLoader::TRY_LOAD_GL_QCOM_tiled_rendering, 134}}};
std::vector<GLES2LoaderLoader::GLES2LoaderLoader::EXTLOADER>
GLES2LoaderLoader::TRAN2FUN(const std::vector<std::string> &list) {
  std::vector<EXTLOADER> output;
  for (auto &s : list) {
    auto as = GLES2LoaderLoadermapping.TYPE1map[s];
    if (as) {
      output.push_back(as->type2);
    } else {
      output.push_back(0);
    }
  }
  return output;
}
std::vector<size_t>
GLES2LoaderLoader::TRAN(const std::vector<std::string> &list) {
  std::vector<size_t> output;
  for (auto &s : list) {
    auto as = GLES2LoaderLoadermapping.TYPE1map[s];
    if (as) {
      output.push_back(as->type3);
    } else {
      output.push_back(-1);
    }
  }
  return output;
}
bool GLES2LoaderLoader::MappingToNeedLoad(const std::vector<size_t> &list) {
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
