// GL_API void GL_APIENTRY glAlphaFunc (GLenum func, GLfloat ref);
#define GLAlphaFunc GLESLoadercontext->glAlphaFunc
// GL_API void GL_APIENTRY glClearColor (GLfloat red, GLfloat green, GLfloat
// blue, GLfloat alpha);
#define GLClearColor GLESLoadercontext->glClearColor
// GL_API void GL_APIENTRY glClearDepthf (GLfloat d);
#define GLClearDepthf GLESLoadercontext->glClearDepthf
// GL_API void GL_APIENTRY glClipPlanef (GLenum p, const GLfloat *eqn);
#define GLClipPlanef GLESLoadercontext->glClipPlanef
// GL_API void GL_APIENTRY glColor4f (GLfloat red, GLfloat green, GLfloat blue,
// GLfloat alpha);
#define GLColor4f GLESLoadercontext->glColor4f
// GL_API void GL_APIENTRY glDepthRangef (GLfloat n, GLfloat f);
#define GLDepthRangef GLESLoadercontext->glDepthRangef
// GL_API void GL_APIENTRY glFogf (GLenum pname, GLfloat param);
#define GLFogf GLESLoadercontext->glFogf
// GL_API void GL_APIENTRY glFogfv (GLenum pname, const GLfloat *params);
#define GLFogfv GLESLoadercontext->glFogfv
// GL_API void GL_APIENTRY glFrustumf (GLfloat l, GLfloat r, GLfloat b, GLfloat
// t, GLfloat n, GLfloat f);
#define GLFrustumf GLESLoadercontext->glFrustumf
// GL_API void GL_APIENTRY glGetClipPlanef (GLenum plane, GLfloat *equation);
#define GLGetClipPlanef GLESLoadercontext->glGetClipPlanef
// GL_API void GL_APIENTRY glGetFloatv (GLenum pname, GLfloat *data);
#define GLGetFloatv GLESLoadercontext->glGetFloatv
// GL_API void GL_APIENTRY glGetLightfv (GLenum light, GLenum pname, GLfloat
// *params);
#define GLGetLightfv GLESLoadercontext->glGetLightfv
// GL_API void GL_APIENTRY glGetMaterialfv (GLenum face, GLenum pname, GLfloat
// *params);
#define GLGetMaterialfv GLESLoadercontext->glGetMaterialfv
// GL_API void GL_APIENTRY glGetTexEnvfv (GLenum target, GLenum pname, GLfloat
// *params);
#define GLGetTexEnvfv GLESLoadercontext->glGetTexEnvfv
// GL_API void GL_APIENTRY glGetTexParameterfv (GLenum target, GLenum pname,
// GLfloat *params);
#define GLGetTexParameterfv GLESLoadercontext->glGetTexParameterfv
// GL_API void GL_APIENTRY glLightModelf (GLenum pname, GLfloat param);
#define GLLightModelf GLESLoadercontext->glLightModelf
// GL_API void GL_APIENTRY glLightModelfv (GLenum pname, const GLfloat *params);
#define GLLightModelfv GLESLoadercontext->glLightModelfv
// GL_API void GL_APIENTRY glLightf (GLenum light, GLenum pname, GLfloat param);
#define GLLightf GLESLoadercontext->glLightf
// GL_API void GL_APIENTRY glLightfv (GLenum light, GLenum pname, const GLfloat
// *params);
#define GLLightfv GLESLoadercontext->glLightfv
// GL_API void GL_APIENTRY glLineWidth (GLfloat width);
#define GLLineWidth GLESLoadercontext->glLineWidth
// GL_API void GL_APIENTRY glLoadMatrixf (const GLfloat *m);
#define GLLoadMatrixf GLESLoadercontext->glLoadMatrixf
// GL_API void GL_APIENTRY glMaterialf (GLenum face, GLenum pname, GLfloat
// param);
#define GLMaterialf GLESLoadercontext->glMaterialf
// GL_API void GL_APIENTRY glMaterialfv (GLenum face, GLenum pname, const
// GLfloat *params);
#define GLMaterialfv GLESLoadercontext->glMaterialfv
// GL_API void GL_APIENTRY glMultMatrixf (const GLfloat *m);
#define GLMultMatrixf GLESLoadercontext->glMultMatrixf
// GL_API void GL_APIENTRY glMultiTexCoord4f (GLenum target, GLfloat s, GLfloat
// t, GLfloat r, GLfloat q);
#define GLMultiTexCoord4f GLESLoadercontext->glMultiTexCoord4f
// GL_API void GL_APIENTRY glNormal3f (GLfloat nx, GLfloat ny, GLfloat nz);
#define GLNormal3f GLESLoadercontext->glNormal3f
// GL_API void GL_APIENTRY glOrthof (GLfloat l, GLfloat r, GLfloat b, GLfloat t,
// GLfloat n, GLfloat f);
#define GLOrthof GLESLoadercontext->glOrthof
// GL_API void GL_APIENTRY glPointParameterf (GLenum pname, GLfloat param);
#define GLPointParameterf GLESLoadercontext->glPointParameterf
// GL_API void GL_APIENTRY glPointParameterfv (GLenum pname, const GLfloat
// *params);
#define GLPointParameterfv GLESLoadercontext->glPointParameterfv
// GL_API void GL_APIENTRY glPointSize (GLfloat size);
#define GLPointSize GLESLoadercontext->glPointSize
// GL_API void GL_APIENTRY glPolygonOffset (GLfloat factor, GLfloat units);
#define GLPolygonOffset GLESLoadercontext->glPolygonOffset
// GL_API void GL_APIENTRY glRotatef (GLfloat angle, GLfloat x, GLfloat y,
// GLfloat z);
#define GLRotatef GLESLoadercontext->glRotatef
// GL_API void GL_APIENTRY glScalef (GLfloat x, GLfloat y, GLfloat z);
#define GLScalef GLESLoadercontext->glScalef
// GL_API void GL_APIENTRY glTexEnvf (GLenum target, GLenum pname, GLfloat
// param);
#define GLTexEnvf GLESLoadercontext->glTexEnvf
// GL_API void GL_APIENTRY glTexEnvfv (GLenum target, GLenum pname, const
// GLfloat *params);
#define GLTexEnvfv GLESLoadercontext->glTexEnvfv
// GL_API void GL_APIENTRY glTexParameterf (GLenum target, GLenum pname, GLfloat
// param);
#define GLTexParameterf GLESLoadercontext->glTexParameterf
// GL_API void GL_APIENTRY glTexParameterfv (GLenum target, GLenum pname, const
// GLfloat *params);
#define GLTexParameterfv GLESLoadercontext->glTexParameterfv
// GL_API void GL_APIENTRY glTranslatef (GLfloat x, GLfloat y, GLfloat z);
#define GLTranslatef GLESLoadercontext->glTranslatef
// GL_API void GL_APIENTRY glActiveTexture (GLenum texture);
#define GLActiveTexture GLESLoadercontext->glActiveTexture
// GL_API void GL_APIENTRY glAlphaFuncx (GLenum func, GLfixed ref);
#define GLAlphaFuncx GLESLoadercontext->glAlphaFuncx
// GL_API void GL_APIENTRY glBindBuffer (GLenum target, GLuint buffer);
#define GLBindBuffer GLESLoadercontext->glBindBuffer
// GL_API void GL_APIENTRY glBindTexture (GLenum target, GLuint texture);
#define GLBindTexture GLESLoadercontext->glBindTexture
// GL_API void GL_APIENTRY glBlendFunc (GLenum sfactor, GLenum dfactor);
#define GLBlendFunc GLESLoadercontext->glBlendFunc
// GL_API void GL_APIENTRY glBufferData (GLenum target, GLsizeiptr size, const
// void *data, GLenum usage);
#define GLBufferData GLESLoadercontext->glBufferData
// GL_API void GL_APIENTRY glBufferSubData (GLenum target, GLintptr offset,
// GLsizeiptr size, const void *data);
#define GLBufferSubData GLESLoadercontext->glBufferSubData
// GL_API void GL_APIENTRY glClear (GLbitfield mask);
#define GLClear GLESLoadercontext->glClear
// GL_API void GL_APIENTRY glClearColorx (GLfixed red, GLfixed green, GLfixed
// blue, GLfixed alpha);
#define GLClearColorx GLESLoadercontext->glClearColorx
// GL_API void GL_APIENTRY glClearDepthx (GLfixed depth);
#define GLClearDepthx GLESLoadercontext->glClearDepthx
// GL_API void GL_APIENTRY glClearStencil (GLint s);
#define GLClearStencil GLESLoadercontext->glClearStencil
// GL_API void GL_APIENTRY glClientActiveTexture (GLenum texture);
#define GLClientActiveTexture GLESLoadercontext->glClientActiveTexture
// GL_API void GL_APIENTRY glClipPlanex (GLenum plane, const GLfixed *equation);
#define GLClipPlanex GLESLoadercontext->glClipPlanex
// GL_API void GL_APIENTRY glColor4ub (GLubyte red, GLubyte green, GLubyte blue,
// GLubyte alpha);
#define GLColor4ub GLESLoadercontext->glColor4ub
// GL_API void GL_APIENTRY glColor4x (GLfixed red, GLfixed green, GLfixed blue,
// GLfixed alpha);
#define GLColor4x GLESLoadercontext->glColor4x
// GL_API void GL_APIENTRY glColorMask (GLboolean red, GLboolean green,
// GLboolean blue, GLboolean alpha);
#define GLColorMask GLESLoadercontext->glColorMask
// GL_API void GL_APIENTRY glColorPointer (GLint size, GLenum type, GLsizei
// stride, const void *pointer);
#define GLColorPointer GLESLoadercontext->glColorPointer
// GL_API void GL_APIENTRY glCompressedTexImage2D (GLenum target, GLint level,
// GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei
// imageSize, const void *data);
#define GLCompressedTexImage2D GLESLoadercontext->glCompressedTexImage2D
// GL_API void GL_APIENTRY glCompressedTexSubImage2D (GLenum target, GLint
// level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum
// format, GLsizei imageSize, const void *data);
#define GLCompressedTexSubImage2D GLESLoadercontext->glCompressedTexSubImage2D
// GL_API void GL_APIENTRY glCopyTexImage2D (GLenum target, GLint level, GLenum
// internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint
// border);
#define GLCopyTexImage2D GLESLoadercontext->glCopyTexImage2D
// GL_API void GL_APIENTRY glCopyTexSubImage2D (GLenum target, GLint level,
// GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei
// height);
#define GLCopyTexSubImage2D GLESLoadercontext->glCopyTexSubImage2D
// GL_API void GL_APIENTRY glCullFace (GLenum mode);
#define GLCullFace GLESLoadercontext->glCullFace
// GL_API void GL_APIENTRY glDeleteBuffers (GLsizei n, const GLuint *buffers);
#define GLDeleteBuffers GLESLoadercontext->glDeleteBuffers
// GL_API void GL_APIENTRY glDeleteTextures (GLsizei n, const GLuint *textures);
#define GLDeleteTextures GLESLoadercontext->glDeleteTextures
// GL_API void GL_APIENTRY glDepthFunc (GLenum func);
#define GLDepthFunc GLESLoadercontext->glDepthFunc
// GL_API void GL_APIENTRY glDepthMask (GLboolean flag);
#define GLDepthMask GLESLoadercontext->glDepthMask
// GL_API void GL_APIENTRY glDepthRangex (GLfixed n, GLfixed f);
#define GLDepthRangex GLESLoadercontext->glDepthRangex
// GL_API void GL_APIENTRY glDisable (GLenum cap);
#define GLDisable GLESLoadercontext->glDisable
// GL_API void GL_APIENTRY glDisableClientState (GLenum array);
#define GLDisableClientState GLESLoadercontext->glDisableClientState
// GL_API void GL_APIENTRY glDrawArrays (GLenum mode, GLint first, GLsizei
// count);
#define GLDrawArrays GLESLoadercontext->glDrawArrays
// GL_API void GL_APIENTRY glDrawElements (GLenum mode, GLsizei count, GLenum
// type, const void *indices);
#define GLDrawElements GLESLoadercontext->glDrawElements
// GL_API void GL_APIENTRY glEnable (GLenum cap);
#define GLEnable GLESLoadercontext->glEnable
// GL_API void GL_APIENTRY glEnableClientState (GLenum array);
#define GLEnableClientState GLESLoadercontext->glEnableClientState
// GL_API void GL_APIENTRY glFinish (void);
#define GLFinish GLESLoadercontext->glFinish
// GL_API void GL_APIENTRY glFlush (void);
#define GLFlush GLESLoadercontext->glFlush
// GL_API void GL_APIENTRY glFogx (GLenum pname, GLfixed param);
#define GLFogx GLESLoadercontext->glFogx
// GL_API void GL_APIENTRY glFogxv (GLenum pname, const GLfixed *param);
#define GLFogxv GLESLoadercontext->glFogxv
// GL_API void GL_APIENTRY glFrontFace (GLenum mode);
#define GLFrontFace GLESLoadercontext->glFrontFace
// GL_API void GL_APIENTRY glFrustumx (GLfixed l, GLfixed r, GLfixed b, GLfixed
// t, GLfixed n, GLfixed f);
#define GLFrustumx GLESLoadercontext->glFrustumx
// GL_API void GL_APIENTRY glGetBooleanv (GLenum pname, GLboolean *data);
#define GLGetBooleanv GLESLoadercontext->glGetBooleanv
// GL_API void GL_APIENTRY glGetBufferParameteriv (GLenum target, GLenum pname,
// GLint *params);
#define GLGetBufferParameteriv GLESLoadercontext->glGetBufferParameteriv
// GL_API void GL_APIENTRY glGetClipPlanex (GLenum plane, GLfixed *equation);
#define GLGetClipPlanex GLESLoadercontext->glGetClipPlanex
// GL_API void GL_APIENTRY glGenBuffers (GLsizei n, GLuint *buffers);
#define GLGenBuffers GLESLoadercontext->glGenBuffers
// GL_API void GL_APIENTRY glGenTextures (GLsizei n, GLuint *textures);
#define GLGenTextures GLESLoadercontext->glGenTextures
// GL_API GLenum GL_APIENTRY glGetError (void);
#define GLGetError GLESLoadercontext->glGetError
// GL_API void GL_APIENTRY glGetFixedv (GLenum pname, GLfixed *params);
#define GLGetFixedv GLESLoadercontext->glGetFixedv
// GL_API void GL_APIENTRY glGetIntegerv (GLenum pname, GLint *data);
#define GLGetIntegerv GLESLoadercontext->glGetIntegerv
// GL_API void GL_APIENTRY glGetLightxv (GLenum light, GLenum pname, GLfixed
// *params);
#define GLGetLightxv GLESLoadercontext->glGetLightxv
// GL_API void GL_APIENTRY glGetMaterialxv (GLenum face, GLenum pname, GLfixed
// *params);
#define GLGetMaterialxv GLESLoadercontext->glGetMaterialxv
// GL_API void GL_APIENTRY glGetPointerv (GLenum pname, void **params);
#define GLGetPointerv GLESLoadercontext->glGetPointerv
// GL_API const GLubyte *GL_APIENTRY glGetString (GLenum name);
#define GLGetString GLESLoadercontext->glGetString
// GL_API void GL_APIENTRY glGetTexEnviv (GLenum target, GLenum pname, GLint
// *params);
#define GLGetTexEnviv GLESLoadercontext->glGetTexEnviv
// GL_API void GL_APIENTRY glGetTexEnvxv (GLenum target, GLenum pname, GLfixed
// *params);
#define GLGetTexEnvxv GLESLoadercontext->glGetTexEnvxv
// GL_API void GL_APIENTRY glGetTexParameteriv (GLenum target, GLenum pname,
// GLint *params);
#define GLGetTexParameteriv GLESLoadercontext->glGetTexParameteriv
// GL_API void GL_APIENTRY glGetTexParameterxv (GLenum target, GLenum pname,
// GLfixed *params);
#define GLGetTexParameterxv GLESLoadercontext->glGetTexParameterxv
// GL_API void GL_APIENTRY glHint (GLenum target, GLenum mode);
#define GLHint GLESLoadercontext->glHint
// GL_API GLboolean GL_APIENTRY glIsBuffer (GLuint buffer);
#define GLIsBuffer GLESLoadercontext->glIsBuffer
// GL_API GLboolean GL_APIENTRY glIsEnabled (GLenum cap);
#define GLIsEnabled GLESLoadercontext->glIsEnabled
// GL_API GLboolean GL_APIENTRY glIsTexture (GLuint texture);
#define GLIsTexture GLESLoadercontext->glIsTexture
// GL_API void GL_APIENTRY glLightModelx (GLenum pname, GLfixed param);
#define GLLightModelx GLESLoadercontext->glLightModelx
// GL_API void GL_APIENTRY glLightModelxv (GLenum pname, const GLfixed *param);
#define GLLightModelxv GLESLoadercontext->glLightModelxv
// GL_API void GL_APIENTRY glLightx (GLenum light, GLenum pname, GLfixed param);
#define GLLightx GLESLoadercontext->glLightx
// GL_API void GL_APIENTRY glLightxv (GLenum light, GLenum pname, const GLfixed
// *params);
#define GLLightxv GLESLoadercontext->glLightxv
// GL_API void GL_APIENTRY glLineWidthx (GLfixed width);
#define GLLineWidthx GLESLoadercontext->glLineWidthx
// GL_API void GL_APIENTRY glLoadIdentity (void);
#define GLLoadIdentity GLESLoadercontext->glLoadIdentity
// GL_API void GL_APIENTRY glLoadMatrixx (const GLfixed *m);
#define GLLoadMatrixx GLESLoadercontext->glLoadMatrixx
// GL_API void GL_APIENTRY glLogicOp (GLenum opcode);
#define GLLogicOp GLESLoadercontext->glLogicOp
// GL_API void GL_APIENTRY glMaterialx (GLenum face, GLenum pname, GLfixed
// param);
#define GLMaterialx GLESLoadercontext->glMaterialx
// GL_API void GL_APIENTRY glMaterialxv (GLenum face, GLenum pname, const
// GLfixed *param);
#define GLMaterialxv GLESLoadercontext->glMaterialxv
// GL_API void GL_APIENTRY glMatrixMode (GLenum mode);
#define GLMatrixMode GLESLoadercontext->glMatrixMode
// GL_API void GL_APIENTRY glMultMatrixx (const GLfixed *m);
#define GLMultMatrixx GLESLoadercontext->glMultMatrixx
// GL_API void GL_APIENTRY glMultiTexCoord4x (GLenum texture, GLfixed s, GLfixed
// t, GLfixed r, GLfixed q);
#define GLMultiTexCoord4x GLESLoadercontext->glMultiTexCoord4x
// GL_API void GL_APIENTRY glNormal3x (GLfixed nx, GLfixed ny, GLfixed nz);
#define GLNormal3x GLESLoadercontext->glNormal3x
// GL_API void GL_APIENTRY glNormalPointer (GLenum type, GLsizei stride, const
// void *pointer);
#define GLNormalPointer GLESLoadercontext->glNormalPointer
// GL_API void GL_APIENTRY glOrthox (GLfixed l, GLfixed r, GLfixed b, GLfixed t,
// GLfixed n, GLfixed f);
#define GLOrthox GLESLoadercontext->glOrthox
// GL_API void GL_APIENTRY glPixelStorei (GLenum pname, GLint param);
#define GLPixelStorei GLESLoadercontext->glPixelStorei
// GL_API void GL_APIENTRY glPointParameterx (GLenum pname, GLfixed param);
#define GLPointParameterx GLESLoadercontext->glPointParameterx
// GL_API void GL_APIENTRY glPointParameterxv (GLenum pname, const GLfixed
// *params);
#define GLPointParameterxv GLESLoadercontext->glPointParameterxv
// GL_API void GL_APIENTRY glPointSizex (GLfixed size);
#define GLPointSizex GLESLoadercontext->glPointSizex
// GL_API void GL_APIENTRY glPolygonOffsetx (GLfixed factor, GLfixed units);
#define GLPolygonOffsetx GLESLoadercontext->glPolygonOffsetx
// GL_API void GL_APIENTRY glPopMatrix (void);
#define GLPopMatrix GLESLoadercontext->glPopMatrix
// GL_API void GL_APIENTRY glPushMatrix (void);
#define GLPushMatrix GLESLoadercontext->glPushMatrix
// GL_API void GL_APIENTRY glReadPixels (GLint x, GLint y, GLsizei width,
// GLsizei height, GLenum format, GLenum type, void *pixels);
#define GLReadPixels GLESLoadercontext->glReadPixels
// GL_API void GL_APIENTRY glRotatex (GLfixed angle, GLfixed x, GLfixed y,
// GLfixed z);
#define GLRotatex GLESLoadercontext->glRotatex
// GL_API void GL_APIENTRY glSampleCoverage (GLfloat value, GLboolean invert);
#define GLSampleCoverage GLESLoadercontext->glSampleCoverage
// GL_API void GL_APIENTRY glSampleCoveragex (GLclampx value, GLboolean invert);
#define GLSampleCoveragex GLESLoadercontext->glSampleCoveragex
// GL_API void GL_APIENTRY glScalex (GLfixed x, GLfixed y, GLfixed z);
#define GLScalex GLESLoadercontext->glScalex
// GL_API void GL_APIENTRY glScissor (GLint x, GLint y, GLsizei width, GLsizei
// height);
#define GLScissor GLESLoadercontext->glScissor
// GL_API void GL_APIENTRY glShadeModel (GLenum mode);
#define GLShadeModel GLESLoadercontext->glShadeModel
// GL_API void GL_APIENTRY glStencilFunc (GLenum func, GLint ref, GLuint mask);
#define GLStencilFunc GLESLoadercontext->glStencilFunc
// GL_API void GL_APIENTRY glStencilMask (GLuint mask);
#define GLStencilMask GLESLoadercontext->glStencilMask
// GL_API void GL_APIENTRY glStencilOp (GLenum fail, GLenum zfail, GLenum
// zpass);
#define GLStencilOp GLESLoadercontext->glStencilOp
// GL_API void GL_APIENTRY glTexCoordPointer (GLint size, GLenum type, GLsizei
// stride, const void *pointer);
#define GLTexCoordPointer GLESLoadercontext->glTexCoordPointer
// GL_API void GL_APIENTRY glTexEnvi (GLenum target, GLenum pname, GLint param);
#define GLTexEnvi GLESLoadercontext->glTexEnvi
// GL_API void GL_APIENTRY glTexEnvx (GLenum target, GLenum pname, GLfixed
// param);
#define GLTexEnvx GLESLoadercontext->glTexEnvx
// GL_API void GL_APIENTRY glTexEnviv (GLenum target, GLenum pname, const GLint
// *params);
#define GLTexEnviv GLESLoadercontext->glTexEnviv
// GL_API void GL_APIENTRY glTexEnvxv (GLenum target, GLenum pname, const
// GLfixed *params);
#define GLTexEnvxv GLESLoadercontext->glTexEnvxv
// GL_API void GL_APIENTRY glTexImage2D (GLenum target, GLint level, GLint
// internalformat, GLsizei width, GLsizei height, GLint border, GLenum format,
// GLenum type, const void *pixels);
#define GLTexImage2D GLESLoadercontext->glTexImage2D
// GL_API void GL_APIENTRY glTexParameteri (GLenum target, GLenum pname, GLint
// param);
#define GLTexParameteri GLESLoadercontext->glTexParameteri
// GL_API void GL_APIENTRY glTexParameterx (GLenum target, GLenum pname, GLfixed
// param);
#define GLTexParameterx GLESLoadercontext->glTexParameterx
// GL_API void GL_APIENTRY glTexParameteriv (GLenum target, GLenum pname, const
// GLint *params);
#define GLTexParameteriv GLESLoadercontext->glTexParameteriv
// GL_API void GL_APIENTRY glTexParameterxv (GLenum target, GLenum pname, const
// GLfixed *params);
#define GLTexParameterxv GLESLoadercontext->glTexParameterxv
// GL_API void GL_APIENTRY glTexSubImage2D (GLenum target, GLint level, GLint
// xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum
// type, const void *pixels);
#define GLTexSubImage2D GLESLoadercontext->glTexSubImage2D
// GL_API void GL_APIENTRY glTranslatex (GLfixed x, GLfixed y, GLfixed z);
#define GLTranslatex GLESLoadercontext->glTranslatex
// GL_API void GL_APIENTRY glVertexPointer (GLint size, GLenum type, GLsizei
// stride, const void *pointer);
#define GLVertexPointer GLESLoadercontext->glVertexPointer
// GL_API void GL_APIENTRY glViewport (GLint x, GLint y, GLsizei width, GLsizei
// height);
#define GLViewport GLESLoadercontext->glViewport
// GL_API void GL_APIENTRY glPointSizePointerOES (GLenum type, GLsizei stride,
// const void *pointer);
#define GLPointSizePointerOES GLESLoadercontext->glPointSizePointerOES
// GL_API void GL_APIENTRY glEGLImageTargetTexture2DOES (GLenum target,
// GLeglImageOES image);
#define GLEGLImageTargetTexture2DOES                                           \
  GLESLoadercontext->glEGLImageTargetTexture2DOES
// GL_API void GL_APIENTRY glEGLImageTargetRenderbufferStorageOES (GLenum
// target, GLeglImageOES image);
#define GLEGLImageTargetRenderbufferStorageOES                                 \
  GLESLoadercontext->glEGLImageTargetRenderbufferStorageOES
// GL_API void GL_APIENTRY glBlendEquationSeparateOES (GLenum modeRGB, GLenum
// modeAlpha);
#define GLBlendEquationSeparateOES GLESLoadercontext->glBlendEquationSeparateOES
// GL_API void GL_APIENTRY glBlendFuncSeparateOES (GLenum srcRGB, GLenum dstRGB,
// GLenum srcAlpha, GLenum dstAlpha);
#define GLBlendFuncSeparateOES GLESLoadercontext->glBlendFuncSeparateOES
// GL_API void GL_APIENTRY glBlendEquationOES (GLenum mode);
#define GLBlendEquationOES GLESLoadercontext->glBlendEquationOES
// GL_API void GL_APIENTRY glDrawTexsOES (GLshort x, GLshort y, GLshort z,
// GLshort width, GLshort height);
#define GLDrawTexsOES GLESLoadercontext->glDrawTexsOES
// GL_API void GL_APIENTRY glDrawTexiOES (GLint x, GLint y, GLint z, GLint
// width, GLint height);
#define GLDrawTexiOES GLESLoadercontext->glDrawTexiOES
// GL_API void GL_APIENTRY glDrawTexxOES (GLfixed x, GLfixed y, GLfixed z,
// GLfixed width, GLfixed height);
#define GLDrawTexxOES GLESLoadercontext->glDrawTexxOES
// GL_API void GL_APIENTRY glDrawTexsvOES (const GLshort *coords);
#define GLDrawTexsvOES GLESLoadercontext->glDrawTexsvOES
// GL_API void GL_APIENTRY glDrawTexivOES (const GLint *coords);
#define GLDrawTexivOES GLESLoadercontext->glDrawTexivOES
// GL_API void GL_APIENTRY glDrawTexxvOES (const GLfixed *coords);
#define GLDrawTexxvOES GLESLoadercontext->glDrawTexxvOES
// GL_API void GL_APIENTRY glDrawTexfOES (GLfloat x, GLfloat y, GLfloat z,
// GLfloat width, GLfloat height);
#define GLDrawTexfOES GLESLoadercontext->glDrawTexfOES
// GL_API void GL_APIENTRY glDrawTexfvOES (const GLfloat *coords);
#define GLDrawTexfvOES GLESLoadercontext->glDrawTexfvOES
// GL_API void GL_APIENTRY glAlphaFuncxOES (GLenum func, GLfixed ref);
#define GLAlphaFuncxOES GLESLoadercontext->glAlphaFuncxOES
// GL_API void GL_APIENTRY glClearColorxOES (GLfixed red, GLfixed green, GLfixed
// blue, GLfixed alpha);
#define GLClearColorxOES GLESLoadercontext->glClearColorxOES
// GL_API void GL_APIENTRY glClearDepthxOES (GLfixed depth);
#define GLClearDepthxOES GLESLoadercontext->glClearDepthxOES
// GL_API void GL_APIENTRY glClipPlanexOES (GLenum plane, const GLfixed
// *equation);
#define GLClipPlanexOES GLESLoadercontext->glClipPlanexOES
// GL_API void GL_APIENTRY glColor4xOES (GLfixed red, GLfixed green, GLfixed
// blue, GLfixed alpha);
#define GLColor4xOES GLESLoadercontext->glColor4xOES
// GL_API void GL_APIENTRY glDepthRangexOES (GLfixed n, GLfixed f);
#define GLDepthRangexOES GLESLoadercontext->glDepthRangexOES
// GL_API void GL_APIENTRY glFogxOES (GLenum pname, GLfixed param);
#define GLFogxOES GLESLoadercontext->glFogxOES
// GL_API void GL_APIENTRY glFogxvOES (GLenum pname, const GLfixed *param);
#define GLFogxvOES GLESLoadercontext->glFogxvOES
// GL_API void GL_APIENTRY glFrustumxOES (GLfixed l, GLfixed r, GLfixed b,
// GLfixed t, GLfixed n, GLfixed f);
#define GLFrustumxOES GLESLoadercontext->glFrustumxOES
// GL_API void GL_APIENTRY glGetClipPlanexOES (GLenum plane, GLfixed *equation);
#define GLGetClipPlanexOES GLESLoadercontext->glGetClipPlanexOES
// GL_API void GL_APIENTRY glGetFixedvOES (GLenum pname, GLfixed *params);
#define GLGetFixedvOES GLESLoadercontext->glGetFixedvOES
// GL_API void GL_APIENTRY glGetTexEnvxvOES (GLenum target, GLenum pname,
// GLfixed *params);
#define GLGetTexEnvxvOES GLESLoadercontext->glGetTexEnvxvOES
// GL_API void GL_APIENTRY glGetTexParameterxvOES (GLenum target, GLenum pname,
// GLfixed *params);
#define GLGetTexParameterxvOES GLESLoadercontext->glGetTexParameterxvOES
// GL_API void GL_APIENTRY glLightModelxOES (GLenum pname, GLfixed param);
#define GLLightModelxOES GLESLoadercontext->glLightModelxOES
// GL_API void GL_APIENTRY glLightModelxvOES (GLenum pname, const GLfixed
// *param);
#define GLLightModelxvOES GLESLoadercontext->glLightModelxvOES
// GL_API void GL_APIENTRY glLightxOES (GLenum light, GLenum pname, GLfixed
// param);
#define GLLightxOES GLESLoadercontext->glLightxOES
// GL_API void GL_APIENTRY glLightxvOES (GLenum light, GLenum pname, const
// GLfixed *params);
#define GLLightxvOES GLESLoadercontext->glLightxvOES
// GL_API void GL_APIENTRY glLineWidthxOES (GLfixed width);
#define GLLineWidthxOES GLESLoadercontext->glLineWidthxOES
// GL_API void GL_APIENTRY glLoadMatrixxOES (const GLfixed *m);
#define GLLoadMatrixxOES GLESLoadercontext->glLoadMatrixxOES
// GL_API void GL_APIENTRY glMaterialxOES (GLenum face, GLenum pname, GLfixed
// param);
#define GLMaterialxOES GLESLoadercontext->glMaterialxOES
// GL_API void GL_APIENTRY glMaterialxvOES (GLenum face, GLenum pname, const
// GLfixed *param);
#define GLMaterialxvOES GLESLoadercontext->glMaterialxvOES
// GL_API void GL_APIENTRY glMultMatrixxOES (const GLfixed *m);
#define GLMultMatrixxOES GLESLoadercontext->glMultMatrixxOES
// GL_API void GL_APIENTRY glMultiTexCoord4xOES (GLenum texture, GLfixed s,
// GLfixed t, GLfixed r, GLfixed q);
#define GLMultiTexCoord4xOES GLESLoadercontext->glMultiTexCoord4xOES
// GL_API void GL_APIENTRY glNormal3xOES (GLfixed nx, GLfixed ny, GLfixed nz);
#define GLNormal3xOES GLESLoadercontext->glNormal3xOES
// GL_API void GL_APIENTRY glOrthoxOES (GLfixed l, GLfixed r, GLfixed b, GLfixed
// t, GLfixed n, GLfixed f);
#define GLOrthoxOES GLESLoadercontext->glOrthoxOES
// GL_API void GL_APIENTRY glPointParameterxvOES (GLenum pname, const GLfixed
// *params);
#define GLPointParameterxvOES GLESLoadercontext->glPointParameterxvOES
// GL_API void GL_APIENTRY glPointSizexOES (GLfixed size);
#define GLPointSizexOES GLESLoadercontext->glPointSizexOES
// GL_API void GL_APIENTRY glPolygonOffsetxOES (GLfixed factor, GLfixed units);
#define GLPolygonOffsetxOES GLESLoadercontext->glPolygonOffsetxOES
// GL_API void GL_APIENTRY glRotatexOES (GLfixed angle, GLfixed x, GLfixed y,
// GLfixed z);
#define GLRotatexOES GLESLoadercontext->glRotatexOES
// GL_API void GL_APIENTRY glScalexOES (GLfixed x, GLfixed y, GLfixed z);
#define GLScalexOES GLESLoadercontext->glScalexOES
// GL_API void GL_APIENTRY glTexEnvxOES (GLenum target, GLenum pname, GLfixed
// param);
#define GLTexEnvxOES GLESLoadercontext->glTexEnvxOES
// GL_API void GL_APIENTRY glTexEnvxvOES (GLenum target, GLenum pname, const
// GLfixed *params);
#define GLTexEnvxvOES GLESLoadercontext->glTexEnvxvOES
// GL_API void GL_APIENTRY glTexParameterxOES (GLenum target, GLenum pname,
// GLfixed param);
#define GLTexParameterxOES GLESLoadercontext->glTexParameterxOES
// GL_API void GL_APIENTRY glTexParameterxvOES (GLenum target, GLenum pname,
// const GLfixed *params);
#define GLTexParameterxvOES GLESLoadercontext->glTexParameterxvOES
// GL_API void GL_APIENTRY glTranslatexOES (GLfixed x, GLfixed y, GLfixed z);
#define GLTranslatexOES GLESLoadercontext->glTranslatexOES
// GL_API void GL_APIENTRY glGetLightxvOES (GLenum light, GLenum pname, GLfixed
// *params);
#define GLGetLightxvOES GLESLoadercontext->glGetLightxvOES
// GL_API void GL_APIENTRY glGetMaterialxvOES (GLenum face, GLenum pname,
// GLfixed *params);
#define GLGetMaterialxvOES GLESLoadercontext->glGetMaterialxvOES
// GL_API void GL_APIENTRY glPointParameterxOES (GLenum pname, GLfixed param);
#define GLPointParameterxOES GLESLoadercontext->glPointParameterxOES
// GL_API void GL_APIENTRY glSampleCoveragexOES (GLclampx value, GLboolean
// invert);
#define GLSampleCoveragexOES GLESLoadercontext->glSampleCoveragexOES
// GL_API void GL_APIENTRY glGetTexGenxvOES (GLenum coord, GLenum pname, GLfixed
// *params);
#define GLGetTexGenxvOES GLESLoadercontext->glGetTexGenxvOES
// GL_API void GL_APIENTRY glTexGenxOES (GLenum coord, GLenum pname, GLfixed
// param);
#define GLTexGenxOES GLESLoadercontext->glTexGenxOES
// GL_API void GL_APIENTRY glTexGenxvOES (GLenum coord, GLenum pname, const
// GLfixed *params);
#define GLTexGenxvOES GLESLoadercontext->glTexGenxvOES
// GL_API GLboolean GL_APIENTRY glIsRenderbufferOES (GLuint renderbuffer);
#define GLIsRenderbufferOES GLESLoadercontext->glIsRenderbufferOES
// GL_API void GL_APIENTRY glBindRenderbufferOES (GLenum target, GLuint
// renderbuffer);
#define GLBindRenderbufferOES GLESLoadercontext->glBindRenderbufferOES
// GL_API void GL_APIENTRY glDeleteRenderbuffersOES (GLsizei n, const GLuint
// *renderbuffers);
#define GLDeleteRenderbuffersOES GLESLoadercontext->glDeleteRenderbuffersOES
// GL_API void GL_APIENTRY glGenRenderbuffersOES (GLsizei n, GLuint
// *renderbuffers);
#define GLGenRenderbuffersOES GLESLoadercontext->glGenRenderbuffersOES
// GL_API void GL_APIENTRY glRenderbufferStorageOES (GLenum target, GLenum
// internalformat, GLsizei width, GLsizei height);
#define GLRenderbufferStorageOES GLESLoadercontext->glRenderbufferStorageOES
// GL_API void GL_APIENTRY glGetRenderbufferParameterivOES (GLenum target,
// GLenum pname, GLint *params);
#define GLGetRenderbufferParameterivOES                                        \
  GLESLoadercontext->glGetRenderbufferParameterivOES
// GL_API GLboolean GL_APIENTRY glIsFramebufferOES (GLuint framebuffer);
#define GLIsFramebufferOES GLESLoadercontext->glIsFramebufferOES
// GL_API void GL_APIENTRY glBindFramebufferOES (GLenum target, GLuint
// framebuffer);
#define GLBindFramebufferOES GLESLoadercontext->glBindFramebufferOES
// GL_API void GL_APIENTRY glDeleteFramebuffersOES (GLsizei n, const GLuint
// *framebuffers);
#define GLDeleteFramebuffersOES GLESLoadercontext->glDeleteFramebuffersOES
// GL_API void GL_APIENTRY glGenFramebuffersOES (GLsizei n, GLuint
// *framebuffers);
#define GLGenFramebuffersOES GLESLoadercontext->glGenFramebuffersOES
// GL_API GLenum GL_APIENTRY glCheckFramebufferStatusOES (GLenum target);
#define GLCheckFramebufferStatusOES                                            \
  GLESLoadercontext->glCheckFramebufferStatusOES
// GL_API void GL_APIENTRY glFramebufferRenderbufferOES (GLenum target, GLenum
// attachment, GLenum renderbuffertarget, GLuint renderbuffer);
#define GLFramebufferRenderbufferOES                                           \
  GLESLoadercontext->glFramebufferRenderbufferOES
// GL_API void GL_APIENTRY glFramebufferTexture2DOES (GLenum target, GLenum
// attachment, GLenum textarget, GLuint texture, GLint level);
#define GLFramebufferTexture2DOES GLESLoadercontext->glFramebufferTexture2DOES
// GL_API void GL_APIENTRY glGetFramebufferAttachmentParameterivOES (GLenum
// target, GLenum attachment, GLenum pname, GLint *params);
#define GLGetFramebufferAttachmentParameterivOES                               \
  GLESLoadercontext->glGetFramebufferAttachmentParameterivOES
// GL_API void GL_APIENTRY glGenerateMipmapOES (GLenum target);
#define GLGenerateMipmapOES GLESLoadercontext->glGenerateMipmapOES
// GL_API void *GL_APIENTRY glMapBufferOES (GLenum target, GLenum access);
#define GLMapBufferOES GLESLoadercontext->glMapBufferOES
// GL_API GLboolean GL_APIENTRY glUnmapBufferOES (GLenum target);
#define GLUnmapBufferOES GLESLoadercontext->glUnmapBufferOES
// GL_API void GL_APIENTRY glGetBufferPointervOES (GLenum target, GLenum pname,
// void **params);
#define GLGetBufferPointervOES GLESLoadercontext->glGetBufferPointervOES
// GL_API void GL_APIENTRY glCurrentPaletteMatrixOES (GLuint
// matrixpaletteindex);
#define GLCurrentPaletteMatrixOES GLESLoadercontext->glCurrentPaletteMatrixOES
// GL_API void GL_APIENTRY glLoadPaletteFromModelViewMatrixOES (void);
#define GLLoadPaletteFromModelViewMatrixOES                                    \
  GLESLoadercontext->glLoadPaletteFromModelViewMatrixOES
// GL_API void GL_APIENTRY glMatrixIndexPointerOES (GLint size, GLenum type,
// GLsizei stride, const void *pointer);
#define GLMatrixIndexPointerOES GLESLoadercontext->glMatrixIndexPointerOES
// GL_API void GL_APIENTRY glWeightPointerOES (GLint size, GLenum type, GLsizei
// stride, const void *pointer);
#define GLWeightPointerOES GLESLoadercontext->glWeightPointerOES
// GL_API GLbitfield GL_APIENTRY glQueryMatrixxOES (GLfixed *mantissa, GLint
// *exponent);
#define GLQueryMatrixxOES GLESLoadercontext->glQueryMatrixxOES
// GL_API void GL_APIENTRY glClearDepthfOES (GLclampf depth);
#define GLClearDepthfOES GLESLoadercontext->glClearDepthfOES
// GL_API void GL_APIENTRY glClipPlanefOES (GLenum plane, const GLfloat
// *equation);
#define GLClipPlanefOES GLESLoadercontext->glClipPlanefOES
// GL_API void GL_APIENTRY glDepthRangefOES (GLclampf n, GLclampf f);
#define GLDepthRangefOES GLESLoadercontext->glDepthRangefOES
// GL_API void GL_APIENTRY glFrustumfOES (GLfloat l, GLfloat r, GLfloat b,
// GLfloat t, GLfloat n, GLfloat f);
#define GLFrustumfOES GLESLoadercontext->glFrustumfOES
// GL_API void GL_APIENTRY glGetClipPlanefOES (GLenum plane, GLfloat *equation);
#define GLGetClipPlanefOES GLESLoadercontext->glGetClipPlanefOES
// GL_API void GL_APIENTRY glOrthofOES (GLfloat l, GLfloat r, GLfloat b, GLfloat
// t, GLfloat n, GLfloat f);
#define GLOrthofOES GLESLoadercontext->glOrthofOES
// GL_API void GL_APIENTRY glTexGenfOES (GLenum coord, GLenum pname, GLfloat
// param);
#define GLTexGenfOES GLESLoadercontext->glTexGenfOES
// GL_API void GL_APIENTRY glTexGenfvOES (GLenum coord, GLenum pname, const
// GLfloat *params);
#define GLTexGenfvOES GLESLoadercontext->glTexGenfvOES
// GL_API void GL_APIENTRY glTexGeniOES (GLenum coord, GLenum pname, GLint
// param);
#define GLTexGeniOES GLESLoadercontext->glTexGeniOES
// GL_API void GL_APIENTRY glTexGenivOES (GLenum coord, GLenum pname, const
// GLint *params);
#define GLTexGenivOES GLESLoadercontext->glTexGenivOES
// GL_API void GL_APIENTRY glGetTexGenfvOES (GLenum coord, GLenum pname, GLfloat
// *params);
#define GLGetTexGenfvOES GLESLoadercontext->glGetTexGenfvOES
// GL_API void GL_APIENTRY glGetTexGenivOES (GLenum coord, GLenum pname, GLint
// *params);
#define GLGetTexGenivOES GLESLoadercontext->glGetTexGenivOES
// GL_API void GL_APIENTRY glBindVertexArrayOES (GLuint array);
#define GLBindVertexArrayOES GLESLoadercontext->glBindVertexArrayOES
// GL_API void GL_APIENTRY glDeleteVertexArraysOES (GLsizei n, const GLuint
// *arrays);
#define GLDeleteVertexArraysOES GLESLoadercontext->glDeleteVertexArraysOES
// GL_API void GL_APIENTRY glGenVertexArraysOES (GLsizei n, GLuint *arrays);
#define GLGenVertexArraysOES GLESLoadercontext->glGenVertexArraysOES
// GL_API GLboolean GL_APIENTRY glIsVertexArrayOES (GLuint array);
#define GLIsVertexArrayOES GLESLoadercontext->glIsVertexArrayOES
// GL_API void GL_APIENTRY glCopyTextureLevelsAPPLE (GLuint destinationTexture,
// GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount);
#define GLCopyTextureLevelsAPPLE GLESLoadercontext->glCopyTextureLevelsAPPLE
// GL_API void GL_APIENTRY glRenderbufferStorageMultisampleAPPLE (GLenum target,
// GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
#define GLRenderbufferStorageMultisampleAPPLE                                  \
  GLESLoadercontext->glRenderbufferStorageMultisampleAPPLE
// GL_API void GL_APIENTRY glResolveMultisampleFramebufferAPPLE (void);
#define GLResolveMultisampleFramebufferAPPLE                                   \
  GLESLoadercontext->glResolveMultisampleFramebufferAPPLE
// GL_API GLsync GL_APIENTRY glFenceSyncAPPLE (GLenum condition, GLbitfield
// flags);
#define GLFenceSyncAPPLE GLESLoadercontext->glFenceSyncAPPLE
// GL_API GLboolean GL_APIENTRY glIsSyncAPPLE (GLsync sync);
#define GLIsSyncAPPLE GLESLoadercontext->glIsSyncAPPLE
// GL_API void GL_APIENTRY glDeleteSyncAPPLE (GLsync sync);
#define GLDeleteSyncAPPLE GLESLoadercontext->glDeleteSyncAPPLE
// GL_API GLenum GL_APIENTRY glClientWaitSyncAPPLE (GLsync sync, GLbitfield
// flags, GLuint64 timeout);
#define GLClientWaitSyncAPPLE GLESLoadercontext->glClientWaitSyncAPPLE
// GL_API void GL_APIENTRY glWaitSyncAPPLE (GLsync sync, GLbitfield flags,
// GLuint64 timeout);
#define GLWaitSyncAPPLE GLESLoadercontext->glWaitSyncAPPLE
// GL_API void GL_APIENTRY glGetInteger64vAPPLE (GLenum pname, GLint64 *params);
#define GLGetInteger64vAPPLE GLESLoadercontext->glGetInteger64vAPPLE
// GL_API void GL_APIENTRY glGetSyncivAPPLE (GLsync sync, GLenum pname, GLsizei
// count, GLsizei *length, GLint *values);
#define GLGetSyncivAPPLE GLESLoadercontext->glGetSyncivAPPLE
// GL_API void GL_APIENTRY glInsertEventMarkerEXT (GLsizei length, const GLchar
// *marker);
#define GLInsertEventMarkerEXT GLESLoadercontext->glInsertEventMarkerEXT
// GL_API void GL_APIENTRY glPushGroupMarkerEXT (GLsizei length, const GLchar
// *marker);
#define GLPushGroupMarkerEXT GLESLoadercontext->glPushGroupMarkerEXT
// GL_API void GL_APIENTRY glPopGroupMarkerEXT (void);
#define GLPopGroupMarkerEXT GLESLoadercontext->glPopGroupMarkerEXT
// GL_API void GL_APIENTRY glDiscardFramebufferEXT (GLenum target, GLsizei
// numAttachments, const GLenum *attachments);
#define GLDiscardFramebufferEXT GLESLoadercontext->glDiscardFramebufferEXT
// GL_API void *GL_APIENTRY glMapBufferRangeEXT (GLenum target, GLintptr offset,
// GLsizeiptr length, GLbitfield access);
#define GLMapBufferRangeEXT GLESLoadercontext->glMapBufferRangeEXT
// GL_API void GL_APIENTRY glFlushMappedBufferRangeEXT (GLenum target, GLintptr
// offset, GLsizeiptr length);
#define GLFlushMappedBufferRangeEXT                                            \
  GLESLoadercontext->glFlushMappedBufferRangeEXT
// GL_API void GL_APIENTRY glMultiDrawArraysEXT (GLenum mode, const GLint
// *first, const GLsizei *count, GLsizei primcount);
#define GLMultiDrawArraysEXT GLESLoadercontext->glMultiDrawArraysEXT
// GL_API void GL_APIENTRY glMultiDrawElementsEXT (GLenum mode, const GLsizei
// *count, GLenum type, const void *const*indices, GLsizei primcount);
#define GLMultiDrawElementsEXT GLESLoadercontext->glMultiDrawElementsEXT
// GL_API void GL_APIENTRY glRenderbufferStorageMultisampleEXT (GLenum target,
// GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
#define GLRenderbufferStorageMultisampleEXT                                    \
  GLESLoadercontext->glRenderbufferStorageMultisampleEXT
// GL_API void GL_APIENTRY glFramebufferTexture2DMultisampleEXT (GLenum target,
// GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei
// samples);
#define GLFramebufferTexture2DMultisampleEXT                                   \
  GLESLoadercontext->glFramebufferTexture2DMultisampleEXT
// GL_API GLenum GL_APIENTRY glGetGraphicsResetStatusEXT (void);
#define GLGetGraphicsResetStatusEXT                                            \
  GLESLoadercontext->glGetGraphicsResetStatusEXT
// GL_API void GL_APIENTRY glReadnPixelsEXT (GLint x, GLint y, GLsizei width,
// GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
#define GLReadnPixelsEXT GLESLoadercontext->glReadnPixelsEXT
// GL_API void GL_APIENTRY glGetnUniformfvEXT (GLuint program, GLint location,
// GLsizei bufSize, GLfloat *params);
#define GLGetnUniformfvEXT GLESLoadercontext->glGetnUniformfvEXT
// GL_API void GL_APIENTRY glGetnUniformivEXT (GLuint program, GLint location,
// GLsizei bufSize, GLint *params);
#define GLGetnUniformivEXT GLESLoadercontext->glGetnUniformivEXT
// GL_API void GL_APIENTRY glTexStorage1DEXT (GLenum target, GLsizei levels,
// GLenum internalformat, GLsizei width);
#define GLTexStorage1DEXT GLESLoadercontext->glTexStorage1DEXT
// GL_API void GL_APIENTRY glTexStorage2DEXT (GLenum target, GLsizei levels,
// GLenum internalformat, GLsizei width, GLsizei height);
#define GLTexStorage2DEXT GLESLoadercontext->glTexStorage2DEXT
// GL_API void GL_APIENTRY glTexStorage3DEXT (GLenum target, GLsizei levels,
// GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
#define GLTexStorage3DEXT GLESLoadercontext->glTexStorage3DEXT
// GL_API void GL_APIENTRY glTextureStorage1DEXT (GLuint texture, GLenum target,
// GLsizei levels, GLenum internalformat, GLsizei width);
#define GLTextureStorage1DEXT GLESLoadercontext->glTextureStorage1DEXT
// GL_API void GL_APIENTRY glTextureStorage2DEXT (GLuint texture, GLenum target,
// GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
#define GLTextureStorage2DEXT GLESLoadercontext->glTextureStorage2DEXT
// GL_API void GL_APIENTRY glTextureStorage3DEXT (GLuint texture, GLenum target,
// GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei
// depth);
#define GLTextureStorage3DEXT GLESLoadercontext->glTextureStorage3DEXT
// GL_API void GL_APIENTRY glRenderbufferStorageMultisampleIMG (GLenum target,
// GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
#define GLRenderbufferStorageMultisampleIMG                                    \
  GLESLoadercontext->glRenderbufferStorageMultisampleIMG
// GL_API void GL_APIENTRY glFramebufferTexture2DMultisampleIMG (GLenum target,
// GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei
// samples);
#define GLFramebufferTexture2DMultisampleIMG                                   \
  GLESLoadercontext->glFramebufferTexture2DMultisampleIMG
// GL_API void GL_APIENTRY glClipPlanefIMG (GLenum p, const GLfloat *eqn);
#define GLClipPlanefIMG GLESLoadercontext->glClipPlanefIMG
// GL_API void GL_APIENTRY glClipPlanexIMG (GLenum p, const GLfixed *eqn);
#define GLClipPlanexIMG GLESLoadercontext->glClipPlanexIMG
// GL_API void GL_APIENTRY glDeleteFencesNV (GLsizei n, const GLuint *fences);
#define GLDeleteFencesNV GLESLoadercontext->glDeleteFencesNV
// GL_API void GL_APIENTRY glGenFencesNV (GLsizei n, GLuint *fences);
#define GLGenFencesNV GLESLoadercontext->glGenFencesNV
// GL_API GLboolean GL_APIENTRY glIsFenceNV (GLuint fence);
#define GLIsFenceNV GLESLoadercontext->glIsFenceNV
// GL_API GLboolean GL_APIENTRY glTestFenceNV (GLuint fence);
#define GLTestFenceNV GLESLoadercontext->glTestFenceNV
// GL_API void GL_APIENTRY glGetFenceivNV (GLuint fence, GLenum pname, GLint
// *params);
#define GLGetFenceivNV GLESLoadercontext->glGetFenceivNV
// GL_API void GL_APIENTRY glFinishFenceNV (GLuint fence);
#define GLFinishFenceNV GLESLoadercontext->glFinishFenceNV
// GL_API void GL_APIENTRY glSetFenceNV (GLuint fence, GLenum condition);
#define GLSetFenceNV GLESLoadercontext->glSetFenceNV
// GL_API void GL_APIENTRY glGetDriverControlsQCOM (GLint *num, GLsizei size,
// GLuint *driverControls);
#define GLGetDriverControlsQCOM GLESLoadercontext->glGetDriverControlsQCOM
// GL_API void GL_APIENTRY glGetDriverControlStringQCOM (GLuint driverControl,
// GLsizei bufSize, GLsizei *length, GLchar *driverControlString);
#define GLGetDriverControlStringQCOM                                           \
  GLESLoadercontext->glGetDriverControlStringQCOM
// GL_API void GL_APIENTRY glEnableDriverControlQCOM (GLuint driverControl);
#define GLEnableDriverControlQCOM GLESLoadercontext->glEnableDriverControlQCOM
// GL_API void GL_APIENTRY glDisableDriverControlQCOM (GLuint driverControl);
#define GLDisableDriverControlQCOM GLESLoadercontext->glDisableDriverControlQCOM
// GL_API void GL_APIENTRY glExtGetTexturesQCOM (GLuint *textures, GLint
// maxTextures, GLint *numTextures);
#define GLExtGetTexturesQCOM GLESLoadercontext->glExtGetTexturesQCOM
// GL_API void GL_APIENTRY glExtGetBuffersQCOM (GLuint *buffers, GLint
// maxBuffers, GLint *numBuffers);
#define GLExtGetBuffersQCOM GLESLoadercontext->glExtGetBuffersQCOM
// GL_API void GL_APIENTRY glExtGetRenderbuffersQCOM (GLuint *renderbuffers,
// GLint maxRenderbuffers, GLint *numRenderbuffers);
#define GLExtGetRenderbuffersQCOM GLESLoadercontext->glExtGetRenderbuffersQCOM
// GL_API void GL_APIENTRY glExtGetFramebuffersQCOM (GLuint *framebuffers, GLint
// maxFramebuffers, GLint *numFramebuffers);
#define GLExtGetFramebuffersQCOM GLESLoadercontext->glExtGetFramebuffersQCOM
// GL_API void GL_APIENTRY glExtGetTexLevelParameterivQCOM (GLuint texture,
// GLenum face, GLint level, GLenum pname, GLint *params);
#define GLExtGetTexLevelParameterivQCOM                                        \
  GLESLoadercontext->glExtGetTexLevelParameterivQCOM
// GL_API void GL_APIENTRY glExtTexObjectStateOverrideiQCOM (GLenum target,
// GLenum pname, GLint param);
#define GLExtTexObjectStateOverrideiQCOM                                       \
  GLESLoadercontext->glExtTexObjectStateOverrideiQCOM
// GL_API void GL_APIENTRY glExtGetTexSubImageQCOM (GLenum target, GLint level,
// GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height,
// GLsizei depth, GLenum format, GLenum type, void *texels);
#define GLExtGetTexSubImageQCOM GLESLoadercontext->glExtGetTexSubImageQCOM
// GL_API void GL_APIENTRY glExtGetBufferPointervQCOM (GLenum target, void
// **params);
#define GLExtGetBufferPointervQCOM GLESLoadercontext->glExtGetBufferPointervQCOM
// GL_API void GL_APIENTRY glExtGetShadersQCOM (GLuint *shaders, GLint
// maxShaders, GLint *numShaders);
#define GLExtGetShadersQCOM GLESLoadercontext->glExtGetShadersQCOM
// GL_API void GL_APIENTRY glExtGetProgramsQCOM (GLuint *programs, GLint
// maxPrograms, GLint *numPrograms);
#define GLExtGetProgramsQCOM GLESLoadercontext->glExtGetProgramsQCOM
// GL_API GLboolean GL_APIENTRY glExtIsProgramBinaryQCOM (GLuint program);
#define GLExtIsProgramBinaryQCOM GLESLoadercontext->glExtIsProgramBinaryQCOM
// GL_API void GL_APIENTRY glExtGetProgramBinarySourceQCOM (GLuint program,
// GLenum shadertype, GLchar *source, GLint *length);
#define GLExtGetProgramBinarySourceQCOM                                        \
  GLESLoadercontext->glExtGetProgramBinarySourceQCOM
// GL_API void GL_APIENTRY glStartTilingQCOM (GLuint x, GLuint y, GLuint width,
// GLuint height, GLbitfield preserveMask);
#define GLStartTilingQCOM GLESLoadercontext->glStartTilingQCOM
// GL_API void GL_APIENTRY glEndTilingQCOM (GLbitfield preserveMask);
#define GLEndTilingQCOM GLESLoadercontext->glEndTilingQCOM
