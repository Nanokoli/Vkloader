#pragma once
#include "../PhiLoader.hpp"
#include <GLES/gl.h>
#include <GLES/glext.h>
typedef void(GL_APIENTRY *PFN_glAlphaFunc)(GLenum func, GLfloat ref);
typedef void(GL_APIENTRY *PFN_glClearColor)(GLfloat red, GLfloat green,
                                            GLfloat blue, GLfloat alpha);
typedef void(GL_APIENTRY *PFN_glClearDepthf)(GLfloat d);
typedef void(GL_APIENTRY *PFN_glClipPlanef)(GLenum p, const GLfloat *eqn);
typedef void(GL_APIENTRY *PFN_glColor4f)(GLfloat red, GLfloat green,
                                         GLfloat blue, GLfloat alpha);
typedef void(GL_APIENTRY *PFN_glDepthRangef)(GLfloat n, GLfloat f);
typedef void(GL_APIENTRY *PFN_glFogf)(GLenum pname, GLfloat param);
typedef void(GL_APIENTRY *PFN_glFogfv)(GLenum pname, const GLfloat *params);
typedef void(GL_APIENTRY *PFN_glFrustumf)(GLfloat l, GLfloat r, GLfloat b,
                                          GLfloat t, GLfloat n, GLfloat f);
typedef void(GL_APIENTRY *PFN_glGetClipPlanef)(GLenum plane, GLfloat *equation);
typedef void(GL_APIENTRY *PFN_glGetFloatv)(GLenum pname, GLfloat *data);
typedef void(GL_APIENTRY *PFN_glGetLightfv)(GLenum light, GLenum pname,
                                            GLfloat *params);
typedef void(GL_APIENTRY *PFN_glGetMaterialfv)(GLenum face, GLenum pname,
                                               GLfloat *params);
typedef void(GL_APIENTRY *PFN_glGetTexEnvfv)(GLenum target, GLenum pname,
                                             GLfloat *params);
typedef void(GL_APIENTRY *PFN_glGetTexParameterfv)(GLenum target, GLenum pname,
                                                   GLfloat *params);
typedef void(GL_APIENTRY *PFN_glLightModelf)(GLenum pname, GLfloat param);
typedef void(GL_APIENTRY *PFN_glLightModelfv)(GLenum pname,
                                              const GLfloat *params);
typedef void(GL_APIENTRY *PFN_glLightf)(GLenum light, GLenum pname,
                                        GLfloat param);
typedef void(GL_APIENTRY *PFN_glLightfv)(GLenum light, GLenum pname,
                                         const GLfloat *params);
typedef void(GL_APIENTRY *PFN_glLineWidth)(GLfloat width);
typedef void(GL_APIENTRY *PFN_glLoadMatrixf)(const GLfloat *m);
typedef void(GL_APIENTRY *PFN_glMaterialf)(GLenum face, GLenum pname,
                                           GLfloat param);
typedef void(GL_APIENTRY *PFN_glMaterialfv)(GLenum face, GLenum pname,
                                            const GLfloat *params);
typedef void(GL_APIENTRY *PFN_glMultMatrixf)(const GLfloat *m);
typedef void(GL_APIENTRY *PFN_glMultiTexCoord4f)(GLenum target, GLfloat s,
                                                 GLfloat t, GLfloat r,
                                                 GLfloat q);
typedef void(GL_APIENTRY *PFN_glNormal3f)(GLfloat nx, GLfloat ny, GLfloat nz);
typedef void(GL_APIENTRY *PFN_glOrthof)(GLfloat l, GLfloat r, GLfloat b,
                                        GLfloat t, GLfloat n, GLfloat f);
typedef void(GL_APIENTRY *PFN_glPointParameterf)(GLenum pname, GLfloat param);
typedef void(GL_APIENTRY *PFN_glPointParameterfv)(GLenum pname,
                                                  const GLfloat *params);
typedef void(GL_APIENTRY *PFN_glPointSize)(GLfloat size);
typedef void(GL_APIENTRY *PFN_glPolygonOffset)(GLfloat factor, GLfloat units);
typedef void(GL_APIENTRY *PFN_glRotatef)(GLfloat angle, GLfloat x, GLfloat y,
                                         GLfloat z);
typedef void(GL_APIENTRY *PFN_glScalef)(GLfloat x, GLfloat y, GLfloat z);
typedef void(GL_APIENTRY *PFN_glTexEnvf)(GLenum target, GLenum pname,
                                         GLfloat param);
typedef void(GL_APIENTRY *PFN_glTexEnvfv)(GLenum target, GLenum pname,
                                          const GLfloat *params);
typedef void(GL_APIENTRY *PFN_glTexParameterf)(GLenum target, GLenum pname,
                                               GLfloat param);
typedef void(GL_APIENTRY *PFN_glTexParameterfv)(GLenum target, GLenum pname,
                                                const GLfloat *params);
typedef void(GL_APIENTRY *PFN_glTranslatef)(GLfloat x, GLfloat y, GLfloat z);
typedef void(GL_APIENTRY *PFN_glActiveTexture)(GLenum texture);
typedef void(GL_APIENTRY *PFN_glAlphaFuncx)(GLenum func, GLfixed ref);
typedef void(GL_APIENTRY *PFN_glBindBuffer)(GLenum target, GLuint buffer);
typedef void(GL_APIENTRY *PFN_glBindTexture)(GLenum target, GLuint texture);
typedef void(GL_APIENTRY *PFN_glBlendFunc)(GLenum sfactor, GLenum dfactor);
typedef void(GL_APIENTRY *PFN_glBufferData)(GLenum target, GLsizeiptr size,
                                            const void *data, GLenum usage);
typedef void(GL_APIENTRY *PFN_glBufferSubData)(GLenum target, GLintptr offset,
                                               GLsizeiptr size,
                                               const void *data);
typedef void(GL_APIENTRY *PFN_glClear)(GLbitfield mask);
typedef void(GL_APIENTRY *PFN_glClearColorx)(GLfixed red, GLfixed green,
                                             GLfixed blue, GLfixed alpha);
typedef void(GL_APIENTRY *PFN_glClearDepthx)(GLfixed depth);
typedef void(GL_APIENTRY *PFN_glClearStencil)(GLint s);
typedef void(GL_APIENTRY *PFN_glClientActiveTexture)(GLenum texture);
typedef void(GL_APIENTRY *PFN_glClipPlanex)(GLenum plane,
                                            const GLfixed *equation);
typedef void(GL_APIENTRY *PFN_glColor4ub)(GLubyte red, GLubyte green,
                                          GLubyte blue, GLubyte alpha);
typedef void(GL_APIENTRY *PFN_glColor4x)(GLfixed red, GLfixed green,
                                         GLfixed blue, GLfixed alpha);
typedef void(GL_APIENTRY *PFN_glColorMask)(GLboolean red, GLboolean green,
                                           GLboolean blue, GLboolean alpha);
typedef void(GL_APIENTRY *PFN_glColorPointer)(GLint size, GLenum type,
                                              GLsizei stride,
                                              const void *pointer);
typedef void(GL_APIENTRY *PFN_glCompressedTexImage2D)(
    GLenum target, GLint level, GLenum internalformat, GLsizei width,
    GLsizei height, GLint border, GLsizei imageSize, const void *data);
typedef void(GL_APIENTRY *PFN_glCompressedTexSubImage2D)(
    GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width,
    GLsizei height, GLenum format, GLsizei imageSize, const void *data);
typedef void(GL_APIENTRY *PFN_glCopyTexImage2D)(GLenum target, GLint level,
                                                GLenum internalformat, GLint x,
                                                GLint y, GLsizei width,
                                                GLsizei height, GLint border);
typedef void(GL_APIENTRY *PFN_glCopyTexSubImage2D)(GLenum target, GLint level,
                                                   GLint xoffset, GLint yoffset,
                                                   GLint x, GLint y,
                                                   GLsizei width,
                                                   GLsizei height);
typedef void(GL_APIENTRY *PFN_glCullFace)(GLenum mode);
typedef void(GL_APIENTRY *PFN_glDeleteBuffers)(GLsizei n,
                                               const GLuint *buffers);
typedef void(GL_APIENTRY *PFN_glDeleteTextures)(GLsizei n,
                                                const GLuint *textures);
typedef void(GL_APIENTRY *PFN_glDepthFunc)(GLenum func);
typedef void(GL_APIENTRY *PFN_glDepthMask)(GLboolean flag);
typedef void(GL_APIENTRY *PFN_glDepthRangex)(GLfixed n, GLfixed f);
typedef void(GL_APIENTRY *PFN_glDisable)(GLenum cap);
typedef void(GL_APIENTRY *PFN_glDisableClientState)(GLenum array);
typedef void(GL_APIENTRY *PFN_glDrawArrays)(GLenum mode, GLint first,
                                            GLsizei count);
typedef void(GL_APIENTRY *PFN_glDrawElements)(GLenum mode, GLsizei count,
                                              GLenum type, const void *indices);
typedef void(GL_APIENTRY *PFN_glEnable)(GLenum cap);
typedef void(GL_APIENTRY *PFN_glEnableClientState)(GLenum array);
typedef void(GL_APIENTRY *PFN_glFinish)(void);
typedef void(GL_APIENTRY *PFN_glFlush)(void);
typedef void(GL_APIENTRY *PFN_glFogx)(GLenum pname, GLfixed param);
typedef void(GL_APIENTRY *PFN_glFogxv)(GLenum pname, const GLfixed *param);
typedef void(GL_APIENTRY *PFN_glFrontFace)(GLenum mode);
typedef void(GL_APIENTRY *PFN_glFrustumx)(GLfixed l, GLfixed r, GLfixed b,
                                          GLfixed t, GLfixed n, GLfixed f);
typedef void(GL_APIENTRY *PFN_glGetBooleanv)(GLenum pname, GLboolean *data);
typedef void(GL_APIENTRY *PFN_glGetBufferParameteriv)(GLenum target,
                                                      GLenum pname,
                                                      GLint *params);
typedef void(GL_APIENTRY *PFN_glGetClipPlanex)(GLenum plane, GLfixed *equation);
typedef void(GL_APIENTRY *PFN_glGenBuffers)(GLsizei n, GLuint *buffers);
typedef void(GL_APIENTRY *PFN_glGenTextures)(GLsizei n, GLuint *textures);
typedef GLenum(GL_APIENTRY *PFN_glGetError)(void);
typedef void(GL_APIENTRY *PFN_glGetFixedv)(GLenum pname, GLfixed *params);
typedef void(GL_APIENTRY *PFN_glGetIntegerv)(GLenum pname, GLint *data);
typedef void(GL_APIENTRY *PFN_glGetLightxv)(GLenum light, GLenum pname,
                                            GLfixed *params);
typedef void(GL_APIENTRY *PFN_glGetMaterialxv)(GLenum face, GLenum pname,
                                               GLfixed *params);
typedef void(GL_APIENTRY *PFN_glGetPointerv)(GLenum pname, void **params);
typedef const GLubyte *(GL_APIENTRY *PFN_glGetString)(GLenum name);
typedef void(GL_APIENTRY *PFN_glGetTexEnviv)(GLenum target, GLenum pname,
                                             GLint *params);
typedef void(GL_APIENTRY *PFN_glGetTexEnvxv)(GLenum target, GLenum pname,
                                             GLfixed *params);
typedef void(GL_APIENTRY *PFN_glGetTexParameteriv)(GLenum target, GLenum pname,
                                                   GLint *params);
typedef void(GL_APIENTRY *PFN_glGetTexParameterxv)(GLenum target, GLenum pname,
                                                   GLfixed *params);
typedef void(GL_APIENTRY *PFN_glHint)(GLenum target, GLenum mode);
typedef GLboolean(GL_APIENTRY *PFN_glIsBuffer)(GLuint buffer);
typedef GLboolean(GL_APIENTRY *PFN_glIsEnabled)(GLenum cap);
typedef GLboolean(GL_APIENTRY *PFN_glIsTexture)(GLuint texture);
typedef void(GL_APIENTRY *PFN_glLightModelx)(GLenum pname, GLfixed param);
typedef void(GL_APIENTRY *PFN_glLightModelxv)(GLenum pname,
                                              const GLfixed *param);
typedef void(GL_APIENTRY *PFN_glLightx)(GLenum light, GLenum pname,
                                        GLfixed param);
typedef void(GL_APIENTRY *PFN_glLightxv)(GLenum light, GLenum pname,
                                         const GLfixed *params);
typedef void(GL_APIENTRY *PFN_glLineWidthx)(GLfixed width);
typedef void(GL_APIENTRY *PFN_glLoadIdentity)(void);
typedef void(GL_APIENTRY *PFN_glLoadMatrixx)(const GLfixed *m);
typedef void(GL_APIENTRY *PFN_glLogicOp)(GLenum opcode);
typedef void(GL_APIENTRY *PFN_glMaterialx)(GLenum face, GLenum pname,
                                           GLfixed param);
typedef void(GL_APIENTRY *PFN_glMaterialxv)(GLenum face, GLenum pname,
                                            const GLfixed *param);
typedef void(GL_APIENTRY *PFN_glMatrixMode)(GLenum mode);
typedef void(GL_APIENTRY *PFN_glMultMatrixx)(const GLfixed *m);
typedef void(GL_APIENTRY *PFN_glMultiTexCoord4x)(GLenum texture, GLfixed s,
                                                 GLfixed t, GLfixed r,
                                                 GLfixed q);
typedef void(GL_APIENTRY *PFN_glNormal3x)(GLfixed nx, GLfixed ny, GLfixed nz);
typedef void(GL_APIENTRY *PFN_glNormalPointer)(GLenum type, GLsizei stride,
                                               const void *pointer);
typedef void(GL_APIENTRY *PFN_glOrthox)(GLfixed l, GLfixed r, GLfixed b,
                                        GLfixed t, GLfixed n, GLfixed f);
typedef void(GL_APIENTRY *PFN_glPixelStorei)(GLenum pname, GLint param);
typedef void(GL_APIENTRY *PFN_glPointParameterx)(GLenum pname, GLfixed param);
typedef void(GL_APIENTRY *PFN_glPointParameterxv)(GLenum pname,
                                                  const GLfixed *params);
typedef void(GL_APIENTRY *PFN_glPointSizex)(GLfixed size);
typedef void(GL_APIENTRY *PFN_glPolygonOffsetx)(GLfixed factor, GLfixed units);
typedef void(GL_APIENTRY *PFN_glPopMatrix)(void);
typedef void(GL_APIENTRY *PFN_glPushMatrix)(void);
typedef void(GL_APIENTRY *PFN_glReadPixels)(GLint x, GLint y, GLsizei width,
                                            GLsizei height, GLenum format,
                                            GLenum type, void *pixels);
typedef void(GL_APIENTRY *PFN_glRotatex)(GLfixed angle, GLfixed x, GLfixed y,
                                         GLfixed z);
typedef void(GL_APIENTRY *PFN_glSampleCoverage)(GLfloat value,
                                                GLboolean invert);
typedef void(GL_APIENTRY *PFN_glSampleCoveragex)(GLclampx value,
                                                 GLboolean invert);
typedef void(GL_APIENTRY *PFN_glScalex)(GLfixed x, GLfixed y, GLfixed z);
typedef void(GL_APIENTRY *PFN_glScissor)(GLint x, GLint y, GLsizei width,
                                         GLsizei height);
typedef void(GL_APIENTRY *PFN_glShadeModel)(GLenum mode);
typedef void(GL_APIENTRY *PFN_glStencilFunc)(GLenum func, GLint ref,
                                             GLuint mask);
typedef void(GL_APIENTRY *PFN_glStencilMask)(GLuint mask);
typedef void(GL_APIENTRY *PFN_glStencilOp)(GLenum fail, GLenum zfail,
                                           GLenum zpass);
typedef void(GL_APIENTRY *PFN_glTexCoordPointer)(GLint size, GLenum type,
                                                 GLsizei stride,
                                                 const void *pointer);
typedef void(GL_APIENTRY *PFN_glTexEnvi)(GLenum target, GLenum pname,
                                         GLint param);
typedef void(GL_APIENTRY *PFN_glTexEnvx)(GLenum target, GLenum pname,
                                         GLfixed param);
typedef void(GL_APIENTRY *PFN_glTexEnviv)(GLenum target, GLenum pname,
                                          const GLint *params);
typedef void(GL_APIENTRY *PFN_glTexEnvxv)(GLenum target, GLenum pname,
                                          const GLfixed *params);
typedef void(GL_APIENTRY *PFN_glTexImage2D)(GLenum target, GLint level,
                                            GLint internalformat, GLsizei width,
                                            GLsizei height, GLint border,
                                            GLenum format, GLenum type,
                                            const void *pixels);
typedef void(GL_APIENTRY *PFN_glTexParameteri)(GLenum target, GLenum pname,
                                               GLint param);
typedef void(GL_APIENTRY *PFN_glTexParameterx)(GLenum target, GLenum pname,
                                               GLfixed param);
typedef void(GL_APIENTRY *PFN_glTexParameteriv)(GLenum target, GLenum pname,
                                                const GLint *params);
typedef void(GL_APIENTRY *PFN_glTexParameterxv)(GLenum target, GLenum pname,
                                                const GLfixed *params);
typedef void(GL_APIENTRY *PFN_glTexSubImage2D)(GLenum target, GLint level,
                                               GLint xoffset, GLint yoffset,
                                               GLsizei width, GLsizei height,
                                               GLenum format, GLenum type,
                                               const void *pixels);
typedef void(GL_APIENTRY *PFN_glTranslatex)(GLfixed x, GLfixed y, GLfixed z);
typedef void(GL_APIENTRY *PFN_glVertexPointer)(GLint size, GLenum type,
                                               GLsizei stride,
                                               const void *pointer);
typedef void(GL_APIENTRY *PFN_glViewport)(GLint x, GLint y, GLsizei width,
                                          GLsizei height);
typedef void(GL_APIENTRY *PFN_glPointSizePointerOES)(GLenum type,
                                                     GLsizei stride,
                                                     const void *pointer);
typedef void(GL_APIENTRY *PFN_glEGLImageTargetTexture2DOES)(
    GLenum target, GLeglImageOES image);
typedef void(GL_APIENTRY *PFN_glEGLImageTargetRenderbufferStorageOES)(
    GLenum target, GLeglImageOES image);
typedef void(GL_APIENTRY *PFN_glBlendEquationSeparateOES)(GLenum modeRGB,
                                                          GLenum modeAlpha);
typedef void(GL_APIENTRY *PFN_glBlendFuncSeparateOES)(GLenum srcRGB,
                                                      GLenum dstRGB,
                                                      GLenum srcAlpha,
                                                      GLenum dstAlpha);
typedef void(GL_APIENTRY *PFN_glBlendEquationOES)(GLenum mode);
typedef void(GL_APIENTRY *PFN_glDrawTexsOES)(GLshort x, GLshort y, GLshort z,
                                             GLshort width, GLshort height);
typedef void(GL_APIENTRY *PFN_glDrawTexiOES)(GLint x, GLint y, GLint z,
                                             GLint width, GLint height);
typedef void(GL_APIENTRY *PFN_glDrawTexxOES)(GLfixed x, GLfixed y, GLfixed z,
                                             GLfixed width, GLfixed height);
typedef void(GL_APIENTRY *PFN_glDrawTexsvOES)(const GLshort *coords);
typedef void(GL_APIENTRY *PFN_glDrawTexivOES)(const GLint *coords);
typedef void(GL_APIENTRY *PFN_glDrawTexxvOES)(const GLfixed *coords);
typedef void(GL_APIENTRY *PFN_glDrawTexfOES)(GLfloat x, GLfloat y, GLfloat z,
                                             GLfloat width, GLfloat height);
typedef void(GL_APIENTRY *PFN_glDrawTexfvOES)(const GLfloat *coords);
typedef void(GL_APIENTRY *PFN_glAlphaFuncxOES)(GLenum func, GLfixed ref);
typedef void(GL_APIENTRY *PFN_glClearColorxOES)(GLfixed red, GLfixed green,
                                                GLfixed blue, GLfixed alpha);
typedef void(GL_APIENTRY *PFN_glClearDepthxOES)(GLfixed depth);
typedef void(GL_APIENTRY *PFN_glClipPlanexOES)(GLenum plane,
                                               const GLfixed *equation);
typedef void(GL_APIENTRY *PFN_glColor4xOES)(GLfixed red, GLfixed green,
                                            GLfixed blue, GLfixed alpha);
typedef void(GL_APIENTRY *PFN_glDepthRangexOES)(GLfixed n, GLfixed f);
typedef void(GL_APIENTRY *PFN_glFogxOES)(GLenum pname, GLfixed param);
typedef void(GL_APIENTRY *PFN_glFogxvOES)(GLenum pname, const GLfixed *param);
typedef void(GL_APIENTRY *PFN_glFrustumxOES)(GLfixed l, GLfixed r, GLfixed b,
                                             GLfixed t, GLfixed n, GLfixed f);
typedef void(GL_APIENTRY *PFN_glGetClipPlanexOES)(GLenum plane,
                                                  GLfixed *equation);
typedef void(GL_APIENTRY *PFN_glGetFixedvOES)(GLenum pname, GLfixed *params);
typedef void(GL_APIENTRY *PFN_glGetTexEnvxvOES)(GLenum target, GLenum pname,
                                                GLfixed *params);
typedef void(GL_APIENTRY *PFN_glGetTexParameterxvOES)(GLenum target,
                                                      GLenum pname,
                                                      GLfixed *params);
typedef void(GL_APIENTRY *PFN_glLightModelxOES)(GLenum pname, GLfixed param);
typedef void(GL_APIENTRY *PFN_glLightModelxvOES)(GLenum pname,
                                                 const GLfixed *param);
typedef void(GL_APIENTRY *PFN_glLightxOES)(GLenum light, GLenum pname,
                                           GLfixed param);
typedef void(GL_APIENTRY *PFN_glLightxvOES)(GLenum light, GLenum pname,
                                            const GLfixed *params);
typedef void(GL_APIENTRY *PFN_glLineWidthxOES)(GLfixed width);
typedef void(GL_APIENTRY *PFN_glLoadMatrixxOES)(const GLfixed *m);
typedef void(GL_APIENTRY *PFN_glMaterialxOES)(GLenum face, GLenum pname,
                                              GLfixed param);
typedef void(GL_APIENTRY *PFN_glMaterialxvOES)(GLenum face, GLenum pname,
                                               const GLfixed *param);
typedef void(GL_APIENTRY *PFN_glMultMatrixxOES)(const GLfixed *m);
typedef void(GL_APIENTRY *PFN_glMultiTexCoord4xOES)(GLenum texture, GLfixed s,
                                                    GLfixed t, GLfixed r,
                                                    GLfixed q);
typedef void(GL_APIENTRY *PFN_glNormal3xOES)(GLfixed nx, GLfixed ny,
                                             GLfixed nz);
typedef void(GL_APIENTRY *PFN_glOrthoxOES)(GLfixed l, GLfixed r, GLfixed b,
                                           GLfixed t, GLfixed n, GLfixed f);
typedef void(GL_APIENTRY *PFN_glPointParameterxvOES)(GLenum pname,
                                                     const GLfixed *params);
typedef void(GL_APIENTRY *PFN_glPointSizexOES)(GLfixed size);
typedef void(GL_APIENTRY *PFN_glPolygonOffsetxOES)(GLfixed factor,
                                                   GLfixed units);
typedef void(GL_APIENTRY *PFN_glRotatexOES)(GLfixed angle, GLfixed x, GLfixed y,
                                            GLfixed z);
typedef void(GL_APIENTRY *PFN_glScalexOES)(GLfixed x, GLfixed y, GLfixed z);
typedef void(GL_APIENTRY *PFN_glTexEnvxOES)(GLenum target, GLenum pname,
                                            GLfixed param);
typedef void(GL_APIENTRY *PFN_glTexEnvxvOES)(GLenum target, GLenum pname,
                                             const GLfixed *params);
typedef void(GL_APIENTRY *PFN_glTexParameterxOES)(GLenum target, GLenum pname,
                                                  GLfixed param);
typedef void(GL_APIENTRY *PFN_glTexParameterxvOES)(GLenum target, GLenum pname,
                                                   const GLfixed *params);
typedef void(GL_APIENTRY *PFN_glTranslatexOES)(GLfixed x, GLfixed y, GLfixed z);
typedef void(GL_APIENTRY *PFN_glGetLightxvOES)(GLenum light, GLenum pname,
                                               GLfixed *params);
typedef void(GL_APIENTRY *PFN_glGetMaterialxvOES)(GLenum face, GLenum pname,
                                                  GLfixed *params);
typedef void(GL_APIENTRY *PFN_glPointParameterxOES)(GLenum pname,
                                                    GLfixed param);
typedef void(GL_APIENTRY *PFN_glSampleCoveragexOES)(GLclampx value,
                                                    GLboolean invert);
typedef void(GL_APIENTRY *PFN_glGetTexGenxvOES)(GLenum coord, GLenum pname,
                                                GLfixed *params);
typedef void(GL_APIENTRY *PFN_glTexGenxOES)(GLenum coord, GLenum pname,
                                            GLfixed param);
typedef void(GL_APIENTRY *PFN_glTexGenxvOES)(GLenum coord, GLenum pname,
                                             const GLfixed *params);
typedef GLboolean(GL_APIENTRY *PFN_glIsRenderbufferOES)(GLuint renderbuffer);
typedef void(GL_APIENTRY *PFN_glBindRenderbufferOES)(GLenum target,
                                                     GLuint renderbuffer);
typedef void(GL_APIENTRY *PFN_glDeleteRenderbuffersOES)(
    GLsizei n, const GLuint *renderbuffers);
typedef void(GL_APIENTRY *PFN_glGenRenderbuffersOES)(GLsizei n,
                                                     GLuint *renderbuffers);
typedef void(GL_APIENTRY *PFN_glRenderbufferStorageOES)(GLenum target,
                                                        GLenum internalformat,
                                                        GLsizei width,
                                                        GLsizei height);
typedef void(GL_APIENTRY *PFN_glGetRenderbufferParameterivOES)(GLenum target,
                                                               GLenum pname,
                                                               GLint *params);
typedef GLboolean(GL_APIENTRY *PFN_glIsFramebufferOES)(GLuint framebuffer);
typedef void(GL_APIENTRY *PFN_glBindFramebufferOES)(GLenum target,
                                                    GLuint framebuffer);
typedef void(GL_APIENTRY *PFN_glDeleteFramebuffersOES)(
    GLsizei n, const GLuint *framebuffers);
typedef void(GL_APIENTRY *PFN_glGenFramebuffersOES)(GLsizei n,
                                                    GLuint *framebuffers);
typedef GLenum(GL_APIENTRY *PFN_glCheckFramebufferStatusOES)(GLenum target);
typedef void(GL_APIENTRY *PFN_glFramebufferRenderbufferOES)(
    GLenum target, GLenum attachment, GLenum renderbuffertarget,
    GLuint renderbuffer);
typedef void(GL_APIENTRY *PFN_glFramebufferTexture2DOES)(GLenum target,
                                                         GLenum attachment,
                                                         GLenum textarget,
                                                         GLuint texture,
                                                         GLint level);
typedef void(GL_APIENTRY *PFN_glGetFramebufferAttachmentParameterivOES)(
    GLenum target, GLenum attachment, GLenum pname, GLint *params);
typedef void(GL_APIENTRY *PFN_glGenerateMipmapOES)(GLenum target);
typedef void *(GL_APIENTRY *PFN_glMapBufferOES)(GLenum target, GLenum access);
typedef GLboolean(GL_APIENTRY *PFN_glUnmapBufferOES)(GLenum target);
typedef void(GL_APIENTRY *PFN_glGetBufferPointervOES)(GLenum target,
                                                      GLenum pname,
                                                      void **params);
typedef void(GL_APIENTRY *PFN_glCurrentPaletteMatrixOES)(
    GLuint matrixpaletteindex);
typedef void(GL_APIENTRY *PFN_glLoadPaletteFromModelViewMatrixOES)(void);
typedef void(GL_APIENTRY *PFN_glMatrixIndexPointerOES)(GLint size, GLenum type,
                                                       GLsizei stride,
                                                       const void *pointer);
typedef void(GL_APIENTRY *PFN_glWeightPointerOES)(GLint size, GLenum type,
                                                  GLsizei stride,
                                                  const void *pointer);
typedef GLbitfield(GL_APIENTRY *PFN_glQueryMatrixxOES)(GLfixed *mantissa,
                                                       GLint *exponent);
typedef void(GL_APIENTRY *PFN_glClearDepthfOES)(GLclampf depth);
typedef void(GL_APIENTRY *PFN_glClipPlanefOES)(GLenum plane,
                                               const GLfloat *equation);
typedef void(GL_APIENTRY *PFN_glDepthRangefOES)(GLclampf n, GLclampf f);
typedef void(GL_APIENTRY *PFN_glFrustumfOES)(GLfloat l, GLfloat r, GLfloat b,
                                             GLfloat t, GLfloat n, GLfloat f);
typedef void(GL_APIENTRY *PFN_glGetClipPlanefOES)(GLenum plane,
                                                  GLfloat *equation);
typedef void(GL_APIENTRY *PFN_glOrthofOES)(GLfloat l, GLfloat r, GLfloat b,
                                           GLfloat t, GLfloat n, GLfloat f);
typedef void(GL_APIENTRY *PFN_glTexGenfOES)(GLenum coord, GLenum pname,
                                            GLfloat param);
typedef void(GL_APIENTRY *PFN_glTexGenfvOES)(GLenum coord, GLenum pname,
                                             const GLfloat *params);
typedef void(GL_APIENTRY *PFN_glTexGeniOES)(GLenum coord, GLenum pname,
                                            GLint param);
typedef void(GL_APIENTRY *PFN_glTexGenivOES)(GLenum coord, GLenum pname,
                                             const GLint *params);
typedef void(GL_APIENTRY *PFN_glGetTexGenfvOES)(GLenum coord, GLenum pname,
                                                GLfloat *params);
typedef void(GL_APIENTRY *PFN_glGetTexGenivOES)(GLenum coord, GLenum pname,
                                                GLint *params);
typedef void(GL_APIENTRY *PFN_glBindVertexArrayOES)(GLuint array);
typedef void(GL_APIENTRY *PFN_glDeleteVertexArraysOES)(GLsizei n,
                                                       const GLuint *arrays);
typedef void(GL_APIENTRY *PFN_glGenVertexArraysOES)(GLsizei n, GLuint *arrays);
typedef GLboolean(GL_APIENTRY *PFN_glIsVertexArrayOES)(GLuint array);
typedef void(GL_APIENTRY *PFN_glCopyTextureLevelsAPPLE)(
    GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel,
    GLsizei sourceLevelCount);
typedef void(GL_APIENTRY *PFN_glRenderbufferStorageMultisampleAPPLE)(
    GLenum target, GLsizei samples, GLenum internalformat, GLsizei width,
    GLsizei height);
typedef void(GL_APIENTRY *PFN_glResolveMultisampleFramebufferAPPLE)(void);
typedef GLsync(GL_APIENTRY *PFN_glFenceSyncAPPLE)(GLenum condition,
                                                  GLbitfield flags);
typedef GLboolean(GL_APIENTRY *PFN_glIsSyncAPPLE)(GLsync sync);
typedef void(GL_APIENTRY *PFN_glDeleteSyncAPPLE)(GLsync sync);
typedef GLenum(GL_APIENTRY *PFN_glClientWaitSyncAPPLE)(GLsync sync,
                                                       GLbitfield flags,
                                                       GLuint64 timeout);
typedef void(GL_APIENTRY *PFN_glWaitSyncAPPLE)(GLsync sync, GLbitfield flags,
                                               GLuint64 timeout);
typedef void(GL_APIENTRY *PFN_glGetInteger64vAPPLE)(GLenum pname,
                                                    GLint64 *params);
typedef void(GL_APIENTRY *PFN_glGetSyncivAPPLE)(GLsync sync, GLenum pname,
                                                GLsizei count, GLsizei *length,
                                                GLint *values);
typedef void(GL_APIENTRY *PFN_glInsertEventMarkerEXT)(GLsizei length,
                                                      const GLchar *marker);
typedef void(GL_APIENTRY *PFN_glPushGroupMarkerEXT)(GLsizei length,
                                                    const GLchar *marker);
typedef void(GL_APIENTRY *PFN_glPopGroupMarkerEXT)(void);
typedef void(GL_APIENTRY *PFN_glDiscardFramebufferEXT)(
    GLenum target, GLsizei numAttachments, const GLenum *attachments);
typedef void *(GL_APIENTRY *PFN_glMapBufferRangeEXT)(GLenum target,
                                                     GLintptr offset,
                                                     GLsizeiptr length,
                                                     GLbitfield access);
typedef void(GL_APIENTRY *PFN_glFlushMappedBufferRangeEXT)(GLenum target,
                                                           GLintptr offset,
                                                           GLsizeiptr length);
typedef void(GL_APIENTRY *PFN_glMultiDrawArraysEXT)(GLenum mode,
                                                    const GLint *first,
                                                    const GLsizei *count,
                                                    GLsizei primcount);
typedef void(GL_APIENTRY *PFN_glMultiDrawElementsEXT)(
    GLenum mode, const GLsizei *count, GLenum type, const void *const *indices,
    GLsizei primcount);
typedef void(GL_APIENTRY *PFN_glRenderbufferStorageMultisampleEXT)(
    GLenum target, GLsizei samples, GLenum internalformat, GLsizei width,
    GLsizei height);
typedef void(GL_APIENTRY *PFN_glFramebufferTexture2DMultisampleEXT)(
    GLenum target, GLenum attachment, GLenum textarget, GLuint texture,
    GLint level, GLsizei samples);
typedef GLenum(GL_APIENTRY *PFN_glGetGraphicsResetStatusEXT)(void);
typedef void(GL_APIENTRY *PFN_glReadnPixelsEXT)(GLint x, GLint y, GLsizei width,
                                                GLsizei height, GLenum format,
                                                GLenum type, GLsizei bufSize,
                                                void *data);
typedef void(GL_APIENTRY *PFN_glGetnUniformfvEXT)(GLuint program,
                                                  GLint location,
                                                  GLsizei bufSize,
                                                  GLfloat *params);
typedef void(GL_APIENTRY *PFN_glGetnUniformivEXT)(GLuint program,
                                                  GLint location,
                                                  GLsizei bufSize,
                                                  GLint *params);
typedef void(GL_APIENTRY *PFN_glTexStorage1DEXT)(GLenum target, GLsizei levels,
                                                 GLenum internalformat,
                                                 GLsizei width);
typedef void(GL_APIENTRY *PFN_glTexStorage2DEXT)(GLenum target, GLsizei levels,
                                                 GLenum internalformat,
                                                 GLsizei width, GLsizei height);
typedef void(GL_APIENTRY *PFN_glTexStorage3DEXT)(GLenum target, GLsizei levels,
                                                 GLenum internalformat,
                                                 GLsizei width, GLsizei height,
                                                 GLsizei depth);
typedef void(GL_APIENTRY *PFN_glTextureStorage1DEXT)(GLuint texture,
                                                     GLenum target,
                                                     GLsizei levels,
                                                     GLenum internalformat,
                                                     GLsizei width);
typedef void(GL_APIENTRY *PFN_glTextureStorage2DEXT)(
    GLuint texture, GLenum target, GLsizei levels, GLenum internalformat,
    GLsizei width, GLsizei height);
typedef void(GL_APIENTRY *PFN_glTextureStorage3DEXT)(
    GLuint texture, GLenum target, GLsizei levels, GLenum internalformat,
    GLsizei width, GLsizei height, GLsizei depth);
typedef void(GL_APIENTRY *PFN_glRenderbufferStorageMultisampleIMG)(
    GLenum target, GLsizei samples, GLenum internalformat, GLsizei width,
    GLsizei height);
typedef void(GL_APIENTRY *PFN_glFramebufferTexture2DMultisampleIMG)(
    GLenum target, GLenum attachment, GLenum textarget, GLuint texture,
    GLint level, GLsizei samples);
typedef void(GL_APIENTRY *PFN_glClipPlanefIMG)(GLenum p, const GLfloat *eqn);
typedef void(GL_APIENTRY *PFN_glClipPlanexIMG)(GLenum p, const GLfixed *eqn);
typedef void(GL_APIENTRY *PFN_glDeleteFencesNV)(GLsizei n,
                                                const GLuint *fences);
typedef void(GL_APIENTRY *PFN_glGenFencesNV)(GLsizei n, GLuint *fences);
typedef GLboolean(GL_APIENTRY *PFN_glIsFenceNV)(GLuint fence);
typedef GLboolean(GL_APIENTRY *PFN_glTestFenceNV)(GLuint fence);
typedef void(GL_APIENTRY *PFN_glGetFenceivNV)(GLuint fence, GLenum pname,
                                              GLint *params);
typedef void(GL_APIENTRY *PFN_glFinishFenceNV)(GLuint fence);
typedef void(GL_APIENTRY *PFN_glSetFenceNV)(GLuint fence, GLenum condition);
typedef void(GL_APIENTRY *PFN_glGetDriverControlsQCOM)(GLint *num, GLsizei size,
                                                       GLuint *driverControls);
typedef void(GL_APIENTRY *PFN_glGetDriverControlStringQCOM)(
    GLuint driverControl, GLsizei bufSize, GLsizei *length,
    GLchar *driverControlString);
typedef void(GL_APIENTRY *PFN_glEnableDriverControlQCOM)(GLuint driverControl);
typedef void(GL_APIENTRY *PFN_glDisableDriverControlQCOM)(GLuint driverControl);
typedef void(GL_APIENTRY *PFN_glExtGetTexturesQCOM)(GLuint *textures,
                                                    GLint maxTextures,
                                                    GLint *numTextures);
typedef void(GL_APIENTRY *PFN_glExtGetBuffersQCOM)(GLuint *buffers,
                                                   GLint maxBuffers,
                                                   GLint *numBuffers);
typedef void(GL_APIENTRY *PFN_glExtGetRenderbuffersQCOM)(
    GLuint *renderbuffers, GLint maxRenderbuffers, GLint *numRenderbuffers);
typedef void(GL_APIENTRY *PFN_glExtGetFramebuffersQCOM)(GLuint *framebuffers,
                                                        GLint maxFramebuffers,
                                                        GLint *numFramebuffers);
typedef void(GL_APIENTRY *PFN_glExtGetTexLevelParameterivQCOM)(
    GLuint texture, GLenum face, GLint level, GLenum pname, GLint *params);
typedef void(GL_APIENTRY *PFN_glExtTexObjectStateOverrideiQCOM)(GLenum target,
                                                                GLenum pname,
                                                                GLint param);
typedef void(GL_APIENTRY *PFN_glExtGetTexSubImageQCOM)(
    GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset,
    GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type,
    void *texels);
typedef void(GL_APIENTRY *PFN_glExtGetBufferPointervQCOM)(GLenum target,
                                                          void **params);
typedef void(GL_APIENTRY *PFN_glExtGetShadersQCOM)(GLuint *shaders,
                                                   GLint maxShaders,
                                                   GLint *numShaders);
typedef void(GL_APIENTRY *PFN_glExtGetProgramsQCOM)(GLuint *programs,
                                                    GLint maxPrograms,
                                                    GLint *numPrograms);
typedef GLboolean(GL_APIENTRY *PFN_glExtIsProgramBinaryQCOM)(GLuint program);
typedef void(GL_APIENTRY *PFN_glExtGetProgramBinarySourceQCOM)(
    GLuint program, GLenum shadertype, GLchar *source, GLint *length);
typedef void(GL_APIENTRY *PFN_glStartTilingQCOM)(GLuint x, GLuint y,
                                                 GLuint width, GLuint height,
                                                 GLbitfield preserveMask);
typedef void(GL_APIENTRY *PFN_glEndTilingQCOM)(GLbitfield preserveMask);
#define VKFUNDEFINE(NAME) PFN_##NAME NAME##;

class GLESLoaderLoader {
public:
  typedef APIProc (*UserptrLoadFunc)(void *userptr, std::string_view name);
  struct Flags : public LONGBITSET {
    Flags() : LONGBITSET(sizeof(Flags), 32) {}
    bool IS_LOAD_GL_VERSION_ES_CM_1_0 : 1;                  // 0
    bool IS_LOAD_GL_OES_point_size_array : 1;               // 1
    bool IS_LOAD_GL_OES_EGL_image : 1;                      // 2
    bool IS_LOAD_GL_OES_blend_equation_separate : 1;        // 3
    bool IS_LOAD_GL_OES_blend_func_separate : 1;            // 4
    bool IS_LOAD_GL_OES_blend_subtract : 1;                 // 5
    bool IS_LOAD_GL_OES_draw_texture : 1;                   // 6
    bool IS_LOAD_GL_OES_fixed_point : 1;                    // 7
    bool IS_LOAD_GL_OES_framebuffer_object : 1;             // 8
    bool IS_LOAD_GL_OES_mapbuffer : 1;                      // 9
    bool IS_LOAD_GL_OES_matrix_palette : 1;                 // 10
    bool IS_LOAD_GL_OES_query_matrix : 1;                   // 11
    bool IS_LOAD_GL_OES_single_precision : 1;               // 12
    bool IS_LOAD_GL_OES_texture_cube_map : 1;               // 13
    bool IS_LOAD_GL_OES_vertex_array_object : 1;            // 14
    bool IS_LOAD_GL_APPLE_copy_texture_levels : 1;          // 15
    bool IS_LOAD_GL_APPLE_framebuffer_multisample : 1;      // 16
    bool IS_LOAD_GL_APPLE_sync : 1;                         // 17
    bool IS_LOAD_GL_EXT_debug_marker : 1;                   // 18
    bool IS_LOAD_GL_EXT_discard_framebuffer : 1;            // 19
    bool IS_LOAD_GL_EXT_map_buffer_range : 1;               // 20
    bool IS_LOAD_GL_EXT_multi_draw_arrays : 1;              // 21
    bool IS_LOAD_GL_EXT_multisampled_render_to_texture : 1; // 22
    bool IS_LOAD_GL_EXT_robustness : 1;                     // 23
    bool IS_LOAD_GL_EXT_texture_storage : 1;                // 24
    bool IS_LOAD_GL_IMG_multisampled_render_to_texture : 1; // 25
    bool IS_LOAD_GL_IMG_user_clip_plane : 1;                // 26
    bool IS_LOAD_GL_NV_fence : 1;                           // 27
    bool IS_LOAD_GL_QCOM_driver_control : 1;                // 28
    bool IS_LOAD_GL_QCOM_extended_get : 1;                  // 29
    bool IS_LOAD_GL_QCOM_extended_get2 : 1;                 // 30
    bool IS_LOAD_GL_QCOM_tiled_rendering : 1;               // 31
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
  GLESLoaderLoader();
  // GL_API void GL_APIENTRY glAlphaFunc (GLenum func, GLfloat ref);
  VKFUNDEFINE(glAlphaFunc);
  // GL_API void GL_APIENTRY glClearColor (GLfloat red, GLfloat green, GLfloat
  // blue, GLfloat alpha);
  VKFUNDEFINE(glClearColor);
  // GL_API void GL_APIENTRY glClearDepthf (GLfloat d);
  VKFUNDEFINE(glClearDepthf);
  // GL_API void GL_APIENTRY glClipPlanef (GLenum p, const GLfloat *eqn);
  VKFUNDEFINE(glClipPlanef);
  // GL_API void GL_APIENTRY glColor4f (GLfloat red, GLfloat green, GLfloat
  // blue, GLfloat alpha);
  VKFUNDEFINE(glColor4f);
  // GL_API void GL_APIENTRY glDepthRangef (GLfloat n, GLfloat f);
  VKFUNDEFINE(glDepthRangef);
  // GL_API void GL_APIENTRY glFogf (GLenum pname, GLfloat param);
  VKFUNDEFINE(glFogf);
  // GL_API void GL_APIENTRY glFogfv (GLenum pname, const GLfloat *params);
  VKFUNDEFINE(glFogfv);
  // GL_API void GL_APIENTRY glFrustumf (GLfloat l, GLfloat r, GLfloat b,
  // GLfloat t, GLfloat n, GLfloat f);
  VKFUNDEFINE(glFrustumf);
  // GL_API void GL_APIENTRY glGetClipPlanef (GLenum plane, GLfloat *equation);
  VKFUNDEFINE(glGetClipPlanef);
  // GL_API void GL_APIENTRY glGetFloatv (GLenum pname, GLfloat *data);
  VKFUNDEFINE(glGetFloatv);
  // GL_API void GL_APIENTRY glGetLightfv (GLenum light, GLenum pname, GLfloat
  // *params);
  VKFUNDEFINE(glGetLightfv);
  // GL_API void GL_APIENTRY glGetMaterialfv (GLenum face, GLenum pname, GLfloat
  // *params);
  VKFUNDEFINE(glGetMaterialfv);
  // GL_API void GL_APIENTRY glGetTexEnvfv (GLenum target, GLenum pname, GLfloat
  // *params);
  VKFUNDEFINE(glGetTexEnvfv);
  // GL_API void GL_APIENTRY glGetTexParameterfv (GLenum target, GLenum pname,
  // GLfloat *params);
  VKFUNDEFINE(glGetTexParameterfv);
  // GL_API void GL_APIENTRY glLightModelf (GLenum pname, GLfloat param);
  VKFUNDEFINE(glLightModelf);
  // GL_API void GL_APIENTRY glLightModelfv (GLenum pname, const GLfloat
  // *params);
  VKFUNDEFINE(glLightModelfv);
  // GL_API void GL_APIENTRY glLightf (GLenum light, GLenum pname, GLfloat
  // param);
  VKFUNDEFINE(glLightf);
  // GL_API void GL_APIENTRY glLightfv (GLenum light, GLenum pname, const
  // GLfloat *params);
  VKFUNDEFINE(glLightfv);
  // GL_API void GL_APIENTRY glLineWidth (GLfloat width);
  VKFUNDEFINE(glLineWidth);
  // GL_API void GL_APIENTRY glLoadMatrixf (const GLfloat *m);
  VKFUNDEFINE(glLoadMatrixf);
  // GL_API void GL_APIENTRY glMaterialf (GLenum face, GLenum pname, GLfloat
  // param);
  VKFUNDEFINE(glMaterialf);
  // GL_API void GL_APIENTRY glMaterialfv (GLenum face, GLenum pname, const
  // GLfloat *params);
  VKFUNDEFINE(glMaterialfv);
  // GL_API void GL_APIENTRY glMultMatrixf (const GLfloat *m);
  VKFUNDEFINE(glMultMatrixf);
  // GL_API void GL_APIENTRY glMultiTexCoord4f (GLenum target, GLfloat s,
  // GLfloat t, GLfloat r, GLfloat q);
  VKFUNDEFINE(glMultiTexCoord4f);
  // GL_API void GL_APIENTRY glNormal3f (GLfloat nx, GLfloat ny, GLfloat nz);
  VKFUNDEFINE(glNormal3f);
  // GL_API void GL_APIENTRY glOrthof (GLfloat l, GLfloat r, GLfloat b, GLfloat
  // t, GLfloat n, GLfloat f);
  VKFUNDEFINE(glOrthof);
  // GL_API void GL_APIENTRY glPointParameterf (GLenum pname, GLfloat param);
  VKFUNDEFINE(glPointParameterf);
  // GL_API void GL_APIENTRY glPointParameterfv (GLenum pname, const GLfloat
  // *params);
  VKFUNDEFINE(glPointParameterfv);
  // GL_API void GL_APIENTRY glPointSize (GLfloat size);
  VKFUNDEFINE(glPointSize);
  // GL_API void GL_APIENTRY glPolygonOffset (GLfloat factor, GLfloat units);
  VKFUNDEFINE(glPolygonOffset);
  // GL_API void GL_APIENTRY glRotatef (GLfloat angle, GLfloat x, GLfloat y,
  // GLfloat z);
  VKFUNDEFINE(glRotatef);
  // GL_API void GL_APIENTRY glScalef (GLfloat x, GLfloat y, GLfloat z);
  VKFUNDEFINE(glScalef);
  // GL_API void GL_APIENTRY glTexEnvf (GLenum target, GLenum pname, GLfloat
  // param);
  VKFUNDEFINE(glTexEnvf);
  // GL_API void GL_APIENTRY glTexEnvfv (GLenum target, GLenum pname, const
  // GLfloat *params);
  VKFUNDEFINE(glTexEnvfv);
  // GL_API void GL_APIENTRY glTexParameterf (GLenum target, GLenum pname,
  // GLfloat param);
  VKFUNDEFINE(glTexParameterf);
  // GL_API void GL_APIENTRY glTexParameterfv (GLenum target, GLenum pname,
  // const GLfloat *params);
  VKFUNDEFINE(glTexParameterfv);
  // GL_API void GL_APIENTRY glTranslatef (GLfloat x, GLfloat y, GLfloat z);
  VKFUNDEFINE(glTranslatef);
  // GL_API void GL_APIENTRY glActiveTexture (GLenum texture);
  VKFUNDEFINE(glActiveTexture);
  // GL_API void GL_APIENTRY glAlphaFuncx (GLenum func, GLfixed ref);
  VKFUNDEFINE(glAlphaFuncx);
  // GL_API void GL_APIENTRY glBindBuffer (GLenum target, GLuint buffer);
  VKFUNDEFINE(glBindBuffer);
  // GL_API void GL_APIENTRY glBindTexture (GLenum target, GLuint texture);
  VKFUNDEFINE(glBindTexture);
  // GL_API void GL_APIENTRY glBlendFunc (GLenum sfactor, GLenum dfactor);
  VKFUNDEFINE(glBlendFunc);
  // GL_API void GL_APIENTRY glBufferData (GLenum target, GLsizeiptr size, const
  // void *data, GLenum usage);
  VKFUNDEFINE(glBufferData);
  // GL_API void GL_APIENTRY glBufferSubData (GLenum target, GLintptr offset,
  // GLsizeiptr size, const void *data);
  VKFUNDEFINE(glBufferSubData);
  // GL_API void GL_APIENTRY glClear (GLbitfield mask);
  VKFUNDEFINE(glClear);
  // GL_API void GL_APIENTRY glClearColorx (GLfixed red, GLfixed green, GLfixed
  // blue, GLfixed alpha);
  VKFUNDEFINE(glClearColorx);
  // GL_API void GL_APIENTRY glClearDepthx (GLfixed depth);
  VKFUNDEFINE(glClearDepthx);
  // GL_API void GL_APIENTRY glClearStencil (GLint s);
  VKFUNDEFINE(glClearStencil);
  // GL_API void GL_APIENTRY glClientActiveTexture (GLenum texture);
  VKFUNDEFINE(glClientActiveTexture);
  // GL_API void GL_APIENTRY glClipPlanex (GLenum plane, const GLfixed
  // *equation);
  VKFUNDEFINE(glClipPlanex);
  // GL_API void GL_APIENTRY glColor4ub (GLubyte red, GLubyte green, GLubyte
  // blue, GLubyte alpha);
  VKFUNDEFINE(glColor4ub);
  // GL_API void GL_APIENTRY glColor4x (GLfixed red, GLfixed green, GLfixed
  // blue, GLfixed alpha);
  VKFUNDEFINE(glColor4x);
  // GL_API void GL_APIENTRY glColorMask (GLboolean red, GLboolean green,
  // GLboolean blue, GLboolean alpha);
  VKFUNDEFINE(glColorMask);
  // GL_API void GL_APIENTRY glColorPointer (GLint size, GLenum type, GLsizei
  // stride, const void *pointer);
  VKFUNDEFINE(glColorPointer);
  // GL_API void GL_APIENTRY glCompressedTexImage2D (GLenum target, GLint level,
  // GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei
  // imageSize, const void *data);
  VKFUNDEFINE(glCompressedTexImage2D);
  // GL_API void GL_APIENTRY glCompressedTexSubImage2D (GLenum target, GLint
  // level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum
  // format, GLsizei imageSize, const void *data);
  VKFUNDEFINE(glCompressedTexSubImage2D);
  // GL_API void GL_APIENTRY glCopyTexImage2D (GLenum target, GLint level,
  // GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height,
  // GLint border);
  VKFUNDEFINE(glCopyTexImage2D);
  // GL_API void GL_APIENTRY glCopyTexSubImage2D (GLenum target, GLint level,
  // GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei
  // height);
  VKFUNDEFINE(glCopyTexSubImage2D);
  // GL_API void GL_APIENTRY glCullFace (GLenum mode);
  VKFUNDEFINE(glCullFace);
  // GL_API void GL_APIENTRY glDeleteBuffers (GLsizei n, const GLuint *buffers);
  VKFUNDEFINE(glDeleteBuffers);
  // GL_API void GL_APIENTRY glDeleteTextures (GLsizei n, const GLuint
  // *textures);
  VKFUNDEFINE(glDeleteTextures);
  // GL_API void GL_APIENTRY glDepthFunc (GLenum func);
  VKFUNDEFINE(glDepthFunc);
  // GL_API void GL_APIENTRY glDepthMask (GLboolean flag);
  VKFUNDEFINE(glDepthMask);
  // GL_API void GL_APIENTRY glDepthRangex (GLfixed n, GLfixed f);
  VKFUNDEFINE(glDepthRangex);
  // GL_API void GL_APIENTRY glDisable (GLenum cap);
  VKFUNDEFINE(glDisable);
  // GL_API void GL_APIENTRY glDisableClientState (GLenum array);
  VKFUNDEFINE(glDisableClientState);
  // GL_API void GL_APIENTRY glDrawArrays (GLenum mode, GLint first, GLsizei
  // count);
  VKFUNDEFINE(glDrawArrays);
  // GL_API void GL_APIENTRY glDrawElements (GLenum mode, GLsizei count, GLenum
  // type, const void *indices);
  VKFUNDEFINE(glDrawElements);
  // GL_API void GL_APIENTRY glEnable (GLenum cap);
  VKFUNDEFINE(glEnable);
  // GL_API void GL_APIENTRY glEnableClientState (GLenum array);
  VKFUNDEFINE(glEnableClientState);
  // GL_API void GL_APIENTRY glFinish (void);
  VKFUNDEFINE(glFinish);
  // GL_API void GL_APIENTRY glFlush (void);
  VKFUNDEFINE(glFlush);
  // GL_API void GL_APIENTRY glFogx (GLenum pname, GLfixed param);
  VKFUNDEFINE(glFogx);
  // GL_API void GL_APIENTRY glFogxv (GLenum pname, const GLfixed *param);
  VKFUNDEFINE(glFogxv);
  // GL_API void GL_APIENTRY glFrontFace (GLenum mode);
  VKFUNDEFINE(glFrontFace);
  // GL_API void GL_APIENTRY glFrustumx (GLfixed l, GLfixed r, GLfixed b,
  // GLfixed t, GLfixed n, GLfixed f);
  VKFUNDEFINE(glFrustumx);
  // GL_API void GL_APIENTRY glGetBooleanv (GLenum pname, GLboolean *data);
  VKFUNDEFINE(glGetBooleanv);
  // GL_API void GL_APIENTRY glGetBufferParameteriv (GLenum target, GLenum
  // pname, GLint *params);
  VKFUNDEFINE(glGetBufferParameteriv);
  // GL_API void GL_APIENTRY glGetClipPlanex (GLenum plane, GLfixed *equation);
  VKFUNDEFINE(glGetClipPlanex);
  // GL_API void GL_APIENTRY glGenBuffers (GLsizei n, GLuint *buffers);
  VKFUNDEFINE(glGenBuffers);
  // GL_API void GL_APIENTRY glGenTextures (GLsizei n, GLuint *textures);
  VKFUNDEFINE(glGenTextures);
  // GL_API GLenum GL_APIENTRY glGetError (void);
  VKFUNDEFINE(glGetError);
  // GL_API void GL_APIENTRY glGetFixedv (GLenum pname, GLfixed *params);
  VKFUNDEFINE(glGetFixedv);
  // GL_API void GL_APIENTRY glGetIntegerv (GLenum pname, GLint *data);
  VKFUNDEFINE(glGetIntegerv);
  // GL_API void GL_APIENTRY glGetLightxv (GLenum light, GLenum pname, GLfixed
  // *params);
  VKFUNDEFINE(glGetLightxv);
  // GL_API void GL_APIENTRY glGetMaterialxv (GLenum face, GLenum pname, GLfixed
  // *params);
  VKFUNDEFINE(glGetMaterialxv);
  // GL_API void GL_APIENTRY glGetPointerv (GLenum pname, void **params);
  VKFUNDEFINE(glGetPointerv);
  // GL_API const GLubyte *GL_APIENTRY glGetString (GLenum name);
  VKFUNDEFINE(glGetString);
  // GL_API void GL_APIENTRY glGetTexEnviv (GLenum target, GLenum pname, GLint
  // *params);
  VKFUNDEFINE(glGetTexEnviv);
  // GL_API void GL_APIENTRY glGetTexEnvxv (GLenum target, GLenum pname, GLfixed
  // *params);
  VKFUNDEFINE(glGetTexEnvxv);
  // GL_API void GL_APIENTRY glGetTexParameteriv (GLenum target, GLenum pname,
  // GLint *params);
  VKFUNDEFINE(glGetTexParameteriv);
  // GL_API void GL_APIENTRY glGetTexParameterxv (GLenum target, GLenum pname,
  // GLfixed *params);
  VKFUNDEFINE(glGetTexParameterxv);
  // GL_API void GL_APIENTRY glHint (GLenum target, GLenum mode);
  VKFUNDEFINE(glHint);
  // GL_API GLboolean GL_APIENTRY glIsBuffer (GLuint buffer);
  VKFUNDEFINE(glIsBuffer);
  // GL_API GLboolean GL_APIENTRY glIsEnabled (GLenum cap);
  VKFUNDEFINE(glIsEnabled);
  // GL_API GLboolean GL_APIENTRY glIsTexture (GLuint texture);
  VKFUNDEFINE(glIsTexture);
  // GL_API void GL_APIENTRY glLightModelx (GLenum pname, GLfixed param);
  VKFUNDEFINE(glLightModelx);
  // GL_API void GL_APIENTRY glLightModelxv (GLenum pname, const GLfixed
  // *param);
  VKFUNDEFINE(glLightModelxv);
  // GL_API void GL_APIENTRY glLightx (GLenum light, GLenum pname, GLfixed
  // param);
  VKFUNDEFINE(glLightx);
  // GL_API void GL_APIENTRY glLightxv (GLenum light, GLenum pname, const
  // GLfixed *params);
  VKFUNDEFINE(glLightxv);
  // GL_API void GL_APIENTRY glLineWidthx (GLfixed width);
  VKFUNDEFINE(glLineWidthx);
  // GL_API void GL_APIENTRY glLoadIdentity (void);
  VKFUNDEFINE(glLoadIdentity);
  // GL_API void GL_APIENTRY glLoadMatrixx (const GLfixed *m);
  VKFUNDEFINE(glLoadMatrixx);
  // GL_API void GL_APIENTRY glLogicOp (GLenum opcode);
  VKFUNDEFINE(glLogicOp);
  // GL_API void GL_APIENTRY glMaterialx (GLenum face, GLenum pname, GLfixed
  // param);
  VKFUNDEFINE(glMaterialx);
  // GL_API void GL_APIENTRY glMaterialxv (GLenum face, GLenum pname, const
  // GLfixed *param);
  VKFUNDEFINE(glMaterialxv);
  // GL_API void GL_APIENTRY glMatrixMode (GLenum mode);
  VKFUNDEFINE(glMatrixMode);
  // GL_API void GL_APIENTRY glMultMatrixx (const GLfixed *m);
  VKFUNDEFINE(glMultMatrixx);
  // GL_API void GL_APIENTRY glMultiTexCoord4x (GLenum texture, GLfixed s,
  // GLfixed t, GLfixed r, GLfixed q);
  VKFUNDEFINE(glMultiTexCoord4x);
  // GL_API void GL_APIENTRY glNormal3x (GLfixed nx, GLfixed ny, GLfixed nz);
  VKFUNDEFINE(glNormal3x);
  // GL_API void GL_APIENTRY glNormalPointer (GLenum type, GLsizei stride, const
  // void *pointer);
  VKFUNDEFINE(glNormalPointer);
  // GL_API void GL_APIENTRY glOrthox (GLfixed l, GLfixed r, GLfixed b, GLfixed
  // t, GLfixed n, GLfixed f);
  VKFUNDEFINE(glOrthox);
  // GL_API void GL_APIENTRY glPixelStorei (GLenum pname, GLint param);
  VKFUNDEFINE(glPixelStorei);
  // GL_API void GL_APIENTRY glPointParameterx (GLenum pname, GLfixed param);
  VKFUNDEFINE(glPointParameterx);
  // GL_API void GL_APIENTRY glPointParameterxv (GLenum pname, const GLfixed
  // *params);
  VKFUNDEFINE(glPointParameterxv);
  // GL_API void GL_APIENTRY glPointSizex (GLfixed size);
  VKFUNDEFINE(glPointSizex);
  // GL_API void GL_APIENTRY glPolygonOffsetx (GLfixed factor, GLfixed units);
  VKFUNDEFINE(glPolygonOffsetx);
  // GL_API void GL_APIENTRY glPopMatrix (void);
  VKFUNDEFINE(glPopMatrix);
  // GL_API void GL_APIENTRY glPushMatrix (void);
  VKFUNDEFINE(glPushMatrix);
  // GL_API void GL_APIENTRY glReadPixels (GLint x, GLint y, GLsizei width,
  // GLsizei height, GLenum format, GLenum type, void *pixels);
  VKFUNDEFINE(glReadPixels);
  // GL_API void GL_APIENTRY glRotatex (GLfixed angle, GLfixed x, GLfixed y,
  // GLfixed z);
  VKFUNDEFINE(glRotatex);
  // GL_API void GL_APIENTRY glSampleCoverage (GLfloat value, GLboolean invert);
  VKFUNDEFINE(glSampleCoverage);
  // GL_API void GL_APIENTRY glSampleCoveragex (GLclampx value, GLboolean
  // invert);
  VKFUNDEFINE(glSampleCoveragex);
  // GL_API void GL_APIENTRY glScalex (GLfixed x, GLfixed y, GLfixed z);
  VKFUNDEFINE(glScalex);
  // GL_API void GL_APIENTRY glScissor (GLint x, GLint y, GLsizei width, GLsizei
  // height);
  VKFUNDEFINE(glScissor);
  // GL_API void GL_APIENTRY glShadeModel (GLenum mode);
  VKFUNDEFINE(glShadeModel);
  // GL_API void GL_APIENTRY glStencilFunc (GLenum func, GLint ref, GLuint
  // mask);
  VKFUNDEFINE(glStencilFunc);
  // GL_API void GL_APIENTRY glStencilMask (GLuint mask);
  VKFUNDEFINE(glStencilMask);
  // GL_API void GL_APIENTRY glStencilOp (GLenum fail, GLenum zfail, GLenum
  // zpass);
  VKFUNDEFINE(glStencilOp);
  // GL_API void GL_APIENTRY glTexCoordPointer (GLint size, GLenum type, GLsizei
  // stride, const void *pointer);
  VKFUNDEFINE(glTexCoordPointer);
  // GL_API void GL_APIENTRY glTexEnvi (GLenum target, GLenum pname, GLint
  // param);
  VKFUNDEFINE(glTexEnvi);
  // GL_API void GL_APIENTRY glTexEnvx (GLenum target, GLenum pname, GLfixed
  // param);
  VKFUNDEFINE(glTexEnvx);
  // GL_API void GL_APIENTRY glTexEnviv (GLenum target, GLenum pname, const
  // GLint *params);
  VKFUNDEFINE(glTexEnviv);
  // GL_API void GL_APIENTRY glTexEnvxv (GLenum target, GLenum pname, const
  // GLfixed *params);
  VKFUNDEFINE(glTexEnvxv);
  // GL_API void GL_APIENTRY glTexImage2D (GLenum target, GLint level, GLint
  // internalformat, GLsizei width, GLsizei height, GLint border, GLenum format,
  // GLenum type, const void *pixels);
  VKFUNDEFINE(glTexImage2D);
  // GL_API void GL_APIENTRY glTexParameteri (GLenum target, GLenum pname, GLint
  // param);
  VKFUNDEFINE(glTexParameteri);
  // GL_API void GL_APIENTRY glTexParameterx (GLenum target, GLenum pname,
  // GLfixed param);
  VKFUNDEFINE(glTexParameterx);
  // GL_API void GL_APIENTRY glTexParameteriv (GLenum target, GLenum pname,
  // const GLint *params);
  VKFUNDEFINE(glTexParameteriv);
  // GL_API void GL_APIENTRY glTexParameterxv (GLenum target, GLenum pname,
  // const GLfixed *params);
  VKFUNDEFINE(glTexParameterxv);
  // GL_API void GL_APIENTRY glTexSubImage2D (GLenum target, GLint level, GLint
  // xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format,
  // GLenum type, const void *pixels);
  VKFUNDEFINE(glTexSubImage2D);
  // GL_API void GL_APIENTRY glTranslatex (GLfixed x, GLfixed y, GLfixed z);
  VKFUNDEFINE(glTranslatex);
  // GL_API void GL_APIENTRY glVertexPointer (GLint size, GLenum type, GLsizei
  // stride, const void *pointer);
  VKFUNDEFINE(glVertexPointer);
  // GL_API void GL_APIENTRY glViewport (GLint x, GLint y, GLsizei width,
  // GLsizei height);
  VKFUNDEFINE(glViewport);
  // GL_API void GL_APIENTRY glPointSizePointerOES (GLenum type, GLsizei stride,
  // const void *pointer);
  VKFUNDEFINE(glPointSizePointerOES);
  // GL_API void GL_APIENTRY glEGLImageTargetTexture2DOES (GLenum target,
  // GLeglImageOES image);
  VKFUNDEFINE(glEGLImageTargetTexture2DOES);
  // GL_API void GL_APIENTRY glEGLImageTargetRenderbufferStorageOES (GLenum
  // target, GLeglImageOES image);
  VKFUNDEFINE(glEGLImageTargetRenderbufferStorageOES);
  // GL_API void GL_APIENTRY glBlendEquationSeparateOES (GLenum modeRGB, GLenum
  // modeAlpha);
  VKFUNDEFINE(glBlendEquationSeparateOES);
  // GL_API void GL_APIENTRY glBlendFuncSeparateOES (GLenum srcRGB, GLenum
  // dstRGB, GLenum srcAlpha, GLenum dstAlpha);
  VKFUNDEFINE(glBlendFuncSeparateOES);
  // GL_API void GL_APIENTRY glBlendEquationOES (GLenum mode);
  VKFUNDEFINE(glBlendEquationOES);
  // GL_API void GL_APIENTRY glDrawTexsOES (GLshort x, GLshort y, GLshort z,
  // GLshort width, GLshort height);
  VKFUNDEFINE(glDrawTexsOES);
  // GL_API void GL_APIENTRY glDrawTexiOES (GLint x, GLint y, GLint z, GLint
  // width, GLint height);
  VKFUNDEFINE(glDrawTexiOES);
  // GL_API void GL_APIENTRY glDrawTexxOES (GLfixed x, GLfixed y, GLfixed z,
  // GLfixed width, GLfixed height);
  VKFUNDEFINE(glDrawTexxOES);
  // GL_API void GL_APIENTRY glDrawTexsvOES (const GLshort *coords);
  VKFUNDEFINE(glDrawTexsvOES);
  // GL_API void GL_APIENTRY glDrawTexivOES (const GLint *coords);
  VKFUNDEFINE(glDrawTexivOES);
  // GL_API void GL_APIENTRY glDrawTexxvOES (const GLfixed *coords);
  VKFUNDEFINE(glDrawTexxvOES);
  // GL_API void GL_APIENTRY glDrawTexfOES (GLfloat x, GLfloat y, GLfloat z,
  // GLfloat width, GLfloat height);
  VKFUNDEFINE(glDrawTexfOES);
  // GL_API void GL_APIENTRY glDrawTexfvOES (const GLfloat *coords);
  VKFUNDEFINE(glDrawTexfvOES);
  // GL_API void GL_APIENTRY glAlphaFuncxOES (GLenum func, GLfixed ref);
  VKFUNDEFINE(glAlphaFuncxOES);
  // GL_API void GL_APIENTRY glClearColorxOES (GLfixed red, GLfixed green,
  // GLfixed blue, GLfixed alpha);
  VKFUNDEFINE(glClearColorxOES);
  // GL_API void GL_APIENTRY glClearDepthxOES (GLfixed depth);
  VKFUNDEFINE(glClearDepthxOES);
  // GL_API void GL_APIENTRY glClipPlanexOES (GLenum plane, const GLfixed
  // *equation);
  VKFUNDEFINE(glClipPlanexOES);
  // GL_API void GL_APIENTRY glColor4xOES (GLfixed red, GLfixed green, GLfixed
  // blue, GLfixed alpha);
  VKFUNDEFINE(glColor4xOES);
  // GL_API void GL_APIENTRY glDepthRangexOES (GLfixed n, GLfixed f);
  VKFUNDEFINE(glDepthRangexOES);
  // GL_API void GL_APIENTRY glFogxOES (GLenum pname, GLfixed param);
  VKFUNDEFINE(glFogxOES);
  // GL_API void GL_APIENTRY glFogxvOES (GLenum pname, const GLfixed *param);
  VKFUNDEFINE(glFogxvOES);
  // GL_API void GL_APIENTRY glFrustumxOES (GLfixed l, GLfixed r, GLfixed b,
  // GLfixed t, GLfixed n, GLfixed f);
  VKFUNDEFINE(glFrustumxOES);
  // GL_API void GL_APIENTRY glGetClipPlanexOES (GLenum plane, GLfixed
  // *equation);
  VKFUNDEFINE(glGetClipPlanexOES);
  // GL_API void GL_APIENTRY glGetFixedvOES (GLenum pname, GLfixed *params);
  VKFUNDEFINE(glGetFixedvOES);
  // GL_API void GL_APIENTRY glGetTexEnvxvOES (GLenum target, GLenum pname,
  // GLfixed *params);
  VKFUNDEFINE(glGetTexEnvxvOES);
  // GL_API void GL_APIENTRY glGetTexParameterxvOES (GLenum target, GLenum
  // pname, GLfixed *params);
  VKFUNDEFINE(glGetTexParameterxvOES);
  // GL_API void GL_APIENTRY glLightModelxOES (GLenum pname, GLfixed param);
  VKFUNDEFINE(glLightModelxOES);
  // GL_API void GL_APIENTRY glLightModelxvOES (GLenum pname, const GLfixed
  // *param);
  VKFUNDEFINE(glLightModelxvOES);
  // GL_API void GL_APIENTRY glLightxOES (GLenum light, GLenum pname, GLfixed
  // param);
  VKFUNDEFINE(glLightxOES);
  // GL_API void GL_APIENTRY glLightxvOES (GLenum light, GLenum pname, const
  // GLfixed *params);
  VKFUNDEFINE(glLightxvOES);
  // GL_API void GL_APIENTRY glLineWidthxOES (GLfixed width);
  VKFUNDEFINE(glLineWidthxOES);
  // GL_API void GL_APIENTRY glLoadMatrixxOES (const GLfixed *m);
  VKFUNDEFINE(glLoadMatrixxOES);
  // GL_API void GL_APIENTRY glMaterialxOES (GLenum face, GLenum pname, GLfixed
  // param);
  VKFUNDEFINE(glMaterialxOES);
  // GL_API void GL_APIENTRY glMaterialxvOES (GLenum face, GLenum pname, const
  // GLfixed *param);
  VKFUNDEFINE(glMaterialxvOES);
  // GL_API void GL_APIENTRY glMultMatrixxOES (const GLfixed *m);
  VKFUNDEFINE(glMultMatrixxOES);
  // GL_API void GL_APIENTRY glMultiTexCoord4xOES (GLenum texture, GLfixed s,
  // GLfixed t, GLfixed r, GLfixed q);
  VKFUNDEFINE(glMultiTexCoord4xOES);
  // GL_API void GL_APIENTRY glNormal3xOES (GLfixed nx, GLfixed ny, GLfixed nz);
  VKFUNDEFINE(glNormal3xOES);
  // GL_API void GL_APIENTRY glOrthoxOES (GLfixed l, GLfixed r, GLfixed b,
  // GLfixed t, GLfixed n, GLfixed f);
  VKFUNDEFINE(glOrthoxOES);
  // GL_API void GL_APIENTRY glPointParameterxvOES (GLenum pname, const GLfixed
  // *params);
  VKFUNDEFINE(glPointParameterxvOES);
  // GL_API void GL_APIENTRY glPointSizexOES (GLfixed size);
  VKFUNDEFINE(glPointSizexOES);
  // GL_API void GL_APIENTRY glPolygonOffsetxOES (GLfixed factor, GLfixed
  // units);
  VKFUNDEFINE(glPolygonOffsetxOES);
  // GL_API void GL_APIENTRY glRotatexOES (GLfixed angle, GLfixed x, GLfixed y,
  // GLfixed z);
  VKFUNDEFINE(glRotatexOES);
  // GL_API void GL_APIENTRY glScalexOES (GLfixed x, GLfixed y, GLfixed z);
  VKFUNDEFINE(glScalexOES);
  // GL_API void GL_APIENTRY glTexEnvxOES (GLenum target, GLenum pname, GLfixed
  // param);
  VKFUNDEFINE(glTexEnvxOES);
  // GL_API void GL_APIENTRY glTexEnvxvOES (GLenum target, GLenum pname, const
  // GLfixed *params);
  VKFUNDEFINE(glTexEnvxvOES);
  // GL_API void GL_APIENTRY glTexParameterxOES (GLenum target, GLenum pname,
  // GLfixed param);
  VKFUNDEFINE(glTexParameterxOES);
  // GL_API void GL_APIENTRY glTexParameterxvOES (GLenum target, GLenum pname,
  // const GLfixed *params);
  VKFUNDEFINE(glTexParameterxvOES);
  // GL_API void GL_APIENTRY glTranslatexOES (GLfixed x, GLfixed y, GLfixed z);
  VKFUNDEFINE(glTranslatexOES);
  // GL_API void GL_APIENTRY glGetLightxvOES (GLenum light, GLenum pname,
  // GLfixed *params);
  VKFUNDEFINE(glGetLightxvOES);
  // GL_API void GL_APIENTRY glGetMaterialxvOES (GLenum face, GLenum pname,
  // GLfixed *params);
  VKFUNDEFINE(glGetMaterialxvOES);
  // GL_API void GL_APIENTRY glPointParameterxOES (GLenum pname, GLfixed param);
  VKFUNDEFINE(glPointParameterxOES);
  // GL_API void GL_APIENTRY glSampleCoveragexOES (GLclampx value, GLboolean
  // invert);
  VKFUNDEFINE(glSampleCoveragexOES);
  // GL_API void GL_APIENTRY glGetTexGenxvOES (GLenum coord, GLenum pname,
  // GLfixed *params);
  VKFUNDEFINE(glGetTexGenxvOES);
  // GL_API void GL_APIENTRY glTexGenxOES (GLenum coord, GLenum pname, GLfixed
  // param);
  VKFUNDEFINE(glTexGenxOES);
  // GL_API void GL_APIENTRY glTexGenxvOES (GLenum coord, GLenum pname, const
  // GLfixed *params);
  VKFUNDEFINE(glTexGenxvOES);
  // GL_API GLboolean GL_APIENTRY glIsRenderbufferOES (GLuint renderbuffer);
  VKFUNDEFINE(glIsRenderbufferOES);
  // GL_API void GL_APIENTRY glBindRenderbufferOES (GLenum target, GLuint
  // renderbuffer);
  VKFUNDEFINE(glBindRenderbufferOES);
  // GL_API void GL_APIENTRY glDeleteRenderbuffersOES (GLsizei n, const GLuint
  // *renderbuffers);
  VKFUNDEFINE(glDeleteRenderbuffersOES);
  // GL_API void GL_APIENTRY glGenRenderbuffersOES (GLsizei n, GLuint
  // *renderbuffers);
  VKFUNDEFINE(glGenRenderbuffersOES);
  // GL_API void GL_APIENTRY glRenderbufferStorageOES (GLenum target, GLenum
  // internalformat, GLsizei width, GLsizei height);
  VKFUNDEFINE(glRenderbufferStorageOES);
  // GL_API void GL_APIENTRY glGetRenderbufferParameterivOES (GLenum target,
  // GLenum pname, GLint *params);
  VKFUNDEFINE(glGetRenderbufferParameterivOES);
  // GL_API GLboolean GL_APIENTRY glIsFramebufferOES (GLuint framebuffer);
  VKFUNDEFINE(glIsFramebufferOES);
  // GL_API void GL_APIENTRY glBindFramebufferOES (GLenum target, GLuint
  // framebuffer);
  VKFUNDEFINE(glBindFramebufferOES);
  // GL_API void GL_APIENTRY glDeleteFramebuffersOES (GLsizei n, const GLuint
  // *framebuffers);
  VKFUNDEFINE(glDeleteFramebuffersOES);
  // GL_API void GL_APIENTRY glGenFramebuffersOES (GLsizei n, GLuint
  // *framebuffers);
  VKFUNDEFINE(glGenFramebuffersOES);
  // GL_API GLenum GL_APIENTRY glCheckFramebufferStatusOES (GLenum target);
  VKFUNDEFINE(glCheckFramebufferStatusOES);
  // GL_API void GL_APIENTRY glFramebufferRenderbufferOES (GLenum target, GLenum
  // attachment, GLenum renderbuffertarget, GLuint renderbuffer);
  VKFUNDEFINE(glFramebufferRenderbufferOES);
  // GL_API void GL_APIENTRY glFramebufferTexture2DOES (GLenum target, GLenum
  // attachment, GLenum textarget, GLuint texture, GLint level);
  VKFUNDEFINE(glFramebufferTexture2DOES);
  // GL_API void GL_APIENTRY glGetFramebufferAttachmentParameterivOES (GLenum
  // target, GLenum attachment, GLenum pname, GLint *params);
  VKFUNDEFINE(glGetFramebufferAttachmentParameterivOES);
  // GL_API void GL_APIENTRY glGenerateMipmapOES (GLenum target);
  VKFUNDEFINE(glGenerateMipmapOES);
  // GL_API void *GL_APIENTRY glMapBufferOES (GLenum target, GLenum access);
  VKFUNDEFINE(glMapBufferOES);
  // GL_API GLboolean GL_APIENTRY glUnmapBufferOES (GLenum target);
  VKFUNDEFINE(glUnmapBufferOES);
  // GL_API void GL_APIENTRY glGetBufferPointervOES (GLenum target, GLenum
  // pname, void **params);
  VKFUNDEFINE(glGetBufferPointervOES);
  // GL_API void GL_APIENTRY glCurrentPaletteMatrixOES (GLuint
  // matrixpaletteindex);
  VKFUNDEFINE(glCurrentPaletteMatrixOES);
  // GL_API void GL_APIENTRY glLoadPaletteFromModelViewMatrixOES (void);
  VKFUNDEFINE(glLoadPaletteFromModelViewMatrixOES);
  // GL_API void GL_APIENTRY glMatrixIndexPointerOES (GLint size, GLenum type,
  // GLsizei stride, const void *pointer);
  VKFUNDEFINE(glMatrixIndexPointerOES);
  // GL_API void GL_APIENTRY glWeightPointerOES (GLint size, GLenum type,
  // GLsizei stride, const void *pointer);
  VKFUNDEFINE(glWeightPointerOES);
  // GL_API GLbitfield GL_APIENTRY glQueryMatrixxOES (GLfixed *mantissa, GLint
  // *exponent);
  VKFUNDEFINE(glQueryMatrixxOES);
  // GL_API void GL_APIENTRY glClearDepthfOES (GLclampf depth);
  VKFUNDEFINE(glClearDepthfOES);
  // GL_API void GL_APIENTRY glClipPlanefOES (GLenum plane, const GLfloat
  // *equation);
  VKFUNDEFINE(glClipPlanefOES);
  // GL_API void GL_APIENTRY glDepthRangefOES (GLclampf n, GLclampf f);
  VKFUNDEFINE(glDepthRangefOES);
  // GL_API void GL_APIENTRY glFrustumfOES (GLfloat l, GLfloat r, GLfloat b,
  // GLfloat t, GLfloat n, GLfloat f);
  VKFUNDEFINE(glFrustumfOES);
  // GL_API void GL_APIENTRY glGetClipPlanefOES (GLenum plane, GLfloat
  // *equation);
  VKFUNDEFINE(glGetClipPlanefOES);
  // GL_API void GL_APIENTRY glOrthofOES (GLfloat l, GLfloat r, GLfloat b,
  // GLfloat t, GLfloat n, GLfloat f);
  VKFUNDEFINE(glOrthofOES);
  // GL_API void GL_APIENTRY glTexGenfOES (GLenum coord, GLenum pname, GLfloat
  // param);
  VKFUNDEFINE(glTexGenfOES);
  // GL_API void GL_APIENTRY glTexGenfvOES (GLenum coord, GLenum pname, const
  // GLfloat *params);
  VKFUNDEFINE(glTexGenfvOES);
  // GL_API void GL_APIENTRY glTexGeniOES (GLenum coord, GLenum pname, GLint
  // param);
  VKFUNDEFINE(glTexGeniOES);
  // GL_API void GL_APIENTRY glTexGenivOES (GLenum coord, GLenum pname, const
  // GLint *params);
  VKFUNDEFINE(glTexGenivOES);
  // GL_API void GL_APIENTRY glGetTexGenfvOES (GLenum coord, GLenum pname,
  // GLfloat *params);
  VKFUNDEFINE(glGetTexGenfvOES);
  // GL_API void GL_APIENTRY glGetTexGenivOES (GLenum coord, GLenum pname, GLint
  // *params);
  VKFUNDEFINE(glGetTexGenivOES);
  // GL_API void GL_APIENTRY glBindVertexArrayOES (GLuint array);
  VKFUNDEFINE(glBindVertexArrayOES);
  // GL_API void GL_APIENTRY glDeleteVertexArraysOES (GLsizei n, const GLuint
  // *arrays);
  VKFUNDEFINE(glDeleteVertexArraysOES);
  // GL_API void GL_APIENTRY glGenVertexArraysOES (GLsizei n, GLuint *arrays);
  VKFUNDEFINE(glGenVertexArraysOES);
  // GL_API GLboolean GL_APIENTRY glIsVertexArrayOES (GLuint array);
  VKFUNDEFINE(glIsVertexArrayOES);
  // GL_API void GL_APIENTRY glCopyTextureLevelsAPPLE (GLuint
  // destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei
  // sourceLevelCount);
  VKFUNDEFINE(glCopyTextureLevelsAPPLE);
  // GL_API void GL_APIENTRY glRenderbufferStorageMultisampleAPPLE (GLenum
  // target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei
  // height);
  VKFUNDEFINE(glRenderbufferStorageMultisampleAPPLE);
  // GL_API void GL_APIENTRY glResolveMultisampleFramebufferAPPLE (void);
  VKFUNDEFINE(glResolveMultisampleFramebufferAPPLE);
  // GL_API GLsync GL_APIENTRY glFenceSyncAPPLE (GLenum condition, GLbitfield
  // flags);
  VKFUNDEFINE(glFenceSyncAPPLE);
  // GL_API GLboolean GL_APIENTRY glIsSyncAPPLE (GLsync sync);
  VKFUNDEFINE(glIsSyncAPPLE);
  // GL_API void GL_APIENTRY glDeleteSyncAPPLE (GLsync sync);
  VKFUNDEFINE(glDeleteSyncAPPLE);
  // GL_API GLenum GL_APIENTRY glClientWaitSyncAPPLE (GLsync sync, GLbitfield
  // flags, GLuint64 timeout);
  VKFUNDEFINE(glClientWaitSyncAPPLE);
  // GL_API void GL_APIENTRY glWaitSyncAPPLE (GLsync sync, GLbitfield flags,
  // GLuint64 timeout);
  VKFUNDEFINE(glWaitSyncAPPLE);
  // GL_API void GL_APIENTRY glGetInteger64vAPPLE (GLenum pname, GLint64
  // *params);
  VKFUNDEFINE(glGetInteger64vAPPLE);
  // GL_API void GL_APIENTRY glGetSyncivAPPLE (GLsync sync, GLenum pname,
  // GLsizei count, GLsizei *length, GLint *values);
  VKFUNDEFINE(glGetSyncivAPPLE);
  // GL_API void GL_APIENTRY glInsertEventMarkerEXT (GLsizei length, const
  // GLchar *marker);
  VKFUNDEFINE(glInsertEventMarkerEXT);
  // GL_API void GL_APIENTRY glPushGroupMarkerEXT (GLsizei length, const GLchar
  // *marker);
  VKFUNDEFINE(glPushGroupMarkerEXT);
  // GL_API void GL_APIENTRY glPopGroupMarkerEXT (void);
  VKFUNDEFINE(glPopGroupMarkerEXT);
  // GL_API void GL_APIENTRY glDiscardFramebufferEXT (GLenum target, GLsizei
  // numAttachments, const GLenum *attachments);
  VKFUNDEFINE(glDiscardFramebufferEXT);
  // GL_API void *GL_APIENTRY glMapBufferRangeEXT (GLenum target, GLintptr
  // offset, GLsizeiptr length, GLbitfield access);
  VKFUNDEFINE(glMapBufferRangeEXT);
  // GL_API void GL_APIENTRY glFlushMappedBufferRangeEXT (GLenum target,
  // GLintptr offset, GLsizeiptr length);
  VKFUNDEFINE(glFlushMappedBufferRangeEXT);
  // GL_API void GL_APIENTRY glMultiDrawArraysEXT (GLenum mode, const GLint
  // *first, const GLsizei *count, GLsizei primcount);
  VKFUNDEFINE(glMultiDrawArraysEXT);
  // GL_API void GL_APIENTRY glMultiDrawElementsEXT (GLenum mode, const GLsizei
  // *count, GLenum type, const void *const*indices, GLsizei primcount);
  VKFUNDEFINE(glMultiDrawElementsEXT);
  // GL_API void GL_APIENTRY glRenderbufferStorageMultisampleEXT (GLenum target,
  // GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
  VKFUNDEFINE(glRenderbufferStorageMultisampleEXT);
  // GL_API void GL_APIENTRY glFramebufferTexture2DMultisampleEXT (GLenum
  // target, GLenum attachment, GLenum textarget, GLuint texture, GLint level,
  // GLsizei samples);
  VKFUNDEFINE(glFramebufferTexture2DMultisampleEXT);
  // GL_API GLenum GL_APIENTRY glGetGraphicsResetStatusEXT (void);
  VKFUNDEFINE(glGetGraphicsResetStatusEXT);
  // GL_API void GL_APIENTRY glReadnPixelsEXT (GLint x, GLint y, GLsizei width,
  // GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
  VKFUNDEFINE(glReadnPixelsEXT);
  // GL_API void GL_APIENTRY glGetnUniformfvEXT (GLuint program, GLint location,
  // GLsizei bufSize, GLfloat *params);
  VKFUNDEFINE(glGetnUniformfvEXT);
  // GL_API void GL_APIENTRY glGetnUniformivEXT (GLuint program, GLint location,
  // GLsizei bufSize, GLint *params);
  VKFUNDEFINE(glGetnUniformivEXT);
  // GL_API void GL_APIENTRY glTexStorage1DEXT (GLenum target, GLsizei levels,
  // GLenum internalformat, GLsizei width);
  VKFUNDEFINE(glTexStorage1DEXT);
  // GL_API void GL_APIENTRY glTexStorage2DEXT (GLenum target, GLsizei levels,
  // GLenum internalformat, GLsizei width, GLsizei height);
  VKFUNDEFINE(glTexStorage2DEXT);
  // GL_API void GL_APIENTRY glTexStorage3DEXT (GLenum target, GLsizei levels,
  // GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
  VKFUNDEFINE(glTexStorage3DEXT);
  // GL_API void GL_APIENTRY glTextureStorage1DEXT (GLuint texture, GLenum
  // target, GLsizei levels, GLenum internalformat, GLsizei width);
  VKFUNDEFINE(glTextureStorage1DEXT);
  // GL_API void GL_APIENTRY glTextureStorage2DEXT (GLuint texture, GLenum
  // target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei
  // height);
  VKFUNDEFINE(glTextureStorage2DEXT);
  // GL_API void GL_APIENTRY glTextureStorage3DEXT (GLuint texture, GLenum
  // target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei
  // height, GLsizei depth);
  VKFUNDEFINE(glTextureStorage3DEXT);
  // GL_API void GL_APIENTRY glRenderbufferStorageMultisampleIMG (GLenum target,
  // GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
  VKFUNDEFINE(glRenderbufferStorageMultisampleIMG);
  // GL_API void GL_APIENTRY glFramebufferTexture2DMultisampleIMG (GLenum
  // target, GLenum attachment, GLenum textarget, GLuint texture, GLint level,
  // GLsizei samples);
  VKFUNDEFINE(glFramebufferTexture2DMultisampleIMG);
  // GL_API void GL_APIENTRY glClipPlanefIMG (GLenum p, const GLfloat *eqn);
  VKFUNDEFINE(glClipPlanefIMG);
  // GL_API void GL_APIENTRY glClipPlanexIMG (GLenum p, const GLfixed *eqn);
  VKFUNDEFINE(glClipPlanexIMG);
  // GL_API void GL_APIENTRY glDeleteFencesNV (GLsizei n, const GLuint *fences);
  VKFUNDEFINE(glDeleteFencesNV);
  // GL_API void GL_APIENTRY glGenFencesNV (GLsizei n, GLuint *fences);
  VKFUNDEFINE(glGenFencesNV);
  // GL_API GLboolean GL_APIENTRY glIsFenceNV (GLuint fence);
  VKFUNDEFINE(glIsFenceNV);
  // GL_API GLboolean GL_APIENTRY glTestFenceNV (GLuint fence);
  VKFUNDEFINE(glTestFenceNV);
  // GL_API void GL_APIENTRY glGetFenceivNV (GLuint fence, GLenum pname, GLint
  // *params);
  VKFUNDEFINE(glGetFenceivNV);
  // GL_API void GL_APIENTRY glFinishFenceNV (GLuint fence);
  VKFUNDEFINE(glFinishFenceNV);
  // GL_API void GL_APIENTRY glSetFenceNV (GLuint fence, GLenum condition);
  VKFUNDEFINE(glSetFenceNV);
  // GL_API void GL_APIENTRY glGetDriverControlsQCOM (GLint *num, GLsizei size,
  // GLuint *driverControls);
  VKFUNDEFINE(glGetDriverControlsQCOM);
  // GL_API void GL_APIENTRY glGetDriverControlStringQCOM (GLuint driverControl,
  // GLsizei bufSize, GLsizei *length, GLchar *driverControlString);
  VKFUNDEFINE(glGetDriverControlStringQCOM);
  // GL_API void GL_APIENTRY glEnableDriverControlQCOM (GLuint driverControl);
  VKFUNDEFINE(glEnableDriverControlQCOM);
  // GL_API void GL_APIENTRY glDisableDriverControlQCOM (GLuint driverControl);
  VKFUNDEFINE(glDisableDriverControlQCOM);
  // GL_API void GL_APIENTRY glExtGetTexturesQCOM (GLuint *textures, GLint
  // maxTextures, GLint *numTextures);
  VKFUNDEFINE(glExtGetTexturesQCOM);
  // GL_API void GL_APIENTRY glExtGetBuffersQCOM (GLuint *buffers, GLint
  // maxBuffers, GLint *numBuffers);
  VKFUNDEFINE(glExtGetBuffersQCOM);
  // GL_API void GL_APIENTRY glExtGetRenderbuffersQCOM (GLuint *renderbuffers,
  // GLint maxRenderbuffers, GLint *numRenderbuffers);
  VKFUNDEFINE(glExtGetRenderbuffersQCOM);
  // GL_API void GL_APIENTRY glExtGetFramebuffersQCOM (GLuint *framebuffers,
  // GLint maxFramebuffers, GLint *numFramebuffers);
  VKFUNDEFINE(glExtGetFramebuffersQCOM);
  // GL_API void GL_APIENTRY glExtGetTexLevelParameterivQCOM (GLuint texture,
  // GLenum face, GLint level, GLenum pname, GLint *params);
  VKFUNDEFINE(glExtGetTexLevelParameterivQCOM);
  // GL_API void GL_APIENTRY glExtTexObjectStateOverrideiQCOM (GLenum target,
  // GLenum pname, GLint param);
  VKFUNDEFINE(glExtTexObjectStateOverrideiQCOM);
  // GL_API void GL_APIENTRY glExtGetTexSubImageQCOM (GLenum target, GLint
  // level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei
  // height, GLsizei depth, GLenum format, GLenum type, void *texels);
  VKFUNDEFINE(glExtGetTexSubImageQCOM);
  // GL_API void GL_APIENTRY glExtGetBufferPointervQCOM (GLenum target, void
  // **params);
  VKFUNDEFINE(glExtGetBufferPointervQCOM);
  // GL_API void GL_APIENTRY glExtGetShadersQCOM (GLuint *shaders, GLint
  // maxShaders, GLint *numShaders);
  VKFUNDEFINE(glExtGetShadersQCOM);
  // GL_API void GL_APIENTRY glExtGetProgramsQCOM (GLuint *programs, GLint
  // maxPrograms, GLint *numPrograms);
  VKFUNDEFINE(glExtGetProgramsQCOM);
  // GL_API GLboolean GL_APIENTRY glExtIsProgramBinaryQCOM (GLuint program);
  VKFUNDEFINE(glExtIsProgramBinaryQCOM);
  // GL_API void GL_APIENTRY glExtGetProgramBinarySourceQCOM (GLuint program,
  // GLenum shadertype, GLchar *source, GLint *length);
  VKFUNDEFINE(glExtGetProgramBinarySourceQCOM);
  // GL_API void GL_APIENTRY glStartTilingQCOM (GLuint x, GLuint y, GLuint
  // width, GLuint height, GLbitfield preserveMask);
  VKFUNDEFINE(glStartTilingQCOM);
  // GL_API void GL_APIENTRY glEndTilingQCOM (GLbitfield preserveMask);
  VKFUNDEFINE(glEndTilingQCOM);

  bool TRY_LOAD_GL_VERSION_ES_CM_1_0();                  // 0
  bool TRY_LOAD_GL_OES_point_size_array();               // 1
  bool TRY_LOAD_GL_OES_EGL_image();                      // 2
  bool TRY_LOAD_GL_OES_blend_equation_separate();        // 3
  bool TRY_LOAD_GL_OES_blend_func_separate();            // 4
  bool TRY_LOAD_GL_OES_blend_subtract();                 // 5
  bool TRY_LOAD_GL_OES_draw_texture();                   // 6
  bool TRY_LOAD_GL_OES_fixed_point();                    // 7
  bool TRY_LOAD_GL_OES_framebuffer_object();             // 8
  bool TRY_LOAD_GL_OES_mapbuffer();                      // 9
  bool TRY_LOAD_GL_OES_matrix_palette();                 // 10
  bool TRY_LOAD_GL_OES_query_matrix();                   // 11
  bool TRY_LOAD_GL_OES_single_precision();               // 12
  bool TRY_LOAD_GL_OES_texture_cube_map();               // 13
  bool TRY_LOAD_GL_OES_vertex_array_object();            // 14
  bool TRY_LOAD_GL_APPLE_copy_texture_levels();          // 15
  bool TRY_LOAD_GL_APPLE_framebuffer_multisample();      // 16
  bool TRY_LOAD_GL_APPLE_sync();                         // 17
  bool TRY_LOAD_GL_EXT_debug_marker();                   // 18
  bool TRY_LOAD_GL_EXT_discard_framebuffer();            // 19
  bool TRY_LOAD_GL_EXT_map_buffer_range();               // 20
  bool TRY_LOAD_GL_EXT_multi_draw_arrays();              // 21
  bool TRY_LOAD_GL_EXT_multisampled_render_to_texture(); // 22
  bool TRY_LOAD_GL_EXT_robustness();                     // 23
  bool TRY_LOAD_GL_EXT_texture_storage();                // 24
  bool TRY_LOAD_GL_IMG_multisampled_render_to_texture(); // 25
  bool TRY_LOAD_GL_IMG_user_clip_plane();                // 26
  bool TRY_LOAD_GL_NV_fence();                           // 27
  bool TRY_LOAD_GL_QCOM_driver_control();                // 28
  bool TRY_LOAD_GL_QCOM_extended_get();                  // 29
  bool TRY_LOAD_GL_QCOM_extended_get2();                 // 30
  bool TRY_LOAD_GL_QCOM_tiled_rendering();               // 31

  typedef bool (GLESLoaderLoader::*EXTLOADER)();
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
extern LIBHANNLE GetGLESLoaderLibHandle();
class GLESLoaderPHILoader : public GLESLoaderLoader {
public:
  LIBHANNLE libHandle;
  GLESLoaderPHILoader();
  bool init();
  static APIProc phiLoadFunc(void *userptr, std::string_view name);
};

#undef VKFUNDEFINE