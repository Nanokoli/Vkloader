#ifndef __gles2_gl2ext_h_
#define __gles2_gl2ext_h_ 1

#ifdef __cplusplus
extern "C" {
#endif

/*
** Copyright 2013-2020 The Khronos Group Inc.
** SPDX-License-Identifier: MIT
**
** This header is generated from the Khronos OpenGL / OpenGL ES XML
** API Registry. The current version of the Registry, generator scripts
** used to make the header, and the header can be found at
**   https://github.com/KhronosGroup/OpenGL-Registry
*/

#ifndef GL_APIENTRYP
#define GL_APIENTRYP GL_APIENTRY*
#endif

/* Generated on date 20240222 */

/* Generated C header for:
 * API: gles2
 * Profile: common
 * Versions considered: 2\.[0-9]
 * Versions emitted: _nomatch_^
 * Default extensions included: gles2
 * Additional extensions included: _nomatch_^
 * Extensions removed: _nomatch_^
 */

#define GL_MULTIPLY_KHR                   0x9294
#define GL_SCREEN_KHR                     0x9295
#define GL_OVERLAY_KHR                    0x9296
#define GL_DARKEN_KHR                     0x9297
#define GL_LIGHTEN_KHR                    0x9298
#define GL_COLORDODGE_KHR                 0x9299
#define GL_COLORBURN_KHR                  0x929A
#define GL_HARDLIGHT_KHR                  0x929B
#define GL_SOFTLIGHT_KHR                  0x929C
#define GL_DIFFERENCE_KHR                 0x929E
#define GL_EXCLUSION_KHR                  0x92A0
#define GL_HSL_HUE_KHR                    0x92AD
#define GL_HSL_SATURATION_KHR             0x92AE
#define GL_HSL_COLOR_KHR                  0x92AF
#define GL_HSL_LUMINOSITY_KHR             0x92B0
typedef void (GL_APIENTRYP PFNGLBLENDBARRIERKHRPROC) (void);

#define GL_BLEND_ADVANCED_COHERENT_KHR    0x9285

#define GL_CONTEXT_RELEASE_BEHAVIOR_KHR   0x82FB
#define GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_KHR 0x82FC

typedef void (GL_APIENTRY  *GLDEBUGPROCKHR)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
#define GL_SAMPLER                        0x82E6
#define GL_DEBUG_OUTPUT_SYNCHRONOUS_KHR   0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_KHR 0x8243
#define GL_DEBUG_CALLBACK_FUNCTION_KHR    0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM_KHR  0x8245
#define GL_DEBUG_SOURCE_API_KHR           0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR 0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER_KHR 0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY_KHR   0x8249
#define GL_DEBUG_SOURCE_APPLICATION_KHR   0x824A
#define GL_DEBUG_SOURCE_OTHER_KHR         0x824B
#define GL_DEBUG_TYPE_ERROR_KHR           0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR 0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR 0x824E
#define GL_DEBUG_TYPE_PORTABILITY_KHR     0x824F
#define GL_DEBUG_TYPE_PERFORMANCE_KHR     0x8250
#define GL_DEBUG_TYPE_OTHER_KHR           0x8251
#define GL_DEBUG_TYPE_MARKER_KHR          0x8268
#define GL_DEBUG_TYPE_PUSH_GROUP_KHR      0x8269
#define GL_DEBUG_TYPE_POP_GROUP_KHR       0x826A
#define GL_DEBUG_SEVERITY_NOTIFICATION_KHR 0x826B
#define GL_MAX_DEBUG_GROUP_STACK_DEPTH_KHR 0x826C
#define GL_DEBUG_GROUP_STACK_DEPTH_KHR    0x826D
#define GL_BUFFER_KHR                     0x82E0
#define GL_SHADER_KHR                     0x82E1
#define GL_PROGRAM_KHR                    0x82E2
#define GL_VERTEX_ARRAY_KHR               0x8074
#define GL_QUERY_KHR                      0x82E3
#define GL_PROGRAM_PIPELINE_KHR           0x82E4
#define GL_SAMPLER_KHR                    0x82E6
#define GL_MAX_LABEL_LENGTH_KHR           0x82E8
#define GL_MAX_DEBUG_MESSAGE_LENGTH_KHR   0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES_KHR  0x9144
#define GL_DEBUG_LOGGED_MESSAGES_KHR      0x9145
#define GL_DEBUG_SEVERITY_HIGH_KHR        0x9146
#define GL_DEBUG_SEVERITY_MEDIUM_KHR      0x9147
#define GL_DEBUG_SEVERITY_LOW_KHR         0x9148
#define GL_DEBUG_OUTPUT_KHR               0x92E0
#define GL_CONTEXT_FLAG_DEBUG_BIT_KHR     0x00000002
#define GL_STACK_OVERFLOW_KHR             0x0503
#define GL_STACK_UNDERFLOW_KHR            0x0504
typedef void (GL_APIENTRYP PFNGLDEBUGMESSAGECONTROLKHRPROC) (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
typedef void (GL_APIENTRYP PFNGLDEBUGMESSAGEINSERTKHRPROC) (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
typedef void (GL_APIENTRYP PFNGLDEBUGMESSAGECALLBACKKHRPROC) (GLDEBUGPROCKHR callback, const void *userParam);
typedef GLuint (GL_APIENTRYP PFNGLGETDEBUGMESSAGELOGKHRPROC) (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
typedef void (GL_APIENTRYP PFNGLPUSHDEBUGGROUPKHRPROC) (GLenum source, GLuint id, GLsizei length, const GLchar *message);
typedef void (GL_APIENTRYP PFNGLPOPDEBUGGROUPKHRPROC) (void);
typedef void (GL_APIENTRYP PFNGLOBJECTLABELKHRPROC) (GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
typedef void (GL_APIENTRYP PFNGLGETOBJECTLABELKHRPROC) (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
typedef void (GL_APIENTRYP PFNGLOBJECTPTRLABELKHRPROC) (const void *ptr, GLsizei length, const GLchar *label);
typedef void (GL_APIENTRYP PFNGLGETOBJECTPTRLABELKHRPROC) (const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);
typedef void (GL_APIENTRYP PFNGLGETPOINTERVKHRPROC) (GLenum pname, void **params);

#define GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR  0x00000008

#define GL_MAX_SHADER_COMPILER_THREADS_KHR 0x91B0
#define GL_COMPLETION_STATUS_KHR          0x91B1
typedef void (GL_APIENTRYP PFNGLMAXSHADERCOMPILERTHREADSKHRPROC) (GLuint count);


#define GL_CONTEXT_ROBUST_ACCESS_KHR      0x90F3
#define GL_LOSE_CONTEXT_ON_RESET_KHR      0x8252
#define GL_GUILTY_CONTEXT_RESET_KHR       0x8253
#define GL_INNOCENT_CONTEXT_RESET_KHR     0x8254
#define GL_UNKNOWN_CONTEXT_RESET_KHR      0x8255
#define GL_RESET_NOTIFICATION_STRATEGY_KHR 0x8256
#define GL_NO_RESET_NOTIFICATION_KHR      0x8261
#define GL_CONTEXT_LOST_KHR               0x0507
typedef GLenum (GL_APIENTRYP PFNGLGETGRAPHICSRESETSTATUSKHRPROC) (void);
typedef void (GL_APIENTRYP PFNGLREADNPIXELSKHRPROC) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMFVKHRPROC) (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMIVKHRPROC) (GLuint program, GLint location, GLsizei bufSize, GLint *params);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMUIVKHRPROC) (GLuint program, GLint location, GLsizei bufSize, GLuint *params);

#define GL_SUBGROUP_SIZE_KHR              0x9532
#define GL_SUBGROUP_SUPPORTED_STAGES_KHR  0x9533
#define GL_SUBGROUP_SUPPORTED_FEATURES_KHR 0x9534
#define GL_SUBGROUP_QUAD_ALL_STAGES_KHR   0x9535
#define GL_SUBGROUP_FEATURE_BASIC_BIT_KHR 0x00000001
#define GL_SUBGROUP_FEATURE_VOTE_BIT_KHR  0x00000002
#define GL_SUBGROUP_FEATURE_ARITHMETIC_BIT_KHR 0x00000004
#define GL_SUBGROUP_FEATURE_BALLOT_BIT_KHR 0x00000008
#define GL_SUBGROUP_FEATURE_SHUFFLE_BIT_KHR 0x00000010
#define GL_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT_KHR 0x00000020
#define GL_SUBGROUP_FEATURE_CLUSTERED_BIT_KHR 0x00000040
#define GL_SUBGROUP_FEATURE_QUAD_BIT_KHR  0x00000080

#define GL_COMPRESSED_RGBA_ASTC_4x4_KHR   0x93B0
#define GL_COMPRESSED_RGBA_ASTC_5x4_KHR   0x93B1
#define GL_COMPRESSED_RGBA_ASTC_5x5_KHR   0x93B2
#define GL_COMPRESSED_RGBA_ASTC_6x5_KHR   0x93B3
#define GL_COMPRESSED_RGBA_ASTC_6x6_KHR   0x93B4
#define GL_COMPRESSED_RGBA_ASTC_8x5_KHR   0x93B5
#define GL_COMPRESSED_RGBA_ASTC_8x6_KHR   0x93B6
#define GL_COMPRESSED_RGBA_ASTC_8x8_KHR   0x93B7
#define GL_COMPRESSED_RGBA_ASTC_10x5_KHR  0x93B8
#define GL_COMPRESSED_RGBA_ASTC_10x6_KHR  0x93B9
#define GL_COMPRESSED_RGBA_ASTC_10x8_KHR  0x93BA
#define GL_COMPRESSED_RGBA_ASTC_10x10_KHR 0x93BB
#define GL_COMPRESSED_RGBA_ASTC_12x10_KHR 0x93BC
#define GL_COMPRESSED_RGBA_ASTC_12x12_KHR 0x93BD
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR 0x93D0
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR 0x93D1
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR 0x93D2
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR 0x93D3
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR 0x93D4
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR 0x93D5
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR 0x93D6
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR 0x93D7
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR 0x93D8
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR 0x93D9
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR 0x93DA
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR 0x93DB
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR 0x93DC
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR 0x93DD



typedef void *GLeglImageOES;
typedef void (GL_APIENTRYP PFNGLEGLIMAGETARGETTEXTURE2DOESPROC) (GLenum target, GLeglImageOES image);
typedef void (GL_APIENTRYP PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC) (GLenum target, GLeglImageOES image);

#define GL_TEXTURE_EXTERNAL_OES           0x8D65
#define GL_TEXTURE_BINDING_EXTERNAL_OES   0x8D67
#define GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES 0x8D68
#define GL_SAMPLER_EXTERNAL_OES           0x8D66



#define GL_ETC1_RGB8_OES                  0x8D64

#define GL_PALETTE4_RGB8_OES              0x8B90
#define GL_PALETTE4_RGBA8_OES             0x8B91
#define GL_PALETTE4_R5_G6_B5_OES          0x8B92
#define GL_PALETTE4_RGBA4_OES             0x8B93
#define GL_PALETTE4_RGB5_A1_OES           0x8B94
#define GL_PALETTE8_RGB8_OES              0x8B95
#define GL_PALETTE8_RGBA8_OES             0x8B96
#define GL_PALETTE8_R5_G6_B5_OES          0x8B97
#define GL_PALETTE8_RGBA4_OES             0x8B98
#define GL_PALETTE8_RGB5_A1_OES           0x8B99

typedef void (GL_APIENTRYP PFNGLCOPYIMAGESUBDATAOESPROC) (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);

#define GL_DEPTH_COMPONENT24_OES          0x81A6

#define GL_DEPTH_COMPONENT32_OES          0x81A7


#define GL_MIN                            0x8007
#define GL_MAX                            0x8008
typedef void (GL_APIENTRYP PFNGLENABLEIOESPROC) (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLDISABLEIOESPROC) (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONIOESPROC) (GLuint buf, GLenum mode);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONSEPARATEIOESPROC) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCIOESPROC) (GLuint buf, GLenum src, GLenum dst);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCSEPARATEIOESPROC) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (GL_APIENTRYP PFNGLCOLORMASKIOESPROC) (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef GLboolean (GL_APIENTRYP PFNGLISENABLEDIOESPROC) (GLenum target, GLuint index);

typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSBASEVERTEXOESPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC) (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex);





#define GL_GEOMETRY_SHADER_OES            0x8DD9
#define GL_GEOMETRY_SHADER_BIT_OES        0x00000004
#define GL_GEOMETRY_LINKED_VERTICES_OUT_OES 0x8916
#define GL_GEOMETRY_LINKED_INPUT_TYPE_OES 0x8917
#define GL_GEOMETRY_LINKED_OUTPUT_TYPE_OES 0x8918
#define GL_GEOMETRY_SHADER_INVOCATIONS_OES 0x887F
#define GL_LAYER_PROVOKING_VERTEX_OES     0x825E
#define GL_LINES_ADJACENCY_OES            0x000A
#define GL_LINE_STRIP_ADJACENCY_OES       0x000B
#define GL_TRIANGLES_ADJACENCY_OES        0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY_OES   0x000D
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_OES 0x8DDF
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS_OES 0x8A2C
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_OES 0x8A32
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS_OES 0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_OES 0x9124
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_OES 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_OES 0x8DE1
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS_OES 0x8E5A
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_OES 0x8C29
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_OES 0x92CF
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS_OES 0x92D5
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS_OES 0x90CD
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_OES 0x90D7
#define GL_FIRST_VERTEX_CONVENTION_OES    0x8E4D
#define GL_LAST_VERTEX_CONVENTION_OES     0x8E4E
#define GL_UNDEFINED_VERTEX_OES           0x8260
#define GL_PRIMITIVES_GENERATED_OES       0x8C87
#define GL_FRAMEBUFFER_DEFAULT_LAYERS_OES 0x9312
#define GL_MAX_FRAMEBUFFER_LAYERS_OES     0x9317
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_OES 0x8DA8
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_OES 0x8DA7
#define GL_REFERENCED_BY_GEOMETRY_SHADER_OES 0x9309
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTUREOESPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level);

#define GL_PROGRAM_BINARY_LENGTH_OES      0x8741
#define GL_NUM_PROGRAM_BINARY_FORMATS_OES 0x87FE
#define GL_PROGRAM_BINARY_FORMATS_OES     0x87FF
typedef void (GL_APIENTRYP PFNGLGETPROGRAMBINARYOESPROC) (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
typedef void (GL_APIENTRYP PFNGLPROGRAMBINARYOESPROC) (GLuint program, GLenum binaryFormat, const void *binary, GLint length);


#define GL_WRITE_ONLY_OES                 0x88B9
#define GL_BUFFER_ACCESS_OES              0x88BB
#define GL_BUFFER_MAPPED_OES              0x88BC
#define GL_BUFFER_MAP_POINTER_OES         0x88BD
typedef void *(GL_APIENTRYP PFNGLMAPBUFFEROESPROC) (GLenum target, GLenum access);
typedef GLboolean (GL_APIENTRYP PFNGLUNMAPBUFFEROESPROC) (GLenum target);
typedef void (GL_APIENTRYP PFNGLGETBUFFERPOINTERVOESPROC) (GLenum target, GLenum pname, void **params);

#define GL_DEPTH_STENCIL_OES              0x84F9
#define GL_UNSIGNED_INT_24_8_OES          0x84FA
#define GL_DEPTH24_STENCIL8_OES           0x88F0

#define GL_PRIMITIVE_BOUNDING_BOX_OES     0x92BE
typedef void (GL_APIENTRYP PFNGLPRIMITIVEBOUNDINGBOXOESPROC) (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);

#define GL_ALPHA8_OES                     0x803C
#define GL_DEPTH_COMPONENT16_OES          0x81A5
#define GL_LUMINANCE4_ALPHA4_OES          0x8043
#define GL_LUMINANCE8_ALPHA8_OES          0x8045
#define GL_LUMINANCE8_OES                 0x8040
#define GL_RGBA4_OES                      0x8056
#define GL_RGB5_A1_OES                    0x8057
#define GL_RGB565_OES                     0x8D62
#define GL_RGB8_OES                       0x8051
#define GL_RGBA8_OES                      0x8058
#define GL_RGB10_EXT                      0x8052
#define GL_RGB10_A2_EXT                   0x8059


#define GL_SAMPLE_SHADING_OES             0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE_OES   0x8C37
typedef void (GL_APIENTRYP PFNGLMINSAMPLESHADINGOESPROC) (GLfloat value);




#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES 0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES 0x8E5C
#define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES 0x8E5D

#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES 0x8B8B

#define GL_STENCIL_INDEX1_OES             0x8D46

#define GL_STENCIL_INDEX4_OES             0x8D47

#define GL_FRAMEBUFFER_UNDEFINED_OES      0x8219


#define GL_PATCHES_OES                    0x000E
#define GL_PATCH_VERTICES_OES             0x8E72
#define GL_TESS_CONTROL_OUTPUT_VERTICES_OES 0x8E75
#define GL_TESS_GEN_MODE_OES              0x8E76
#define GL_TESS_GEN_SPACING_OES           0x8E77
#define GL_TESS_GEN_VERTEX_ORDER_OES      0x8E78
#define GL_TESS_GEN_POINT_MODE_OES        0x8E79
#define GL_ISOLINES_OES                   0x8E7A
#define GL_QUADS_OES                      0x0007
#define GL_FRACTIONAL_ODD_OES             0x8E7B
#define GL_FRACTIONAL_EVEN_OES            0x8E7C
#define GL_MAX_PATCH_VERTICES_OES         0x8E7D
#define GL_MAX_TESS_GEN_LEVEL_OES         0x8E7E
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_OES 0x8E7F
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_OES 0x8E80
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_OES 0x8E81
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_OES 0x8E82
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_OES 0x8E83
#define GL_MAX_TESS_PATCH_COMPONENTS_OES  0x8E84
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_OES 0x8E85
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_OES 0x8E86
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_OES 0x8E89
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_OES 0x8E8A
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_OES 0x886C
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_OES 0x886D
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_OES 0x8E1E
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_OES 0x8E1F
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_OES 0x92CD
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_OES 0x92CE
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_OES 0x92D3
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_OES 0x92D4
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_OES 0x90CB
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_OES 0x90CC
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_OES 0x90D8
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_OES 0x90D9
#define GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED_OES 0x8221
#define GL_IS_PER_PATCH_OES               0x92E7
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER_OES 0x9307
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER_OES 0x9308
#define GL_TESS_CONTROL_SHADER_OES        0x8E88
#define GL_TESS_EVALUATION_SHADER_OES     0x8E87
#define GL_TESS_CONTROL_SHADER_BIT_OES    0x00000008
#define GL_TESS_EVALUATION_SHADER_BIT_OES 0x00000010
typedef void (GL_APIENTRYP PFNGLPATCHPARAMETERIOESPROC) (GLenum pname, GLint value);

#define GL_TEXTURE_WRAP_R_OES             0x8072
#define GL_TEXTURE_3D_OES                 0x806F
#define GL_TEXTURE_BINDING_3D_OES         0x806A
#define GL_MAX_3D_TEXTURE_SIZE_OES        0x8073
#define GL_SAMPLER_3D_OES                 0x8B5F
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES 0x8CD4
typedef void (GL_APIENTRYP PFNGLTEXIMAGE3DOESPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (GL_APIENTRYP PFNGLTEXSUBIMAGE3DOESPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
typedef void (GL_APIENTRYP PFNGLCOPYTEXSUBIMAGE3DOESPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLCOMPRESSEDTEXIMAGE3DOESPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
typedef void (GL_APIENTRYP PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURE3DOESPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);

#define GL_TEXTURE_BORDER_COLOR_OES       0x1004
#define GL_CLAMP_TO_BORDER_OES            0x812D
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIIVOESPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIUIVOESPROC) (GLenum target, GLenum pname, const GLuint *params);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIIVOESPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIUIVOESPROC) (GLenum target, GLenum pname, GLuint *params);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIIVOESPROC) (GLuint sampler, GLenum pname, const GLint *param);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIUIVOESPROC) (GLuint sampler, GLenum pname, const GLuint *param);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIIVOESPROC) (GLuint sampler, GLenum pname, GLint *params);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIUIVOESPROC) (GLuint sampler, GLenum pname, GLuint *params);

#define GL_TEXTURE_BUFFER_OES             0x8C2A
#define GL_TEXTURE_BUFFER_BINDING_OES     0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_OES    0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_OES     0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_OES 0x8C2D
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_OES 0x919F
#define GL_SAMPLER_BUFFER_OES             0x8DC2
#define GL_INT_SAMPLER_BUFFER_OES         0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_OES 0x8DD8
#define GL_IMAGE_BUFFER_OES               0x9051
#define GL_INT_IMAGE_BUFFER_OES           0x905C
#define GL_UNSIGNED_INT_IMAGE_BUFFER_OES  0x9067
#define GL_TEXTURE_BUFFER_OFFSET_OES      0x919D
#define GL_TEXTURE_BUFFER_SIZE_OES        0x919E
typedef void (GL_APIENTRYP PFNGLTEXBUFFEROESPROC) (GLenum target, GLenum internalformat, GLuint buffer);
typedef void (GL_APIENTRYP PFNGLTEXBUFFERRANGEOESPROC) (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);

#define GL_COMPRESSED_RGBA_ASTC_3x3x3_OES 0x93C0
#define GL_COMPRESSED_RGBA_ASTC_4x3x3_OES 0x93C1
#define GL_COMPRESSED_RGBA_ASTC_4x4x3_OES 0x93C2
#define GL_COMPRESSED_RGBA_ASTC_4x4x4_OES 0x93C3
#define GL_COMPRESSED_RGBA_ASTC_5x4x4_OES 0x93C4
#define GL_COMPRESSED_RGBA_ASTC_5x5x4_OES 0x93C5
#define GL_COMPRESSED_RGBA_ASTC_5x5x5_OES 0x93C6
#define GL_COMPRESSED_RGBA_ASTC_6x5x5_OES 0x93C7
#define GL_COMPRESSED_RGBA_ASTC_6x6x5_OES 0x93C8
#define GL_COMPRESSED_RGBA_ASTC_6x6x6_OES 0x93C9
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES 0x93E0
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES 0x93E1
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES 0x93E2
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES 0x93E3
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES 0x93E4
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES 0x93E5
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES 0x93E6
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES 0x93E7
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES 0x93E8
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES 0x93E9

#define GL_TEXTURE_CUBE_MAP_ARRAY_OES     0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_OES 0x900A
#define GL_SAMPLER_CUBE_MAP_ARRAY_OES     0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_OES 0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_OES 0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_OES 0x900F
#define GL_IMAGE_CUBE_MAP_ARRAY_OES       0x9054
#define GL_INT_IMAGE_CUBE_MAP_ARRAY_OES   0x905F
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_OES 0x906A



#define GL_HALF_FLOAT_OES                 0x8D61



#define GL_STENCIL_INDEX_OES              0x1901
#define GL_STENCIL_INDEX8_OES             0x8D48

#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES 0x9102
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY_OES 0x9105
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY_OES 0x910B
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES 0x910C
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES 0x910D
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);

#define GL_TEXTURE_VIEW_MIN_LEVEL_OES     0x82DB
#define GL_TEXTURE_VIEW_NUM_LEVELS_OES    0x82DC
#define GL_TEXTURE_VIEW_MIN_LAYER_OES     0x82DD
#define GL_TEXTURE_VIEW_NUM_LAYERS_OES    0x82DE
#define GL_TEXTURE_IMMUTABLE_LEVELS       0x82DF
typedef void (GL_APIENTRYP PFNGLTEXTUREVIEWOESPROC) (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);

#define GL_VERTEX_ARRAY_BINDING_OES       0x85B5
typedef void (GL_APIENTRYP PFNGLBINDVERTEXARRAYOESPROC) (GLuint array);
typedef void (GL_APIENTRYP PFNGLDELETEVERTEXARRAYSOESPROC) (GLsizei n, const GLuint *arrays);
typedef void (GL_APIENTRYP PFNGLGENVERTEXARRAYSOESPROC) (GLsizei n, GLuint *arrays);
typedef GLboolean (GL_APIENTRYP PFNGLISVERTEXARRAYOESPROC) (GLuint array);


#define GL_UNSIGNED_INT_10_10_10_2_OES    0x8DF6
#define GL_INT_10_10_10_2_OES             0x8DF7

#define GL_MAX_VIEWPORTS_OES              0x825B
#define GL_VIEWPORT_SUBPIXEL_BITS_OES     0x825C
#define GL_VIEWPORT_BOUNDS_RANGE_OES      0x825D
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX_OES 0x825F
typedef void (GL_APIENTRYP PFNGLVIEWPORTARRAYVOESPROC) (GLuint first, GLsizei count, const GLfloat *v);
typedef void (GL_APIENTRYP PFNGLVIEWPORTINDEXEDFOESPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
typedef void (GL_APIENTRYP PFNGLVIEWPORTINDEXEDFVOESPROC) (GLuint index, const GLfloat *v);
typedef void (GL_APIENTRYP PFNGLSCISSORARRAYVOESPROC) (GLuint first, GLsizei count, const GLint *v);
typedef void (GL_APIENTRYP PFNGLSCISSORINDEXEDOESPROC) (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLSCISSORINDEXEDVOESPROC) (GLuint index, const GLint *v);
typedef void (GL_APIENTRYP PFNGLDEPTHRANGEARRAYFVOESPROC) (GLuint first, GLsizei count, const GLfloat *v);
typedef void (GL_APIENTRYP PFNGLDEPTHRANGEINDEXEDFOESPROC) (GLuint index, GLfloat n, GLfloat f);
typedef void (GL_APIENTRYP PFNGLGETFLOATI_VOESPROC) (GLenum target, GLuint index, GLfloat *data);

#define GL_3DC_X_AMD                      0x87F9
#define GL_3DC_XY_AMD                     0x87FA

#define GL_ATC_RGB_AMD                    0x8C92
#define GL_ATC_RGBA_EXPLICIT_ALPHA_AMD    0x8C93
#define GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD 0x87EE

#define GL_RENDERBUFFER_STORAGE_SAMPLES_AMD 0x91B2
#define GL_MAX_COLOR_FRAMEBUFFER_SAMPLES_AMD 0x91B3
#define GL_MAX_COLOR_FRAMEBUFFER_STORAGE_SAMPLES_AMD 0x91B4
#define GL_MAX_DEPTH_STENCIL_FRAMEBUFFER_SAMPLES_AMD 0x91B5
#define GL_NUM_SUPPORTED_MULTISAMPLE_MODES_AMD 0x91B6
#define GL_SUPPORTED_MULTISAMPLE_MODES_AMD 0x91B7
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) (GLenum target, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) (GLuint renderbuffer, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height);

#define GL_COUNTER_TYPE_AMD               0x8BC0
#define GL_COUNTER_RANGE_AMD              0x8BC1
#define GL_UNSIGNED_INT64_AMD             0x8BC2
#define GL_PERCENTAGE_AMD                 0x8BC3
#define GL_PERFMON_RESULT_AVAILABLE_AMD   0x8BC4
#define GL_PERFMON_RESULT_SIZE_AMD        0x8BC5
#define GL_PERFMON_RESULT_AMD             0x8BC6
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORGROUPSAMDPROC) (GLint *numGroups, GLsizei groupsSize, GLuint *groups);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERSAMDPROC) (GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORGROUPSTRINGAMDPROC) (GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC) (GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERINFOAMDPROC) (GLuint group, GLuint counter, GLenum pname, void *data);
typedef void (GL_APIENTRYP PFNGLGENPERFMONITORSAMDPROC) (GLsizei n, GLuint *monitors);
typedef void (GL_APIENTRYP PFNGLDELETEPERFMONITORSAMDPROC) (GLsizei n, GLuint *monitors);
typedef void (GL_APIENTRYP PFNGLSELECTPERFMONITORCOUNTERSAMDPROC) (GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList);
typedef void (GL_APIENTRYP PFNGLBEGINPERFMONITORAMDPROC) (GLuint monitor);
typedef void (GL_APIENTRYP PFNGLENDPERFMONITORAMDPROC) (GLuint monitor);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERDATAAMDPROC) (GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten);

#define GL_Z400_BINARY_AMD                0x8740



#define GL_READ_FRAMEBUFFER_ANGLE         0x8CA8
#define GL_DRAW_FRAMEBUFFER_ANGLE         0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_ANGLE 0x8CA6
#define GL_READ_FRAMEBUFFER_BINDING_ANGLE 0x8CAA
typedef void (GL_APIENTRYP PFNGLBLITFRAMEBUFFERANGLEPROC) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

#define GL_RENDERBUFFER_SAMPLES_ANGLE     0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE 0x8D56
#define GL_MAX_SAMPLES_ANGLE              0x8D57
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);

#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE 0x88FE
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDANGLEPROC) (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDANGLEPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBDIVISORANGLEPROC) (GLuint index, GLuint divisor);

#define GL_PACK_REVERSE_ROW_ORDER_ANGLE   0x93A4

#define GL_PROGRAM_BINARY_ANGLE           0x93A6

#define GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE 0x83F2

#define GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE 0x83F3

#define GL_TEXTURE_USAGE_ANGLE            0x93A2
#define GL_FRAMEBUFFER_ATTACHMENT_ANGLE   0x93A3

#define GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE 0x93A0
typedef void (GL_APIENTRYP PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC) (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);

#define GL_MAX_CLIP_DISTANCES_APPLE       0x0D32
#define GL_CLIP_DISTANCE0_APPLE           0x3000
#define GL_CLIP_DISTANCE1_APPLE           0x3001
#define GL_CLIP_DISTANCE2_APPLE           0x3002
#define GL_CLIP_DISTANCE3_APPLE           0x3003
#define GL_CLIP_DISTANCE4_APPLE           0x3004
#define GL_CLIP_DISTANCE5_APPLE           0x3005
#define GL_CLIP_DISTANCE6_APPLE           0x3006
#define GL_CLIP_DISTANCE7_APPLE           0x3007


typedef void (GL_APIENTRYP PFNGLCOPYTEXTURELEVELSAPPLEPROC) (GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount);

#define GL_RENDERBUFFER_SAMPLES_APPLE     0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE 0x8D56
#define GL_MAX_SAMPLES_APPLE              0x8D57
#define GL_READ_FRAMEBUFFER_APPLE         0x8CA8
#define GL_DRAW_FRAMEBUFFER_APPLE         0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_APPLE 0x8CA6
#define GL_READ_FRAMEBUFFER_BINDING_APPLE 0x8CAA
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC) (void);

#define GL_RGB_422_APPLE                  0x8A1F
#define GL_UNSIGNED_SHORT_8_8_APPLE       0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_APPLE   0x85BB
#define GL_RGB_RAW_422_APPLE              0x8A51

#define GL_SYNC_OBJECT_APPLE              0x8A53
#define GL_MAX_SERVER_WAIT_TIMEOUT_APPLE  0x9111
#define GL_OBJECT_TYPE_APPLE              0x9112
#define GL_SYNC_CONDITION_APPLE           0x9113
#define GL_SYNC_STATUS_APPLE              0x9114
#define GL_SYNC_FLAGS_APPLE               0x9115
#define GL_SYNC_FENCE_APPLE               0x9116
#define GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE 0x9117
#define GL_UNSIGNALED_APPLE               0x9118
#define GL_SIGNALED_APPLE                 0x9119
#define GL_ALREADY_SIGNALED_APPLE         0x911A
#define GL_TIMEOUT_EXPIRED_APPLE          0x911B
#define GL_CONDITION_SATISFIED_APPLE      0x911C
#define GL_WAIT_FAILED_APPLE              0x911D
#define GL_SYNC_FLUSH_COMMANDS_BIT_APPLE  0x00000001
#define GL_TIMEOUT_IGNORED_APPLE          0xFFFFFFFFFFFFFFFFull
typedef GLsync (GL_APIENTRYP PFNGLFENCESYNCAPPLEPROC) (GLenum condition, GLbitfield flags);
typedef GLboolean (GL_APIENTRYP PFNGLISSYNCAPPLEPROC) (GLsync sync);
typedef void (GL_APIENTRYP PFNGLDELETESYNCAPPLEPROC) (GLsync sync);
typedef GLenum (GL_APIENTRYP PFNGLCLIENTWAITSYNCAPPLEPROC) (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GL_APIENTRYP PFNGLWAITSYNCAPPLEPROC) (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GL_APIENTRYP PFNGLGETINTEGER64VAPPLEPROC) (GLenum pname, GLint64 *params);
typedef void (GL_APIENTRYP PFNGLGETSYNCIVAPPLEPROC) (GLsync sync, GLenum pname, GLsizei count, GLsizei *length, GLint *values);

#define GL_BGRA_EXT                       0x80E1
#define GL_BGRA8_EXT                      0x93A1

#define GL_TEXTURE_MAX_LEVEL_APPLE        0x813D

#define GL_UNSIGNED_INT_10F_11F_11F_REV_APPLE 0x8C3B
#define GL_UNSIGNED_INT_5_9_9_9_REV_APPLE 0x8C3E
#define GL_R11F_G11F_B10F_APPLE           0x8C3A
#define GL_RGB9_E5_APPLE                  0x8C3D

#define GL_MALI_PROGRAM_BINARY_ARM        0x8F61

#define GL_MALI_SHADER_BINARY_ARM         0x8F60


#define GL_SHADER_CORE_COUNT_ARM          0x96F0
#define GL_SHADER_CORE_ACTIVE_COUNT_ARM   0x96F1
#define GL_SHADER_CORE_PRESENT_MASK_ARM   0x96F2
#define GL_SHADER_CORE_MAX_WARP_COUNT_ARM 0x96F3
#define GL_SHADER_CORE_PIXEL_RATE_ARM     0x96F4
#define GL_SHADER_CORE_TEXEL_RATE_ARM     0x96F5
#define GL_SHADER_CORE_FMA_RATE_ARM       0x96F6
typedef void (GL_APIENTRYP PFNGLMAXACTIVESHADERCORESARMPROC) (GLuint count);

#define GL_FETCH_PER_SAMPLE_ARM           0x8F65
#define GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM 0x8F66


#define GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM 0x8F6A

#define GL_SMAPHS30_PROGRAM_BINARY_DMP    0x9251
#define GL_SMAPHS_PROGRAM_BINARY_DMP      0x9252
#define GL_DMP_PROGRAM_BINARY_DMP         0x9253

#define GL_SHADER_BINARY_DMP              0x9250


typedef void (GL_APIENTRYP PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC) (GLenum target, GLeglImageOES image, const GLint* attrib_list);
typedef void (GL_APIENTRYP PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC) (GLuint texture, GLeglImageOES image, const GLint* attrib_list);

#define GL_SURFACE_COMPRESSION_EXT        0x96C0
#define GL_SURFACE_COMPRESSION_FIXED_RATE_NONE_EXT 0x96C1
#define GL_SURFACE_COMPRESSION_FIXED_RATE_DEFAULT_EXT 0x96C2

#define GL_SAMPLER_EXTERNAL_2D_Y2Y_EXT    0x8BE7

typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC) (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);

#define GL_SRC1_COLOR_EXT                 0x88F9
#define GL_SRC1_ALPHA_EXT                 0x8589
#define GL_ONE_MINUS_SRC1_COLOR_EXT       0x88FA
#define GL_ONE_MINUS_SRC1_ALPHA_EXT       0x88FB
#define GL_SRC_ALPHA_SATURATE_EXT         0x0308
#define GL_LOCATION_INDEX_EXT             0x930F
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS_EXT 0x88FC
typedef void (GL_APIENTRYP PFNGLBINDFRAGDATALOCATIONINDEXEDEXTPROC) (GLuint program, GLuint colorNumber, GLuint index, const GLchar *name);
typedef void (GL_APIENTRYP PFNGLBINDFRAGDATALOCATIONEXTPROC) (GLuint program, GLuint color, const GLchar *name);
typedef GLint (GL_APIENTRYP PFNGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC) (GLuint program, GLenum programInterface, const GLchar *name);
typedef GLint (GL_APIENTRYP PFNGLGETFRAGDATAINDEXEXTPROC) (GLuint program, const GLchar *name);

#define GL_MIN_EXT                        0x8007
#define GL_MAX_EXT                        0x8008

#define GL_MAP_READ_BIT                   0x0001
#define GL_MAP_WRITE_BIT                  0x0002
#define GL_MAP_PERSISTENT_BIT_EXT         0x0040
#define GL_MAP_COHERENT_BIT_EXT           0x0080
#define GL_DYNAMIC_STORAGE_BIT_EXT        0x0100
#define GL_CLIENT_STORAGE_BIT_EXT         0x0200
#define GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT_EXT 0x00004000
#define GL_BUFFER_IMMUTABLE_STORAGE_EXT   0x821F
#define GL_BUFFER_STORAGE_FLAGS_EXT       0x8220
typedef void (GL_APIENTRYP PFNGLBUFFERSTORAGEEXTPROC) (GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);

typedef void (GL_APIENTRYP PFNGLCLEARTEXIMAGEEXTPROC) (GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
typedef void (GL_APIENTRYP PFNGLCLEARTEXSUBIMAGEEXTPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);

#define GL_LOWER_LEFT_EXT                 0x8CA1
#define GL_UPPER_LEFT_EXT                 0x8CA2
#define GL_NEGATIVE_ONE_TO_ONE_EXT        0x935E
#define GL_ZERO_TO_ONE_EXT                0x935F
#define GL_CLIP_ORIGIN_EXT                0x935C
#define GL_CLIP_DEPTH_MODE_EXT            0x935D
typedef void (GL_APIENTRYP PFNGLCLIPCONTROLEXTPROC) (GLenum origin, GLenum depth);

#define GL_MAX_CLIP_DISTANCES_EXT         0x0D32
#define GL_MAX_CULL_DISTANCES_EXT         0x82F9
#define GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES_EXT 0x82FA
#define GL_CLIP_DISTANCE0_EXT             0x3000
#define GL_CLIP_DISTANCE1_EXT             0x3001
#define GL_CLIP_DISTANCE2_EXT             0x3002
#define GL_CLIP_DISTANCE3_EXT             0x3003
#define GL_CLIP_DISTANCE4_EXT             0x3004
#define GL_CLIP_DISTANCE5_EXT             0x3005
#define GL_CLIP_DISTANCE6_EXT             0x3006
#define GL_CLIP_DISTANCE7_EXT             0x3007


#define GL_RGBA16F_EXT                    0x881A
#define GL_RGB16F_EXT                     0x881B
#define GL_RG16F_EXT                      0x822F
#define GL_R16F_EXT                       0x822D
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT 0x8211
#define GL_UNSIGNED_NORMALIZED_EXT        0x8C17


typedef void (GL_APIENTRYP PFNGLCOPYIMAGESUBDATAEXTPROC) (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);

#define GL_PROGRAM_PIPELINE_OBJECT_EXT    0x8A4F
#define GL_PROGRAM_OBJECT_EXT             0x8B40
#define GL_SHADER_OBJECT_EXT              0x8B48
#define GL_BUFFER_OBJECT_EXT              0x9151
#define GL_QUERY_OBJECT_EXT               0x9153
#define GL_VERTEX_ARRAY_OBJECT_EXT        0x9154
#define GL_TRANSFORM_FEEDBACK             0x8E22
typedef void (GL_APIENTRYP PFNGLLABELOBJECTEXTPROC) (GLenum type, GLuint object, GLsizei length, const GLchar *label);
typedef void (GL_APIENTRYP PFNGLGETOBJECTLABELEXTPROC) (GLenum type, GLuint object, GLsizei bufSize, GLsizei *length, GLchar *label);

typedef void (GL_APIENTRYP PFNGLINSERTEVENTMARKEREXTPROC) (GLsizei length, const GLchar *marker);
typedef void (GL_APIENTRYP PFNGLPUSHGROUPMARKEREXTPROC) (GLsizei length, const GLchar *marker);
typedef void (GL_APIENTRYP PFNGLPOPGROUPMARKEREXTPROC) (void);

#define GL_DEPTH_CLAMP_EXT                0x864F

#define GL_COLOR_EXT                      0x1800
#define GL_DEPTH_EXT                      0x1801
#define GL_STENCIL_EXT                    0x1802
typedef void (GL_APIENTRYP PFNGLDISCARDFRAMEBUFFEREXTPROC) (GLenum target, GLsizei numAttachments, const GLenum *attachments);

#define GL_QUERY_COUNTER_BITS_EXT         0x8864
#define GL_CURRENT_QUERY_EXT              0x8865
#define GL_QUERY_RESULT_EXT               0x8866
#define GL_QUERY_RESULT_AVAILABLE_EXT     0x8867
#define GL_TIME_ELAPSED_EXT               0x88BF
#define GL_TIMESTAMP_EXT                  0x8E28
#define GL_GPU_DISJOINT_EXT               0x8FBB
typedef void (GL_APIENTRYP PFNGLGENQUERIESEXTPROC) (GLsizei n, GLuint *ids);
typedef void (GL_APIENTRYP PFNGLDELETEQUERIESEXTPROC) (GLsizei n, const GLuint *ids);
typedef GLboolean (GL_APIENTRYP PFNGLISQUERYEXTPROC) (GLuint id);
typedef void (GL_APIENTRYP PFNGLBEGINQUERYEXTPROC) (GLenum target, GLuint id);
typedef void (GL_APIENTRYP PFNGLENDQUERYEXTPROC) (GLenum target);
typedef void (GL_APIENTRYP PFNGLQUERYCOUNTEREXTPROC) (GLuint id, GLenum target);
typedef void (GL_APIENTRYP PFNGLGETQUERYIVEXTPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTIVEXTPROC) (GLuint id, GLenum pname, GLint *params);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTUIVEXTPROC) (GLuint id, GLenum pname, GLuint *params);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTI64VEXTPROC) (GLuint id, GLenum pname, GLint64 *params);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTUI64VEXTPROC) (GLuint id, GLenum pname, GLuint64 *params);
typedef void (GL_APIENTRYP PFNGLGETINTEGER64VEXTPROC) (GLenum pname, GLint64 *data);

#define GL_MAX_COLOR_ATTACHMENTS_EXT      0x8CDF
#define GL_MAX_DRAW_BUFFERS_EXT           0x8824
#define GL_DRAW_BUFFER0_EXT               0x8825
#define GL_DRAW_BUFFER1_EXT               0x8826
#define GL_DRAW_BUFFER2_EXT               0x8827
#define GL_DRAW_BUFFER3_EXT               0x8828
#define GL_DRAW_BUFFER4_EXT               0x8829
#define GL_DRAW_BUFFER5_EXT               0x882A
#define GL_DRAW_BUFFER6_EXT               0x882B
#define GL_DRAW_BUFFER7_EXT               0x882C
#define GL_DRAW_BUFFER8_EXT               0x882D
#define GL_DRAW_BUFFER9_EXT               0x882E
#define GL_DRAW_BUFFER10_EXT              0x882F
#define GL_DRAW_BUFFER11_EXT              0x8830
#define GL_DRAW_BUFFER12_EXT              0x8831
#define GL_DRAW_BUFFER13_EXT              0x8832
#define GL_DRAW_BUFFER14_EXT              0x8833
#define GL_DRAW_BUFFER15_EXT              0x8834
#define GL_COLOR_ATTACHMENT0_EXT          0x8CE0
#define GL_COLOR_ATTACHMENT1_EXT          0x8CE1
#define GL_COLOR_ATTACHMENT2_EXT          0x8CE2
#define GL_COLOR_ATTACHMENT3_EXT          0x8CE3
#define GL_COLOR_ATTACHMENT4_EXT          0x8CE4
#define GL_COLOR_ATTACHMENT5_EXT          0x8CE5
#define GL_COLOR_ATTACHMENT6_EXT          0x8CE6
#define GL_COLOR_ATTACHMENT7_EXT          0x8CE7
#define GL_COLOR_ATTACHMENT8_EXT          0x8CE8
#define GL_COLOR_ATTACHMENT9_EXT          0x8CE9
#define GL_COLOR_ATTACHMENT10_EXT         0x8CEA
#define GL_COLOR_ATTACHMENT11_EXT         0x8CEB
#define GL_COLOR_ATTACHMENT12_EXT         0x8CEC
#define GL_COLOR_ATTACHMENT13_EXT         0x8CED
#define GL_COLOR_ATTACHMENT14_EXT         0x8CEE
#define GL_COLOR_ATTACHMENT15_EXT         0x8CEF
typedef void (GL_APIENTRYP PFNGLDRAWBUFFERSEXTPROC) (GLsizei n, const GLenum *bufs);

typedef void (GL_APIENTRYP PFNGLENABLEIEXTPROC) (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLDISABLEIEXTPROC) (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONIEXTPROC) (GLuint buf, GLenum mode);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONSEPARATEIEXTPROC) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCIEXTPROC) (GLuint buf, GLenum src, GLenum dst);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCSEPARATEIEXTPROC) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (GL_APIENTRYP PFNGLCOLORMASKIEXTPROC) (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef GLboolean (GL_APIENTRYP PFNGLISENABLEDIEXTPROC) (GLenum target, GLuint index);

typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSBASEVERTEXEXTPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);

typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDEXTPROC) (GLenum mode, GLint start, GLsizei count, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDEXTPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);

typedef void (GL_APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKEXTPROC) (GLenum mode, GLuint id);
typedef void (GL_APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDEXTPROC) (GLenum mode, GLuint id, GLsizei instancecount);

typedef void *GLeglClientBufferEXT;
typedef void (GL_APIENTRYP PFNGLBUFFERSTORAGEEXTERNALEXTPROC) (GLenum target, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield flags);
typedef void (GL_APIENTRYP PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield flags);


#define GL_SHADING_RATE_1X1_PIXELS_EXT    0x96A6
#define GL_SHADING_RATE_1X2_PIXELS_EXT    0x96A7
#define GL_SHADING_RATE_2X1_PIXELS_EXT    0x96A8
#define GL_SHADING_RATE_2X2_PIXELS_EXT    0x96A9
#define GL_SHADING_RATE_1X4_PIXELS_EXT    0x96AA
#define GL_SHADING_RATE_4X1_PIXELS_EXT    0x96AB
#define GL_SHADING_RATE_4X2_PIXELS_EXT    0x96AC
#define GL_SHADING_RATE_2X4_PIXELS_EXT    0x96AD
#define GL_SHADING_RATE_4X4_PIXELS_EXT    0x96AE
#define GL_SHADING_RATE_EXT               0x96D0
#define GL_SHADING_RATE_ATTACHMENT_EXT    0x96D1
#define GL_FRAGMENT_SHADING_RATE_COMBINER_OP_KEEP_EXT 0x96D2
#define GL_FRAGMENT_SHADING_RATE_COMBINER_OP_REPLACE_EXT 0x96D3
#define GL_FRAGMENT_SHADING_RATE_COMBINER_OP_MIN_EXT 0x96D4
#define GL_FRAGMENT_SHADING_RATE_COMBINER_OP_MAX_EXT 0x96D5
#define GL_FRAGMENT_SHADING_RATE_COMBINER_OP_MUL_EXT 0x96D6
#define GL_MIN_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_WIDTH_EXT 0x96D7
#define GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_WIDTH_EXT 0x96D8
#define GL_MIN_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_HEIGHT_EXT 0x96D9
#define GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_HEIGHT_EXT 0x96DA
#define GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_ASPECT_RATIO_EXT 0x96DB
#define GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_LAYERS_EXT 0x96DC
#define GL_FRAGMENT_SHADING_RATE_WITH_SHADER_DEPTH_STENCIL_WRITES_SUPPORTED_EXT 0x96DD
#define GL_FRAGMENT_SHADING_RATE_WITH_SAMPLE_MASK_SUPPORTED_EXT 0x96DE
#define GL_FRAGMENT_SHADING_RATE_ATTACHMENT_WITH_DEFAULT_FRAMEBUFFER_SUPPORTED_EXT 0x96DF
#define GL_FRAGMENT_SHADING_RATE_NON_TRIVIAL_COMBINERS_SUPPORTED_EXT 0x8F6F
typedef void (GL_APIENTRYP PFNGLGETFRAGMENTSHADINGRATESEXTPROC) (GLsizei samples, GLsizei maxCount, GLsizei *count, GLenum *shadingRates);
typedef void (GL_APIENTRYP PFNGLSHADINGRATEEXTPROC) (GLenum rate);
typedef void (GL_APIENTRYP PFNGLSHADINGRATECOMBINEROPSEXTPROC) (GLenum combinerOp0, GLenum combinerOp1);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERSHADINGRATEEXTPROC) (GLenum target, GLenum attachment, GLuint texture, GLint baseLayer, GLsizei numLayers, GLsizei texelWidth, GLsizei texelHeight);

typedef void (GL_APIENTRYP PFNGLBLITFRAMEBUFFERLAYERSEXTPROC) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (GL_APIENTRYP PFNGLBLITFRAMEBUFFERLAYEREXTPROC) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint srcLayer, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLint dstLayer, GLbitfield mask, GLenum filter);


#define GL_GEOMETRY_SHADER_EXT            0x8DD9
#define GL_GEOMETRY_SHADER_BIT_EXT        0x00000004
#define GL_GEOMETRY_LINKED_VERTICES_OUT_EXT 0x8916
#define GL_GEOMETRY_LINKED_INPUT_TYPE_EXT 0x8917
#define GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT 0x8918
#define GL_GEOMETRY_SHADER_INVOCATIONS_EXT 0x887F
#define GL_LAYER_PROVOKING_VERTEX_EXT     0x825E
#define GL_LINES_ADJACENCY_EXT            0x000A
#define GL_LINE_STRIP_ADJACENCY_EXT       0x000B
#define GL_TRIANGLES_ADJACENCY_EXT        0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY_EXT   0x000D
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT 0x8DDF
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT 0x8A2C
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT 0x8A32
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT 0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT 0x9124
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT 0x8DE1
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT 0x8E5A
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT 0x8C29
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT 0x92CF
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT 0x92D5
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT 0x90CD
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT 0x90D7
#define GL_FIRST_VERTEX_CONVENTION_EXT    0x8E4D
#define GL_LAST_VERTEX_CONVENTION_EXT     0x8E4E
#define GL_UNDEFINED_VERTEX_EXT           0x8260
#define GL_PRIMITIVES_GENERATED_EXT       0x8C87
#define GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT 0x9312
#define GL_MAX_FRAMEBUFFER_LAYERS_EXT     0x9317
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT 0x8DA8
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT 0x8DA7
#define GL_REFERENCED_BY_GEOMETRY_SHADER_EXT 0x9309
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTUREEXTPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level);


#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT 0x88FE
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBDIVISOREXTPROC) (GLuint index, GLuint divisor);

#define GL_MAP_READ_BIT_EXT               0x0001
#define GL_MAP_WRITE_BIT_EXT              0x0002
#define GL_MAP_INVALIDATE_RANGE_BIT_EXT   0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT_EXT  0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT_EXT     0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT_EXT     0x0020
typedef void *(GL_APIENTRYP PFNGLMAPBUFFERRANGEEXTPROC) (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (GL_APIENTRYP PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC) (GLenum target, GLintptr offset, GLsizeiptr length);

#define GL_TEXTURE_TILING_EXT             0x9580
#define GL_DEDICATED_MEMORY_OBJECT_EXT    0x9581
#define GL_PROTECTED_MEMORY_OBJECT_EXT    0x959B
#define GL_NUM_TILING_TYPES_EXT           0x9582
#define GL_TILING_TYPES_EXT               0x9583
#define GL_OPTIMAL_TILING_EXT             0x9584
#define GL_LINEAR_TILING_EXT              0x9585
#define GL_NUM_DEVICE_UUIDS_EXT           0x9596
#define GL_DEVICE_UUID_EXT                0x9597
#define GL_DRIVER_UUID_EXT                0x9598
#define GL_UUID_SIZE_EXT                  16
typedef void (GL_APIENTRYP PFNGLGETUNSIGNEDBYTEVEXTPROC) (GLenum pname, GLubyte *data);
typedef void (GL_APIENTRYP PFNGLGETUNSIGNEDBYTEI_VEXTPROC) (GLenum target, GLuint index, GLubyte *data);
typedef void (GL_APIENTRYP PFNGLDELETEMEMORYOBJECTSEXTPROC) (GLsizei n, const GLuint *memoryObjects);
typedef GLboolean (GL_APIENTRYP PFNGLISMEMORYOBJECTEXTPROC) (GLuint memoryObject);
typedef void (GL_APIENTRYP PFNGLCREATEMEMORYOBJECTSEXTPROC) (GLsizei n, GLuint *memoryObjects);
typedef void (GL_APIENTRYP PFNGLMEMORYOBJECTPARAMETERIVEXTPROC) (GLuint memoryObject, GLenum pname, const GLint *params);
typedef void (GL_APIENTRYP PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC) (GLuint memoryObject, GLenum pname, GLint *params);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGEMEM2DEXTPROC) (GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC) (GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGEMEM3DEXTPROC) (GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC) (GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLBUFFERSTORAGEMEMEXTPROC) (GLenum target, GLsizeiptr size, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGEMEM2DEXTPROC) (GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC) (GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGEMEM3DEXTPROC) (GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC) (GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC) (GLuint buffer, GLsizeiptr size, GLuint memory, GLuint64 offset);

#define GL_HANDLE_TYPE_OPAQUE_FD_EXT      0x9586
typedef void (GL_APIENTRYP PFNGLIMPORTMEMORYFDEXTPROC) (GLuint memory, GLuint64 size, GLenum handleType, GLint fd);

#define GL_HANDLE_TYPE_OPAQUE_WIN32_EXT   0x9587
#define GL_HANDLE_TYPE_OPAQUE_WIN32_KMT_EXT 0x9588
#define GL_DEVICE_LUID_EXT                0x9599
#define GL_DEVICE_NODE_MASK_EXT           0x959A
#define GL_LUID_SIZE_EXT                  8
#define GL_HANDLE_TYPE_D3D12_TILEPOOL_EXT 0x9589
#define GL_HANDLE_TYPE_D3D12_RESOURCE_EXT 0x958A
#define GL_HANDLE_TYPE_D3D11_IMAGE_EXT    0x958B
#define GL_HANDLE_TYPE_D3D11_IMAGE_KMT_EXT 0x958C
typedef void (GL_APIENTRYP PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC) (GLuint memory, GLuint64 size, GLenum handleType, void *handle);
typedef void (GL_APIENTRYP PFNGLIMPORTMEMORYWIN32NAMEEXTPROC) (GLuint memory, GLuint64 size, GLenum handleType, const void *name);

typedef void (GL_APIENTRYP PFNGLMULTIDRAWARRAYSEXTPROC) (GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWELEMENTSEXTPROC) (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount);

typedef void (GL_APIENTRYP PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC) (GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC) (GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride);

#define GL_MULTISAMPLE_EXT                0x809D
#define GL_SAMPLE_ALPHA_TO_ONE_EXT        0x809F

#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT 0x8D6C
#define GL_RENDERBUFFER_SAMPLES_EXT       0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT 0x8D56
#define GL_MAX_SAMPLES_EXT                0x8D57
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);


#define GL_COLOR_ATTACHMENT_EXT           0x90F0
#define GL_MULTIVIEW_EXT                  0x90F1
#define GL_DRAW_BUFFER_EXT                0x0C01
#define GL_READ_BUFFER_EXT                0x0C02
#define GL_MAX_MULTIVIEW_BUFFERS_EXT      0x90F2
typedef void (GL_APIENTRYP PFNGLREADBUFFERINDEXEDEXTPROC) (GLenum src, GLint index);
typedef void (GL_APIENTRYP PFNGLDRAWBUFFERSINDEXEDEXTPROC) (GLint n, const GLenum *location, const GLint *indices);
typedef void (GL_APIENTRYP PFNGLGETINTEGERI_VEXTPROC) (GLenum target, GLuint index, GLint *data);




#define GL_ANY_SAMPLES_PASSED_EXT         0x8C2F
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE_EXT 0x8D6A

#define GL_POLYGON_OFFSET_CLAMP_EXT       0x8E1B
typedef void (GL_APIENTRYP PFNGLPOLYGONOFFSETCLAMPEXTPROC) (GLfloat factor, GLfloat units, GLfloat clamp);


#define GL_PRIMITIVE_BOUNDING_BOX_EXT     0x92BE
typedef void (GL_APIENTRYP PFNGLPRIMITIVEBOUNDINGBOXEXTPROC) (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);

#define GL_CONTEXT_FLAG_PROTECTED_CONTENT_BIT_EXT 0x00000010
#define GL_TEXTURE_PROTECTED_EXT          0x8BFA

#define GL_COMPRESSED_SRGB_PVRTC_2BPPV1_EXT 0x8A54
#define GL_COMPRESSED_SRGB_PVRTC_4BPPV1_EXT 0x8A55
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV1_EXT 0x8A56
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV1_EXT 0x8A57
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV2_IMG 0x93F0
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV2_IMG 0x93F1

#define GL_RASTER_MULTISAMPLE_EXT         0x9327
#define GL_RASTER_SAMPLES_EXT             0x9328
#define GL_MAX_RASTER_SAMPLES_EXT         0x9329
#define GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT 0x932A
#define GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT 0x932B
#define GL_EFFECTIVE_RASTER_SAMPLES_EXT   0x932C
typedef void (GL_APIENTRYP PFNGLRASTERSAMPLESEXTPROC) (GLuint samples, GLboolean fixedsamplelocations);

#define GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT 0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT 0x8366

#define GL_R8_SNORM                       0x8F94
#define GL_RG8_SNORM                      0x8F95
#define GL_RGBA8_SNORM                    0x8F97
#define GL_R16_SNORM_EXT                  0x8F98
#define GL_RG16_SNORM_EXT                 0x8F99
#define GL_RGBA16_SNORM_EXT               0x8F9B

#define GL_GUILTY_CONTEXT_RESET_EXT       0x8253
#define GL_INNOCENT_CONTEXT_RESET_EXT     0x8254
#define GL_UNKNOWN_CONTEXT_RESET_EXT      0x8255
#define GL_CONTEXT_ROBUST_ACCESS_EXT      0x90F3
#define GL_RESET_NOTIFICATION_STRATEGY_EXT 0x8256
#define GL_LOSE_CONTEXT_ON_RESET_EXT      0x8252
#define GL_NO_RESET_NOTIFICATION_EXT      0x8261
typedef GLenum (GL_APIENTRYP PFNGLGETGRAPHICSRESETSTATUSEXTPROC) (void);
typedef void (GL_APIENTRYP PFNGLREADNPIXELSEXTPROC) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMFVEXTPROC) (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMIVEXTPROC) (GLuint program, GLint location, GLsizei bufSize, GLint *params);

#define GL_SRGB_EXT                       0x8C40
#define GL_SRGB_ALPHA_EXT                 0x8C42
#define GL_SRGB8_ALPHA8_EXT               0x8C43
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT 0x8210

#define GL_FRAMEBUFFER_SRGB_EXT           0x8DB9

#define GL_LAYOUT_GENERAL_EXT             0x958D
#define GL_LAYOUT_COLOR_ATTACHMENT_EXT    0x958E
#define GL_LAYOUT_DEPTH_STENCIL_ATTACHMENT_EXT 0x958F
#define GL_LAYOUT_DEPTH_STENCIL_READ_ONLY_EXT 0x9590
#define GL_LAYOUT_SHADER_READ_ONLY_EXT    0x9591
#define GL_LAYOUT_TRANSFER_SRC_EXT        0x9592
#define GL_LAYOUT_TRANSFER_DST_EXT        0x9593
#define GL_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_EXT 0x9530
#define GL_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_EXT 0x9531
typedef void (GL_APIENTRYP PFNGLGENSEMAPHORESEXTPROC) (GLsizei n, GLuint *semaphores);
typedef void (GL_APIENTRYP PFNGLDELETESEMAPHORESEXTPROC) (GLsizei n, const GLuint *semaphores);
typedef GLboolean (GL_APIENTRYP PFNGLISSEMAPHOREEXTPROC) (GLuint semaphore);
typedef void (GL_APIENTRYP PFNGLSEMAPHOREPARAMETERUI64VEXTPROC) (GLuint semaphore, GLenum pname, const GLuint64 *params);
typedef void (GL_APIENTRYP PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC) (GLuint semaphore, GLenum pname, GLuint64 *params);
typedef void (GL_APIENTRYP PFNGLWAITSEMAPHOREEXTPROC) (GLuint semaphore, GLuint numBufferBarriers, const GLuint *buffers, GLuint numTextureBarriers, const GLuint *textures, const GLenum *srcLayouts);
typedef void (GL_APIENTRYP PFNGLSIGNALSEMAPHOREEXTPROC) (GLuint semaphore, GLuint numBufferBarriers, const GLuint *buffers, GLuint numTextureBarriers, const GLuint *textures, const GLenum *dstLayouts);

typedef void (GL_APIENTRYP PFNGLIMPORTSEMAPHOREFDEXTPROC) (GLuint semaphore, GLenum handleType, GLint fd);

#define GL_HANDLE_TYPE_D3D12_FENCE_EXT    0x9594
#define GL_D3D12_FENCE_VALUE_EXT          0x9595
typedef void (GL_APIENTRYP PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC) (GLuint semaphore, GLenum handleType, void *handle);
typedef void (GL_APIENTRYP PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC) (GLuint semaphore, GLenum handleType, const void *name);


#define GL_ACTIVE_PROGRAM_EXT             0x8259
#define GL_VERTEX_SHADER_BIT_EXT          0x00000001
#define GL_FRAGMENT_SHADER_BIT_EXT        0x00000002
#define GL_ALL_SHADER_BITS_EXT            0xFFFFFFFF
#define GL_PROGRAM_SEPARABLE_EXT          0x8258
#define GL_PROGRAM_PIPELINE_BINDING_EXT   0x825A
typedef void (GL_APIENTRYP PFNGLACTIVESHADERPROGRAMEXTPROC) (GLuint pipeline, GLuint program);
typedef void (GL_APIENTRYP PFNGLBINDPROGRAMPIPELINEEXTPROC) (GLuint pipeline);
typedef GLuint (GL_APIENTRYP PFNGLCREATESHADERPROGRAMVEXTPROC) (GLenum type, GLsizei count, const GLchar *const*strings);
typedef void (GL_APIENTRYP PFNGLDELETEPROGRAMPIPELINESEXTPROC) (GLsizei n, const GLuint *pipelines);
typedef void (GL_APIENTRYP PFNGLGENPROGRAMPIPELINESEXTPROC) (GLsizei n, GLuint *pipelines);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC) (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMPIPELINEIVEXTPROC) (GLuint pipeline, GLenum pname, GLint *params);
typedef GLboolean (GL_APIENTRYP PFNGLISPROGRAMPIPELINEEXTPROC) (GLuint pipeline);
typedef void (GL_APIENTRYP PFNGLPROGRAMPARAMETERIEXTPROC) (GLuint program, GLenum pname, GLint value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1FEXTPROC) (GLuint program, GLint location, GLfloat v0);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1IEXTPROC) (GLuint program, GLint location, GLint v0);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2FEXTPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2IEXTPROC) (GLuint program, GLint location, GLint v0, GLint v1);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3FEXTPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3IEXTPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4FEXTPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4IEXTPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRYP PFNGLUSEPROGRAMSTAGESEXTPROC) (GLuint pipeline, GLbitfield stages, GLuint program);
typedef void (GL_APIENTRYP PFNGLVALIDATEPROGRAMPIPELINEEXTPROC) (GLuint pipeline);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1UIEXTPROC) (GLuint program, GLint location, GLuint v0);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2UIEXTPROC) (GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3UIEXTPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4UIEXTPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);

#define GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT 0x8A52

typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC) (void);






#define GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_FAST_SIZE_EXT 0x8F63
#define GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_SIZE_EXT 0x8F67
#define GL_SHADER_PIXEL_LOCAL_STORAGE_EXT 0x8F64

#define GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_FAST_SIZE_EXT 0x9650
#define GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_SIZE_EXT 0x9651
#define GL_FRAMEBUFFER_INCOMPLETE_INSUFFICIENT_SHADER_COMBINED_LOCAL_STORAGE_EXT 0x9652
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC) (GLuint target, GLsizei size);
typedef GLsizei (GL_APIENTRYP PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC) (GLuint target);
typedef void (GL_APIENTRYP PFNGLCLEARPIXELLOCALSTORAGEUIEXTPROC) (GLsizei offset, GLsizei n, const GLuint *values);



#define GL_TEXTURE_COMPARE_MODE_EXT       0x884C
#define GL_TEXTURE_COMPARE_FUNC_EXT       0x884D
#define GL_COMPARE_REF_TO_TEXTURE_EXT     0x884E
#define GL_SAMPLER_2D_SHADOW_EXT          0x8B62

#define GL_TEXTURE_SPARSE_EXT             0x91A6
#define GL_VIRTUAL_PAGE_SIZE_INDEX_EXT    0x91A7
#define GL_NUM_SPARSE_LEVELS_EXT          0x91AA
#define GL_NUM_VIRTUAL_PAGE_SIZES_EXT     0x91A8
#define GL_VIRTUAL_PAGE_SIZE_X_EXT        0x9195
#define GL_VIRTUAL_PAGE_SIZE_Y_EXT        0x9196
#define GL_VIRTUAL_PAGE_SIZE_Z_EXT        0x9197
#define GL_TEXTURE_2D_ARRAY               0x8C1A
#define GL_TEXTURE_3D                     0x806F
#define GL_MAX_SPARSE_TEXTURE_SIZE_EXT    0x9198
#define GL_MAX_SPARSE_3D_TEXTURE_SIZE_EXT 0x9199
#define GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_EXT 0x919A
#define GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_EXT 0x91A9
typedef void (GL_APIENTRYP PFNGLTEXPAGECOMMITMENTEXTPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);



#define GL_PATCHES_EXT                    0x000E
#define GL_PATCH_VERTICES_EXT             0x8E72
#define GL_TESS_CONTROL_OUTPUT_VERTICES_EXT 0x8E75
#define GL_TESS_GEN_MODE_EXT              0x8E76
#define GL_TESS_GEN_SPACING_EXT           0x8E77
#define GL_TESS_GEN_VERTEX_ORDER_EXT      0x8E78
#define GL_TESS_GEN_POINT_MODE_EXT        0x8E79
#define GL_ISOLINES_EXT                   0x8E7A
#define GL_QUADS_EXT                      0x0007
#define GL_FRACTIONAL_ODD_EXT             0x8E7B
#define GL_FRACTIONAL_EVEN_EXT            0x8E7C
#define GL_MAX_PATCH_VERTICES_EXT         0x8E7D
#define GL_MAX_TESS_GEN_LEVEL_EXT         0x8E7E
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_EXT 0x8E7F
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT 0x8E80
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_EXT 0x8E81
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_EXT 0x8E82
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT 0x8E83
#define GL_MAX_TESS_PATCH_COMPONENTS_EXT  0x8E84
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_EXT 0x8E85
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT 0x8E86
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_EXT 0x8E89
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_EXT 0x8E8A
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT 0x886C
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT 0x886D
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_EXT 0x8E1E
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT 0x8E1F
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT 0x92CD
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT 0x92CE
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT 0x92D3
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT 0x92D4
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_EXT 0x90CB
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_EXT 0x90CC
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT 0x90D8
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT 0x90D9
#define GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED 0x8221
#define GL_IS_PER_PATCH_EXT               0x92E7
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT 0x9307
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT 0x9308
#define GL_TESS_CONTROL_SHADER_EXT        0x8E88
#define GL_TESS_EVALUATION_SHADER_EXT     0x8E87
#define GL_TESS_CONTROL_SHADER_BIT_EXT    0x00000008
#define GL_TESS_EVALUATION_SHADER_BIT_EXT 0x00000010
typedef void (GL_APIENTRYP PFNGLPATCHPARAMETERIEXTPROC) (GLenum pname, GLint value);

#define GL_TEXTURE_BORDER_COLOR_EXT       0x1004
#define GL_CLAMP_TO_BORDER_EXT            0x812D
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIIVEXTPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIUIVEXTPROC) (GLenum target, GLenum pname, const GLuint *params);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIIVEXTPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIUIVEXTPROC) (GLenum target, GLenum pname, GLuint *params);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIIVEXTPROC) (GLuint sampler, GLenum pname, const GLint *param);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIUIVEXTPROC) (GLuint sampler, GLenum pname, const GLuint *param);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIIVEXTPROC) (GLuint sampler, GLenum pname, GLint *params);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIUIVEXTPROC) (GLuint sampler, GLenum pname, GLuint *params);

#define GL_TEXTURE_BUFFER_EXT             0x8C2A
#define GL_TEXTURE_BUFFER_BINDING_EXT     0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_EXT    0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_EXT     0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT 0x8C2D
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT 0x919F
#define GL_SAMPLER_BUFFER_EXT             0x8DC2
#define GL_INT_SAMPLER_BUFFER_EXT         0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT 0x8DD8
#define GL_IMAGE_BUFFER_EXT               0x9051
#define GL_INT_IMAGE_BUFFER_EXT           0x905C
#define GL_UNSIGNED_INT_IMAGE_BUFFER_EXT  0x9067
#define GL_TEXTURE_BUFFER_OFFSET_EXT      0x919D
#define GL_TEXTURE_BUFFER_SIZE_EXT        0x919E
typedef void (GL_APIENTRYP PFNGLTEXBUFFEREXTPROC) (GLenum target, GLenum internalformat, GLuint buffer);
typedef void (GL_APIENTRYP PFNGLTEXBUFFERRANGEEXTPROC) (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);

#define GL_TEXTURE_ASTC_DECODE_PRECISION_EXT 0x8F69

#define GL_COMPRESSED_RGBA_BPTC_UNORM_EXT 0x8E8C
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT 0x8E8D
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT 0x8E8E
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT 0x8E8F

#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT   0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT  0x83F1

#define GL_COMPRESSED_RED_RGTC1_EXT       0x8DBB
#define GL_COMPRESSED_SIGNED_RED_RGTC1_EXT 0x8DBC
#define GL_COMPRESSED_RED_GREEN_RGTC2_EXT 0x8DBD
#define GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT 0x8DBE

#define GL_COMPRESSED_RGBA_S3TC_DXT3_EXT  0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_EXT  0x83F3

#define GL_COMPRESSED_SRGB_S3TC_DXT1_EXT  0x8C4C
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT 0x8C4D
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT 0x8C4E
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT 0x8C4F

#define GL_TEXTURE_CUBE_MAP_ARRAY_EXT     0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT 0x900A
#define GL_SAMPLER_CUBE_MAP_ARRAY_EXT     0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT 0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT 0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT 0x900F
#define GL_IMAGE_CUBE_MAP_ARRAY_EXT       0x9054
#define GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT   0x905F
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT 0x906A

#define GL_TEXTURE_MAX_ANISOTROPY_EXT     0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT 0x84FF

#define GL_TEXTURE_REDUCTION_MODE_EXT     0x9366
#define GL_WEIGHTED_AVERAGE_EXT           0x9367


#define GL_TEXTURE_FORMAT_SRGB_OVERRIDE_EXT 0x8FBF

#define GL_MIRROR_CLAMP_TO_EDGE_EXT       0x8743

#define GL_R16_EXT                        0x822A
#define GL_RG16_EXT                       0x822C
#define GL_RGBA16_EXT                     0x805B
#define GL_RGB16_EXT                      0x8054
#define GL_RGB16_SNORM_EXT                0x8F9A


#define GL_RED_EXT                        0x1903
#define GL_RG_EXT                         0x8227
#define GL_R8_EXT                         0x8229
#define GL_RG8_EXT                        0x822B

#define GL_SR8_EXT                        0x8FBD

#define GL_SRG8_EXT                       0x8FBE

#define GL_TEXTURE_SRGB_DECODE_EXT        0x8A48
#define GL_DECODE_EXT                     0x8A49
#define GL_SKIP_DECODE_EXT                0x8A4A


#define GL_TEXTURE_IMMUTABLE_FORMAT_EXT   0x912F
#define GL_ALPHA8_EXT                     0x803C
#define GL_LUMINANCE8_EXT                 0x8040
#define GL_LUMINANCE8_ALPHA8_EXT          0x8045
#define GL_RGBA32F_EXT                    0x8814
#define GL_RGB32F_EXT                     0x8815
#define GL_ALPHA32F_EXT                   0x8816
#define GL_LUMINANCE32F_EXT               0x8818
#define GL_LUMINANCE_ALPHA32F_EXT         0x8819
#define GL_ALPHA16F_EXT                   0x881C
#define GL_LUMINANCE16F_EXT               0x881E
#define GL_LUMINANCE_ALPHA16F_EXT         0x881F
#define GL_R32F_EXT                       0x822E
#define GL_RG32F_EXT                      0x8230
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE1DEXTPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE2DEXTPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE3DEXTPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGE1DEXTPROC) (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGE2DEXTPROC) (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGE3DEXTPROC) (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);

#define GL_NUM_SURFACE_COMPRESSION_FIXED_RATES_EXT 0x8F6E
#define GL_SURFACE_COMPRESSION_FIXED_RATE_1BPC_EXT 0x96C4
#define GL_SURFACE_COMPRESSION_FIXED_RATE_2BPC_EXT 0x96C5
#define GL_SURFACE_COMPRESSION_FIXED_RATE_3BPC_EXT 0x96C6
#define GL_SURFACE_COMPRESSION_FIXED_RATE_4BPC_EXT 0x96C7
#define GL_SURFACE_COMPRESSION_FIXED_RATE_5BPC_EXT 0x96C8
#define GL_SURFACE_COMPRESSION_FIXED_RATE_6BPC_EXT 0x96C9
#define GL_SURFACE_COMPRESSION_FIXED_RATE_7BPC_EXT 0x96CA
#define GL_SURFACE_COMPRESSION_FIXED_RATE_8BPC_EXT 0x96CB
#define GL_SURFACE_COMPRESSION_FIXED_RATE_9BPC_EXT 0x96CC
#define GL_SURFACE_COMPRESSION_FIXED_RATE_10BPC_EXT 0x96CD
#define GL_SURFACE_COMPRESSION_FIXED_RATE_11BPC_EXT 0x96CE
#define GL_SURFACE_COMPRESSION_FIXED_RATE_12BPC_EXT 0x96CF
typedef void (GL_APIENTRYP PFNGLTEXSTORAGEATTRIBS2DEXTPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, const GLint* attrib_list);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGEATTRIBS3DEXTPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, const GLint* attrib_list);

#define GL_UNSIGNED_INT_2_10_10_10_REV_EXT 0x8368

#define GL_TEXTURE_VIEW_MIN_LEVEL_EXT     0x82DB
#define GL_TEXTURE_VIEW_NUM_LEVELS_EXT    0x82DC
#define GL_TEXTURE_VIEW_MIN_LAYER_EXT     0x82DD
#define GL_TEXTURE_VIEW_NUM_LAYERS_EXT    0x82DE
typedef void (GL_APIENTRYP PFNGLTEXTUREVIEWEXTPROC) (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);

#define GL_UNPACK_ROW_LENGTH_EXT          0x0CF2
#define GL_UNPACK_SKIP_ROWS_EXT           0x0CF3
#define GL_UNPACK_SKIP_PIXELS_EXT         0x0CF4

typedef GLboolean (GL_APIENTRYP PFNGLACQUIREKEYEDMUTEXWIN32EXTPROC) (GLuint memory, GLuint64 key, GLuint timeout);
typedef GLboolean (GL_APIENTRYP PFNGLRELEASEKEYEDMUTEXWIN32EXTPROC) (GLuint memory, GLuint64 key);

#define GL_INCLUSIVE_EXT                  0x8F10
#define GL_EXCLUSIVE_EXT                  0x8F11
#define GL_WINDOW_RECTANGLE_EXT           0x8F12
#define GL_WINDOW_RECTANGLE_MODE_EXT      0x8F13
#define GL_MAX_WINDOW_RECTANGLES_EXT      0x8F14
#define GL_NUM_WINDOW_RECTANGLES_EXT      0x8F15
typedef void (GL_APIENTRYP PFNGLWINDOWRECTANGLESEXTPROC) (GLenum mode, GLsizei count, const GLint *box);

#define GL_GCCSO_SHADER_BINARY_FJ         0x9260

typedef GLuint64 (GL_APIENTRYP PFNGLGETTEXTUREHANDLEIMGPROC) (GLuint texture);
typedef GLuint64 (GL_APIENTRYP PFNGLGETTEXTURESAMPLERHANDLEIMGPROC) (GLuint texture, GLuint sampler);
typedef void (GL_APIENTRYP PFNGLUNIFORMHANDLEUI64IMGPROC) (GLint location, GLuint64 value);
typedef void (GL_APIENTRYP PFNGLUNIFORMHANDLEUI64VIMGPROC) (GLint location, GLsizei count, const GLuint64 *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64IMGPROC) (GLuint program, GLint location, GLuint64 value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64VIMGPROC) (GLuint program, GLint location, GLsizei count, const GLuint64 *values);

#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_AND_DOWNSAMPLE_IMG 0x913C
#define GL_NUM_DOWNSAMPLE_SCALES_IMG      0x913D
#define GL_DOWNSAMPLE_SCALES_IMG          0x913E
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SCALE_IMG 0x913F
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DDOWNSAMPLEIMGPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint xscale, GLint yscale);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURELAYERDOWNSAMPLEIMGPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer, GLint xscale, GLint yscale);

#define GL_RENDERBUFFER_SAMPLES_IMG       0x9133
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG 0x9134
#define GL_MAX_SAMPLES_IMG                0x9135
#define GL_TEXTURE_SAMPLES_IMG            0x9136
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);

#define GL_SGX_PROGRAM_BINARY_IMG         0x9130

#define GL_BGRA_IMG                       0x80E1
#define GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG 0x8365

#define GL_SGX_BINARY_IMG                 0x8C0A

#define GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG 0x8C00
#define GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG 0x8C01
#define GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG 0x8C02
#define GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG 0x8C03

#define GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG 0x9137
#define GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG 0x9138

#define GL_CUBIC_IMG                      0x9139
#define GL_CUBIC_MIPMAP_NEAREST_IMG       0x913A
#define GL_CUBIC_MIPMAP_LINEAR_IMG        0x913B

#define GL_BLACKHOLE_RENDER_INTEL         0x83FC

#define GL_CONSERVATIVE_RASTERIZATION_INTEL 0x83FE

typedef void (GL_APIENTRYP PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC) (void);

#define GL_PERFQUERY_SINGLE_CONTEXT_INTEL 0x00000000
#define GL_PERFQUERY_GLOBAL_CONTEXT_INTEL 0x00000001
#define GL_PERFQUERY_WAIT_INTEL           0x83FB
#define GL_PERFQUERY_FLUSH_INTEL          0x83FA
#define GL_PERFQUERY_DONOT_FLUSH_INTEL    0x83F9
#define GL_PERFQUERY_COUNTER_EVENT_INTEL  0x94F0
#define GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL 0x94F1
#define GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL 0x94F2
#define GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL 0x94F3
#define GL_PERFQUERY_COUNTER_RAW_INTEL    0x94F4
#define GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL 0x94F5
#define GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL 0x94F8
#define GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL 0x94F9
#define GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL 0x94FA
#define GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL 0x94FB
#define GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL 0x94FC
#define GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL 0x94FD
#define GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL 0x94FE
#define GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL 0x94FF
#define GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL 0x9500
typedef void (GL_APIENTRYP PFNGLBEGINPERFQUERYINTELPROC) (GLuint queryHandle);
typedef void (GL_APIENTRYP PFNGLCREATEPERFQUERYINTELPROC) (GLuint queryId, GLuint *queryHandle);
typedef void (GL_APIENTRYP PFNGLDELETEPERFQUERYINTELPROC) (GLuint queryHandle);
typedef void (GL_APIENTRYP PFNGLENDPERFQUERYINTELPROC) (GLuint queryHandle);
typedef void (GL_APIENTRYP PFNGLGETFIRSTPERFQUERYIDINTELPROC) (GLuint *queryId);
typedef void (GL_APIENTRYP PFNGLGETNEXTPERFQUERYIDINTELPROC) (GLuint queryId, GLuint *nextQueryId);
typedef void (GL_APIENTRYP PFNGLGETPERFCOUNTERINFOINTELPROC) (GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar *counterName, GLuint counterDescLength, GLchar *counterDesc, GLuint *counterOffset, GLuint *counterDataSize, GLuint *counterTypeEnum, GLuint *counterDataTypeEnum, GLuint64 *rawCounterMaxValue);
typedef void (GL_APIENTRYP PFNGLGETPERFQUERYDATAINTELPROC) (GLuint queryHandle, GLuint flags, GLsizei dataSize, void *data, GLuint *bytesWritten);
typedef void (GL_APIENTRYP PFNGLGETPERFQUERYIDBYNAMEINTELPROC) (GLchar *queryName, GLuint *queryId);
typedef void (GL_APIENTRYP PFNGLGETPERFQUERYINFOINTELPROC) (GLuint queryId, GLuint queryNameLength, GLchar *queryName, GLuint *dataSize, GLuint *noCounters, GLuint *noInstances, GLuint *capsMask);

#define GL_BGR_EXT                        0x80E0

#define GL_FRAMEBUFFER_FLIP_X_MESA        0x8BBC

#define GL_FRAMEBUFFER_FLIP_Y_MESA        0x8BBB
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERPARAMETERIMESAPROC) (GLenum target, GLenum pname, GLint param);
typedef void (GL_APIENTRYP PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC) (GLenum target, GLenum pname, GLint *params);

#define GL_FRAMEBUFFER_SWAP_XY_MESA       0x8BBD

#define GL_PROGRAM_BINARY_FORMAT_MESA     0x875F

#define GL_SAMPLER_BINDING                0x8919
typedef void (GL_APIENTRYP PFNGLGENSAMPLERSPROC) (GLsizei count, GLuint *samplers);
typedef void (GL_APIENTRYP PFNGLDELETESAMPLERSPROC) (GLsizei count, const GLuint *samplers);
typedef GLboolean (GL_APIENTRYP PFNGLISSAMPLERPROC) (GLuint sampler);
typedef void (GL_APIENTRYP PFNGLBINDSAMPLERPROC) (GLuint unit, GLuint sampler);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIPROC) (GLuint sampler, GLenum pname, GLint param);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIVPROC) (GLuint sampler, GLenum pname, const GLint *param);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERFPROC) (GLuint sampler, GLenum pname, GLfloat param);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERFVPROC) (GLuint sampler, GLenum pname, const GLfloat *param);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIVPROC) (GLuint sampler, GLenum pname, GLint *params);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERFVPROC) (GLuint sampler, GLenum pname, GLfloat *params);



typedef GLuint64 (GL_APIENTRYP PFNGLGETTEXTUREHANDLENVPROC) (GLuint texture);
typedef GLuint64 (GL_APIENTRYP PFNGLGETTEXTURESAMPLERHANDLENVPROC) (GLuint texture, GLuint sampler);
typedef void (GL_APIENTRYP PFNGLMAKETEXTUREHANDLERESIDENTNVPROC) (GLuint64 handle);
typedef void (GL_APIENTRYP PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC) (GLuint64 handle);
typedef GLuint64 (GL_APIENTRYP PFNGLGETIMAGEHANDLENVPROC) (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
typedef void (GL_APIENTRYP PFNGLMAKEIMAGEHANDLERESIDENTNVPROC) (GLuint64 handle, GLenum access);
typedef void (GL_APIENTRYP PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC) (GLuint64 handle);
typedef void (GL_APIENTRYP PFNGLUNIFORMHANDLEUI64NVPROC) (GLint location, GLuint64 value);
typedef void (GL_APIENTRYP PFNGLUNIFORMHANDLEUI64VNVPROC) (GLint location, GLsizei count, const GLuint64 *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC) (GLuint program, GLint location, GLuint64 value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64 *values);
typedef GLboolean (GL_APIENTRYP PFNGLISTEXTUREHANDLERESIDENTNVPROC) (GLuint64 handle);
typedef GLboolean (GL_APIENTRYP PFNGLISIMAGEHANDLERESIDENTNVPROC) (GLuint64 handle);

#define GL_BLEND_OVERLAP_NV               0x9281
#define GL_BLEND_PREMULTIPLIED_SRC_NV     0x9280
#define GL_BLUE_NV                        0x1905
#define GL_COLORBURN_NV                   0x929A
#define GL_COLORDODGE_NV                  0x9299
#define GL_CONJOINT_NV                    0x9284
#define GL_CONTRAST_NV                    0x92A1
#define GL_DARKEN_NV                      0x9297
#define GL_DIFFERENCE_NV                  0x929E
#define GL_DISJOINT_NV                    0x9283
#define GL_DST_ATOP_NV                    0x928F
#define GL_DST_IN_NV                      0x928B
#define GL_DST_NV                         0x9287
#define GL_DST_OUT_NV                     0x928D
#define GL_DST_OVER_NV                    0x9289
#define GL_EXCLUSION_NV                   0x92A0
#define GL_GREEN_NV                       0x1904
#define GL_HARDLIGHT_NV                   0x929B
#define GL_HARDMIX_NV                     0x92A9
#define GL_HSL_COLOR_NV                   0x92AF
#define GL_HSL_HUE_NV                     0x92AD
#define GL_HSL_LUMINOSITY_NV              0x92B0
#define GL_HSL_SATURATION_NV              0x92AE
#define GL_INVERT_OVG_NV                  0x92B4
#define GL_INVERT_RGB_NV                  0x92A3
#define GL_LIGHTEN_NV                     0x9298
#define GL_LINEARBURN_NV                  0x92A5
#define GL_LINEARDODGE_NV                 0x92A4
#define GL_LINEARLIGHT_NV                 0x92A7
#define GL_MINUS_CLAMPED_NV               0x92B3
#define GL_MINUS_NV                       0x929F
#define GL_MULTIPLY_NV                    0x9294
#define GL_OVERLAY_NV                     0x9296
#define GL_PINLIGHT_NV                    0x92A8
#define GL_PLUS_CLAMPED_ALPHA_NV          0x92B2
#define GL_PLUS_CLAMPED_NV                0x92B1
#define GL_PLUS_DARKER_NV                 0x9292
#define GL_PLUS_NV                        0x9291
#define GL_RED_NV                         0x1903
#define GL_SCREEN_NV                      0x9295
#define GL_SOFTLIGHT_NV                   0x929C
#define GL_SRC_ATOP_NV                    0x928E
#define GL_SRC_IN_NV                      0x928A
#define GL_SRC_NV                         0x9286
#define GL_SRC_OUT_NV                     0x928C
#define GL_SRC_OVER_NV                    0x9288
#define GL_UNCORRELATED_NV                0x9282
#define GL_VIVIDLIGHT_NV                  0x92A6
#define GL_XOR_NV                         0x1506
typedef void (GL_APIENTRYP PFNGLBLENDPARAMETERINVPROC) (GLenum pname, GLint value);
typedef void (GL_APIENTRYP PFNGLBLENDBARRIERNVPROC) (void);

#define GL_BLEND_ADVANCED_COHERENT_NV     0x9285

#define GL_FACTOR_MIN_AMD                 0x901C
#define GL_FACTOR_MAX_AMD                 0x901D

#define GL_VIEWPORT_POSITION_W_SCALE_NV   0x937C
#define GL_VIEWPORT_POSITION_W_SCALE_X_COEFF_NV 0x937D
#define GL_VIEWPORT_POSITION_W_SCALE_Y_COEFF_NV 0x937E
typedef void (GL_APIENTRYP PFNGLVIEWPORTPOSITIONWSCALENVPROC) (GLuint index, GLfloat xcoeff, GLfloat ycoeff);


#define GL_QUERY_WAIT_NV                  0x8E13
#define GL_QUERY_NO_WAIT_NV               0x8E14
#define GL_QUERY_BY_REGION_WAIT_NV        0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT_NV     0x8E16
typedef void (GL_APIENTRYP PFNGLBEGINCONDITIONALRENDERNVPROC) (GLuint id, GLenum mode);
typedef void (GL_APIENTRYP PFNGLENDCONDITIONALRENDERNVPROC) (void);

#define GL_CONSERVATIVE_RASTERIZATION_NV  0x9346
#define GL_SUBPIXEL_PRECISION_BIAS_X_BITS_NV 0x9347
#define GL_SUBPIXEL_PRECISION_BIAS_Y_BITS_NV 0x9348
#define GL_MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV 0x9349
typedef void (GL_APIENTRYP PFNGLSUBPIXELPRECISIONBIASNVPROC) (GLuint xbits, GLuint ybits);

#define GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_NV 0x9550

#define GL_CONSERVATIVE_RASTER_MODE_NV    0x954D
#define GL_CONSERVATIVE_RASTER_MODE_POST_SNAP_NV 0x954E
#define GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_TRIANGLES_NV 0x954F
typedef void (GL_APIENTRYP PFNGLCONSERVATIVERASTERPARAMETERINVPROC) (GLenum pname, GLint param);

#define GL_COPY_READ_BUFFER_NV            0x8F36
#define GL_COPY_WRITE_BUFFER_NV           0x8F37
typedef void (GL_APIENTRYP PFNGLCOPYBUFFERSUBDATANVPROC) (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);

#define GL_COVERAGE_COMPONENT_NV          0x8ED0
#define GL_COVERAGE_COMPONENT4_NV         0x8ED1
#define GL_COVERAGE_ATTACHMENT_NV         0x8ED2
#define GL_COVERAGE_BUFFERS_NV            0x8ED3
#define GL_COVERAGE_SAMPLES_NV            0x8ED4
#define GL_COVERAGE_ALL_FRAGMENTS_NV      0x8ED5
#define GL_COVERAGE_EDGE_FRAGMENTS_NV     0x8ED6
#define GL_COVERAGE_AUTOMATIC_NV          0x8ED7
#define GL_COVERAGE_BUFFER_BIT_NV         0x00008000
typedef void (GL_APIENTRYP PFNGLCOVERAGEMASKNVPROC) (GLboolean mask);
typedef void (GL_APIENTRYP PFNGLCOVERAGEOPERATIONNVPROC) (GLenum operation);

#define GL_DEPTH_COMPONENT16_NONLINEAR_NV 0x8E2C

#define GL_MAX_DRAW_BUFFERS_NV            0x8824
#define GL_DRAW_BUFFER0_NV                0x8825
#define GL_DRAW_BUFFER1_NV                0x8826
#define GL_DRAW_BUFFER2_NV                0x8827
#define GL_DRAW_BUFFER3_NV                0x8828
#define GL_DRAW_BUFFER4_NV                0x8829
#define GL_DRAW_BUFFER5_NV                0x882A
#define GL_DRAW_BUFFER6_NV                0x882B
#define GL_DRAW_BUFFER7_NV                0x882C
#define GL_DRAW_BUFFER8_NV                0x882D
#define GL_DRAW_BUFFER9_NV                0x882E
#define GL_DRAW_BUFFER10_NV               0x882F
#define GL_DRAW_BUFFER11_NV               0x8830
#define GL_DRAW_BUFFER12_NV               0x8831
#define GL_DRAW_BUFFER13_NV               0x8832
#define GL_DRAW_BUFFER14_NV               0x8833
#define GL_DRAW_BUFFER15_NV               0x8834
#define GL_COLOR_ATTACHMENT0_NV           0x8CE0
#define GL_COLOR_ATTACHMENT1_NV           0x8CE1
#define GL_COLOR_ATTACHMENT2_NV           0x8CE2
#define GL_COLOR_ATTACHMENT3_NV           0x8CE3
#define GL_COLOR_ATTACHMENT4_NV           0x8CE4
#define GL_COLOR_ATTACHMENT5_NV           0x8CE5
#define GL_COLOR_ATTACHMENT6_NV           0x8CE6
#define GL_COLOR_ATTACHMENT7_NV           0x8CE7
#define GL_COLOR_ATTACHMENT8_NV           0x8CE8
#define GL_COLOR_ATTACHMENT9_NV           0x8CE9
#define GL_COLOR_ATTACHMENT10_NV          0x8CEA
#define GL_COLOR_ATTACHMENT11_NV          0x8CEB
#define GL_COLOR_ATTACHMENT12_NV          0x8CEC
#define GL_COLOR_ATTACHMENT13_NV          0x8CED
#define GL_COLOR_ATTACHMENT14_NV          0x8CEE
#define GL_COLOR_ATTACHMENT15_NV          0x8CEF
typedef void (GL_APIENTRYP PFNGLDRAWBUFFERSNVPROC) (GLsizei n, const GLenum *bufs);

typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDNVPROC) (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDNVPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);

typedef void (GL_APIENTRY  *GLVULKANPROCNV)(void);
typedef void (GL_APIENTRYP PFNGLDRAWVKIMAGENVPROC) (GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1);
typedef GLVULKANPROCNV (GL_APIENTRYP PFNGLGETVKPROCADDRNVPROC) (const GLchar *name);
typedef void (GL_APIENTRYP PFNGLWAITVKSEMAPHORENVPROC) (GLuint64 vkSemaphore);
typedef void (GL_APIENTRYP PFNGLSIGNALVKSEMAPHORENVPROC) (GLuint64 vkSemaphore);
typedef void (GL_APIENTRYP PFNGLSIGNALVKFENCENVPROC) (GLuint64 vkFence);


#define GL_MAX_COLOR_ATTACHMENTS_NV       0x8CDF

#define GL_ALL_COMPLETED_NV               0x84F2
#define GL_FENCE_STATUS_NV                0x84F3
#define GL_FENCE_CONDITION_NV             0x84F4
typedef void (GL_APIENTRYP PFNGLDELETEFENCESNVPROC) (GLsizei n, const GLuint *fences);
typedef void (GL_APIENTRYP PFNGLGENFENCESNVPROC) (GLsizei n, GLuint *fences);
typedef GLboolean (GL_APIENTRYP PFNGLISFENCENVPROC) (GLuint fence);
typedef GLboolean (GL_APIENTRYP PFNGLTESTFENCENVPROC) (GLuint fence);
typedef void (GL_APIENTRYP PFNGLGETFENCEIVNVPROC) (GLuint fence, GLenum pname, GLint *params);
typedef void (GL_APIENTRYP PFNGLFINISHFENCENVPROC) (GLuint fence);
typedef void (GL_APIENTRYP PFNGLSETFENCENVPROC) (GLuint fence, GLenum condition);

#define GL_FILL_RECTANGLE_NV              0x933C

#define GL_FRAGMENT_COVERAGE_TO_COLOR_NV  0x92DD
#define GL_FRAGMENT_COVERAGE_COLOR_NV     0x92DE
typedef void (GL_APIENTRYP PFNGLFRAGMENTCOVERAGECOLORNVPROC) (GLuint color);



#define GL_READ_FRAMEBUFFER_NV            0x8CA8
#define GL_DRAW_FRAMEBUFFER_NV            0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_NV    0x8CA6
#define GL_READ_FRAMEBUFFER_BINDING_NV    0x8CAA
typedef void (GL_APIENTRYP PFNGLBLITFRAMEBUFFERNVPROC) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

#define GL_COVERAGE_MODULATION_TABLE_NV   0x9331
#define GL_COLOR_SAMPLES_NV               0x8E20
#define GL_DEPTH_SAMPLES_NV               0x932D
#define GL_STENCIL_SAMPLES_NV             0x932E
#define GL_MIXED_DEPTH_SAMPLES_SUPPORTED_NV 0x932F
#define GL_MIXED_STENCIL_SAMPLES_SUPPORTED_NV 0x9330
#define GL_COVERAGE_MODULATION_NV         0x9332
#define GL_COVERAGE_MODULATION_TABLE_SIZE_NV 0x9333
typedef void (GL_APIENTRYP PFNGLCOVERAGEMODULATIONTABLENVPROC) (GLsizei n, const GLfloat *v);
typedef void (GL_APIENTRYP PFNGLGETCOVERAGEMODULATIONTABLENVPROC) (GLsizei bufSize, GLfloat *v);
typedef void (GL_APIENTRYP PFNGLCOVERAGEMODULATIONNVPROC) (GLenum components);

#define GL_RENDERBUFFER_SAMPLES_NV        0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_NV 0x8D56
#define GL_MAX_SAMPLES_NV                 0x8D57
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);



typedef khronos_int64_t GLint64EXT;
typedef khronos_uint64_t GLuint64EXT;
#define GL_INT64_NV                       0x140E
#define GL_UNSIGNED_INT64_NV              0x140F
#define GL_INT8_NV                        0x8FE0
#define GL_INT8_VEC2_NV                   0x8FE1
#define GL_INT8_VEC3_NV                   0x8FE2
#define GL_INT8_VEC4_NV                   0x8FE3
#define GL_INT16_NV                       0x8FE4
#define GL_INT16_VEC2_NV                  0x8FE5
#define GL_INT16_VEC3_NV                  0x8FE6
#define GL_INT16_VEC4_NV                  0x8FE7
#define GL_INT64_VEC2_NV                  0x8FE9
#define GL_INT64_VEC3_NV                  0x8FEA
#define GL_INT64_VEC4_NV                  0x8FEB
#define GL_UNSIGNED_INT8_NV               0x8FEC
#define GL_UNSIGNED_INT8_VEC2_NV          0x8FED
#define GL_UNSIGNED_INT8_VEC3_NV          0x8FEE
#define GL_UNSIGNED_INT8_VEC4_NV          0x8FEF
#define GL_UNSIGNED_INT16_NV              0x8FF0
#define GL_UNSIGNED_INT16_VEC2_NV         0x8FF1
#define GL_UNSIGNED_INT16_VEC3_NV         0x8FF2
#define GL_UNSIGNED_INT16_VEC4_NV         0x8FF3
#define GL_UNSIGNED_INT64_VEC2_NV         0x8FF5
#define GL_UNSIGNED_INT64_VEC3_NV         0x8FF6
#define GL_UNSIGNED_INT64_VEC4_NV         0x8FF7
#define GL_FLOAT16_NV                     0x8FF8
#define GL_FLOAT16_VEC2_NV                0x8FF9
#define GL_FLOAT16_VEC3_NV                0x8FFA
#define GL_FLOAT16_VEC4_NV                0x8FFB
#define GL_PATCHES                        0x000E
typedef void (GL_APIENTRYP PFNGLUNIFORM1I64NVPROC) (GLint location, GLint64EXT x);
typedef void (GL_APIENTRYP PFNGLUNIFORM2I64NVPROC) (GLint location, GLint64EXT x, GLint64EXT y);
typedef void (GL_APIENTRYP PFNGLUNIFORM3I64NVPROC) (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
typedef void (GL_APIENTRYP PFNGLUNIFORM4I64NVPROC) (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
typedef void (GL_APIENTRYP PFNGLUNIFORM1I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
typedef void (GL_APIENTRYP PFNGLUNIFORM2I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
typedef void (GL_APIENTRYP PFNGLUNIFORM3I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
typedef void (GL_APIENTRYP PFNGLUNIFORM4I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
typedef void (GL_APIENTRYP PFNGLUNIFORM1UI64NVPROC) (GLint location, GLuint64EXT x);
typedef void (GL_APIENTRYP PFNGLUNIFORM2UI64NVPROC) (GLint location, GLuint64EXT x, GLuint64EXT y);
typedef void (GL_APIENTRYP PFNGLUNIFORM3UI64NVPROC) (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
typedef void (GL_APIENTRYP PFNGLUNIFORM4UI64NVPROC) (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
typedef void (GL_APIENTRYP PFNGLUNIFORM1UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
typedef void (GL_APIENTRYP PFNGLUNIFORM2UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
typedef void (GL_APIENTRYP PFNGLUNIFORM3UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
typedef void (GL_APIENTRYP PFNGLUNIFORM4UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
typedef void (GL_APIENTRYP PFNGLGETUNIFORMI64VNVPROC) (GLuint program, GLint location, GLint64EXT *params);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1I64NVPROC) (GLuint program, GLint location, GLint64EXT x);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2I64NVPROC) (GLuint program, GLint location, GLint64EXT x, GLint64EXT y);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3I64NVPROC) (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4I64NVPROC) (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);


#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV 0x88FE
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBDIVISORNVPROC) (GLuint index, GLuint divisor);

#define GL_TEXTURE_2D_MULTISAMPLE         0x9100
#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY   0x9102
#define GL_MULTISAMPLES_NV                0x9371
#define GL_SUPERSAMPLE_SCALE_X_NV         0x9372
#define GL_SUPERSAMPLE_SCALE_Y_NV         0x9373
#define GL_CONFORMANT_NV                  0x9374
typedef void (GL_APIENTRYP PFNGLGETINTERNALFORMATSAMPLEIVNVPROC) (GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei count, GLint *params);

#define GL_ATTACHED_MEMORY_OBJECT_NV      0x95A4
#define GL_ATTACHED_MEMORY_OFFSET_NV      0x95A5
#define GL_MEMORY_ATTACHABLE_ALIGNMENT_NV 0x95A6
#define GL_MEMORY_ATTACHABLE_SIZE_NV      0x95A7
#define GL_MEMORY_ATTACHABLE_NV           0x95A8
#define GL_DETACHED_MEMORY_INCARNATION_NV 0x95A9
#define GL_DETACHED_TEXTURES_NV           0x95AA
#define GL_DETACHED_BUFFERS_NV            0x95AB
#define GL_MAX_DETACHED_TEXTURES_NV       0x95AC
#define GL_MAX_DETACHED_BUFFERS_NV        0x95AD
typedef void (GL_APIENTRYP PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC) (GLuint memory, GLenum pname, GLint first, GLsizei count, GLuint *params);
typedef void (GL_APIENTRYP PFNGLRESETMEMORYOBJECTPARAMETERNVPROC) (GLuint memory, GLenum pname);
typedef void (GL_APIENTRYP PFNGLTEXATTACHMEMORYNVPROC) (GLenum target, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLBUFFERATTACHMEMORYNVPROC) (GLenum target, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLTEXTUREATTACHMEMORYNVPROC) (GLuint texture, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLNAMEDBUFFERATTACHMEMORYNVPROC) (GLuint buffer, GLuint memory, GLuint64 offset);

typedef void (GL_APIENTRYP PFNGLBUFFERPAGECOMMITMENTMEMNVPROC) (GLenum target, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit);
typedef void (GL_APIENTRYP PFNGLTEXPAGECOMMITMENTMEMNVPROC) (GLenum target, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit);
typedef void (GL_APIENTRYP PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit);
typedef void (GL_APIENTRYP PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC) (GLuint texture, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit);

#define GL_MESH_SHADER_NV                 0x9559
#define GL_TASK_SHADER_NV                 0x955A
#define GL_MAX_MESH_UNIFORM_BLOCKS_NV     0x8E60
#define GL_MAX_MESH_TEXTURE_IMAGE_UNITS_NV 0x8E61
#define GL_MAX_MESH_IMAGE_UNIFORMS_NV     0x8E62
#define GL_MAX_MESH_UNIFORM_COMPONENTS_NV 0x8E63
#define GL_MAX_MESH_ATOMIC_COUNTER_BUFFERS_NV 0x8E64
#define GL_MAX_MESH_ATOMIC_COUNTERS_NV    0x8E65
#define GL_MAX_MESH_SHADER_STORAGE_BLOCKS_NV 0x8E66
#define GL_MAX_COMBINED_MESH_UNIFORM_COMPONENTS_NV 0x8E67
#define GL_MAX_TASK_UNIFORM_BLOCKS_NV     0x8E68
#define GL_MAX_TASK_TEXTURE_IMAGE_UNITS_NV 0x8E69
#define GL_MAX_TASK_IMAGE_UNIFORMS_NV     0x8E6A
#define GL_MAX_TASK_UNIFORM_COMPONENTS_NV 0x8E6B
#define GL_MAX_TASK_ATOMIC_COUNTER_BUFFERS_NV 0x8E6C
#define GL_MAX_TASK_ATOMIC_COUNTERS_NV    0x8E6D
#define GL_MAX_TASK_SHADER_STORAGE_BLOCKS_NV 0x8E6E
#define GL_MAX_COMBINED_TASK_UNIFORM_COMPONENTS_NV 0x8E6F
#define GL_MAX_MESH_WORK_GROUP_INVOCATIONS_NV 0x95A2
#define GL_MAX_TASK_WORK_GROUP_INVOCATIONS_NV 0x95A3
#define GL_MAX_MESH_TOTAL_MEMORY_SIZE_NV  0x9536
#define GL_MAX_TASK_TOTAL_MEMORY_SIZE_NV  0x9537
#define GL_MAX_MESH_OUTPUT_VERTICES_NV    0x9538
#define GL_MAX_MESH_OUTPUT_PRIMITIVES_NV  0x9539
#define GL_MAX_TASK_OUTPUT_COUNT_NV       0x953A
#define GL_MAX_DRAW_MESH_TASKS_COUNT_NV   0x953D
#define GL_MAX_MESH_VIEWS_NV              0x9557
#define GL_MESH_OUTPUT_PER_VERTEX_GRANULARITY_NV 0x92DF
#define GL_MESH_OUTPUT_PER_PRIMITIVE_GRANULARITY_NV 0x9543
#define GL_MAX_MESH_WORK_GROUP_SIZE_NV    0x953B
#define GL_MAX_TASK_WORK_GROUP_SIZE_NV    0x953C
#define GL_MESH_WORK_GROUP_SIZE_NV        0x953E
#define GL_TASK_WORK_GROUP_SIZE_NV        0x953F
#define GL_MESH_VERTICES_OUT_NV           0x9579
#define GL_MESH_PRIMITIVES_OUT_NV         0x957A
#define GL_MESH_OUTPUT_TYPE_NV            0x957B
#define GL_UNIFORM_BLOCK_REFERENCED_BY_MESH_SHADER_NV 0x959C
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TASK_SHADER_NV 0x959D
#define GL_REFERENCED_BY_MESH_SHADER_NV   0x95A0
#define GL_REFERENCED_BY_TASK_SHADER_NV   0x95A1
#define GL_MESH_SHADER_BIT_NV             0x00000040
#define GL_TASK_SHADER_BIT_NV             0x00000080
#define GL_MESH_SUBROUTINE_NV             0x957C
#define GL_TASK_SUBROUTINE_NV             0x957D
#define GL_MESH_SUBROUTINE_UNIFORM_NV     0x957E
#define GL_TASK_SUBROUTINE_UNIFORM_NV     0x957F
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_MESH_SHADER_NV 0x959E
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TASK_SHADER_NV 0x959F
typedef void (GL_APIENTRYP PFNGLDRAWMESHTASKSNVPROC) (GLuint first, GLuint count);
typedef void (GL_APIENTRYP PFNGLDRAWMESHTASKSINDIRECTNVPROC) (GLintptr indirect);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC) (GLintptr indirect, GLsizei drawcount, GLsizei stride);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC) (GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);

#define GL_FLOAT_MAT2x3_NV                0x8B65
#define GL_FLOAT_MAT2x4_NV                0x8B66
#define GL_FLOAT_MAT3x2_NV                0x8B67
#define GL_FLOAT_MAT3x4_NV                0x8B68
#define GL_FLOAT_MAT4x2_NV                0x8B69
#define GL_FLOAT_MAT4x3_NV                0x8B6A
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX2X3FVNVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX3X2FVNVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX2X4FVNVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX4X2FVNVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX3X4FVNVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX4X3FVNVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);

#define GL_PACK_ROW_LENGTH_NV             0x0D02
#define GL_PACK_SKIP_ROWS_NV              0x0D03
#define GL_PACK_SKIP_PIXELS_NV            0x0D04

typedef double GLdouble;
#define GL_PATH_FORMAT_SVG_NV             0x9070
#define GL_PATH_FORMAT_PS_NV              0x9071
#define GL_STANDARD_FONT_NAME_NV          0x9072
#define GL_SYSTEM_FONT_NAME_NV            0x9073
#define GL_FILE_NAME_NV                   0x9074
#define GL_PATH_STROKE_WIDTH_NV           0x9075
#define GL_PATH_END_CAPS_NV               0x9076
#define GL_PATH_INITIAL_END_CAP_NV        0x9077
#define GL_PATH_TERMINAL_END_CAP_NV       0x9078
#define GL_PATH_JOIN_STYLE_NV             0x9079
#define GL_PATH_MITER_LIMIT_NV            0x907A
#define GL_PATH_DASH_CAPS_NV              0x907B
#define GL_PATH_INITIAL_DASH_CAP_NV       0x907C
#define GL_PATH_TERMINAL_DASH_CAP_NV      0x907D
#define GL_PATH_DASH_OFFSET_NV            0x907E
#define GL_PATH_CLIENT_LENGTH_NV          0x907F
#define GL_PATH_FILL_MODE_NV              0x9080
#define GL_PATH_FILL_MASK_NV              0x9081
#define GL_PATH_FILL_COVER_MODE_NV        0x9082
#define GL_PATH_STROKE_COVER_MODE_NV      0x9083
#define GL_PATH_STROKE_MASK_NV            0x9084
#define GL_COUNT_UP_NV                    0x9088
#define GL_COUNT_DOWN_NV                  0x9089
#define GL_PATH_OBJECT_BOUNDING_BOX_NV    0x908A
#define GL_CONVEX_HULL_NV                 0x908B
#define GL_BOUNDING_BOX_NV                0x908D
#define GL_TRANSLATE_X_NV                 0x908E
#define GL_TRANSLATE_Y_NV                 0x908F
#define GL_TRANSLATE_2D_NV                0x9090
#define GL_TRANSLATE_3D_NV                0x9091
#define GL_AFFINE_2D_NV                   0x9092
#define GL_AFFINE_3D_NV                   0x9094
#define GL_TRANSPOSE_AFFINE_2D_NV         0x9096
#define GL_TRANSPOSE_AFFINE_3D_NV         0x9098
#define GL_UTF8_NV                        0x909A
#define GL_UTF16_NV                       0x909B
#define GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV 0x909C
#define GL_PATH_COMMAND_COUNT_NV          0x909D
#define GL_PATH_COORD_COUNT_NV            0x909E
#define GL_PATH_DASH_ARRAY_COUNT_NV       0x909F
#define GL_PATH_COMPUTED_LENGTH_NV        0x90A0
#define GL_PATH_FILL_BOUNDING_BOX_NV      0x90A1
#define GL_PATH_STROKE_BOUNDING_BOX_NV    0x90A2
#define GL_SQUARE_NV                      0x90A3
#define GL_ROUND_NV                       0x90A4
#define GL_TRIANGULAR_NV                  0x90A5
#define GL_BEVEL_NV                       0x90A6
#define GL_MITER_REVERT_NV                0x90A7
#define GL_MITER_TRUNCATE_NV              0x90A8
#define GL_SKIP_MISSING_GLYPH_NV          0x90A9
#define GL_USE_MISSING_GLYPH_NV           0x90AA
#define GL_PATH_ERROR_POSITION_NV         0x90AB
#define GL_ACCUM_ADJACENT_PAIRS_NV        0x90AD
#define GL_ADJACENT_PAIRS_NV              0x90AE
#define GL_FIRST_TO_REST_NV               0x90AF
#define GL_PATH_GEN_MODE_NV               0x90B0
#define GL_PATH_GEN_COEFF_NV              0x90B1
#define GL_PATH_GEN_COMPONENTS_NV         0x90B3
#define GL_PATH_STENCIL_FUNC_NV           0x90B7
#define GL_PATH_STENCIL_REF_NV            0x90B8
#define GL_PATH_STENCIL_VALUE_MASK_NV     0x90B9
#define GL_PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV 0x90BD
#define GL_PATH_STENCIL_DEPTH_OFFSET_UNITS_NV 0x90BE
#define GL_PATH_COVER_DEPTH_FUNC_NV       0x90BF
#define GL_PATH_DASH_OFFSET_RESET_NV      0x90B4
#define GL_MOVE_TO_RESETS_NV              0x90B5
#define GL_MOVE_TO_CONTINUES_NV           0x90B6
#define GL_CLOSE_PATH_NV                  0x00
#define GL_MOVE_TO_NV                     0x02
#define GL_RELATIVE_MOVE_TO_NV            0x03
#define GL_LINE_TO_NV                     0x04
#define GL_RELATIVE_LINE_TO_NV            0x05
#define GL_HORIZONTAL_LINE_TO_NV          0x06
#define GL_RELATIVE_HORIZONTAL_LINE_TO_NV 0x07
#define GL_VERTICAL_LINE_TO_NV            0x08
#define GL_RELATIVE_VERTICAL_LINE_TO_NV   0x09
#define GL_QUADRATIC_CURVE_TO_NV          0x0A
#define GL_RELATIVE_QUADRATIC_CURVE_TO_NV 0x0B
#define GL_CUBIC_CURVE_TO_NV              0x0C
#define GL_RELATIVE_CUBIC_CURVE_TO_NV     0x0D
#define GL_SMOOTH_QUADRATIC_CURVE_TO_NV   0x0E
#define GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV 0x0F
#define GL_SMOOTH_CUBIC_CURVE_TO_NV       0x10
#define GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV 0x11
#define GL_SMALL_CCW_ARC_TO_NV            0x12
#define GL_RELATIVE_SMALL_CCW_ARC_TO_NV   0x13
#define GL_SMALL_CW_ARC_TO_NV             0x14
#define GL_RELATIVE_SMALL_CW_ARC_TO_NV    0x15
#define GL_LARGE_CCW_ARC_TO_NV            0x16
#define GL_RELATIVE_LARGE_CCW_ARC_TO_NV   0x17
#define GL_LARGE_CW_ARC_TO_NV             0x18
#define GL_RELATIVE_LARGE_CW_ARC_TO_NV    0x19
#define GL_RESTART_PATH_NV                0xF0
#define GL_DUP_FIRST_CUBIC_CURVE_TO_NV    0xF2
#define GL_DUP_LAST_CUBIC_CURVE_TO_NV     0xF4
#define GL_RECT_NV                        0xF6
#define GL_CIRCULAR_CCW_ARC_TO_NV         0xF8
#define GL_CIRCULAR_CW_ARC_TO_NV          0xFA
#define GL_CIRCULAR_TANGENT_ARC_TO_NV     0xFC
#define GL_ARC_TO_NV                      0xFE
#define GL_RELATIVE_ARC_TO_NV             0xFF
#define GL_BOLD_BIT_NV                    0x01
#define GL_ITALIC_BIT_NV                  0x02
#define GL_GLYPH_WIDTH_BIT_NV             0x01
#define GL_GLYPH_HEIGHT_BIT_NV            0x02
#define GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV 0x04
#define GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV 0x08
#define GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV 0x10
#define GL_GLYPH_VERTICAL_BEARING_X_BIT_NV 0x20
#define GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV 0x40
#define GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV 0x80
#define GL_GLYPH_HAS_KERNING_BIT_NV       0x100
#define GL_FONT_X_MIN_BOUNDS_BIT_NV       0x00010000
#define GL_FONT_Y_MIN_BOUNDS_BIT_NV       0x00020000
#define GL_FONT_X_MAX_BOUNDS_BIT_NV       0x00040000
#define GL_FONT_Y_MAX_BOUNDS_BIT_NV       0x00080000
#define GL_FONT_UNITS_PER_EM_BIT_NV       0x00100000
#define GL_FONT_ASCENDER_BIT_NV           0x00200000
#define GL_FONT_DESCENDER_BIT_NV          0x00400000
#define GL_FONT_HEIGHT_BIT_NV             0x00800000
#define GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV  0x01000000
#define GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV 0x02000000
#define GL_FONT_UNDERLINE_POSITION_BIT_NV 0x04000000
#define GL_FONT_UNDERLINE_THICKNESS_BIT_NV 0x08000000
#define GL_FONT_HAS_KERNING_BIT_NV        0x10000000
#define GL_ROUNDED_RECT_NV                0xE8
#define GL_RELATIVE_ROUNDED_RECT_NV       0xE9
#define GL_ROUNDED_RECT2_NV               0xEA
#define GL_RELATIVE_ROUNDED_RECT2_NV      0xEB
#define GL_ROUNDED_RECT4_NV               0xEC
#define GL_RELATIVE_ROUNDED_RECT4_NV      0xED
#define GL_ROUNDED_RECT8_NV               0xEE
#define GL_RELATIVE_ROUNDED_RECT8_NV      0xEF
#define GL_RELATIVE_RECT_NV               0xF7
#define GL_FONT_GLYPHS_AVAILABLE_NV       0x9368
#define GL_FONT_TARGET_UNAVAILABLE_NV     0x9369
#define GL_FONT_UNAVAILABLE_NV            0x936A
#define GL_FONT_UNINTELLIGIBLE_NV         0x936B
#define GL_CONIC_CURVE_TO_NV              0x1A
#define GL_RELATIVE_CONIC_CURVE_TO_NV     0x1B
#define GL_FONT_NUM_GLYPH_INDICES_BIT_NV  0x20000000
#define GL_STANDARD_FONT_FORMAT_NV        0x936C
#define GL_PATH_PROJECTION_NV             0x1701
#define GL_PATH_MODELVIEW_NV              0x1700
#define GL_PATH_MODELVIEW_STACK_DEPTH_NV  0x0BA3
#define GL_PATH_MODELVIEW_MATRIX_NV       0x0BA6
#define GL_PATH_MAX_MODELVIEW_STACK_DEPTH_NV 0x0D36
#define GL_PATH_TRANSPOSE_MODELVIEW_MATRIX_NV 0x84E3
#define GL_PATH_PROJECTION_STACK_DEPTH_NV 0x0BA4
#define GL_PATH_PROJECTION_MATRIX_NV      0x0BA7
#define GL_PATH_MAX_PROJECTION_STACK_DEPTH_NV 0x0D38
#define GL_PATH_TRANSPOSE_PROJECTION_MATRIX_NV 0x84E4
#define GL_FRAGMENT_INPUT_NV              0x936D
typedef GLuint (GL_APIENTRYP PFNGLGENPATHSNVPROC) (GLsizei range);
typedef void (GL_APIENTRYP PFNGLDELETEPATHSNVPROC) (GLuint path, GLsizei range);
typedef GLboolean (GL_APIENTRYP PFNGLISPATHNVPROC) (GLuint path);
typedef void (GL_APIENTRYP PFNGLPATHCOMMANDSNVPROC) (GLuint path, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords);
typedef void (GL_APIENTRYP PFNGLPATHCOORDSNVPROC) (GLuint path, GLsizei numCoords, GLenum coordType, const void *coords);
typedef void (GL_APIENTRYP PFNGLPATHSUBCOMMANDSNVPROC) (GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords);
typedef void (GL_APIENTRYP PFNGLPATHSUBCOORDSNVPROC) (GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void *coords);
typedef void (GL_APIENTRYP PFNGLPATHSTRINGNVPROC) (GLuint path, GLenum format, GLsizei length, const void *pathString);
typedef void (GL_APIENTRYP PFNGLPATHGLYPHSNVPROC) (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void *charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
typedef void (GL_APIENTRYP PFNGLPATHGLYPHRANGENVPROC) (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
typedef void (GL_APIENTRYP PFNGLWEIGHTPATHSNVPROC) (GLuint resultPath, GLsizei numPaths, const GLuint *paths, const GLfloat *weights);
typedef void (GL_APIENTRYP PFNGLCOPYPATHNVPROC) (GLuint resultPath, GLuint srcPath);
typedef void (GL_APIENTRYP PFNGLINTERPOLATEPATHSNVPROC) (GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight);
typedef void (GL_APIENTRYP PFNGLTRANSFORMPATHNVPROC) (GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat *transformValues);
typedef void (GL_APIENTRYP PFNGLPATHPARAMETERIVNVPROC) (GLuint path, GLenum pname, const GLint *value);
typedef void (GL_APIENTRYP PFNGLPATHPARAMETERINVPROC) (GLuint path, GLenum pname, GLint value);
typedef void (GL_APIENTRYP PFNGLPATHPARAMETERFVNVPROC) (GLuint path, GLenum pname, const GLfloat *value);
typedef void (GL_APIENTRYP PFNGLPATHPARAMETERFNVPROC) (GLuint path, GLenum pname, GLfloat value);
typedef void (GL_APIENTRYP PFNGLPATHDASHARRAYNVPROC) (GLuint path, GLsizei dashCount, const GLfloat *dashArray);
typedef void (GL_APIENTRYP PFNGLPATHSTENCILFUNCNVPROC) (GLenum func, GLint ref, GLuint mask);
typedef void (GL_APIENTRYP PFNGLPATHSTENCILDEPTHOFFSETNVPROC) (GLfloat factor, GLfloat units);
typedef void (GL_APIENTRYP PFNGLSTENCILFILLPATHNVPROC) (GLuint path, GLenum fillMode, GLuint mask);
typedef void (GL_APIENTRYP PFNGLSTENCILSTROKEPATHNVPROC) (GLuint path, GLint reference, GLuint mask);
typedef void (GL_APIENTRYP PFNGLSTENCILFILLPATHINSTANCEDNVPROC) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat *transformValues);
typedef void (GL_APIENTRYP PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat *transformValues);
typedef void (GL_APIENTRYP PFNGLPATHCOVERDEPTHFUNCNVPROC) (GLenum func);
typedef void (GL_APIENTRYP PFNGLCOVERFILLPATHNVPROC) (GLuint path, GLenum coverMode);
typedef void (GL_APIENTRYP PFNGLCOVERSTROKEPATHNVPROC) (GLuint path, GLenum coverMode);
typedef void (GL_APIENTRYP PFNGLCOVERFILLPATHINSTANCEDNVPROC) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
typedef void (GL_APIENTRYP PFNGLCOVERSTROKEPATHINSTANCEDNVPROC) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
typedef void (GL_APIENTRYP PFNGLGETPATHPARAMETERIVNVPROC) (GLuint path, GLenum pname, GLint *value);
typedef void (GL_APIENTRYP PFNGLGETPATHPARAMETERFVNVPROC) (GLuint path, GLenum pname, GLfloat *value);
typedef void (GL_APIENTRYP PFNGLGETPATHCOMMANDSNVPROC) (GLuint path, GLubyte *commands);
typedef void (GL_APIENTRYP PFNGLGETPATHCOORDSNVPROC) (GLuint path, GLfloat *coords);
typedef void (GL_APIENTRYP PFNGLGETPATHDASHARRAYNVPROC) (GLuint path, GLfloat *dashArray);
typedef void (GL_APIENTRYP PFNGLGETPATHMETRICSNVPROC) (GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLsizei stride, GLfloat *metrics);
typedef void (GL_APIENTRYP PFNGLGETPATHMETRICRANGENVPROC) (GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat *metrics);
typedef void (GL_APIENTRYP PFNGLGETPATHSPACINGNVPROC) (GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat *returnedSpacing);
typedef GLboolean (GL_APIENTRYP PFNGLISPOINTINFILLPATHNVPROC) (GLuint path, GLuint mask, GLfloat x, GLfloat y);
typedef GLboolean (GL_APIENTRYP PFNGLISPOINTINSTROKEPATHNVPROC) (GLuint path, GLfloat x, GLfloat y);
typedef GLfloat (GL_APIENTRYP PFNGLGETPATHLENGTHNVPROC) (GLuint path, GLsizei startSegment, GLsizei numSegments);
typedef GLboolean (GL_APIENTRYP PFNGLPOINTALONGPATHNVPROC) (GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat *x, GLfloat *y, GLfloat *tangentX, GLfloat *tangentY);
typedef void (GL_APIENTRYP PFNGLMATRIXLOAD3X2FNVPROC) (GLenum matrixMode, const GLfloat *m);
typedef void (GL_APIENTRYP PFNGLMATRIXLOAD3X3FNVPROC) (GLenum matrixMode, const GLfloat *m);
typedef void (GL_APIENTRYP PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC) (GLenum matrixMode, const GLfloat *m);
typedef void (GL_APIENTRYP PFNGLMATRIXMULT3X2FNVPROC) (GLenum matrixMode, const GLfloat *m);
typedef void (GL_APIENTRYP PFNGLMATRIXMULT3X3FNVPROC) (GLenum matrixMode, const GLfloat *m);
typedef void (GL_APIENTRYP PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC) (GLenum matrixMode, const GLfloat *m);
typedef void (GL_APIENTRYP PFNGLSTENCILTHENCOVERFILLPATHNVPROC) (GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode);
typedef void (GL_APIENTRYP PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC) (GLuint path, GLint reference, GLuint mask, GLenum coverMode);
typedef void (GL_APIENTRYP PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
typedef void (GL_APIENTRYP PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
typedef GLenum (GL_APIENTRYP PFNGLPATHGLYPHINDEXRANGENVPROC) (GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint *baseAndCount);
typedef GLenum (GL_APIENTRYP PFNGLPATHGLYPHINDEXARRAYNVPROC) (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
typedef GLenum (GL_APIENTRYP PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC) (GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void *fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
typedef void (GL_APIENTRYP PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC) (GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat *coeffs);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMRESOURCEFVNVPROC) (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei count, GLsizei *length, GLfloat *params);
typedef void (GL_APIENTRYP PFNGLMATRIXFRUSTUMEXTPROC) (GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
typedef void (GL_APIENTRYP PFNGLMATRIXLOADIDENTITYEXTPROC) (GLenum mode);
typedef void (GL_APIENTRYP PFNGLMATRIXLOADTRANSPOSEFEXTPROC) (GLenum mode, const GLfloat *m);
typedef void (GL_APIENTRYP PFNGLMATRIXLOADTRANSPOSEDEXTPROC) (GLenum mode, const GLdouble *m);
typedef void (GL_APIENTRYP PFNGLMATRIXLOADFEXTPROC) (GLenum mode, const GLfloat *m);
typedef void (GL_APIENTRYP PFNGLMATRIXLOADDEXTPROC) (GLenum mode, const GLdouble *m);
typedef void (GL_APIENTRYP PFNGLMATRIXMULTTRANSPOSEFEXTPROC) (GLenum mode, const GLfloat *m);
typedef void (GL_APIENTRYP PFNGLMATRIXMULTTRANSPOSEDEXTPROC) (GLenum mode, const GLdouble *m);
typedef void (GL_APIENTRYP PFNGLMATRIXMULTFEXTPROC) (GLenum mode, const GLfloat *m);
typedef void (GL_APIENTRYP PFNGLMATRIXMULTDEXTPROC) (GLenum mode, const GLdouble *m);
typedef void (GL_APIENTRYP PFNGLMATRIXORTHOEXTPROC) (GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
typedef void (GL_APIENTRYP PFNGLMATRIXPOPEXTPROC) (GLenum mode);
typedef void (GL_APIENTRYP PFNGLMATRIXPUSHEXTPROC) (GLenum mode);
typedef void (GL_APIENTRYP PFNGLMATRIXROTATEFEXTPROC) (GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
typedef void (GL_APIENTRYP PFNGLMATRIXROTATEDEXTPROC) (GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
typedef void (GL_APIENTRYP PFNGLMATRIXSCALEFEXTPROC) (GLenum mode, GLfloat x, GLfloat y, GLfloat z);
typedef void (GL_APIENTRYP PFNGLMATRIXSCALEDEXTPROC) (GLenum mode, GLdouble x, GLdouble y, GLdouble z);
typedef void (GL_APIENTRYP PFNGLMATRIXTRANSLATEFEXTPROC) (GLenum mode, GLfloat x, GLfloat y, GLfloat z);
typedef void (GL_APIENTRYP PFNGLMATRIXTRANSLATEDEXTPROC) (GLenum mode, GLdouble x, GLdouble y, GLdouble z);

#define GL_SHARED_EDGE_NV                 0xC0

#define GL_PIXEL_PACK_BUFFER_NV           0x88EB
#define GL_PIXEL_UNPACK_BUFFER_NV         0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING_NV   0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING_NV 0x88EF

#define GL_POLYGON_MODE_NV                0x0B40
#define GL_POLYGON_OFFSET_POINT_NV        0x2A01
#define GL_POLYGON_OFFSET_LINE_NV         0x2A02
#define GL_POINT_NV                       0x1B00
#define GL_LINE_NV                        0x1B01
#define GL_FILL_NV                        0x1B02
typedef void (GL_APIENTRYP PFNGLPOLYGONMODENVPROC) (GLenum face, GLenum mode);

#define GL_SHADING_RATE_IMAGE_PER_PRIMITIVE_NV 0x95B1
#define GL_SHADING_RATE_IMAGE_PALETTE_COUNT_NV 0x95B2

#define GL_READ_BUFFER_NV                 0x0C02
typedef void (GL_APIENTRYP PFNGLREADBUFFERNVPROC) (GLenum mode);





#define GL_REPRESENTATIVE_FRAGMENT_TEST_NV 0x937F

#define GL_SLUMINANCE_NV                  0x8C46
#define GL_SLUMINANCE_ALPHA_NV            0x8C44
#define GL_SRGB8_NV                       0x8C41
#define GL_SLUMINANCE8_NV                 0x8C47
#define GL_SLUMINANCE8_ALPHA8_NV          0x8C45
#define GL_COMPRESSED_SRGB_S3TC_DXT1_NV   0x8C4C
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV 0x8C4D
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV 0x8C4E
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV 0x8C4F
#define GL_ETC1_SRGB8_NV                  0x88EE

#define GL_SAMPLE_LOCATION_SUBPIXEL_BITS_NV 0x933D
#define GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_NV 0x933E
#define GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_NV 0x933F
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_NV 0x9340
#define GL_SAMPLE_LOCATION_NV             0x8E50
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_NV 0x9341
#define GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_NV 0x9342
#define GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_NV 0x9343
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) (GLenum target, GLuint start, GLsizei count, const GLfloat *v);
typedef void (GL_APIENTRYP PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) (GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v);
typedef void (GL_APIENTRYP PFNGLRESOLVEDEPTHVALUESNVPROC) (void);


#define GL_SCISSOR_TEST_EXCLUSIVE_NV      0x9555
#define GL_SCISSOR_BOX_EXCLUSIVE_NV       0x9556
typedef void (GL_APIENTRYP PFNGLSCISSOREXCLUSIVENVPROC) (GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLSCISSOREXCLUSIVEARRAYVNVPROC) (GLuint first, GLsizei count, const GLint *v);



#define GL_SUBGROUP_FEATURE_PARTITIONED_BIT_NV 0x00000100


#define GL_SHADING_RATE_IMAGE_NV          0x9563
#define GL_SHADING_RATE_NO_INVOCATIONS_NV 0x9564
#define GL_SHADING_RATE_1_INVOCATION_PER_PIXEL_NV 0x9565
#define GL_SHADING_RATE_1_INVOCATION_PER_1X2_PIXELS_NV 0x9566
#define GL_SHADING_RATE_1_INVOCATION_PER_2X1_PIXELS_NV 0x9567
#define GL_SHADING_RATE_1_INVOCATION_PER_2X2_PIXELS_NV 0x9568
#define GL_SHADING_RATE_1_INVOCATION_PER_2X4_PIXELS_NV 0x9569
#define GL_SHADING_RATE_1_INVOCATION_PER_4X2_PIXELS_NV 0x956A
#define GL_SHADING_RATE_1_INVOCATION_PER_4X4_PIXELS_NV 0x956B
#define GL_SHADING_RATE_2_INVOCATIONS_PER_PIXEL_NV 0x956C
#define GL_SHADING_RATE_4_INVOCATIONS_PER_PIXEL_NV 0x956D
#define GL_SHADING_RATE_8_INVOCATIONS_PER_PIXEL_NV 0x956E
#define GL_SHADING_RATE_16_INVOCATIONS_PER_PIXEL_NV 0x956F
#define GL_SHADING_RATE_IMAGE_BINDING_NV  0x955B
#define GL_SHADING_RATE_IMAGE_TEXEL_WIDTH_NV 0x955C
#define GL_SHADING_RATE_IMAGE_TEXEL_HEIGHT_NV 0x955D
#define GL_SHADING_RATE_IMAGE_PALETTE_SIZE_NV 0x955E
#define GL_MAX_COARSE_FRAGMENT_SAMPLES_NV 0x955F
#define GL_SHADING_RATE_SAMPLE_ORDER_DEFAULT_NV 0x95AE
#define GL_SHADING_RATE_SAMPLE_ORDER_PIXEL_MAJOR_NV 0x95AF
#define GL_SHADING_RATE_SAMPLE_ORDER_SAMPLE_MAJOR_NV 0x95B0
typedef void (GL_APIENTRYP PFNGLBINDSHADINGRATEIMAGENVPROC) (GLuint texture);
typedef void (GL_APIENTRYP PFNGLGETSHADINGRATEIMAGEPALETTENVPROC) (GLuint viewport, GLuint entry, GLenum *rate);
typedef void (GL_APIENTRYP PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC) (GLenum rate, GLuint samples, GLuint index, GLint *location);
typedef void (GL_APIENTRYP PFNGLSHADINGRATEIMAGEBARRIERNVPROC) (GLboolean synchronize);
typedef void (GL_APIENTRYP PFNGLSHADINGRATEIMAGEPALETTENVPROC) (GLuint viewport, GLuint first, GLsizei count, const GLenum *rates);
typedef void (GL_APIENTRYP PFNGLSHADINGRATESAMPLEORDERNVPROC) (GLenum order);
typedef void (GL_APIENTRYP PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC) (GLenum rate, GLuint samples, const GLint *locations);

#define GL_SAMPLER_2D_ARRAY_SHADOW_NV     0x8DC4

#define GL_SAMPLER_CUBE_SHADOW_NV         0x8DC5


#define GL_TEXTURE_BORDER_COLOR_NV        0x1004
#define GL_CLAMP_TO_BORDER_NV             0x812D



#define GL_TIMELINE_SEMAPHORE_VALUE_NV    0x9595
#define GL_SEMAPHORE_TYPE_NV              0x95B3
#define GL_SEMAPHORE_TYPE_BINARY_NV       0x95B4
#define GL_SEMAPHORE_TYPE_TIMELINE_NV     0x95B5
#define GL_MAX_TIMELINE_SEMAPHORE_VALUE_DIFFERENCE_NV 0x95B6
typedef void (GL_APIENTRYP PFNGLCREATESEMAPHORESNVPROC) (GLsizei n, GLuint *semaphores);
typedef void (GL_APIENTRYP PFNGLSEMAPHOREPARAMETERIVNVPROC) (GLuint semaphore, GLenum pname, const GLint *params);
typedef void (GL_APIENTRYP PFNGLGETSEMAPHOREPARAMETERIVNVPROC) (GLuint semaphore, GLenum pname, GLint *params);

#define GL_MAX_VIEWPORTS_NV               0x825B
#define GL_VIEWPORT_SUBPIXEL_BITS_NV      0x825C
#define GL_VIEWPORT_BOUNDS_RANGE_NV       0x825D
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX_NV 0x825F
typedef void (GL_APIENTRYP PFNGLVIEWPORTARRAYVNVPROC) (GLuint first, GLsizei count, const GLfloat *v);
typedef void (GL_APIENTRYP PFNGLVIEWPORTINDEXEDFNVPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
typedef void (GL_APIENTRYP PFNGLVIEWPORTINDEXEDFVNVPROC) (GLuint index, const GLfloat *v);
typedef void (GL_APIENTRYP PFNGLSCISSORARRAYVNVPROC) (GLuint first, GLsizei count, const GLint *v);
typedef void (GL_APIENTRYP PFNGLSCISSORINDEXEDNVPROC) (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLSCISSORINDEXEDVNVPROC) (GLuint index, const GLint *v);
typedef void (GL_APIENTRYP PFNGLDEPTHRANGEARRAYFVNVPROC) (GLuint first, GLsizei count, const GLfloat *v);
typedef void (GL_APIENTRYP PFNGLDEPTHRANGEINDEXEDFNVPROC) (GLuint index, GLfloat n, GLfloat f);
typedef void (GL_APIENTRYP PFNGLGETFLOATI_VNVPROC) (GLenum target, GLuint index, GLfloat *data);
typedef void (GL_APIENTRYP PFNGLENABLEINVPROC) (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLDISABLEINVPROC) (GLenum target, GLuint index);
typedef GLboolean (GL_APIENTRYP PFNGLISENABLEDINVPROC) (GLenum target, GLuint index);


#define GL_VIEWPORT_SWIZZLE_POSITIVE_X_NV 0x9350
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_X_NV 0x9351
#define GL_VIEWPORT_SWIZZLE_POSITIVE_Y_NV 0x9352
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_Y_NV 0x9353
#define GL_VIEWPORT_SWIZZLE_POSITIVE_Z_NV 0x9354
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_Z_NV 0x9355
#define GL_VIEWPORT_SWIZZLE_POSITIVE_W_NV 0x9356
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_W_NV 0x9357
#define GL_VIEWPORT_SWIZZLE_X_NV          0x9358
#define GL_VIEWPORT_SWIZZLE_Y_NV          0x9359
#define GL_VIEWPORT_SWIZZLE_Z_NV          0x935A
#define GL_VIEWPORT_SWIZZLE_W_NV          0x935B
typedef void (GL_APIENTRYP PFNGLVIEWPORTSWIZZLENVPROC) (GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew);

#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR 0x9630
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR 0x9632
#define GL_MAX_VIEWS_OVR                  0x9631
#define GL_FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR 0x9633
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews);


typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTUREMULTISAMPLEMULTIVIEWOVRPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLsizei samples, GLint baseViewIndex, GLsizei numViews);


#define GL_ALPHA_TEST_QCOM                0x0BC0
#define GL_ALPHA_TEST_FUNC_QCOM           0x0BC1
#define GL_ALPHA_TEST_REF_QCOM            0x0BC2
typedef void (GL_APIENTRYP PFNGLALPHAFUNCQCOMPROC) (GLenum func, GLclampf ref);

#define GL_BINNING_CONTROL_HINT_QCOM      0x8FB0
#define GL_CPU_OPTIMIZED_QCOM             0x8FB1
#define GL_GPU_OPTIMIZED_QCOM             0x8FB2
#define GL_RENDER_DIRECT_TO_FRAMEBUFFER_QCOM 0x8FB3

typedef void (GL_APIENTRYP PFNGLGETDRIVERCONTROLSQCOMPROC) (GLint *num, GLsizei size, GLuint *driverControls);
typedef void (GL_APIENTRYP PFNGLGETDRIVERCONTROLSTRINGQCOMPROC) (GLuint driverControl, GLsizei bufSize, GLsizei *length, GLchar *driverControlString);
typedef void (GL_APIENTRYP PFNGLENABLEDRIVERCONTROLQCOMPROC) (GLuint driverControl);
typedef void (GL_APIENTRYP PFNGLDISABLEDRIVERCONTROLQCOMPROC) (GLuint driverControl);

#define GL_TEXTURE_WIDTH_QCOM             0x8BD2
#define GL_TEXTURE_HEIGHT_QCOM            0x8BD3
#define GL_TEXTURE_DEPTH_QCOM             0x8BD4
#define GL_TEXTURE_INTERNAL_FORMAT_QCOM   0x8BD5
#define GL_TEXTURE_FORMAT_QCOM            0x8BD6
#define GL_TEXTURE_TYPE_QCOM              0x8BD7
#define GL_TEXTURE_IMAGE_VALID_QCOM       0x8BD8
#define GL_TEXTURE_NUM_LEVELS_QCOM        0x8BD9
#define GL_TEXTURE_TARGET_QCOM            0x8BDA
#define GL_TEXTURE_OBJECT_VALID_QCOM      0x8BDB
#define GL_STATE_RESTORE                  0x8BDC
typedef void (GL_APIENTRYP PFNGLEXTGETTEXTURESQCOMPROC) (GLuint *textures, GLint maxTextures, GLint *numTextures);
typedef void (GL_APIENTRYP PFNGLEXTGETBUFFERSQCOMPROC) (GLuint *buffers, GLint maxBuffers, GLint *numBuffers);
typedef void (GL_APIENTRYP PFNGLEXTGETRENDERBUFFERSQCOMPROC) (GLuint *renderbuffers, GLint maxRenderbuffers, GLint *numRenderbuffers);
typedef void (GL_APIENTRYP PFNGLEXTGETFRAMEBUFFERSQCOMPROC) (GLuint *framebuffers, GLint maxFramebuffers, GLint *numFramebuffers);
typedef void (GL_APIENTRYP PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC) (GLuint texture, GLenum face, GLint level, GLenum pname, GLint *params);
typedef void (GL_APIENTRYP PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC) (GLenum target, GLenum pname, GLint param);
typedef void (GL_APIENTRYP PFNGLEXTGETTEXSUBIMAGEQCOMPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void *texels);
typedef void (GL_APIENTRYP PFNGLEXTGETBUFFERPOINTERVQCOMPROC) (GLenum target, void **params);

typedef void (GL_APIENTRYP PFNGLEXTGETSHADERSQCOMPROC) (GLuint *shaders, GLint maxShaders, GLint *numShaders);
typedef void (GL_APIENTRYP PFNGLEXTGETPROGRAMSQCOMPROC) (GLuint *programs, GLint maxPrograms, GLint *numPrograms);
typedef GLboolean (GL_APIENTRYP PFNGLEXTISPROGRAMBINARYQCOMPROC) (GLuint program);
typedef void (GL_APIENTRYP PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC) (GLuint program, GLenum shadertype, GLchar *source, GLint *length);

typedef void (GL_APIENTRYP PFNGLEXTRAPOLATETEX2DQCOMPROC) (GLuint src1, GLuint src2, GLuint output, GLfloat scaleFactor);

#define GL_FOVEATION_ENABLE_BIT_QCOM      0x00000001
#define GL_FOVEATION_SCALED_BIN_METHOD_BIT_QCOM 0x00000002
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERFOVEATIONCONFIGQCOMPROC) (GLuint framebuffer, GLuint numLayers, GLuint focalPointsPerLayer, GLuint requestedFeatures, GLuint *providedFeatures);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERFOVEATIONPARAMETERSQCOMPROC) (GLuint framebuffer, GLuint layer, GLuint focalPoint, GLfloat focalX, GLfloat focalY, GLfloat gainX, GLfloat gainY, GLfloat foveaArea);

#define GL_MOTION_ESTIMATION_SEARCH_BLOCK_X_QCOM 0x8C90
#define GL_MOTION_ESTIMATION_SEARCH_BLOCK_Y_QCOM 0x8C91
typedef void (GL_APIENTRYP PFNGLTEXESTIMATEMOTIONQCOMPROC) (GLuint ref, GLuint target, GLuint output);
typedef void (GL_APIENTRYP PFNGLTEXESTIMATEMOTIONREGIONSQCOMPROC) (GLuint ref, GLuint target, GLuint output, GLuint mask);

#define GL_PERFMON_GLOBAL_MODE_QCOM       0x8FA0



#define GL_FRAMEBUFFER_FETCH_NONCOHERENT_QCOM 0x96A2
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERFETCHBARRIERQCOMPROC) (void);


#define GL_SHADING_RATE_QCOM              0x96A4
#define GL_SHADING_RATE_PRESERVE_ASPECT_RATIO_QCOM 0x96A5
#define GL_SHADING_RATE_1X1_PIXELS_QCOM   0x96A6
#define GL_SHADING_RATE_1X2_PIXELS_QCOM   0x96A7
#define GL_SHADING_RATE_2X1_PIXELS_QCOM   0x96A8
#define GL_SHADING_RATE_2X2_PIXELS_QCOM   0x96A9
#define GL_SHADING_RATE_4X2_PIXELS_QCOM   0x96AC
#define GL_SHADING_RATE_4X4_PIXELS_QCOM   0x96AE
typedef void (GL_APIENTRYP PFNGLSHADINGRATEQCOMPROC) (GLenum rate);

#define GL_TEXTURE_FOVEATED_FEATURE_BITS_QCOM 0x8BFB
#define GL_TEXTURE_FOVEATED_MIN_PIXEL_DENSITY_QCOM 0x8BFC
#define GL_TEXTURE_FOVEATED_FEATURE_QUERY_QCOM 0x8BFD
#define GL_TEXTURE_FOVEATED_NUM_FOCAL_POINTS_QUERY_QCOM 0x8BFE
#define GL_FRAMEBUFFER_INCOMPLETE_FOVEATION_QCOM 0x8BFF
typedef void (GL_APIENTRYP PFNGLTEXTUREFOVEATIONPARAMETERSQCOMPROC) (GLuint texture, GLuint layer, GLuint focalPoint, GLfloat focalX, GLfloat focalY, GLfloat gainX, GLfloat gainY, GLfloat foveaArea);

#define GL_TEXTURE_FOVEATED_CUTOFF_DENSITY_QCOM 0x96A0

#define GL_FOVEATION_SUBSAMPLED_LAYOUT_METHOD_BIT_QCOM 0x00000004
#define GL_MAX_SHADER_SUBSAMPLED_IMAGE_UNITS_QCOM 0x8FA1

#define GL_TEXTURE_LOD_BIAS_QCOM          0x8C96

#define GL_COLOR_BUFFER_BIT0_QCOM         0x00000001
#define GL_COLOR_BUFFER_BIT1_QCOM         0x00000002
#define GL_COLOR_BUFFER_BIT2_QCOM         0x00000004
#define GL_COLOR_BUFFER_BIT3_QCOM         0x00000008
#define GL_COLOR_BUFFER_BIT4_QCOM         0x00000010
#define GL_COLOR_BUFFER_BIT5_QCOM         0x00000020
#define GL_COLOR_BUFFER_BIT6_QCOM         0x00000040
#define GL_COLOR_BUFFER_BIT7_QCOM         0x00000080
#define GL_DEPTH_BUFFER_BIT0_QCOM         0x00000100
#define GL_DEPTH_BUFFER_BIT1_QCOM         0x00000200
#define GL_DEPTH_BUFFER_BIT2_QCOM         0x00000400
#define GL_DEPTH_BUFFER_BIT3_QCOM         0x00000800
#define GL_DEPTH_BUFFER_BIT4_QCOM         0x00001000
#define GL_DEPTH_BUFFER_BIT5_QCOM         0x00002000
#define GL_DEPTH_BUFFER_BIT6_QCOM         0x00004000
#define GL_DEPTH_BUFFER_BIT7_QCOM         0x00008000
#define GL_STENCIL_BUFFER_BIT0_QCOM       0x00010000
#define GL_STENCIL_BUFFER_BIT1_QCOM       0x00020000
#define GL_STENCIL_BUFFER_BIT2_QCOM       0x00040000
#define GL_STENCIL_BUFFER_BIT3_QCOM       0x00080000
#define GL_STENCIL_BUFFER_BIT4_QCOM       0x00100000
#define GL_STENCIL_BUFFER_BIT5_QCOM       0x00200000
#define GL_STENCIL_BUFFER_BIT6_QCOM       0x00400000
#define GL_STENCIL_BUFFER_BIT7_QCOM       0x00800000
#define GL_MULTISAMPLE_BUFFER_BIT0_QCOM   0x01000000
#define GL_MULTISAMPLE_BUFFER_BIT1_QCOM   0x02000000
#define GL_MULTISAMPLE_BUFFER_BIT2_QCOM   0x04000000
#define GL_MULTISAMPLE_BUFFER_BIT3_QCOM   0x08000000
#define GL_MULTISAMPLE_BUFFER_BIT4_QCOM   0x10000000
#define GL_MULTISAMPLE_BUFFER_BIT5_QCOM   0x20000000
#define GL_MULTISAMPLE_BUFFER_BIT6_QCOM   0x40000000
#define GL_MULTISAMPLE_BUFFER_BIT7_QCOM   0x80000000
typedef void (GL_APIENTRYP PFNGLSTARTTILINGQCOMPROC) (GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask);
typedef void (GL_APIENTRYP PFNGLENDTILINGQCOMPROC) (GLbitfield preserveMask);

#define GL_WRITEONLY_RENDERING_QCOM       0x8823

#define GL_SHADER_BINARY_VIV              0x8FC4

#ifdef __cplusplus
}
#endif

#endif
