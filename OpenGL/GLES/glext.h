#ifndef __gles1_glext_h_
#define __gles1_glext_h_ 1

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
 * API: gles1
 * Profile: common
 * Versions considered: .*
 * Versions emitted: _nomatch_^
 * Default extensions included: gles1
 * Additional extensions included: _nomatch_^
 * Extensions removed: ^(GL_OES_read_format|GL_OES_compressed_paletted_texture|GL_OES_point_size_array|GL_OES_point_sprite)$
 */


typedef void *GLeglImageOES;
typedef void (GL_APIENTRYP PFNGLEGLIMAGETARGETTEXTURE2DOESPROC) (GLenum target, GLeglImageOES image);
typedef void (GL_APIENTRYP PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC) (GLenum target, GLeglImageOES image);

#define GL_TEXTURE_EXTERNAL_OES           0x8D65
#define GL_TEXTURE_BINDING_EXTERNAL_OES   0x8D67
#define GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES 0x8D68

#define GL_BLEND_EQUATION_RGB_OES         0x8009
#define GL_BLEND_EQUATION_ALPHA_OES       0x883D
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONSEPARATEOESPROC) (GLenum modeRGB, GLenum modeAlpha);

#define GL_BLEND_DST_RGB_OES              0x80C8
#define GL_BLEND_SRC_RGB_OES              0x80C9
#define GL_BLEND_DST_ALPHA_OES            0x80CA
#define GL_BLEND_SRC_ALPHA_OES            0x80CB
typedef void (GL_APIENTRYP PFNGLBLENDFUNCSEPARATEOESPROC) (GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);

#define GL_BLEND_EQUATION_OES             0x8009
#define GL_FUNC_ADD_OES                   0x8006
#define GL_FUNC_SUBTRACT_OES              0x800A
#define GL_FUNC_REVERSE_SUBTRACT_OES      0x800B
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONOESPROC) (GLenum mode);



#define GL_ETC1_RGB8_OES                  0x8D64

#define GL_DEPTH_COMPONENT24_OES          0x81A6

#define GL_DEPTH_COMPONENT32_OES          0x81A7

#define GL_TEXTURE_CROP_RECT_OES          0x8B9D
typedef void (GL_APIENTRYP PFNGLDRAWTEXSOESPROC) (GLshort x, GLshort y, GLshort z, GLshort width, GLshort height);
typedef void (GL_APIENTRYP PFNGLDRAWTEXIOESPROC) (GLint x, GLint y, GLint z, GLint width, GLint height);
typedef void (GL_APIENTRYP PFNGLDRAWTEXXOESPROC) (GLfixed x, GLfixed y, GLfixed z, GLfixed width, GLfixed height);
typedef void (GL_APIENTRYP PFNGLDRAWTEXSVOESPROC) (const GLshort *coords);
typedef void (GL_APIENTRYP PFNGLDRAWTEXIVOESPROC) (const GLint *coords);
typedef void (GL_APIENTRYP PFNGLDRAWTEXXVOESPROC) (const GLfixed *coords);
typedef void (GL_APIENTRYP PFNGLDRAWTEXFOESPROC) (GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height);
typedef void (GL_APIENTRYP PFNGLDRAWTEXFVOESPROC) (const GLfloat *coords);

#define GL_UNSIGNED_INT                   0x1405



#define GL_FIXED_OES                      0x140C
typedef void (GL_APIENTRYP PFNGLALPHAFUNCXOESPROC) (GLenum func, GLfixed ref);
typedef void (GL_APIENTRYP PFNGLCLEARCOLORXOESPROC) (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
typedef void (GL_APIENTRYP PFNGLCLEARDEPTHXOESPROC) (GLfixed depth);
typedef void (GL_APIENTRYP PFNGLCLIPPLANEXOESPROC) (GLenum plane, const GLfixed *equation);
typedef void (GL_APIENTRYP PFNGLCOLOR4XOESPROC) (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
typedef void (GL_APIENTRYP PFNGLDEPTHRANGEXOESPROC) (GLfixed n, GLfixed f);
typedef void (GL_APIENTRYP PFNGLFOGXOESPROC) (GLenum pname, GLfixed param);
typedef void (GL_APIENTRYP PFNGLFOGXVOESPROC) (GLenum pname, const GLfixed *param);
typedef void (GL_APIENTRYP PFNGLFRUSTUMXOESPROC) (GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
typedef void (GL_APIENTRYP PFNGLGETCLIPPLANEXOESPROC) (GLenum plane, GLfixed *equation);
typedef void (GL_APIENTRYP PFNGLGETFIXEDVOESPROC) (GLenum pname, GLfixed *params);
typedef void (GL_APIENTRYP PFNGLGETTEXENVXVOESPROC) (GLenum target, GLenum pname, GLfixed *params);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERXVOESPROC) (GLenum target, GLenum pname, GLfixed *params);
typedef void (GL_APIENTRYP PFNGLLIGHTMODELXOESPROC) (GLenum pname, GLfixed param);
typedef void (GL_APIENTRYP PFNGLLIGHTMODELXVOESPROC) (GLenum pname, const GLfixed *param);
typedef void (GL_APIENTRYP PFNGLLIGHTXOESPROC) (GLenum light, GLenum pname, GLfixed param);
typedef void (GL_APIENTRYP PFNGLLIGHTXVOESPROC) (GLenum light, GLenum pname, const GLfixed *params);
typedef void (GL_APIENTRYP PFNGLLINEWIDTHXOESPROC) (GLfixed width);
typedef void (GL_APIENTRYP PFNGLLOADMATRIXXOESPROC) (const GLfixed *m);
typedef void (GL_APIENTRYP PFNGLMATERIALXOESPROC) (GLenum face, GLenum pname, GLfixed param);
typedef void (GL_APIENTRYP PFNGLMATERIALXVOESPROC) (GLenum face, GLenum pname, const GLfixed *param);
typedef void (GL_APIENTRYP PFNGLMULTMATRIXXOESPROC) (const GLfixed *m);
typedef void (GL_APIENTRYP PFNGLMULTITEXCOORD4XOESPROC) (GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
typedef void (GL_APIENTRYP PFNGLNORMAL3XOESPROC) (GLfixed nx, GLfixed ny, GLfixed nz);
typedef void (GL_APIENTRYP PFNGLORTHOXOESPROC) (GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
typedef void (GL_APIENTRYP PFNGLPOINTPARAMETERXVOESPROC) (GLenum pname, const GLfixed *params);
typedef void (GL_APIENTRYP PFNGLPOINTSIZEXOESPROC) (GLfixed size);
typedef void (GL_APIENTRYP PFNGLPOLYGONOFFSETXOESPROC) (GLfixed factor, GLfixed units);
typedef void (GL_APIENTRYP PFNGLROTATEXOESPROC) (GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
typedef void (GL_APIENTRYP PFNGLSCALEXOESPROC) (GLfixed x, GLfixed y, GLfixed z);
typedef void (GL_APIENTRYP PFNGLTEXENVXOESPROC) (GLenum target, GLenum pname, GLfixed param);
typedef void (GL_APIENTRYP PFNGLTEXENVXVOESPROC) (GLenum target, GLenum pname, const GLfixed *params);
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERXOESPROC) (GLenum target, GLenum pname, GLfixed param);
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERXVOESPROC) (GLenum target, GLenum pname, const GLfixed *params);
typedef void (GL_APIENTRYP PFNGLTRANSLATEXOESPROC) (GLfixed x, GLfixed y, GLfixed z);
typedef void (GL_APIENTRYP PFNGLGETLIGHTXVOESPROC) (GLenum light, GLenum pname, GLfixed *params);
typedef void (GL_APIENTRYP PFNGLGETMATERIALXVOESPROC) (GLenum face, GLenum pname, GLfixed *params);
typedef void (GL_APIENTRYP PFNGLPOINTPARAMETERXOESPROC) (GLenum pname, GLfixed param);
typedef void (GL_APIENTRYP PFNGLSAMPLECOVERAGEXOESPROC) (GLclampx value, GLboolean invert);
typedef void (GL_APIENTRYP PFNGLGETTEXGENXVOESPROC) (GLenum coord, GLenum pname, GLfixed *params);
typedef void (GL_APIENTRYP PFNGLTEXGENXOESPROC) (GLenum coord, GLenum pname, GLfixed param);
typedef void (GL_APIENTRYP PFNGLTEXGENXVOESPROC) (GLenum coord, GLenum pname, const GLfixed *params);

#define GL_NONE_OES                       0
#define GL_FRAMEBUFFER_OES                0x8D40
#define GL_RENDERBUFFER_OES               0x8D41
#define GL_RGBA4_OES                      0x8056
#define GL_RGB5_A1_OES                    0x8057
#define GL_RGB565_OES                     0x8D62
#define GL_DEPTH_COMPONENT16_OES          0x81A5
#define GL_RENDERBUFFER_WIDTH_OES         0x8D42
#define GL_RENDERBUFFER_HEIGHT_OES        0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT_OES 0x8D44
#define GL_RENDERBUFFER_RED_SIZE_OES      0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE_OES    0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE_OES     0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE_OES    0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE_OES    0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE_OES  0x8D55
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_OES 0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_OES 0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_OES 0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_OES 0x8CD3
#define GL_COLOR_ATTACHMENT0_OES          0x8CE0
#define GL_DEPTH_ATTACHMENT_OES           0x8D00
#define GL_STENCIL_ATTACHMENT_OES         0x8D20
#define GL_FRAMEBUFFER_COMPLETE_OES       0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_OES 0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_OES 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_OES 0x8CD9
#define GL_FRAMEBUFFER_INCOMPLETE_FORMATS_OES 0x8CDA
#define GL_FRAMEBUFFER_UNSUPPORTED_OES    0x8CDD
#define GL_FRAMEBUFFER_BINDING_OES        0x8CA6
#define GL_RENDERBUFFER_BINDING_OES       0x8CA7
#define GL_MAX_RENDERBUFFER_SIZE_OES      0x84E8
#define GL_INVALID_FRAMEBUFFER_OPERATION_OES 0x0506
typedef GLboolean (GL_APIENTRYP PFNGLISRENDERBUFFEROESPROC) (GLuint renderbuffer);
typedef void (GL_APIENTRYP PFNGLBINDRENDERBUFFEROESPROC) (GLenum target, GLuint renderbuffer);
typedef void (GL_APIENTRYP PFNGLDELETERENDERBUFFERSOESPROC) (GLsizei n, const GLuint *renderbuffers);
typedef void (GL_APIENTRYP PFNGLGENRENDERBUFFERSOESPROC) (GLsizei n, GLuint *renderbuffers);
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEOESPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLGETRENDERBUFFERPARAMETERIVOESPROC) (GLenum target, GLenum pname, GLint *params);
typedef GLboolean (GL_APIENTRYP PFNGLISFRAMEBUFFEROESPROC) (GLuint framebuffer);
typedef void (GL_APIENTRYP PFNGLBINDFRAMEBUFFEROESPROC) (GLenum target, GLuint framebuffer);
typedef void (GL_APIENTRYP PFNGLDELETEFRAMEBUFFERSOESPROC) (GLsizei n, const GLuint *framebuffers);
typedef void (GL_APIENTRYP PFNGLGENFRAMEBUFFERSOESPROC) (GLsizei n, GLuint *framebuffers);
typedef GLenum (GL_APIENTRYP PFNGLCHECKFRAMEBUFFERSTATUSOESPROC) (GLenum target);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERRENDERBUFFEROESPROC) (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DOESPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (GL_APIENTRYP PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVOESPROC) (GLenum target, GLenum attachment, GLenum pname, GLint *params);
typedef void (GL_APIENTRYP PFNGLGENERATEMIPMAPOESPROC) (GLenum target);

#define GL_WRITE_ONLY_OES                 0x88B9
#define GL_BUFFER_ACCESS_OES              0x88BB
#define GL_BUFFER_MAPPED_OES              0x88BC
#define GL_BUFFER_MAP_POINTER_OES         0x88BD
typedef void *(GL_APIENTRYP PFNGLMAPBUFFEROESPROC) (GLenum target, GLenum access);
typedef GLboolean (GL_APIENTRYP PFNGLUNMAPBUFFEROESPROC) (GLenum target);
typedef void (GL_APIENTRYP PFNGLGETBUFFERPOINTERVOESPROC) (GLenum target, GLenum pname, void **params);

#define GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES 0x898D
#define GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES 0x898E
#define GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES 0x898F

#define GL_MAX_VERTEX_UNITS_OES           0x86A4
#define GL_MAX_PALETTE_MATRICES_OES       0x8842
#define GL_MATRIX_PALETTE_OES             0x8840
#define GL_MATRIX_INDEX_ARRAY_OES         0x8844
#define GL_WEIGHT_ARRAY_OES               0x86AD
#define GL_CURRENT_PALETTE_MATRIX_OES     0x8843
#define GL_MATRIX_INDEX_ARRAY_SIZE_OES    0x8846
#define GL_MATRIX_INDEX_ARRAY_TYPE_OES    0x8847
#define GL_MATRIX_INDEX_ARRAY_STRIDE_OES  0x8848
#define GL_MATRIX_INDEX_ARRAY_POINTER_OES 0x8849
#define GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES 0x8B9E
#define GL_WEIGHT_ARRAY_SIZE_OES          0x86AB
#define GL_WEIGHT_ARRAY_TYPE_OES          0x86A9
#define GL_WEIGHT_ARRAY_STRIDE_OES        0x86AA
#define GL_WEIGHT_ARRAY_POINTER_OES       0x86AC
#define GL_WEIGHT_ARRAY_BUFFER_BINDING_OES 0x889E
typedef void (GL_APIENTRYP PFNGLCURRENTPALETTEMATRIXOESPROC) (GLuint matrixpaletteindex);
typedef void (GL_APIENTRYP PFNGLLOADPALETTEFROMMODELVIEWMATRIXOESPROC) (void);
typedef void (GL_APIENTRYP PFNGLMATRIXINDEXPOINTEROESPROC) (GLint size, GLenum type, GLsizei stride, const void *pointer);
typedef void (GL_APIENTRYP PFNGLWEIGHTPOINTEROESPROC) (GLint size, GLenum type, GLsizei stride, const void *pointer);

#define GL_DEPTH_STENCIL_OES              0x84F9
#define GL_UNSIGNED_INT_24_8_OES          0x84FA
#define GL_DEPTH24_STENCIL8_OES           0x88F0

typedef GLbitfield (GL_APIENTRYP PFNGLQUERYMATRIXXOESPROC) (GLfixed *mantissa, GLint *exponent);

#define GL_ALPHA8_OES                     0x803C
#define GL_LUMINANCE4_ALPHA4_OES          0x8043
#define GL_LUMINANCE8_ALPHA8_OES          0x8045
#define GL_LUMINANCE8_OES                 0x8040
#define GL_RGB8_OES                       0x8051
#define GL_RGBA8_OES                      0x8058
#define GL_RGB10_EXT                      0x8052
#define GL_RGB10_A2_EXT                   0x8059


typedef void (GL_APIENTRYP PFNGLCLEARDEPTHFOESPROC) (GLclampf depth);
typedef void (GL_APIENTRYP PFNGLCLIPPLANEFOESPROC) (GLenum plane, const GLfloat *equation);
typedef void (GL_APIENTRYP PFNGLDEPTHRANGEFOESPROC) (GLclampf n, GLclampf f);
typedef void (GL_APIENTRYP PFNGLFRUSTUMFOESPROC) (GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
typedef void (GL_APIENTRYP PFNGLGETCLIPPLANEFOESPROC) (GLenum plane, GLfloat *equation);
typedef void (GL_APIENTRYP PFNGLORTHOFOESPROC) (GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);

#define GL_STENCIL_INDEX1_OES             0x8D46

#define GL_STENCIL_INDEX4_OES             0x8D47

#define GL_STENCIL_INDEX8_OES             0x8D48

#define GL_INCR_WRAP_OES                  0x8507
#define GL_DECR_WRAP_OES                  0x8508

#define GL_FRAMEBUFFER_UNDEFINED_OES      0x8219

#define GL_NORMAL_MAP_OES                 0x8511
#define GL_REFLECTION_MAP_OES             0x8512
#define GL_TEXTURE_CUBE_MAP_OES           0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP_OES   0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_OES 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_OES 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_OES 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_OES 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_OES 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_OES 0x851A
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_OES  0x851C
#define GL_TEXTURE_GEN_MODE_OES           0x2500
#define GL_TEXTURE_GEN_STR_OES            0x8D60
typedef void (GL_APIENTRYP PFNGLTEXGENFOESPROC) (GLenum coord, GLenum pname, GLfloat param);
typedef void (GL_APIENTRYP PFNGLTEXGENFVOESPROC) (GLenum coord, GLenum pname, const GLfloat *params);
typedef void (GL_APIENTRYP PFNGLTEXGENIOESPROC) (GLenum coord, GLenum pname, GLint param);
typedef void (GL_APIENTRYP PFNGLTEXGENIVOESPROC) (GLenum coord, GLenum pname, const GLint *params);
typedef void (GL_APIENTRYP PFNGLGETTEXGENFVOESPROC) (GLenum coord, GLenum pname, GLfloat *params);
typedef void (GL_APIENTRYP PFNGLGETTEXGENIVOESPROC) (GLenum coord, GLenum pname, GLint *params);


#define GL_MIRRORED_REPEAT_OES            0x8370


#define GL_VERTEX_ARRAY_BINDING_OES       0x85B5
typedef void (GL_APIENTRYP PFNGLBINDVERTEXARRAYOESPROC) (GLuint array);
typedef void (GL_APIENTRYP PFNGLDELETEVERTEXARRAYSOESPROC) (GLsizei n, const GLuint *arrays);
typedef void (GL_APIENTRYP PFNGLGENVERTEXARRAYSOESPROC) (GLsizei n, GLuint *arrays);
typedef GLboolean (GL_APIENTRYP PFNGLISVERTEXARRAYOESPROC) (GLuint array);

#define GL_3DC_X_AMD                      0x87F9
#define GL_3DC_XY_AMD                     0x87FA

#define GL_ATC_RGB_AMD                    0x8C92
#define GL_ATC_RGBA_EXPLICIT_ALPHA_AMD    0x8C93
#define GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD 0x87EE

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

typedef struct __GLsync *GLsync;
typedef khronos_uint64_t GLuint64;
typedef khronos_int64_t GLint64;
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


#define GL_MIN_EXT                        0x8007
#define GL_MAX_EXT                        0x8008

typedef char GLchar;
typedef void (GL_APIENTRYP PFNGLINSERTEVENTMARKEREXTPROC) (GLsizei length, const GLchar *marker);
typedef void (GL_APIENTRYP PFNGLPUSHGROUPMARKEREXTPROC) (GLsizei length, const GLchar *marker);
typedef void (GL_APIENTRYP PFNGLPOPGROUPMARKEREXTPROC) (void);

#define GL_COLOR_EXT                      0x1800
#define GL_DEPTH_EXT                      0x1801
#define GL_STENCIL_EXT                    0x1802
typedef void (GL_APIENTRYP PFNGLDISCARDFRAMEBUFFEREXTPROC) (GLenum target, GLsizei numAttachments, const GLenum *attachments);

#define GL_MAP_READ_BIT_EXT               0x0001
#define GL_MAP_WRITE_BIT_EXT              0x0002
#define GL_MAP_INVALIDATE_RANGE_BIT_EXT   0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT_EXT  0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT_EXT     0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT_EXT     0x0020
typedef void *(GL_APIENTRYP PFNGLMAPBUFFERRANGEEXTPROC) (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (GL_APIENTRYP PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC) (GLenum target, GLintptr offset, GLsizeiptr length);

typedef void (GL_APIENTRYP PFNGLMULTIDRAWARRAYSEXTPROC) (GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWELEMENTSEXTPROC) (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount);

#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT 0x8D6C
#define GL_RENDERBUFFER_SAMPLES_EXT       0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT 0x8D56
#define GL_MAX_SAMPLES_EXT                0x8D57
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);

#define GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT 0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT 0x8366

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

#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT   0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT  0x83F1

#define GL_TEXTURE_MAX_ANISOTROPY_EXT     0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT 0x84FF


#define GL_MAX_TEXTURE_LOD_BIAS_EXT       0x84FD
#define GL_TEXTURE_FILTER_CONTROL_EXT     0x8500
#define GL_TEXTURE_LOD_BIAS_EXT           0x8501

#define GL_TEXTURE_IMMUTABLE_FORMAT_EXT   0x912F
#define GL_ALPHA8_EXT                     0x803C
#define GL_LUMINANCE8_EXT                 0x8040
#define GL_LUMINANCE8_ALPHA8_EXT          0x8045
#define GL_RGBA32F_EXT                    0x8814
#define GL_RGB32F_EXT                     0x8815
#define GL_ALPHA32F_EXT                   0x8816
#define GL_LUMINANCE32F_EXT               0x8818
#define GL_LUMINANCE_ALPHA32F_EXT         0x8819
#define GL_RGBA16F_EXT                    0x881A
#define GL_RGB16F_EXT                     0x881B
#define GL_ALPHA16F_EXT                   0x881C
#define GL_LUMINANCE16F_EXT               0x881E
#define GL_LUMINANCE_ALPHA16F_EXT         0x881F
#define GL_R8_EXT                         0x8229
#define GL_RG8_EXT                        0x822B
#define GL_R32F_EXT                       0x822E
#define GL_RG32F_EXT                      0x8230
#define GL_R16F_EXT                       0x822D
#define GL_RG16F_EXT                      0x822F
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE1DEXTPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE2DEXTPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE3DEXTPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGE1DEXTPROC) (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGE2DEXTPROC) (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGE3DEXTPROC) (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);

#define GL_RENDERBUFFER_SAMPLES_IMG       0x9133
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG 0x9134
#define GL_MAX_SAMPLES_IMG                0x9135
#define GL_TEXTURE_SAMPLES_IMG            0x9136
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);

#define GL_BGRA_IMG                       0x80E1
#define GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG 0x8365

#define GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG 0x8C00
#define GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG 0x8C01
#define GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG 0x8C02
#define GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG 0x8C03

#define GL_MODULATE_COLOR_IMG             0x8C04
#define GL_RECIP_ADD_SIGNED_ALPHA_IMG     0x8C05
#define GL_TEXTURE_ALPHA_MODULATE_IMG     0x8C06
#define GL_FACTOR_ALPHA_MODULATE_IMG      0x8C07
#define GL_FRAGMENT_ALPHA_MODULATE_IMG    0x8C08
#define GL_ADD_BLEND_IMG                  0x8C09
#define GL_DOT3_RGBA_IMG                  0x86AF

#define GL_CLIP_PLANE0_IMG                0x3000
#define GL_CLIP_PLANE1_IMG                0x3001
#define GL_CLIP_PLANE2_IMG                0x3002
#define GL_CLIP_PLANE3_IMG                0x3003
#define GL_CLIP_PLANE4_IMG                0x3004
#define GL_CLIP_PLANE5_IMG                0x3005
#define GL_MAX_CLIP_PLANES_IMG            0x0D32
typedef void (GL_APIENTRYP PFNGLCLIPPLANEFIMGPROC) (GLenum p, const GLfloat *eqn);
typedef void (GL_APIENTRYP PFNGLCLIPPLANEXIMGPROC) (GLenum p, const GLfixed *eqn);

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

#define GL_PERFMON_GLOBAL_MODE_QCOM       0x8FA0

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

#ifdef __cplusplus
}
#endif

#endif
