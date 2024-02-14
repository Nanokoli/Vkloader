#include "OpenGLLoader.hpp"

#define IMVKPFUN(NAME)                                                         \
  isAllLoaded = ((NAME = (PFN_##NAME)LoadFunc(userptr, #NAME)) != nullptr)     \
                    ? isAllLoaded                                              \
                    : false;
#define IFNEEDLOADVKEXT(NAME)                                                  \
  isAllLoaded.IS_LOAD_##NAME =                                                 \
      (NeedLoad.IS_LOAD_##NAME ? TRY_LOAD_##NAME##() : true);

OpenGLLoaderPHILoader::OpenGLLoaderPHILoader() {
  libHandle = nullptr;
  userptr = this;
  LoadFunc = phiLoadFunc;
}
bool OpenGLLoaderPHILoader::init() {
  if (!libHandle) {
    libHandle = GetOpenGLLoaderLibHandle();
  }
  return libHandle;
}
APIProc OpenGLLoaderPHILoader::phiLoadFunc(void *userptr,
                                           std::string_view name) {
  OpenGLLoaderPHILoader *context = (OpenGLLoaderPHILoader *)userptr;
  return GetPtrFrom_handle(context->libHandle, name.data());
}

OpenGLLoaderLoader::OpenGLLoaderLoader() {
  NowState.AllSetFalse();
  NeedLoad.AllSetFalse();
}
OpenGLLoaderLoader::Flags OpenGLLoaderLoader::LoadAll() {
  Flags isAllLoaded;
  isAllLoaded.AllSetFalse();
  IFNEEDLOADVKEXT(GL_VERSION_1_2);
  IFNEEDLOADVKEXT(GL_VERSION_1_3);
  IFNEEDLOADVKEXT(GL_VERSION_1_4);
  IFNEEDLOADVKEXT(GL_VERSION_1_5);
  IFNEEDLOADVKEXT(GL_VERSION_2_0);
  IFNEEDLOADVKEXT(GL_VERSION_2_1);
  IFNEEDLOADVKEXT(GL_VERSION_3_0);
  IFNEEDLOADVKEXT(GL_VERSION_3_1);
  IFNEEDLOADVKEXT(GL_VERSION_3_2);
  IFNEEDLOADVKEXT(GL_VERSION_3_3);
  IFNEEDLOADVKEXT(GL_VERSION_4_0);
  IFNEEDLOADVKEXT(GL_VERSION_4_1);
  IFNEEDLOADVKEXT(GL_VERSION_4_2);
  IFNEEDLOADVKEXT(GL_VERSION_4_3);
  IFNEEDLOADVKEXT(GL_VERSION_4_4);
  IFNEEDLOADVKEXT(GL_VERSION_4_5);
  IFNEEDLOADVKEXT(GL_VERSION_4_6);
  IFNEEDLOADVKEXT(GL_ARB_ES3_2_compatibility);
  IFNEEDLOADVKEXT(GL_ARB_bindless_texture);
  IFNEEDLOADVKEXT(GL_ARB_cl_event);
  IFNEEDLOADVKEXT(GL_ARB_color_buffer_float);
  IFNEEDLOADVKEXT(GL_ARB_compute_variable_group_size);
  IFNEEDLOADVKEXT(GL_ARB_debug_output);
  IFNEEDLOADVKEXT(GL_ARB_draw_buffers);
  IFNEEDLOADVKEXT(GL_ARB_draw_buffers_blend);
  IFNEEDLOADVKEXT(GL_ARB_draw_instanced);
  IFNEEDLOADVKEXT(GL_ARB_fragment_program);
  IFNEEDLOADVKEXT(GL_ARB_geometry_shader4);
  IFNEEDLOADVKEXT(GL_ARB_gl_spirv);
  IFNEEDLOADVKEXT(GL_ARB_gpu_shader_int64);
  IFNEEDLOADVKEXT(GL_ARB_imaging);
  IFNEEDLOADVKEXT(GL_ARB_indirect_parameters);
  IFNEEDLOADVKEXT(GL_ARB_instanced_arrays);
  IFNEEDLOADVKEXT(GL_ARB_matrix_palette);
  IFNEEDLOADVKEXT(GL_ARB_multisample);
  IFNEEDLOADVKEXT(GL_ARB_multitexture);
  IFNEEDLOADVKEXT(GL_ARB_occlusion_query);
  IFNEEDLOADVKEXT(GL_ARB_parallel_shader_compile);
  IFNEEDLOADVKEXT(GL_ARB_point_parameters);
  IFNEEDLOADVKEXT(GL_ARB_robustness);
  IFNEEDLOADVKEXT(GL_ARB_sample_locations);
  IFNEEDLOADVKEXT(GL_ARB_sample_shading);
  IFNEEDLOADVKEXT(GL_ARB_shader_objects);
  IFNEEDLOADVKEXT(GL_ARB_shading_language_include);
  IFNEEDLOADVKEXT(GL_ARB_sparse_buffer);
  IFNEEDLOADVKEXT(GL_ARB_sparse_texture);
  IFNEEDLOADVKEXT(GL_ARB_texture_buffer_object);
  IFNEEDLOADVKEXT(GL_ARB_texture_compression);
  IFNEEDLOADVKEXT(GL_ARB_transpose_matrix);
  IFNEEDLOADVKEXT(GL_ARB_vertex_blend);
  IFNEEDLOADVKEXT(GL_ARB_vertex_buffer_object);
  IFNEEDLOADVKEXT(GL_ARB_vertex_program);
  IFNEEDLOADVKEXT(GL_ARB_vertex_shader);
  IFNEEDLOADVKEXT(GL_ARB_viewport_array);
  IFNEEDLOADVKEXT(GL_ARB_window_pos);
  IFNEEDLOADVKEXT(GL_KHR_blend_equation_advanced);
  IFNEEDLOADVKEXT(GL_KHR_parallel_shader_compile);
  IFNEEDLOADVKEXT(GL_OES_byte_coordinates);
  IFNEEDLOADVKEXT(GL_OES_fixed_point);
  IFNEEDLOADVKEXT(GL_OES_query_matrix);
  IFNEEDLOADVKEXT(GL_OES_single_precision);
  IFNEEDLOADVKEXT(GL_3DFX_tbuffer);
  IFNEEDLOADVKEXT(GL_AMD_debug_output);
  IFNEEDLOADVKEXT(GL_AMD_draw_buffers_blend);
  IFNEEDLOADVKEXT(GL_AMD_framebuffer_multisample_advanced);
  IFNEEDLOADVKEXT(GL_AMD_framebuffer_sample_positions);
  IFNEEDLOADVKEXT(GL_AMD_gpu_shader_int64);
  IFNEEDLOADVKEXT(GL_AMD_interleaved_elements);
  IFNEEDLOADVKEXT(GL_AMD_multi_draw_indirect);
  IFNEEDLOADVKEXT(GL_AMD_name_gen_delete);
  IFNEEDLOADVKEXT(GL_AMD_occlusion_query_event);
  IFNEEDLOADVKEXT(GL_AMD_performance_monitor);
  IFNEEDLOADVKEXT(GL_AMD_sample_positions);
  IFNEEDLOADVKEXT(GL_AMD_sparse_texture);
  IFNEEDLOADVKEXT(GL_AMD_stencil_operation_extended);
  IFNEEDLOADVKEXT(GL_AMD_vertex_shader_tessellator);
  IFNEEDLOADVKEXT(GL_APPLE_element_array);
  IFNEEDLOADVKEXT(GL_APPLE_fence);
  IFNEEDLOADVKEXT(GL_APPLE_flush_buffer_range);
  IFNEEDLOADVKEXT(GL_APPLE_object_purgeable);
  IFNEEDLOADVKEXT(GL_APPLE_texture_range);
  IFNEEDLOADVKEXT(GL_APPLE_vertex_array_object);
  IFNEEDLOADVKEXT(GL_APPLE_vertex_array_range);
  IFNEEDLOADVKEXT(GL_APPLE_vertex_program_evaluators);
  IFNEEDLOADVKEXT(GL_ATI_draw_buffers);
  IFNEEDLOADVKEXT(GL_ATI_element_array);
  IFNEEDLOADVKEXT(GL_ATI_envmap_bumpmap);
  IFNEEDLOADVKEXT(GL_ATI_fragment_shader);
  IFNEEDLOADVKEXT(GL_ATI_map_object_buffer);
  IFNEEDLOADVKEXT(GL_ATI_pn_triangles);
  IFNEEDLOADVKEXT(GL_ATI_separate_stencil);
  IFNEEDLOADVKEXT(GL_ATI_vertex_array_object);
  IFNEEDLOADVKEXT(GL_ATI_vertex_attrib_array_object);
  IFNEEDLOADVKEXT(GL_ATI_vertex_streams);
  IFNEEDLOADVKEXT(GL_EXT_EGL_image_storage);
  IFNEEDLOADVKEXT(GL_EXT_bindable_uniform);
  IFNEEDLOADVKEXT(GL_EXT_blend_color);
  IFNEEDLOADVKEXT(GL_EXT_blend_equation_separate);
  IFNEEDLOADVKEXT(GL_EXT_blend_func_separate);
  IFNEEDLOADVKEXT(GL_EXT_blend_minmax);
  IFNEEDLOADVKEXT(GL_EXT_color_subtable);
  IFNEEDLOADVKEXT(GL_EXT_compiled_vertex_array);
  IFNEEDLOADVKEXT(GL_EXT_convolution);
  IFNEEDLOADVKEXT(GL_EXT_coordinate_frame);
  IFNEEDLOADVKEXT(GL_EXT_copy_texture);
  IFNEEDLOADVKEXT(GL_EXT_cull_vertex);
  IFNEEDLOADVKEXT(GL_EXT_debug_label);
  IFNEEDLOADVKEXT(GL_EXT_debug_marker);
  IFNEEDLOADVKEXT(GL_EXT_depth_bounds_test);
  IFNEEDLOADVKEXT(GL_EXT_direct_state_access);
  IFNEEDLOADVKEXT(GL_EXT_draw_buffers2);
  IFNEEDLOADVKEXT(GL_EXT_draw_instanced);
  IFNEEDLOADVKEXT(GL_EXT_draw_range_elements);
  IFNEEDLOADVKEXT(GL_EXT_external_buffer);
  IFNEEDLOADVKEXT(GL_EXT_fog_coord);
  IFNEEDLOADVKEXT(GL_EXT_framebuffer_blit);
  IFNEEDLOADVKEXT(GL_EXT_framebuffer_blit_layers);
  IFNEEDLOADVKEXT(GL_EXT_framebuffer_multisample);
  IFNEEDLOADVKEXT(GL_EXT_framebuffer_object);
  IFNEEDLOADVKEXT(GL_EXT_geometry_shader4);
  IFNEEDLOADVKEXT(GL_EXT_gpu_program_parameters);
  IFNEEDLOADVKEXT(GL_EXT_gpu_shader4);
  IFNEEDLOADVKEXT(GL_EXT_histogram);
  IFNEEDLOADVKEXT(GL_EXT_index_func);
  IFNEEDLOADVKEXT(GL_EXT_index_material);
  IFNEEDLOADVKEXT(GL_EXT_light_texture);
  IFNEEDLOADVKEXT(GL_EXT_memory_object);
  IFNEEDLOADVKEXT(GL_EXT_memory_object_fd);
  IFNEEDLOADVKEXT(GL_EXT_memory_object_win32);
  IFNEEDLOADVKEXT(GL_EXT_multi_draw_arrays);
  IFNEEDLOADVKEXT(GL_EXT_multisample);
  IFNEEDLOADVKEXT(GL_EXT_paletted_texture);
  IFNEEDLOADVKEXT(GL_EXT_pixel_transform);
  IFNEEDLOADVKEXT(GL_EXT_point_parameters);
  IFNEEDLOADVKEXT(GL_EXT_polygon_offset);
  IFNEEDLOADVKEXT(GL_EXT_polygon_offset_clamp);
  IFNEEDLOADVKEXT(GL_EXT_provoking_vertex);
  IFNEEDLOADVKEXT(GL_EXT_raster_multisample);
  IFNEEDLOADVKEXT(GL_EXT_secondary_color);
  IFNEEDLOADVKEXT(GL_EXT_semaphore);
  IFNEEDLOADVKEXT(GL_EXT_semaphore_fd);
  IFNEEDLOADVKEXT(GL_EXT_semaphore_win32);
  IFNEEDLOADVKEXT(GL_EXT_separate_shader_objects);
  IFNEEDLOADVKEXT(GL_EXT_shader_framebuffer_fetch_non_coherent);
  IFNEEDLOADVKEXT(GL_EXT_shader_image_load_store);
  IFNEEDLOADVKEXT(GL_EXT_stencil_clear_tag);
  IFNEEDLOADVKEXT(GL_EXT_stencil_two_side);
  IFNEEDLOADVKEXT(GL_EXT_subtexture);
  IFNEEDLOADVKEXT(GL_EXT_texture3D);
  IFNEEDLOADVKEXT(GL_EXT_texture_array);
  IFNEEDLOADVKEXT(GL_EXT_texture_buffer_object);
  IFNEEDLOADVKEXT(GL_EXT_texture_integer);
  IFNEEDLOADVKEXT(GL_EXT_texture_object);
  IFNEEDLOADVKEXT(GL_EXT_texture_perturb_normal);
  IFNEEDLOADVKEXT(GL_EXT_texture_storage);
  IFNEEDLOADVKEXT(GL_EXT_timer_query);
  IFNEEDLOADVKEXT(GL_EXT_transform_feedback);
  IFNEEDLOADVKEXT(GL_EXT_vertex_array);
  IFNEEDLOADVKEXT(GL_EXT_vertex_attrib_64bit);
  IFNEEDLOADVKEXT(GL_EXT_vertex_shader);
  IFNEEDLOADVKEXT(GL_EXT_vertex_weighting);
  IFNEEDLOADVKEXT(GL_EXT_win32_keyed_mutex);
  IFNEEDLOADVKEXT(GL_EXT_window_rectangles);
  IFNEEDLOADVKEXT(GL_EXT_x11_sync_object);
  IFNEEDLOADVKEXT(GL_GREMEDY_frame_terminator);
  IFNEEDLOADVKEXT(GL_GREMEDY_string_marker);
  IFNEEDLOADVKEXT(GL_HP_image_transform);
  IFNEEDLOADVKEXT(GL_IBM_multimode_draw_arrays);
  IFNEEDLOADVKEXT(GL_IBM_static_data);
  IFNEEDLOADVKEXT(GL_IBM_vertex_array_lists);
  IFNEEDLOADVKEXT(GL_INGR_blend_func_separate);
  IFNEEDLOADVKEXT(GL_INTEL_framebuffer_CMAA);
  IFNEEDLOADVKEXT(GL_INTEL_map_texture);
  IFNEEDLOADVKEXT(GL_INTEL_parallel_arrays);
  IFNEEDLOADVKEXT(GL_INTEL_performance_query);
  IFNEEDLOADVKEXT(GL_MESA_framebuffer_flip_y);
  IFNEEDLOADVKEXT(GL_MESA_resize_buffers);
  IFNEEDLOADVKEXT(GL_MESA_window_pos);
  IFNEEDLOADVKEXT(GL_NVX_conditional_render);
  IFNEEDLOADVKEXT(GL_NVX_gpu_multicast2);
  IFNEEDLOADVKEXT(GL_NVX_linked_gpu_multicast);
  IFNEEDLOADVKEXT(GL_NVX_progress_fence);
  IFNEEDLOADVKEXT(GL_NV_alpha_to_coverage_dither_control);
  IFNEEDLOADVKEXT(GL_NV_bindless_multi_draw_indirect);
  IFNEEDLOADVKEXT(GL_NV_bindless_multi_draw_indirect_count);
  IFNEEDLOADVKEXT(GL_NV_bindless_texture);
  IFNEEDLOADVKEXT(GL_NV_blend_equation_advanced);
  IFNEEDLOADVKEXT(GL_NV_clip_space_w_scaling);
  IFNEEDLOADVKEXT(GL_NV_command_list);
  IFNEEDLOADVKEXT(GL_NV_conditional_render);
  IFNEEDLOADVKEXT(GL_NV_conservative_raster);
  IFNEEDLOADVKEXT(GL_NV_conservative_raster_dilate);
  IFNEEDLOADVKEXT(GL_NV_conservative_raster_pre_snap_triangles);
  IFNEEDLOADVKEXT(GL_NV_copy_image);
  IFNEEDLOADVKEXT(GL_NV_depth_buffer_float);
  IFNEEDLOADVKEXT(GL_NV_draw_texture);
  IFNEEDLOADVKEXT(GL_NV_draw_vulkan_image);
  IFNEEDLOADVKEXT(GL_NV_evaluators);
  IFNEEDLOADVKEXT(GL_NV_explicit_multisample);
  IFNEEDLOADVKEXT(GL_NV_fence);
  IFNEEDLOADVKEXT(GL_NV_fragment_coverage_to_color);
  IFNEEDLOADVKEXT(GL_NV_fragment_program);
  IFNEEDLOADVKEXT(GL_NV_framebuffer_mixed_samples);
  IFNEEDLOADVKEXT(GL_NV_framebuffer_multisample_coverage);
  IFNEEDLOADVKEXT(GL_NV_geometry_program4);
  IFNEEDLOADVKEXT(GL_NV_gpu_multicast);
  IFNEEDLOADVKEXT(GL_NV_gpu_program4);
  IFNEEDLOADVKEXT(GL_NV_gpu_program5);
  IFNEEDLOADVKEXT(GL_NV_half_float);
  IFNEEDLOADVKEXT(GL_NV_internalformat_sample_query);
  IFNEEDLOADVKEXT(GL_NV_memory_attachment);
  IFNEEDLOADVKEXT(GL_NV_memory_object_sparse);
  IFNEEDLOADVKEXT(GL_NV_mesh_shader);
  IFNEEDLOADVKEXT(GL_NV_occlusion_query);
  IFNEEDLOADVKEXT(GL_NV_parameter_buffer_object);
  IFNEEDLOADVKEXT(GL_NV_path_rendering);
  IFNEEDLOADVKEXT(GL_NV_pixel_data_range);
  IFNEEDLOADVKEXT(GL_NV_point_sprite);
  IFNEEDLOADVKEXT(GL_NV_present_video);
  IFNEEDLOADVKEXT(GL_NV_primitive_restart);
  IFNEEDLOADVKEXT(GL_NV_query_resource);
  IFNEEDLOADVKEXT(GL_NV_query_resource_tag);
  IFNEEDLOADVKEXT(GL_NV_register_combiners);
  IFNEEDLOADVKEXT(GL_NV_register_combiners2);
  IFNEEDLOADVKEXT(GL_NV_sample_locations);
  IFNEEDLOADVKEXT(GL_NV_scissor_exclusive);
  IFNEEDLOADVKEXT(GL_NV_shader_buffer_load);
  IFNEEDLOADVKEXT(GL_NV_shading_rate_image);
  IFNEEDLOADVKEXT(GL_NV_texture_barrier);
  IFNEEDLOADVKEXT(GL_NV_texture_multisample);
  IFNEEDLOADVKEXT(GL_NV_timeline_semaphore);
  IFNEEDLOADVKEXT(GL_NV_transform_feedback);
  IFNEEDLOADVKEXT(GL_NV_transform_feedback2);
  IFNEEDLOADVKEXT(GL_NV_vdpau_interop);
  IFNEEDLOADVKEXT(GL_NV_vdpau_interop2);
  IFNEEDLOADVKEXT(GL_NV_vertex_array_range);
  IFNEEDLOADVKEXT(GL_NV_vertex_attrib_integer_64bit);
  IFNEEDLOADVKEXT(GL_NV_vertex_buffer_unified_memory);
  IFNEEDLOADVKEXT(GL_NV_vertex_program);
  IFNEEDLOADVKEXT(GL_NV_video_capture);
  IFNEEDLOADVKEXT(GL_NV_viewport_swizzle);
  IFNEEDLOADVKEXT(GL_OVR_multiview);
  IFNEEDLOADVKEXT(GL_PGI_misc_hints);
  IFNEEDLOADVKEXT(GL_SGIS_detail_texture);
  IFNEEDLOADVKEXT(GL_SGIS_fog_function);
  IFNEEDLOADVKEXT(GL_SGIS_multisample);
  IFNEEDLOADVKEXT(GL_SGIS_pixel_texture);
  IFNEEDLOADVKEXT(GL_SGIS_point_parameters);
  IFNEEDLOADVKEXT(GL_SGIS_sharpen_texture);
  IFNEEDLOADVKEXT(GL_SGIS_texture4D);
  IFNEEDLOADVKEXT(GL_SGIS_texture_color_mask);
  IFNEEDLOADVKEXT(GL_SGIS_texture_filter4);
  IFNEEDLOADVKEXT(GL_SGIX_async);
  IFNEEDLOADVKEXT(GL_SGIX_flush_raster);
  IFNEEDLOADVKEXT(GL_SGIX_fragment_lighting);
  IFNEEDLOADVKEXT(GL_SGIX_framezoom);
  IFNEEDLOADVKEXT(GL_SGIX_igloo_interface);
  IFNEEDLOADVKEXT(GL_SGIX_instruments);
  IFNEEDLOADVKEXT(GL_SGIX_list_priority);
  IFNEEDLOADVKEXT(GL_SGIX_pixel_texture);
  IFNEEDLOADVKEXT(GL_SGIX_polynomial_ffd);
  IFNEEDLOADVKEXT(GL_SGIX_reference_plane);
  IFNEEDLOADVKEXT(GL_SGIX_sprite);
  IFNEEDLOADVKEXT(GL_SGIX_tag_sample_buffer);
  IFNEEDLOADVKEXT(GL_SGI_color_table);
  IFNEEDLOADVKEXT(GL_SUNX_constant_data);
  IFNEEDLOADVKEXT(GL_SUN_global_alpha);
  IFNEEDLOADVKEXT(GL_SUN_mesh_array);
  IFNEEDLOADVKEXT(GL_SUN_triangle_list);
  IFNEEDLOADVKEXT(GL_SUN_vertex);
  IFNEEDLOADVKEXT(GL_VERSION_1_0);
  IFNEEDLOADVKEXT(GL_VERSION_1_1);
  IFNEEDLOADVKEXT(GL_NV_gpu_shader5);
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_1_2() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawRangeElements);
  IMVKPFUN(glTexImage3D);
  IMVKPFUN(glTexSubImage3D);
  IMVKPFUN(glCopyTexSubImage3D);
  NowState.IS_LOAD_GL_VERSION_1_2 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_1_3() {
  bool isAllLoaded = true;
  IMVKPFUN(glActiveTexture);
  IMVKPFUN(glSampleCoverage);
  IMVKPFUN(glCompressedTexImage3D);
  IMVKPFUN(glCompressedTexImage2D);
  IMVKPFUN(glCompressedTexImage1D);
  IMVKPFUN(glCompressedTexSubImage3D);
  IMVKPFUN(glCompressedTexSubImage2D);
  IMVKPFUN(glCompressedTexSubImage1D);
  IMVKPFUN(glGetCompressedTexImage);
  IMVKPFUN(glClientActiveTexture);
  IMVKPFUN(glMultiTexCoord1d);
  IMVKPFUN(glMultiTexCoord1dv);
  IMVKPFUN(glMultiTexCoord1f);
  IMVKPFUN(glMultiTexCoord1fv);
  IMVKPFUN(glMultiTexCoord1i);
  IMVKPFUN(glMultiTexCoord1iv);
  IMVKPFUN(glMultiTexCoord1s);
  IMVKPFUN(glMultiTexCoord1sv);
  IMVKPFUN(glMultiTexCoord2d);
  IMVKPFUN(glMultiTexCoord2dv);
  IMVKPFUN(glMultiTexCoord2f);
  IMVKPFUN(glMultiTexCoord2fv);
  IMVKPFUN(glMultiTexCoord2i);
  IMVKPFUN(glMultiTexCoord2iv);
  IMVKPFUN(glMultiTexCoord2s);
  IMVKPFUN(glMultiTexCoord2sv);
  IMVKPFUN(glMultiTexCoord3d);
  IMVKPFUN(glMultiTexCoord3dv);
  IMVKPFUN(glMultiTexCoord3f);
  IMVKPFUN(glMultiTexCoord3fv);
  IMVKPFUN(glMultiTexCoord3i);
  IMVKPFUN(glMultiTexCoord3iv);
  IMVKPFUN(glMultiTexCoord3s);
  IMVKPFUN(glMultiTexCoord3sv);
  IMVKPFUN(glMultiTexCoord4d);
  IMVKPFUN(glMultiTexCoord4dv);
  IMVKPFUN(glMultiTexCoord4f);
  IMVKPFUN(glMultiTexCoord4fv);
  IMVKPFUN(glMultiTexCoord4i);
  IMVKPFUN(glMultiTexCoord4iv);
  IMVKPFUN(glMultiTexCoord4s);
  IMVKPFUN(glMultiTexCoord4sv);
  IMVKPFUN(glLoadTransposeMatrixf);
  IMVKPFUN(glLoadTransposeMatrixd);
  IMVKPFUN(glMultTransposeMatrixf);
  IMVKPFUN(glMultTransposeMatrixd);
  NowState.IS_LOAD_GL_VERSION_1_3 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_1_4() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlendFuncSeparate);
  IMVKPFUN(glMultiDrawArrays);
  IMVKPFUN(glMultiDrawElements);
  IMVKPFUN(glPointParameterf);
  IMVKPFUN(glPointParameterfv);
  IMVKPFUN(glPointParameteri);
  IMVKPFUN(glPointParameteriv);
  IMVKPFUN(glFogCoordf);
  IMVKPFUN(glFogCoordfv);
  IMVKPFUN(glFogCoordd);
  IMVKPFUN(glFogCoorddv);
  IMVKPFUN(glFogCoordPointer);
  IMVKPFUN(glSecondaryColor3b);
  IMVKPFUN(glSecondaryColor3bv);
  IMVKPFUN(glSecondaryColor3d);
  IMVKPFUN(glSecondaryColor3dv);
  IMVKPFUN(glSecondaryColor3f);
  IMVKPFUN(glSecondaryColor3fv);
  IMVKPFUN(glSecondaryColor3i);
  IMVKPFUN(glSecondaryColor3iv);
  IMVKPFUN(glSecondaryColor3s);
  IMVKPFUN(glSecondaryColor3sv);
  IMVKPFUN(glSecondaryColor3ub);
  IMVKPFUN(glSecondaryColor3ubv);
  IMVKPFUN(glSecondaryColor3ui);
  IMVKPFUN(glSecondaryColor3uiv);
  IMVKPFUN(glSecondaryColor3us);
  IMVKPFUN(glSecondaryColor3usv);
  IMVKPFUN(glSecondaryColorPointer);
  IMVKPFUN(glWindowPos2d);
  IMVKPFUN(glWindowPos2dv);
  IMVKPFUN(glWindowPos2f);
  IMVKPFUN(glWindowPos2fv);
  IMVKPFUN(glWindowPos2i);
  IMVKPFUN(glWindowPos2iv);
  IMVKPFUN(glWindowPos2s);
  IMVKPFUN(glWindowPos2sv);
  IMVKPFUN(glWindowPos3d);
  IMVKPFUN(glWindowPos3dv);
  IMVKPFUN(glWindowPos3f);
  IMVKPFUN(glWindowPos3fv);
  IMVKPFUN(glWindowPos3i);
  IMVKPFUN(glWindowPos3iv);
  IMVKPFUN(glWindowPos3s);
  IMVKPFUN(glWindowPos3sv);
  IMVKPFUN(glBlendColor);
  IMVKPFUN(glBlendEquation);
  NowState.IS_LOAD_GL_VERSION_1_4 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_1_5() {
  bool isAllLoaded = true;
  IMVKPFUN(glGenQueries);
  IMVKPFUN(glDeleteQueries);
  IMVKPFUN(glIsQuery);
  IMVKPFUN(glBeginQuery);
  IMVKPFUN(glEndQuery);
  IMVKPFUN(glGetQueryiv);
  IMVKPFUN(glGetQueryObjectiv);
  IMVKPFUN(glGetQueryObjectuiv);
  IMVKPFUN(glBindBuffer);
  IMVKPFUN(glDeleteBuffers);
  IMVKPFUN(glGenBuffers);
  IMVKPFUN(glIsBuffer);
  IMVKPFUN(glBufferData);
  IMVKPFUN(glBufferSubData);
  IMVKPFUN(glGetBufferSubData);
  IMVKPFUN(glMapBuffer);
  IMVKPFUN(glUnmapBuffer);
  IMVKPFUN(glGetBufferParameteriv);
  IMVKPFUN(glGetBufferPointerv);
  NowState.IS_LOAD_GL_VERSION_1_5 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_2_0() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlendEquationSeparate);
  IMVKPFUN(glDrawBuffers);
  IMVKPFUN(glStencilOpSeparate);
  IMVKPFUN(glStencilFuncSeparate);
  IMVKPFUN(glStencilMaskSeparate);
  IMVKPFUN(glAttachShader);
  IMVKPFUN(glBindAttribLocation);
  IMVKPFUN(glCompileShader);
  IMVKPFUN(glCreateProgram);
  IMVKPFUN(glCreateShader);
  IMVKPFUN(glDeleteProgram);
  IMVKPFUN(glDeleteShader);
  IMVKPFUN(glDetachShader);
  IMVKPFUN(glDisableVertexAttribArray);
  IMVKPFUN(glEnableVertexAttribArray);
  IMVKPFUN(glGetActiveAttrib);
  IMVKPFUN(glGetActiveUniform);
  IMVKPFUN(glGetAttachedShaders);
  IMVKPFUN(glGetAttribLocation);
  IMVKPFUN(glGetProgramiv);
  IMVKPFUN(glGetProgramInfoLog);
  IMVKPFUN(glGetShaderiv);
  IMVKPFUN(glGetShaderInfoLog);
  IMVKPFUN(glGetShaderSource);
  IMVKPFUN(glGetUniformLocation);
  IMVKPFUN(glGetUniformfv);
  IMVKPFUN(glGetUniformiv);
  IMVKPFUN(glGetVertexAttribdv);
  IMVKPFUN(glGetVertexAttribfv);
  IMVKPFUN(glGetVertexAttribiv);
  IMVKPFUN(glGetVertexAttribPointerv);
  IMVKPFUN(glIsProgram);
  IMVKPFUN(glIsShader);
  IMVKPFUN(glLinkProgram);
  IMVKPFUN(glShaderSource);
  IMVKPFUN(glUseProgram);
  IMVKPFUN(glUniform1f);
  IMVKPFUN(glUniform2f);
  IMVKPFUN(glUniform3f);
  IMVKPFUN(glUniform4f);
  IMVKPFUN(glUniform1i);
  IMVKPFUN(glUniform2i);
  IMVKPFUN(glUniform3i);
  IMVKPFUN(glUniform4i);
  IMVKPFUN(glUniform1fv);
  IMVKPFUN(glUniform2fv);
  IMVKPFUN(glUniform3fv);
  IMVKPFUN(glUniform4fv);
  IMVKPFUN(glUniform1iv);
  IMVKPFUN(glUniform2iv);
  IMVKPFUN(glUniform3iv);
  IMVKPFUN(glUniform4iv);
  IMVKPFUN(glUniformMatrix2fv);
  IMVKPFUN(glUniformMatrix3fv);
  IMVKPFUN(glUniformMatrix4fv);
  IMVKPFUN(glValidateProgram);
  IMVKPFUN(glVertexAttrib1d);
  IMVKPFUN(glVertexAttrib1dv);
  IMVKPFUN(glVertexAttrib1f);
  IMVKPFUN(glVertexAttrib1fv);
  IMVKPFUN(glVertexAttrib1s);
  IMVKPFUN(glVertexAttrib1sv);
  IMVKPFUN(glVertexAttrib2d);
  IMVKPFUN(glVertexAttrib2dv);
  IMVKPFUN(glVertexAttrib2f);
  IMVKPFUN(glVertexAttrib2fv);
  IMVKPFUN(glVertexAttrib2s);
  IMVKPFUN(glVertexAttrib2sv);
  IMVKPFUN(glVertexAttrib3d);
  IMVKPFUN(glVertexAttrib3dv);
  IMVKPFUN(glVertexAttrib3f);
  IMVKPFUN(glVertexAttrib3fv);
  IMVKPFUN(glVertexAttrib3s);
  IMVKPFUN(glVertexAttrib3sv);
  IMVKPFUN(glVertexAttrib4Nbv);
  IMVKPFUN(glVertexAttrib4Niv);
  IMVKPFUN(glVertexAttrib4Nsv);
  IMVKPFUN(glVertexAttrib4Nub);
  IMVKPFUN(glVertexAttrib4Nubv);
  IMVKPFUN(glVertexAttrib4Nuiv);
  IMVKPFUN(glVertexAttrib4Nusv);
  IMVKPFUN(glVertexAttrib4bv);
  IMVKPFUN(glVertexAttrib4d);
  IMVKPFUN(glVertexAttrib4dv);
  IMVKPFUN(glVertexAttrib4f);
  IMVKPFUN(glVertexAttrib4fv);
  IMVKPFUN(glVertexAttrib4iv);
  IMVKPFUN(glVertexAttrib4s);
  IMVKPFUN(glVertexAttrib4sv);
  IMVKPFUN(glVertexAttrib4ubv);
  IMVKPFUN(glVertexAttrib4uiv);
  IMVKPFUN(glVertexAttrib4usv);
  IMVKPFUN(glVertexAttribPointer);
  NowState.IS_LOAD_GL_VERSION_2_0 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_2_1() {
  bool isAllLoaded = true;
  IMVKPFUN(glUniformMatrix2x3fv);
  IMVKPFUN(glUniformMatrix3x2fv);
  IMVKPFUN(glUniformMatrix2x4fv);
  IMVKPFUN(glUniformMatrix4x2fv);
  IMVKPFUN(glUniformMatrix3x4fv);
  IMVKPFUN(glUniformMatrix4x3fv);
  NowState.IS_LOAD_GL_VERSION_2_1 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_3_0() {
  bool isAllLoaded = true;
  IMVKPFUN(glColorMaski);
  IMVKPFUN(glGetBooleani_v);
  IMVKPFUN(glGetIntegeri_v);
  IMVKPFUN(glEnablei);
  IMVKPFUN(glDisablei);
  IMVKPFUN(glIsEnabledi);
  IMVKPFUN(glBeginTransformFeedback);
  IMVKPFUN(glEndTransformFeedback);
  IMVKPFUN(glBindBufferRange);
  IMVKPFUN(glBindBufferBase);
  IMVKPFUN(glTransformFeedbackVaryings);
  IMVKPFUN(glGetTransformFeedbackVarying);
  IMVKPFUN(glClampColor);
  IMVKPFUN(glBeginConditionalRender);
  IMVKPFUN(glEndConditionalRender);
  IMVKPFUN(glVertexAttribIPointer);
  IMVKPFUN(glGetVertexAttribIiv);
  IMVKPFUN(glGetVertexAttribIuiv);
  IMVKPFUN(glVertexAttribI1i);
  IMVKPFUN(glVertexAttribI2i);
  IMVKPFUN(glVertexAttribI3i);
  IMVKPFUN(glVertexAttribI4i);
  IMVKPFUN(glVertexAttribI1ui);
  IMVKPFUN(glVertexAttribI2ui);
  IMVKPFUN(glVertexAttribI3ui);
  IMVKPFUN(glVertexAttribI4ui);
  IMVKPFUN(glVertexAttribI1iv);
  IMVKPFUN(glVertexAttribI2iv);
  IMVKPFUN(glVertexAttribI3iv);
  IMVKPFUN(glVertexAttribI4iv);
  IMVKPFUN(glVertexAttribI1uiv);
  IMVKPFUN(glVertexAttribI2uiv);
  IMVKPFUN(glVertexAttribI3uiv);
  IMVKPFUN(glVertexAttribI4uiv);
  IMVKPFUN(glVertexAttribI4bv);
  IMVKPFUN(glVertexAttribI4sv);
  IMVKPFUN(glVertexAttribI4ubv);
  IMVKPFUN(glVertexAttribI4usv);
  IMVKPFUN(glGetUniformuiv);
  IMVKPFUN(glBindFragDataLocation);
  IMVKPFUN(glGetFragDataLocation);
  IMVKPFUN(glUniform1ui);
  IMVKPFUN(glUniform2ui);
  IMVKPFUN(glUniform3ui);
  IMVKPFUN(glUniform4ui);
  IMVKPFUN(glUniform1uiv);
  IMVKPFUN(glUniform2uiv);
  IMVKPFUN(glUniform3uiv);
  IMVKPFUN(glUniform4uiv);
  IMVKPFUN(glTexParameterIiv);
  IMVKPFUN(glTexParameterIuiv);
  IMVKPFUN(glGetTexParameterIiv);
  IMVKPFUN(glGetTexParameterIuiv);
  IMVKPFUN(glClearBufferiv);
  IMVKPFUN(glClearBufferuiv);
  IMVKPFUN(glClearBufferfv);
  IMVKPFUN(glClearBufferfi);
  IMVKPFUN(glGetStringi);
  IMVKPFUN(glIsRenderbuffer);
  IMVKPFUN(glBindRenderbuffer);
  IMVKPFUN(glDeleteRenderbuffers);
  IMVKPFUN(glGenRenderbuffers);
  IMVKPFUN(glRenderbufferStorage);
  IMVKPFUN(glGetRenderbufferParameteriv);
  IMVKPFUN(glIsFramebuffer);
  IMVKPFUN(glBindFramebuffer);
  IMVKPFUN(glDeleteFramebuffers);
  IMVKPFUN(glGenFramebuffers);
  IMVKPFUN(glCheckFramebufferStatus);
  IMVKPFUN(glFramebufferTexture1D);
  IMVKPFUN(glFramebufferTexture2D);
  IMVKPFUN(glFramebufferTexture3D);
  IMVKPFUN(glFramebufferRenderbuffer);
  IMVKPFUN(glGetFramebufferAttachmentParameteriv);
  IMVKPFUN(glGenerateMipmap);
  IMVKPFUN(glBlitFramebuffer);
  IMVKPFUN(glRenderbufferStorageMultisample);
  IMVKPFUN(glFramebufferTextureLayer);
  IMVKPFUN(glMapBufferRange);
  IMVKPFUN(glFlushMappedBufferRange);
  IMVKPFUN(glBindVertexArray);
  IMVKPFUN(glDeleteVertexArrays);
  IMVKPFUN(glGenVertexArrays);
  IMVKPFUN(glIsVertexArray);
  NowState.IS_LOAD_GL_VERSION_3_0 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_3_1() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawArraysInstanced);
  IMVKPFUN(glDrawElementsInstanced);
  IMVKPFUN(glTexBuffer);
  IMVKPFUN(glPrimitiveRestartIndex);
  IMVKPFUN(glCopyBufferSubData);
  IMVKPFUN(glGetUniformIndices);
  IMVKPFUN(glGetActiveUniformsiv);
  IMVKPFUN(glGetActiveUniformName);
  IMVKPFUN(glGetUniformBlockIndex);
  IMVKPFUN(glGetActiveUniformBlockiv);
  IMVKPFUN(glGetActiveUniformBlockName);
  IMVKPFUN(glUniformBlockBinding);
  NowState.IS_LOAD_GL_VERSION_3_1 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_3_2() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawElementsBaseVertex);
  IMVKPFUN(glDrawRangeElementsBaseVertex);
  IMVKPFUN(glDrawElementsInstancedBaseVertex);
  IMVKPFUN(glMultiDrawElementsBaseVertex);
  IMVKPFUN(glProvokingVertex);
  IMVKPFUN(glFenceSync);
  IMVKPFUN(glIsSync);
  IMVKPFUN(glDeleteSync);
  IMVKPFUN(glClientWaitSync);
  IMVKPFUN(glWaitSync);
  IMVKPFUN(glGetInteger64v);
  IMVKPFUN(glGetSynciv);
  IMVKPFUN(glGetInteger64i_v);
  IMVKPFUN(glGetBufferParameteri64v);
  IMVKPFUN(glFramebufferTexture);
  IMVKPFUN(glTexImage2DMultisample);
  IMVKPFUN(glTexImage3DMultisample);
  IMVKPFUN(glGetMultisamplefv);
  IMVKPFUN(glSampleMaski);
  NowState.IS_LOAD_GL_VERSION_3_2 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_3_3() {
  bool isAllLoaded = true;
  IMVKPFUN(glBindFragDataLocationIndexed);
  IMVKPFUN(glGetFragDataIndex);
  IMVKPFUN(glGenSamplers);
  IMVKPFUN(glDeleteSamplers);
  IMVKPFUN(glIsSampler);
  IMVKPFUN(glBindSampler);
  IMVKPFUN(glSamplerParameteri);
  IMVKPFUN(glSamplerParameteriv);
  IMVKPFUN(glSamplerParameterf);
  IMVKPFUN(glSamplerParameterfv);
  IMVKPFUN(glSamplerParameterIiv);
  IMVKPFUN(glSamplerParameterIuiv);
  IMVKPFUN(glGetSamplerParameteriv);
  IMVKPFUN(glGetSamplerParameterIiv);
  IMVKPFUN(glGetSamplerParameterfv);
  IMVKPFUN(glGetSamplerParameterIuiv);
  IMVKPFUN(glQueryCounter);
  IMVKPFUN(glGetQueryObjecti64v);
  IMVKPFUN(glGetQueryObjectui64v);
  IMVKPFUN(glVertexAttribDivisor);
  IMVKPFUN(glVertexAttribP1ui);
  IMVKPFUN(glVertexAttribP1uiv);
  IMVKPFUN(glVertexAttribP2ui);
  IMVKPFUN(glVertexAttribP2uiv);
  IMVKPFUN(glVertexAttribP3ui);
  IMVKPFUN(glVertexAttribP3uiv);
  IMVKPFUN(glVertexAttribP4ui);
  IMVKPFUN(glVertexAttribP4uiv);
  IMVKPFUN(glVertexP2ui);
  IMVKPFUN(glVertexP2uiv);
  IMVKPFUN(glVertexP3ui);
  IMVKPFUN(glVertexP3uiv);
  IMVKPFUN(glVertexP4ui);
  IMVKPFUN(glVertexP4uiv);
  IMVKPFUN(glTexCoordP1ui);
  IMVKPFUN(glTexCoordP1uiv);
  IMVKPFUN(glTexCoordP2ui);
  IMVKPFUN(glTexCoordP2uiv);
  IMVKPFUN(glTexCoordP3ui);
  IMVKPFUN(glTexCoordP3uiv);
  IMVKPFUN(glTexCoordP4ui);
  IMVKPFUN(glTexCoordP4uiv);
  IMVKPFUN(glMultiTexCoordP1ui);
  IMVKPFUN(glMultiTexCoordP1uiv);
  IMVKPFUN(glMultiTexCoordP2ui);
  IMVKPFUN(glMultiTexCoordP2uiv);
  IMVKPFUN(glMultiTexCoordP3ui);
  IMVKPFUN(glMultiTexCoordP3uiv);
  IMVKPFUN(glMultiTexCoordP4ui);
  IMVKPFUN(glMultiTexCoordP4uiv);
  IMVKPFUN(glNormalP3ui);
  IMVKPFUN(glNormalP3uiv);
  IMVKPFUN(glColorP3ui);
  IMVKPFUN(glColorP3uiv);
  IMVKPFUN(glColorP4ui);
  IMVKPFUN(glColorP4uiv);
  IMVKPFUN(glSecondaryColorP3ui);
  IMVKPFUN(glSecondaryColorP3uiv);
  NowState.IS_LOAD_GL_VERSION_3_3 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_4_0() {
  bool isAllLoaded = true;
  IMVKPFUN(glMinSampleShading);
  IMVKPFUN(glBlendEquationi);
  IMVKPFUN(glBlendEquationSeparatei);
  IMVKPFUN(glBlendFunci);
  IMVKPFUN(glBlendFuncSeparatei);
  IMVKPFUN(glDrawArraysIndirect);
  IMVKPFUN(glDrawElementsIndirect);
  IMVKPFUN(glUniform1d);
  IMVKPFUN(glUniform2d);
  IMVKPFUN(glUniform3d);
  IMVKPFUN(glUniform4d);
  IMVKPFUN(glUniform1dv);
  IMVKPFUN(glUniform2dv);
  IMVKPFUN(glUniform3dv);
  IMVKPFUN(glUniform4dv);
  IMVKPFUN(glUniformMatrix2dv);
  IMVKPFUN(glUniformMatrix3dv);
  IMVKPFUN(glUniformMatrix4dv);
  IMVKPFUN(glUniformMatrix2x3dv);
  IMVKPFUN(glUniformMatrix2x4dv);
  IMVKPFUN(glUniformMatrix3x2dv);
  IMVKPFUN(glUniformMatrix3x4dv);
  IMVKPFUN(glUniformMatrix4x2dv);
  IMVKPFUN(glUniformMatrix4x3dv);
  IMVKPFUN(glGetUniformdv);
  IMVKPFUN(glGetSubroutineUniformLocation);
  IMVKPFUN(glGetSubroutineIndex);
  IMVKPFUN(glGetActiveSubroutineUniformiv);
  IMVKPFUN(glGetActiveSubroutineUniformName);
  IMVKPFUN(glGetActiveSubroutineName);
  IMVKPFUN(glUniformSubroutinesuiv);
  IMVKPFUN(glGetUniformSubroutineuiv);
  IMVKPFUN(glGetProgramStageiv);
  IMVKPFUN(glPatchParameteri);
  IMVKPFUN(glPatchParameterfv);
  IMVKPFUN(glBindTransformFeedback);
  IMVKPFUN(glDeleteTransformFeedbacks);
  IMVKPFUN(glGenTransformFeedbacks);
  IMVKPFUN(glIsTransformFeedback);
  IMVKPFUN(glPauseTransformFeedback);
  IMVKPFUN(glResumeTransformFeedback);
  IMVKPFUN(glDrawTransformFeedback);
  IMVKPFUN(glDrawTransformFeedbackStream);
  IMVKPFUN(glBeginQueryIndexed);
  IMVKPFUN(glEndQueryIndexed);
  IMVKPFUN(glGetQueryIndexediv);
  NowState.IS_LOAD_GL_VERSION_4_0 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_4_1() {
  bool isAllLoaded = true;
  IMVKPFUN(glReleaseShaderCompiler);
  IMVKPFUN(glShaderBinary);
  IMVKPFUN(glGetShaderPrecisionFormat);
  IMVKPFUN(glDepthRangef);
  IMVKPFUN(glClearDepthf);
  IMVKPFUN(glGetProgramBinary);
  IMVKPFUN(glProgramBinary);
  IMVKPFUN(glProgramParameteri);
  IMVKPFUN(glUseProgramStages);
  IMVKPFUN(glActiveShaderProgram);
  IMVKPFUN(glCreateShaderProgramv);
  IMVKPFUN(glBindProgramPipeline);
  IMVKPFUN(glDeleteProgramPipelines);
  IMVKPFUN(glGenProgramPipelines);
  IMVKPFUN(glIsProgramPipeline);
  IMVKPFUN(glGetProgramPipelineiv);
  IMVKPFUN(glProgramUniform1i);
  IMVKPFUN(glProgramUniform1iv);
  IMVKPFUN(glProgramUniform1f);
  IMVKPFUN(glProgramUniform1fv);
  IMVKPFUN(glProgramUniform1d);
  IMVKPFUN(glProgramUniform1dv);
  IMVKPFUN(glProgramUniform1ui);
  IMVKPFUN(glProgramUniform1uiv);
  IMVKPFUN(glProgramUniform2i);
  IMVKPFUN(glProgramUniform2iv);
  IMVKPFUN(glProgramUniform2f);
  IMVKPFUN(glProgramUniform2fv);
  IMVKPFUN(glProgramUniform2d);
  IMVKPFUN(glProgramUniform2dv);
  IMVKPFUN(glProgramUniform2ui);
  IMVKPFUN(glProgramUniform2uiv);
  IMVKPFUN(glProgramUniform3i);
  IMVKPFUN(glProgramUniform3iv);
  IMVKPFUN(glProgramUniform3f);
  IMVKPFUN(glProgramUniform3fv);
  IMVKPFUN(glProgramUniform3d);
  IMVKPFUN(glProgramUniform3dv);
  IMVKPFUN(glProgramUniform3ui);
  IMVKPFUN(glProgramUniform3uiv);
  IMVKPFUN(glProgramUniform4i);
  IMVKPFUN(glProgramUniform4iv);
  IMVKPFUN(glProgramUniform4f);
  IMVKPFUN(glProgramUniform4fv);
  IMVKPFUN(glProgramUniform4d);
  IMVKPFUN(glProgramUniform4dv);
  IMVKPFUN(glProgramUniform4ui);
  IMVKPFUN(glProgramUniform4uiv);
  IMVKPFUN(glProgramUniformMatrix2fv);
  IMVKPFUN(glProgramUniformMatrix3fv);
  IMVKPFUN(glProgramUniformMatrix4fv);
  IMVKPFUN(glProgramUniformMatrix2dv);
  IMVKPFUN(glProgramUniformMatrix3dv);
  IMVKPFUN(glProgramUniformMatrix4dv);
  IMVKPFUN(glProgramUniformMatrix2x3fv);
  IMVKPFUN(glProgramUniformMatrix3x2fv);
  IMVKPFUN(glProgramUniformMatrix2x4fv);
  IMVKPFUN(glProgramUniformMatrix4x2fv);
  IMVKPFUN(glProgramUniformMatrix3x4fv);
  IMVKPFUN(glProgramUniformMatrix4x3fv);
  IMVKPFUN(glProgramUniformMatrix2x3dv);
  IMVKPFUN(glProgramUniformMatrix3x2dv);
  IMVKPFUN(glProgramUniformMatrix2x4dv);
  IMVKPFUN(glProgramUniformMatrix4x2dv);
  IMVKPFUN(glProgramUniformMatrix3x4dv);
  IMVKPFUN(glProgramUniformMatrix4x3dv);
  IMVKPFUN(glValidateProgramPipeline);
  IMVKPFUN(glGetProgramPipelineInfoLog);
  IMVKPFUN(glVertexAttribL1d);
  IMVKPFUN(glVertexAttribL2d);
  IMVKPFUN(glVertexAttribL3d);
  IMVKPFUN(glVertexAttribL4d);
  IMVKPFUN(glVertexAttribL1dv);
  IMVKPFUN(glVertexAttribL2dv);
  IMVKPFUN(glVertexAttribL3dv);
  IMVKPFUN(glVertexAttribL4dv);
  IMVKPFUN(glVertexAttribLPointer);
  IMVKPFUN(glGetVertexAttribLdv);
  IMVKPFUN(glViewportArrayv);
  IMVKPFUN(glViewportIndexedf);
  IMVKPFUN(glViewportIndexedfv);
  IMVKPFUN(glScissorArrayv);
  IMVKPFUN(glScissorIndexed);
  IMVKPFUN(glScissorIndexedv);
  IMVKPFUN(glDepthRangeArrayv);
  IMVKPFUN(glDepthRangeIndexed);
  IMVKPFUN(glGetFloati_v);
  IMVKPFUN(glGetDoublei_v);
  NowState.IS_LOAD_GL_VERSION_4_1 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_4_2() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawArraysInstancedBaseInstance);
  IMVKPFUN(glDrawElementsInstancedBaseInstance);
  IMVKPFUN(glDrawElementsInstancedBaseVertexBaseInstance);
  IMVKPFUN(glGetInternalformativ);
  IMVKPFUN(glGetActiveAtomicCounterBufferiv);
  IMVKPFUN(glBindImageTexture);
  IMVKPFUN(glMemoryBarrier);
  IMVKPFUN(glTexStorage1D);
  IMVKPFUN(glTexStorage2D);
  IMVKPFUN(glTexStorage3D);
  IMVKPFUN(glDrawTransformFeedbackInstanced);
  IMVKPFUN(glDrawTransformFeedbackStreamInstanced);
  NowState.IS_LOAD_GL_VERSION_4_2 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_4_3() {
  bool isAllLoaded = true;
  IMVKPFUN(glClearBufferData);
  IMVKPFUN(glClearBufferSubData);
  IMVKPFUN(glDispatchCompute);
  IMVKPFUN(glDispatchComputeIndirect);
  IMVKPFUN(glCopyImageSubData);
  IMVKPFUN(glFramebufferParameteri);
  IMVKPFUN(glGetFramebufferParameteriv);
  IMVKPFUN(glGetInternalformati64v);
  IMVKPFUN(glInvalidateTexSubImage);
  IMVKPFUN(glInvalidateTexImage);
  IMVKPFUN(glInvalidateBufferSubData);
  IMVKPFUN(glInvalidateBufferData);
  IMVKPFUN(glInvalidateFramebuffer);
  IMVKPFUN(glInvalidateSubFramebuffer);
  IMVKPFUN(glMultiDrawArraysIndirect);
  IMVKPFUN(glMultiDrawElementsIndirect);
  IMVKPFUN(glGetProgramInterfaceiv);
  IMVKPFUN(glGetProgramResourceIndex);
  IMVKPFUN(glGetProgramResourceName);
  IMVKPFUN(glGetProgramResourceiv);
  IMVKPFUN(glGetProgramResourceLocation);
  IMVKPFUN(glGetProgramResourceLocationIndex);
  IMVKPFUN(glShaderStorageBlockBinding);
  IMVKPFUN(glTexBufferRange);
  IMVKPFUN(glTexStorage2DMultisample);
  IMVKPFUN(glTexStorage3DMultisample);
  IMVKPFUN(glTextureView);
  IMVKPFUN(glBindVertexBuffer);
  IMVKPFUN(glVertexAttribFormat);
  IMVKPFUN(glVertexAttribIFormat);
  IMVKPFUN(glVertexAttribLFormat);
  IMVKPFUN(glVertexAttribBinding);
  IMVKPFUN(glVertexBindingDivisor);
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
  NowState.IS_LOAD_GL_VERSION_4_3 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_4_4() {
  bool isAllLoaded = true;
  IMVKPFUN(glBufferStorage);
  IMVKPFUN(glClearTexImage);
  IMVKPFUN(glClearTexSubImage);
  IMVKPFUN(glBindBuffersBase);
  IMVKPFUN(glBindBuffersRange);
  IMVKPFUN(glBindTextures);
  IMVKPFUN(glBindSamplers);
  IMVKPFUN(glBindImageTextures);
  IMVKPFUN(glBindVertexBuffers);
  NowState.IS_LOAD_GL_VERSION_4_4 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_4_5() {
  bool isAllLoaded = true;
  IMVKPFUN(glClipControl);
  IMVKPFUN(glCreateTransformFeedbacks);
  IMVKPFUN(glTransformFeedbackBufferBase);
  IMVKPFUN(glTransformFeedbackBufferRange);
  IMVKPFUN(glGetTransformFeedbackiv);
  IMVKPFUN(glGetTransformFeedbacki_v);
  IMVKPFUN(glGetTransformFeedbacki64_v);
  IMVKPFUN(glCreateBuffers);
  IMVKPFUN(glNamedBufferStorage);
  IMVKPFUN(glNamedBufferData);
  IMVKPFUN(glNamedBufferSubData);
  IMVKPFUN(glCopyNamedBufferSubData);
  IMVKPFUN(glClearNamedBufferData);
  IMVKPFUN(glClearNamedBufferSubData);
  IMVKPFUN(glMapNamedBuffer);
  IMVKPFUN(glMapNamedBufferRange);
  IMVKPFUN(glUnmapNamedBuffer);
  IMVKPFUN(glFlushMappedNamedBufferRange);
  IMVKPFUN(glGetNamedBufferParameteriv);
  IMVKPFUN(glGetNamedBufferParameteri64v);
  IMVKPFUN(glGetNamedBufferPointerv);
  IMVKPFUN(glGetNamedBufferSubData);
  IMVKPFUN(glCreateFramebuffers);
  IMVKPFUN(glNamedFramebufferRenderbuffer);
  IMVKPFUN(glNamedFramebufferParameteri);
  IMVKPFUN(glNamedFramebufferTexture);
  IMVKPFUN(glNamedFramebufferTextureLayer);
  IMVKPFUN(glNamedFramebufferDrawBuffer);
  IMVKPFUN(glNamedFramebufferDrawBuffers);
  IMVKPFUN(glNamedFramebufferReadBuffer);
  IMVKPFUN(glInvalidateNamedFramebufferData);
  IMVKPFUN(glInvalidateNamedFramebufferSubData);
  IMVKPFUN(glClearNamedFramebufferiv);
  IMVKPFUN(glClearNamedFramebufferuiv);
  IMVKPFUN(glClearNamedFramebufferfv);
  IMVKPFUN(glClearNamedFramebufferfi);
  IMVKPFUN(glBlitNamedFramebuffer);
  IMVKPFUN(glCheckNamedFramebufferStatus);
  IMVKPFUN(glGetNamedFramebufferParameteriv);
  IMVKPFUN(glGetNamedFramebufferAttachmentParameteriv);
  IMVKPFUN(glCreateRenderbuffers);
  IMVKPFUN(glNamedRenderbufferStorage);
  IMVKPFUN(glNamedRenderbufferStorageMultisample);
  IMVKPFUN(glGetNamedRenderbufferParameteriv);
  IMVKPFUN(glCreateTextures);
  IMVKPFUN(glTextureBuffer);
  IMVKPFUN(glTextureBufferRange);
  IMVKPFUN(glTextureStorage1D);
  IMVKPFUN(glTextureStorage2D);
  IMVKPFUN(glTextureStorage3D);
  IMVKPFUN(glTextureStorage2DMultisample);
  IMVKPFUN(glTextureStorage3DMultisample);
  IMVKPFUN(glTextureSubImage1D);
  IMVKPFUN(glTextureSubImage2D);
  IMVKPFUN(glTextureSubImage3D);
  IMVKPFUN(glCompressedTextureSubImage1D);
  IMVKPFUN(glCompressedTextureSubImage2D);
  IMVKPFUN(glCompressedTextureSubImage3D);
  IMVKPFUN(glCopyTextureSubImage1D);
  IMVKPFUN(glCopyTextureSubImage2D);
  IMVKPFUN(glCopyTextureSubImage3D);
  IMVKPFUN(glTextureParameterf);
  IMVKPFUN(glTextureParameterfv);
  IMVKPFUN(glTextureParameteri);
  IMVKPFUN(glTextureParameterIiv);
  IMVKPFUN(glTextureParameterIuiv);
  IMVKPFUN(glTextureParameteriv);
  IMVKPFUN(glGenerateTextureMipmap);
  IMVKPFUN(glBindTextureUnit);
  IMVKPFUN(glGetTextureImage);
  IMVKPFUN(glGetCompressedTextureImage);
  IMVKPFUN(glGetTextureLevelParameterfv);
  IMVKPFUN(glGetTextureLevelParameteriv);
  IMVKPFUN(glGetTextureParameterfv);
  IMVKPFUN(glGetTextureParameterIiv);
  IMVKPFUN(glGetTextureParameterIuiv);
  IMVKPFUN(glGetTextureParameteriv);
  IMVKPFUN(glCreateVertexArrays);
  IMVKPFUN(glDisableVertexArrayAttrib);
  IMVKPFUN(glEnableVertexArrayAttrib);
  IMVKPFUN(glVertexArrayElementBuffer);
  IMVKPFUN(glVertexArrayVertexBuffer);
  IMVKPFUN(glVertexArrayVertexBuffers);
  IMVKPFUN(glVertexArrayAttribBinding);
  IMVKPFUN(glVertexArrayAttribFormat);
  IMVKPFUN(glVertexArrayAttribIFormat);
  IMVKPFUN(glVertexArrayAttribLFormat);
  IMVKPFUN(glVertexArrayBindingDivisor);
  IMVKPFUN(glGetVertexArrayiv);
  IMVKPFUN(glGetVertexArrayIndexediv);
  IMVKPFUN(glGetVertexArrayIndexed64iv);
  IMVKPFUN(glCreateSamplers);
  IMVKPFUN(glCreateProgramPipelines);
  IMVKPFUN(glCreateQueries);
  IMVKPFUN(glGetQueryBufferObjecti64v);
  IMVKPFUN(glGetQueryBufferObjectiv);
  IMVKPFUN(glGetQueryBufferObjectui64v);
  IMVKPFUN(glGetQueryBufferObjectuiv);
  IMVKPFUN(glMemoryBarrierByRegion);
  IMVKPFUN(glGetTextureSubImage);
  IMVKPFUN(glGetCompressedTextureSubImage);
  IMVKPFUN(glGetGraphicsResetStatus);
  IMVKPFUN(glGetnCompressedTexImage);
  IMVKPFUN(glGetnTexImage);
  IMVKPFUN(glGetnUniformdv);
  IMVKPFUN(glGetnUniformfv);
  IMVKPFUN(glGetnUniformiv);
  IMVKPFUN(glGetnUniformuiv);
  IMVKPFUN(glReadnPixels);
  IMVKPFUN(glGetnMapdv);
  IMVKPFUN(glGetnMapfv);
  IMVKPFUN(glGetnMapiv);
  IMVKPFUN(glGetnPixelMapfv);
  IMVKPFUN(glGetnPixelMapuiv);
  IMVKPFUN(glGetnPixelMapusv);
  IMVKPFUN(glGetnPolygonStipple);
  IMVKPFUN(glGetnColorTable);
  IMVKPFUN(glGetnConvolutionFilter);
  IMVKPFUN(glGetnSeparableFilter);
  IMVKPFUN(glGetnHistogram);
  IMVKPFUN(glGetnMinmax);
  IMVKPFUN(glTextureBarrier);
  NowState.IS_LOAD_GL_VERSION_4_5 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_4_6() {
  bool isAllLoaded = true;
  IMVKPFUN(glSpecializeShader);
  IMVKPFUN(glMultiDrawArraysIndirectCount);
  IMVKPFUN(glMultiDrawElementsIndirectCount);
  IMVKPFUN(glPolygonOffsetClamp);
  NowState.IS_LOAD_GL_VERSION_4_6 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_ES3_2_compatibility() {
  bool isAllLoaded = true;
  IMVKPFUN(glPrimitiveBoundingBoxARB);
  NowState.IS_LOAD_GL_ARB_ES3_2_compatibility = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_bindless_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetTextureHandleARB);
  IMVKPFUN(glGetTextureSamplerHandleARB);
  IMVKPFUN(glMakeTextureHandleResidentARB);
  IMVKPFUN(glMakeTextureHandleNonResidentARB);
  IMVKPFUN(glGetImageHandleARB);
  IMVKPFUN(glMakeImageHandleResidentARB);
  IMVKPFUN(glMakeImageHandleNonResidentARB);
  IMVKPFUN(glUniformHandleui64ARB);
  IMVKPFUN(glUniformHandleui64vARB);
  IMVKPFUN(glProgramUniformHandleui64ARB);
  IMVKPFUN(glProgramUniformHandleui64vARB);
  IMVKPFUN(glIsTextureHandleResidentARB);
  IMVKPFUN(glIsImageHandleResidentARB);
  IMVKPFUN(glVertexAttribL1ui64ARB);
  IMVKPFUN(glVertexAttribL1ui64vARB);
  IMVKPFUN(glGetVertexAttribLui64vARB);
  NowState.IS_LOAD_GL_ARB_bindless_texture = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_cl_event() {
  bool isAllLoaded = true;
  IMVKPFUN(glCreateSyncFromCLeventARB);
  NowState.IS_LOAD_GL_ARB_cl_event = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_color_buffer_float() {
  bool isAllLoaded = true;
  IMVKPFUN(glClampColorARB);
  NowState.IS_LOAD_GL_ARB_color_buffer_float = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_compute_variable_group_size() {
  bool isAllLoaded = true;
  IMVKPFUN(glDispatchComputeGroupSizeARB);
  NowState.IS_LOAD_GL_ARB_compute_variable_group_size = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_debug_output() {
  bool isAllLoaded = true;
  IMVKPFUN(glDebugMessageControlARB);
  IMVKPFUN(glDebugMessageInsertARB);
  IMVKPFUN(glDebugMessageCallbackARB);
  IMVKPFUN(glGetDebugMessageLogARB);
  NowState.IS_LOAD_GL_ARB_debug_output = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_draw_buffers() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawBuffersARB);
  NowState.IS_LOAD_GL_ARB_draw_buffers = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_draw_buffers_blend() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlendEquationiARB);
  IMVKPFUN(glBlendEquationSeparateiARB);
  IMVKPFUN(glBlendFunciARB);
  IMVKPFUN(glBlendFuncSeparateiARB);
  NowState.IS_LOAD_GL_ARB_draw_buffers_blend = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_draw_instanced() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawArraysInstancedARB);
  IMVKPFUN(glDrawElementsInstancedARB);
  NowState.IS_LOAD_GL_ARB_draw_instanced = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_fragment_program() {
  bool isAllLoaded = true;
  IMVKPFUN(glProgramStringARB);
  IMVKPFUN(glBindProgramARB);
  IMVKPFUN(glDeleteProgramsARB);
  IMVKPFUN(glGenProgramsARB);
  IMVKPFUN(glProgramEnvParameter4dARB);
  IMVKPFUN(glProgramEnvParameter4dvARB);
  IMVKPFUN(glProgramEnvParameter4fARB);
  IMVKPFUN(glProgramEnvParameter4fvARB);
  IMVKPFUN(glProgramLocalParameter4dARB);
  IMVKPFUN(glProgramLocalParameter4dvARB);
  IMVKPFUN(glProgramLocalParameter4fARB);
  IMVKPFUN(glProgramLocalParameter4fvARB);
  IMVKPFUN(glGetProgramEnvParameterdvARB);
  IMVKPFUN(glGetProgramEnvParameterfvARB);
  IMVKPFUN(glGetProgramLocalParameterdvARB);
  IMVKPFUN(glGetProgramLocalParameterfvARB);
  IMVKPFUN(glGetProgramivARB);
  IMVKPFUN(glGetProgramStringARB);
  IMVKPFUN(glIsProgramARB);
  NowState.IS_LOAD_GL_ARB_fragment_program = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_geometry_shader4() {
  bool isAllLoaded = true;
  IMVKPFUN(glProgramParameteriARB);
  IMVKPFUN(glFramebufferTextureARB);
  IMVKPFUN(glFramebufferTextureLayerARB);
  IMVKPFUN(glFramebufferTextureFaceARB);
  NowState.IS_LOAD_GL_ARB_geometry_shader4 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_gl_spirv() {
  bool isAllLoaded = true;
  IMVKPFUN(glSpecializeShaderARB);
  NowState.IS_LOAD_GL_ARB_gl_spirv = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_gpu_shader_int64() {
  bool isAllLoaded = true;
  IMVKPFUN(glUniform1i64ARB);
  IMVKPFUN(glUniform2i64ARB);
  IMVKPFUN(glUniform3i64ARB);
  IMVKPFUN(glUniform4i64ARB);
  IMVKPFUN(glUniform1i64vARB);
  IMVKPFUN(glUniform2i64vARB);
  IMVKPFUN(glUniform3i64vARB);
  IMVKPFUN(glUniform4i64vARB);
  IMVKPFUN(glUniform1ui64ARB);
  IMVKPFUN(glUniform2ui64ARB);
  IMVKPFUN(glUniform3ui64ARB);
  IMVKPFUN(glUniform4ui64ARB);
  IMVKPFUN(glUniform1ui64vARB);
  IMVKPFUN(glUniform2ui64vARB);
  IMVKPFUN(glUniform3ui64vARB);
  IMVKPFUN(glUniform4ui64vARB);
  IMVKPFUN(glGetUniformi64vARB);
  IMVKPFUN(glGetUniformui64vARB);
  IMVKPFUN(glGetnUniformi64vARB);
  IMVKPFUN(glGetnUniformui64vARB);
  IMVKPFUN(glProgramUniform1i64ARB);
  IMVKPFUN(glProgramUniform2i64ARB);
  IMVKPFUN(glProgramUniform3i64ARB);
  IMVKPFUN(glProgramUniform4i64ARB);
  IMVKPFUN(glProgramUniform1i64vARB);
  IMVKPFUN(glProgramUniform2i64vARB);
  IMVKPFUN(glProgramUniform3i64vARB);
  IMVKPFUN(glProgramUniform4i64vARB);
  IMVKPFUN(glProgramUniform1ui64ARB);
  IMVKPFUN(glProgramUniform2ui64ARB);
  IMVKPFUN(glProgramUniform3ui64ARB);
  IMVKPFUN(glProgramUniform4ui64ARB);
  IMVKPFUN(glProgramUniform1ui64vARB);
  IMVKPFUN(glProgramUniform2ui64vARB);
  IMVKPFUN(glProgramUniform3ui64vARB);
  IMVKPFUN(glProgramUniform4ui64vARB);
  NowState.IS_LOAD_GL_ARB_gpu_shader_int64 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_imaging() {
  bool isAllLoaded = true;
  IMVKPFUN(glColorTable);
  IMVKPFUN(glColorTableParameterfv);
  IMVKPFUN(glColorTableParameteriv);
  IMVKPFUN(glCopyColorTable);
  IMVKPFUN(glGetColorTable);
  IMVKPFUN(glGetColorTableParameterfv);
  IMVKPFUN(glGetColorTableParameteriv);
  IMVKPFUN(glColorSubTable);
  IMVKPFUN(glCopyColorSubTable);
  IMVKPFUN(glConvolutionFilter1D);
  IMVKPFUN(glConvolutionFilter2D);
  IMVKPFUN(glConvolutionParameterf);
  IMVKPFUN(glConvolutionParameterfv);
  IMVKPFUN(glConvolutionParameteri);
  IMVKPFUN(glConvolutionParameteriv);
  IMVKPFUN(glCopyConvolutionFilter1D);
  IMVKPFUN(glCopyConvolutionFilter2D);
  IMVKPFUN(glGetConvolutionFilter);
  IMVKPFUN(glGetConvolutionParameterfv);
  IMVKPFUN(glGetConvolutionParameteriv);
  IMVKPFUN(glGetSeparableFilter);
  IMVKPFUN(glSeparableFilter2D);
  IMVKPFUN(glGetHistogram);
  IMVKPFUN(glGetHistogramParameterfv);
  IMVKPFUN(glGetHistogramParameteriv);
  IMVKPFUN(glGetMinmax);
  IMVKPFUN(glGetMinmaxParameterfv);
  IMVKPFUN(glGetMinmaxParameteriv);
  IMVKPFUN(glHistogram);
  IMVKPFUN(glMinmax);
  IMVKPFUN(glResetHistogram);
  IMVKPFUN(glResetMinmax);
  NowState.IS_LOAD_GL_ARB_imaging = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_indirect_parameters() {
  bool isAllLoaded = true;
  IMVKPFUN(glMultiDrawArraysIndirectCountARB);
  IMVKPFUN(glMultiDrawElementsIndirectCountARB);
  NowState.IS_LOAD_GL_ARB_indirect_parameters = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_instanced_arrays() {
  bool isAllLoaded = true;
  IMVKPFUN(glVertexAttribDivisorARB);
  NowState.IS_LOAD_GL_ARB_instanced_arrays = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_matrix_palette() {
  bool isAllLoaded = true;
  IMVKPFUN(glCurrentPaletteMatrixARB);
  IMVKPFUN(glMatrixIndexubvARB);
  IMVKPFUN(glMatrixIndexusvARB);
  IMVKPFUN(glMatrixIndexuivARB);
  IMVKPFUN(glMatrixIndexPointerARB);
  NowState.IS_LOAD_GL_ARB_matrix_palette = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_multisample() {
  bool isAllLoaded = true;
  IMVKPFUN(glSampleCoverageARB);
  NowState.IS_LOAD_GL_ARB_multisample = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_multitexture() {
  bool isAllLoaded = true;
  IMVKPFUN(glActiveTextureARB);
  IMVKPFUN(glClientActiveTextureARB);
  IMVKPFUN(glMultiTexCoord1dARB);
  IMVKPFUN(glMultiTexCoord1dvARB);
  IMVKPFUN(glMultiTexCoord1fARB);
  IMVKPFUN(glMultiTexCoord1fvARB);
  IMVKPFUN(glMultiTexCoord1iARB);
  IMVKPFUN(glMultiTexCoord1ivARB);
  IMVKPFUN(glMultiTexCoord1sARB);
  IMVKPFUN(glMultiTexCoord1svARB);
  IMVKPFUN(glMultiTexCoord2dARB);
  IMVKPFUN(glMultiTexCoord2dvARB);
  IMVKPFUN(glMultiTexCoord2fARB);
  IMVKPFUN(glMultiTexCoord2fvARB);
  IMVKPFUN(glMultiTexCoord2iARB);
  IMVKPFUN(glMultiTexCoord2ivARB);
  IMVKPFUN(glMultiTexCoord2sARB);
  IMVKPFUN(glMultiTexCoord2svARB);
  IMVKPFUN(glMultiTexCoord3dARB);
  IMVKPFUN(glMultiTexCoord3dvARB);
  IMVKPFUN(glMultiTexCoord3fARB);
  IMVKPFUN(glMultiTexCoord3fvARB);
  IMVKPFUN(glMultiTexCoord3iARB);
  IMVKPFUN(glMultiTexCoord3ivARB);
  IMVKPFUN(glMultiTexCoord3sARB);
  IMVKPFUN(glMultiTexCoord3svARB);
  IMVKPFUN(glMultiTexCoord4dARB);
  IMVKPFUN(glMultiTexCoord4dvARB);
  IMVKPFUN(glMultiTexCoord4fARB);
  IMVKPFUN(glMultiTexCoord4fvARB);
  IMVKPFUN(glMultiTexCoord4iARB);
  IMVKPFUN(glMultiTexCoord4ivARB);
  IMVKPFUN(glMultiTexCoord4sARB);
  IMVKPFUN(glMultiTexCoord4svARB);
  NowState.IS_LOAD_GL_ARB_multitexture = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_occlusion_query() {
  bool isAllLoaded = true;
  IMVKPFUN(glGenQueriesARB);
  IMVKPFUN(glDeleteQueriesARB);
  IMVKPFUN(glIsQueryARB);
  IMVKPFUN(glBeginQueryARB);
  IMVKPFUN(glEndQueryARB);
  IMVKPFUN(glGetQueryivARB);
  IMVKPFUN(glGetQueryObjectivARB);
  IMVKPFUN(glGetQueryObjectuivARB);
  NowState.IS_LOAD_GL_ARB_occlusion_query = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_parallel_shader_compile() {
  bool isAllLoaded = true;
  IMVKPFUN(glMaxShaderCompilerThreadsARB);
  NowState.IS_LOAD_GL_ARB_parallel_shader_compile = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_point_parameters() {
  bool isAllLoaded = true;
  IMVKPFUN(glPointParameterfARB);
  IMVKPFUN(glPointParameterfvARB);
  NowState.IS_LOAD_GL_ARB_point_parameters = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_robustness() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetGraphicsResetStatusARB);
  IMVKPFUN(glGetnTexImageARB);
  IMVKPFUN(glReadnPixelsARB);
  IMVKPFUN(glGetnCompressedTexImageARB);
  IMVKPFUN(glGetnUniformfvARB);
  IMVKPFUN(glGetnUniformivARB);
  IMVKPFUN(glGetnUniformuivARB);
  IMVKPFUN(glGetnUniformdvARB);
  IMVKPFUN(glGetnMapdvARB);
  IMVKPFUN(glGetnMapfvARB);
  IMVKPFUN(glGetnMapivARB);
  IMVKPFUN(glGetnPixelMapfvARB);
  IMVKPFUN(glGetnPixelMapuivARB);
  IMVKPFUN(glGetnPixelMapusvARB);
  IMVKPFUN(glGetnPolygonStippleARB);
  IMVKPFUN(glGetnColorTableARB);
  IMVKPFUN(glGetnConvolutionFilterARB);
  IMVKPFUN(glGetnSeparableFilterARB);
  IMVKPFUN(glGetnHistogramARB);
  IMVKPFUN(glGetnMinmaxARB);
  NowState.IS_LOAD_GL_ARB_robustness = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_sample_locations() {
  bool isAllLoaded = true;
  IMVKPFUN(glFramebufferSampleLocationsfvARB);
  IMVKPFUN(glNamedFramebufferSampleLocationsfvARB);
  IMVKPFUN(glEvaluateDepthValuesARB);
  NowState.IS_LOAD_GL_ARB_sample_locations = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_sample_shading() {
  bool isAllLoaded = true;
  IMVKPFUN(glMinSampleShadingARB);
  NowState.IS_LOAD_GL_ARB_sample_shading = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_shader_objects() {
  bool isAllLoaded = true;
  IMVKPFUN(glDeleteObjectARB);
  IMVKPFUN(glGetHandleARB);
  IMVKPFUN(glDetachObjectARB);
  IMVKPFUN(glCreateShaderObjectARB);
  IMVKPFUN(glShaderSourceARB);
  IMVKPFUN(glCompileShaderARB);
  IMVKPFUN(glCreateProgramObjectARB);
  IMVKPFUN(glAttachObjectARB);
  IMVKPFUN(glLinkProgramARB);
  IMVKPFUN(glUseProgramObjectARB);
  IMVKPFUN(glValidateProgramARB);
  IMVKPFUN(glUniform1fARB);
  IMVKPFUN(glUniform2fARB);
  IMVKPFUN(glUniform3fARB);
  IMVKPFUN(glUniform4fARB);
  IMVKPFUN(glUniform1iARB);
  IMVKPFUN(glUniform2iARB);
  IMVKPFUN(glUniform3iARB);
  IMVKPFUN(glUniform4iARB);
  IMVKPFUN(glUniform1fvARB);
  IMVKPFUN(glUniform2fvARB);
  IMVKPFUN(glUniform3fvARB);
  IMVKPFUN(glUniform4fvARB);
  IMVKPFUN(glUniform1ivARB);
  IMVKPFUN(glUniform2ivARB);
  IMVKPFUN(glUniform3ivARB);
  IMVKPFUN(glUniform4ivARB);
  IMVKPFUN(glUniformMatrix2fvARB);
  IMVKPFUN(glUniformMatrix3fvARB);
  IMVKPFUN(glUniformMatrix4fvARB);
  IMVKPFUN(glGetObjectParameterfvARB);
  IMVKPFUN(glGetObjectParameterivARB);
  IMVKPFUN(glGetInfoLogARB);
  IMVKPFUN(glGetAttachedObjectsARB);
  IMVKPFUN(glGetUniformLocationARB);
  IMVKPFUN(glGetActiveUniformARB);
  IMVKPFUN(glGetUniformfvARB);
  IMVKPFUN(glGetUniformivARB);
  IMVKPFUN(glGetShaderSourceARB);
  NowState.IS_LOAD_GL_ARB_shader_objects = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_shading_language_include() {
  bool isAllLoaded = true;
  IMVKPFUN(glNamedStringARB);
  IMVKPFUN(glDeleteNamedStringARB);
  IMVKPFUN(glCompileShaderIncludeARB);
  IMVKPFUN(glIsNamedStringARB);
  IMVKPFUN(glGetNamedStringARB);
  IMVKPFUN(glGetNamedStringivARB);
  NowState.IS_LOAD_GL_ARB_shading_language_include = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_sparse_buffer() {
  bool isAllLoaded = true;
  IMVKPFUN(glBufferPageCommitmentARB);
  IMVKPFUN(glNamedBufferPageCommitmentEXT);
  IMVKPFUN(glNamedBufferPageCommitmentARB);
  NowState.IS_LOAD_GL_ARB_sparse_buffer = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_sparse_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexPageCommitmentARB);
  NowState.IS_LOAD_GL_ARB_sparse_texture = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_texture_buffer_object() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexBufferARB);
  NowState.IS_LOAD_GL_ARB_texture_buffer_object = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_texture_compression() {
  bool isAllLoaded = true;
  IMVKPFUN(glCompressedTexImage3DARB);
  IMVKPFUN(glCompressedTexImage2DARB);
  IMVKPFUN(glCompressedTexImage1DARB);
  IMVKPFUN(glCompressedTexSubImage3DARB);
  IMVKPFUN(glCompressedTexSubImage2DARB);
  IMVKPFUN(glCompressedTexSubImage1DARB);
  IMVKPFUN(glGetCompressedTexImageARB);
  NowState.IS_LOAD_GL_ARB_texture_compression = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_transpose_matrix() {
  bool isAllLoaded = true;
  IMVKPFUN(glLoadTransposeMatrixfARB);
  IMVKPFUN(glLoadTransposeMatrixdARB);
  IMVKPFUN(glMultTransposeMatrixfARB);
  IMVKPFUN(glMultTransposeMatrixdARB);
  NowState.IS_LOAD_GL_ARB_transpose_matrix = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_vertex_blend() {
  bool isAllLoaded = true;
  IMVKPFUN(glWeightbvARB);
  IMVKPFUN(glWeightsvARB);
  IMVKPFUN(glWeightivARB);
  IMVKPFUN(glWeightfvARB);
  IMVKPFUN(glWeightdvARB);
  IMVKPFUN(glWeightubvARB);
  IMVKPFUN(glWeightusvARB);
  IMVKPFUN(glWeightuivARB);
  IMVKPFUN(glWeightPointerARB);
  IMVKPFUN(glVertexBlendARB);
  NowState.IS_LOAD_GL_ARB_vertex_blend = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_vertex_buffer_object() {
  bool isAllLoaded = true;
  IMVKPFUN(glBindBufferARB);
  IMVKPFUN(glDeleteBuffersARB);
  IMVKPFUN(glGenBuffersARB);
  IMVKPFUN(glIsBufferARB);
  IMVKPFUN(glBufferDataARB);
  IMVKPFUN(glBufferSubDataARB);
  IMVKPFUN(glGetBufferSubDataARB);
  IMVKPFUN(glMapBufferARB);
  IMVKPFUN(glUnmapBufferARB);
  IMVKPFUN(glGetBufferParameterivARB);
  IMVKPFUN(glGetBufferPointervARB);
  NowState.IS_LOAD_GL_ARB_vertex_buffer_object = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_vertex_program() {
  bool isAllLoaded = true;
  IMVKPFUN(glVertexAttrib1dARB);
  IMVKPFUN(glVertexAttrib1dvARB);
  IMVKPFUN(glVertexAttrib1fARB);
  IMVKPFUN(glVertexAttrib1fvARB);
  IMVKPFUN(glVertexAttrib1sARB);
  IMVKPFUN(glVertexAttrib1svARB);
  IMVKPFUN(glVertexAttrib2dARB);
  IMVKPFUN(glVertexAttrib2dvARB);
  IMVKPFUN(glVertexAttrib2fARB);
  IMVKPFUN(glVertexAttrib2fvARB);
  IMVKPFUN(glVertexAttrib2sARB);
  IMVKPFUN(glVertexAttrib2svARB);
  IMVKPFUN(glVertexAttrib3dARB);
  IMVKPFUN(glVertexAttrib3dvARB);
  IMVKPFUN(glVertexAttrib3fARB);
  IMVKPFUN(glVertexAttrib3fvARB);
  IMVKPFUN(glVertexAttrib3sARB);
  IMVKPFUN(glVertexAttrib3svARB);
  IMVKPFUN(glVertexAttrib4NbvARB);
  IMVKPFUN(glVertexAttrib4NivARB);
  IMVKPFUN(glVertexAttrib4NsvARB);
  IMVKPFUN(glVertexAttrib4NubARB);
  IMVKPFUN(glVertexAttrib4NubvARB);
  IMVKPFUN(glVertexAttrib4NuivARB);
  IMVKPFUN(glVertexAttrib4NusvARB);
  IMVKPFUN(glVertexAttrib4bvARB);
  IMVKPFUN(glVertexAttrib4dARB);
  IMVKPFUN(glVertexAttrib4dvARB);
  IMVKPFUN(glVertexAttrib4fARB);
  IMVKPFUN(glVertexAttrib4fvARB);
  IMVKPFUN(glVertexAttrib4ivARB);
  IMVKPFUN(glVertexAttrib4sARB);
  IMVKPFUN(glVertexAttrib4svARB);
  IMVKPFUN(glVertexAttrib4ubvARB);
  IMVKPFUN(glVertexAttrib4uivARB);
  IMVKPFUN(glVertexAttrib4usvARB);
  IMVKPFUN(glVertexAttribPointerARB);
  IMVKPFUN(glEnableVertexAttribArrayARB);
  IMVKPFUN(glDisableVertexAttribArrayARB);
  IMVKPFUN(glGetVertexAttribdvARB);
  IMVKPFUN(glGetVertexAttribfvARB);
  IMVKPFUN(glGetVertexAttribivARB);
  IMVKPFUN(glGetVertexAttribPointervARB);
  NowState.IS_LOAD_GL_ARB_vertex_program = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_vertex_shader() {
  bool isAllLoaded = true;
  IMVKPFUN(glBindAttribLocationARB);
  IMVKPFUN(glGetActiveAttribARB);
  IMVKPFUN(glGetAttribLocationARB);
  NowState.IS_LOAD_GL_ARB_vertex_shader = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_viewport_array() {
  bool isAllLoaded = true;
  IMVKPFUN(glDepthRangeArraydvNV);
  IMVKPFUN(glDepthRangeIndexeddNV);
  NowState.IS_LOAD_GL_ARB_viewport_array = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ARB_window_pos() {
  bool isAllLoaded = true;
  IMVKPFUN(glWindowPos2dARB);
  IMVKPFUN(glWindowPos2dvARB);
  IMVKPFUN(glWindowPos2fARB);
  IMVKPFUN(glWindowPos2fvARB);
  IMVKPFUN(glWindowPos2iARB);
  IMVKPFUN(glWindowPos2ivARB);
  IMVKPFUN(glWindowPos2sARB);
  IMVKPFUN(glWindowPos2svARB);
  IMVKPFUN(glWindowPos3dARB);
  IMVKPFUN(glWindowPos3dvARB);
  IMVKPFUN(glWindowPos3fARB);
  IMVKPFUN(glWindowPos3fvARB);
  IMVKPFUN(glWindowPos3iARB);
  IMVKPFUN(glWindowPos3ivARB);
  IMVKPFUN(glWindowPos3sARB);
  IMVKPFUN(glWindowPos3svARB);
  NowState.IS_LOAD_GL_ARB_window_pos = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_KHR_blend_equation_advanced() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlendBarrierKHR);
  NowState.IS_LOAD_GL_KHR_blend_equation_advanced = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_KHR_parallel_shader_compile() {
  bool isAllLoaded = true;
  IMVKPFUN(glMaxShaderCompilerThreadsKHR);
  NowState.IS_LOAD_GL_KHR_parallel_shader_compile = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_OES_byte_coordinates() {
  bool isAllLoaded = true;
  IMVKPFUN(glMultiTexCoord1bOES);
  IMVKPFUN(glMultiTexCoord1bvOES);
  IMVKPFUN(glMultiTexCoord2bOES);
  IMVKPFUN(glMultiTexCoord2bvOES);
  IMVKPFUN(glMultiTexCoord3bOES);
  IMVKPFUN(glMultiTexCoord3bvOES);
  IMVKPFUN(glMultiTexCoord4bOES);
  IMVKPFUN(glMultiTexCoord4bvOES);
  IMVKPFUN(glTexCoord1bOES);
  IMVKPFUN(glTexCoord1bvOES);
  IMVKPFUN(glTexCoord2bOES);
  IMVKPFUN(glTexCoord2bvOES);
  IMVKPFUN(glTexCoord3bOES);
  IMVKPFUN(glTexCoord3bvOES);
  IMVKPFUN(glTexCoord4bOES);
  IMVKPFUN(glTexCoord4bvOES);
  IMVKPFUN(glVertex2bOES);
  IMVKPFUN(glVertex2bvOES);
  IMVKPFUN(glVertex3bOES);
  IMVKPFUN(glVertex3bvOES);
  IMVKPFUN(glVertex4bOES);
  IMVKPFUN(glVertex4bvOES);
  NowState.IS_LOAD_GL_OES_byte_coordinates = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_OES_fixed_point() {
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
  IMVKPFUN(glAccumxOES);
  IMVKPFUN(glBitmapxOES);
  IMVKPFUN(glBlendColorxOES);
  IMVKPFUN(glClearAccumxOES);
  IMVKPFUN(glColor3xOES);
  IMVKPFUN(glColor3xvOES);
  IMVKPFUN(glColor4xvOES);
  IMVKPFUN(glConvolutionParameterxOES);
  IMVKPFUN(glConvolutionParameterxvOES);
  IMVKPFUN(glEvalCoord1xOES);
  IMVKPFUN(glEvalCoord1xvOES);
  IMVKPFUN(glEvalCoord2xOES);
  IMVKPFUN(glEvalCoord2xvOES);
  IMVKPFUN(glFeedbackBufferxOES);
  IMVKPFUN(glGetConvolutionParameterxvOES);
  IMVKPFUN(glGetHistogramParameterxvOES);
  IMVKPFUN(glGetLightxOES);
  IMVKPFUN(glGetMapxvOES);
  IMVKPFUN(glGetMaterialxOES);
  IMVKPFUN(glGetPixelMapxv);
  IMVKPFUN(glGetTexGenxvOES);
  IMVKPFUN(glGetTexLevelParameterxvOES);
  IMVKPFUN(glIndexxOES);
  IMVKPFUN(glIndexxvOES);
  IMVKPFUN(glLoadTransposeMatrixxOES);
  IMVKPFUN(glMap1xOES);
  IMVKPFUN(glMap2xOES);
  IMVKPFUN(glMapGrid1xOES);
  IMVKPFUN(glMapGrid2xOES);
  IMVKPFUN(glMultTransposeMatrixxOES);
  IMVKPFUN(glMultiTexCoord1xOES);
  IMVKPFUN(glMultiTexCoord1xvOES);
  IMVKPFUN(glMultiTexCoord2xOES);
  IMVKPFUN(glMultiTexCoord2xvOES);
  IMVKPFUN(glMultiTexCoord3xOES);
  IMVKPFUN(glMultiTexCoord3xvOES);
  IMVKPFUN(glMultiTexCoord4xvOES);
  IMVKPFUN(glNormal3xvOES);
  IMVKPFUN(glPassThroughxOES);
  IMVKPFUN(glPixelMapx);
  IMVKPFUN(glPixelStorex);
  IMVKPFUN(glPixelTransferxOES);
  IMVKPFUN(glPixelZoomxOES);
  IMVKPFUN(glPrioritizeTexturesxOES);
  IMVKPFUN(glRasterPos2xOES);
  IMVKPFUN(glRasterPos2xvOES);
  IMVKPFUN(glRasterPos3xOES);
  IMVKPFUN(glRasterPos3xvOES);
  IMVKPFUN(glRasterPos4xOES);
  IMVKPFUN(glRasterPos4xvOES);
  IMVKPFUN(glRectxOES);
  IMVKPFUN(glRectxvOES);
  IMVKPFUN(glTexCoord1xOES);
  IMVKPFUN(glTexCoord1xvOES);
  IMVKPFUN(glTexCoord2xOES);
  IMVKPFUN(glTexCoord2xvOES);
  IMVKPFUN(glTexCoord3xOES);
  IMVKPFUN(glTexCoord3xvOES);
  IMVKPFUN(glTexCoord4xOES);
  IMVKPFUN(glTexCoord4xvOES);
  IMVKPFUN(glTexGenxOES);
  IMVKPFUN(glTexGenxvOES);
  IMVKPFUN(glVertex2xOES);
  IMVKPFUN(glVertex2xvOES);
  IMVKPFUN(glVertex3xOES);
  IMVKPFUN(glVertex3xvOES);
  IMVKPFUN(glVertex4xOES);
  IMVKPFUN(glVertex4xvOES);
  NowState.IS_LOAD_GL_OES_fixed_point = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_OES_query_matrix() {
  bool isAllLoaded = true;
  IMVKPFUN(glQueryMatrixxOES);
  NowState.IS_LOAD_GL_OES_query_matrix = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_OES_single_precision() {
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
bool OpenGLLoaderLoader::TRY_LOAD_GL_3DFX_tbuffer() {
  bool isAllLoaded = true;
  IMVKPFUN(glTbufferMask3DFX);
  NowState.IS_LOAD_GL_3DFX_tbuffer = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_AMD_debug_output() {
  bool isAllLoaded = true;
  IMVKPFUN(glDebugMessageEnableAMD);
  IMVKPFUN(glDebugMessageInsertAMD);
  IMVKPFUN(glDebugMessageCallbackAMD);
  IMVKPFUN(glGetDebugMessageLogAMD);
  NowState.IS_LOAD_GL_AMD_debug_output = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_AMD_draw_buffers_blend() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlendFuncIndexedAMD);
  IMVKPFUN(glBlendFuncSeparateIndexedAMD);
  IMVKPFUN(glBlendEquationIndexedAMD);
  IMVKPFUN(glBlendEquationSeparateIndexedAMD);
  NowState.IS_LOAD_GL_AMD_draw_buffers_blend = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_AMD_framebuffer_multisample_advanced() {
  bool isAllLoaded = true;
  IMVKPFUN(glRenderbufferStorageMultisampleAdvancedAMD);
  IMVKPFUN(glNamedRenderbufferStorageMultisampleAdvancedAMD);
  NowState.IS_LOAD_GL_AMD_framebuffer_multisample_advanced = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_AMD_framebuffer_sample_positions() {
  bool isAllLoaded = true;
  IMVKPFUN(glFramebufferSamplePositionsfvAMD);
  IMVKPFUN(glNamedFramebufferSamplePositionsfvAMD);
  IMVKPFUN(glGetFramebufferParameterfvAMD);
  IMVKPFUN(glGetNamedFramebufferParameterfvAMD);
  NowState.IS_LOAD_GL_AMD_framebuffer_sample_positions = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_AMD_gpu_shader_int64() {
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
  IMVKPFUN(glGetUniformui64vNV);
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
  NowState.IS_LOAD_GL_AMD_gpu_shader_int64 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_AMD_interleaved_elements() {
  bool isAllLoaded = true;
  IMVKPFUN(glVertexAttribParameteriAMD);
  NowState.IS_LOAD_GL_AMD_interleaved_elements = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_AMD_multi_draw_indirect() {
  bool isAllLoaded = true;
  IMVKPFUN(glMultiDrawArraysIndirectAMD);
  IMVKPFUN(glMultiDrawElementsIndirectAMD);
  NowState.IS_LOAD_GL_AMD_multi_draw_indirect = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_AMD_name_gen_delete() {
  bool isAllLoaded = true;
  IMVKPFUN(glGenNamesAMD);
  IMVKPFUN(glDeleteNamesAMD);
  IMVKPFUN(glIsNameAMD);
  NowState.IS_LOAD_GL_AMD_name_gen_delete = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_AMD_occlusion_query_event() {
  bool isAllLoaded = true;
  IMVKPFUN(glQueryObjectParameteruiAMD);
  NowState.IS_LOAD_GL_AMD_occlusion_query_event = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_AMD_performance_monitor() {
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
bool OpenGLLoaderLoader::TRY_LOAD_GL_AMD_sample_positions() {
  bool isAllLoaded = true;
  IMVKPFUN(glSetMultisamplefvAMD);
  NowState.IS_LOAD_GL_AMD_sample_positions = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_AMD_sparse_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexStorageSparseAMD);
  IMVKPFUN(glTextureStorageSparseAMD);
  NowState.IS_LOAD_GL_AMD_sparse_texture = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_AMD_stencil_operation_extended() {
  bool isAllLoaded = true;
  IMVKPFUN(glStencilOpValueAMD);
  NowState.IS_LOAD_GL_AMD_stencil_operation_extended = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_AMD_vertex_shader_tessellator() {
  bool isAllLoaded = true;
  IMVKPFUN(glTessellationFactorAMD);
  IMVKPFUN(glTessellationModeAMD);
  NowState.IS_LOAD_GL_AMD_vertex_shader_tessellator = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_APPLE_element_array() {
  bool isAllLoaded = true;
  IMVKPFUN(glElementPointerAPPLE);
  IMVKPFUN(glDrawElementArrayAPPLE);
  IMVKPFUN(glDrawRangeElementArrayAPPLE);
  IMVKPFUN(glMultiDrawElementArrayAPPLE);
  IMVKPFUN(glMultiDrawRangeElementArrayAPPLE);
  NowState.IS_LOAD_GL_APPLE_element_array = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_APPLE_fence() {
  bool isAllLoaded = true;
  IMVKPFUN(glGenFencesAPPLE);
  IMVKPFUN(glDeleteFencesAPPLE);
  IMVKPFUN(glSetFenceAPPLE);
  IMVKPFUN(glIsFenceAPPLE);
  IMVKPFUN(glTestFenceAPPLE);
  IMVKPFUN(glFinishFenceAPPLE);
  IMVKPFUN(glTestObjectAPPLE);
  IMVKPFUN(glFinishObjectAPPLE);
  NowState.IS_LOAD_GL_APPLE_fence = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_APPLE_flush_buffer_range() {
  bool isAllLoaded = true;
  IMVKPFUN(glBufferParameteriAPPLE);
  IMVKPFUN(glFlushMappedBufferRangeAPPLE);
  NowState.IS_LOAD_GL_APPLE_flush_buffer_range = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_APPLE_object_purgeable() {
  bool isAllLoaded = true;
  IMVKPFUN(glObjectPurgeableAPPLE);
  IMVKPFUN(glObjectUnpurgeableAPPLE);
  IMVKPFUN(glGetObjectParameterivAPPLE);
  NowState.IS_LOAD_GL_APPLE_object_purgeable = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_APPLE_texture_range() {
  bool isAllLoaded = true;
  IMVKPFUN(glTextureRangeAPPLE);
  IMVKPFUN(glGetTexParameterPointervAPPLE);
  NowState.IS_LOAD_GL_APPLE_texture_range = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_APPLE_vertex_array_object() {
  bool isAllLoaded = true;
  IMVKPFUN(glBindVertexArrayAPPLE);
  IMVKPFUN(glDeleteVertexArraysAPPLE);
  IMVKPFUN(glGenVertexArraysAPPLE);
  IMVKPFUN(glIsVertexArrayAPPLE);
  NowState.IS_LOAD_GL_APPLE_vertex_array_object = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_APPLE_vertex_array_range() {
  bool isAllLoaded = true;
  IMVKPFUN(glVertexArrayRangeAPPLE);
  IMVKPFUN(glFlushVertexArrayRangeAPPLE);
  IMVKPFUN(glVertexArrayParameteriAPPLE);
  NowState.IS_LOAD_GL_APPLE_vertex_array_range = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_APPLE_vertex_program_evaluators() {
  bool isAllLoaded = true;
  IMVKPFUN(glEnableVertexAttribAPPLE);
  IMVKPFUN(glDisableVertexAttribAPPLE);
  IMVKPFUN(glIsVertexAttribEnabledAPPLE);
  IMVKPFUN(glMapVertexAttrib1dAPPLE);
  IMVKPFUN(glMapVertexAttrib1fAPPLE);
  IMVKPFUN(glMapVertexAttrib2dAPPLE);
  IMVKPFUN(glMapVertexAttrib2fAPPLE);
  NowState.IS_LOAD_GL_APPLE_vertex_program_evaluators = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ATI_draw_buffers() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawBuffersATI);
  NowState.IS_LOAD_GL_ATI_draw_buffers = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ATI_element_array() {
  bool isAllLoaded = true;
  IMVKPFUN(glElementPointerATI);
  IMVKPFUN(glDrawElementArrayATI);
  IMVKPFUN(glDrawRangeElementArrayATI);
  NowState.IS_LOAD_GL_ATI_element_array = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ATI_envmap_bumpmap() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexBumpParameterivATI);
  IMVKPFUN(glTexBumpParameterfvATI);
  IMVKPFUN(glGetTexBumpParameterivATI);
  IMVKPFUN(glGetTexBumpParameterfvATI);
  NowState.IS_LOAD_GL_ATI_envmap_bumpmap = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ATI_fragment_shader() {
  bool isAllLoaded = true;
  IMVKPFUN(glGenFragmentShadersATI);
  IMVKPFUN(glBindFragmentShaderATI);
  IMVKPFUN(glDeleteFragmentShaderATI);
  IMVKPFUN(glBeginFragmentShaderATI);
  IMVKPFUN(glEndFragmentShaderATI);
  IMVKPFUN(glPassTexCoordATI);
  IMVKPFUN(glSampleMapATI);
  IMVKPFUN(glColorFragmentOp1ATI);
  IMVKPFUN(glColorFragmentOp2ATI);
  IMVKPFUN(glColorFragmentOp3ATI);
  IMVKPFUN(glAlphaFragmentOp1ATI);
  IMVKPFUN(glAlphaFragmentOp2ATI);
  IMVKPFUN(glAlphaFragmentOp3ATI);
  IMVKPFUN(glSetFragmentShaderConstantATI);
  NowState.IS_LOAD_GL_ATI_fragment_shader = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ATI_map_object_buffer() {
  bool isAllLoaded = true;
  IMVKPFUN(glMapObjectBufferATI);
  IMVKPFUN(glUnmapObjectBufferATI);
  NowState.IS_LOAD_GL_ATI_map_object_buffer = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ATI_pn_triangles() {
  bool isAllLoaded = true;
  IMVKPFUN(glPNTrianglesiATI);
  IMVKPFUN(glPNTrianglesfATI);
  NowState.IS_LOAD_GL_ATI_pn_triangles = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ATI_separate_stencil() {
  bool isAllLoaded = true;
  IMVKPFUN(glStencilOpSeparateATI);
  IMVKPFUN(glStencilFuncSeparateATI);
  NowState.IS_LOAD_GL_ATI_separate_stencil = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ATI_vertex_array_object() {
  bool isAllLoaded = true;
  IMVKPFUN(glNewObjectBufferATI);
  IMVKPFUN(glIsObjectBufferATI);
  IMVKPFUN(glUpdateObjectBufferATI);
  IMVKPFUN(glGetObjectBufferfvATI);
  IMVKPFUN(glGetObjectBufferivATI);
  IMVKPFUN(glFreeObjectBufferATI);
  IMVKPFUN(glArrayObjectATI);
  IMVKPFUN(glGetArrayObjectfvATI);
  IMVKPFUN(glGetArrayObjectivATI);
  IMVKPFUN(glVariantArrayObjectATI);
  IMVKPFUN(glGetVariantArrayObjectfvATI);
  IMVKPFUN(glGetVariantArrayObjectivATI);
  NowState.IS_LOAD_GL_ATI_vertex_array_object = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ATI_vertex_attrib_array_object() {
  bool isAllLoaded = true;
  IMVKPFUN(glVertexAttribArrayObjectATI);
  IMVKPFUN(glGetVertexAttribArrayObjectfvATI);
  IMVKPFUN(glGetVertexAttribArrayObjectivATI);
  NowState.IS_LOAD_GL_ATI_vertex_attrib_array_object = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_ATI_vertex_streams() {
  bool isAllLoaded = true;
  IMVKPFUN(glVertexStream1sATI);
  IMVKPFUN(glVertexStream1svATI);
  IMVKPFUN(glVertexStream1iATI);
  IMVKPFUN(glVertexStream1ivATI);
  IMVKPFUN(glVertexStream1fATI);
  IMVKPFUN(glVertexStream1fvATI);
  IMVKPFUN(glVertexStream1dATI);
  IMVKPFUN(glVertexStream1dvATI);
  IMVKPFUN(glVertexStream2sATI);
  IMVKPFUN(glVertexStream2svATI);
  IMVKPFUN(glVertexStream2iATI);
  IMVKPFUN(glVertexStream2ivATI);
  IMVKPFUN(glVertexStream2fATI);
  IMVKPFUN(glVertexStream2fvATI);
  IMVKPFUN(glVertexStream2dATI);
  IMVKPFUN(glVertexStream2dvATI);
  IMVKPFUN(glVertexStream3sATI);
  IMVKPFUN(glVertexStream3svATI);
  IMVKPFUN(glVertexStream3iATI);
  IMVKPFUN(glVertexStream3ivATI);
  IMVKPFUN(glVertexStream3fATI);
  IMVKPFUN(glVertexStream3fvATI);
  IMVKPFUN(glVertexStream3dATI);
  IMVKPFUN(glVertexStream3dvATI);
  IMVKPFUN(glVertexStream4sATI);
  IMVKPFUN(glVertexStream4svATI);
  IMVKPFUN(glVertexStream4iATI);
  IMVKPFUN(glVertexStream4ivATI);
  IMVKPFUN(glVertexStream4fATI);
  IMVKPFUN(glVertexStream4fvATI);
  IMVKPFUN(glVertexStream4dATI);
  IMVKPFUN(glVertexStream4dvATI);
  IMVKPFUN(glNormalStream3bATI);
  IMVKPFUN(glNormalStream3bvATI);
  IMVKPFUN(glNormalStream3sATI);
  IMVKPFUN(glNormalStream3svATI);
  IMVKPFUN(glNormalStream3iATI);
  IMVKPFUN(glNormalStream3ivATI);
  IMVKPFUN(glNormalStream3fATI);
  IMVKPFUN(glNormalStream3fvATI);
  IMVKPFUN(glNormalStream3dATI);
  IMVKPFUN(glNormalStream3dvATI);
  IMVKPFUN(glClientActiveVertexStreamATI);
  IMVKPFUN(glVertexBlendEnviATI);
  IMVKPFUN(glVertexBlendEnvfATI);
  NowState.IS_LOAD_GL_ATI_vertex_streams = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_EGL_image_storage() {
  bool isAllLoaded = true;
  IMVKPFUN(glEGLImageTargetTexStorageEXT);
  IMVKPFUN(glEGLImageTargetTextureStorageEXT);
  NowState.IS_LOAD_GL_EXT_EGL_image_storage = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_bindable_uniform() {
  bool isAllLoaded = true;
  IMVKPFUN(glUniformBufferEXT);
  IMVKPFUN(glGetUniformBufferSizeEXT);
  IMVKPFUN(glGetUniformOffsetEXT);
  NowState.IS_LOAD_GL_EXT_bindable_uniform = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_blend_color() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlendColorEXT);
  NowState.IS_LOAD_GL_EXT_blend_color = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_blend_equation_separate() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlendEquationSeparateEXT);
  NowState.IS_LOAD_GL_EXT_blend_equation_separate = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_blend_func_separate() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlendFuncSeparateEXT);
  NowState.IS_LOAD_GL_EXT_blend_func_separate = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_blend_minmax() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlendEquationEXT);
  NowState.IS_LOAD_GL_EXT_blend_minmax = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_color_subtable() {
  bool isAllLoaded = true;
  IMVKPFUN(glColorSubTableEXT);
  IMVKPFUN(glCopyColorSubTableEXT);
  NowState.IS_LOAD_GL_EXT_color_subtable = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_compiled_vertex_array() {
  bool isAllLoaded = true;
  IMVKPFUN(glLockArraysEXT);
  IMVKPFUN(glUnlockArraysEXT);
  NowState.IS_LOAD_GL_EXT_compiled_vertex_array = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_convolution() {
  bool isAllLoaded = true;
  IMVKPFUN(glConvolutionFilter1DEXT);
  IMVKPFUN(glConvolutionFilter2DEXT);
  IMVKPFUN(glConvolutionParameterfEXT);
  IMVKPFUN(glConvolutionParameterfvEXT);
  IMVKPFUN(glConvolutionParameteriEXT);
  IMVKPFUN(glConvolutionParameterivEXT);
  IMVKPFUN(glCopyConvolutionFilter1DEXT);
  IMVKPFUN(glCopyConvolutionFilter2DEXT);
  IMVKPFUN(glGetConvolutionFilterEXT);
  IMVKPFUN(glGetConvolutionParameterfvEXT);
  IMVKPFUN(glGetConvolutionParameterivEXT);
  IMVKPFUN(glGetSeparableFilterEXT);
  IMVKPFUN(glSeparableFilter2DEXT);
  NowState.IS_LOAD_GL_EXT_convolution = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_coordinate_frame() {
  bool isAllLoaded = true;
  IMVKPFUN(glTangent3bEXT);
  IMVKPFUN(glTangent3bvEXT);
  IMVKPFUN(glTangent3dEXT);
  IMVKPFUN(glTangent3dvEXT);
  IMVKPFUN(glTangent3fEXT);
  IMVKPFUN(glTangent3fvEXT);
  IMVKPFUN(glTangent3iEXT);
  IMVKPFUN(glTangent3ivEXT);
  IMVKPFUN(glTangent3sEXT);
  IMVKPFUN(glTangent3svEXT);
  IMVKPFUN(glBinormal3bEXT);
  IMVKPFUN(glBinormal3bvEXT);
  IMVKPFUN(glBinormal3dEXT);
  IMVKPFUN(glBinormal3dvEXT);
  IMVKPFUN(glBinormal3fEXT);
  IMVKPFUN(glBinormal3fvEXT);
  IMVKPFUN(glBinormal3iEXT);
  IMVKPFUN(glBinormal3ivEXT);
  IMVKPFUN(glBinormal3sEXT);
  IMVKPFUN(glBinormal3svEXT);
  IMVKPFUN(glTangentPointerEXT);
  IMVKPFUN(glBinormalPointerEXT);
  NowState.IS_LOAD_GL_EXT_coordinate_frame = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_copy_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glCopyTexImage1DEXT);
  IMVKPFUN(glCopyTexImage2DEXT);
  IMVKPFUN(glCopyTexSubImage1DEXT);
  IMVKPFUN(glCopyTexSubImage2DEXT);
  IMVKPFUN(glCopyTexSubImage3DEXT);
  NowState.IS_LOAD_GL_EXT_copy_texture = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_cull_vertex() {
  bool isAllLoaded = true;
  IMVKPFUN(glCullParameterdvEXT);
  IMVKPFUN(glCullParameterfvEXT);
  NowState.IS_LOAD_GL_EXT_cull_vertex = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_debug_label() {
  bool isAllLoaded = true;
  IMVKPFUN(glLabelObjectEXT);
  IMVKPFUN(glGetObjectLabelEXT);
  NowState.IS_LOAD_GL_EXT_debug_label = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_debug_marker() {
  bool isAllLoaded = true;
  IMVKPFUN(glInsertEventMarkerEXT);
  IMVKPFUN(glPushGroupMarkerEXT);
  IMVKPFUN(glPopGroupMarkerEXT);
  NowState.IS_LOAD_GL_EXT_debug_marker = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_depth_bounds_test() {
  bool isAllLoaded = true;
  IMVKPFUN(glDepthBoundsEXT);
  NowState.IS_LOAD_GL_EXT_depth_bounds_test = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_direct_state_access() {
  bool isAllLoaded = true;
  IMVKPFUN(glMatrixLoadfEXT);
  IMVKPFUN(glMatrixLoaddEXT);
  IMVKPFUN(glMatrixMultfEXT);
  IMVKPFUN(glMatrixMultdEXT);
  IMVKPFUN(glMatrixLoadIdentityEXT);
  IMVKPFUN(glMatrixRotatefEXT);
  IMVKPFUN(glMatrixRotatedEXT);
  IMVKPFUN(glMatrixScalefEXT);
  IMVKPFUN(glMatrixScaledEXT);
  IMVKPFUN(glMatrixTranslatefEXT);
  IMVKPFUN(glMatrixTranslatedEXT);
  IMVKPFUN(glMatrixFrustumEXT);
  IMVKPFUN(glMatrixOrthoEXT);
  IMVKPFUN(glMatrixPopEXT);
  IMVKPFUN(glMatrixPushEXT);
  IMVKPFUN(glClientAttribDefaultEXT);
  IMVKPFUN(glPushClientAttribDefaultEXT);
  IMVKPFUN(glTextureParameterfEXT);
  IMVKPFUN(glTextureParameterfvEXT);
  IMVKPFUN(glTextureParameteriEXT);
  IMVKPFUN(glTextureParameterivEXT);
  IMVKPFUN(glTextureImage1DEXT);
  IMVKPFUN(glTextureImage2DEXT);
  IMVKPFUN(glTextureSubImage1DEXT);
  IMVKPFUN(glTextureSubImage2DEXT);
  IMVKPFUN(glCopyTextureImage1DEXT);
  IMVKPFUN(glCopyTextureImage2DEXT);
  IMVKPFUN(glCopyTextureSubImage1DEXT);
  IMVKPFUN(glCopyTextureSubImage2DEXT);
  IMVKPFUN(glGetTextureImageEXT);
  IMVKPFUN(glGetTextureParameterfvEXT);
  IMVKPFUN(glGetTextureParameterivEXT);
  IMVKPFUN(glGetTextureLevelParameterfvEXT);
  IMVKPFUN(glGetTextureLevelParameterivEXT);
  IMVKPFUN(glTextureImage3DEXT);
  IMVKPFUN(glTextureSubImage3DEXT);
  IMVKPFUN(glCopyTextureSubImage3DEXT);
  IMVKPFUN(glBindMultiTextureEXT);
  IMVKPFUN(glMultiTexCoordPointerEXT);
  IMVKPFUN(glMultiTexEnvfEXT);
  IMVKPFUN(glMultiTexEnvfvEXT);
  IMVKPFUN(glMultiTexEnviEXT);
  IMVKPFUN(glMultiTexEnvivEXT);
  IMVKPFUN(glMultiTexGendEXT);
  IMVKPFUN(glMultiTexGendvEXT);
  IMVKPFUN(glMultiTexGenfEXT);
  IMVKPFUN(glMultiTexGenfvEXT);
  IMVKPFUN(glMultiTexGeniEXT);
  IMVKPFUN(glMultiTexGenivEXT);
  IMVKPFUN(glGetMultiTexEnvfvEXT);
  IMVKPFUN(glGetMultiTexEnvivEXT);
  IMVKPFUN(glGetMultiTexGendvEXT);
  IMVKPFUN(glGetMultiTexGenfvEXT);
  IMVKPFUN(glGetMultiTexGenivEXT);
  IMVKPFUN(glMultiTexParameteriEXT);
  IMVKPFUN(glMultiTexParameterivEXT);
  IMVKPFUN(glMultiTexParameterfEXT);
  IMVKPFUN(glMultiTexParameterfvEXT);
  IMVKPFUN(glMultiTexImage1DEXT);
  IMVKPFUN(glMultiTexImage2DEXT);
  IMVKPFUN(glMultiTexSubImage1DEXT);
  IMVKPFUN(glMultiTexSubImage2DEXT);
  IMVKPFUN(glCopyMultiTexImage1DEXT);
  IMVKPFUN(glCopyMultiTexImage2DEXT);
  IMVKPFUN(glCopyMultiTexSubImage1DEXT);
  IMVKPFUN(glCopyMultiTexSubImage2DEXT);
  IMVKPFUN(glGetMultiTexImageEXT);
  IMVKPFUN(glGetMultiTexParameterfvEXT);
  IMVKPFUN(glGetMultiTexParameterivEXT);
  IMVKPFUN(glGetMultiTexLevelParameterfvEXT);
  IMVKPFUN(glGetMultiTexLevelParameterivEXT);
  IMVKPFUN(glMultiTexImage3DEXT);
  IMVKPFUN(glMultiTexSubImage3DEXT);
  IMVKPFUN(glCopyMultiTexSubImage3DEXT);
  IMVKPFUN(glEnableClientStateIndexedEXT);
  IMVKPFUN(glDisableClientStateIndexedEXT);
  IMVKPFUN(glGetFloatIndexedvEXT);
  IMVKPFUN(glGetDoubleIndexedvEXT);
  IMVKPFUN(glGetPointerIndexedvEXT);
  IMVKPFUN(glEnableIndexedEXT);
  IMVKPFUN(glDisableIndexedEXT);
  IMVKPFUN(glIsEnabledIndexedEXT);
  IMVKPFUN(glGetIntegerIndexedvEXT);
  IMVKPFUN(glGetBooleanIndexedvEXT);
  IMVKPFUN(glCompressedTextureImage3DEXT);
  IMVKPFUN(glCompressedTextureImage2DEXT);
  IMVKPFUN(glCompressedTextureImage1DEXT);
  IMVKPFUN(glCompressedTextureSubImage3DEXT);
  IMVKPFUN(glCompressedTextureSubImage2DEXT);
  IMVKPFUN(glCompressedTextureSubImage1DEXT);
  IMVKPFUN(glGetCompressedTextureImageEXT);
  IMVKPFUN(glCompressedMultiTexImage3DEXT);
  IMVKPFUN(glCompressedMultiTexImage2DEXT);
  IMVKPFUN(glCompressedMultiTexImage1DEXT);
  IMVKPFUN(glCompressedMultiTexSubImage3DEXT);
  IMVKPFUN(glCompressedMultiTexSubImage2DEXT);
  IMVKPFUN(glCompressedMultiTexSubImage1DEXT);
  IMVKPFUN(glGetCompressedMultiTexImageEXT);
  IMVKPFUN(glMatrixLoadTransposefEXT);
  IMVKPFUN(glMatrixLoadTransposedEXT);
  IMVKPFUN(glMatrixMultTransposefEXT);
  IMVKPFUN(glMatrixMultTransposedEXT);
  IMVKPFUN(glNamedBufferDataEXT);
  IMVKPFUN(glNamedBufferSubDataEXT);
  IMVKPFUN(glMapNamedBufferEXT);
  IMVKPFUN(glUnmapNamedBufferEXT);
  IMVKPFUN(glGetNamedBufferParameterivEXT);
  IMVKPFUN(glGetNamedBufferPointervEXT);
  IMVKPFUN(glGetNamedBufferSubDataEXT);
  IMVKPFUN(glProgramUniform1fEXT);
  IMVKPFUN(glProgramUniform2fEXT);
  IMVKPFUN(glProgramUniform3fEXT);
  IMVKPFUN(glProgramUniform4fEXT);
  IMVKPFUN(glProgramUniform1iEXT);
  IMVKPFUN(glProgramUniform2iEXT);
  IMVKPFUN(glProgramUniform3iEXT);
  IMVKPFUN(glProgramUniform4iEXT);
  IMVKPFUN(glProgramUniform1fvEXT);
  IMVKPFUN(glProgramUniform2fvEXT);
  IMVKPFUN(glProgramUniform3fvEXT);
  IMVKPFUN(glProgramUniform4fvEXT);
  IMVKPFUN(glProgramUniform1ivEXT);
  IMVKPFUN(glProgramUniform2ivEXT);
  IMVKPFUN(glProgramUniform3ivEXT);
  IMVKPFUN(glProgramUniform4ivEXT);
  IMVKPFUN(glProgramUniformMatrix2fvEXT);
  IMVKPFUN(glProgramUniformMatrix3fvEXT);
  IMVKPFUN(glProgramUniformMatrix4fvEXT);
  IMVKPFUN(glProgramUniformMatrix2x3fvEXT);
  IMVKPFUN(glProgramUniformMatrix3x2fvEXT);
  IMVKPFUN(glProgramUniformMatrix2x4fvEXT);
  IMVKPFUN(glProgramUniformMatrix4x2fvEXT);
  IMVKPFUN(glProgramUniformMatrix3x4fvEXT);
  IMVKPFUN(glProgramUniformMatrix4x3fvEXT);
  IMVKPFUN(glTextureBufferEXT);
  IMVKPFUN(glMultiTexBufferEXT);
  IMVKPFUN(glTextureParameterIivEXT);
  IMVKPFUN(glTextureParameterIuivEXT);
  IMVKPFUN(glGetTextureParameterIivEXT);
  IMVKPFUN(glGetTextureParameterIuivEXT);
  IMVKPFUN(glMultiTexParameterIivEXT);
  IMVKPFUN(glMultiTexParameterIuivEXT);
  IMVKPFUN(glGetMultiTexParameterIivEXT);
  IMVKPFUN(glGetMultiTexParameterIuivEXT);
  IMVKPFUN(glProgramUniform1uiEXT);
  IMVKPFUN(glProgramUniform2uiEXT);
  IMVKPFUN(glProgramUniform3uiEXT);
  IMVKPFUN(glProgramUniform4uiEXT);
  IMVKPFUN(glProgramUniform1uivEXT);
  IMVKPFUN(glProgramUniform2uivEXT);
  IMVKPFUN(glProgramUniform3uivEXT);
  IMVKPFUN(glProgramUniform4uivEXT);
  IMVKPFUN(glNamedProgramLocalParameters4fvEXT);
  IMVKPFUN(glNamedProgramLocalParameterI4iEXT);
  IMVKPFUN(glNamedProgramLocalParameterI4ivEXT);
  IMVKPFUN(glNamedProgramLocalParametersI4ivEXT);
  IMVKPFUN(glNamedProgramLocalParameterI4uiEXT);
  IMVKPFUN(glNamedProgramLocalParameterI4uivEXT);
  IMVKPFUN(glNamedProgramLocalParametersI4uivEXT);
  IMVKPFUN(glGetNamedProgramLocalParameterIivEXT);
  IMVKPFUN(glGetNamedProgramLocalParameterIuivEXT);
  IMVKPFUN(glEnableClientStateiEXT);
  IMVKPFUN(glDisableClientStateiEXT);
  IMVKPFUN(glGetFloati_vEXT);
  IMVKPFUN(glGetDoublei_vEXT);
  IMVKPFUN(glGetPointeri_vEXT);
  IMVKPFUN(glNamedProgramStringEXT);
  IMVKPFUN(glNamedProgramLocalParameter4dEXT);
  IMVKPFUN(glNamedProgramLocalParameter4dvEXT);
  IMVKPFUN(glNamedProgramLocalParameter4fEXT);
  IMVKPFUN(glNamedProgramLocalParameter4fvEXT);
  IMVKPFUN(glGetNamedProgramLocalParameterdvEXT);
  IMVKPFUN(glGetNamedProgramLocalParameterfvEXT);
  IMVKPFUN(glGetNamedProgramivEXT);
  IMVKPFUN(glGetNamedProgramStringEXT);
  IMVKPFUN(glNamedRenderbufferStorageEXT);
  IMVKPFUN(glGetNamedRenderbufferParameterivEXT);
  IMVKPFUN(glNamedRenderbufferStorageMultisampleEXT);
  IMVKPFUN(glNamedRenderbufferStorageMultisampleCoverageEXT);
  IMVKPFUN(glCheckNamedFramebufferStatusEXT);
  IMVKPFUN(glNamedFramebufferTexture1DEXT);
  IMVKPFUN(glNamedFramebufferTexture2DEXT);
  IMVKPFUN(glNamedFramebufferTexture3DEXT);
  IMVKPFUN(glNamedFramebufferRenderbufferEXT);
  IMVKPFUN(glGetNamedFramebufferAttachmentParameterivEXT);
  IMVKPFUN(glGenerateTextureMipmapEXT);
  IMVKPFUN(glGenerateMultiTexMipmapEXT);
  IMVKPFUN(glFramebufferDrawBufferEXT);
  IMVKPFUN(glFramebufferDrawBuffersEXT);
  IMVKPFUN(glFramebufferReadBufferEXT);
  IMVKPFUN(glGetFramebufferParameterivEXT);
  IMVKPFUN(glNamedCopyBufferSubDataEXT);
  IMVKPFUN(glNamedFramebufferTextureEXT);
  IMVKPFUN(glNamedFramebufferTextureLayerEXT);
  IMVKPFUN(glNamedFramebufferTextureFaceEXT);
  IMVKPFUN(glTextureRenderbufferEXT);
  IMVKPFUN(glMultiTexRenderbufferEXT);
  IMVKPFUN(glVertexArrayVertexOffsetEXT);
  IMVKPFUN(glVertexArrayColorOffsetEXT);
  IMVKPFUN(glVertexArrayEdgeFlagOffsetEXT);
  IMVKPFUN(glVertexArrayIndexOffsetEXT);
  IMVKPFUN(glVertexArrayNormalOffsetEXT);
  IMVKPFUN(glVertexArrayTexCoordOffsetEXT);
  IMVKPFUN(glVertexArrayMultiTexCoordOffsetEXT);
  IMVKPFUN(glVertexArrayFogCoordOffsetEXT);
  IMVKPFUN(glVertexArraySecondaryColorOffsetEXT);
  IMVKPFUN(glVertexArrayVertexAttribOffsetEXT);
  IMVKPFUN(glVertexArrayVertexAttribIOffsetEXT);
  IMVKPFUN(glEnableVertexArrayEXT);
  IMVKPFUN(glDisableVertexArrayEXT);
  IMVKPFUN(glEnableVertexArrayAttribEXT);
  IMVKPFUN(glDisableVertexArrayAttribEXT);
  IMVKPFUN(glGetVertexArrayIntegervEXT);
  IMVKPFUN(glGetVertexArrayPointervEXT);
  IMVKPFUN(glGetVertexArrayIntegeri_vEXT);
  IMVKPFUN(glGetVertexArrayPointeri_vEXT);
  IMVKPFUN(glMapNamedBufferRangeEXT);
  IMVKPFUN(glFlushMappedNamedBufferRangeEXT);
  IMVKPFUN(glNamedBufferStorageEXT);
  IMVKPFUN(glClearNamedBufferDataEXT);
  IMVKPFUN(glClearNamedBufferSubDataEXT);
  IMVKPFUN(glNamedFramebufferParameteriEXT);
  IMVKPFUN(glGetNamedFramebufferParameterivEXT);
  IMVKPFUN(glProgramUniform1dEXT);
  IMVKPFUN(glProgramUniform2dEXT);
  IMVKPFUN(glProgramUniform3dEXT);
  IMVKPFUN(glProgramUniform4dEXT);
  IMVKPFUN(glProgramUniform1dvEXT);
  IMVKPFUN(glProgramUniform2dvEXT);
  IMVKPFUN(glProgramUniform3dvEXT);
  IMVKPFUN(glProgramUniform4dvEXT);
  IMVKPFUN(glProgramUniformMatrix2dvEXT);
  IMVKPFUN(glProgramUniformMatrix3dvEXT);
  IMVKPFUN(glProgramUniformMatrix4dvEXT);
  IMVKPFUN(glProgramUniformMatrix2x3dvEXT);
  IMVKPFUN(glProgramUniformMatrix2x4dvEXT);
  IMVKPFUN(glProgramUniformMatrix3x2dvEXT);
  IMVKPFUN(glProgramUniformMatrix3x4dvEXT);
  IMVKPFUN(glProgramUniformMatrix4x2dvEXT);
  IMVKPFUN(glProgramUniformMatrix4x3dvEXT);
  IMVKPFUN(glTextureBufferRangeEXT);
  IMVKPFUN(glTextureStorage1DEXT);
  IMVKPFUN(glTextureStorage2DEXT);
  IMVKPFUN(glTextureStorage3DEXT);
  IMVKPFUN(glTextureStorage2DMultisampleEXT);
  IMVKPFUN(glTextureStorage3DMultisampleEXT);
  IMVKPFUN(glVertexArrayBindVertexBufferEXT);
  IMVKPFUN(glVertexArrayVertexAttribFormatEXT);
  IMVKPFUN(glVertexArrayVertexAttribIFormatEXT);
  IMVKPFUN(glVertexArrayVertexAttribLFormatEXT);
  IMVKPFUN(glVertexArrayVertexAttribBindingEXT);
  IMVKPFUN(glVertexArrayVertexBindingDivisorEXT);
  IMVKPFUN(glVertexArrayVertexAttribLOffsetEXT);
  IMVKPFUN(glTexturePageCommitmentEXT);
  IMVKPFUN(glVertexArrayVertexAttribDivisorEXT);
  NowState.IS_LOAD_GL_EXT_direct_state_access = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_draw_buffers2() {
  bool isAllLoaded = true;
  IMVKPFUN(glColorMaskIndexedEXT);
  NowState.IS_LOAD_GL_EXT_draw_buffers2 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_draw_instanced() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawArraysInstancedEXT);
  IMVKPFUN(glDrawElementsInstancedEXT);
  NowState.IS_LOAD_GL_EXT_draw_instanced = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_draw_range_elements() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawRangeElementsEXT);
  NowState.IS_LOAD_GL_EXT_draw_range_elements = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_external_buffer() {
  bool isAllLoaded = true;
  IMVKPFUN(glBufferStorageExternalEXT);
  IMVKPFUN(glNamedBufferStorageExternalEXT);
  NowState.IS_LOAD_GL_EXT_external_buffer = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_fog_coord() {
  bool isAllLoaded = true;
  IMVKPFUN(glFogCoordfEXT);
  IMVKPFUN(glFogCoordfvEXT);
  IMVKPFUN(glFogCoorddEXT);
  IMVKPFUN(glFogCoorddvEXT);
  IMVKPFUN(glFogCoordPointerEXT);
  NowState.IS_LOAD_GL_EXT_fog_coord = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_framebuffer_blit() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlitFramebufferEXT);
  NowState.IS_LOAD_GL_EXT_framebuffer_blit = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_framebuffer_blit_layers() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlitFramebufferLayersEXT);
  IMVKPFUN(glBlitFramebufferLayerEXT);
  NowState.IS_LOAD_GL_EXT_framebuffer_blit_layers = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_framebuffer_multisample() {
  bool isAllLoaded = true;
  IMVKPFUN(glRenderbufferStorageMultisampleEXT);
  NowState.IS_LOAD_GL_EXT_framebuffer_multisample = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_framebuffer_object() {
  bool isAllLoaded = true;
  IMVKPFUN(glIsRenderbufferEXT);
  IMVKPFUN(glBindRenderbufferEXT);
  IMVKPFUN(glDeleteRenderbuffersEXT);
  IMVKPFUN(glGenRenderbuffersEXT);
  IMVKPFUN(glRenderbufferStorageEXT);
  IMVKPFUN(glGetRenderbufferParameterivEXT);
  IMVKPFUN(glIsFramebufferEXT);
  IMVKPFUN(glBindFramebufferEXT);
  IMVKPFUN(glDeleteFramebuffersEXT);
  IMVKPFUN(glGenFramebuffersEXT);
  IMVKPFUN(glCheckFramebufferStatusEXT);
  IMVKPFUN(glFramebufferTexture1DEXT);
  IMVKPFUN(glFramebufferTexture2DEXT);
  IMVKPFUN(glFramebufferTexture3DEXT);
  IMVKPFUN(glFramebufferRenderbufferEXT);
  IMVKPFUN(glGetFramebufferAttachmentParameterivEXT);
  IMVKPFUN(glGenerateMipmapEXT);
  NowState.IS_LOAD_GL_EXT_framebuffer_object = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_geometry_shader4() {
  bool isAllLoaded = true;
  IMVKPFUN(glProgramParameteriEXT);
  NowState.IS_LOAD_GL_EXT_geometry_shader4 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_gpu_program_parameters() {
  bool isAllLoaded = true;
  IMVKPFUN(glProgramEnvParameters4fvEXT);
  IMVKPFUN(glProgramLocalParameters4fvEXT);
  NowState.IS_LOAD_GL_EXT_gpu_program_parameters = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_gpu_shader4() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetUniformuivEXT);
  IMVKPFUN(glBindFragDataLocationEXT);
  IMVKPFUN(glGetFragDataLocationEXT);
  IMVKPFUN(glUniform1uiEXT);
  IMVKPFUN(glUniform2uiEXT);
  IMVKPFUN(glUniform3uiEXT);
  IMVKPFUN(glUniform4uiEXT);
  IMVKPFUN(glUniform1uivEXT);
  IMVKPFUN(glUniform2uivEXT);
  IMVKPFUN(glUniform3uivEXT);
  IMVKPFUN(glUniform4uivEXT);
  IMVKPFUN(glVertexAttribI1iEXT);
  IMVKPFUN(glVertexAttribI2iEXT);
  IMVKPFUN(glVertexAttribI3iEXT);
  IMVKPFUN(glVertexAttribI4iEXT);
  IMVKPFUN(glVertexAttribI1uiEXT);
  IMVKPFUN(glVertexAttribI2uiEXT);
  IMVKPFUN(glVertexAttribI3uiEXT);
  IMVKPFUN(glVertexAttribI4uiEXT);
  IMVKPFUN(glVertexAttribI1ivEXT);
  IMVKPFUN(glVertexAttribI2ivEXT);
  IMVKPFUN(glVertexAttribI3ivEXT);
  IMVKPFUN(glVertexAttribI4ivEXT);
  IMVKPFUN(glVertexAttribI1uivEXT);
  IMVKPFUN(glVertexAttribI2uivEXT);
  IMVKPFUN(glVertexAttribI3uivEXT);
  IMVKPFUN(glVertexAttribI4uivEXT);
  IMVKPFUN(glVertexAttribI4bvEXT);
  IMVKPFUN(glVertexAttribI4svEXT);
  IMVKPFUN(glVertexAttribI4ubvEXT);
  IMVKPFUN(glVertexAttribI4usvEXT);
  IMVKPFUN(glVertexAttribIPointerEXT);
  IMVKPFUN(glGetVertexAttribIivEXT);
  IMVKPFUN(glGetVertexAttribIuivEXT);
  NowState.IS_LOAD_GL_EXT_gpu_shader4 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_histogram() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetHistogramEXT);
  IMVKPFUN(glGetHistogramParameterfvEXT);
  IMVKPFUN(glGetHistogramParameterivEXT);
  IMVKPFUN(glGetMinmaxEXT);
  IMVKPFUN(glGetMinmaxParameterfvEXT);
  IMVKPFUN(glGetMinmaxParameterivEXT);
  IMVKPFUN(glHistogramEXT);
  IMVKPFUN(glMinmaxEXT);
  IMVKPFUN(glResetHistogramEXT);
  IMVKPFUN(glResetMinmaxEXT);
  NowState.IS_LOAD_GL_EXT_histogram = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_index_func() {
  bool isAllLoaded = true;
  IMVKPFUN(glIndexFuncEXT);
  NowState.IS_LOAD_GL_EXT_index_func = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_index_material() {
  bool isAllLoaded = true;
  IMVKPFUN(glIndexMaterialEXT);
  NowState.IS_LOAD_GL_EXT_index_material = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_light_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glApplyTextureEXT);
  IMVKPFUN(glTextureLightEXT);
  IMVKPFUN(glTextureMaterialEXT);
  NowState.IS_LOAD_GL_EXT_light_texture = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_memory_object() {
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
  IMVKPFUN(glTexStorageMem1DEXT);
  IMVKPFUN(glTextureStorageMem1DEXT);
  NowState.IS_LOAD_GL_EXT_memory_object = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_memory_object_fd() {
  bool isAllLoaded = true;
  IMVKPFUN(glImportMemoryFdEXT);
  NowState.IS_LOAD_GL_EXT_memory_object_fd = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_memory_object_win32() {
  bool isAllLoaded = true;
  IMVKPFUN(glImportMemoryWin32HandleEXT);
  IMVKPFUN(glImportMemoryWin32NameEXT);
  NowState.IS_LOAD_GL_EXT_memory_object_win32 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_multi_draw_arrays() {
  bool isAllLoaded = true;
  IMVKPFUN(glMultiDrawArraysEXT);
  IMVKPFUN(glMultiDrawElementsEXT);
  NowState.IS_LOAD_GL_EXT_multi_draw_arrays = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_multisample() {
  bool isAllLoaded = true;
  IMVKPFUN(glSampleMaskEXT);
  IMVKPFUN(glSamplePatternEXT);
  NowState.IS_LOAD_GL_EXT_multisample = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_paletted_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glColorTableEXT);
  IMVKPFUN(glGetColorTableEXT);
  IMVKPFUN(glGetColorTableParameterivEXT);
  IMVKPFUN(glGetColorTableParameterfvEXT);
  NowState.IS_LOAD_GL_EXT_paletted_texture = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_pixel_transform() {
  bool isAllLoaded = true;
  IMVKPFUN(glPixelTransformParameteriEXT);
  IMVKPFUN(glPixelTransformParameterfEXT);
  IMVKPFUN(glPixelTransformParameterivEXT);
  IMVKPFUN(glPixelTransformParameterfvEXT);
  IMVKPFUN(glGetPixelTransformParameterivEXT);
  IMVKPFUN(glGetPixelTransformParameterfvEXT);
  NowState.IS_LOAD_GL_EXT_pixel_transform = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_point_parameters() {
  bool isAllLoaded = true;
  IMVKPFUN(glPointParameterfEXT);
  IMVKPFUN(glPointParameterfvEXT);
  NowState.IS_LOAD_GL_EXT_point_parameters = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_polygon_offset() {
  bool isAllLoaded = true;
  IMVKPFUN(glPolygonOffsetEXT);
  NowState.IS_LOAD_GL_EXT_polygon_offset = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_polygon_offset_clamp() {
  bool isAllLoaded = true;
  IMVKPFUN(glPolygonOffsetClampEXT);
  NowState.IS_LOAD_GL_EXT_polygon_offset_clamp = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_provoking_vertex() {
  bool isAllLoaded = true;
  IMVKPFUN(glProvokingVertexEXT);
  NowState.IS_LOAD_GL_EXT_provoking_vertex = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_raster_multisample() {
  bool isAllLoaded = true;
  IMVKPFUN(glRasterSamplesEXT);
  NowState.IS_LOAD_GL_EXT_raster_multisample = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_secondary_color() {
  bool isAllLoaded = true;
  IMVKPFUN(glSecondaryColor3bEXT);
  IMVKPFUN(glSecondaryColor3bvEXT);
  IMVKPFUN(glSecondaryColor3dEXT);
  IMVKPFUN(glSecondaryColor3dvEXT);
  IMVKPFUN(glSecondaryColor3fEXT);
  IMVKPFUN(glSecondaryColor3fvEXT);
  IMVKPFUN(glSecondaryColor3iEXT);
  IMVKPFUN(glSecondaryColor3ivEXT);
  IMVKPFUN(glSecondaryColor3sEXT);
  IMVKPFUN(glSecondaryColor3svEXT);
  IMVKPFUN(glSecondaryColor3ubEXT);
  IMVKPFUN(glSecondaryColor3ubvEXT);
  IMVKPFUN(glSecondaryColor3uiEXT);
  IMVKPFUN(glSecondaryColor3uivEXT);
  IMVKPFUN(glSecondaryColor3usEXT);
  IMVKPFUN(glSecondaryColor3usvEXT);
  IMVKPFUN(glSecondaryColorPointerEXT);
  NowState.IS_LOAD_GL_EXT_secondary_color = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_semaphore() {
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
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_semaphore_fd() {
  bool isAllLoaded = true;
  IMVKPFUN(glImportSemaphoreFdEXT);
  NowState.IS_LOAD_GL_EXT_semaphore_fd = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_semaphore_win32() {
  bool isAllLoaded = true;
  IMVKPFUN(glImportSemaphoreWin32HandleEXT);
  IMVKPFUN(glImportSemaphoreWin32NameEXT);
  NowState.IS_LOAD_GL_EXT_semaphore_win32 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_separate_shader_objects() {
  bool isAllLoaded = true;
  IMVKPFUN(glUseShaderProgramEXT);
  IMVKPFUN(glActiveProgramEXT);
  IMVKPFUN(glCreateShaderProgramEXT);
  NowState.IS_LOAD_GL_EXT_separate_shader_objects = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::
    TRY_LOAD_GL_EXT_shader_framebuffer_fetch_non_coherent() {
  bool isAllLoaded = true;
  IMVKPFUN(glFramebufferFetchBarrierEXT);
  NowState.IS_LOAD_GL_EXT_shader_framebuffer_fetch_non_coherent = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_shader_image_load_store() {
  bool isAllLoaded = true;
  IMVKPFUN(glBindImageTextureEXT);
  IMVKPFUN(glMemoryBarrierEXT);
  NowState.IS_LOAD_GL_EXT_shader_image_load_store = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_stencil_clear_tag() {
  bool isAllLoaded = true;
  IMVKPFUN(glStencilClearTagEXT);
  NowState.IS_LOAD_GL_EXT_stencil_clear_tag = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_stencil_two_side() {
  bool isAllLoaded = true;
  IMVKPFUN(glActiveStencilFaceEXT);
  NowState.IS_LOAD_GL_EXT_stencil_two_side = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_subtexture() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexSubImage1DEXT);
  IMVKPFUN(glTexSubImage2DEXT);
  NowState.IS_LOAD_GL_EXT_subtexture = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_texture3D() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexImage3DEXT);
  IMVKPFUN(glTexSubImage3DEXT);
  NowState.IS_LOAD_GL_EXT_texture3D = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_texture_array() {
  bool isAllLoaded = true;
  IMVKPFUN(glFramebufferTextureLayerEXT);
  NowState.IS_LOAD_GL_EXT_texture_array = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_texture_buffer_object() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexBufferEXT);
  NowState.IS_LOAD_GL_EXT_texture_buffer_object = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_texture_integer() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexParameterIivEXT);
  IMVKPFUN(glTexParameterIuivEXT);
  IMVKPFUN(glGetTexParameterIivEXT);
  IMVKPFUN(glGetTexParameterIuivEXT);
  IMVKPFUN(glClearColorIiEXT);
  IMVKPFUN(glClearColorIuiEXT);
  NowState.IS_LOAD_GL_EXT_texture_integer = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_texture_object() {
  bool isAllLoaded = true;
  IMVKPFUN(glAreTexturesResidentEXT);
  IMVKPFUN(glBindTextureEXT);
  IMVKPFUN(glDeleteTexturesEXT);
  IMVKPFUN(glGenTexturesEXT);
  IMVKPFUN(glIsTextureEXT);
  IMVKPFUN(glPrioritizeTexturesEXT);
  NowState.IS_LOAD_GL_EXT_texture_object = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_texture_perturb_normal() {
  bool isAllLoaded = true;
  IMVKPFUN(glTextureNormalEXT);
  NowState.IS_LOAD_GL_EXT_texture_perturb_normal = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_texture_storage() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexStorage1DEXT);
  IMVKPFUN(glTexStorage2DEXT);
  IMVKPFUN(glTexStorage3DEXT);
  NowState.IS_LOAD_GL_EXT_texture_storage = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_timer_query() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetQueryObjecti64vEXT);
  IMVKPFUN(glGetQueryObjectui64vEXT);
  NowState.IS_LOAD_GL_EXT_timer_query = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_transform_feedback() {
  bool isAllLoaded = true;
  IMVKPFUN(glBeginTransformFeedbackEXT);
  IMVKPFUN(glEndTransformFeedbackEXT);
  IMVKPFUN(glBindBufferRangeEXT);
  IMVKPFUN(glBindBufferOffsetEXT);
  IMVKPFUN(glBindBufferBaseEXT);
  IMVKPFUN(glTransformFeedbackVaryingsEXT);
  IMVKPFUN(glGetTransformFeedbackVaryingEXT);
  NowState.IS_LOAD_GL_EXT_transform_feedback = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_vertex_array() {
  bool isAllLoaded = true;
  IMVKPFUN(glArrayElementEXT);
  IMVKPFUN(glColorPointerEXT);
  IMVKPFUN(glDrawArraysEXT);
  IMVKPFUN(glEdgeFlagPointerEXT);
  IMVKPFUN(glGetPointervEXT);
  IMVKPFUN(glIndexPointerEXT);
  IMVKPFUN(glNormalPointerEXT);
  IMVKPFUN(glTexCoordPointerEXT);
  IMVKPFUN(glVertexPointerEXT);
  NowState.IS_LOAD_GL_EXT_vertex_array = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_vertex_attrib_64bit() {
  bool isAllLoaded = true;
  IMVKPFUN(glVertexAttribL1dEXT);
  IMVKPFUN(glVertexAttribL2dEXT);
  IMVKPFUN(glVertexAttribL3dEXT);
  IMVKPFUN(glVertexAttribL4dEXT);
  IMVKPFUN(glVertexAttribL1dvEXT);
  IMVKPFUN(glVertexAttribL2dvEXT);
  IMVKPFUN(glVertexAttribL3dvEXT);
  IMVKPFUN(glVertexAttribL4dvEXT);
  IMVKPFUN(glVertexAttribLPointerEXT);
  IMVKPFUN(glGetVertexAttribLdvEXT);
  NowState.IS_LOAD_GL_EXT_vertex_attrib_64bit = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_vertex_shader() {
  bool isAllLoaded = true;
  IMVKPFUN(glBeginVertexShaderEXT);
  IMVKPFUN(glEndVertexShaderEXT);
  IMVKPFUN(glBindVertexShaderEXT);
  IMVKPFUN(glGenVertexShadersEXT);
  IMVKPFUN(glDeleteVertexShaderEXT);
  IMVKPFUN(glShaderOp1EXT);
  IMVKPFUN(glShaderOp2EXT);
  IMVKPFUN(glShaderOp3EXT);
  IMVKPFUN(glSwizzleEXT);
  IMVKPFUN(glWriteMaskEXT);
  IMVKPFUN(glInsertComponentEXT);
  IMVKPFUN(glExtractComponentEXT);
  IMVKPFUN(glGenSymbolsEXT);
  IMVKPFUN(glSetInvariantEXT);
  IMVKPFUN(glSetLocalConstantEXT);
  IMVKPFUN(glVariantbvEXT);
  IMVKPFUN(glVariantsvEXT);
  IMVKPFUN(glVariantivEXT);
  IMVKPFUN(glVariantfvEXT);
  IMVKPFUN(glVariantdvEXT);
  IMVKPFUN(glVariantubvEXT);
  IMVKPFUN(glVariantusvEXT);
  IMVKPFUN(glVariantuivEXT);
  IMVKPFUN(glVariantPointerEXT);
  IMVKPFUN(glEnableVariantClientStateEXT);
  IMVKPFUN(glDisableVariantClientStateEXT);
  IMVKPFUN(glBindLightParameterEXT);
  IMVKPFUN(glBindMaterialParameterEXT);
  IMVKPFUN(glBindTexGenParameterEXT);
  IMVKPFUN(glBindTextureUnitParameterEXT);
  IMVKPFUN(glBindParameterEXT);
  IMVKPFUN(glIsVariantEnabledEXT);
  IMVKPFUN(glGetVariantBooleanvEXT);
  IMVKPFUN(glGetVariantIntegervEXT);
  IMVKPFUN(glGetVariantFloatvEXT);
  IMVKPFUN(glGetVariantPointervEXT);
  IMVKPFUN(glGetInvariantBooleanvEXT);
  IMVKPFUN(glGetInvariantIntegervEXT);
  IMVKPFUN(glGetInvariantFloatvEXT);
  IMVKPFUN(glGetLocalConstantBooleanvEXT);
  IMVKPFUN(glGetLocalConstantIntegervEXT);
  IMVKPFUN(glGetLocalConstantFloatvEXT);
  NowState.IS_LOAD_GL_EXT_vertex_shader = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_vertex_weighting() {
  bool isAllLoaded = true;
  IMVKPFUN(glVertexWeightfEXT);
  IMVKPFUN(glVertexWeightfvEXT);
  IMVKPFUN(glVertexWeightPointerEXT);
  NowState.IS_LOAD_GL_EXT_vertex_weighting = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_win32_keyed_mutex() {
  bool isAllLoaded = true;
  IMVKPFUN(glAcquireKeyedMutexWin32EXT);
  IMVKPFUN(glReleaseKeyedMutexWin32EXT);
  NowState.IS_LOAD_GL_EXT_win32_keyed_mutex = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_window_rectangles() {
  bool isAllLoaded = true;
  IMVKPFUN(glWindowRectanglesEXT);
  NowState.IS_LOAD_GL_EXT_window_rectangles = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_EXT_x11_sync_object() {
  bool isAllLoaded = true;
  IMVKPFUN(glImportSyncEXT);
  NowState.IS_LOAD_GL_EXT_x11_sync_object = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_GREMEDY_frame_terminator() {
  bool isAllLoaded = true;
  IMVKPFUN(glFrameTerminatorGREMEDY);
  NowState.IS_LOAD_GL_GREMEDY_frame_terminator = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_GREMEDY_string_marker() {
  bool isAllLoaded = true;
  IMVKPFUN(glStringMarkerGREMEDY);
  NowState.IS_LOAD_GL_GREMEDY_string_marker = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_HP_image_transform() {
  bool isAllLoaded = true;
  IMVKPFUN(glImageTransformParameteriHP);
  IMVKPFUN(glImageTransformParameterfHP);
  IMVKPFUN(glImageTransformParameterivHP);
  IMVKPFUN(glImageTransformParameterfvHP);
  IMVKPFUN(glGetImageTransformParameterivHP);
  IMVKPFUN(glGetImageTransformParameterfvHP);
  NowState.IS_LOAD_GL_HP_image_transform = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_IBM_multimode_draw_arrays() {
  bool isAllLoaded = true;
  IMVKPFUN(glMultiModeDrawArraysIBM);
  IMVKPFUN(glMultiModeDrawElementsIBM);
  NowState.IS_LOAD_GL_IBM_multimode_draw_arrays = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_IBM_static_data() {
  bool isAllLoaded = true;
  IMVKPFUN(glFlushStaticDataIBM);
  NowState.IS_LOAD_GL_IBM_static_data = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_IBM_vertex_array_lists() {
  bool isAllLoaded = true;
  IMVKPFUN(glColorPointerListIBM);
  IMVKPFUN(glSecondaryColorPointerListIBM);
  IMVKPFUN(glEdgeFlagPointerListIBM);
  IMVKPFUN(glFogCoordPointerListIBM);
  IMVKPFUN(glIndexPointerListIBM);
  IMVKPFUN(glNormalPointerListIBM);
  IMVKPFUN(glTexCoordPointerListIBM);
  IMVKPFUN(glVertexPointerListIBM);
  NowState.IS_LOAD_GL_IBM_vertex_array_lists = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_INGR_blend_func_separate() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlendFuncSeparateINGR);
  NowState.IS_LOAD_GL_INGR_blend_func_separate = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_INTEL_framebuffer_CMAA() {
  bool isAllLoaded = true;
  IMVKPFUN(glApplyFramebufferAttachmentCMAAINTEL);
  NowState.IS_LOAD_GL_INTEL_framebuffer_CMAA = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_INTEL_map_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glSyncTextureINTEL);
  IMVKPFUN(glUnmapTexture2DINTEL);
  IMVKPFUN(glMapTexture2DINTEL);
  NowState.IS_LOAD_GL_INTEL_map_texture = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_INTEL_parallel_arrays() {
  bool isAllLoaded = true;
  IMVKPFUN(glVertexPointervINTEL);
  IMVKPFUN(glNormalPointervINTEL);
  IMVKPFUN(glColorPointervINTEL);
  IMVKPFUN(glTexCoordPointervINTEL);
  NowState.IS_LOAD_GL_INTEL_parallel_arrays = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_INTEL_performance_query() {
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
bool OpenGLLoaderLoader::TRY_LOAD_GL_MESA_framebuffer_flip_y() {
  bool isAllLoaded = true;
  IMVKPFUN(glFramebufferParameteriMESA);
  IMVKPFUN(glGetFramebufferParameterivMESA);
  NowState.IS_LOAD_GL_MESA_framebuffer_flip_y = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_MESA_resize_buffers() {
  bool isAllLoaded = true;
  IMVKPFUN(glResizeBuffersMESA);
  NowState.IS_LOAD_GL_MESA_resize_buffers = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_MESA_window_pos() {
  bool isAllLoaded = true;
  IMVKPFUN(glWindowPos2dMESA);
  IMVKPFUN(glWindowPos2dvMESA);
  IMVKPFUN(glWindowPos2fMESA);
  IMVKPFUN(glWindowPos2fvMESA);
  IMVKPFUN(glWindowPos2iMESA);
  IMVKPFUN(glWindowPos2ivMESA);
  IMVKPFUN(glWindowPos2sMESA);
  IMVKPFUN(glWindowPos2svMESA);
  IMVKPFUN(glWindowPos3dMESA);
  IMVKPFUN(glWindowPos3dvMESA);
  IMVKPFUN(glWindowPos3fMESA);
  IMVKPFUN(glWindowPos3fvMESA);
  IMVKPFUN(glWindowPos3iMESA);
  IMVKPFUN(glWindowPos3ivMESA);
  IMVKPFUN(glWindowPos3sMESA);
  IMVKPFUN(glWindowPos3svMESA);
  IMVKPFUN(glWindowPos4dMESA);
  IMVKPFUN(glWindowPos4dvMESA);
  IMVKPFUN(glWindowPos4fMESA);
  IMVKPFUN(glWindowPos4fvMESA);
  IMVKPFUN(glWindowPos4iMESA);
  IMVKPFUN(glWindowPos4ivMESA);
  IMVKPFUN(glWindowPos4sMESA);
  IMVKPFUN(glWindowPos4svMESA);
  NowState.IS_LOAD_GL_MESA_window_pos = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NVX_conditional_render() {
  bool isAllLoaded = true;
  IMVKPFUN(glBeginConditionalRenderNVX);
  IMVKPFUN(glEndConditionalRenderNVX);
  NowState.IS_LOAD_GL_NVX_conditional_render = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NVX_gpu_multicast2() {
  bool isAllLoaded = true;
  IMVKPFUN(glUploadGpuMaskNVX);
  IMVKPFUN(glMulticastViewportArrayvNVX);
  IMVKPFUN(glMulticastViewportPositionWScaleNVX);
  IMVKPFUN(glMulticastScissorArrayvNVX);
  IMVKPFUN(glAsyncCopyBufferSubDataNVX);
  IMVKPFUN(glAsyncCopyImageSubDataNVX);
  NowState.IS_LOAD_GL_NVX_gpu_multicast2 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NVX_linked_gpu_multicast() {
  bool isAllLoaded = true;
  IMVKPFUN(glLGPUNamedBufferSubDataNVX);
  IMVKPFUN(glLGPUCopyImageSubDataNVX);
  IMVKPFUN(glLGPUInterlockNVX);
  NowState.IS_LOAD_GL_NVX_linked_gpu_multicast = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NVX_progress_fence() {
  bool isAllLoaded = true;
  IMVKPFUN(glCreateProgressFenceNVX);
  IMVKPFUN(glSignalSemaphoreui64NVX);
  IMVKPFUN(glWaitSemaphoreui64NVX);
  IMVKPFUN(glClientWaitSemaphoreui64NVX);
  NowState.IS_LOAD_GL_NVX_progress_fence = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_alpha_to_coverage_dither_control() {
  bool isAllLoaded = true;
  IMVKPFUN(glAlphaToCoverageDitherControlNV);
  NowState.IS_LOAD_GL_NV_alpha_to_coverage_dither_control = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_bindless_multi_draw_indirect() {
  bool isAllLoaded = true;
  IMVKPFUN(glMultiDrawArraysIndirectBindlessNV);
  IMVKPFUN(glMultiDrawElementsIndirectBindlessNV);
  NowState.IS_LOAD_GL_NV_bindless_multi_draw_indirect = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_bindless_multi_draw_indirect_count() {
  bool isAllLoaded = true;
  IMVKPFUN(glMultiDrawArraysIndirectBindlessCountNV);
  IMVKPFUN(glMultiDrawElementsIndirectBindlessCountNV);
  NowState.IS_LOAD_GL_NV_bindless_multi_draw_indirect_count = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_bindless_texture() {
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
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_blend_equation_advanced() {
  bool isAllLoaded = true;
  IMVKPFUN(glBlendParameteriNV);
  IMVKPFUN(glBlendBarrierNV);
  NowState.IS_LOAD_GL_NV_blend_equation_advanced = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_clip_space_w_scaling() {
  bool isAllLoaded = true;
  IMVKPFUN(glViewportPositionWScaleNV);
  NowState.IS_LOAD_GL_NV_clip_space_w_scaling = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_command_list() {
  bool isAllLoaded = true;
  IMVKPFUN(glCreateStatesNV);
  IMVKPFUN(glDeleteStatesNV);
  IMVKPFUN(glIsStateNV);
  IMVKPFUN(glStateCaptureNV);
  IMVKPFUN(glGetCommandHeaderNV);
  IMVKPFUN(glGetStageIndexNV);
  IMVKPFUN(glDrawCommandsNV);
  IMVKPFUN(glDrawCommandsAddressNV);
  IMVKPFUN(glDrawCommandsStatesNV);
  IMVKPFUN(glDrawCommandsStatesAddressNV);
  IMVKPFUN(glCreateCommandListsNV);
  IMVKPFUN(glDeleteCommandListsNV);
  IMVKPFUN(glIsCommandListNV);
  IMVKPFUN(glListDrawCommandsStatesClientNV);
  IMVKPFUN(glCommandListSegmentsNV);
  IMVKPFUN(glCompileCommandListNV);
  IMVKPFUN(glCallCommandListNV);
  NowState.IS_LOAD_GL_NV_command_list = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_conditional_render() {
  bool isAllLoaded = true;
  IMVKPFUN(glBeginConditionalRenderNV);
  IMVKPFUN(glEndConditionalRenderNV);
  NowState.IS_LOAD_GL_NV_conditional_render = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_conservative_raster() {
  bool isAllLoaded = true;
  IMVKPFUN(glSubpixelPrecisionBiasNV);
  NowState.IS_LOAD_GL_NV_conservative_raster = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_conservative_raster_dilate() {
  bool isAllLoaded = true;
  IMVKPFUN(glConservativeRasterParameterfNV);
  NowState.IS_LOAD_GL_NV_conservative_raster_dilate = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::
    TRY_LOAD_GL_NV_conservative_raster_pre_snap_triangles() {
  bool isAllLoaded = true;
  IMVKPFUN(glConservativeRasterParameteriNV);
  NowState.IS_LOAD_GL_NV_conservative_raster_pre_snap_triangles = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_copy_image() {
  bool isAllLoaded = true;
  IMVKPFUN(glCopyImageSubDataNV);
  NowState.IS_LOAD_GL_NV_copy_image = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_depth_buffer_float() {
  bool isAllLoaded = true;
  IMVKPFUN(glDepthRangedNV);
  IMVKPFUN(glClearDepthdNV);
  IMVKPFUN(glDepthBoundsdNV);
  NowState.IS_LOAD_GL_NV_depth_buffer_float = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_draw_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawTextureNV);
  NowState.IS_LOAD_GL_NV_draw_texture = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_draw_vulkan_image() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawVkImageNV);
  IMVKPFUN(glGetVkProcAddrNV);
  IMVKPFUN(glWaitVkSemaphoreNV);
  IMVKPFUN(glSignalVkSemaphoreNV);
  IMVKPFUN(glSignalVkFenceNV);
  NowState.IS_LOAD_GL_NV_draw_vulkan_image = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_evaluators() {
  bool isAllLoaded = true;
  IMVKPFUN(glMapControlPointsNV);
  IMVKPFUN(glMapParameterivNV);
  IMVKPFUN(glMapParameterfvNV);
  IMVKPFUN(glGetMapControlPointsNV);
  IMVKPFUN(glGetMapParameterivNV);
  IMVKPFUN(glGetMapParameterfvNV);
  IMVKPFUN(glGetMapAttribParameterivNV);
  IMVKPFUN(glGetMapAttribParameterfvNV);
  IMVKPFUN(glEvalMapsNV);
  NowState.IS_LOAD_GL_NV_evaluators = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_explicit_multisample() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetMultisamplefvNV);
  IMVKPFUN(glSampleMaskIndexedNV);
  IMVKPFUN(glTexRenderbufferNV);
  NowState.IS_LOAD_GL_NV_explicit_multisample = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_fence() {
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
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_fragment_coverage_to_color() {
  bool isAllLoaded = true;
  IMVKPFUN(glFragmentCoverageColorNV);
  NowState.IS_LOAD_GL_NV_fragment_coverage_to_color = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_fragment_program() {
  bool isAllLoaded = true;
  IMVKPFUN(glProgramNamedParameter4fNV);
  IMVKPFUN(glProgramNamedParameter4fvNV);
  IMVKPFUN(glProgramNamedParameter4dNV);
  IMVKPFUN(glProgramNamedParameter4dvNV);
  IMVKPFUN(glGetProgramNamedParameterfvNV);
  IMVKPFUN(glGetProgramNamedParameterdvNV);
  NowState.IS_LOAD_GL_NV_fragment_program = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_framebuffer_mixed_samples() {
  bool isAllLoaded = true;
  IMVKPFUN(glCoverageModulationTableNV);
  IMVKPFUN(glGetCoverageModulationTableNV);
  IMVKPFUN(glCoverageModulationNV);
  NowState.IS_LOAD_GL_NV_framebuffer_mixed_samples = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_framebuffer_multisample_coverage() {
  bool isAllLoaded = true;
  IMVKPFUN(glRenderbufferStorageMultisampleCoverageNV);
  NowState.IS_LOAD_GL_NV_framebuffer_multisample_coverage = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_geometry_program4() {
  bool isAllLoaded = true;
  IMVKPFUN(glProgramVertexLimitNV);
  IMVKPFUN(glFramebufferTextureEXT);
  IMVKPFUN(glFramebufferTextureFaceEXT);
  NowState.IS_LOAD_GL_NV_geometry_program4 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_gpu_multicast() {
  bool isAllLoaded = true;
  IMVKPFUN(glRenderGpuMaskNV);
  IMVKPFUN(glMulticastBufferSubDataNV);
  IMVKPFUN(glMulticastCopyBufferSubDataNV);
  IMVKPFUN(glMulticastCopyImageSubDataNV);
  IMVKPFUN(glMulticastBlitFramebufferNV);
  IMVKPFUN(glMulticastFramebufferSampleLocationsfvNV);
  IMVKPFUN(glMulticastBarrierNV);
  IMVKPFUN(glMulticastWaitSyncNV);
  IMVKPFUN(glMulticastGetQueryObjectivNV);
  IMVKPFUN(glMulticastGetQueryObjectuivNV);
  IMVKPFUN(glMulticastGetQueryObjecti64vNV);
  IMVKPFUN(glMulticastGetQueryObjectui64vNV);
  NowState.IS_LOAD_GL_NV_gpu_multicast = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_gpu_program4() {
  bool isAllLoaded = true;
  IMVKPFUN(glProgramLocalParameterI4iNV);
  IMVKPFUN(glProgramLocalParameterI4ivNV);
  IMVKPFUN(glProgramLocalParametersI4ivNV);
  IMVKPFUN(glProgramLocalParameterI4uiNV);
  IMVKPFUN(glProgramLocalParameterI4uivNV);
  IMVKPFUN(glProgramLocalParametersI4uivNV);
  IMVKPFUN(glProgramEnvParameterI4iNV);
  IMVKPFUN(glProgramEnvParameterI4ivNV);
  IMVKPFUN(glProgramEnvParametersI4ivNV);
  IMVKPFUN(glProgramEnvParameterI4uiNV);
  IMVKPFUN(glProgramEnvParameterI4uivNV);
  IMVKPFUN(glProgramEnvParametersI4uivNV);
  IMVKPFUN(glGetProgramLocalParameterIivNV);
  IMVKPFUN(glGetProgramLocalParameterIuivNV);
  IMVKPFUN(glGetProgramEnvParameterIivNV);
  IMVKPFUN(glGetProgramEnvParameterIuivNV);
  NowState.IS_LOAD_GL_NV_gpu_program4 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_gpu_program5() {
  bool isAllLoaded = true;
  IMVKPFUN(glProgramSubroutineParametersuivNV);
  IMVKPFUN(glGetProgramSubroutineParameteruivNV);
  NowState.IS_LOAD_GL_NV_gpu_program5 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_half_float() {
  bool isAllLoaded = true;
  IMVKPFUN(glVertex2hNV);
  IMVKPFUN(glVertex2hvNV);
  IMVKPFUN(glVertex3hNV);
  IMVKPFUN(glVertex3hvNV);
  IMVKPFUN(glVertex4hNV);
  IMVKPFUN(glVertex4hvNV);
  IMVKPFUN(glNormal3hNV);
  IMVKPFUN(glNormal3hvNV);
  IMVKPFUN(glColor3hNV);
  IMVKPFUN(glColor3hvNV);
  IMVKPFUN(glColor4hNV);
  IMVKPFUN(glColor4hvNV);
  IMVKPFUN(glTexCoord1hNV);
  IMVKPFUN(glTexCoord1hvNV);
  IMVKPFUN(glTexCoord2hNV);
  IMVKPFUN(glTexCoord2hvNV);
  IMVKPFUN(glTexCoord3hNV);
  IMVKPFUN(glTexCoord3hvNV);
  IMVKPFUN(glTexCoord4hNV);
  IMVKPFUN(glTexCoord4hvNV);
  IMVKPFUN(glMultiTexCoord1hNV);
  IMVKPFUN(glMultiTexCoord1hvNV);
  IMVKPFUN(glMultiTexCoord2hNV);
  IMVKPFUN(glMultiTexCoord2hvNV);
  IMVKPFUN(glMultiTexCoord3hNV);
  IMVKPFUN(glMultiTexCoord3hvNV);
  IMVKPFUN(glMultiTexCoord4hNV);
  IMVKPFUN(glMultiTexCoord4hvNV);
  IMVKPFUN(glVertexAttrib1hNV);
  IMVKPFUN(glVertexAttrib1hvNV);
  IMVKPFUN(glVertexAttrib2hNV);
  IMVKPFUN(glVertexAttrib2hvNV);
  IMVKPFUN(glVertexAttrib3hNV);
  IMVKPFUN(glVertexAttrib3hvNV);
  IMVKPFUN(glVertexAttrib4hNV);
  IMVKPFUN(glVertexAttrib4hvNV);
  IMVKPFUN(glVertexAttribs1hvNV);
  IMVKPFUN(glVertexAttribs2hvNV);
  IMVKPFUN(glVertexAttribs3hvNV);
  IMVKPFUN(glVertexAttribs4hvNV);
  IMVKPFUN(glFogCoordhNV);
  IMVKPFUN(glFogCoordhvNV);
  IMVKPFUN(glSecondaryColor3hNV);
  IMVKPFUN(glSecondaryColor3hvNV);
  IMVKPFUN(glVertexWeighthNV);
  IMVKPFUN(glVertexWeighthvNV);
  NowState.IS_LOAD_GL_NV_half_float = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_internalformat_sample_query() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetInternalformatSampleivNV);
  NowState.IS_LOAD_GL_NV_internalformat_sample_query = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_memory_attachment() {
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
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_memory_object_sparse() {
  bool isAllLoaded = true;
  IMVKPFUN(glBufferPageCommitmentMemNV);
  IMVKPFUN(glTexPageCommitmentMemNV);
  IMVKPFUN(glNamedBufferPageCommitmentMemNV);
  IMVKPFUN(glTexturePageCommitmentMemNV);
  NowState.IS_LOAD_GL_NV_memory_object_sparse = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_mesh_shader() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawMeshTasksNV);
  IMVKPFUN(glDrawMeshTasksIndirectNV);
  IMVKPFUN(glMultiDrawMeshTasksIndirectNV);
  IMVKPFUN(glMultiDrawMeshTasksIndirectCountNV);
  NowState.IS_LOAD_GL_NV_mesh_shader = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_occlusion_query() {
  bool isAllLoaded = true;
  IMVKPFUN(glGenOcclusionQueriesNV);
  IMVKPFUN(glDeleteOcclusionQueriesNV);
  IMVKPFUN(glIsOcclusionQueryNV);
  IMVKPFUN(glBeginOcclusionQueryNV);
  IMVKPFUN(glEndOcclusionQueryNV);
  IMVKPFUN(glGetOcclusionQueryivNV);
  IMVKPFUN(glGetOcclusionQueryuivNV);
  NowState.IS_LOAD_GL_NV_occlusion_query = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_parameter_buffer_object() {
  bool isAllLoaded = true;
  IMVKPFUN(glProgramBufferParametersfvNV);
  IMVKPFUN(glProgramBufferParametersIivNV);
  IMVKPFUN(glProgramBufferParametersIuivNV);
  NowState.IS_LOAD_GL_NV_parameter_buffer_object = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_path_rendering() {
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
  IMVKPFUN(glPathColorGenNV);
  IMVKPFUN(glPathTexGenNV);
  IMVKPFUN(glPathFogGenNV);
  IMVKPFUN(glGetPathColorGenivNV);
  IMVKPFUN(glGetPathColorGenfvNV);
  IMVKPFUN(glGetPathTexGenivNV);
  IMVKPFUN(glGetPathTexGenfvNV);
  NowState.IS_LOAD_GL_NV_path_rendering = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_pixel_data_range() {
  bool isAllLoaded = true;
  IMVKPFUN(glPixelDataRangeNV);
  IMVKPFUN(glFlushPixelDataRangeNV);
  NowState.IS_LOAD_GL_NV_pixel_data_range = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_point_sprite() {
  bool isAllLoaded = true;
  IMVKPFUN(glPointParameteriNV);
  IMVKPFUN(glPointParameterivNV);
  NowState.IS_LOAD_GL_NV_point_sprite = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_present_video() {
  bool isAllLoaded = true;
  IMVKPFUN(glPresentFrameKeyedNV);
  IMVKPFUN(glPresentFrameDualFillNV);
  IMVKPFUN(glGetVideoivNV);
  IMVKPFUN(glGetVideouivNV);
  IMVKPFUN(glGetVideoi64vNV);
  IMVKPFUN(glGetVideoui64vNV);
  NowState.IS_LOAD_GL_NV_present_video = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_primitive_restart() {
  bool isAllLoaded = true;
  IMVKPFUN(glPrimitiveRestartNV);
  IMVKPFUN(glPrimitiveRestartIndexNV);
  NowState.IS_LOAD_GL_NV_primitive_restart = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_query_resource() {
  bool isAllLoaded = true;
  IMVKPFUN(glQueryResourceNV);
  NowState.IS_LOAD_GL_NV_query_resource = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_query_resource_tag() {
  bool isAllLoaded = true;
  IMVKPFUN(glGenQueryResourceTagNV);
  IMVKPFUN(glDeleteQueryResourceTagNV);
  IMVKPFUN(glQueryResourceTagNV);
  NowState.IS_LOAD_GL_NV_query_resource_tag = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_register_combiners() {
  bool isAllLoaded = true;
  IMVKPFUN(glCombinerParameterfvNV);
  IMVKPFUN(glCombinerParameterfNV);
  IMVKPFUN(glCombinerParameterivNV);
  IMVKPFUN(glCombinerParameteriNV);
  IMVKPFUN(glCombinerInputNV);
  IMVKPFUN(glCombinerOutputNV);
  IMVKPFUN(glFinalCombinerInputNV);
  IMVKPFUN(glGetCombinerInputParameterfvNV);
  IMVKPFUN(glGetCombinerInputParameterivNV);
  IMVKPFUN(glGetCombinerOutputParameterfvNV);
  IMVKPFUN(glGetCombinerOutputParameterivNV);
  IMVKPFUN(glGetFinalCombinerInputParameterfvNV);
  IMVKPFUN(glGetFinalCombinerInputParameterivNV);
  NowState.IS_LOAD_GL_NV_register_combiners = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_register_combiners2() {
  bool isAllLoaded = true;
  IMVKPFUN(glCombinerStageParameterfvNV);
  IMVKPFUN(glGetCombinerStageParameterfvNV);
  NowState.IS_LOAD_GL_NV_register_combiners2 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_sample_locations() {
  bool isAllLoaded = true;
  IMVKPFUN(glFramebufferSampleLocationsfvNV);
  IMVKPFUN(glNamedFramebufferSampleLocationsfvNV);
  IMVKPFUN(glResolveDepthValuesNV);
  NowState.IS_LOAD_GL_NV_sample_locations = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_scissor_exclusive() {
  bool isAllLoaded = true;
  IMVKPFUN(glScissorExclusiveNV);
  IMVKPFUN(glScissorExclusiveArrayvNV);
  NowState.IS_LOAD_GL_NV_scissor_exclusive = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_shader_buffer_load() {
  bool isAllLoaded = true;
  IMVKPFUN(glMakeBufferResidentNV);
  IMVKPFUN(glMakeBufferNonResidentNV);
  IMVKPFUN(glIsBufferResidentNV);
  IMVKPFUN(glMakeNamedBufferResidentNV);
  IMVKPFUN(glMakeNamedBufferNonResidentNV);
  IMVKPFUN(glIsNamedBufferResidentNV);
  IMVKPFUN(glGetBufferParameterui64vNV);
  IMVKPFUN(glGetNamedBufferParameterui64vNV);
  IMVKPFUN(glGetIntegerui64vNV);
  IMVKPFUN(glUniformui64NV);
  IMVKPFUN(glUniformui64vNV);
  IMVKPFUN(glProgramUniformui64NV);
  IMVKPFUN(glProgramUniformui64vNV);
  NowState.IS_LOAD_GL_NV_shader_buffer_load = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_shading_rate_image() {
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
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_texture_barrier() {
  bool isAllLoaded = true;
  IMVKPFUN(glTextureBarrierNV);
  NowState.IS_LOAD_GL_NV_texture_barrier = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_texture_multisample() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexImage2DMultisampleCoverageNV);
  IMVKPFUN(glTexImage3DMultisampleCoverageNV);
  IMVKPFUN(glTextureImage2DMultisampleNV);
  IMVKPFUN(glTextureImage3DMultisampleNV);
  IMVKPFUN(glTextureImage2DMultisampleCoverageNV);
  IMVKPFUN(glTextureImage3DMultisampleCoverageNV);
  NowState.IS_LOAD_GL_NV_texture_multisample = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_timeline_semaphore() {
  bool isAllLoaded = true;
  IMVKPFUN(glCreateSemaphoresNV);
  IMVKPFUN(glSemaphoreParameterivNV);
  IMVKPFUN(glGetSemaphoreParameterivNV);
  NowState.IS_LOAD_GL_NV_timeline_semaphore = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_transform_feedback() {
  bool isAllLoaded = true;
  IMVKPFUN(glBeginTransformFeedbackNV);
  IMVKPFUN(glEndTransformFeedbackNV);
  IMVKPFUN(glTransformFeedbackAttribsNV);
  IMVKPFUN(glBindBufferRangeNV);
  IMVKPFUN(glBindBufferOffsetNV);
  IMVKPFUN(glBindBufferBaseNV);
  IMVKPFUN(glTransformFeedbackVaryingsNV);
  IMVKPFUN(glActiveVaryingNV);
  IMVKPFUN(glGetVaryingLocationNV);
  IMVKPFUN(glGetActiveVaryingNV);
  IMVKPFUN(glGetTransformFeedbackVaryingNV);
  IMVKPFUN(glTransformFeedbackStreamAttribsNV);
  NowState.IS_LOAD_GL_NV_transform_feedback = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_transform_feedback2() {
  bool isAllLoaded = true;
  IMVKPFUN(glBindTransformFeedbackNV);
  IMVKPFUN(glDeleteTransformFeedbacksNV);
  IMVKPFUN(glGenTransformFeedbacksNV);
  IMVKPFUN(glIsTransformFeedbackNV);
  IMVKPFUN(glPauseTransformFeedbackNV);
  IMVKPFUN(glResumeTransformFeedbackNV);
  IMVKPFUN(glDrawTransformFeedbackNV);
  NowState.IS_LOAD_GL_NV_transform_feedback2 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_vdpau_interop() {
  bool isAllLoaded = true;
  IMVKPFUN(glVDPAUInitNV);
  IMVKPFUN(glVDPAUFiniNV);
  IMVKPFUN(glVDPAURegisterVideoSurfaceNV);
  IMVKPFUN(glVDPAURegisterOutputSurfaceNV);
  IMVKPFUN(glVDPAUIsSurfaceNV);
  IMVKPFUN(glVDPAUUnregisterSurfaceNV);
  IMVKPFUN(glVDPAUGetSurfaceivNV);
  IMVKPFUN(glVDPAUSurfaceAccessNV);
  IMVKPFUN(glVDPAUMapSurfacesNV);
  IMVKPFUN(glVDPAUUnmapSurfacesNV);
  NowState.IS_LOAD_GL_NV_vdpau_interop = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_vdpau_interop2() {
  bool isAllLoaded = true;
  IMVKPFUN(glVDPAURegisterVideoSurfaceWithPictureStructureNV);
  NowState.IS_LOAD_GL_NV_vdpau_interop2 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_vertex_array_range() {
  bool isAllLoaded = true;
  IMVKPFUN(glFlushVertexArrayRangeNV);
  IMVKPFUN(glVertexArrayRangeNV);
  NowState.IS_LOAD_GL_NV_vertex_array_range = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_vertex_attrib_integer_64bit() {
  bool isAllLoaded = true;
  IMVKPFUN(glVertexAttribL1i64NV);
  IMVKPFUN(glVertexAttribL2i64NV);
  IMVKPFUN(glVertexAttribL3i64NV);
  IMVKPFUN(glVertexAttribL4i64NV);
  IMVKPFUN(glVertexAttribL1i64vNV);
  IMVKPFUN(glVertexAttribL2i64vNV);
  IMVKPFUN(glVertexAttribL3i64vNV);
  IMVKPFUN(glVertexAttribL4i64vNV);
  IMVKPFUN(glVertexAttribL1ui64NV);
  IMVKPFUN(glVertexAttribL2ui64NV);
  IMVKPFUN(glVertexAttribL3ui64NV);
  IMVKPFUN(glVertexAttribL4ui64NV);
  IMVKPFUN(glVertexAttribL1ui64vNV);
  IMVKPFUN(glVertexAttribL2ui64vNV);
  IMVKPFUN(glVertexAttribL3ui64vNV);
  IMVKPFUN(glVertexAttribL4ui64vNV);
  IMVKPFUN(glGetVertexAttribLi64vNV);
  IMVKPFUN(glGetVertexAttribLui64vNV);
  IMVKPFUN(glVertexAttribLFormatNV);
  NowState.IS_LOAD_GL_NV_vertex_attrib_integer_64bit = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_vertex_buffer_unified_memory() {
  bool isAllLoaded = true;
  IMVKPFUN(glBufferAddressRangeNV);
  IMVKPFUN(glVertexFormatNV);
  IMVKPFUN(glNormalFormatNV);
  IMVKPFUN(glColorFormatNV);
  IMVKPFUN(glIndexFormatNV);
  IMVKPFUN(glTexCoordFormatNV);
  IMVKPFUN(glEdgeFlagFormatNV);
  IMVKPFUN(glSecondaryColorFormatNV);
  IMVKPFUN(glFogCoordFormatNV);
  IMVKPFUN(glVertexAttribFormatNV);
  IMVKPFUN(glVertexAttribIFormatNV);
  IMVKPFUN(glGetIntegerui64i_vNV);
  NowState.IS_LOAD_GL_NV_vertex_buffer_unified_memory = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_vertex_program() {
  bool isAllLoaded = true;
  IMVKPFUN(glAreProgramsResidentNV);
  IMVKPFUN(glBindProgramNV);
  IMVKPFUN(glDeleteProgramsNV);
  IMVKPFUN(glExecuteProgramNV);
  IMVKPFUN(glGenProgramsNV);
  IMVKPFUN(glGetProgramParameterdvNV);
  IMVKPFUN(glGetProgramParameterfvNV);
  IMVKPFUN(glGetProgramivNV);
  IMVKPFUN(glGetProgramStringNV);
  IMVKPFUN(glGetTrackMatrixivNV);
  IMVKPFUN(glGetVertexAttribdvNV);
  IMVKPFUN(glGetVertexAttribfvNV);
  IMVKPFUN(glGetVertexAttribivNV);
  IMVKPFUN(glGetVertexAttribPointervNV);
  IMVKPFUN(glIsProgramNV);
  IMVKPFUN(glLoadProgramNV);
  IMVKPFUN(glProgramParameter4dNV);
  IMVKPFUN(glProgramParameter4dvNV);
  IMVKPFUN(glProgramParameter4fNV);
  IMVKPFUN(glProgramParameter4fvNV);
  IMVKPFUN(glProgramParameters4dvNV);
  IMVKPFUN(glProgramParameters4fvNV);
  IMVKPFUN(glRequestResidentProgramsNV);
  IMVKPFUN(glTrackMatrixNV);
  IMVKPFUN(glVertexAttribPointerNV);
  IMVKPFUN(glVertexAttrib1dNV);
  IMVKPFUN(glVertexAttrib1dvNV);
  IMVKPFUN(glVertexAttrib1fNV);
  IMVKPFUN(glVertexAttrib1fvNV);
  IMVKPFUN(glVertexAttrib1sNV);
  IMVKPFUN(glVertexAttrib1svNV);
  IMVKPFUN(glVertexAttrib2dNV);
  IMVKPFUN(glVertexAttrib2dvNV);
  IMVKPFUN(glVertexAttrib2fNV);
  IMVKPFUN(glVertexAttrib2fvNV);
  IMVKPFUN(glVertexAttrib2sNV);
  IMVKPFUN(glVertexAttrib2svNV);
  IMVKPFUN(glVertexAttrib3dNV);
  IMVKPFUN(glVertexAttrib3dvNV);
  IMVKPFUN(glVertexAttrib3fNV);
  IMVKPFUN(glVertexAttrib3fvNV);
  IMVKPFUN(glVertexAttrib3sNV);
  IMVKPFUN(glVertexAttrib3svNV);
  IMVKPFUN(glVertexAttrib4dNV);
  IMVKPFUN(glVertexAttrib4dvNV);
  IMVKPFUN(glVertexAttrib4fNV);
  IMVKPFUN(glVertexAttrib4fvNV);
  IMVKPFUN(glVertexAttrib4sNV);
  IMVKPFUN(glVertexAttrib4svNV);
  IMVKPFUN(glVertexAttrib4ubNV);
  IMVKPFUN(glVertexAttrib4ubvNV);
  IMVKPFUN(glVertexAttribs1dvNV);
  IMVKPFUN(glVertexAttribs1fvNV);
  IMVKPFUN(glVertexAttribs1svNV);
  IMVKPFUN(glVertexAttribs2dvNV);
  IMVKPFUN(glVertexAttribs2fvNV);
  IMVKPFUN(glVertexAttribs2svNV);
  IMVKPFUN(glVertexAttribs3dvNV);
  IMVKPFUN(glVertexAttribs3fvNV);
  IMVKPFUN(glVertexAttribs3svNV);
  IMVKPFUN(glVertexAttribs4dvNV);
  IMVKPFUN(glVertexAttribs4fvNV);
  IMVKPFUN(glVertexAttribs4svNV);
  IMVKPFUN(glVertexAttribs4ubvNV);
  NowState.IS_LOAD_GL_NV_vertex_program = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_video_capture() {
  bool isAllLoaded = true;
  IMVKPFUN(glBeginVideoCaptureNV);
  IMVKPFUN(glBindVideoCaptureStreamBufferNV);
  IMVKPFUN(glBindVideoCaptureStreamTextureNV);
  IMVKPFUN(glEndVideoCaptureNV);
  IMVKPFUN(glGetVideoCaptureivNV);
  IMVKPFUN(glGetVideoCaptureStreamivNV);
  IMVKPFUN(glGetVideoCaptureStreamfvNV);
  IMVKPFUN(glGetVideoCaptureStreamdvNV);
  IMVKPFUN(glVideoCaptureNV);
  IMVKPFUN(glVideoCaptureStreamParameterivNV);
  IMVKPFUN(glVideoCaptureStreamParameterfvNV);
  IMVKPFUN(glVideoCaptureStreamParameterdvNV);
  NowState.IS_LOAD_GL_NV_video_capture = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_viewport_swizzle() {
  bool isAllLoaded = true;
  IMVKPFUN(glViewportSwizzleNV);
  NowState.IS_LOAD_GL_NV_viewport_swizzle = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_OVR_multiview() {
  bool isAllLoaded = true;
  IMVKPFUN(glFramebufferTextureMultiviewOVR);
  NowState.IS_LOAD_GL_OVR_multiview = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_PGI_misc_hints() {
  bool isAllLoaded = true;
  IMVKPFUN(glHintPGI);
  NowState.IS_LOAD_GL_PGI_misc_hints = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIS_detail_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glDetailTexFuncSGIS);
  IMVKPFUN(glGetDetailTexFuncSGIS);
  NowState.IS_LOAD_GL_SGIS_detail_texture = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIS_fog_function() {
  bool isAllLoaded = true;
  IMVKPFUN(glFogFuncSGIS);
  IMVKPFUN(glGetFogFuncSGIS);
  NowState.IS_LOAD_GL_SGIS_fog_function = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIS_multisample() {
  bool isAllLoaded = true;
  IMVKPFUN(glSampleMaskSGIS);
  IMVKPFUN(glSamplePatternSGIS);
  NowState.IS_LOAD_GL_SGIS_multisample = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIS_pixel_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glPixelTexGenParameteriSGIS);
  IMVKPFUN(glPixelTexGenParameterivSGIS);
  IMVKPFUN(glPixelTexGenParameterfSGIS);
  IMVKPFUN(glPixelTexGenParameterfvSGIS);
  IMVKPFUN(glGetPixelTexGenParameterivSGIS);
  IMVKPFUN(glGetPixelTexGenParameterfvSGIS);
  NowState.IS_LOAD_GL_SGIS_pixel_texture = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIS_point_parameters() {
  bool isAllLoaded = true;
  IMVKPFUN(glPointParameterfSGIS);
  IMVKPFUN(glPointParameterfvSGIS);
  NowState.IS_LOAD_GL_SGIS_point_parameters = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIS_sharpen_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glSharpenTexFuncSGIS);
  IMVKPFUN(glGetSharpenTexFuncSGIS);
  NowState.IS_LOAD_GL_SGIS_sharpen_texture = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIS_texture4D() {
  bool isAllLoaded = true;
  IMVKPFUN(glTexImage4DSGIS);
  IMVKPFUN(glTexSubImage4DSGIS);
  NowState.IS_LOAD_GL_SGIS_texture4D = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIS_texture_color_mask() {
  bool isAllLoaded = true;
  IMVKPFUN(glTextureColorMaskSGIS);
  NowState.IS_LOAD_GL_SGIS_texture_color_mask = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIS_texture_filter4() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetTexFilterFuncSGIS);
  IMVKPFUN(glTexFilterFuncSGIS);
  NowState.IS_LOAD_GL_SGIS_texture_filter4 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_async() {
  bool isAllLoaded = true;
  IMVKPFUN(glAsyncMarkerSGIX);
  IMVKPFUN(glFinishAsyncSGIX);
  IMVKPFUN(glPollAsyncSGIX);
  IMVKPFUN(glGenAsyncMarkersSGIX);
  IMVKPFUN(glDeleteAsyncMarkersSGIX);
  IMVKPFUN(glIsAsyncMarkerSGIX);
  NowState.IS_LOAD_GL_SGIX_async = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_flush_raster() {
  bool isAllLoaded = true;
  IMVKPFUN(glFlushRasterSGIX);
  NowState.IS_LOAD_GL_SGIX_flush_raster = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_fragment_lighting() {
  bool isAllLoaded = true;
  IMVKPFUN(glFragmentColorMaterialSGIX);
  IMVKPFUN(glFragmentLightfSGIX);
  IMVKPFUN(glFragmentLightfvSGIX);
  IMVKPFUN(glFragmentLightiSGIX);
  IMVKPFUN(glFragmentLightivSGIX);
  IMVKPFUN(glFragmentLightModelfSGIX);
  IMVKPFUN(glFragmentLightModelfvSGIX);
  IMVKPFUN(glFragmentLightModeliSGIX);
  IMVKPFUN(glFragmentLightModelivSGIX);
  IMVKPFUN(glFragmentMaterialfSGIX);
  IMVKPFUN(glFragmentMaterialfvSGIX);
  IMVKPFUN(glFragmentMaterialiSGIX);
  IMVKPFUN(glFragmentMaterialivSGIX);
  IMVKPFUN(glGetFragmentLightfvSGIX);
  IMVKPFUN(glGetFragmentLightivSGIX);
  IMVKPFUN(glGetFragmentMaterialfvSGIX);
  IMVKPFUN(glGetFragmentMaterialivSGIX);
  IMVKPFUN(glLightEnviSGIX);
  NowState.IS_LOAD_GL_SGIX_fragment_lighting = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_framezoom() {
  bool isAllLoaded = true;
  IMVKPFUN(glFrameZoomSGIX);
  NowState.IS_LOAD_GL_SGIX_framezoom = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_igloo_interface() {
  bool isAllLoaded = true;
  IMVKPFUN(glIglooInterfaceSGIX);
  NowState.IS_LOAD_GL_SGIX_igloo_interface = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_instruments() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetInstrumentsSGIX);
  IMVKPFUN(glInstrumentsBufferSGIX);
  IMVKPFUN(glPollInstrumentsSGIX);
  IMVKPFUN(glReadInstrumentsSGIX);
  IMVKPFUN(glStartInstrumentsSGIX);
  IMVKPFUN(glStopInstrumentsSGIX);
  NowState.IS_LOAD_GL_SGIX_instruments = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_list_priority() {
  bool isAllLoaded = true;
  IMVKPFUN(glGetListParameterfvSGIX);
  IMVKPFUN(glGetListParameterivSGIX);
  IMVKPFUN(glListParameterfSGIX);
  IMVKPFUN(glListParameterfvSGIX);
  IMVKPFUN(glListParameteriSGIX);
  IMVKPFUN(glListParameterivSGIX);
  NowState.IS_LOAD_GL_SGIX_list_priority = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_pixel_texture() {
  bool isAllLoaded = true;
  IMVKPFUN(glPixelTexGenSGIX);
  NowState.IS_LOAD_GL_SGIX_pixel_texture = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_polynomial_ffd() {
  bool isAllLoaded = true;
  IMVKPFUN(glDeformationMap3dSGIX);
  IMVKPFUN(glDeformationMap3fSGIX);
  IMVKPFUN(glDeformSGIX);
  IMVKPFUN(glLoadIdentityDeformationMapSGIX);
  NowState.IS_LOAD_GL_SGIX_polynomial_ffd = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_reference_plane() {
  bool isAllLoaded = true;
  IMVKPFUN(glReferencePlaneSGIX);
  NowState.IS_LOAD_GL_SGIX_reference_plane = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_sprite() {
  bool isAllLoaded = true;
  IMVKPFUN(glSpriteParameterfSGIX);
  IMVKPFUN(glSpriteParameterfvSGIX);
  IMVKPFUN(glSpriteParameteriSGIX);
  IMVKPFUN(glSpriteParameterivSGIX);
  NowState.IS_LOAD_GL_SGIX_sprite = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_tag_sample_buffer() {
  bool isAllLoaded = true;
  IMVKPFUN(glTagSampleBufferSGIX);
  NowState.IS_LOAD_GL_SGIX_tag_sample_buffer = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SGI_color_table() {
  bool isAllLoaded = true;
  IMVKPFUN(glColorTableSGI);
  IMVKPFUN(glColorTableParameterfvSGI);
  IMVKPFUN(glColorTableParameterivSGI);
  IMVKPFUN(glCopyColorTableSGI);
  IMVKPFUN(glGetColorTableSGI);
  IMVKPFUN(glGetColorTableParameterfvSGI);
  IMVKPFUN(glGetColorTableParameterivSGI);
  NowState.IS_LOAD_GL_SGI_color_table = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SUNX_constant_data() {
  bool isAllLoaded = true;
  IMVKPFUN(glFinishTextureSUNX);
  NowState.IS_LOAD_GL_SUNX_constant_data = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SUN_global_alpha() {
  bool isAllLoaded = true;
  IMVKPFUN(glGlobalAlphaFactorbSUN);
  IMVKPFUN(glGlobalAlphaFactorsSUN);
  IMVKPFUN(glGlobalAlphaFactoriSUN);
  IMVKPFUN(glGlobalAlphaFactorfSUN);
  IMVKPFUN(glGlobalAlphaFactordSUN);
  IMVKPFUN(glGlobalAlphaFactorubSUN);
  IMVKPFUN(glGlobalAlphaFactorusSUN);
  IMVKPFUN(glGlobalAlphaFactoruiSUN);
  NowState.IS_LOAD_GL_SUN_global_alpha = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SUN_mesh_array() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawMeshArraysSUN);
  NowState.IS_LOAD_GL_SUN_mesh_array = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SUN_triangle_list() {
  bool isAllLoaded = true;
  IMVKPFUN(glReplacementCodeuiSUN);
  IMVKPFUN(glReplacementCodeusSUN);
  IMVKPFUN(glReplacementCodeubSUN);
  IMVKPFUN(glReplacementCodeuivSUN);
  IMVKPFUN(glReplacementCodeusvSUN);
  IMVKPFUN(glReplacementCodeubvSUN);
  IMVKPFUN(glReplacementCodePointerSUN);
  NowState.IS_LOAD_GL_SUN_triangle_list = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_SUN_vertex() {
  bool isAllLoaded = true;
  IMVKPFUN(glColor4ubVertex2fSUN);
  IMVKPFUN(glColor4ubVertex2fvSUN);
  IMVKPFUN(glColor4ubVertex3fSUN);
  IMVKPFUN(glColor4ubVertex3fvSUN);
  IMVKPFUN(glColor3fVertex3fSUN);
  IMVKPFUN(glColor3fVertex3fvSUN);
  IMVKPFUN(glNormal3fVertex3fSUN);
  IMVKPFUN(glNormal3fVertex3fvSUN);
  IMVKPFUN(glColor4fNormal3fVertex3fSUN);
  IMVKPFUN(glColor4fNormal3fVertex3fvSUN);
  IMVKPFUN(glTexCoord2fVertex3fSUN);
  IMVKPFUN(glTexCoord2fVertex3fvSUN);
  IMVKPFUN(glTexCoord4fVertex4fSUN);
  IMVKPFUN(glTexCoord4fVertex4fvSUN);
  IMVKPFUN(glTexCoord2fColor4ubVertex3fSUN);
  IMVKPFUN(glTexCoord2fColor4ubVertex3fvSUN);
  IMVKPFUN(glTexCoord2fColor3fVertex3fSUN);
  IMVKPFUN(glTexCoord2fColor3fVertex3fvSUN);
  IMVKPFUN(glTexCoord2fNormal3fVertex3fSUN);
  IMVKPFUN(glTexCoord2fNormal3fVertex3fvSUN);
  IMVKPFUN(glTexCoord2fColor4fNormal3fVertex3fSUN);
  IMVKPFUN(glTexCoord2fColor4fNormal3fVertex3fvSUN);
  IMVKPFUN(glTexCoord4fColor4fNormal3fVertex4fSUN);
  IMVKPFUN(glTexCoord4fColor4fNormal3fVertex4fvSUN);
  IMVKPFUN(glReplacementCodeuiVertex3fSUN);
  IMVKPFUN(glReplacementCodeuiVertex3fvSUN);
  IMVKPFUN(glReplacementCodeuiColor4ubVertex3fSUN);
  IMVKPFUN(glReplacementCodeuiColor4ubVertex3fvSUN);
  IMVKPFUN(glReplacementCodeuiColor3fVertex3fSUN);
  IMVKPFUN(glReplacementCodeuiColor3fVertex3fvSUN);
  IMVKPFUN(glReplacementCodeuiNormal3fVertex3fSUN);
  IMVKPFUN(glReplacementCodeuiNormal3fVertex3fvSUN);
  IMVKPFUN(glReplacementCodeuiColor4fNormal3fVertex3fSUN);
  IMVKPFUN(glReplacementCodeuiColor4fNormal3fVertex3fvSUN);
  IMVKPFUN(glReplacementCodeuiTexCoord2fVertex3fSUN);
  IMVKPFUN(glReplacementCodeuiTexCoord2fVertex3fvSUN);
  IMVKPFUN(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN);
  IMVKPFUN(glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN);
  IMVKPFUN(glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN);
  IMVKPFUN(glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN);
  NowState.IS_LOAD_GL_SUN_vertex = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_1_0() {
  bool isAllLoaded = true;
  IMVKPFUN(glCullFace);
  IMVKPFUN(glFrontFace);
  IMVKPFUN(glHint);
  IMVKPFUN(glLineWidth);
  IMVKPFUN(glPointSize);
  IMVKPFUN(glPolygonMode);
  IMVKPFUN(glScissor);
  IMVKPFUN(glTexParameterf);
  IMVKPFUN(glTexParameterfv);
  IMVKPFUN(glTexParameteri);
  IMVKPFUN(glTexParameteriv);
  IMVKPFUN(glTexImage1D);
  IMVKPFUN(glTexImage2D);
  IMVKPFUN(glDrawBuffer);
  IMVKPFUN(glClear);
  IMVKPFUN(glClearColor);
  IMVKPFUN(glClearStencil);
  IMVKPFUN(glClearDepth);
  IMVKPFUN(glStencilMask);
  IMVKPFUN(glColorMask);
  IMVKPFUN(glDepthMask);
  IMVKPFUN(glDisable);
  IMVKPFUN(glEnable);
  IMVKPFUN(glFinish);
  IMVKPFUN(glFlush);
  IMVKPFUN(glBlendFunc);
  IMVKPFUN(glLogicOp);
  IMVKPFUN(glStencilFunc);
  IMVKPFUN(glStencilOp);
  IMVKPFUN(glDepthFunc);
  IMVKPFUN(glPixelStoref);
  IMVKPFUN(glPixelStorei);
  IMVKPFUN(glReadBuffer);
  IMVKPFUN(glReadPixels);
  IMVKPFUN(glGetBooleanv);
  IMVKPFUN(glGetDoublev);
  IMVKPFUN(glGetError);
  IMVKPFUN(glGetFloatv);
  IMVKPFUN(glGetIntegerv);
  IMVKPFUN(glGetString);
  IMVKPFUN(glGetTexImage);
  IMVKPFUN(glGetTexParameterfv);
  IMVKPFUN(glGetTexParameteriv);
  IMVKPFUN(glGetTexLevelParameterfv);
  IMVKPFUN(glGetTexLevelParameteriv);
  IMVKPFUN(glIsEnabled);
  IMVKPFUN(glDepthRange);
  IMVKPFUN(glViewport);
  NowState.IS_LOAD_GL_VERSION_1_0 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_1_1() {
  bool isAllLoaded = true;
  IMVKPFUN(glDrawArrays);
  IMVKPFUN(glDrawElements);
  IMVKPFUN(glGetPointerv);
  IMVKPFUN(glPolygonOffset);
  IMVKPFUN(glCopyTexImage1D);
  IMVKPFUN(glCopyTexImage2D);
  IMVKPFUN(glCopyTexSubImage1D);
  IMVKPFUN(glCopyTexSubImage2D);
  IMVKPFUN(glTexSubImage1D);
  IMVKPFUN(glTexSubImage2D);
  IMVKPFUN(glBindTexture);
  IMVKPFUN(glDeleteTextures);
  IMVKPFUN(glGenTextures);
  IMVKPFUN(glIsTexture);
  NowState.IS_LOAD_GL_VERSION_1_1 = isAllLoaded;
  return isAllLoaded;
}
bool OpenGLLoaderLoader::TRY_LOAD_GL_NV_gpu_shader5() {
  bool isAllLoaded = true;
  NowState.IS_LOAD_GL_NV_gpu_shader5 = isAllLoaded;
  return isAllLoaded;
}
static OpenGLLoaderLoader::OpenGLLoaderLoader::MAP OpenGLLoaderLoadermapping = {
    {{"GL_VERSION_1_2", &OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_1_2, 0},
     {"GL_VERSION_1_3", &OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_1_3, 1},
     {"GL_VERSION_1_4", &OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_1_4, 2},
     {"GL_VERSION_1_5", &OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_1_5, 3},
     {"GL_VERSION_2_0", &OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_2_0, 4},
     {"GL_VERSION_2_1", &OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_2_1, 5},
     {"GL_VERSION_3_0", &OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_3_0, 6},
     {"GL_VERSION_3_1", &OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_3_1, 7},
     {"GL_VERSION_3_2", &OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_3_2, 8},
     {"GL_VERSION_3_3", &OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_3_3, 9},
     {"GL_VERSION_4_0", &OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_4_0, 10},
     {"GL_VERSION_4_1", &OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_4_1, 11},
     {"GL_VERSION_4_2", &OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_4_2, 12},
     {"GL_VERSION_4_3", &OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_4_3, 13},
     {"GL_VERSION_4_4", &OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_4_4, 14},
     {"GL_VERSION_4_5", &OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_4_5, 15},
     {"GL_VERSION_4_6", &OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_4_6, 16},
     {"GL_ARB_ES3_2_compatibility",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_ES3_2_compatibility, 17},
     {"GL_ARB_bindless_texture",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_bindless_texture, 18},
     {"GL_ARB_cl_event", &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_cl_event, 19},
     {"GL_ARB_color_buffer_float",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_color_buffer_float, 20},
     {"GL_ARB_compute_variable_group_size",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_compute_variable_group_size, 21},
     {"GL_ARB_debug_output", &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_debug_output,
      22},
     {"GL_ARB_draw_buffers", &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_draw_buffers,
      23},
     {"GL_ARB_draw_buffers_blend",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_draw_buffers_blend, 24},
     {"GL_ARB_draw_instanced",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_draw_instanced, 25},
     {"GL_ARB_fragment_program",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_fragment_program, 26},
     {"GL_ARB_geometry_shader4",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_geometry_shader4, 27},
     {"GL_ARB_gl_spirv", &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_gl_spirv, 28},
     {"GL_ARB_gpu_shader_int64",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_gpu_shader_int64, 29},
     {"GL_ARB_imaging", &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_imaging, 30},
     {"GL_ARB_indirect_parameters",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_indirect_parameters, 31},
     {"GL_ARB_instanced_arrays",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_instanced_arrays, 32},
     {"GL_ARB_matrix_palette",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_matrix_palette, 33},
     {"GL_ARB_multisample", &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_multisample,
      34},
     {"GL_ARB_multitexture", &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_multitexture,
      35},
     {"GL_ARB_occlusion_query",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_occlusion_query, 36},
     {"GL_ARB_parallel_shader_compile",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_parallel_shader_compile, 37},
     {"GL_ARB_point_parameters",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_point_parameters, 38},
     {"GL_ARB_robustness", &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_robustness, 39},
     {"GL_ARB_sample_locations",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_sample_locations, 40},
     {"GL_ARB_sample_shading",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_sample_shading, 41},
     {"GL_ARB_shader_objects",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_shader_objects, 42},
     {"GL_ARB_shading_language_include",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_shading_language_include, 43},
     {"GL_ARB_sparse_buffer",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_sparse_buffer, 44},
     {"GL_ARB_sparse_texture",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_sparse_texture, 45},
     {"GL_ARB_texture_buffer_object",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_texture_buffer_object, 46},
     {"GL_ARB_texture_compression",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_texture_compression, 47},
     {"GL_ARB_transpose_matrix",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_transpose_matrix, 48},
     {"GL_ARB_vertex_blend", &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_vertex_blend,
      49},
     {"GL_ARB_vertex_buffer_object",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_vertex_buffer_object, 50},
     {"GL_ARB_vertex_program",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_vertex_program, 51},
     {"GL_ARB_vertex_shader",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_vertex_shader, 52},
     {"GL_ARB_viewport_array",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_viewport_array, 53},
     {"GL_ARB_window_pos", &OpenGLLoaderLoader::TRY_LOAD_GL_ARB_window_pos, 54},
     {"GL_KHR_blend_equation_advanced",
      &OpenGLLoaderLoader::TRY_LOAD_GL_KHR_blend_equation_advanced, 55},
     {"GL_KHR_parallel_shader_compile",
      &OpenGLLoaderLoader::TRY_LOAD_GL_KHR_parallel_shader_compile, 56},
     {"GL_OES_byte_coordinates",
      &OpenGLLoaderLoader::TRY_LOAD_GL_OES_byte_coordinates, 57},
     {"GL_OES_fixed_point", &OpenGLLoaderLoader::TRY_LOAD_GL_OES_fixed_point,
      58},
     {"GL_OES_query_matrix", &OpenGLLoaderLoader::TRY_LOAD_GL_OES_query_matrix,
      59},
     {"GL_OES_single_precision",
      &OpenGLLoaderLoader::TRY_LOAD_GL_OES_single_precision, 60},
     {"GL_3DFX_tbuffer", &OpenGLLoaderLoader::TRY_LOAD_GL_3DFX_tbuffer, 61},
     {"GL_AMD_debug_output", &OpenGLLoaderLoader::TRY_LOAD_GL_AMD_debug_output,
      62},
     {"GL_AMD_draw_buffers_blend",
      &OpenGLLoaderLoader::TRY_LOAD_GL_AMD_draw_buffers_blend, 63},
     {"GL_AMD_framebuffer_multisample_advanced",
      &OpenGLLoaderLoader::TRY_LOAD_GL_AMD_framebuffer_multisample_advanced,
      64},
     {"GL_AMD_framebuffer_sample_positions",
      &OpenGLLoaderLoader::TRY_LOAD_GL_AMD_framebuffer_sample_positions, 65},
     {"GL_AMD_gpu_shader_int64",
      &OpenGLLoaderLoader::TRY_LOAD_GL_AMD_gpu_shader_int64, 66},
     {"GL_AMD_interleaved_elements",
      &OpenGLLoaderLoader::TRY_LOAD_GL_AMD_interleaved_elements, 67},
     {"GL_AMD_multi_draw_indirect",
      &OpenGLLoaderLoader::TRY_LOAD_GL_AMD_multi_draw_indirect, 68},
     {"GL_AMD_name_gen_delete",
      &OpenGLLoaderLoader::TRY_LOAD_GL_AMD_name_gen_delete, 69},
     {"GL_AMD_occlusion_query_event",
      &OpenGLLoaderLoader::TRY_LOAD_GL_AMD_occlusion_query_event, 70},
     {"GL_AMD_performance_monitor",
      &OpenGLLoaderLoader::TRY_LOAD_GL_AMD_performance_monitor, 71},
     {"GL_AMD_sample_positions",
      &OpenGLLoaderLoader::TRY_LOAD_GL_AMD_sample_positions, 72},
     {"GL_AMD_sparse_texture",
      &OpenGLLoaderLoader::TRY_LOAD_GL_AMD_sparse_texture, 73},
     {"GL_AMD_stencil_operation_extended",
      &OpenGLLoaderLoader::TRY_LOAD_GL_AMD_stencil_operation_extended, 74},
     {"GL_AMD_vertex_shader_tessellator",
      &OpenGLLoaderLoader::TRY_LOAD_GL_AMD_vertex_shader_tessellator, 75},
     {"GL_APPLE_element_array",
      &OpenGLLoaderLoader::TRY_LOAD_GL_APPLE_element_array, 76},
     {"GL_APPLE_fence", &OpenGLLoaderLoader::TRY_LOAD_GL_APPLE_fence, 77},
     {"GL_APPLE_flush_buffer_range",
      &OpenGLLoaderLoader::TRY_LOAD_GL_APPLE_flush_buffer_range, 78},
     {"GL_APPLE_object_purgeable",
      &OpenGLLoaderLoader::TRY_LOAD_GL_APPLE_object_purgeable, 79},
     {"GL_APPLE_texture_range",
      &OpenGLLoaderLoader::TRY_LOAD_GL_APPLE_texture_range, 80},
     {"GL_APPLE_vertex_array_object",
      &OpenGLLoaderLoader::TRY_LOAD_GL_APPLE_vertex_array_object, 81},
     {"GL_APPLE_vertex_array_range",
      &OpenGLLoaderLoader::TRY_LOAD_GL_APPLE_vertex_array_range, 82},
     {"GL_APPLE_vertex_program_evaluators",
      &OpenGLLoaderLoader::TRY_LOAD_GL_APPLE_vertex_program_evaluators, 83},
     {"GL_ATI_draw_buffers", &OpenGLLoaderLoader::TRY_LOAD_GL_ATI_draw_buffers,
      84},
     {"GL_ATI_element_array",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ATI_element_array, 85},
     {"GL_ATI_envmap_bumpmap",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ATI_envmap_bumpmap, 86},
     {"GL_ATI_fragment_shader",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ATI_fragment_shader, 87},
     {"GL_ATI_map_object_buffer",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ATI_map_object_buffer, 88},
     {"GL_ATI_pn_triangles", &OpenGLLoaderLoader::TRY_LOAD_GL_ATI_pn_triangles,
      89},
     {"GL_ATI_separate_stencil",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ATI_separate_stencil, 90},
     {"GL_ATI_vertex_array_object",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ATI_vertex_array_object, 91},
     {"GL_ATI_vertex_attrib_array_object",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ATI_vertex_attrib_array_object, 92},
     {"GL_ATI_vertex_streams",
      &OpenGLLoaderLoader::TRY_LOAD_GL_ATI_vertex_streams, 93},
     {"GL_EXT_EGL_image_storage",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_EGL_image_storage, 94},
     {"GL_EXT_bindable_uniform",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_bindable_uniform, 95},
     {"GL_EXT_blend_color", &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_blend_color,
      96},
     {"GL_EXT_blend_equation_separate",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_blend_equation_separate, 97},
     {"GL_EXT_blend_func_separate",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_blend_func_separate, 98},
     {"GL_EXT_blend_minmax", &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_blend_minmax,
      99},
     {"GL_EXT_color_subtable",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_color_subtable, 100},
     {"GL_EXT_compiled_vertex_array",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_compiled_vertex_array, 101},
     {"GL_EXT_convolution", &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_convolution,
      102},
     {"GL_EXT_coordinate_frame",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_coordinate_frame, 103},
     {"GL_EXT_copy_texture", &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_copy_texture,
      104},
     {"GL_EXT_cull_vertex", &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_cull_vertex,
      105},
     {"GL_EXT_debug_label", &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_debug_label,
      106},
     {"GL_EXT_debug_marker", &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_debug_marker,
      107},
     {"GL_EXT_depth_bounds_test",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_depth_bounds_test, 108},
     {"GL_EXT_direct_state_access",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_direct_state_access, 109},
     {"GL_EXT_draw_buffers2",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_draw_buffers2, 110},
     {"GL_EXT_draw_instanced",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_draw_instanced, 111},
     {"GL_EXT_draw_range_elements",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_draw_range_elements, 112},
     {"GL_EXT_external_buffer",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_external_buffer, 113},
     {"GL_EXT_fog_coord", &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_fog_coord, 114},
     {"GL_EXT_framebuffer_blit",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_framebuffer_blit, 115},
     {"GL_EXT_framebuffer_blit_layers",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_framebuffer_blit_layers, 116},
     {"GL_EXT_framebuffer_multisample",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_framebuffer_multisample, 117},
     {"GL_EXT_framebuffer_object",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_framebuffer_object, 118},
     {"GL_EXT_geometry_shader4",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_geometry_shader4, 119},
     {"GL_EXT_gpu_program_parameters",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_gpu_program_parameters, 120},
     {"GL_EXT_gpu_shader4", &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_gpu_shader4,
      121},
     {"GL_EXT_histogram", &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_histogram, 122},
     {"GL_EXT_index_func", &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_index_func,
      123},
     {"GL_EXT_index_material",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_index_material, 124},
     {"GL_EXT_light_texture",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_light_texture, 125},
     {"GL_EXT_memory_object",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_memory_object, 126},
     {"GL_EXT_memory_object_fd",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_memory_object_fd, 127},
     {"GL_EXT_memory_object_win32",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_memory_object_win32, 128},
     {"GL_EXT_multi_draw_arrays",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_multi_draw_arrays, 129},
     {"GL_EXT_multisample", &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_multisample,
      130},
     {"GL_EXT_paletted_texture",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_paletted_texture, 131},
     {"GL_EXT_pixel_transform",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_pixel_transform, 132},
     {"GL_EXT_point_parameters",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_point_parameters, 133},
     {"GL_EXT_polygon_offset",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_polygon_offset, 134},
     {"GL_EXT_polygon_offset_clamp",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_polygon_offset_clamp, 135},
     {"GL_EXT_provoking_vertex",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_provoking_vertex, 136},
     {"GL_EXT_raster_multisample",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_raster_multisample, 137},
     {"GL_EXT_secondary_color",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_secondary_color, 138},
     {"GL_EXT_semaphore", &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_semaphore, 139},
     {"GL_EXT_semaphore_fd", &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_semaphore_fd,
      140},
     {"GL_EXT_semaphore_win32",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_semaphore_win32, 141},
     {"GL_EXT_separate_shader_objects",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_separate_shader_objects, 142},
     {"GL_EXT_shader_framebuffer_fetch_non_coherent",
      &OpenGLLoaderLoader::
          TRY_LOAD_GL_EXT_shader_framebuffer_fetch_non_coherent,
      143},
     {"GL_EXT_shader_image_load_store",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_shader_image_load_store, 144},
     {"GL_EXT_stencil_clear_tag",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_stencil_clear_tag, 145},
     {"GL_EXT_stencil_two_side",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_stencil_two_side, 146},
     {"GL_EXT_subtexture", &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_subtexture,
      147},
     {"GL_EXT_texture3D", &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_texture3D, 148},
     {"GL_EXT_texture_array",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_texture_array, 149},
     {"GL_EXT_texture_buffer_object",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_texture_buffer_object, 150},
     {"GL_EXT_texture_integer",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_texture_integer, 151},
     {"GL_EXT_texture_object",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_texture_object, 152},
     {"GL_EXT_texture_perturb_normal",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_texture_perturb_normal, 153},
     {"GL_EXT_texture_storage",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_texture_storage, 154},
     {"GL_EXT_timer_query", &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_timer_query,
      155},
     {"GL_EXT_transform_feedback",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_transform_feedback, 156},
     {"GL_EXT_vertex_array", &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_vertex_array,
      157},
     {"GL_EXT_vertex_attrib_64bit",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_vertex_attrib_64bit, 158},
     {"GL_EXT_vertex_shader",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_vertex_shader, 159},
     {"GL_EXT_vertex_weighting",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_vertex_weighting, 160},
     {"GL_EXT_win32_keyed_mutex",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_win32_keyed_mutex, 161},
     {"GL_EXT_window_rectangles",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_window_rectangles, 162},
     {"GL_EXT_x11_sync_object",
      &OpenGLLoaderLoader::TRY_LOAD_GL_EXT_x11_sync_object, 163},
     {"GL_GREMEDY_frame_terminator",
      &OpenGLLoaderLoader::TRY_LOAD_GL_GREMEDY_frame_terminator, 164},
     {"GL_GREMEDY_string_marker",
      &OpenGLLoaderLoader::TRY_LOAD_GL_GREMEDY_string_marker, 165},
     {"GL_HP_image_transform",
      &OpenGLLoaderLoader::TRY_LOAD_GL_HP_image_transform, 166},
     {"GL_IBM_multimode_draw_arrays",
      &OpenGLLoaderLoader::TRY_LOAD_GL_IBM_multimode_draw_arrays, 167},
     {"GL_IBM_static_data", &OpenGLLoaderLoader::TRY_LOAD_GL_IBM_static_data,
      168},
     {"GL_IBM_vertex_array_lists",
      &OpenGLLoaderLoader::TRY_LOAD_GL_IBM_vertex_array_lists, 169},
     {"GL_INGR_blend_func_separate",
      &OpenGLLoaderLoader::TRY_LOAD_GL_INGR_blend_func_separate, 170},
     {"GL_INTEL_framebuffer_CMAA",
      &OpenGLLoaderLoader::TRY_LOAD_GL_INTEL_framebuffer_CMAA, 171},
     {"GL_INTEL_map_texture",
      &OpenGLLoaderLoader::TRY_LOAD_GL_INTEL_map_texture, 172},
     {"GL_INTEL_parallel_arrays",
      &OpenGLLoaderLoader::TRY_LOAD_GL_INTEL_parallel_arrays, 173},
     {"GL_INTEL_performance_query",
      &OpenGLLoaderLoader::TRY_LOAD_GL_INTEL_performance_query, 174},
     {"GL_MESA_framebuffer_flip_y",
      &OpenGLLoaderLoader::TRY_LOAD_GL_MESA_framebuffer_flip_y, 175},
     {"GL_MESA_resize_buffers",
      &OpenGLLoaderLoader::TRY_LOAD_GL_MESA_resize_buffers, 176},
     {"GL_MESA_window_pos", &OpenGLLoaderLoader::TRY_LOAD_GL_MESA_window_pos,
      177},
     {"GL_NVX_conditional_render",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NVX_conditional_render, 178},
     {"GL_NVX_gpu_multicast2",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NVX_gpu_multicast2, 179},
     {"GL_NVX_linked_gpu_multicast",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NVX_linked_gpu_multicast, 180},
     {"GL_NVX_progress_fence",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NVX_progress_fence, 181},
     {"GL_NV_alpha_to_coverage_dither_control",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_alpha_to_coverage_dither_control,
      182},
     {"GL_NV_bindless_multi_draw_indirect",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_bindless_multi_draw_indirect, 183},
     {"GL_NV_bindless_multi_draw_indirect_count",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_bindless_multi_draw_indirect_count,
      184},
     {"GL_NV_bindless_texture",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_bindless_texture, 185},
     {"GL_NV_blend_equation_advanced",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_blend_equation_advanced, 186},
     {"GL_NV_clip_space_w_scaling",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_clip_space_w_scaling, 187},
     {"GL_NV_command_list", &OpenGLLoaderLoader::TRY_LOAD_GL_NV_command_list,
      188},
     {"GL_NV_conditional_render",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_conditional_render, 189},
     {"GL_NV_conservative_raster",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_conservative_raster, 190},
     {"GL_NV_conservative_raster_dilate",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_conservative_raster_dilate, 191},
     {"GL_NV_conservative_raster_pre_snap_triangles",
      &OpenGLLoaderLoader::
          TRY_LOAD_GL_NV_conservative_raster_pre_snap_triangles,
      192},
     {"GL_NV_copy_image", &OpenGLLoaderLoader::TRY_LOAD_GL_NV_copy_image, 193},
     {"GL_NV_depth_buffer_float",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_depth_buffer_float, 194},
     {"GL_NV_draw_texture", &OpenGLLoaderLoader::TRY_LOAD_GL_NV_draw_texture,
      195},
     {"GL_NV_draw_vulkan_image",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_draw_vulkan_image, 196},
     {"GL_NV_evaluators", &OpenGLLoaderLoader::TRY_LOAD_GL_NV_evaluators, 197},
     {"GL_NV_explicit_multisample",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_explicit_multisample, 198},
     {"GL_NV_fence", &OpenGLLoaderLoader::TRY_LOAD_GL_NV_fence, 199},
     {"GL_NV_fragment_coverage_to_color",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_fragment_coverage_to_color, 200},
     {"GL_NV_fragment_program",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_fragment_program, 201},
     {"GL_NV_framebuffer_mixed_samples",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_framebuffer_mixed_samples, 202},
     {"GL_NV_framebuffer_multisample_coverage",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_framebuffer_multisample_coverage,
      203},
     {"GL_NV_geometry_program4",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_geometry_program4, 204},
     {"GL_NV_gpu_multicast", &OpenGLLoaderLoader::TRY_LOAD_GL_NV_gpu_multicast,
      205},
     {"GL_NV_gpu_program4", &OpenGLLoaderLoader::TRY_LOAD_GL_NV_gpu_program4,
      206},
     {"GL_NV_gpu_program5", &OpenGLLoaderLoader::TRY_LOAD_GL_NV_gpu_program5,
      207},
     {"GL_NV_half_float", &OpenGLLoaderLoader::TRY_LOAD_GL_NV_half_float, 208},
     {"GL_NV_internalformat_sample_query",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_internalformat_sample_query, 209},
     {"GL_NV_memory_attachment",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_memory_attachment, 210},
     {"GL_NV_memory_object_sparse",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_memory_object_sparse, 211},
     {"GL_NV_mesh_shader", &OpenGLLoaderLoader::TRY_LOAD_GL_NV_mesh_shader,
      212},
     {"GL_NV_occlusion_query",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_occlusion_query, 213},
     {"GL_NV_parameter_buffer_object",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_parameter_buffer_object, 214},
     {"GL_NV_path_rendering",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_path_rendering, 215},
     {"GL_NV_pixel_data_range",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_pixel_data_range, 216},
     {"GL_NV_point_sprite", &OpenGLLoaderLoader::TRY_LOAD_GL_NV_point_sprite,
      217},
     {"GL_NV_present_video", &OpenGLLoaderLoader::TRY_LOAD_GL_NV_present_video,
      218},
     {"GL_NV_primitive_restart",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_primitive_restart, 219},
     {"GL_NV_query_resource",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_query_resource, 220},
     {"GL_NV_query_resource_tag",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_query_resource_tag, 221},
     {"GL_NV_register_combiners",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_register_combiners, 222},
     {"GL_NV_register_combiners2",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_register_combiners2, 223},
     {"GL_NV_sample_locations",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_sample_locations, 224},
     {"GL_NV_scissor_exclusive",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_scissor_exclusive, 225},
     {"GL_NV_shader_buffer_load",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_shader_buffer_load, 226},
     {"GL_NV_shading_rate_image",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_shading_rate_image, 227},
     {"GL_NV_texture_barrier",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_texture_barrier, 228},
     {"GL_NV_texture_multisample",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_texture_multisample, 229},
     {"GL_NV_timeline_semaphore",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_timeline_semaphore, 230},
     {"GL_NV_transform_feedback",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_transform_feedback, 231},
     {"GL_NV_transform_feedback2",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_transform_feedback2, 232},
     {"GL_NV_vdpau_interop", &OpenGLLoaderLoader::TRY_LOAD_GL_NV_vdpau_interop,
      233},
     {"GL_NV_vdpau_interop2",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_vdpau_interop2, 234},
     {"GL_NV_vertex_array_range",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_vertex_array_range, 235},
     {"GL_NV_vertex_attrib_integer_64bit",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_vertex_attrib_integer_64bit, 236},
     {"GL_NV_vertex_buffer_unified_memory",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_vertex_buffer_unified_memory, 237},
     {"GL_NV_vertex_program",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_vertex_program, 238},
     {"GL_NV_video_capture", &OpenGLLoaderLoader::TRY_LOAD_GL_NV_video_capture,
      239},
     {"GL_NV_viewport_swizzle",
      &OpenGLLoaderLoader::TRY_LOAD_GL_NV_viewport_swizzle, 240},
     {"GL_OVR_multiview", &OpenGLLoaderLoader::TRY_LOAD_GL_OVR_multiview, 241},
     {"GL_PGI_misc_hints", &OpenGLLoaderLoader::TRY_LOAD_GL_PGI_misc_hints,
      242},
     {"GL_SGIS_detail_texture",
      &OpenGLLoaderLoader::TRY_LOAD_GL_SGIS_detail_texture, 243},
     {"GL_SGIS_fog_function",
      &OpenGLLoaderLoader::TRY_LOAD_GL_SGIS_fog_function, 244},
     {"GL_SGIS_multisample", &OpenGLLoaderLoader::TRY_LOAD_GL_SGIS_multisample,
      245},
     {"GL_SGIS_pixel_texture",
      &OpenGLLoaderLoader::TRY_LOAD_GL_SGIS_pixel_texture, 246},
     {"GL_SGIS_point_parameters",
      &OpenGLLoaderLoader::TRY_LOAD_GL_SGIS_point_parameters, 247},
     {"GL_SGIS_sharpen_texture",
      &OpenGLLoaderLoader::TRY_LOAD_GL_SGIS_sharpen_texture, 248},
     {"GL_SGIS_texture4D", &OpenGLLoaderLoader::TRY_LOAD_GL_SGIS_texture4D,
      249},
     {"GL_SGIS_texture_color_mask",
      &OpenGLLoaderLoader::TRY_LOAD_GL_SGIS_texture_color_mask, 250},
     {"GL_SGIS_texture_filter4",
      &OpenGLLoaderLoader::TRY_LOAD_GL_SGIS_texture_filter4, 251},
     {"GL_SGIX_async", &OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_async, 252},
     {"GL_SGIX_flush_raster",
      &OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_flush_raster, 253},
     {"GL_SGIX_fragment_lighting",
      &OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_fragment_lighting, 254},
     {"GL_SGIX_framezoom", &OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_framezoom,
      255},
     {"GL_SGIX_igloo_interface",
      &OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_igloo_interface, 256},
     {"GL_SGIX_instruments", &OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_instruments,
      257},
     {"GL_SGIX_list_priority",
      &OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_list_priority, 258},
     {"GL_SGIX_pixel_texture",
      &OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_pixel_texture, 259},
     {"GL_SGIX_polynomial_ffd",
      &OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_polynomial_ffd, 260},
     {"GL_SGIX_reference_plane",
      &OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_reference_plane, 261},
     {"GL_SGIX_sprite", &OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_sprite, 262},
     {"GL_SGIX_tag_sample_buffer",
      &OpenGLLoaderLoader::TRY_LOAD_GL_SGIX_tag_sample_buffer, 263},
     {"GL_SGI_color_table", &OpenGLLoaderLoader::TRY_LOAD_GL_SGI_color_table,
      264},
     {"GL_SUNX_constant_data",
      &OpenGLLoaderLoader::TRY_LOAD_GL_SUNX_constant_data, 265},
     {"GL_SUN_global_alpha", &OpenGLLoaderLoader::TRY_LOAD_GL_SUN_global_alpha,
      266},
     {"GL_SUN_mesh_array", &OpenGLLoaderLoader::TRY_LOAD_GL_SUN_mesh_array,
      267},
     {"GL_SUN_triangle_list",
      &OpenGLLoaderLoader::TRY_LOAD_GL_SUN_triangle_list, 268},
     {"GL_SUN_vertex", &OpenGLLoaderLoader::TRY_LOAD_GL_SUN_vertex, 269},
     {"GL_VERSION_1_0", &OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_1_0, 270},
     {"GL_VERSION_1_1", &OpenGLLoaderLoader::TRY_LOAD_GL_VERSION_1_1, 271},
     {"GL_NV_gpu_shader5", &OpenGLLoaderLoader::TRY_LOAD_GL_NV_gpu_shader5,
      272}}};
std::vector<OpenGLLoaderLoader::OpenGLLoaderLoader::EXTLOADER>
OpenGLLoaderLoader::TRAN2FUN(const std::vector<std::string> &list) {
  std::vector<EXTLOADER> output;
  for (auto &s : list) {
    auto as = OpenGLLoaderLoadermapping.TYPE1map[s];
    if (as) {
      output.push_back(as->type2);
    } else {
      output.push_back(0);
    }
  }
  return output;
}
std::vector<size_t>
OpenGLLoaderLoader::TRAN(const std::vector<std::string> &list) {
  std::vector<size_t> output;
  for (auto &s : list) {
    auto as = OpenGLLoaderLoadermapping.TYPE1map[s];
    if (as) {
      output.push_back(as->type3);
    } else {
      output.push_back(-1);
    }
  }
  return output;
}
bool OpenGLLoaderLoader::MappingToNeedLoad(const std::vector<size_t> &list) {
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
