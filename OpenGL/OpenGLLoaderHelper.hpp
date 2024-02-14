// GLAPI void APIENTRY glDrawRangeElements (GLenum mode, GLuint start, GLuint
// end, GLsizei count, GLenum type, const void *indices);
#define GLDrawRangeElements OpenGLLoadercontext->glDrawRangeElements
// GLAPI void APIENTRY glTexImage3D (GLenum target, GLint level, GLint
// internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border,
// GLenum format, GLenum type, const void *pixels);
#define GLTexImage3D OpenGLLoadercontext->glTexImage3D
// GLAPI void APIENTRY glTexSubImage3D (GLenum target, GLint level, GLint
// xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei
// depth, GLenum format, GLenum type, const void *pixels);
#define GLTexSubImage3D OpenGLLoadercontext->glTexSubImage3D
// GLAPI void APIENTRY glCopyTexSubImage3D (GLenum target, GLint level, GLint
// xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width,
// GLsizei height);
#define GLCopyTexSubImage3D OpenGLLoadercontext->glCopyTexSubImage3D
// GLAPI void APIENTRY glActiveTexture (GLenum texture);
#define GLActiveTexture OpenGLLoadercontext->glActiveTexture
// GLAPI void APIENTRY glSampleCoverage (GLfloat value, GLboolean invert);
#define GLSampleCoverage OpenGLLoadercontext->glSampleCoverage
// GLAPI void APIENTRY glCompressedTexImage3D (GLenum target, GLint level,
// GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint
// border, GLsizei imageSize, const void *data);
#define GLCompressedTexImage3D OpenGLLoadercontext->glCompressedTexImage3D
// GLAPI void APIENTRY glCompressedTexImage2D (GLenum target, GLint level,
// GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei
// imageSize, const void *data);
#define GLCompressedTexImage2D OpenGLLoadercontext->glCompressedTexImage2D
// GLAPI void APIENTRY glCompressedTexImage1D (GLenum target, GLint level,
// GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const
// void *data);
#define GLCompressedTexImage1D OpenGLLoadercontext->glCompressedTexImage1D
// GLAPI void APIENTRY glCompressedTexSubImage3D (GLenum target, GLint level,
// GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height,
// GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
#define GLCompressedTexSubImage3D OpenGLLoadercontext->glCompressedTexSubImage3D
// GLAPI void APIENTRY glCompressedTexSubImage2D (GLenum target, GLint level,
// GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format,
// GLsizei imageSize, const void *data);
#define GLCompressedTexSubImage2D OpenGLLoadercontext->glCompressedTexSubImage2D
// GLAPI void APIENTRY glCompressedTexSubImage1D (GLenum target, GLint level,
// GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void
// *data);
#define GLCompressedTexSubImage1D OpenGLLoadercontext->glCompressedTexSubImage1D
// GLAPI void APIENTRY glGetCompressedTexImage (GLenum target, GLint level, void
// *img);
#define GLGetCompressedTexImage OpenGLLoadercontext->glGetCompressedTexImage
// GLAPI void APIENTRY glClientActiveTexture (GLenum texture);
#define GLClientActiveTexture OpenGLLoadercontext->glClientActiveTexture
// GLAPI void APIENTRY glMultiTexCoord1d (GLenum target, GLdouble s);
#define GLMultiTexCoord1d OpenGLLoadercontext->glMultiTexCoord1d
// GLAPI void APIENTRY glMultiTexCoord1dv (GLenum target, const GLdouble *v);
#define GLMultiTexCoord1dv OpenGLLoadercontext->glMultiTexCoord1dv
// GLAPI void APIENTRY glMultiTexCoord1f (GLenum target, GLfloat s);
#define GLMultiTexCoord1f OpenGLLoadercontext->glMultiTexCoord1f
// GLAPI void APIENTRY glMultiTexCoord1fv (GLenum target, const GLfloat *v);
#define GLMultiTexCoord1fv OpenGLLoadercontext->glMultiTexCoord1fv
// GLAPI void APIENTRY glMultiTexCoord1i (GLenum target, GLint s);
#define GLMultiTexCoord1i OpenGLLoadercontext->glMultiTexCoord1i
// GLAPI void APIENTRY glMultiTexCoord1iv (GLenum target, const GLint *v);
#define GLMultiTexCoord1iv OpenGLLoadercontext->glMultiTexCoord1iv
// GLAPI void APIENTRY glMultiTexCoord1s (GLenum target, GLshort s);
#define GLMultiTexCoord1s OpenGLLoadercontext->glMultiTexCoord1s
// GLAPI void APIENTRY glMultiTexCoord1sv (GLenum target, const GLshort *v);
#define GLMultiTexCoord1sv OpenGLLoadercontext->glMultiTexCoord1sv
// GLAPI void APIENTRY glMultiTexCoord2d (GLenum target, GLdouble s, GLdouble
// t);
#define GLMultiTexCoord2d OpenGLLoadercontext->glMultiTexCoord2d
// GLAPI void APIENTRY glMultiTexCoord2dv (GLenum target, const GLdouble *v);
#define GLMultiTexCoord2dv OpenGLLoadercontext->glMultiTexCoord2dv
// GLAPI void APIENTRY glMultiTexCoord2f (GLenum target, GLfloat s, GLfloat t);
#define GLMultiTexCoord2f OpenGLLoadercontext->glMultiTexCoord2f
// GLAPI void APIENTRY glMultiTexCoord2fv (GLenum target, const GLfloat *v);
#define GLMultiTexCoord2fv OpenGLLoadercontext->glMultiTexCoord2fv
// GLAPI void APIENTRY glMultiTexCoord2i (GLenum target, GLint s, GLint t);
#define GLMultiTexCoord2i OpenGLLoadercontext->glMultiTexCoord2i
// GLAPI void APIENTRY glMultiTexCoord2iv (GLenum target, const GLint *v);
#define GLMultiTexCoord2iv OpenGLLoadercontext->glMultiTexCoord2iv
// GLAPI void APIENTRY glMultiTexCoord2s (GLenum target, GLshort s, GLshort t);
#define GLMultiTexCoord2s OpenGLLoadercontext->glMultiTexCoord2s
// GLAPI void APIENTRY glMultiTexCoord2sv (GLenum target, const GLshort *v);
#define GLMultiTexCoord2sv OpenGLLoadercontext->glMultiTexCoord2sv
// GLAPI void APIENTRY glMultiTexCoord3d (GLenum target, GLdouble s, GLdouble t,
// GLdouble r);
#define GLMultiTexCoord3d OpenGLLoadercontext->glMultiTexCoord3d
// GLAPI void APIENTRY glMultiTexCoord3dv (GLenum target, const GLdouble *v);
#define GLMultiTexCoord3dv OpenGLLoadercontext->glMultiTexCoord3dv
// GLAPI void APIENTRY glMultiTexCoord3f (GLenum target, GLfloat s, GLfloat t,
// GLfloat r);
#define GLMultiTexCoord3f OpenGLLoadercontext->glMultiTexCoord3f
// GLAPI void APIENTRY glMultiTexCoord3fv (GLenum target, const GLfloat *v);
#define GLMultiTexCoord3fv OpenGLLoadercontext->glMultiTexCoord3fv
// GLAPI void APIENTRY glMultiTexCoord3i (GLenum target, GLint s, GLint t, GLint
// r);
#define GLMultiTexCoord3i OpenGLLoadercontext->glMultiTexCoord3i
// GLAPI void APIENTRY glMultiTexCoord3iv (GLenum target, const GLint *v);
#define GLMultiTexCoord3iv OpenGLLoadercontext->glMultiTexCoord3iv
// GLAPI void APIENTRY glMultiTexCoord3s (GLenum target, GLshort s, GLshort t,
// GLshort r);
#define GLMultiTexCoord3s OpenGLLoadercontext->glMultiTexCoord3s
// GLAPI void APIENTRY glMultiTexCoord3sv (GLenum target, const GLshort *v);
#define GLMultiTexCoord3sv OpenGLLoadercontext->glMultiTexCoord3sv
// GLAPI void APIENTRY glMultiTexCoord4d (GLenum target, GLdouble s, GLdouble t,
// GLdouble r, GLdouble q);
#define GLMultiTexCoord4d OpenGLLoadercontext->glMultiTexCoord4d
// GLAPI void APIENTRY glMultiTexCoord4dv (GLenum target, const GLdouble *v);
#define GLMultiTexCoord4dv OpenGLLoadercontext->glMultiTexCoord4dv
// GLAPI void APIENTRY glMultiTexCoord4f (GLenum target, GLfloat s, GLfloat t,
// GLfloat r, GLfloat q);
#define GLMultiTexCoord4f OpenGLLoadercontext->glMultiTexCoord4f
// GLAPI void APIENTRY glMultiTexCoord4fv (GLenum target, const GLfloat *v);
#define GLMultiTexCoord4fv OpenGLLoadercontext->glMultiTexCoord4fv
// GLAPI void APIENTRY glMultiTexCoord4i (GLenum target, GLint s, GLint t, GLint
// r, GLint q);
#define GLMultiTexCoord4i OpenGLLoadercontext->glMultiTexCoord4i
// GLAPI void APIENTRY glMultiTexCoord4iv (GLenum target, const GLint *v);
#define GLMultiTexCoord4iv OpenGLLoadercontext->glMultiTexCoord4iv
// GLAPI void APIENTRY glMultiTexCoord4s (GLenum target, GLshort s, GLshort t,
// GLshort r, GLshort q);
#define GLMultiTexCoord4s OpenGLLoadercontext->glMultiTexCoord4s
// GLAPI void APIENTRY glMultiTexCoord4sv (GLenum target, const GLshort *v);
#define GLMultiTexCoord4sv OpenGLLoadercontext->glMultiTexCoord4sv
// GLAPI void APIENTRY glLoadTransposeMatrixf (const GLfloat *m);
#define GLLoadTransposeMatrixf OpenGLLoadercontext->glLoadTransposeMatrixf
// GLAPI void APIENTRY glLoadTransposeMatrixd (const GLdouble *m);
#define GLLoadTransposeMatrixd OpenGLLoadercontext->glLoadTransposeMatrixd
// GLAPI void APIENTRY glMultTransposeMatrixf (const GLfloat *m);
#define GLMultTransposeMatrixf OpenGLLoadercontext->glMultTransposeMatrixf
// GLAPI void APIENTRY glMultTransposeMatrixd (const GLdouble *m);
#define GLMultTransposeMatrixd OpenGLLoadercontext->glMultTransposeMatrixd
// GLAPI void APIENTRY glBlendFuncSeparate (GLenum sfactorRGB, GLenum
// dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
#define GLBlendFuncSeparate OpenGLLoadercontext->glBlendFuncSeparate
// GLAPI void APIENTRY glMultiDrawArrays (GLenum mode, const GLint *first, const
// GLsizei *count, GLsizei drawcount);
#define GLMultiDrawArrays OpenGLLoadercontext->glMultiDrawArrays
// GLAPI void APIENTRY glMultiDrawElements (GLenum mode, const GLsizei *count,
// GLenum type, const void *const*indices, GLsizei drawcount);
#define GLMultiDrawElements OpenGLLoadercontext->glMultiDrawElements
// GLAPI void APIENTRY glPointParameterf (GLenum pname, GLfloat param);
#define GLPointParameterf OpenGLLoadercontext->glPointParameterf
// GLAPI void APIENTRY glPointParameterfv (GLenum pname, const GLfloat *params);
#define GLPointParameterfv OpenGLLoadercontext->glPointParameterfv
// GLAPI void APIENTRY glPointParameteri (GLenum pname, GLint param);
#define GLPointParameteri OpenGLLoadercontext->glPointParameteri
// GLAPI void APIENTRY glPointParameteriv (GLenum pname, const GLint *params);
#define GLPointParameteriv OpenGLLoadercontext->glPointParameteriv
// GLAPI void APIENTRY glFogCoordf (GLfloat coord);
#define GLFogCoordf OpenGLLoadercontext->glFogCoordf
// GLAPI void APIENTRY glFogCoordfv (const GLfloat *coord);
#define GLFogCoordfv OpenGLLoadercontext->glFogCoordfv
// GLAPI void APIENTRY glFogCoordd (GLdouble coord);
#define GLFogCoordd OpenGLLoadercontext->glFogCoordd
// GLAPI void APIENTRY glFogCoorddv (const GLdouble *coord);
#define GLFogCoorddv OpenGLLoadercontext->glFogCoorddv
// GLAPI void APIENTRY glFogCoordPointer (GLenum type, GLsizei stride, const
// void *pointer);
#define GLFogCoordPointer OpenGLLoadercontext->glFogCoordPointer
// GLAPI void APIENTRY glSecondaryColor3b (GLbyte red, GLbyte green, GLbyte
// blue);
#define GLSecondaryColor3b OpenGLLoadercontext->glSecondaryColor3b
// GLAPI void APIENTRY glSecondaryColor3bv (const GLbyte *v);
#define GLSecondaryColor3bv OpenGLLoadercontext->glSecondaryColor3bv
// GLAPI void APIENTRY glSecondaryColor3d (GLdouble red, GLdouble green,
// GLdouble blue);
#define GLSecondaryColor3d OpenGLLoadercontext->glSecondaryColor3d
// GLAPI void APIENTRY glSecondaryColor3dv (const GLdouble *v);
#define GLSecondaryColor3dv OpenGLLoadercontext->glSecondaryColor3dv
// GLAPI void APIENTRY glSecondaryColor3f (GLfloat red, GLfloat green, GLfloat
// blue);
#define GLSecondaryColor3f OpenGLLoadercontext->glSecondaryColor3f
// GLAPI void APIENTRY glSecondaryColor3fv (const GLfloat *v);
#define GLSecondaryColor3fv OpenGLLoadercontext->glSecondaryColor3fv
// GLAPI void APIENTRY glSecondaryColor3i (GLint red, GLint green, GLint blue);
#define GLSecondaryColor3i OpenGLLoadercontext->glSecondaryColor3i
// GLAPI void APIENTRY glSecondaryColor3iv (const GLint *v);
#define GLSecondaryColor3iv OpenGLLoadercontext->glSecondaryColor3iv
// GLAPI void APIENTRY glSecondaryColor3s (GLshort red, GLshort green, GLshort
// blue);
#define GLSecondaryColor3s OpenGLLoadercontext->glSecondaryColor3s
// GLAPI void APIENTRY glSecondaryColor3sv (const GLshort *v);
#define GLSecondaryColor3sv OpenGLLoadercontext->glSecondaryColor3sv
// GLAPI void APIENTRY glSecondaryColor3ub (GLubyte red, GLubyte green, GLubyte
// blue);
#define GLSecondaryColor3ub OpenGLLoadercontext->glSecondaryColor3ub
// GLAPI void APIENTRY glSecondaryColor3ubv (const GLubyte *v);
#define GLSecondaryColor3ubv OpenGLLoadercontext->glSecondaryColor3ubv
// GLAPI void APIENTRY glSecondaryColor3ui (GLuint red, GLuint green, GLuint
// blue);
#define GLSecondaryColor3ui OpenGLLoadercontext->glSecondaryColor3ui
// GLAPI void APIENTRY glSecondaryColor3uiv (const GLuint *v);
#define GLSecondaryColor3uiv OpenGLLoadercontext->glSecondaryColor3uiv
// GLAPI void APIENTRY glSecondaryColor3us (GLushort red, GLushort green,
// GLushort blue);
#define GLSecondaryColor3us OpenGLLoadercontext->glSecondaryColor3us
// GLAPI void APIENTRY glSecondaryColor3usv (const GLushort *v);
#define GLSecondaryColor3usv OpenGLLoadercontext->glSecondaryColor3usv
// GLAPI void APIENTRY glSecondaryColorPointer (GLint size, GLenum type, GLsizei
// stride, const void *pointer);
#define GLSecondaryColorPointer OpenGLLoadercontext->glSecondaryColorPointer
// GLAPI void APIENTRY glWindowPos2d (GLdouble x, GLdouble y);
#define GLWindowPos2d OpenGLLoadercontext->glWindowPos2d
// GLAPI void APIENTRY glWindowPos2dv (const GLdouble *v);
#define GLWindowPos2dv OpenGLLoadercontext->glWindowPos2dv
// GLAPI void APIENTRY glWindowPos2f (GLfloat x, GLfloat y);
#define GLWindowPos2f OpenGLLoadercontext->glWindowPos2f
// GLAPI void APIENTRY glWindowPos2fv (const GLfloat *v);
#define GLWindowPos2fv OpenGLLoadercontext->glWindowPos2fv
// GLAPI void APIENTRY glWindowPos2i (GLint x, GLint y);
#define GLWindowPos2i OpenGLLoadercontext->glWindowPos2i
// GLAPI void APIENTRY glWindowPos2iv (const GLint *v);
#define GLWindowPos2iv OpenGLLoadercontext->glWindowPos2iv
// GLAPI void APIENTRY glWindowPos2s (GLshort x, GLshort y);
#define GLWindowPos2s OpenGLLoadercontext->glWindowPos2s
// GLAPI void APIENTRY glWindowPos2sv (const GLshort *v);
#define GLWindowPos2sv OpenGLLoadercontext->glWindowPos2sv
// GLAPI void APIENTRY glWindowPos3d (GLdouble x, GLdouble y, GLdouble z);
#define GLWindowPos3d OpenGLLoadercontext->glWindowPos3d
// GLAPI void APIENTRY glWindowPos3dv (const GLdouble *v);
#define GLWindowPos3dv OpenGLLoadercontext->glWindowPos3dv
// GLAPI void APIENTRY glWindowPos3f (GLfloat x, GLfloat y, GLfloat z);
#define GLWindowPos3f OpenGLLoadercontext->glWindowPos3f
// GLAPI void APIENTRY glWindowPos3fv (const GLfloat *v);
#define GLWindowPos3fv OpenGLLoadercontext->glWindowPos3fv
// GLAPI void APIENTRY glWindowPos3i (GLint x, GLint y, GLint z);
#define GLWindowPos3i OpenGLLoadercontext->glWindowPos3i
// GLAPI void APIENTRY glWindowPos3iv (const GLint *v);
#define GLWindowPos3iv OpenGLLoadercontext->glWindowPos3iv
// GLAPI void APIENTRY glWindowPos3s (GLshort x, GLshort y, GLshort z);
#define GLWindowPos3s OpenGLLoadercontext->glWindowPos3s
// GLAPI void APIENTRY glWindowPos3sv (const GLshort *v);
#define GLWindowPos3sv OpenGLLoadercontext->glWindowPos3sv
// GLAPI void APIENTRY glBlendColor (GLfloat red, GLfloat green, GLfloat blue,
// GLfloat alpha);
#define GLBlendColor OpenGLLoadercontext->glBlendColor
// GLAPI void APIENTRY glBlendEquation (GLenum mode);
#define GLBlendEquation OpenGLLoadercontext->glBlendEquation
// GLAPI void APIENTRY glGenQueries (GLsizei n, GLuint *ids);
#define GLGenQueries OpenGLLoadercontext->glGenQueries
// GLAPI void APIENTRY glDeleteQueries (GLsizei n, const GLuint *ids);
#define GLDeleteQueries OpenGLLoadercontext->glDeleteQueries
// GLAPI GLboolean APIENTRY glIsQuery (GLuint id);
#define GLIsQuery OpenGLLoadercontext->glIsQuery
// GLAPI void APIENTRY glBeginQuery (GLenum target, GLuint id);
#define GLBeginQuery OpenGLLoadercontext->glBeginQuery
// GLAPI void APIENTRY glEndQuery (GLenum target);
#define GLEndQuery OpenGLLoadercontext->glEndQuery
// GLAPI void APIENTRY glGetQueryiv (GLenum target, GLenum pname, GLint
// *params);
#define GLGetQueryiv OpenGLLoadercontext->glGetQueryiv
// GLAPI void APIENTRY glGetQueryObjectiv (GLuint id, GLenum pname, GLint
// *params);
#define GLGetQueryObjectiv OpenGLLoadercontext->glGetQueryObjectiv
// GLAPI void APIENTRY glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint
// *params);
#define GLGetQueryObjectuiv OpenGLLoadercontext->glGetQueryObjectuiv
// GLAPI void APIENTRY glBindBuffer (GLenum target, GLuint buffer);
#define GLBindBuffer OpenGLLoadercontext->glBindBuffer
// GLAPI void APIENTRY glDeleteBuffers (GLsizei n, const GLuint *buffers);
#define GLDeleteBuffers OpenGLLoadercontext->glDeleteBuffers
// GLAPI void APIENTRY glGenBuffers (GLsizei n, GLuint *buffers);
#define GLGenBuffers OpenGLLoadercontext->glGenBuffers
// GLAPI GLboolean APIENTRY glIsBuffer (GLuint buffer);
#define GLIsBuffer OpenGLLoadercontext->glIsBuffer
// GLAPI void APIENTRY glBufferData (GLenum target, GLsizeiptr size, const void
// *data, GLenum usage);
#define GLBufferData OpenGLLoadercontext->glBufferData
// GLAPI void APIENTRY glBufferSubData (GLenum target, GLintptr offset,
// GLsizeiptr size, const void *data);
#define GLBufferSubData OpenGLLoadercontext->glBufferSubData
// GLAPI void APIENTRY glGetBufferSubData (GLenum target, GLintptr offset,
// GLsizeiptr size, void *data);
#define GLGetBufferSubData OpenGLLoadercontext->glGetBufferSubData
// GLAPI void *APIENTRY glMapBuffer (GLenum target, GLenum access);
#define GLMapBuffer OpenGLLoadercontext->glMapBuffer
// GLAPI GLboolean APIENTRY glUnmapBuffer (GLenum target);
#define GLUnmapBuffer OpenGLLoadercontext->glUnmapBuffer
// GLAPI void APIENTRY glGetBufferParameteriv (GLenum target, GLenum pname,
// GLint *params);
#define GLGetBufferParameteriv OpenGLLoadercontext->glGetBufferParameteriv
// GLAPI void APIENTRY glGetBufferPointerv (GLenum target, GLenum pname, void
// **params);
#define GLGetBufferPointerv OpenGLLoadercontext->glGetBufferPointerv
// GLAPI void APIENTRY glBlendEquationSeparate (GLenum modeRGB, GLenum
// modeAlpha);
#define GLBlendEquationSeparate OpenGLLoadercontext->glBlendEquationSeparate
// GLAPI void APIENTRY glDrawBuffers (GLsizei n, const GLenum *bufs);
#define GLDrawBuffers OpenGLLoadercontext->glDrawBuffers
// GLAPI void APIENTRY glStencilOpSeparate (GLenum face, GLenum sfail, GLenum
// dpfail, GLenum dppass);
#define GLStencilOpSeparate OpenGLLoadercontext->glStencilOpSeparate
// GLAPI void APIENTRY glStencilFuncSeparate (GLenum face, GLenum func, GLint
// ref, GLuint mask);
#define GLStencilFuncSeparate OpenGLLoadercontext->glStencilFuncSeparate
// GLAPI void APIENTRY glStencilMaskSeparate (GLenum face, GLuint mask);
#define GLStencilMaskSeparate OpenGLLoadercontext->glStencilMaskSeparate
// GLAPI void APIENTRY glAttachShader (GLuint program, GLuint shader);
#define GLAttachShader OpenGLLoadercontext->glAttachShader
// GLAPI void APIENTRY glBindAttribLocation (GLuint program, GLuint index, const
// GLchar *name);
#define GLBindAttribLocation OpenGLLoadercontext->glBindAttribLocation
// GLAPI void APIENTRY glCompileShader (GLuint shader);
#define GLCompileShader OpenGLLoadercontext->glCompileShader
// GLAPI GLuint APIENTRY glCreateProgram (void);
#define GLCreateProgram OpenGLLoadercontext->glCreateProgram
// GLAPI GLuint APIENTRY glCreateShader (GLenum type);
#define GLCreateShader OpenGLLoadercontext->glCreateShader
// GLAPI void APIENTRY glDeleteProgram (GLuint program);
#define GLDeleteProgram OpenGLLoadercontext->glDeleteProgram
// GLAPI void APIENTRY glDeleteShader (GLuint shader);
#define GLDeleteShader OpenGLLoadercontext->glDeleteShader
// GLAPI void APIENTRY glDetachShader (GLuint program, GLuint shader);
#define GLDetachShader OpenGLLoadercontext->glDetachShader
// GLAPI void APIENTRY glDisableVertexAttribArray (GLuint index);
#define GLDisableVertexAttribArray                                             \
  OpenGLLoadercontext->glDisableVertexAttribArray
// GLAPI void APIENTRY glEnableVertexAttribArray (GLuint index);
#define GLEnableVertexAttribArray OpenGLLoadercontext->glEnableVertexAttribArray
// GLAPI void APIENTRY glGetActiveAttrib (GLuint program, GLuint index, GLsizei
// bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
#define GLGetActiveAttrib OpenGLLoadercontext->glGetActiveAttrib
// GLAPI void APIENTRY glGetActiveUniform (GLuint program, GLuint index, GLsizei
// bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
#define GLGetActiveUniform OpenGLLoadercontext->glGetActiveUniform
// GLAPI void APIENTRY glGetAttachedShaders (GLuint program, GLsizei maxCount,
// GLsizei *count, GLuint *shaders);
#define GLGetAttachedShaders OpenGLLoadercontext->glGetAttachedShaders
// GLAPI GLint APIENTRY glGetAttribLocation (GLuint program, const GLchar
// *name);
#define GLGetAttribLocation OpenGLLoadercontext->glGetAttribLocation
// GLAPI void APIENTRY glGetProgramiv (GLuint program, GLenum pname, GLint
// *params);
#define GLGetProgramiv OpenGLLoadercontext->glGetProgramiv
// GLAPI void APIENTRY glGetProgramInfoLog (GLuint program, GLsizei bufSize,
// GLsizei *length, GLchar *infoLog);
#define GLGetProgramInfoLog OpenGLLoadercontext->glGetProgramInfoLog
// GLAPI void APIENTRY glGetShaderiv (GLuint shader, GLenum pname, GLint
// *params);
#define GLGetShaderiv OpenGLLoadercontext->glGetShaderiv
// GLAPI void APIENTRY glGetShaderInfoLog (GLuint shader, GLsizei bufSize,
// GLsizei *length, GLchar *infoLog);
#define GLGetShaderInfoLog OpenGLLoadercontext->glGetShaderInfoLog
// GLAPI void APIENTRY glGetShaderSource (GLuint shader, GLsizei bufSize,
// GLsizei *length, GLchar *source);
#define GLGetShaderSource OpenGLLoadercontext->glGetShaderSource
// GLAPI GLint APIENTRY glGetUniformLocation (GLuint program, const GLchar
// *name);
#define GLGetUniformLocation OpenGLLoadercontext->glGetUniformLocation
// GLAPI void APIENTRY glGetUniformfv (GLuint program, GLint location, GLfloat
// *params);
#define GLGetUniformfv OpenGLLoadercontext->glGetUniformfv
// GLAPI void APIENTRY glGetUniformiv (GLuint program, GLint location, GLint
// *params);
#define GLGetUniformiv OpenGLLoadercontext->glGetUniformiv
// GLAPI void APIENTRY glGetVertexAttribdv (GLuint index, GLenum pname, GLdouble
// *params);
#define GLGetVertexAttribdv OpenGLLoadercontext->glGetVertexAttribdv
// GLAPI void APIENTRY glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat
// *params);
#define GLGetVertexAttribfv OpenGLLoadercontext->glGetVertexAttribfv
// GLAPI void APIENTRY glGetVertexAttribiv (GLuint index, GLenum pname, GLint
// *params);
#define GLGetVertexAttribiv OpenGLLoadercontext->glGetVertexAttribiv
// GLAPI void APIENTRY glGetVertexAttribPointerv (GLuint index, GLenum pname,
// void **pointer);
#define GLGetVertexAttribPointerv OpenGLLoadercontext->glGetVertexAttribPointerv
// GLAPI GLboolean APIENTRY glIsProgram (GLuint program);
#define GLIsProgram OpenGLLoadercontext->glIsProgram
// GLAPI GLboolean APIENTRY glIsShader (GLuint shader);
#define GLIsShader OpenGLLoadercontext->glIsShader
// GLAPI void APIENTRY glLinkProgram (GLuint program);
#define GLLinkProgram OpenGLLoadercontext->glLinkProgram
// GLAPI void APIENTRY glShaderSource (GLuint shader, GLsizei count, const
// GLchar *const*string, const GLint *length);
#define GLShaderSource OpenGLLoadercontext->glShaderSource
// GLAPI void APIENTRY glUseProgram (GLuint program);
#define GLUseProgram OpenGLLoadercontext->glUseProgram
// GLAPI void APIENTRY glUniform1f (GLint location, GLfloat v0);
#define GLUniform1f OpenGLLoadercontext->glUniform1f
// GLAPI void APIENTRY glUniform2f (GLint location, GLfloat v0, GLfloat v1);
#define GLUniform2f OpenGLLoadercontext->glUniform2f
// GLAPI void APIENTRY glUniform3f (GLint location, GLfloat v0, GLfloat v1,
// GLfloat v2);
#define GLUniform3f OpenGLLoadercontext->glUniform3f
// GLAPI void APIENTRY glUniform4f (GLint location, GLfloat v0, GLfloat v1,
// GLfloat v2, GLfloat v3);
#define GLUniform4f OpenGLLoadercontext->glUniform4f
// GLAPI void APIENTRY glUniform1i (GLint location, GLint v0);
#define GLUniform1i OpenGLLoadercontext->glUniform1i
// GLAPI void APIENTRY glUniform2i (GLint location, GLint v0, GLint v1);
#define GLUniform2i OpenGLLoadercontext->glUniform2i
// GLAPI void APIENTRY glUniform3i (GLint location, GLint v0, GLint v1, GLint
// v2);
#define GLUniform3i OpenGLLoadercontext->glUniform3i
// GLAPI void APIENTRY glUniform4i (GLint location, GLint v0, GLint v1, GLint
// v2, GLint v3);
#define GLUniform4i OpenGLLoadercontext->glUniform4i
// GLAPI void APIENTRY glUniform1fv (GLint location, GLsizei count, const
// GLfloat *value);
#define GLUniform1fv OpenGLLoadercontext->glUniform1fv
// GLAPI void APIENTRY glUniform2fv (GLint location, GLsizei count, const
// GLfloat *value);
#define GLUniform2fv OpenGLLoadercontext->glUniform2fv
// GLAPI void APIENTRY glUniform3fv (GLint location, GLsizei count, const
// GLfloat *value);
#define GLUniform3fv OpenGLLoadercontext->glUniform3fv
// GLAPI void APIENTRY glUniform4fv (GLint location, GLsizei count, const
// GLfloat *value);
#define GLUniform4fv OpenGLLoadercontext->glUniform4fv
// GLAPI void APIENTRY glUniform1iv (GLint location, GLsizei count, const GLint
// *value);
#define GLUniform1iv OpenGLLoadercontext->glUniform1iv
// GLAPI void APIENTRY glUniform2iv (GLint location, GLsizei count, const GLint
// *value);
#define GLUniform2iv OpenGLLoadercontext->glUniform2iv
// GLAPI void APIENTRY glUniform3iv (GLint location, GLsizei count, const GLint
// *value);
#define GLUniform3iv OpenGLLoadercontext->glUniform3iv
// GLAPI void APIENTRY glUniform4iv (GLint location, GLsizei count, const GLint
// *value);
#define GLUniform4iv OpenGLLoadercontext->glUniform4iv
// GLAPI void APIENTRY glUniformMatrix2fv (GLint location, GLsizei count,
// GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix2fv OpenGLLoadercontext->glUniformMatrix2fv
// GLAPI void APIENTRY glUniformMatrix3fv (GLint location, GLsizei count,
// GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix3fv OpenGLLoadercontext->glUniformMatrix3fv
// GLAPI void APIENTRY glUniformMatrix4fv (GLint location, GLsizei count,
// GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix4fv OpenGLLoadercontext->glUniformMatrix4fv
// GLAPI void APIENTRY glValidateProgram (GLuint program);
#define GLValidateProgram OpenGLLoadercontext->glValidateProgram
// GLAPI void APIENTRY glVertexAttrib1d (GLuint index, GLdouble x);
#define GLVertexAttrib1d OpenGLLoadercontext->glVertexAttrib1d
// GLAPI void APIENTRY glVertexAttrib1dv (GLuint index, const GLdouble *v);
#define GLVertexAttrib1dv OpenGLLoadercontext->glVertexAttrib1dv
// GLAPI void APIENTRY glVertexAttrib1f (GLuint index, GLfloat x);
#define GLVertexAttrib1f OpenGLLoadercontext->glVertexAttrib1f
// GLAPI void APIENTRY glVertexAttrib1fv (GLuint index, const GLfloat *v);
#define GLVertexAttrib1fv OpenGLLoadercontext->glVertexAttrib1fv
// GLAPI void APIENTRY glVertexAttrib1s (GLuint index, GLshort x);
#define GLVertexAttrib1s OpenGLLoadercontext->glVertexAttrib1s
// GLAPI void APIENTRY glVertexAttrib1sv (GLuint index, const GLshort *v);
#define GLVertexAttrib1sv OpenGLLoadercontext->glVertexAttrib1sv
// GLAPI void APIENTRY glVertexAttrib2d (GLuint index, GLdouble x, GLdouble y);
#define GLVertexAttrib2d OpenGLLoadercontext->glVertexAttrib2d
// GLAPI void APIENTRY glVertexAttrib2dv (GLuint index, const GLdouble *v);
#define GLVertexAttrib2dv OpenGLLoadercontext->glVertexAttrib2dv
// GLAPI void APIENTRY glVertexAttrib2f (GLuint index, GLfloat x, GLfloat y);
#define GLVertexAttrib2f OpenGLLoadercontext->glVertexAttrib2f
// GLAPI void APIENTRY glVertexAttrib2fv (GLuint index, const GLfloat *v);
#define GLVertexAttrib2fv OpenGLLoadercontext->glVertexAttrib2fv
// GLAPI void APIENTRY glVertexAttrib2s (GLuint index, GLshort x, GLshort y);
#define GLVertexAttrib2s OpenGLLoadercontext->glVertexAttrib2s
// GLAPI void APIENTRY glVertexAttrib2sv (GLuint index, const GLshort *v);
#define GLVertexAttrib2sv OpenGLLoadercontext->glVertexAttrib2sv
// GLAPI void APIENTRY glVertexAttrib3d (GLuint index, GLdouble x, GLdouble y,
// GLdouble z);
#define GLVertexAttrib3d OpenGLLoadercontext->glVertexAttrib3d
// GLAPI void APIENTRY glVertexAttrib3dv (GLuint index, const GLdouble *v);
#define GLVertexAttrib3dv OpenGLLoadercontext->glVertexAttrib3dv
// GLAPI void APIENTRY glVertexAttrib3f (GLuint index, GLfloat x, GLfloat y,
// GLfloat z);
#define GLVertexAttrib3f OpenGLLoadercontext->glVertexAttrib3f
// GLAPI void APIENTRY glVertexAttrib3fv (GLuint index, const GLfloat *v);
#define GLVertexAttrib3fv OpenGLLoadercontext->glVertexAttrib3fv
// GLAPI void APIENTRY glVertexAttrib3s (GLuint index, GLshort x, GLshort y,
// GLshort z);
#define GLVertexAttrib3s OpenGLLoadercontext->glVertexAttrib3s
// GLAPI void APIENTRY glVertexAttrib3sv (GLuint index, const GLshort *v);
#define GLVertexAttrib3sv OpenGLLoadercontext->glVertexAttrib3sv
// GLAPI void APIENTRY glVertexAttrib4Nbv (GLuint index, const GLbyte *v);
#define GLVertexAttrib4Nbv OpenGLLoadercontext->glVertexAttrib4Nbv
// GLAPI void APIENTRY glVertexAttrib4Niv (GLuint index, const GLint *v);
#define GLVertexAttrib4Niv OpenGLLoadercontext->glVertexAttrib4Niv
// GLAPI void APIENTRY glVertexAttrib4Nsv (GLuint index, const GLshort *v);
#define GLVertexAttrib4Nsv OpenGLLoadercontext->glVertexAttrib4Nsv
// GLAPI void APIENTRY glVertexAttrib4Nub (GLuint index, GLubyte x, GLubyte y,
// GLubyte z, GLubyte w);
#define GLVertexAttrib4Nub OpenGLLoadercontext->glVertexAttrib4Nub
// GLAPI void APIENTRY glVertexAttrib4Nubv (GLuint index, const GLubyte *v);
#define GLVertexAttrib4Nubv OpenGLLoadercontext->glVertexAttrib4Nubv
// GLAPI void APIENTRY glVertexAttrib4Nuiv (GLuint index, const GLuint *v);
#define GLVertexAttrib4Nuiv OpenGLLoadercontext->glVertexAttrib4Nuiv
// GLAPI void APIENTRY glVertexAttrib4Nusv (GLuint index, const GLushort *v);
#define GLVertexAttrib4Nusv OpenGLLoadercontext->glVertexAttrib4Nusv
// GLAPI void APIENTRY glVertexAttrib4bv (GLuint index, const GLbyte *v);
#define GLVertexAttrib4bv OpenGLLoadercontext->glVertexAttrib4bv
// GLAPI void APIENTRY glVertexAttrib4d (GLuint index, GLdouble x, GLdouble y,
// GLdouble z, GLdouble w);
#define GLVertexAttrib4d OpenGLLoadercontext->glVertexAttrib4d
// GLAPI void APIENTRY glVertexAttrib4dv (GLuint index, const GLdouble *v);
#define GLVertexAttrib4dv OpenGLLoadercontext->glVertexAttrib4dv
// GLAPI void APIENTRY glVertexAttrib4f (GLuint index, GLfloat x, GLfloat y,
// GLfloat z, GLfloat w);
#define GLVertexAttrib4f OpenGLLoadercontext->glVertexAttrib4f
// GLAPI void APIENTRY glVertexAttrib4fv (GLuint index, const GLfloat *v);
#define GLVertexAttrib4fv OpenGLLoadercontext->glVertexAttrib4fv
// GLAPI void APIENTRY glVertexAttrib4iv (GLuint index, const GLint *v);
#define GLVertexAttrib4iv OpenGLLoadercontext->glVertexAttrib4iv
// GLAPI void APIENTRY glVertexAttrib4s (GLuint index, GLshort x, GLshort y,
// GLshort z, GLshort w);
#define GLVertexAttrib4s OpenGLLoadercontext->glVertexAttrib4s
// GLAPI void APIENTRY glVertexAttrib4sv (GLuint index, const GLshort *v);
#define GLVertexAttrib4sv OpenGLLoadercontext->glVertexAttrib4sv
// GLAPI void APIENTRY glVertexAttrib4ubv (GLuint index, const GLubyte *v);
#define GLVertexAttrib4ubv OpenGLLoadercontext->glVertexAttrib4ubv
// GLAPI void APIENTRY glVertexAttrib4uiv (GLuint index, const GLuint *v);
#define GLVertexAttrib4uiv OpenGLLoadercontext->glVertexAttrib4uiv
// GLAPI void APIENTRY glVertexAttrib4usv (GLuint index, const GLushort *v);
#define GLVertexAttrib4usv OpenGLLoadercontext->glVertexAttrib4usv
// GLAPI void APIENTRY glVertexAttribPointer (GLuint index, GLint size, GLenum
// type, GLboolean normalized, GLsizei stride, const void *pointer);
#define GLVertexAttribPointer OpenGLLoadercontext->glVertexAttribPointer
// GLAPI void APIENTRY glUniformMatrix2x3fv (GLint location, GLsizei count,
// GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix2x3fv OpenGLLoadercontext->glUniformMatrix2x3fv
// GLAPI void APIENTRY glUniformMatrix3x2fv (GLint location, GLsizei count,
// GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix3x2fv OpenGLLoadercontext->glUniformMatrix3x2fv
// GLAPI void APIENTRY glUniformMatrix2x4fv (GLint location, GLsizei count,
// GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix2x4fv OpenGLLoadercontext->glUniformMatrix2x4fv
// GLAPI void APIENTRY glUniformMatrix4x2fv (GLint location, GLsizei count,
// GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix4x2fv OpenGLLoadercontext->glUniformMatrix4x2fv
// GLAPI void APIENTRY glUniformMatrix3x4fv (GLint location, GLsizei count,
// GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix3x4fv OpenGLLoadercontext->glUniformMatrix3x4fv
// GLAPI void APIENTRY glUniformMatrix4x3fv (GLint location, GLsizei count,
// GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix4x3fv OpenGLLoadercontext->glUniformMatrix4x3fv
// GLAPI void APIENTRY glColorMaski (GLuint index, GLboolean r, GLboolean g,
// GLboolean b, GLboolean a);
#define GLColorMaski OpenGLLoadercontext->glColorMaski
// GLAPI void APIENTRY glGetBooleani_v (GLenum target, GLuint index, GLboolean
// *data);
#define GLGetBooleani_v OpenGLLoadercontext->glGetBooleani_v
// GLAPI void APIENTRY glGetIntegeri_v (GLenum target, GLuint index, GLint
// *data);
#define GLGetIntegeri_v OpenGLLoadercontext->glGetIntegeri_v
// GLAPI void APIENTRY glEnablei (GLenum target, GLuint index);
#define GLEnablei OpenGLLoadercontext->glEnablei
// GLAPI void APIENTRY glDisablei (GLenum target, GLuint index);
#define GLDisablei OpenGLLoadercontext->glDisablei
// GLAPI GLboolean APIENTRY glIsEnabledi (GLenum target, GLuint index);
#define GLIsEnabledi OpenGLLoadercontext->glIsEnabledi
// GLAPI void APIENTRY glBeginTransformFeedback (GLenum primitiveMode);
#define GLBeginTransformFeedback OpenGLLoadercontext->glBeginTransformFeedback
// GLAPI void APIENTRY glEndTransformFeedback (void);
#define GLEndTransformFeedback OpenGLLoadercontext->glEndTransformFeedback
// GLAPI void APIENTRY glBindBufferRange (GLenum target, GLuint index, GLuint
// buffer, GLintptr offset, GLsizeiptr size);
#define GLBindBufferRange OpenGLLoadercontext->glBindBufferRange
// GLAPI void APIENTRY glBindBufferBase (GLenum target, GLuint index, GLuint
// buffer);
#define GLBindBufferBase OpenGLLoadercontext->glBindBufferBase
// GLAPI void APIENTRY glTransformFeedbackVaryings (GLuint program, GLsizei
// count, const GLchar *const*varyings, GLenum bufferMode);
#define GLTransformFeedbackVaryings                                            \
  OpenGLLoadercontext->glTransformFeedbackVaryings
// GLAPI void APIENTRY glGetTransformFeedbackVarying (GLuint program, GLuint
// index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar
// *name);
#define GLGetTransformFeedbackVarying                                          \
  OpenGLLoadercontext->glGetTransformFeedbackVarying
// GLAPI void APIENTRY glClampColor (GLenum target, GLenum clamp);
#define GLClampColor OpenGLLoadercontext->glClampColor
// GLAPI void APIENTRY glBeginConditionalRender (GLuint id, GLenum mode);
#define GLBeginConditionalRender OpenGLLoadercontext->glBeginConditionalRender
// GLAPI void APIENTRY glEndConditionalRender (void);
#define GLEndConditionalRender OpenGLLoadercontext->glEndConditionalRender
// GLAPI void APIENTRY glVertexAttribIPointer (GLuint index, GLint size, GLenum
// type, GLsizei stride, const void *pointer);
#define GLVertexAttribIPointer OpenGLLoadercontext->glVertexAttribIPointer
// GLAPI void APIENTRY glGetVertexAttribIiv (GLuint index, GLenum pname, GLint
// *params);
#define GLGetVertexAttribIiv OpenGLLoadercontext->glGetVertexAttribIiv
// GLAPI void APIENTRY glGetVertexAttribIuiv (GLuint index, GLenum pname, GLuint
// *params);
#define GLGetVertexAttribIuiv OpenGLLoadercontext->glGetVertexAttribIuiv
// GLAPI void APIENTRY glVertexAttribI1i (GLuint index, GLint x);
#define GLVertexAttribI1i OpenGLLoadercontext->glVertexAttribI1i
// GLAPI void APIENTRY glVertexAttribI2i (GLuint index, GLint x, GLint y);
#define GLVertexAttribI2i OpenGLLoadercontext->glVertexAttribI2i
// GLAPI void APIENTRY glVertexAttribI3i (GLuint index, GLint x, GLint y, GLint
// z);
#define GLVertexAttribI3i OpenGLLoadercontext->glVertexAttribI3i
// GLAPI void APIENTRY glVertexAttribI4i (GLuint index, GLint x, GLint y, GLint
// z, GLint w);
#define GLVertexAttribI4i OpenGLLoadercontext->glVertexAttribI4i
// GLAPI void APIENTRY glVertexAttribI1ui (GLuint index, GLuint x);
#define GLVertexAttribI1ui OpenGLLoadercontext->glVertexAttribI1ui
// GLAPI void APIENTRY glVertexAttribI2ui (GLuint index, GLuint x, GLuint y);
#define GLVertexAttribI2ui OpenGLLoadercontext->glVertexAttribI2ui
// GLAPI void APIENTRY glVertexAttribI3ui (GLuint index, GLuint x, GLuint y,
// GLuint z);
#define GLVertexAttribI3ui OpenGLLoadercontext->glVertexAttribI3ui
// GLAPI void APIENTRY glVertexAttribI4ui (GLuint index, GLuint x, GLuint y,
// GLuint z, GLuint w);
#define GLVertexAttribI4ui OpenGLLoadercontext->glVertexAttribI4ui
// GLAPI void APIENTRY glVertexAttribI1iv (GLuint index, const GLint *v);
#define GLVertexAttribI1iv OpenGLLoadercontext->glVertexAttribI1iv
// GLAPI void APIENTRY glVertexAttribI2iv (GLuint index, const GLint *v);
#define GLVertexAttribI2iv OpenGLLoadercontext->glVertexAttribI2iv
// GLAPI void APIENTRY glVertexAttribI3iv (GLuint index, const GLint *v);
#define GLVertexAttribI3iv OpenGLLoadercontext->glVertexAttribI3iv
// GLAPI void APIENTRY glVertexAttribI4iv (GLuint index, const GLint *v);
#define GLVertexAttribI4iv OpenGLLoadercontext->glVertexAttribI4iv
// GLAPI void APIENTRY glVertexAttribI1uiv (GLuint index, const GLuint *v);
#define GLVertexAttribI1uiv OpenGLLoadercontext->glVertexAttribI1uiv
// GLAPI void APIENTRY glVertexAttribI2uiv (GLuint index, const GLuint *v);
#define GLVertexAttribI2uiv OpenGLLoadercontext->glVertexAttribI2uiv
// GLAPI void APIENTRY glVertexAttribI3uiv (GLuint index, const GLuint *v);
#define GLVertexAttribI3uiv OpenGLLoadercontext->glVertexAttribI3uiv
// GLAPI void APIENTRY glVertexAttribI4uiv (GLuint index, const GLuint *v);
#define GLVertexAttribI4uiv OpenGLLoadercontext->glVertexAttribI4uiv
// GLAPI void APIENTRY glVertexAttribI4bv (GLuint index, const GLbyte *v);
#define GLVertexAttribI4bv OpenGLLoadercontext->glVertexAttribI4bv
// GLAPI void APIENTRY glVertexAttribI4sv (GLuint index, const GLshort *v);
#define GLVertexAttribI4sv OpenGLLoadercontext->glVertexAttribI4sv
// GLAPI void APIENTRY glVertexAttribI4ubv (GLuint index, const GLubyte *v);
#define GLVertexAttribI4ubv OpenGLLoadercontext->glVertexAttribI4ubv
// GLAPI void APIENTRY glVertexAttribI4usv (GLuint index, const GLushort *v);
#define GLVertexAttribI4usv OpenGLLoadercontext->glVertexAttribI4usv
// GLAPI void APIENTRY glGetUniformuiv (GLuint program, GLint location, GLuint
// *params);
#define GLGetUniformuiv OpenGLLoadercontext->glGetUniformuiv
// GLAPI void APIENTRY glBindFragDataLocation (GLuint program, GLuint color,
// const GLchar *name);
#define GLBindFragDataLocation OpenGLLoadercontext->glBindFragDataLocation
// GLAPI GLint APIENTRY glGetFragDataLocation (GLuint program, const GLchar
// *name);
#define GLGetFragDataLocation OpenGLLoadercontext->glGetFragDataLocation
// GLAPI void APIENTRY glUniform1ui (GLint location, GLuint v0);
#define GLUniform1ui OpenGLLoadercontext->glUniform1ui
// GLAPI void APIENTRY glUniform2ui (GLint location, GLuint v0, GLuint v1);
#define GLUniform2ui OpenGLLoadercontext->glUniform2ui
// GLAPI void APIENTRY glUniform3ui (GLint location, GLuint v0, GLuint v1,
// GLuint v2);
#define GLUniform3ui OpenGLLoadercontext->glUniform3ui
// GLAPI void APIENTRY glUniform4ui (GLint location, GLuint v0, GLuint v1,
// GLuint v2, GLuint v3);
#define GLUniform4ui OpenGLLoadercontext->glUniform4ui
// GLAPI void APIENTRY glUniform1uiv (GLint location, GLsizei count, const
// GLuint *value);
#define GLUniform1uiv OpenGLLoadercontext->glUniform1uiv
// GLAPI void APIENTRY glUniform2uiv (GLint location, GLsizei count, const
// GLuint *value);
#define GLUniform2uiv OpenGLLoadercontext->glUniform2uiv
// GLAPI void APIENTRY glUniform3uiv (GLint location, GLsizei count, const
// GLuint *value);
#define GLUniform3uiv OpenGLLoadercontext->glUniform3uiv
// GLAPI void APIENTRY glUniform4uiv (GLint location, GLsizei count, const
// GLuint *value);
#define GLUniform4uiv OpenGLLoadercontext->glUniform4uiv
// GLAPI void APIENTRY glTexParameterIiv (GLenum target, GLenum pname, const
// GLint *params);
#define GLTexParameterIiv OpenGLLoadercontext->glTexParameterIiv
// GLAPI void APIENTRY glTexParameterIuiv (GLenum target, GLenum pname, const
// GLuint *params);
#define GLTexParameterIuiv OpenGLLoadercontext->glTexParameterIuiv
// GLAPI void APIENTRY glGetTexParameterIiv (GLenum target, GLenum pname, GLint
// *params);
#define GLGetTexParameterIiv OpenGLLoadercontext->glGetTexParameterIiv
// GLAPI void APIENTRY glGetTexParameterIuiv (GLenum target, GLenum pname,
// GLuint *params);
#define GLGetTexParameterIuiv OpenGLLoadercontext->glGetTexParameterIuiv
// GLAPI void APIENTRY glClearBufferiv (GLenum buffer, GLint drawbuffer, const
// GLint *value);
#define GLClearBufferiv OpenGLLoadercontext->glClearBufferiv
// GLAPI void APIENTRY glClearBufferuiv (GLenum buffer, GLint drawbuffer, const
// GLuint *value);
#define GLClearBufferuiv OpenGLLoadercontext->glClearBufferuiv
// GLAPI void APIENTRY glClearBufferfv (GLenum buffer, GLint drawbuffer, const
// GLfloat *value);
#define GLClearBufferfv OpenGLLoadercontext->glClearBufferfv
// GLAPI void APIENTRY glClearBufferfi (GLenum buffer, GLint drawbuffer, GLfloat
// depth, GLint stencil);
#define GLClearBufferfi OpenGLLoadercontext->glClearBufferfi
// GLAPI const GLubyte *APIENTRY glGetStringi (GLenum name, GLuint index);
#define GLGetStringi OpenGLLoadercontext->glGetStringi
// GLAPI GLboolean APIENTRY glIsRenderbuffer (GLuint renderbuffer);
#define GLIsRenderbuffer OpenGLLoadercontext->glIsRenderbuffer
// GLAPI void APIENTRY glBindRenderbuffer (GLenum target, GLuint renderbuffer);
#define GLBindRenderbuffer OpenGLLoadercontext->glBindRenderbuffer
// GLAPI void APIENTRY glDeleteRenderbuffers (GLsizei n, const GLuint
// *renderbuffers);
#define GLDeleteRenderbuffers OpenGLLoadercontext->glDeleteRenderbuffers
// GLAPI void APIENTRY glGenRenderbuffers (GLsizei n, GLuint *renderbuffers);
#define GLGenRenderbuffers OpenGLLoadercontext->glGenRenderbuffers
// GLAPI void APIENTRY glRenderbufferStorage (GLenum target, GLenum
// internalformat, GLsizei width, GLsizei height);
#define GLRenderbufferStorage OpenGLLoadercontext->glRenderbufferStorage
// GLAPI void APIENTRY glGetRenderbufferParameteriv (GLenum target, GLenum
// pname, GLint *params);
#define GLGetRenderbufferParameteriv                                           \
  OpenGLLoadercontext->glGetRenderbufferParameteriv
// GLAPI GLboolean APIENTRY glIsFramebuffer (GLuint framebuffer);
#define GLIsFramebuffer OpenGLLoadercontext->glIsFramebuffer
// GLAPI void APIENTRY glBindFramebuffer (GLenum target, GLuint framebuffer);
#define GLBindFramebuffer OpenGLLoadercontext->glBindFramebuffer
// GLAPI void APIENTRY glDeleteFramebuffers (GLsizei n, const GLuint
// *framebuffers);
#define GLDeleteFramebuffers OpenGLLoadercontext->glDeleteFramebuffers
// GLAPI void APIENTRY glGenFramebuffers (GLsizei n, GLuint *framebuffers);
#define GLGenFramebuffers OpenGLLoadercontext->glGenFramebuffers
// GLAPI GLenum APIENTRY glCheckFramebufferStatus (GLenum target);
#define GLCheckFramebufferStatus OpenGLLoadercontext->glCheckFramebufferStatus
// GLAPI void APIENTRY glFramebufferTexture1D (GLenum target, GLenum attachment,
// GLenum textarget, GLuint texture, GLint level);
#define GLFramebufferTexture1D OpenGLLoadercontext->glFramebufferTexture1D
// GLAPI void APIENTRY glFramebufferTexture2D (GLenum target, GLenum attachment,
// GLenum textarget, GLuint texture, GLint level);
#define GLFramebufferTexture2D OpenGLLoadercontext->glFramebufferTexture2D
// GLAPI void APIENTRY glFramebufferTexture3D (GLenum target, GLenum attachment,
// GLenum textarget, GLuint texture, GLint level, GLint zoffset);
#define GLFramebufferTexture3D OpenGLLoadercontext->glFramebufferTexture3D
// GLAPI void APIENTRY glFramebufferRenderbuffer (GLenum target, GLenum
// attachment, GLenum renderbuffertarget, GLuint renderbuffer);
#define GLFramebufferRenderbuffer OpenGLLoadercontext->glFramebufferRenderbuffer
// GLAPI void APIENTRY glGetFramebufferAttachmentParameteriv (GLenum target,
// GLenum attachment, GLenum pname, GLint *params);
#define GLGetFramebufferAttachmentParameteriv                                  \
  OpenGLLoadercontext->glGetFramebufferAttachmentParameteriv
// GLAPI void APIENTRY glGenerateMipmap (GLenum target);
#define GLGenerateMipmap OpenGLLoadercontext->glGenerateMipmap
// GLAPI void APIENTRY glBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1,
// GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield
// mask, GLenum filter);
#define GLBlitFramebuffer OpenGLLoadercontext->glBlitFramebuffer
// GLAPI void APIENTRY glRenderbufferStorageMultisample (GLenum target, GLsizei
// samples, GLenum internalformat, GLsizei width, GLsizei height);
#define GLRenderbufferStorageMultisample                                       \
  OpenGLLoadercontext->glRenderbufferStorageMultisample
// GLAPI void APIENTRY glFramebufferTextureLayer (GLenum target, GLenum
// attachment, GLuint texture, GLint level, GLint layer);
#define GLFramebufferTextureLayer OpenGLLoadercontext->glFramebufferTextureLayer
// GLAPI void *APIENTRY glMapBufferRange (GLenum target, GLintptr offset,
// GLsizeiptr length, GLbitfield access);
#define GLMapBufferRange OpenGLLoadercontext->glMapBufferRange
// GLAPI void APIENTRY glFlushMappedBufferRange (GLenum target, GLintptr offset,
// GLsizeiptr length);
#define GLFlushMappedBufferRange OpenGLLoadercontext->glFlushMappedBufferRange
// GLAPI void APIENTRY glBindVertexArray (GLuint array);
#define GLBindVertexArray OpenGLLoadercontext->glBindVertexArray
// GLAPI void APIENTRY glDeleteVertexArrays (GLsizei n, const GLuint *arrays);
#define GLDeleteVertexArrays OpenGLLoadercontext->glDeleteVertexArrays
// GLAPI void APIENTRY glGenVertexArrays (GLsizei n, GLuint *arrays);
#define GLGenVertexArrays OpenGLLoadercontext->glGenVertexArrays
// GLAPI GLboolean APIENTRY glIsVertexArray (GLuint array);
#define GLIsVertexArray OpenGLLoadercontext->glIsVertexArray
// GLAPI void APIENTRY glDrawArraysInstanced (GLenum mode, GLint first, GLsizei
// count, GLsizei instancecount);
#define GLDrawArraysInstanced OpenGLLoadercontext->glDrawArraysInstanced
// GLAPI void APIENTRY glDrawElementsInstanced (GLenum mode, GLsizei count,
// GLenum type, const void *indices, GLsizei instancecount);
#define GLDrawElementsInstanced OpenGLLoadercontext->glDrawElementsInstanced
// GLAPI void APIENTRY glTexBuffer (GLenum target, GLenum internalformat, GLuint
// buffer);
#define GLTexBuffer OpenGLLoadercontext->glTexBuffer
// GLAPI void APIENTRY glPrimitiveRestartIndex (GLuint index);
#define GLPrimitiveRestartIndex OpenGLLoadercontext->glPrimitiveRestartIndex
// GLAPI void APIENTRY glCopyBufferSubData (GLenum readTarget, GLenum
// writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
#define GLCopyBufferSubData OpenGLLoadercontext->glCopyBufferSubData
// GLAPI void APIENTRY glGetUniformIndices (GLuint program, GLsizei
// uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices);
#define GLGetUniformIndices OpenGLLoadercontext->glGetUniformIndices
// GLAPI void APIENTRY glGetActiveUniformsiv (GLuint program, GLsizei
// uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
#define GLGetActiveUniformsiv OpenGLLoadercontext->glGetActiveUniformsiv
// GLAPI void APIENTRY glGetActiveUniformName (GLuint program, GLuint
// uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName);
#define GLGetActiveUniformName OpenGLLoadercontext->glGetActiveUniformName
// GLAPI GLuint APIENTRY glGetUniformBlockIndex (GLuint program, const GLchar
// *uniformBlockName);
#define GLGetUniformBlockIndex OpenGLLoadercontext->glGetUniformBlockIndex
// GLAPI void APIENTRY glGetActiveUniformBlockiv (GLuint program, GLuint
// uniformBlockIndex, GLenum pname, GLint *params);
#define GLGetActiveUniformBlockiv OpenGLLoadercontext->glGetActiveUniformBlockiv
// GLAPI void APIENTRY glGetActiveUniformBlockName (GLuint program, GLuint
// uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar
// *uniformBlockName);
#define GLGetActiveUniformBlockName                                            \
  OpenGLLoadercontext->glGetActiveUniformBlockName
// GLAPI void APIENTRY glUniformBlockBinding (GLuint program, GLuint
// uniformBlockIndex, GLuint uniformBlockBinding);
#define GLUniformBlockBinding OpenGLLoadercontext->glUniformBlockBinding
// GLAPI void APIENTRY glDrawElementsBaseVertex (GLenum mode, GLsizei count,
// GLenum type, const void *indices, GLint basevertex);
#define GLDrawElementsBaseVertex OpenGLLoadercontext->glDrawElementsBaseVertex
// GLAPI void APIENTRY glDrawRangeElementsBaseVertex (GLenum mode, GLuint start,
// GLuint end, GLsizei count, GLenum type, const void *indices, GLint
// basevertex);
#define GLDrawRangeElementsBaseVertex                                          \
  OpenGLLoadercontext->glDrawRangeElementsBaseVertex
// GLAPI void APIENTRY glDrawElementsInstancedBaseVertex (GLenum mode, GLsizei
// count, GLenum type, const void *indices, GLsizei instancecount, GLint
// basevertex);
#define GLDrawElementsInstancedBaseVertex                                      \
  OpenGLLoadercontext->glDrawElementsInstancedBaseVertex
// GLAPI void APIENTRY glMultiDrawElementsBaseVertex (GLenum mode, const GLsizei
// *count, GLenum type, const void *const*indices, GLsizei drawcount, const
// GLint *basevertex);
#define GLMultiDrawElementsBaseVertex                                          \
  OpenGLLoadercontext->glMultiDrawElementsBaseVertex
// GLAPI void APIENTRY glProvokingVertex (GLenum mode);
#define GLProvokingVertex OpenGLLoadercontext->glProvokingVertex
// GLAPI GLsync APIENTRY glFenceSync (GLenum condition, GLbitfield flags);
#define GLFenceSync OpenGLLoadercontext->glFenceSync
// GLAPI GLboolean APIENTRY glIsSync (GLsync sync);
#define GLIsSync OpenGLLoadercontext->glIsSync
// GLAPI void APIENTRY glDeleteSync (GLsync sync);
#define GLDeleteSync OpenGLLoadercontext->glDeleteSync
// GLAPI GLenum APIENTRY glClientWaitSync (GLsync sync, GLbitfield flags,
// GLuint64 timeout);
#define GLClientWaitSync OpenGLLoadercontext->glClientWaitSync
// GLAPI void APIENTRY glWaitSync (GLsync sync, GLbitfield flags, GLuint64
// timeout);
#define GLWaitSync OpenGLLoadercontext->glWaitSync
// GLAPI void APIENTRY glGetInteger64v (GLenum pname, GLint64 *data);
#define GLGetInteger64v OpenGLLoadercontext->glGetInteger64v
// GLAPI void APIENTRY glGetSynciv (GLsync sync, GLenum pname, GLsizei count,
// GLsizei *length, GLint *values);
#define GLGetSynciv OpenGLLoadercontext->glGetSynciv
// GLAPI void APIENTRY glGetInteger64i_v (GLenum target, GLuint index, GLint64
// *data);
#define GLGetInteger64i_v OpenGLLoadercontext->glGetInteger64i_v
// GLAPI void APIENTRY glGetBufferParameteri64v (GLenum target, GLenum pname,
// GLint64 *params);
#define GLGetBufferParameteri64v OpenGLLoadercontext->glGetBufferParameteri64v
// GLAPI void APIENTRY glFramebufferTexture (GLenum target, GLenum attachment,
// GLuint texture, GLint level);
#define GLFramebufferTexture OpenGLLoadercontext->glFramebufferTexture
// GLAPI void APIENTRY glTexImage2DMultisample (GLenum target, GLsizei samples,
// GLenum internalformat, GLsizei width, GLsizei height, GLboolean
// fixedsamplelocations);
#define GLTexImage2DMultisample OpenGLLoadercontext->glTexImage2DMultisample
// GLAPI void APIENTRY glTexImage3DMultisample (GLenum target, GLsizei samples,
// GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth,
// GLboolean fixedsamplelocations);
#define GLTexImage3DMultisample OpenGLLoadercontext->glTexImage3DMultisample
// GLAPI void APIENTRY glGetMultisamplefv (GLenum pname, GLuint index, GLfloat
// *val);
#define GLGetMultisamplefv OpenGLLoadercontext->glGetMultisamplefv
// GLAPI void APIENTRY glSampleMaski (GLuint maskNumber, GLbitfield mask);
#define GLSampleMaski OpenGLLoadercontext->glSampleMaski
// GLAPI void APIENTRY glBindFragDataLocationIndexed (GLuint program, GLuint
// colorNumber, GLuint index, const GLchar *name);
#define GLBindFragDataLocationIndexed                                          \
  OpenGLLoadercontext->glBindFragDataLocationIndexed
// GLAPI GLint APIENTRY glGetFragDataIndex (GLuint program, const GLchar *name);
#define GLGetFragDataIndex OpenGLLoadercontext->glGetFragDataIndex
// GLAPI void APIENTRY glGenSamplers (GLsizei count, GLuint *samplers);
#define GLGenSamplers OpenGLLoadercontext->glGenSamplers
// GLAPI void APIENTRY glDeleteSamplers (GLsizei count, const GLuint *samplers);
#define GLDeleteSamplers OpenGLLoadercontext->glDeleteSamplers
// GLAPI GLboolean APIENTRY glIsSampler (GLuint sampler);
#define GLIsSampler OpenGLLoadercontext->glIsSampler
// GLAPI void APIENTRY glBindSampler (GLuint unit, GLuint sampler);
#define GLBindSampler OpenGLLoadercontext->glBindSampler
// GLAPI void APIENTRY glSamplerParameteri (GLuint sampler, GLenum pname, GLint
// param);
#define GLSamplerParameteri OpenGLLoadercontext->glSamplerParameteri
// GLAPI void APIENTRY glSamplerParameteriv (GLuint sampler, GLenum pname, const
// GLint *param);
#define GLSamplerParameteriv OpenGLLoadercontext->glSamplerParameteriv
// GLAPI void APIENTRY glSamplerParameterf (GLuint sampler, GLenum pname,
// GLfloat param);
#define GLSamplerParameterf OpenGLLoadercontext->glSamplerParameterf
// GLAPI void APIENTRY glSamplerParameterfv (GLuint sampler, GLenum pname, const
// GLfloat *param);
#define GLSamplerParameterfv OpenGLLoadercontext->glSamplerParameterfv
// GLAPI void APIENTRY glSamplerParameterIiv (GLuint sampler, GLenum pname,
// const GLint *param);
#define GLSamplerParameterIiv OpenGLLoadercontext->glSamplerParameterIiv
// GLAPI void APIENTRY glSamplerParameterIuiv (GLuint sampler, GLenum pname,
// const GLuint *param);
#define GLSamplerParameterIuiv OpenGLLoadercontext->glSamplerParameterIuiv
// GLAPI void APIENTRY glGetSamplerParameteriv (GLuint sampler, GLenum pname,
// GLint *params);
#define GLGetSamplerParameteriv OpenGLLoadercontext->glGetSamplerParameteriv
// GLAPI void APIENTRY glGetSamplerParameterIiv (GLuint sampler, GLenum pname,
// GLint *params);
#define GLGetSamplerParameterIiv OpenGLLoadercontext->glGetSamplerParameterIiv
// GLAPI void APIENTRY glGetSamplerParameterfv (GLuint sampler, GLenum pname,
// GLfloat *params);
#define GLGetSamplerParameterfv OpenGLLoadercontext->glGetSamplerParameterfv
// GLAPI void APIENTRY glGetSamplerParameterIuiv (GLuint sampler, GLenum pname,
// GLuint *params);
#define GLGetSamplerParameterIuiv OpenGLLoadercontext->glGetSamplerParameterIuiv
// GLAPI void APIENTRY glQueryCounter (GLuint id, GLenum target);
#define GLQueryCounter OpenGLLoadercontext->glQueryCounter
// GLAPI void APIENTRY glGetQueryObjecti64v (GLuint id, GLenum pname, GLint64
// *params);
#define GLGetQueryObjecti64v OpenGLLoadercontext->glGetQueryObjecti64v
// GLAPI void APIENTRY glGetQueryObjectui64v (GLuint id, GLenum pname, GLuint64
// *params);
#define GLGetQueryObjectui64v OpenGLLoadercontext->glGetQueryObjectui64v
// GLAPI void APIENTRY glVertexAttribDivisor (GLuint index, GLuint divisor);
#define GLVertexAttribDivisor OpenGLLoadercontext->glVertexAttribDivisor
// GLAPI void APIENTRY glVertexAttribP1ui (GLuint index, GLenum type, GLboolean
// normalized, GLuint value);
#define GLVertexAttribP1ui OpenGLLoadercontext->glVertexAttribP1ui
// GLAPI void APIENTRY glVertexAttribP1uiv (GLuint index, GLenum type, GLboolean
// normalized, const GLuint *value);
#define GLVertexAttribP1uiv OpenGLLoadercontext->glVertexAttribP1uiv
// GLAPI void APIENTRY glVertexAttribP2ui (GLuint index, GLenum type, GLboolean
// normalized, GLuint value);
#define GLVertexAttribP2ui OpenGLLoadercontext->glVertexAttribP2ui
// GLAPI void APIENTRY glVertexAttribP2uiv (GLuint index, GLenum type, GLboolean
// normalized, const GLuint *value);
#define GLVertexAttribP2uiv OpenGLLoadercontext->glVertexAttribP2uiv
// GLAPI void APIENTRY glVertexAttribP3ui (GLuint index, GLenum type, GLboolean
// normalized, GLuint value);
#define GLVertexAttribP3ui OpenGLLoadercontext->glVertexAttribP3ui
// GLAPI void APIENTRY glVertexAttribP3uiv (GLuint index, GLenum type, GLboolean
// normalized, const GLuint *value);
#define GLVertexAttribP3uiv OpenGLLoadercontext->glVertexAttribP3uiv
// GLAPI void APIENTRY glVertexAttribP4ui (GLuint index, GLenum type, GLboolean
// normalized, GLuint value);
#define GLVertexAttribP4ui OpenGLLoadercontext->glVertexAttribP4ui
// GLAPI void APIENTRY glVertexAttribP4uiv (GLuint index, GLenum type, GLboolean
// normalized, const GLuint *value);
#define GLVertexAttribP4uiv OpenGLLoadercontext->glVertexAttribP4uiv
// GLAPI void APIENTRY glVertexP2ui (GLenum type, GLuint value);
#define GLVertexP2ui OpenGLLoadercontext->glVertexP2ui
// GLAPI void APIENTRY glVertexP2uiv (GLenum type, const GLuint *value);
#define GLVertexP2uiv OpenGLLoadercontext->glVertexP2uiv
// GLAPI void APIENTRY glVertexP3ui (GLenum type, GLuint value);
#define GLVertexP3ui OpenGLLoadercontext->glVertexP3ui
// GLAPI void APIENTRY glVertexP3uiv (GLenum type, const GLuint *value);
#define GLVertexP3uiv OpenGLLoadercontext->glVertexP3uiv
// GLAPI void APIENTRY glVertexP4ui (GLenum type, GLuint value);
#define GLVertexP4ui OpenGLLoadercontext->glVertexP4ui
// GLAPI void APIENTRY glVertexP4uiv (GLenum type, const GLuint *value);
#define GLVertexP4uiv OpenGLLoadercontext->glVertexP4uiv
// GLAPI void APIENTRY glTexCoordP1ui (GLenum type, GLuint coords);
#define GLTexCoordP1ui OpenGLLoadercontext->glTexCoordP1ui
// GLAPI void APIENTRY glTexCoordP1uiv (GLenum type, const GLuint *coords);
#define GLTexCoordP1uiv OpenGLLoadercontext->glTexCoordP1uiv
// GLAPI void APIENTRY glTexCoordP2ui (GLenum type, GLuint coords);
#define GLTexCoordP2ui OpenGLLoadercontext->glTexCoordP2ui
// GLAPI void APIENTRY glTexCoordP2uiv (GLenum type, const GLuint *coords);
#define GLTexCoordP2uiv OpenGLLoadercontext->glTexCoordP2uiv
// GLAPI void APIENTRY glTexCoordP3ui (GLenum type, GLuint coords);
#define GLTexCoordP3ui OpenGLLoadercontext->glTexCoordP3ui
// GLAPI void APIENTRY glTexCoordP3uiv (GLenum type, const GLuint *coords);
#define GLTexCoordP3uiv OpenGLLoadercontext->glTexCoordP3uiv
// GLAPI void APIENTRY glTexCoordP4ui (GLenum type, GLuint coords);
#define GLTexCoordP4ui OpenGLLoadercontext->glTexCoordP4ui
// GLAPI void APIENTRY glTexCoordP4uiv (GLenum type, const GLuint *coords);
#define GLTexCoordP4uiv OpenGLLoadercontext->glTexCoordP4uiv
// GLAPI void APIENTRY glMultiTexCoordP1ui (GLenum texture, GLenum type, GLuint
// coords);
#define GLMultiTexCoordP1ui OpenGLLoadercontext->glMultiTexCoordP1ui
// GLAPI void APIENTRY glMultiTexCoordP1uiv (GLenum texture, GLenum type, const
// GLuint *coords);
#define GLMultiTexCoordP1uiv OpenGLLoadercontext->glMultiTexCoordP1uiv
// GLAPI void APIENTRY glMultiTexCoordP2ui (GLenum texture, GLenum type, GLuint
// coords);
#define GLMultiTexCoordP2ui OpenGLLoadercontext->glMultiTexCoordP2ui
// GLAPI void APIENTRY glMultiTexCoordP2uiv (GLenum texture, GLenum type, const
// GLuint *coords);
#define GLMultiTexCoordP2uiv OpenGLLoadercontext->glMultiTexCoordP2uiv
// GLAPI void APIENTRY glMultiTexCoordP3ui (GLenum texture, GLenum type, GLuint
// coords);
#define GLMultiTexCoordP3ui OpenGLLoadercontext->glMultiTexCoordP3ui
// GLAPI void APIENTRY glMultiTexCoordP3uiv (GLenum texture, GLenum type, const
// GLuint *coords);
#define GLMultiTexCoordP3uiv OpenGLLoadercontext->glMultiTexCoordP3uiv
// GLAPI void APIENTRY glMultiTexCoordP4ui (GLenum texture, GLenum type, GLuint
// coords);
#define GLMultiTexCoordP4ui OpenGLLoadercontext->glMultiTexCoordP4ui
// GLAPI void APIENTRY glMultiTexCoordP4uiv (GLenum texture, GLenum type, const
// GLuint *coords);
#define GLMultiTexCoordP4uiv OpenGLLoadercontext->glMultiTexCoordP4uiv
// GLAPI void APIENTRY glNormalP3ui (GLenum type, GLuint coords);
#define GLNormalP3ui OpenGLLoadercontext->glNormalP3ui
// GLAPI void APIENTRY glNormalP3uiv (GLenum type, const GLuint *coords);
#define GLNormalP3uiv OpenGLLoadercontext->glNormalP3uiv
// GLAPI void APIENTRY glColorP3ui (GLenum type, GLuint color);
#define GLColorP3ui OpenGLLoadercontext->glColorP3ui
// GLAPI void APIENTRY glColorP3uiv (GLenum type, const GLuint *color);
#define GLColorP3uiv OpenGLLoadercontext->glColorP3uiv
// GLAPI void APIENTRY glColorP4ui (GLenum type, GLuint color);
#define GLColorP4ui OpenGLLoadercontext->glColorP4ui
// GLAPI void APIENTRY glColorP4uiv (GLenum type, const GLuint *color);
#define GLColorP4uiv OpenGLLoadercontext->glColorP4uiv
// GLAPI void APIENTRY glSecondaryColorP3ui (GLenum type, GLuint color);
#define GLSecondaryColorP3ui OpenGLLoadercontext->glSecondaryColorP3ui
// GLAPI void APIENTRY glSecondaryColorP3uiv (GLenum type, const GLuint *color);
#define GLSecondaryColorP3uiv OpenGLLoadercontext->glSecondaryColorP3uiv
// GLAPI void APIENTRY glMinSampleShading (GLfloat value);
#define GLMinSampleShading OpenGLLoadercontext->glMinSampleShading
// GLAPI void APIENTRY glBlendEquationi (GLuint buf, GLenum mode);
#define GLBlendEquationi OpenGLLoadercontext->glBlendEquationi
// GLAPI void APIENTRY glBlendEquationSeparatei (GLuint buf, GLenum modeRGB,
// GLenum modeAlpha);
#define GLBlendEquationSeparatei OpenGLLoadercontext->glBlendEquationSeparatei
// GLAPI void APIENTRY glBlendFunci (GLuint buf, GLenum src, GLenum dst);
#define GLBlendFunci OpenGLLoadercontext->glBlendFunci
// GLAPI void APIENTRY glBlendFuncSeparatei (GLuint buf, GLenum srcRGB, GLenum
// dstRGB, GLenum srcAlpha, GLenum dstAlpha);
#define GLBlendFuncSeparatei OpenGLLoadercontext->glBlendFuncSeparatei
// GLAPI void APIENTRY glDrawArraysIndirect (GLenum mode, const void *indirect);
#define GLDrawArraysIndirect OpenGLLoadercontext->glDrawArraysIndirect
// GLAPI void APIENTRY glDrawElementsIndirect (GLenum mode, GLenum type, const
// void *indirect);
#define GLDrawElementsIndirect OpenGLLoadercontext->glDrawElementsIndirect
// GLAPI void APIENTRY glUniform1d (GLint location, GLdouble x);
#define GLUniform1d OpenGLLoadercontext->glUniform1d
// GLAPI void APIENTRY glUniform2d (GLint location, GLdouble x, GLdouble y);
#define GLUniform2d OpenGLLoadercontext->glUniform2d
// GLAPI void APIENTRY glUniform3d (GLint location, GLdouble x, GLdouble y,
// GLdouble z);
#define GLUniform3d OpenGLLoadercontext->glUniform3d
// GLAPI void APIENTRY glUniform4d (GLint location, GLdouble x, GLdouble y,
// GLdouble z, GLdouble w);
#define GLUniform4d OpenGLLoadercontext->glUniform4d
// GLAPI void APIENTRY glUniform1dv (GLint location, GLsizei count, const
// GLdouble *value);
#define GLUniform1dv OpenGLLoadercontext->glUniform1dv
// GLAPI void APIENTRY glUniform2dv (GLint location, GLsizei count, const
// GLdouble *value);
#define GLUniform2dv OpenGLLoadercontext->glUniform2dv
// GLAPI void APIENTRY glUniform3dv (GLint location, GLsizei count, const
// GLdouble *value);
#define GLUniform3dv OpenGLLoadercontext->glUniform3dv
// GLAPI void APIENTRY glUniform4dv (GLint location, GLsizei count, const
// GLdouble *value);
#define GLUniform4dv OpenGLLoadercontext->glUniform4dv
// GLAPI void APIENTRY glUniformMatrix2dv (GLint location, GLsizei count,
// GLboolean transpose, const GLdouble *value);
#define GLUniformMatrix2dv OpenGLLoadercontext->glUniformMatrix2dv
// GLAPI void APIENTRY glUniformMatrix3dv (GLint location, GLsizei count,
// GLboolean transpose, const GLdouble *value);
#define GLUniformMatrix3dv OpenGLLoadercontext->glUniformMatrix3dv
// GLAPI void APIENTRY glUniformMatrix4dv (GLint location, GLsizei count,
// GLboolean transpose, const GLdouble *value);
#define GLUniformMatrix4dv OpenGLLoadercontext->glUniformMatrix4dv
// GLAPI void APIENTRY glUniformMatrix2x3dv (GLint location, GLsizei count,
// GLboolean transpose, const GLdouble *value);
#define GLUniformMatrix2x3dv OpenGLLoadercontext->glUniformMatrix2x3dv
// GLAPI void APIENTRY glUniformMatrix2x4dv (GLint location, GLsizei count,
// GLboolean transpose, const GLdouble *value);
#define GLUniformMatrix2x4dv OpenGLLoadercontext->glUniformMatrix2x4dv
// GLAPI void APIENTRY glUniformMatrix3x2dv (GLint location, GLsizei count,
// GLboolean transpose, const GLdouble *value);
#define GLUniformMatrix3x2dv OpenGLLoadercontext->glUniformMatrix3x2dv
// GLAPI void APIENTRY glUniformMatrix3x4dv (GLint location, GLsizei count,
// GLboolean transpose, const GLdouble *value);
#define GLUniformMatrix3x4dv OpenGLLoadercontext->glUniformMatrix3x4dv
// GLAPI void APIENTRY glUniformMatrix4x2dv (GLint location, GLsizei count,
// GLboolean transpose, const GLdouble *value);
#define GLUniformMatrix4x2dv OpenGLLoadercontext->glUniformMatrix4x2dv
// GLAPI void APIENTRY glUniformMatrix4x3dv (GLint location, GLsizei count,
// GLboolean transpose, const GLdouble *value);
#define GLUniformMatrix4x3dv OpenGLLoadercontext->glUniformMatrix4x3dv
// GLAPI void APIENTRY glGetUniformdv (GLuint program, GLint location, GLdouble
// *params);
#define GLGetUniformdv OpenGLLoadercontext->glGetUniformdv
// GLAPI GLint APIENTRY glGetSubroutineUniformLocation (GLuint program, GLenum
// shadertype, const GLchar *name);
#define GLGetSubroutineUniformLocation                                         \
  OpenGLLoadercontext->glGetSubroutineUniformLocation
// GLAPI GLuint APIENTRY glGetSubroutineIndex (GLuint program, GLenum
// shadertype, const GLchar *name);
#define GLGetSubroutineIndex OpenGLLoadercontext->glGetSubroutineIndex
// GLAPI void APIENTRY glGetActiveSubroutineUniformiv (GLuint program, GLenum
// shadertype, GLuint index, GLenum pname, GLint *values);
#define GLGetActiveSubroutineUniformiv                                         \
  OpenGLLoadercontext->glGetActiveSubroutineUniformiv
// GLAPI void APIENTRY glGetActiveSubroutineUniformName (GLuint program, GLenum
// shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
#define GLGetActiveSubroutineUniformName                                       \
  OpenGLLoadercontext->glGetActiveSubroutineUniformName
// GLAPI void APIENTRY glGetActiveSubroutineName (GLuint program, GLenum
// shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
#define GLGetActiveSubroutineName OpenGLLoadercontext->glGetActiveSubroutineName
// GLAPI void APIENTRY glUniformSubroutinesuiv (GLenum shadertype, GLsizei
// count, const GLuint *indices);
#define GLUniformSubroutinesuiv OpenGLLoadercontext->glUniformSubroutinesuiv
// GLAPI void APIENTRY glGetUniformSubroutineuiv (GLenum shadertype, GLint
// location, GLuint *params);
#define GLGetUniformSubroutineuiv OpenGLLoadercontext->glGetUniformSubroutineuiv
// GLAPI void APIENTRY glGetProgramStageiv (GLuint program, GLenum shadertype,
// GLenum pname, GLint *values);
#define GLGetProgramStageiv OpenGLLoadercontext->glGetProgramStageiv
// GLAPI void APIENTRY glPatchParameteri (GLenum pname, GLint value);
#define GLPatchParameteri OpenGLLoadercontext->glPatchParameteri
// GLAPI void APIENTRY glPatchParameterfv (GLenum pname, const GLfloat *values);
#define GLPatchParameterfv OpenGLLoadercontext->glPatchParameterfv
// GLAPI void APIENTRY glBindTransformFeedback (GLenum target, GLuint id);
#define GLBindTransformFeedback OpenGLLoadercontext->glBindTransformFeedback
// GLAPI void APIENTRY glDeleteTransformFeedbacks (GLsizei n, const GLuint
// *ids);
#define GLDeleteTransformFeedbacks                                             \
  OpenGLLoadercontext->glDeleteTransformFeedbacks
// GLAPI void APIENTRY glGenTransformFeedbacks (GLsizei n, GLuint *ids);
#define GLGenTransformFeedbacks OpenGLLoadercontext->glGenTransformFeedbacks
// GLAPI GLboolean APIENTRY glIsTransformFeedback (GLuint id);
#define GLIsTransformFeedback OpenGLLoadercontext->glIsTransformFeedback
// GLAPI void APIENTRY glPauseTransformFeedback (void);
#define GLPauseTransformFeedback OpenGLLoadercontext->glPauseTransformFeedback
// GLAPI void APIENTRY glResumeTransformFeedback (void);
#define GLResumeTransformFeedback OpenGLLoadercontext->glResumeTransformFeedback
// GLAPI void APIENTRY glDrawTransformFeedback (GLenum mode, GLuint id);
#define GLDrawTransformFeedback OpenGLLoadercontext->glDrawTransformFeedback
// GLAPI void APIENTRY glDrawTransformFeedbackStream (GLenum mode, GLuint id,
// GLuint stream);
#define GLDrawTransformFeedbackStream                                          \
  OpenGLLoadercontext->glDrawTransformFeedbackStream
// GLAPI void APIENTRY glBeginQueryIndexed (GLenum target, GLuint index, GLuint
// id);
#define GLBeginQueryIndexed OpenGLLoadercontext->glBeginQueryIndexed
// GLAPI void APIENTRY glEndQueryIndexed (GLenum target, GLuint index);
#define GLEndQueryIndexed OpenGLLoadercontext->glEndQueryIndexed
// GLAPI void APIENTRY glGetQueryIndexediv (GLenum target, GLuint index, GLenum
// pname, GLint *params);
#define GLGetQueryIndexediv OpenGLLoadercontext->glGetQueryIndexediv
// GLAPI void APIENTRY glReleaseShaderCompiler (void);
#define GLReleaseShaderCompiler OpenGLLoadercontext->glReleaseShaderCompiler
// GLAPI void APIENTRY glShaderBinary (GLsizei count, const GLuint *shaders,
// GLenum binaryFormat, const void *binary, GLsizei length);
#define GLShaderBinary OpenGLLoadercontext->glShaderBinary
// GLAPI void APIENTRY glGetShaderPrecisionFormat (GLenum shadertype, GLenum
// precisiontype, GLint *range, GLint *precision);
#define GLGetShaderPrecisionFormat                                             \
  OpenGLLoadercontext->glGetShaderPrecisionFormat
// GLAPI void APIENTRY glDepthRangef (GLfloat n, GLfloat f);
#define GLDepthRangef OpenGLLoadercontext->glDepthRangef
// GLAPI void APIENTRY glClearDepthf (GLfloat d);
#define GLClearDepthf OpenGLLoadercontext->glClearDepthf
// GLAPI void APIENTRY glGetProgramBinary (GLuint program, GLsizei bufSize,
// GLsizei *length, GLenum *binaryFormat, void *binary);
#define GLGetProgramBinary OpenGLLoadercontext->glGetProgramBinary
// GLAPI void APIENTRY glProgramBinary (GLuint program, GLenum binaryFormat,
// const void *binary, GLsizei length);
#define GLProgramBinary OpenGLLoadercontext->glProgramBinary
// GLAPI void APIENTRY glProgramParameteri (GLuint program, GLenum pname, GLint
// value);
#define GLProgramParameteri OpenGLLoadercontext->glProgramParameteri
// GLAPI void APIENTRY glUseProgramStages (GLuint pipeline, GLbitfield stages,
// GLuint program);
#define GLUseProgramStages OpenGLLoadercontext->glUseProgramStages
// GLAPI void APIENTRY glActiveShaderProgram (GLuint pipeline, GLuint program);
#define GLActiveShaderProgram OpenGLLoadercontext->glActiveShaderProgram
// GLAPI GLuint APIENTRY glCreateShaderProgramv (GLenum type, GLsizei count,
// const GLchar *const*strings);
#define GLCreateShaderProgramv OpenGLLoadercontext->glCreateShaderProgramv
// GLAPI void APIENTRY glBindProgramPipeline (GLuint pipeline);
#define GLBindProgramPipeline OpenGLLoadercontext->glBindProgramPipeline
// GLAPI void APIENTRY glDeleteProgramPipelines (GLsizei n, const GLuint
// *pipelines);
#define GLDeleteProgramPipelines OpenGLLoadercontext->glDeleteProgramPipelines
// GLAPI void APIENTRY glGenProgramPipelines (GLsizei n, GLuint *pipelines);
#define GLGenProgramPipelines OpenGLLoadercontext->glGenProgramPipelines
// GLAPI GLboolean APIENTRY glIsProgramPipeline (GLuint pipeline);
#define GLIsProgramPipeline OpenGLLoadercontext->glIsProgramPipeline
// GLAPI void APIENTRY glGetProgramPipelineiv (GLuint pipeline, GLenum pname,
// GLint *params);
#define GLGetProgramPipelineiv OpenGLLoadercontext->glGetProgramPipelineiv
// GLAPI void APIENTRY glProgramUniform1i (GLuint program, GLint location, GLint
// v0);
#define GLProgramUniform1i OpenGLLoadercontext->glProgramUniform1i
// GLAPI void APIENTRY glProgramUniform1iv (GLuint program, GLint location,
// GLsizei count, const GLint *value);
#define GLProgramUniform1iv OpenGLLoadercontext->glProgramUniform1iv
// GLAPI void APIENTRY glProgramUniform1f (GLuint program, GLint location,
// GLfloat v0);
#define GLProgramUniform1f OpenGLLoadercontext->glProgramUniform1f
// GLAPI void APIENTRY glProgramUniform1fv (GLuint program, GLint location,
// GLsizei count, const GLfloat *value);
#define GLProgramUniform1fv OpenGLLoadercontext->glProgramUniform1fv
// GLAPI void APIENTRY glProgramUniform1d (GLuint program, GLint location,
// GLdouble v0);
#define GLProgramUniform1d OpenGLLoadercontext->glProgramUniform1d
// GLAPI void APIENTRY glProgramUniform1dv (GLuint program, GLint location,
// GLsizei count, const GLdouble *value);
#define GLProgramUniform1dv OpenGLLoadercontext->glProgramUniform1dv
// GLAPI void APIENTRY glProgramUniform1ui (GLuint program, GLint location,
// GLuint v0);
#define GLProgramUniform1ui OpenGLLoadercontext->glProgramUniform1ui
// GLAPI void APIENTRY glProgramUniform1uiv (GLuint program, GLint location,
// GLsizei count, const GLuint *value);
#define GLProgramUniform1uiv OpenGLLoadercontext->glProgramUniform1uiv
// GLAPI void APIENTRY glProgramUniform2i (GLuint program, GLint location, GLint
// v0, GLint v1);
#define GLProgramUniform2i OpenGLLoadercontext->glProgramUniform2i
// GLAPI void APIENTRY glProgramUniform2iv (GLuint program, GLint location,
// GLsizei count, const GLint *value);
#define GLProgramUniform2iv OpenGLLoadercontext->glProgramUniform2iv
// GLAPI void APIENTRY glProgramUniform2f (GLuint program, GLint location,
// GLfloat v0, GLfloat v1);
#define GLProgramUniform2f OpenGLLoadercontext->glProgramUniform2f
// GLAPI void APIENTRY glProgramUniform2fv (GLuint program, GLint location,
// GLsizei count, const GLfloat *value);
#define GLProgramUniform2fv OpenGLLoadercontext->glProgramUniform2fv
// GLAPI void APIENTRY glProgramUniform2d (GLuint program, GLint location,
// GLdouble v0, GLdouble v1);
#define GLProgramUniform2d OpenGLLoadercontext->glProgramUniform2d
// GLAPI void APIENTRY glProgramUniform2dv (GLuint program, GLint location,
// GLsizei count, const GLdouble *value);
#define GLProgramUniform2dv OpenGLLoadercontext->glProgramUniform2dv
// GLAPI void APIENTRY glProgramUniform2ui (GLuint program, GLint location,
// GLuint v0, GLuint v1);
#define GLProgramUniform2ui OpenGLLoadercontext->glProgramUniform2ui
// GLAPI void APIENTRY glProgramUniform2uiv (GLuint program, GLint location,
// GLsizei count, const GLuint *value);
#define GLProgramUniform2uiv OpenGLLoadercontext->glProgramUniform2uiv
// GLAPI void APIENTRY glProgramUniform3i (GLuint program, GLint location, GLint
// v0, GLint v1, GLint v2);
#define GLProgramUniform3i OpenGLLoadercontext->glProgramUniform3i
// GLAPI void APIENTRY glProgramUniform3iv (GLuint program, GLint location,
// GLsizei count, const GLint *value);
#define GLProgramUniform3iv OpenGLLoadercontext->glProgramUniform3iv
// GLAPI void APIENTRY glProgramUniform3f (GLuint program, GLint location,
// GLfloat v0, GLfloat v1, GLfloat v2);
#define GLProgramUniform3f OpenGLLoadercontext->glProgramUniform3f
// GLAPI void APIENTRY glProgramUniform3fv (GLuint program, GLint location,
// GLsizei count, const GLfloat *value);
#define GLProgramUniform3fv OpenGLLoadercontext->glProgramUniform3fv
// GLAPI void APIENTRY glProgramUniform3d (GLuint program, GLint location,
// GLdouble v0, GLdouble v1, GLdouble v2);
#define GLProgramUniform3d OpenGLLoadercontext->glProgramUniform3d
// GLAPI void APIENTRY glProgramUniform3dv (GLuint program, GLint location,
// GLsizei count, const GLdouble *value);
#define GLProgramUniform3dv OpenGLLoadercontext->glProgramUniform3dv
// GLAPI void APIENTRY glProgramUniform3ui (GLuint program, GLint location,
// GLuint v0, GLuint v1, GLuint v2);
#define GLProgramUniform3ui OpenGLLoadercontext->glProgramUniform3ui
// GLAPI void APIENTRY glProgramUniform3uiv (GLuint program, GLint location,
// GLsizei count, const GLuint *value);
#define GLProgramUniform3uiv OpenGLLoadercontext->glProgramUniform3uiv
// GLAPI void APIENTRY glProgramUniform4i (GLuint program, GLint location, GLint
// v0, GLint v1, GLint v2, GLint v3);
#define GLProgramUniform4i OpenGLLoadercontext->glProgramUniform4i
// GLAPI void APIENTRY glProgramUniform4iv (GLuint program, GLint location,
// GLsizei count, const GLint *value);
#define GLProgramUniform4iv OpenGLLoadercontext->glProgramUniform4iv
// GLAPI void APIENTRY glProgramUniform4f (GLuint program, GLint location,
// GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
#define GLProgramUniform4f OpenGLLoadercontext->glProgramUniform4f
// GLAPI void APIENTRY glProgramUniform4fv (GLuint program, GLint location,
// GLsizei count, const GLfloat *value);
#define GLProgramUniform4fv OpenGLLoadercontext->glProgramUniform4fv
// GLAPI void APIENTRY glProgramUniform4d (GLuint program, GLint location,
// GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
#define GLProgramUniform4d OpenGLLoadercontext->glProgramUniform4d
// GLAPI void APIENTRY glProgramUniform4dv (GLuint program, GLint location,
// GLsizei count, const GLdouble *value);
#define GLProgramUniform4dv OpenGLLoadercontext->glProgramUniform4dv
// GLAPI void APIENTRY glProgramUniform4ui (GLuint program, GLint location,
// GLuint v0, GLuint v1, GLuint v2, GLuint v3);
#define GLProgramUniform4ui OpenGLLoadercontext->glProgramUniform4ui
// GLAPI void APIENTRY glProgramUniform4uiv (GLuint program, GLint location,
// GLsizei count, const GLuint *value);
#define GLProgramUniform4uiv OpenGLLoadercontext->glProgramUniform4uiv
// GLAPI void APIENTRY glProgramUniformMatrix2fv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix2fv OpenGLLoadercontext->glProgramUniformMatrix2fv
// GLAPI void APIENTRY glProgramUniformMatrix3fv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix3fv OpenGLLoadercontext->glProgramUniformMatrix3fv
// GLAPI void APIENTRY glProgramUniformMatrix4fv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix4fv OpenGLLoadercontext->glProgramUniformMatrix4fv
// GLAPI void APIENTRY glProgramUniformMatrix2dv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLdouble *value);
#define GLProgramUniformMatrix2dv OpenGLLoadercontext->glProgramUniformMatrix2dv
// GLAPI void APIENTRY glProgramUniformMatrix3dv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLdouble *value);
#define GLProgramUniformMatrix3dv OpenGLLoadercontext->glProgramUniformMatrix3dv
// GLAPI void APIENTRY glProgramUniformMatrix4dv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLdouble *value);
#define GLProgramUniformMatrix4dv OpenGLLoadercontext->glProgramUniformMatrix4dv
// GLAPI void APIENTRY glProgramUniformMatrix2x3fv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix2x3fv                                            \
  OpenGLLoadercontext->glProgramUniformMatrix2x3fv
// GLAPI void APIENTRY glProgramUniformMatrix3x2fv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix3x2fv                                            \
  OpenGLLoadercontext->glProgramUniformMatrix3x2fv
// GLAPI void APIENTRY glProgramUniformMatrix2x4fv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix2x4fv                                            \
  OpenGLLoadercontext->glProgramUniformMatrix2x4fv
// GLAPI void APIENTRY glProgramUniformMatrix4x2fv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix4x2fv                                            \
  OpenGLLoadercontext->glProgramUniformMatrix4x2fv
// GLAPI void APIENTRY glProgramUniformMatrix3x4fv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix3x4fv                                            \
  OpenGLLoadercontext->glProgramUniformMatrix3x4fv
// GLAPI void APIENTRY glProgramUniformMatrix4x3fv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix4x3fv                                            \
  OpenGLLoadercontext->glProgramUniformMatrix4x3fv
// GLAPI void APIENTRY glProgramUniformMatrix2x3dv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLdouble *value);
#define GLProgramUniformMatrix2x3dv                                            \
  OpenGLLoadercontext->glProgramUniformMatrix2x3dv
// GLAPI void APIENTRY glProgramUniformMatrix3x2dv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLdouble *value);
#define GLProgramUniformMatrix3x2dv                                            \
  OpenGLLoadercontext->glProgramUniformMatrix3x2dv
// GLAPI void APIENTRY glProgramUniformMatrix2x4dv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLdouble *value);
#define GLProgramUniformMatrix2x4dv                                            \
  OpenGLLoadercontext->glProgramUniformMatrix2x4dv
// GLAPI void APIENTRY glProgramUniformMatrix4x2dv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLdouble *value);
#define GLProgramUniformMatrix4x2dv                                            \
  OpenGLLoadercontext->glProgramUniformMatrix4x2dv
// GLAPI void APIENTRY glProgramUniformMatrix3x4dv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLdouble *value);
#define GLProgramUniformMatrix3x4dv                                            \
  OpenGLLoadercontext->glProgramUniformMatrix3x4dv
// GLAPI void APIENTRY glProgramUniformMatrix4x3dv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLdouble *value);
#define GLProgramUniformMatrix4x3dv                                            \
  OpenGLLoadercontext->glProgramUniformMatrix4x3dv
// GLAPI void APIENTRY glValidateProgramPipeline (GLuint pipeline);
#define GLValidateProgramPipeline OpenGLLoadercontext->glValidateProgramPipeline
// GLAPI void APIENTRY glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei
// bufSize, GLsizei *length, GLchar *infoLog);
#define GLGetProgramPipelineInfoLog                                            \
  OpenGLLoadercontext->glGetProgramPipelineInfoLog
// GLAPI void APIENTRY glVertexAttribL1d (GLuint index, GLdouble x);
#define GLVertexAttribL1d OpenGLLoadercontext->glVertexAttribL1d
// GLAPI void APIENTRY glVertexAttribL2d (GLuint index, GLdouble x, GLdouble y);
#define GLVertexAttribL2d OpenGLLoadercontext->glVertexAttribL2d
// GLAPI void APIENTRY glVertexAttribL3d (GLuint index, GLdouble x, GLdouble y,
// GLdouble z);
#define GLVertexAttribL3d OpenGLLoadercontext->glVertexAttribL3d
// GLAPI void APIENTRY glVertexAttribL4d (GLuint index, GLdouble x, GLdouble y,
// GLdouble z, GLdouble w);
#define GLVertexAttribL4d OpenGLLoadercontext->glVertexAttribL4d
// GLAPI void APIENTRY glVertexAttribL1dv (GLuint index, const GLdouble *v);
#define GLVertexAttribL1dv OpenGLLoadercontext->glVertexAttribL1dv
// GLAPI void APIENTRY glVertexAttribL2dv (GLuint index, const GLdouble *v);
#define GLVertexAttribL2dv OpenGLLoadercontext->glVertexAttribL2dv
// GLAPI void APIENTRY glVertexAttribL3dv (GLuint index, const GLdouble *v);
#define GLVertexAttribL3dv OpenGLLoadercontext->glVertexAttribL3dv
// GLAPI void APIENTRY glVertexAttribL4dv (GLuint index, const GLdouble *v);
#define GLVertexAttribL4dv OpenGLLoadercontext->glVertexAttribL4dv
// GLAPI void APIENTRY glVertexAttribLPointer (GLuint index, GLint size, GLenum
// type, GLsizei stride, const void *pointer);
#define GLVertexAttribLPointer OpenGLLoadercontext->glVertexAttribLPointer
// GLAPI void APIENTRY glGetVertexAttribLdv (GLuint index, GLenum pname,
// GLdouble *params);
#define GLGetVertexAttribLdv OpenGLLoadercontext->glGetVertexAttribLdv
// GLAPI void APIENTRY glViewportArrayv (GLuint first, GLsizei count, const
// GLfloat *v);
#define GLViewportArrayv OpenGLLoadercontext->glViewportArrayv
// GLAPI void APIENTRY glViewportIndexedf (GLuint index, GLfloat x, GLfloat y,
// GLfloat w, GLfloat h);
#define GLViewportIndexedf OpenGLLoadercontext->glViewportIndexedf
// GLAPI void APIENTRY glViewportIndexedfv (GLuint index, const GLfloat *v);
#define GLViewportIndexedfv OpenGLLoadercontext->glViewportIndexedfv
// GLAPI void APIENTRY glScissorArrayv (GLuint first, GLsizei count, const GLint
// *v);
#define GLScissorArrayv OpenGLLoadercontext->glScissorArrayv
// GLAPI void APIENTRY glScissorIndexed (GLuint index, GLint left, GLint bottom,
// GLsizei width, GLsizei height);
#define GLScissorIndexed OpenGLLoadercontext->glScissorIndexed
// GLAPI void APIENTRY glScissorIndexedv (GLuint index, const GLint *v);
#define GLScissorIndexedv OpenGLLoadercontext->glScissorIndexedv
// GLAPI void APIENTRY glDepthRangeArrayv (GLuint first, GLsizei count, const
// GLdouble *v);
#define GLDepthRangeArrayv OpenGLLoadercontext->glDepthRangeArrayv
// GLAPI void APIENTRY glDepthRangeIndexed (GLuint index, GLdouble n, GLdouble
// f);
#define GLDepthRangeIndexed OpenGLLoadercontext->glDepthRangeIndexed
// GLAPI void APIENTRY glGetFloati_v (GLenum target, GLuint index, GLfloat
// *data);
#define GLGetFloati_v OpenGLLoadercontext->glGetFloati_v
// GLAPI void APIENTRY glGetDoublei_v (GLenum target, GLuint index, GLdouble
// *data);
#define GLGetDoublei_v OpenGLLoadercontext->glGetDoublei_v
// GLAPI void APIENTRY glDrawArraysInstancedBaseInstance (GLenum mode, GLint
// first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
#define GLDrawArraysInstancedBaseInstance                                      \
  OpenGLLoadercontext->glDrawArraysInstancedBaseInstance
// GLAPI void APIENTRY glDrawElementsInstancedBaseInstance (GLenum mode, GLsizei
// count, GLenum type, const void *indices, GLsizei instancecount, GLuint
// baseinstance);
#define GLDrawElementsInstancedBaseInstance                                    \
  OpenGLLoadercontext->glDrawElementsInstancedBaseInstance
// GLAPI void APIENTRY glDrawElementsInstancedBaseVertexBaseInstance (GLenum
// mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount,
// GLint basevertex, GLuint baseinstance);
#define GLDrawElementsInstancedBaseVertexBaseInstance                          \
  OpenGLLoadercontext->glDrawElementsInstancedBaseVertexBaseInstance
// GLAPI void APIENTRY glGetInternalformativ (GLenum target, GLenum
// internalformat, GLenum pname, GLsizei count, GLint *params);
#define GLGetInternalformativ OpenGLLoadercontext->glGetInternalformativ
// GLAPI void APIENTRY glGetActiveAtomicCounterBufferiv (GLuint program, GLuint
// bufferIndex, GLenum pname, GLint *params);
#define GLGetActiveAtomicCounterBufferiv                                       \
  OpenGLLoadercontext->glGetActiveAtomicCounterBufferiv
// GLAPI void APIENTRY glBindImageTexture (GLuint unit, GLuint texture, GLint
// level, GLboolean layered, GLint layer, GLenum access, GLenum format);
#define GLBindImageTexture OpenGLLoadercontext->glBindImageTexture
// GLAPI void APIENTRY glMemoryBarrier (GLbitfield barriers);
#define GLMemoryBarrier OpenGLLoadercontext->glMemoryBarrier
// GLAPI void APIENTRY glTexStorage1D (GLenum target, GLsizei levels, GLenum
// internalformat, GLsizei width);
#define GLTexStorage1D OpenGLLoadercontext->glTexStorage1D
// GLAPI void APIENTRY glTexStorage2D (GLenum target, GLsizei levels, GLenum
// internalformat, GLsizei width, GLsizei height);
#define GLTexStorage2D OpenGLLoadercontext->glTexStorage2D
// GLAPI void APIENTRY glTexStorage3D (GLenum target, GLsizei levels, GLenum
// internalformat, GLsizei width, GLsizei height, GLsizei depth);
#define GLTexStorage3D OpenGLLoadercontext->glTexStorage3D
// GLAPI void APIENTRY glDrawTransformFeedbackInstanced (GLenum mode, GLuint id,
// GLsizei instancecount);
#define GLDrawTransformFeedbackInstanced                                       \
  OpenGLLoadercontext->glDrawTransformFeedbackInstanced
// GLAPI void APIENTRY glDrawTransformFeedbackStreamInstanced (GLenum mode,
// GLuint id, GLuint stream, GLsizei instancecount);
#define GLDrawTransformFeedbackStreamInstanced                                 \
  OpenGLLoadercontext->glDrawTransformFeedbackStreamInstanced
// GLAPI void APIENTRY glClearBufferData (GLenum target, GLenum internalformat,
// GLenum format, GLenum type, const void *data);
#define GLClearBufferData OpenGLLoadercontext->glClearBufferData
// GLAPI void APIENTRY glClearBufferSubData (GLenum target, GLenum
// internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type,
// const void *data);
#define GLClearBufferSubData OpenGLLoadercontext->glClearBufferSubData
// GLAPI void APIENTRY glDispatchCompute (GLuint num_groups_x, GLuint
// num_groups_y, GLuint num_groups_z);
#define GLDispatchCompute OpenGLLoadercontext->glDispatchCompute
// GLAPI void APIENTRY glDispatchComputeIndirect (GLintptr indirect);
#define GLDispatchComputeIndirect OpenGLLoadercontext->glDispatchComputeIndirect
// GLAPI void APIENTRY glCopyImageSubData (GLuint srcName, GLenum srcTarget,
// GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum
// dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei
// srcWidth, GLsizei srcHeight, GLsizei srcDepth);
#define GLCopyImageSubData OpenGLLoadercontext->glCopyImageSubData
// GLAPI void APIENTRY glFramebufferParameteri (GLenum target, GLenum pname,
// GLint param);
#define GLFramebufferParameteri OpenGLLoadercontext->glFramebufferParameteri
// GLAPI void APIENTRY glGetFramebufferParameteriv (GLenum target, GLenum pname,
// GLint *params);
#define GLGetFramebufferParameteriv                                            \
  OpenGLLoadercontext->glGetFramebufferParameteriv
// GLAPI void APIENTRY glGetInternalformati64v (GLenum target, GLenum
// internalformat, GLenum pname, GLsizei count, GLint64 *params);
#define GLGetInternalformati64v OpenGLLoadercontext->glGetInternalformati64v
// GLAPI void APIENTRY glInvalidateTexSubImage (GLuint texture, GLint level,
// GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height,
// GLsizei depth);
#define GLInvalidateTexSubImage OpenGLLoadercontext->glInvalidateTexSubImage
// GLAPI void APIENTRY glInvalidateTexImage (GLuint texture, GLint level);
#define GLInvalidateTexImage OpenGLLoadercontext->glInvalidateTexImage
// GLAPI void APIENTRY glInvalidateBufferSubData (GLuint buffer, GLintptr
// offset, GLsizeiptr length);
#define GLInvalidateBufferSubData OpenGLLoadercontext->glInvalidateBufferSubData
// GLAPI void APIENTRY glInvalidateBufferData (GLuint buffer);
#define GLInvalidateBufferData OpenGLLoadercontext->glInvalidateBufferData
// GLAPI void APIENTRY glInvalidateFramebuffer (GLenum target, GLsizei
// numAttachments, const GLenum *attachments);
#define GLInvalidateFramebuffer OpenGLLoadercontext->glInvalidateFramebuffer
// GLAPI void APIENTRY glInvalidateSubFramebuffer (GLenum target, GLsizei
// numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width,
// GLsizei height);
#define GLInvalidateSubFramebuffer                                             \
  OpenGLLoadercontext->glInvalidateSubFramebuffer
// GLAPI void APIENTRY glMultiDrawArraysIndirect (GLenum mode, const void
// *indirect, GLsizei drawcount, GLsizei stride);
#define GLMultiDrawArraysIndirect OpenGLLoadercontext->glMultiDrawArraysIndirect
// GLAPI void APIENTRY glMultiDrawElementsIndirect (GLenum mode, GLenum type,
// const void *indirect, GLsizei drawcount, GLsizei stride);
#define GLMultiDrawElementsIndirect                                            \
  OpenGLLoadercontext->glMultiDrawElementsIndirect
// GLAPI void APIENTRY glGetProgramInterfaceiv (GLuint program, GLenum
// programInterface, GLenum pname, GLint *params);
#define GLGetProgramInterfaceiv OpenGLLoadercontext->glGetProgramInterfaceiv
// GLAPI GLuint APIENTRY glGetProgramResourceIndex (GLuint program, GLenum
// programInterface, const GLchar *name);
#define GLGetProgramResourceIndex OpenGLLoadercontext->glGetProgramResourceIndex
// GLAPI void APIENTRY glGetProgramResourceName (GLuint program, GLenum
// programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar
// *name);
#define GLGetProgramResourceName OpenGLLoadercontext->glGetProgramResourceName
// GLAPI void APIENTRY glGetProgramResourceiv (GLuint program, GLenum
// programInterface, GLuint index, GLsizei propCount, const GLenum *props,
// GLsizei count, GLsizei *length, GLint *params);
#define GLGetProgramResourceiv OpenGLLoadercontext->glGetProgramResourceiv
// GLAPI GLint APIENTRY glGetProgramResourceLocation (GLuint program, GLenum
// programInterface, const GLchar *name);
#define GLGetProgramResourceLocation                                           \
  OpenGLLoadercontext->glGetProgramResourceLocation
// GLAPI GLint APIENTRY glGetProgramResourceLocationIndex (GLuint program,
// GLenum programInterface, const GLchar *name);
#define GLGetProgramResourceLocationIndex                                      \
  OpenGLLoadercontext->glGetProgramResourceLocationIndex
// GLAPI void APIENTRY glShaderStorageBlockBinding (GLuint program, GLuint
// storageBlockIndex, GLuint storageBlockBinding);
#define GLShaderStorageBlockBinding                                            \
  OpenGLLoadercontext->glShaderStorageBlockBinding
// GLAPI void APIENTRY glTexBufferRange (GLenum target, GLenum internalformat,
// GLuint buffer, GLintptr offset, GLsizeiptr size);
#define GLTexBufferRange OpenGLLoadercontext->glTexBufferRange
// GLAPI void APIENTRY glTexStorage2DMultisample (GLenum target, GLsizei
// samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean
// fixedsamplelocations);
#define GLTexStorage2DMultisample OpenGLLoadercontext->glTexStorage2DMultisample
// GLAPI void APIENTRY glTexStorage3DMultisample (GLenum target, GLsizei
// samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth,
// GLboolean fixedsamplelocations);
#define GLTexStorage3DMultisample OpenGLLoadercontext->glTexStorage3DMultisample
// GLAPI void APIENTRY glTextureView (GLuint texture, GLenum target, GLuint
// origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint
// minlayer, GLuint numlayers);
#define GLTextureView OpenGLLoadercontext->glTextureView
// GLAPI void APIENTRY glBindVertexBuffer (GLuint bindingindex, GLuint buffer,
// GLintptr offset, GLsizei stride);
#define GLBindVertexBuffer OpenGLLoadercontext->glBindVertexBuffer
// GLAPI void APIENTRY glVertexAttribFormat (GLuint attribindex, GLint size,
// GLenum type, GLboolean normalized, GLuint relativeoffset);
#define GLVertexAttribFormat OpenGLLoadercontext->glVertexAttribFormat
// GLAPI void APIENTRY glVertexAttribIFormat (GLuint attribindex, GLint size,
// GLenum type, GLuint relativeoffset);
#define GLVertexAttribIFormat OpenGLLoadercontext->glVertexAttribIFormat
// GLAPI void APIENTRY glVertexAttribLFormat (GLuint attribindex, GLint size,
// GLenum type, GLuint relativeoffset);
#define GLVertexAttribLFormat OpenGLLoadercontext->glVertexAttribLFormat
// GLAPI void APIENTRY glVertexAttribBinding (GLuint attribindex, GLuint
// bindingindex);
#define GLVertexAttribBinding OpenGLLoadercontext->glVertexAttribBinding
// GLAPI void APIENTRY glVertexBindingDivisor (GLuint bindingindex, GLuint
// divisor);
#define GLVertexBindingDivisor OpenGLLoadercontext->glVertexBindingDivisor
// GLAPI void APIENTRY glDebugMessageControl (GLenum source, GLenum type, GLenum
// severity, GLsizei count, const GLuint *ids, GLboolean enabled);
#define GLDebugMessageControl OpenGLLoadercontext->glDebugMessageControl
// GLAPI void APIENTRY glDebugMessageInsert (GLenum source, GLenum type, GLuint
// id, GLenum severity, GLsizei length, const GLchar *buf);
#define GLDebugMessageInsert OpenGLLoadercontext->glDebugMessageInsert
// GLAPI void APIENTRY glDebugMessageCallback (GLDEBUGPROC callback, const void
// *userParam);
#define GLDebugMessageCallback OpenGLLoadercontext->glDebugMessageCallback
// GLAPI GLuint APIENTRY glGetDebugMessageLog (GLuint count, GLsizei bufSize,
// GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei
// *lengths, GLchar *messageLog);
#define GLGetDebugMessageLog OpenGLLoadercontext->glGetDebugMessageLog
// GLAPI void APIENTRY glPushDebugGroup (GLenum source, GLuint id, GLsizei
// length, const GLchar *message);
#define GLPushDebugGroup OpenGLLoadercontext->glPushDebugGroup
// GLAPI void APIENTRY glPopDebugGroup (void);
#define GLPopDebugGroup OpenGLLoadercontext->glPopDebugGroup
// GLAPI void APIENTRY glObjectLabel (GLenum identifier, GLuint name, GLsizei
// length, const GLchar *label);
#define GLObjectLabel OpenGLLoadercontext->glObjectLabel
// GLAPI void APIENTRY glGetObjectLabel (GLenum identifier, GLuint name, GLsizei
// bufSize, GLsizei *length, GLchar *label);
#define GLGetObjectLabel OpenGLLoadercontext->glGetObjectLabel
// GLAPI void APIENTRY glObjectPtrLabel (const void *ptr, GLsizei length, const
// GLchar *label);
#define GLObjectPtrLabel OpenGLLoadercontext->glObjectPtrLabel
// GLAPI void APIENTRY glGetObjectPtrLabel (const void *ptr, GLsizei bufSize,
// GLsizei *length, GLchar *label);
#define GLGetObjectPtrLabel OpenGLLoadercontext->glGetObjectPtrLabel
// GLAPI void APIENTRY glBufferStorage (GLenum target, GLsizeiptr size, const
// void *data, GLbitfield flags);
#define GLBufferStorage OpenGLLoadercontext->glBufferStorage
// GLAPI void APIENTRY glClearTexImage (GLuint texture, GLint level, GLenum
// format, GLenum type, const void *data);
#define GLClearTexImage OpenGLLoadercontext->glClearTexImage
// GLAPI void APIENTRY glClearTexSubImage (GLuint texture, GLint level, GLint
// xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei
// depth, GLenum format, GLenum type, const void *data);
#define GLClearTexSubImage OpenGLLoadercontext->glClearTexSubImage
// GLAPI void APIENTRY glBindBuffersBase (GLenum target, GLuint first, GLsizei
// count, const GLuint *buffers);
#define GLBindBuffersBase OpenGLLoadercontext->glBindBuffersBase
// GLAPI void APIENTRY glBindBuffersRange (GLenum target, GLuint first, GLsizei
// count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr
// *sizes);
#define GLBindBuffersRange OpenGLLoadercontext->glBindBuffersRange
// GLAPI void APIENTRY glBindTextures (GLuint first, GLsizei count, const GLuint
// *textures);
#define GLBindTextures OpenGLLoadercontext->glBindTextures
// GLAPI void APIENTRY glBindSamplers (GLuint first, GLsizei count, const GLuint
// *samplers);
#define GLBindSamplers OpenGLLoadercontext->glBindSamplers
// GLAPI void APIENTRY glBindImageTextures (GLuint first, GLsizei count, const
// GLuint *textures);
#define GLBindImageTextures OpenGLLoadercontext->glBindImageTextures
// GLAPI void APIENTRY glBindVertexBuffers (GLuint first, GLsizei count, const
// GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
#define GLBindVertexBuffers OpenGLLoadercontext->glBindVertexBuffers
// GLAPI void APIENTRY glClipControl (GLenum origin, GLenum depth);
#define GLClipControl OpenGLLoadercontext->glClipControl
// GLAPI void APIENTRY glCreateTransformFeedbacks (GLsizei n, GLuint *ids);
#define GLCreateTransformFeedbacks                                             \
  OpenGLLoadercontext->glCreateTransformFeedbacks
// GLAPI void APIENTRY glTransformFeedbackBufferBase (GLuint xfb, GLuint index,
// GLuint buffer);
#define GLTransformFeedbackBufferBase                                          \
  OpenGLLoadercontext->glTransformFeedbackBufferBase
// GLAPI void APIENTRY glTransformFeedbackBufferRange (GLuint xfb, GLuint index,
// GLuint buffer, GLintptr offset, GLsizeiptr size);
#define GLTransformFeedbackBufferRange                                         \
  OpenGLLoadercontext->glTransformFeedbackBufferRange
// GLAPI void APIENTRY glGetTransformFeedbackiv (GLuint xfb, GLenum pname, GLint
// *param);
#define GLGetTransformFeedbackiv OpenGLLoadercontext->glGetTransformFeedbackiv
// GLAPI void APIENTRY glGetTransformFeedbacki_v (GLuint xfb, GLenum pname,
// GLuint index, GLint *param);
#define GLGetTransformFeedbacki_v OpenGLLoadercontext->glGetTransformFeedbacki_v
// GLAPI void APIENTRY glGetTransformFeedbacki64_v (GLuint xfb, GLenum pname,
// GLuint index, GLint64 *param);
#define GLGetTransformFeedbacki64_v                                            \
  OpenGLLoadercontext->glGetTransformFeedbacki64_v
// GLAPI void APIENTRY glCreateBuffers (GLsizei n, GLuint *buffers);
#define GLCreateBuffers OpenGLLoadercontext->glCreateBuffers
// GLAPI void APIENTRY glNamedBufferStorage (GLuint buffer, GLsizeiptr size,
// const void *data, GLbitfield flags);
#define GLNamedBufferStorage OpenGLLoadercontext->glNamedBufferStorage
// GLAPI void APIENTRY glNamedBufferData (GLuint buffer, GLsizeiptr size, const
// void *data, GLenum usage);
#define GLNamedBufferData OpenGLLoadercontext->glNamedBufferData
// GLAPI void APIENTRY glNamedBufferSubData (GLuint buffer, GLintptr offset,
// GLsizeiptr size, const void *data);
#define GLNamedBufferSubData OpenGLLoadercontext->glNamedBufferSubData
// GLAPI void APIENTRY glCopyNamedBufferSubData (GLuint readBuffer, GLuint
// writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
#define GLCopyNamedBufferSubData OpenGLLoadercontext->glCopyNamedBufferSubData
// GLAPI void APIENTRY glClearNamedBufferData (GLuint buffer, GLenum
// internalformat, GLenum format, GLenum type, const void *data);
#define GLClearNamedBufferData OpenGLLoadercontext->glClearNamedBufferData
// GLAPI void APIENTRY glClearNamedBufferSubData (GLuint buffer, GLenum
// internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type,
// const void *data);
#define GLClearNamedBufferSubData OpenGLLoadercontext->glClearNamedBufferSubData
// GLAPI void *APIENTRY glMapNamedBuffer (GLuint buffer, GLenum access);
#define GLMapNamedBuffer OpenGLLoadercontext->glMapNamedBuffer
// GLAPI void *APIENTRY glMapNamedBufferRange (GLuint buffer, GLintptr offset,
// GLsizeiptr length, GLbitfield access);
#define GLMapNamedBufferRange OpenGLLoadercontext->glMapNamedBufferRange
// GLAPI GLboolean APIENTRY glUnmapNamedBuffer (GLuint buffer);
#define GLUnmapNamedBuffer OpenGLLoadercontext->glUnmapNamedBuffer
// GLAPI void APIENTRY glFlushMappedNamedBufferRange (GLuint buffer, GLintptr
// offset, GLsizeiptr length);
#define GLFlushMappedNamedBufferRange                                          \
  OpenGLLoadercontext->glFlushMappedNamedBufferRange
// GLAPI void APIENTRY glGetNamedBufferParameteriv (GLuint buffer, GLenum pname,
// GLint *params);
#define GLGetNamedBufferParameteriv                                            \
  OpenGLLoadercontext->glGetNamedBufferParameteriv
// GLAPI void APIENTRY glGetNamedBufferParameteri64v (GLuint buffer, GLenum
// pname, GLint64 *params);
#define GLGetNamedBufferParameteri64v                                          \
  OpenGLLoadercontext->glGetNamedBufferParameteri64v
// GLAPI void APIENTRY glGetNamedBufferPointerv (GLuint buffer, GLenum pname,
// void **params);
#define GLGetNamedBufferPointerv OpenGLLoadercontext->glGetNamedBufferPointerv
// GLAPI void APIENTRY glGetNamedBufferSubData (GLuint buffer, GLintptr offset,
// GLsizeiptr size, void *data);
#define GLGetNamedBufferSubData OpenGLLoadercontext->glGetNamedBufferSubData
// GLAPI void APIENTRY glCreateFramebuffers (GLsizei n, GLuint *framebuffers);
#define GLCreateFramebuffers OpenGLLoadercontext->glCreateFramebuffers
// GLAPI void APIENTRY glNamedFramebufferRenderbuffer (GLuint framebuffer,
// GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
#define GLNamedFramebufferRenderbuffer                                         \
  OpenGLLoadercontext->glNamedFramebufferRenderbuffer
// GLAPI void APIENTRY glNamedFramebufferParameteri (GLuint framebuffer, GLenum
// pname, GLint param);
#define GLNamedFramebufferParameteri                                           \
  OpenGLLoadercontext->glNamedFramebufferParameteri
// GLAPI void APIENTRY glNamedFramebufferTexture (GLuint framebuffer, GLenum
// attachment, GLuint texture, GLint level);
#define GLNamedFramebufferTexture OpenGLLoadercontext->glNamedFramebufferTexture
// GLAPI void APIENTRY glNamedFramebufferTextureLayer (GLuint framebuffer,
// GLenum attachment, GLuint texture, GLint level, GLint layer);
#define GLNamedFramebufferTextureLayer                                         \
  OpenGLLoadercontext->glNamedFramebufferTextureLayer
// GLAPI void APIENTRY glNamedFramebufferDrawBuffer (GLuint framebuffer, GLenum
// buf);
#define GLNamedFramebufferDrawBuffer                                           \
  OpenGLLoadercontext->glNamedFramebufferDrawBuffer
// GLAPI void APIENTRY glNamedFramebufferDrawBuffers (GLuint framebuffer,
// GLsizei n, const GLenum *bufs);
#define GLNamedFramebufferDrawBuffers                                          \
  OpenGLLoadercontext->glNamedFramebufferDrawBuffers
// GLAPI void APIENTRY glNamedFramebufferReadBuffer (GLuint framebuffer, GLenum
// src);
#define GLNamedFramebufferReadBuffer                                           \
  OpenGLLoadercontext->glNamedFramebufferReadBuffer
// GLAPI void APIENTRY glInvalidateNamedFramebufferData (GLuint framebuffer,
// GLsizei numAttachments, const GLenum *attachments);
#define GLInvalidateNamedFramebufferData                                       \
  OpenGLLoadercontext->glInvalidateNamedFramebufferData
// GLAPI void APIENTRY glInvalidateNamedFramebufferSubData (GLuint framebuffer,
// GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei
// width, GLsizei height);
#define GLInvalidateNamedFramebufferSubData                                    \
  OpenGLLoadercontext->glInvalidateNamedFramebufferSubData
// GLAPI void APIENTRY glClearNamedFramebufferiv (GLuint framebuffer, GLenum
// buffer, GLint drawbuffer, const GLint *value);
#define GLClearNamedFramebufferiv OpenGLLoadercontext->glClearNamedFramebufferiv
// GLAPI void APIENTRY glClearNamedFramebufferuiv (GLuint framebuffer, GLenum
// buffer, GLint drawbuffer, const GLuint *value);
#define GLClearNamedFramebufferuiv                                             \
  OpenGLLoadercontext->glClearNamedFramebufferuiv
// GLAPI void APIENTRY glClearNamedFramebufferfv (GLuint framebuffer, GLenum
// buffer, GLint drawbuffer, const GLfloat *value);
#define GLClearNamedFramebufferfv OpenGLLoadercontext->glClearNamedFramebufferfv
// GLAPI void APIENTRY glClearNamedFramebufferfi (GLuint framebuffer, GLenum
// buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
#define GLClearNamedFramebufferfi OpenGLLoadercontext->glClearNamedFramebufferfi
// GLAPI void APIENTRY glBlitNamedFramebuffer (GLuint readFramebuffer, GLuint
// drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint
// dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum
// filter);
#define GLBlitNamedFramebuffer OpenGLLoadercontext->glBlitNamedFramebuffer
// GLAPI GLenum APIENTRY glCheckNamedFramebufferStatus (GLuint framebuffer,
// GLenum target);
#define GLCheckNamedFramebufferStatus                                          \
  OpenGLLoadercontext->glCheckNamedFramebufferStatus
// GLAPI void APIENTRY glGetNamedFramebufferParameteriv (GLuint framebuffer,
// GLenum pname, GLint *param);
#define GLGetNamedFramebufferParameteriv                                       \
  OpenGLLoadercontext->glGetNamedFramebufferParameteriv
// GLAPI void APIENTRY glGetNamedFramebufferAttachmentParameteriv (GLuint
// framebuffer, GLenum attachment, GLenum pname, GLint *params);
#define GLGetNamedFramebufferAttachmentParameteriv                             \
  OpenGLLoadercontext->glGetNamedFramebufferAttachmentParameteriv
// GLAPI void APIENTRY glCreateRenderbuffers (GLsizei n, GLuint *renderbuffers);
#define GLCreateRenderbuffers OpenGLLoadercontext->glCreateRenderbuffers
// GLAPI void APIENTRY glNamedRenderbufferStorage (GLuint renderbuffer, GLenum
// internalformat, GLsizei width, GLsizei height);
#define GLNamedRenderbufferStorage                                             \
  OpenGLLoadercontext->glNamedRenderbufferStorage
// GLAPI void APIENTRY glNamedRenderbufferStorageMultisample (GLuint
// renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei
// height);
#define GLNamedRenderbufferStorageMultisample                                  \
  OpenGLLoadercontext->glNamedRenderbufferStorageMultisample
// GLAPI void APIENTRY glGetNamedRenderbufferParameteriv (GLuint renderbuffer,
// GLenum pname, GLint *params);
#define GLGetNamedRenderbufferParameteriv                                      \
  OpenGLLoadercontext->glGetNamedRenderbufferParameteriv
// GLAPI void APIENTRY glCreateTextures (GLenum target, GLsizei n, GLuint
// *textures);
#define GLCreateTextures OpenGLLoadercontext->glCreateTextures
// GLAPI void APIENTRY glTextureBuffer (GLuint texture, GLenum internalformat,
// GLuint buffer);
#define GLTextureBuffer OpenGLLoadercontext->glTextureBuffer
// GLAPI void APIENTRY glTextureBufferRange (GLuint texture, GLenum
// internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
#define GLTextureBufferRange OpenGLLoadercontext->glTextureBufferRange
// GLAPI void APIENTRY glTextureStorage1D (GLuint texture, GLsizei levels,
// GLenum internalformat, GLsizei width);
#define GLTextureStorage1D OpenGLLoadercontext->glTextureStorage1D
// GLAPI void APIENTRY glTextureStorage2D (GLuint texture, GLsizei levels,
// GLenum internalformat, GLsizei width, GLsizei height);
#define GLTextureStorage2D OpenGLLoadercontext->glTextureStorage2D
// GLAPI void APIENTRY glTextureStorage3D (GLuint texture, GLsizei levels,
// GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
#define GLTextureStorage3D OpenGLLoadercontext->glTextureStorage3D
// GLAPI void APIENTRY glTextureStorage2DMultisample (GLuint texture, GLsizei
// samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean
// fixedsamplelocations);
#define GLTextureStorage2DMultisample                                          \
  OpenGLLoadercontext->glTextureStorage2DMultisample
// GLAPI void APIENTRY glTextureStorage3DMultisample (GLuint texture, GLsizei
// samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth,
// GLboolean fixedsamplelocations);
#define GLTextureStorage3DMultisample                                          \
  OpenGLLoadercontext->glTextureStorage3DMultisample
// GLAPI void APIENTRY glTextureSubImage1D (GLuint texture, GLint level, GLint
// xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
#define GLTextureSubImage1D OpenGLLoadercontext->glTextureSubImage1D
// GLAPI void APIENTRY glTextureSubImage2D (GLuint texture, GLint level, GLint
// xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum
// type, const void *pixels);
#define GLTextureSubImage2D OpenGLLoadercontext->glTextureSubImage2D
// GLAPI void APIENTRY glTextureSubImage3D (GLuint texture, GLint level, GLint
// xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei
// depth, GLenum format, GLenum type, const void *pixels);
#define GLTextureSubImage3D OpenGLLoadercontext->glTextureSubImage3D
// GLAPI void APIENTRY glCompressedTextureSubImage1D (GLuint texture, GLint
// level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const
// void *data);
#define GLCompressedTextureSubImage1D                                          \
  OpenGLLoadercontext->glCompressedTextureSubImage1D
// GLAPI void APIENTRY glCompressedTextureSubImage2D (GLuint texture, GLint
// level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum
// format, GLsizei imageSize, const void *data);
#define GLCompressedTextureSubImage2D                                          \
  OpenGLLoadercontext->glCompressedTextureSubImage2D
// GLAPI void APIENTRY glCompressedTextureSubImage3D (GLuint texture, GLint
// level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei
// height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
#define GLCompressedTextureSubImage3D                                          \
  OpenGLLoadercontext->glCompressedTextureSubImage3D
// GLAPI void APIENTRY glCopyTextureSubImage1D (GLuint texture, GLint level,
// GLint xoffset, GLint x, GLint y, GLsizei width);
#define GLCopyTextureSubImage1D OpenGLLoadercontext->glCopyTextureSubImage1D
// GLAPI void APIENTRY glCopyTextureSubImage2D (GLuint texture, GLint level,
// GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei
// height);
#define GLCopyTextureSubImage2D OpenGLLoadercontext->glCopyTextureSubImage2D
// GLAPI void APIENTRY glCopyTextureSubImage3D (GLuint texture, GLint level,
// GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width,
// GLsizei height);
#define GLCopyTextureSubImage3D OpenGLLoadercontext->glCopyTextureSubImage3D
// GLAPI void APIENTRY glTextureParameterf (GLuint texture, GLenum pname,
// GLfloat param);
#define GLTextureParameterf OpenGLLoadercontext->glTextureParameterf
// GLAPI void APIENTRY glTextureParameterfv (GLuint texture, GLenum pname, const
// GLfloat *param);
#define GLTextureParameterfv OpenGLLoadercontext->glTextureParameterfv
// GLAPI void APIENTRY glTextureParameteri (GLuint texture, GLenum pname, GLint
// param);
#define GLTextureParameteri OpenGLLoadercontext->glTextureParameteri
// GLAPI void APIENTRY glTextureParameterIiv (GLuint texture, GLenum pname,
// const GLint *params);
#define GLTextureParameterIiv OpenGLLoadercontext->glTextureParameterIiv
// GLAPI void APIENTRY glTextureParameterIuiv (GLuint texture, GLenum pname,
// const GLuint *params);
#define GLTextureParameterIuiv OpenGLLoadercontext->glTextureParameterIuiv
// GLAPI void APIENTRY glTextureParameteriv (GLuint texture, GLenum pname, const
// GLint *param);
#define GLTextureParameteriv OpenGLLoadercontext->glTextureParameteriv
// GLAPI void APIENTRY glGenerateTextureMipmap (GLuint texture);
#define GLGenerateTextureMipmap OpenGLLoadercontext->glGenerateTextureMipmap
// GLAPI void APIENTRY glBindTextureUnit (GLuint unit, GLuint texture);
#define GLBindTextureUnit OpenGLLoadercontext->glBindTextureUnit
// GLAPI void APIENTRY glGetTextureImage (GLuint texture, GLint level, GLenum
// format, GLenum type, GLsizei bufSize, void *pixels);
#define GLGetTextureImage OpenGLLoadercontext->glGetTextureImage
// GLAPI void APIENTRY glGetCompressedTextureImage (GLuint texture, GLint level,
// GLsizei bufSize, void *pixels);
#define GLGetCompressedTextureImage                                            \
  OpenGLLoadercontext->glGetCompressedTextureImage
// GLAPI void APIENTRY glGetTextureLevelParameterfv (GLuint texture, GLint
// level, GLenum pname, GLfloat *params);
#define GLGetTextureLevelParameterfv                                           \
  OpenGLLoadercontext->glGetTextureLevelParameterfv
// GLAPI void APIENTRY glGetTextureLevelParameteriv (GLuint texture, GLint
// level, GLenum pname, GLint *params);
#define GLGetTextureLevelParameteriv                                           \
  OpenGLLoadercontext->glGetTextureLevelParameteriv
// GLAPI void APIENTRY glGetTextureParameterfv (GLuint texture, GLenum pname,
// GLfloat *params);
#define GLGetTextureParameterfv OpenGLLoadercontext->glGetTextureParameterfv
// GLAPI void APIENTRY glGetTextureParameterIiv (GLuint texture, GLenum pname,
// GLint *params);
#define GLGetTextureParameterIiv OpenGLLoadercontext->glGetTextureParameterIiv
// GLAPI void APIENTRY glGetTextureParameterIuiv (GLuint texture, GLenum pname,
// GLuint *params);
#define GLGetTextureParameterIuiv OpenGLLoadercontext->glGetTextureParameterIuiv
// GLAPI void APIENTRY glGetTextureParameteriv (GLuint texture, GLenum pname,
// GLint *params);
#define GLGetTextureParameteriv OpenGLLoadercontext->glGetTextureParameteriv
// GLAPI void APIENTRY glCreateVertexArrays (GLsizei n, GLuint *arrays);
#define GLCreateVertexArrays OpenGLLoadercontext->glCreateVertexArrays
// GLAPI void APIENTRY glDisableVertexArrayAttrib (GLuint vaobj, GLuint index);
#define GLDisableVertexArrayAttrib                                             \
  OpenGLLoadercontext->glDisableVertexArrayAttrib
// GLAPI void APIENTRY glEnableVertexArrayAttrib (GLuint vaobj, GLuint index);
#define GLEnableVertexArrayAttrib OpenGLLoadercontext->glEnableVertexArrayAttrib
// GLAPI void APIENTRY glVertexArrayElementBuffer (GLuint vaobj, GLuint buffer);
#define GLVertexArrayElementBuffer                                             \
  OpenGLLoadercontext->glVertexArrayElementBuffer
// GLAPI void APIENTRY glVertexArrayVertexBuffer (GLuint vaobj, GLuint
// bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
#define GLVertexArrayVertexBuffer OpenGLLoadercontext->glVertexArrayVertexBuffer
// GLAPI void APIENTRY glVertexArrayVertexBuffers (GLuint vaobj, GLuint first,
// GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei
// *strides);
#define GLVertexArrayVertexBuffers                                             \
  OpenGLLoadercontext->glVertexArrayVertexBuffers
// GLAPI void APIENTRY glVertexArrayAttribBinding (GLuint vaobj, GLuint
// attribindex, GLuint bindingindex);
#define GLVertexArrayAttribBinding                                             \
  OpenGLLoadercontext->glVertexArrayAttribBinding
// GLAPI void APIENTRY glVertexArrayAttribFormat (GLuint vaobj, GLuint
// attribindex, GLint size, GLenum type, GLboolean normalized, GLuint
// relativeoffset);
#define GLVertexArrayAttribFormat OpenGLLoadercontext->glVertexArrayAttribFormat
// GLAPI void APIENTRY glVertexArrayAttribIFormat (GLuint vaobj, GLuint
// attribindex, GLint size, GLenum type, GLuint relativeoffset);
#define GLVertexArrayAttribIFormat                                             \
  OpenGLLoadercontext->glVertexArrayAttribIFormat
// GLAPI void APIENTRY glVertexArrayAttribLFormat (GLuint vaobj, GLuint
// attribindex, GLint size, GLenum type, GLuint relativeoffset);
#define GLVertexArrayAttribLFormat                                             \
  OpenGLLoadercontext->glVertexArrayAttribLFormat
// GLAPI void APIENTRY glVertexArrayBindingDivisor (GLuint vaobj, GLuint
// bindingindex, GLuint divisor);
#define GLVertexArrayBindingDivisor                                            \
  OpenGLLoadercontext->glVertexArrayBindingDivisor
// GLAPI void APIENTRY glGetVertexArrayiv (GLuint vaobj, GLenum pname, GLint
// *param);
#define GLGetVertexArrayiv OpenGLLoadercontext->glGetVertexArrayiv
// GLAPI void APIENTRY glGetVertexArrayIndexediv (GLuint vaobj, GLuint index,
// GLenum pname, GLint *param);
#define GLGetVertexArrayIndexediv OpenGLLoadercontext->glGetVertexArrayIndexediv
// GLAPI void APIENTRY glGetVertexArrayIndexed64iv (GLuint vaobj, GLuint index,
// GLenum pname, GLint64 *param);
#define GLGetVertexArrayIndexed64iv                                            \
  OpenGLLoadercontext->glGetVertexArrayIndexed64iv
// GLAPI void APIENTRY glCreateSamplers (GLsizei n, GLuint *samplers);
#define GLCreateSamplers OpenGLLoadercontext->glCreateSamplers
// GLAPI void APIENTRY glCreateProgramPipelines (GLsizei n, GLuint *pipelines);
#define GLCreateProgramPipelines OpenGLLoadercontext->glCreateProgramPipelines
// GLAPI void APIENTRY glCreateQueries (GLenum target, GLsizei n, GLuint *ids);
#define GLCreateQueries OpenGLLoadercontext->glCreateQueries
// GLAPI void APIENTRY glGetQueryBufferObjecti64v (GLuint id, GLuint buffer,
// GLenum pname, GLintptr offset);
#define GLGetQueryBufferObjecti64v                                             \
  OpenGLLoadercontext->glGetQueryBufferObjecti64v
// GLAPI void APIENTRY glGetQueryBufferObjectiv (GLuint id, GLuint buffer,
// GLenum pname, GLintptr offset);
#define GLGetQueryBufferObjectiv OpenGLLoadercontext->glGetQueryBufferObjectiv
// GLAPI void APIENTRY glGetQueryBufferObjectui64v (GLuint id, GLuint buffer,
// GLenum pname, GLintptr offset);
#define GLGetQueryBufferObjectui64v                                            \
  OpenGLLoadercontext->glGetQueryBufferObjectui64v
// GLAPI void APIENTRY glGetQueryBufferObjectuiv (GLuint id, GLuint buffer,
// GLenum pname, GLintptr offset);
#define GLGetQueryBufferObjectuiv OpenGLLoadercontext->glGetQueryBufferObjectuiv
// GLAPI void APIENTRY glMemoryBarrierByRegion (GLbitfield barriers);
#define GLMemoryBarrierByRegion OpenGLLoadercontext->glMemoryBarrierByRegion
// GLAPI void APIENTRY glGetTextureSubImage (GLuint texture, GLint level, GLint
// xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei
// depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
#define GLGetTextureSubImage OpenGLLoadercontext->glGetTextureSubImage
// GLAPI void APIENTRY glGetCompressedTextureSubImage (GLuint texture, GLint
// level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei
// height, GLsizei depth, GLsizei bufSize, void *pixels);
#define GLGetCompressedTextureSubImage                                         \
  OpenGLLoadercontext->glGetCompressedTextureSubImage
// GLAPI GLenum APIENTRY glGetGraphicsResetStatus (void);
#define GLGetGraphicsResetStatus OpenGLLoadercontext->glGetGraphicsResetStatus
// GLAPI void APIENTRY glGetnCompressedTexImage (GLenum target, GLint lod,
// GLsizei bufSize, void *pixels);
#define GLGetnCompressedTexImage OpenGLLoadercontext->glGetnCompressedTexImage
// GLAPI void APIENTRY glGetnTexImage (GLenum target, GLint level, GLenum
// format, GLenum type, GLsizei bufSize, void *pixels);
#define GLGetnTexImage OpenGLLoadercontext->glGetnTexImage
// GLAPI void APIENTRY glGetnUniformdv (GLuint program, GLint location, GLsizei
// bufSize, GLdouble *params);
#define GLGetnUniformdv OpenGLLoadercontext->glGetnUniformdv
// GLAPI void APIENTRY glGetnUniformfv (GLuint program, GLint location, GLsizei
// bufSize, GLfloat *params);
#define GLGetnUniformfv OpenGLLoadercontext->glGetnUniformfv
// GLAPI void APIENTRY glGetnUniformiv (GLuint program, GLint location, GLsizei
// bufSize, GLint *params);
#define GLGetnUniformiv OpenGLLoadercontext->glGetnUniformiv
// GLAPI void APIENTRY glGetnUniformuiv (GLuint program, GLint location, GLsizei
// bufSize, GLuint *params);
#define GLGetnUniformuiv OpenGLLoadercontext->glGetnUniformuiv
// GLAPI void APIENTRY glReadnPixels (GLint x, GLint y, GLsizei width, GLsizei
// height, GLenum format, GLenum type, GLsizei bufSize, void *data);
#define GLReadnPixels OpenGLLoadercontext->glReadnPixels
// GLAPI void APIENTRY glGetnMapdv (GLenum target, GLenum query, GLsizei
// bufSize, GLdouble *v);
#define GLGetnMapdv OpenGLLoadercontext->glGetnMapdv
// GLAPI void APIENTRY glGetnMapfv (GLenum target, GLenum query, GLsizei
// bufSize, GLfloat *v);
#define GLGetnMapfv OpenGLLoadercontext->glGetnMapfv
// GLAPI void APIENTRY glGetnMapiv (GLenum target, GLenum query, GLsizei
// bufSize, GLint *v);
#define GLGetnMapiv OpenGLLoadercontext->glGetnMapiv
// GLAPI void APIENTRY glGetnPixelMapfv (GLenum map, GLsizei bufSize, GLfloat
// *values);
#define GLGetnPixelMapfv OpenGLLoadercontext->glGetnPixelMapfv
// GLAPI void APIENTRY glGetnPixelMapuiv (GLenum map, GLsizei bufSize, GLuint
// *values);
#define GLGetnPixelMapuiv OpenGLLoadercontext->glGetnPixelMapuiv
// GLAPI void APIENTRY glGetnPixelMapusv (GLenum map, GLsizei bufSize, GLushort
// *values);
#define GLGetnPixelMapusv OpenGLLoadercontext->glGetnPixelMapusv
// GLAPI void APIENTRY glGetnPolygonStipple (GLsizei bufSize, GLubyte *pattern);
#define GLGetnPolygonStipple OpenGLLoadercontext->glGetnPolygonStipple
// GLAPI void APIENTRY glGetnColorTable (GLenum target, GLenum format, GLenum
// type, GLsizei bufSize, void *table);
#define GLGetnColorTable OpenGLLoadercontext->glGetnColorTable
// GLAPI void APIENTRY glGetnConvolutionFilter (GLenum target, GLenum format,
// GLenum type, GLsizei bufSize, void *image);
#define GLGetnConvolutionFilter OpenGLLoadercontext->glGetnConvolutionFilter
// GLAPI void APIENTRY glGetnSeparableFilter (GLenum target, GLenum format,
// GLenum type, GLsizei rowBufSize, void *row, GLsizei columnBufSize, void
// *column, void *span);
#define GLGetnSeparableFilter OpenGLLoadercontext->glGetnSeparableFilter
// GLAPI void APIENTRY glGetnHistogram (GLenum target, GLboolean reset, GLenum
// format, GLenum type, GLsizei bufSize, void *values);
#define GLGetnHistogram OpenGLLoadercontext->glGetnHistogram
// GLAPI void APIENTRY glGetnMinmax (GLenum target, GLboolean reset, GLenum
// format, GLenum type, GLsizei bufSize, void *values);
#define GLGetnMinmax OpenGLLoadercontext->glGetnMinmax
// GLAPI void APIENTRY glTextureBarrier (void);
#define GLTextureBarrier OpenGLLoadercontext->glTextureBarrier
// GLAPI void APIENTRY glSpecializeShader (GLuint shader, const GLchar
// *pEntryPoint, GLuint numSpecializationConstants, const GLuint
// *pConstantIndex, const GLuint *pConstantValue);
#define GLSpecializeShader OpenGLLoadercontext->glSpecializeShader
// GLAPI void APIENTRY glMultiDrawArraysIndirectCount (GLenum mode, const void
// *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
#define GLMultiDrawArraysIndirectCount                                         \
  OpenGLLoadercontext->glMultiDrawArraysIndirectCount
// GLAPI void APIENTRY glMultiDrawElementsIndirectCount (GLenum mode, GLenum
// type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei
// stride);
#define GLMultiDrawElementsIndirectCount                                       \
  OpenGLLoadercontext->glMultiDrawElementsIndirectCount
// GLAPI void APIENTRY glPolygonOffsetClamp (GLfloat factor, GLfloat units,
// GLfloat clamp);
#define GLPolygonOffsetClamp OpenGLLoadercontext->glPolygonOffsetClamp
// GLAPI void APIENTRY glPrimitiveBoundingBoxARB (GLfloat minX, GLfloat minY,
// GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat
// maxW);
#define GLPrimitiveBoundingBoxARB OpenGLLoadercontext->glPrimitiveBoundingBoxARB
// GLAPI GLuint64 APIENTRY glGetTextureHandleARB (GLuint texture);
#define GLGetTextureHandleARB OpenGLLoadercontext->glGetTextureHandleARB
// GLAPI GLuint64 APIENTRY glGetTextureSamplerHandleARB (GLuint texture, GLuint
// sampler);
#define GLGetTextureSamplerHandleARB                                           \
  OpenGLLoadercontext->glGetTextureSamplerHandleARB
// GLAPI void APIENTRY glMakeTextureHandleResidentARB (GLuint64 handle);
#define GLMakeTextureHandleResidentARB                                         \
  OpenGLLoadercontext->glMakeTextureHandleResidentARB
// GLAPI void APIENTRY glMakeTextureHandleNonResidentARB (GLuint64 handle);
#define GLMakeTextureHandleNonResidentARB                                      \
  OpenGLLoadercontext->glMakeTextureHandleNonResidentARB
// GLAPI GLuint64 APIENTRY glGetImageHandleARB (GLuint texture, GLint level,
// GLboolean layered, GLint layer, GLenum format);
#define GLGetImageHandleARB OpenGLLoadercontext->glGetImageHandleARB
// GLAPI void APIENTRY glMakeImageHandleResidentARB (GLuint64 handle, GLenum
// access);
#define GLMakeImageHandleResidentARB                                           \
  OpenGLLoadercontext->glMakeImageHandleResidentARB
// GLAPI void APIENTRY glMakeImageHandleNonResidentARB (GLuint64 handle);
#define GLMakeImageHandleNonResidentARB                                        \
  OpenGLLoadercontext->glMakeImageHandleNonResidentARB
// GLAPI void APIENTRY glUniformHandleui64ARB (GLint location, GLuint64 value);
#define GLUniformHandleui64ARB OpenGLLoadercontext->glUniformHandleui64ARB
// GLAPI void APIENTRY glUniformHandleui64vARB (GLint location, GLsizei count,
// const GLuint64 *value);
#define GLUniformHandleui64vARB OpenGLLoadercontext->glUniformHandleui64vARB
// GLAPI void APIENTRY glProgramUniformHandleui64ARB (GLuint program, GLint
// location, GLuint64 value);
#define GLProgramUniformHandleui64ARB                                          \
  OpenGLLoadercontext->glProgramUniformHandleui64ARB
// GLAPI void APIENTRY glProgramUniformHandleui64vARB (GLuint program, GLint
// location, GLsizei count, const GLuint64 *values);
#define GLProgramUniformHandleui64vARB                                         \
  OpenGLLoadercontext->glProgramUniformHandleui64vARB
// GLAPI GLboolean APIENTRY glIsTextureHandleResidentARB (GLuint64 handle);
#define GLIsTextureHandleResidentARB                                           \
  OpenGLLoadercontext->glIsTextureHandleResidentARB
// GLAPI GLboolean APIENTRY glIsImageHandleResidentARB (GLuint64 handle);
#define GLIsImageHandleResidentARB                                             \
  OpenGLLoadercontext->glIsImageHandleResidentARB
// GLAPI void APIENTRY glVertexAttribL1ui64ARB (GLuint index, GLuint64EXT x);
#define GLVertexAttribL1ui64ARB OpenGLLoadercontext->glVertexAttribL1ui64ARB
// GLAPI void APIENTRY glVertexAttribL1ui64vARB (GLuint index, const GLuint64EXT
// *v);
#define GLVertexAttribL1ui64vARB OpenGLLoadercontext->glVertexAttribL1ui64vARB
// GLAPI void APIENTRY glGetVertexAttribLui64vARB (GLuint index, GLenum pname,
// GLuint64EXT *params);
#define GLGetVertexAttribLui64vARB                                             \
  OpenGLLoadercontext->glGetVertexAttribLui64vARB
// GLAPI GLsync APIENTRY glCreateSyncFromCLeventARB (struct _cl_context
// *context, struct _cl_event *event, GLbitfield flags);
#define GLCreateSyncFromCLeventARB                                             \
  OpenGLLoadercontext->glCreateSyncFromCLeventARB
// GLAPI void APIENTRY glClampColorARB (GLenum target, GLenum clamp);
#define GLClampColorARB OpenGLLoadercontext->glClampColorARB
// GLAPI void APIENTRY glDispatchComputeGroupSizeARB (GLuint num_groups_x,
// GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint
// group_size_y, GLuint group_size_z);
#define GLDispatchComputeGroupSizeARB                                          \
  OpenGLLoadercontext->glDispatchComputeGroupSizeARB
// GLAPI void APIENTRY glDebugMessageControlARB (GLenum source, GLenum type,
// GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
#define GLDebugMessageControlARB OpenGLLoadercontext->glDebugMessageControlARB
// GLAPI void APIENTRY glDebugMessageInsertARB (GLenum source, GLenum type,
// GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
#define GLDebugMessageInsertARB OpenGLLoadercontext->glDebugMessageInsertARB
// GLAPI void APIENTRY glDebugMessageCallbackARB (GLDEBUGPROCARB callback, const
// void *userParam);
#define GLDebugMessageCallbackARB OpenGLLoadercontext->glDebugMessageCallbackARB
// GLAPI GLuint APIENTRY glGetDebugMessageLogARB (GLuint count, GLsizei bufSize,
// GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei
// *lengths, GLchar *messageLog);
#define GLGetDebugMessageLogARB OpenGLLoadercontext->glGetDebugMessageLogARB
// GLAPI void APIENTRY glDrawBuffersARB (GLsizei n, const GLenum *bufs);
#define GLDrawBuffersARB OpenGLLoadercontext->glDrawBuffersARB
// GLAPI void APIENTRY glBlendEquationiARB (GLuint buf, GLenum mode);
#define GLBlendEquationiARB OpenGLLoadercontext->glBlendEquationiARB
// GLAPI void APIENTRY glBlendEquationSeparateiARB (GLuint buf, GLenum modeRGB,
// GLenum modeAlpha);
#define GLBlendEquationSeparateiARB                                            \
  OpenGLLoadercontext->glBlendEquationSeparateiARB
// GLAPI void APIENTRY glBlendFunciARB (GLuint buf, GLenum src, GLenum dst);
#define GLBlendFunciARB OpenGLLoadercontext->glBlendFunciARB
// GLAPI void APIENTRY glBlendFuncSeparateiARB (GLuint buf, GLenum srcRGB,
// GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
#define GLBlendFuncSeparateiARB OpenGLLoadercontext->glBlendFuncSeparateiARB
// GLAPI void APIENTRY glDrawArraysInstancedARB (GLenum mode, GLint first,
// GLsizei count, GLsizei primcount);
#define GLDrawArraysInstancedARB OpenGLLoadercontext->glDrawArraysInstancedARB
// GLAPI void APIENTRY glDrawElementsInstancedARB (GLenum mode, GLsizei count,
// GLenum type, const void *indices, GLsizei primcount);
#define GLDrawElementsInstancedARB                                             \
  OpenGLLoadercontext->glDrawElementsInstancedARB
// GLAPI void APIENTRY glProgramStringARB (GLenum target, GLenum format, GLsizei
// len, const void *string);
#define GLProgramStringARB OpenGLLoadercontext->glProgramStringARB
// GLAPI void APIENTRY glBindProgramARB (GLenum target, GLuint program);
#define GLBindProgramARB OpenGLLoadercontext->glBindProgramARB
// GLAPI void APIENTRY glDeleteProgramsARB (GLsizei n, const GLuint *programs);
#define GLDeleteProgramsARB OpenGLLoadercontext->glDeleteProgramsARB
// GLAPI void APIENTRY glGenProgramsARB (GLsizei n, GLuint *programs);
#define GLGenProgramsARB OpenGLLoadercontext->glGenProgramsARB
// GLAPI void APIENTRY glProgramEnvParameter4dARB (GLenum target, GLuint index,
// GLdouble x, GLdouble y, GLdouble z, GLdouble w);
#define GLProgramEnvParameter4dARB                                             \
  OpenGLLoadercontext->glProgramEnvParameter4dARB
// GLAPI void APIENTRY glProgramEnvParameter4dvARB (GLenum target, GLuint index,
// const GLdouble *params);
#define GLProgramEnvParameter4dvARB                                            \
  OpenGLLoadercontext->glProgramEnvParameter4dvARB
// GLAPI void APIENTRY glProgramEnvParameter4fARB (GLenum target, GLuint index,
// GLfloat x, GLfloat y, GLfloat z, GLfloat w);
#define GLProgramEnvParameter4fARB                                             \
  OpenGLLoadercontext->glProgramEnvParameter4fARB
// GLAPI void APIENTRY glProgramEnvParameter4fvARB (GLenum target, GLuint index,
// const GLfloat *params);
#define GLProgramEnvParameter4fvARB                                            \
  OpenGLLoadercontext->glProgramEnvParameter4fvARB
// GLAPI void APIENTRY glProgramLocalParameter4dARB (GLenum target, GLuint
// index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
#define GLProgramLocalParameter4dARB                                           \
  OpenGLLoadercontext->glProgramLocalParameter4dARB
// GLAPI void APIENTRY glProgramLocalParameter4dvARB (GLenum target, GLuint
// index, const GLdouble *params);
#define GLProgramLocalParameter4dvARB                                          \
  OpenGLLoadercontext->glProgramLocalParameter4dvARB
// GLAPI void APIENTRY glProgramLocalParameter4fARB (GLenum target, GLuint
// index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
#define GLProgramLocalParameter4fARB                                           \
  OpenGLLoadercontext->glProgramLocalParameter4fARB
// GLAPI void APIENTRY glProgramLocalParameter4fvARB (GLenum target, GLuint
// index, const GLfloat *params);
#define GLProgramLocalParameter4fvARB                                          \
  OpenGLLoadercontext->glProgramLocalParameter4fvARB
// GLAPI void APIENTRY glGetProgramEnvParameterdvARB (GLenum target, GLuint
// index, GLdouble *params);
#define GLGetProgramEnvParameterdvARB                                          \
  OpenGLLoadercontext->glGetProgramEnvParameterdvARB
// GLAPI void APIENTRY glGetProgramEnvParameterfvARB (GLenum target, GLuint
// index, GLfloat *params);
#define GLGetProgramEnvParameterfvARB                                          \
  OpenGLLoadercontext->glGetProgramEnvParameterfvARB
// GLAPI void APIENTRY glGetProgramLocalParameterdvARB (GLenum target, GLuint
// index, GLdouble *params);
#define GLGetProgramLocalParameterdvARB                                        \
  OpenGLLoadercontext->glGetProgramLocalParameterdvARB
// GLAPI void APIENTRY glGetProgramLocalParameterfvARB (GLenum target, GLuint
// index, GLfloat *params);
#define GLGetProgramLocalParameterfvARB                                        \
  OpenGLLoadercontext->glGetProgramLocalParameterfvARB
// GLAPI void APIENTRY glGetProgramivARB (GLenum target, GLenum pname, GLint
// *params);
#define GLGetProgramivARB OpenGLLoadercontext->glGetProgramivARB
// GLAPI void APIENTRY glGetProgramStringARB (GLenum target, GLenum pname, void
// *string);
#define GLGetProgramStringARB OpenGLLoadercontext->glGetProgramStringARB
// GLAPI GLboolean APIENTRY glIsProgramARB (GLuint program);
#define GLIsProgramARB OpenGLLoadercontext->glIsProgramARB
// GLAPI void APIENTRY glProgramParameteriARB (GLuint program, GLenum pname,
// GLint value);
#define GLProgramParameteriARB OpenGLLoadercontext->glProgramParameteriARB
// GLAPI void APIENTRY glFramebufferTextureARB (GLenum target, GLenum
// attachment, GLuint texture, GLint level);
#define GLFramebufferTextureARB OpenGLLoadercontext->glFramebufferTextureARB
// GLAPI void APIENTRY glFramebufferTextureLayerARB (GLenum target, GLenum
// attachment, GLuint texture, GLint level, GLint layer);
#define GLFramebufferTextureLayerARB                                           \
  OpenGLLoadercontext->glFramebufferTextureLayerARB
// GLAPI void APIENTRY glFramebufferTextureFaceARB (GLenum target, GLenum
// attachment, GLuint texture, GLint level, GLenum face);
#define GLFramebufferTextureFaceARB                                            \
  OpenGLLoadercontext->glFramebufferTextureFaceARB
// GLAPI void APIENTRY glSpecializeShaderARB (GLuint shader, const GLchar
// *pEntryPoint, GLuint numSpecializationConstants, const GLuint
// *pConstantIndex, const GLuint *pConstantValue);
#define GLSpecializeShaderARB OpenGLLoadercontext->glSpecializeShaderARB
// GLAPI void APIENTRY glUniform1i64ARB (GLint location, GLint64 x);
#define GLUniform1i64ARB OpenGLLoadercontext->glUniform1i64ARB
// GLAPI void APIENTRY glUniform2i64ARB (GLint location, GLint64 x, GLint64 y);
#define GLUniform2i64ARB OpenGLLoadercontext->glUniform2i64ARB
// GLAPI void APIENTRY glUniform3i64ARB (GLint location, GLint64 x, GLint64 y,
// GLint64 z);
#define GLUniform3i64ARB OpenGLLoadercontext->glUniform3i64ARB
// GLAPI void APIENTRY glUniform4i64ARB (GLint location, GLint64 x, GLint64 y,
// GLint64 z, GLint64 w);
#define GLUniform4i64ARB OpenGLLoadercontext->glUniform4i64ARB
// GLAPI void APIENTRY glUniform1i64vARB (GLint location, GLsizei count, const
// GLint64 *value);
#define GLUniform1i64vARB OpenGLLoadercontext->glUniform1i64vARB
// GLAPI void APIENTRY glUniform2i64vARB (GLint location, GLsizei count, const
// GLint64 *value);
#define GLUniform2i64vARB OpenGLLoadercontext->glUniform2i64vARB
// GLAPI void APIENTRY glUniform3i64vARB (GLint location, GLsizei count, const
// GLint64 *value);
#define GLUniform3i64vARB OpenGLLoadercontext->glUniform3i64vARB
// GLAPI void APIENTRY glUniform4i64vARB (GLint location, GLsizei count, const
// GLint64 *value);
#define GLUniform4i64vARB OpenGLLoadercontext->glUniform4i64vARB
// GLAPI void APIENTRY glUniform1ui64ARB (GLint location, GLuint64 x);
#define GLUniform1ui64ARB OpenGLLoadercontext->glUniform1ui64ARB
// GLAPI void APIENTRY glUniform2ui64ARB (GLint location, GLuint64 x, GLuint64
// y);
#define GLUniform2ui64ARB OpenGLLoadercontext->glUniform2ui64ARB
// GLAPI void APIENTRY glUniform3ui64ARB (GLint location, GLuint64 x, GLuint64
// y, GLuint64 z);
#define GLUniform3ui64ARB OpenGLLoadercontext->glUniform3ui64ARB
// GLAPI void APIENTRY glUniform4ui64ARB (GLint location, GLuint64 x, GLuint64
// y, GLuint64 z, GLuint64 w);
#define GLUniform4ui64ARB OpenGLLoadercontext->glUniform4ui64ARB
// GLAPI void APIENTRY glUniform1ui64vARB (GLint location, GLsizei count, const
// GLuint64 *value);
#define GLUniform1ui64vARB OpenGLLoadercontext->glUniform1ui64vARB
// GLAPI void APIENTRY glUniform2ui64vARB (GLint location, GLsizei count, const
// GLuint64 *value);
#define GLUniform2ui64vARB OpenGLLoadercontext->glUniform2ui64vARB
// GLAPI void APIENTRY glUniform3ui64vARB (GLint location, GLsizei count, const
// GLuint64 *value);
#define GLUniform3ui64vARB OpenGLLoadercontext->glUniform3ui64vARB
// GLAPI void APIENTRY glUniform4ui64vARB (GLint location, GLsizei count, const
// GLuint64 *value);
#define GLUniform4ui64vARB OpenGLLoadercontext->glUniform4ui64vARB
// GLAPI void APIENTRY glGetUniformi64vARB (GLuint program, GLint location,
// GLint64 *params);
#define GLGetUniformi64vARB OpenGLLoadercontext->glGetUniformi64vARB
// GLAPI void APIENTRY glGetUniformui64vARB (GLuint program, GLint location,
// GLuint64 *params);
#define GLGetUniformui64vARB OpenGLLoadercontext->glGetUniformui64vARB
// GLAPI void APIENTRY glGetnUniformi64vARB (GLuint program, GLint location,
// GLsizei bufSize, GLint64 *params);
#define GLGetnUniformi64vARB OpenGLLoadercontext->glGetnUniformi64vARB
// GLAPI void APIENTRY glGetnUniformui64vARB (GLuint program, GLint location,
// GLsizei bufSize, GLuint64 *params);
#define GLGetnUniformui64vARB OpenGLLoadercontext->glGetnUniformui64vARB
// GLAPI void APIENTRY glProgramUniform1i64ARB (GLuint program, GLint location,
// GLint64 x);
#define GLProgramUniform1i64ARB OpenGLLoadercontext->glProgramUniform1i64ARB
// GLAPI void APIENTRY glProgramUniform2i64ARB (GLuint program, GLint location,
// GLint64 x, GLint64 y);
#define GLProgramUniform2i64ARB OpenGLLoadercontext->glProgramUniform2i64ARB
// GLAPI void APIENTRY glProgramUniform3i64ARB (GLuint program, GLint location,
// GLint64 x, GLint64 y, GLint64 z);
#define GLProgramUniform3i64ARB OpenGLLoadercontext->glProgramUniform3i64ARB
// GLAPI void APIENTRY glProgramUniform4i64ARB (GLuint program, GLint location,
// GLint64 x, GLint64 y, GLint64 z, GLint64 w);
#define GLProgramUniform4i64ARB OpenGLLoadercontext->glProgramUniform4i64ARB
// GLAPI void APIENTRY glProgramUniform1i64vARB (GLuint program, GLint location,
// GLsizei count, const GLint64 *value);
#define GLProgramUniform1i64vARB OpenGLLoadercontext->glProgramUniform1i64vARB
// GLAPI void APIENTRY glProgramUniform2i64vARB (GLuint program, GLint location,
// GLsizei count, const GLint64 *value);
#define GLProgramUniform2i64vARB OpenGLLoadercontext->glProgramUniform2i64vARB
// GLAPI void APIENTRY glProgramUniform3i64vARB (GLuint program, GLint location,
// GLsizei count, const GLint64 *value);
#define GLProgramUniform3i64vARB OpenGLLoadercontext->glProgramUniform3i64vARB
// GLAPI void APIENTRY glProgramUniform4i64vARB (GLuint program, GLint location,
// GLsizei count, const GLint64 *value);
#define GLProgramUniform4i64vARB OpenGLLoadercontext->glProgramUniform4i64vARB
// GLAPI void APIENTRY glProgramUniform1ui64ARB (GLuint program, GLint location,
// GLuint64 x);
#define GLProgramUniform1ui64ARB OpenGLLoadercontext->glProgramUniform1ui64ARB
// GLAPI void APIENTRY glProgramUniform2ui64ARB (GLuint program, GLint location,
// GLuint64 x, GLuint64 y);
#define GLProgramUniform2ui64ARB OpenGLLoadercontext->glProgramUniform2ui64ARB
// GLAPI void APIENTRY glProgramUniform3ui64ARB (GLuint program, GLint location,
// GLuint64 x, GLuint64 y, GLuint64 z);
#define GLProgramUniform3ui64ARB OpenGLLoadercontext->glProgramUniform3ui64ARB
// GLAPI void APIENTRY glProgramUniform4ui64ARB (GLuint program, GLint location,
// GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
#define GLProgramUniform4ui64ARB OpenGLLoadercontext->glProgramUniform4ui64ARB
// GLAPI void APIENTRY glProgramUniform1ui64vARB (GLuint program, GLint
// location, GLsizei count, const GLuint64 *value);
#define GLProgramUniform1ui64vARB OpenGLLoadercontext->glProgramUniform1ui64vARB
// GLAPI void APIENTRY glProgramUniform2ui64vARB (GLuint program, GLint
// location, GLsizei count, const GLuint64 *value);
#define GLProgramUniform2ui64vARB OpenGLLoadercontext->glProgramUniform2ui64vARB
// GLAPI void APIENTRY glProgramUniform3ui64vARB (GLuint program, GLint
// location, GLsizei count, const GLuint64 *value);
#define GLProgramUniform3ui64vARB OpenGLLoadercontext->glProgramUniform3ui64vARB
// GLAPI void APIENTRY glProgramUniform4ui64vARB (GLuint program, GLint
// location, GLsizei count, const GLuint64 *value);
#define GLProgramUniform4ui64vARB OpenGLLoadercontext->glProgramUniform4ui64vARB
// GLAPI void APIENTRY glColorTable (GLenum target, GLenum internalformat,
// GLsizei width, GLenum format, GLenum type, const void *table);
#define GLColorTable OpenGLLoadercontext->glColorTable
// GLAPI void APIENTRY glColorTableParameterfv (GLenum target, GLenum pname,
// const GLfloat *params);
#define GLColorTableParameterfv OpenGLLoadercontext->glColorTableParameterfv
// GLAPI void APIENTRY glColorTableParameteriv (GLenum target, GLenum pname,
// const GLint *params);
#define GLColorTableParameteriv OpenGLLoadercontext->glColorTableParameteriv
// GLAPI void APIENTRY glCopyColorTable (GLenum target, GLenum internalformat,
// GLint x, GLint y, GLsizei width);
#define GLCopyColorTable OpenGLLoadercontext->glCopyColorTable
// GLAPI void APIENTRY glGetColorTable (GLenum target, GLenum format, GLenum
// type, void *table);
#define GLGetColorTable OpenGLLoadercontext->glGetColorTable
// GLAPI void APIENTRY glGetColorTableParameterfv (GLenum target, GLenum pname,
// GLfloat *params);
#define GLGetColorTableParameterfv                                             \
  OpenGLLoadercontext->glGetColorTableParameterfv
// GLAPI void APIENTRY glGetColorTableParameteriv (GLenum target, GLenum pname,
// GLint *params);
#define GLGetColorTableParameteriv                                             \
  OpenGLLoadercontext->glGetColorTableParameteriv
// GLAPI void APIENTRY glColorSubTable (GLenum target, GLsizei start, GLsizei
// count, GLenum format, GLenum type, const void *data);
#define GLColorSubTable OpenGLLoadercontext->glColorSubTable
// GLAPI void APIENTRY glCopyColorSubTable (GLenum target, GLsizei start, GLint
// x, GLint y, GLsizei width);
#define GLCopyColorSubTable OpenGLLoadercontext->glCopyColorSubTable
// GLAPI void APIENTRY glConvolutionFilter1D (GLenum target, GLenum
// internalformat, GLsizei width, GLenum format, GLenum type, const void
// *image);
#define GLConvolutionFilter1D OpenGLLoadercontext->glConvolutionFilter1D
// GLAPI void APIENTRY glConvolutionFilter2D (GLenum target, GLenum
// internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type,
// const void *image);
#define GLConvolutionFilter2D OpenGLLoadercontext->glConvolutionFilter2D
// GLAPI void APIENTRY glConvolutionParameterf (GLenum target, GLenum pname,
// GLfloat params);
#define GLConvolutionParameterf OpenGLLoadercontext->glConvolutionParameterf
// GLAPI void APIENTRY glConvolutionParameterfv (GLenum target, GLenum pname,
// const GLfloat *params);
#define GLConvolutionParameterfv OpenGLLoadercontext->glConvolutionParameterfv
// GLAPI void APIENTRY glConvolutionParameteri (GLenum target, GLenum pname,
// GLint params);
#define GLConvolutionParameteri OpenGLLoadercontext->glConvolutionParameteri
// GLAPI void APIENTRY glConvolutionParameteriv (GLenum target, GLenum pname,
// const GLint *params);
#define GLConvolutionParameteriv OpenGLLoadercontext->glConvolutionParameteriv
// GLAPI void APIENTRY glCopyConvolutionFilter1D (GLenum target, GLenum
// internalformat, GLint x, GLint y, GLsizei width);
#define GLCopyConvolutionFilter1D OpenGLLoadercontext->glCopyConvolutionFilter1D
// GLAPI void APIENTRY glCopyConvolutionFilter2D (GLenum target, GLenum
// internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
#define GLCopyConvolutionFilter2D OpenGLLoadercontext->glCopyConvolutionFilter2D
// GLAPI void APIENTRY glGetConvolutionFilter (GLenum target, GLenum format,
// GLenum type, void *image);
#define GLGetConvolutionFilter OpenGLLoadercontext->glGetConvolutionFilter
// GLAPI void APIENTRY glGetConvolutionParameterfv (GLenum target, GLenum pname,
// GLfloat *params);
#define GLGetConvolutionParameterfv                                            \
  OpenGLLoadercontext->glGetConvolutionParameterfv
// GLAPI void APIENTRY glGetConvolutionParameteriv (GLenum target, GLenum pname,
// GLint *params);
#define GLGetConvolutionParameteriv                                            \
  OpenGLLoadercontext->glGetConvolutionParameteriv
// GLAPI void APIENTRY glGetSeparableFilter (GLenum target, GLenum format,
// GLenum type, void *row, void *column, void *span);
#define GLGetSeparableFilter OpenGLLoadercontext->glGetSeparableFilter
// GLAPI void APIENTRY glSeparableFilter2D (GLenum target, GLenum
// internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type,
// const void *row, const void *column);
#define GLSeparableFilter2D OpenGLLoadercontext->glSeparableFilter2D
// GLAPI void APIENTRY glGetHistogram (GLenum target, GLboolean reset, GLenum
// format, GLenum type, void *values);
#define GLGetHistogram OpenGLLoadercontext->glGetHistogram
// GLAPI void APIENTRY glGetHistogramParameterfv (GLenum target, GLenum pname,
// GLfloat *params);
#define GLGetHistogramParameterfv OpenGLLoadercontext->glGetHistogramParameterfv
// GLAPI void APIENTRY glGetHistogramParameteriv (GLenum target, GLenum pname,
// GLint *params);
#define GLGetHistogramParameteriv OpenGLLoadercontext->glGetHistogramParameteriv
// GLAPI void APIENTRY glGetMinmax (GLenum target, GLboolean reset, GLenum
// format, GLenum type, void *values);
#define GLGetMinmax OpenGLLoadercontext->glGetMinmax
// GLAPI void APIENTRY glGetMinmaxParameterfv (GLenum target, GLenum pname,
// GLfloat *params);
#define GLGetMinmaxParameterfv OpenGLLoadercontext->glGetMinmaxParameterfv
// GLAPI void APIENTRY glGetMinmaxParameteriv (GLenum target, GLenum pname,
// GLint *params);
#define GLGetMinmaxParameteriv OpenGLLoadercontext->glGetMinmaxParameteriv
// GLAPI void APIENTRY glHistogram (GLenum target, GLsizei width, GLenum
// internalformat, GLboolean sink);
#define GLHistogram OpenGLLoadercontext->glHistogram
// GLAPI void APIENTRY glMinmax (GLenum target, GLenum internalformat, GLboolean
// sink);
#define GLMinmax OpenGLLoadercontext->glMinmax
// GLAPI void APIENTRY glResetHistogram (GLenum target);
#define GLResetHistogram OpenGLLoadercontext->glResetHistogram
// GLAPI void APIENTRY glResetMinmax (GLenum target);
#define GLResetMinmax OpenGLLoadercontext->glResetMinmax
// GLAPI void APIENTRY glMultiDrawArraysIndirectCountARB (GLenum mode, const
// void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
#define GLMultiDrawArraysIndirectCountARB                                      \
  OpenGLLoadercontext->glMultiDrawArraysIndirectCountARB
// GLAPI void APIENTRY glMultiDrawElementsIndirectCountARB (GLenum mode, GLenum
// type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei
// stride);
#define GLMultiDrawElementsIndirectCountARB                                    \
  OpenGLLoadercontext->glMultiDrawElementsIndirectCountARB
// GLAPI void APIENTRY glVertexAttribDivisorARB (GLuint index, GLuint divisor);
#define GLVertexAttribDivisorARB OpenGLLoadercontext->glVertexAttribDivisorARB
// GLAPI void APIENTRY glCurrentPaletteMatrixARB (GLint index);
#define GLCurrentPaletteMatrixARB OpenGLLoadercontext->glCurrentPaletteMatrixARB
// GLAPI void APIENTRY glMatrixIndexubvARB (GLint size, const GLubyte *indices);
#define GLMatrixIndexubvARB OpenGLLoadercontext->glMatrixIndexubvARB
// GLAPI void APIENTRY glMatrixIndexusvARB (GLint size, const GLushort
// *indices);
#define GLMatrixIndexusvARB OpenGLLoadercontext->glMatrixIndexusvARB
// GLAPI void APIENTRY glMatrixIndexuivARB (GLint size, const GLuint *indices);
#define GLMatrixIndexuivARB OpenGLLoadercontext->glMatrixIndexuivARB
// GLAPI void APIENTRY glMatrixIndexPointerARB (GLint size, GLenum type, GLsizei
// stride, const void *pointer);
#define GLMatrixIndexPointerARB OpenGLLoadercontext->glMatrixIndexPointerARB
// GLAPI void APIENTRY glSampleCoverageARB (GLfloat value, GLboolean invert);
#define GLSampleCoverageARB OpenGLLoadercontext->glSampleCoverageARB
// GLAPI void APIENTRY glActiveTextureARB (GLenum texture);
#define GLActiveTextureARB OpenGLLoadercontext->glActiveTextureARB
// GLAPI void APIENTRY glClientActiveTextureARB (GLenum texture);
#define GLClientActiveTextureARB OpenGLLoadercontext->glClientActiveTextureARB
// GLAPI void APIENTRY glMultiTexCoord1dARB (GLenum target, GLdouble s);
#define GLMultiTexCoord1dARB OpenGLLoadercontext->glMultiTexCoord1dARB
// GLAPI void APIENTRY glMultiTexCoord1dvARB (GLenum target, const GLdouble *v);
#define GLMultiTexCoord1dvARB OpenGLLoadercontext->glMultiTexCoord1dvARB
// GLAPI void APIENTRY glMultiTexCoord1fARB (GLenum target, GLfloat s);
#define GLMultiTexCoord1fARB OpenGLLoadercontext->glMultiTexCoord1fARB
// GLAPI void APIENTRY glMultiTexCoord1fvARB (GLenum target, const GLfloat *v);
#define GLMultiTexCoord1fvARB OpenGLLoadercontext->glMultiTexCoord1fvARB
// GLAPI void APIENTRY glMultiTexCoord1iARB (GLenum target, GLint s);
#define GLMultiTexCoord1iARB OpenGLLoadercontext->glMultiTexCoord1iARB
// GLAPI void APIENTRY glMultiTexCoord1ivARB (GLenum target, const GLint *v);
#define GLMultiTexCoord1ivARB OpenGLLoadercontext->glMultiTexCoord1ivARB
// GLAPI void APIENTRY glMultiTexCoord1sARB (GLenum target, GLshort s);
#define GLMultiTexCoord1sARB OpenGLLoadercontext->glMultiTexCoord1sARB
// GLAPI void APIENTRY glMultiTexCoord1svARB (GLenum target, const GLshort *v);
#define GLMultiTexCoord1svARB OpenGLLoadercontext->glMultiTexCoord1svARB
// GLAPI void APIENTRY glMultiTexCoord2dARB (GLenum target, GLdouble s, GLdouble
// t);
#define GLMultiTexCoord2dARB OpenGLLoadercontext->glMultiTexCoord2dARB
// GLAPI void APIENTRY glMultiTexCoord2dvARB (GLenum target, const GLdouble *v);
#define GLMultiTexCoord2dvARB OpenGLLoadercontext->glMultiTexCoord2dvARB
// GLAPI void APIENTRY glMultiTexCoord2fARB (GLenum target, GLfloat s, GLfloat
// t);
#define GLMultiTexCoord2fARB OpenGLLoadercontext->glMultiTexCoord2fARB
// GLAPI void APIENTRY glMultiTexCoord2fvARB (GLenum target, const GLfloat *v);
#define GLMultiTexCoord2fvARB OpenGLLoadercontext->glMultiTexCoord2fvARB
// GLAPI void APIENTRY glMultiTexCoord2iARB (GLenum target, GLint s, GLint t);
#define GLMultiTexCoord2iARB OpenGLLoadercontext->glMultiTexCoord2iARB
// GLAPI void APIENTRY glMultiTexCoord2ivARB (GLenum target, const GLint *v);
#define GLMultiTexCoord2ivARB OpenGLLoadercontext->glMultiTexCoord2ivARB
// GLAPI void APIENTRY glMultiTexCoord2sARB (GLenum target, GLshort s, GLshort
// t);
#define GLMultiTexCoord2sARB OpenGLLoadercontext->glMultiTexCoord2sARB
// GLAPI void APIENTRY glMultiTexCoord2svARB (GLenum target, const GLshort *v);
#define GLMultiTexCoord2svARB OpenGLLoadercontext->glMultiTexCoord2svARB
// GLAPI void APIENTRY glMultiTexCoord3dARB (GLenum target, GLdouble s, GLdouble
// t, GLdouble r);
#define GLMultiTexCoord3dARB OpenGLLoadercontext->glMultiTexCoord3dARB
// GLAPI void APIENTRY glMultiTexCoord3dvARB (GLenum target, const GLdouble *v);
#define GLMultiTexCoord3dvARB OpenGLLoadercontext->glMultiTexCoord3dvARB
// GLAPI void APIENTRY glMultiTexCoord3fARB (GLenum target, GLfloat s, GLfloat
// t, GLfloat r);
#define GLMultiTexCoord3fARB OpenGLLoadercontext->glMultiTexCoord3fARB
// GLAPI void APIENTRY glMultiTexCoord3fvARB (GLenum target, const GLfloat *v);
#define GLMultiTexCoord3fvARB OpenGLLoadercontext->glMultiTexCoord3fvARB
// GLAPI void APIENTRY glMultiTexCoord3iARB (GLenum target, GLint s, GLint t,
// GLint r);
#define GLMultiTexCoord3iARB OpenGLLoadercontext->glMultiTexCoord3iARB
// GLAPI void APIENTRY glMultiTexCoord3ivARB (GLenum target, const GLint *v);
#define GLMultiTexCoord3ivARB OpenGLLoadercontext->glMultiTexCoord3ivARB
// GLAPI void APIENTRY glMultiTexCoord3sARB (GLenum target, GLshort s, GLshort
// t, GLshort r);
#define GLMultiTexCoord3sARB OpenGLLoadercontext->glMultiTexCoord3sARB
// GLAPI void APIENTRY glMultiTexCoord3svARB (GLenum target, const GLshort *v);
#define GLMultiTexCoord3svARB OpenGLLoadercontext->glMultiTexCoord3svARB
// GLAPI void APIENTRY glMultiTexCoord4dARB (GLenum target, GLdouble s, GLdouble
// t, GLdouble r, GLdouble q);
#define GLMultiTexCoord4dARB OpenGLLoadercontext->glMultiTexCoord4dARB
// GLAPI void APIENTRY glMultiTexCoord4dvARB (GLenum target, const GLdouble *v);
#define GLMultiTexCoord4dvARB OpenGLLoadercontext->glMultiTexCoord4dvARB
// GLAPI void APIENTRY glMultiTexCoord4fARB (GLenum target, GLfloat s, GLfloat
// t, GLfloat r, GLfloat q);
#define GLMultiTexCoord4fARB OpenGLLoadercontext->glMultiTexCoord4fARB
// GLAPI void APIENTRY glMultiTexCoord4fvARB (GLenum target, const GLfloat *v);
#define GLMultiTexCoord4fvARB OpenGLLoadercontext->glMultiTexCoord4fvARB
// GLAPI void APIENTRY glMultiTexCoord4iARB (GLenum target, GLint s, GLint t,
// GLint r, GLint q);
#define GLMultiTexCoord4iARB OpenGLLoadercontext->glMultiTexCoord4iARB
// GLAPI void APIENTRY glMultiTexCoord4ivARB (GLenum target, const GLint *v);
#define GLMultiTexCoord4ivARB OpenGLLoadercontext->glMultiTexCoord4ivARB
// GLAPI void APIENTRY glMultiTexCoord4sARB (GLenum target, GLshort s, GLshort
// t, GLshort r, GLshort q);
#define GLMultiTexCoord4sARB OpenGLLoadercontext->glMultiTexCoord4sARB
// GLAPI void APIENTRY glMultiTexCoord4svARB (GLenum target, const GLshort *v);
#define GLMultiTexCoord4svARB OpenGLLoadercontext->glMultiTexCoord4svARB
// GLAPI void APIENTRY glGenQueriesARB (GLsizei n, GLuint *ids);
#define GLGenQueriesARB OpenGLLoadercontext->glGenQueriesARB
// GLAPI void APIENTRY glDeleteQueriesARB (GLsizei n, const GLuint *ids);
#define GLDeleteQueriesARB OpenGLLoadercontext->glDeleteQueriesARB
// GLAPI GLboolean APIENTRY glIsQueryARB (GLuint id);
#define GLIsQueryARB OpenGLLoadercontext->glIsQueryARB
// GLAPI void APIENTRY glBeginQueryARB (GLenum target, GLuint id);
#define GLBeginQueryARB OpenGLLoadercontext->glBeginQueryARB
// GLAPI void APIENTRY glEndQueryARB (GLenum target);
#define GLEndQueryARB OpenGLLoadercontext->glEndQueryARB
// GLAPI void APIENTRY glGetQueryivARB (GLenum target, GLenum pname, GLint
// *params);
#define GLGetQueryivARB OpenGLLoadercontext->glGetQueryivARB
// GLAPI void APIENTRY glGetQueryObjectivARB (GLuint id, GLenum pname, GLint
// *params);
#define GLGetQueryObjectivARB OpenGLLoadercontext->glGetQueryObjectivARB
// GLAPI void APIENTRY glGetQueryObjectuivARB (GLuint id, GLenum pname, GLuint
// *params);
#define GLGetQueryObjectuivARB OpenGLLoadercontext->glGetQueryObjectuivARB
// GLAPI void APIENTRY glMaxShaderCompilerThreadsARB (GLuint count);
#define GLMaxShaderCompilerThreadsARB                                          \
  OpenGLLoadercontext->glMaxShaderCompilerThreadsARB
// GLAPI void APIENTRY glPointParameterfARB (GLenum pname, GLfloat param);
#define GLPointParameterfARB OpenGLLoadercontext->glPointParameterfARB
// GLAPI void APIENTRY glPointParameterfvARB (GLenum pname, const GLfloat
// *params);
#define GLPointParameterfvARB OpenGLLoadercontext->glPointParameterfvARB
// GLAPI GLenum APIENTRY glGetGraphicsResetStatusARB (void);
#define GLGetGraphicsResetStatusARB                                            \
  OpenGLLoadercontext->glGetGraphicsResetStatusARB
// GLAPI void APIENTRY glGetnTexImageARB (GLenum target, GLint level, GLenum
// format, GLenum type, GLsizei bufSize, void *img);
#define GLGetnTexImageARB OpenGLLoadercontext->glGetnTexImageARB
// GLAPI void APIENTRY glReadnPixelsARB (GLint x, GLint y, GLsizei width,
// GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
#define GLReadnPixelsARB OpenGLLoadercontext->glReadnPixelsARB
// GLAPI void APIENTRY glGetnCompressedTexImageARB (GLenum target, GLint lod,
// GLsizei bufSize, void *img);
#define GLGetnCompressedTexImageARB                                            \
  OpenGLLoadercontext->glGetnCompressedTexImageARB
// GLAPI void APIENTRY glGetnUniformfvARB (GLuint program, GLint location,
// GLsizei bufSize, GLfloat *params);
#define GLGetnUniformfvARB OpenGLLoadercontext->glGetnUniformfvARB
// GLAPI void APIENTRY glGetnUniformivARB (GLuint program, GLint location,
// GLsizei bufSize, GLint *params);
#define GLGetnUniformivARB OpenGLLoadercontext->glGetnUniformivARB
// GLAPI void APIENTRY glGetnUniformuivARB (GLuint program, GLint location,
// GLsizei bufSize, GLuint *params);
#define GLGetnUniformuivARB OpenGLLoadercontext->glGetnUniformuivARB
// GLAPI void APIENTRY glGetnUniformdvARB (GLuint program, GLint location,
// GLsizei bufSize, GLdouble *params);
#define GLGetnUniformdvARB OpenGLLoadercontext->glGetnUniformdvARB
// GLAPI void APIENTRY glGetnMapdvARB (GLenum target, GLenum query, GLsizei
// bufSize, GLdouble *v);
#define GLGetnMapdvARB OpenGLLoadercontext->glGetnMapdvARB
// GLAPI void APIENTRY glGetnMapfvARB (GLenum target, GLenum query, GLsizei
// bufSize, GLfloat *v);
#define GLGetnMapfvARB OpenGLLoadercontext->glGetnMapfvARB
// GLAPI void APIENTRY glGetnMapivARB (GLenum target, GLenum query, GLsizei
// bufSize, GLint *v);
#define GLGetnMapivARB OpenGLLoadercontext->glGetnMapivARB
// GLAPI void APIENTRY glGetnPixelMapfvARB (GLenum map, GLsizei bufSize, GLfloat
// *values);
#define GLGetnPixelMapfvARB OpenGLLoadercontext->glGetnPixelMapfvARB
// GLAPI void APIENTRY glGetnPixelMapuivARB (GLenum map, GLsizei bufSize, GLuint
// *values);
#define GLGetnPixelMapuivARB OpenGLLoadercontext->glGetnPixelMapuivARB
// GLAPI void APIENTRY glGetnPixelMapusvARB (GLenum map, GLsizei bufSize,
// GLushort *values);
#define GLGetnPixelMapusvARB OpenGLLoadercontext->glGetnPixelMapusvARB
// GLAPI void APIENTRY glGetnPolygonStippleARB (GLsizei bufSize, GLubyte
// *pattern);
#define GLGetnPolygonStippleARB OpenGLLoadercontext->glGetnPolygonStippleARB
// GLAPI void APIENTRY glGetnColorTableARB (GLenum target, GLenum format, GLenum
// type, GLsizei bufSize, void *table);
#define GLGetnColorTableARB OpenGLLoadercontext->glGetnColorTableARB
// GLAPI void APIENTRY glGetnConvolutionFilterARB (GLenum target, GLenum format,
// GLenum type, GLsizei bufSize, void *image);
#define GLGetnConvolutionFilterARB                                             \
  OpenGLLoadercontext->glGetnConvolutionFilterARB
// GLAPI void APIENTRY glGetnSeparableFilterARB (GLenum target, GLenum format,
// GLenum type, GLsizei rowBufSize, void *row, GLsizei columnBufSize, void
// *column, void *span);
#define GLGetnSeparableFilterARB OpenGLLoadercontext->glGetnSeparableFilterARB
// GLAPI void APIENTRY glGetnHistogramARB (GLenum target, GLboolean reset,
// GLenum format, GLenum type, GLsizei bufSize, void *values);
#define GLGetnHistogramARB OpenGLLoadercontext->glGetnHistogramARB
// GLAPI void APIENTRY glGetnMinmaxARB (GLenum target, GLboolean reset, GLenum
// format, GLenum type, GLsizei bufSize, void *values);
#define GLGetnMinmaxARB OpenGLLoadercontext->glGetnMinmaxARB
// GLAPI void APIENTRY glFramebufferSampleLocationsfvARB (GLenum target, GLuint
// start, GLsizei count, const GLfloat *v);
#define GLFramebufferSampleLocationsfvARB                                      \
  OpenGLLoadercontext->glFramebufferSampleLocationsfvARB
// GLAPI void APIENTRY glNamedFramebufferSampleLocationsfvARB (GLuint
// framebuffer, GLuint start, GLsizei count, const GLfloat *v);
#define GLNamedFramebufferSampleLocationsfvARB                                 \
  OpenGLLoadercontext->glNamedFramebufferSampleLocationsfvARB
// GLAPI void APIENTRY glEvaluateDepthValuesARB (void);
#define GLEvaluateDepthValuesARB OpenGLLoadercontext->glEvaluateDepthValuesARB
// GLAPI void APIENTRY glMinSampleShadingARB (GLfloat value);
#define GLMinSampleShadingARB OpenGLLoadercontext->glMinSampleShadingARB
// GLAPI void APIENTRY glDeleteObjectARB (GLhandleARB obj);
#define GLDeleteObjectARB OpenGLLoadercontext->glDeleteObjectARB
// GLAPI GLhandleARB APIENTRY glGetHandleARB (GLenum pname);
#define GLGetHandleARB OpenGLLoadercontext->glGetHandleARB
// GLAPI void APIENTRY glDetachObjectARB (GLhandleARB containerObj, GLhandleARB
// attachedObj);
#define GLDetachObjectARB OpenGLLoadercontext->glDetachObjectARB
// GLAPI GLhandleARB APIENTRY glCreateShaderObjectARB (GLenum shaderType);
#define GLCreateShaderObjectARB OpenGLLoadercontext->glCreateShaderObjectARB
// GLAPI void APIENTRY glShaderSourceARB (GLhandleARB shaderObj, GLsizei count,
// const GLcharARB **string, const GLint *length);
#define GLShaderSourceARB OpenGLLoadercontext->glShaderSourceARB
// GLAPI void APIENTRY glCompileShaderARB (GLhandleARB shaderObj);
#define GLCompileShaderARB OpenGLLoadercontext->glCompileShaderARB
// GLAPI GLhandleARB APIENTRY glCreateProgramObjectARB (void);
#define GLCreateProgramObjectARB OpenGLLoadercontext->glCreateProgramObjectARB
// GLAPI void APIENTRY glAttachObjectARB (GLhandleARB containerObj, GLhandleARB
// obj);
#define GLAttachObjectARB OpenGLLoadercontext->glAttachObjectARB
// GLAPI void APIENTRY glLinkProgramARB (GLhandleARB programObj);
#define GLLinkProgramARB OpenGLLoadercontext->glLinkProgramARB
// GLAPI void APIENTRY glUseProgramObjectARB (GLhandleARB programObj);
#define GLUseProgramObjectARB OpenGLLoadercontext->glUseProgramObjectARB
// GLAPI void APIENTRY glValidateProgramARB (GLhandleARB programObj);
#define GLValidateProgramARB OpenGLLoadercontext->glValidateProgramARB
// GLAPI void APIENTRY glUniform1fARB (GLint location, GLfloat v0);
#define GLUniform1fARB OpenGLLoadercontext->glUniform1fARB
// GLAPI void APIENTRY glUniform2fARB (GLint location, GLfloat v0, GLfloat v1);
#define GLUniform2fARB OpenGLLoadercontext->glUniform2fARB
// GLAPI void APIENTRY glUniform3fARB (GLint location, GLfloat v0, GLfloat v1,
// GLfloat v2);
#define GLUniform3fARB OpenGLLoadercontext->glUniform3fARB
// GLAPI void APIENTRY glUniform4fARB (GLint location, GLfloat v0, GLfloat v1,
// GLfloat v2, GLfloat v3);
#define GLUniform4fARB OpenGLLoadercontext->glUniform4fARB
// GLAPI void APIENTRY glUniform1iARB (GLint location, GLint v0);
#define GLUniform1iARB OpenGLLoadercontext->glUniform1iARB
// GLAPI void APIENTRY glUniform2iARB (GLint location, GLint v0, GLint v1);
#define GLUniform2iARB OpenGLLoadercontext->glUniform2iARB
// GLAPI void APIENTRY glUniform3iARB (GLint location, GLint v0, GLint v1, GLint
// v2);
#define GLUniform3iARB OpenGLLoadercontext->glUniform3iARB
// GLAPI void APIENTRY glUniform4iARB (GLint location, GLint v0, GLint v1, GLint
// v2, GLint v3);
#define GLUniform4iARB OpenGLLoadercontext->glUniform4iARB
// GLAPI void APIENTRY glUniform1fvARB (GLint location, GLsizei count, const
// GLfloat *value);
#define GLUniform1fvARB OpenGLLoadercontext->glUniform1fvARB
// GLAPI void APIENTRY glUniform2fvARB (GLint location, GLsizei count, const
// GLfloat *value);
#define GLUniform2fvARB OpenGLLoadercontext->glUniform2fvARB
// GLAPI void APIENTRY glUniform3fvARB (GLint location, GLsizei count, const
// GLfloat *value);
#define GLUniform3fvARB OpenGLLoadercontext->glUniform3fvARB
// GLAPI void APIENTRY glUniform4fvARB (GLint location, GLsizei count, const
// GLfloat *value);
#define GLUniform4fvARB OpenGLLoadercontext->glUniform4fvARB
// GLAPI void APIENTRY glUniform1ivARB (GLint location, GLsizei count, const
// GLint *value);
#define GLUniform1ivARB OpenGLLoadercontext->glUniform1ivARB
// GLAPI void APIENTRY glUniform2ivARB (GLint location, GLsizei count, const
// GLint *value);
#define GLUniform2ivARB OpenGLLoadercontext->glUniform2ivARB
// GLAPI void APIENTRY glUniform3ivARB (GLint location, GLsizei count, const
// GLint *value);
#define GLUniform3ivARB OpenGLLoadercontext->glUniform3ivARB
// GLAPI void APIENTRY glUniform4ivARB (GLint location, GLsizei count, const
// GLint *value);
#define GLUniform4ivARB OpenGLLoadercontext->glUniform4ivARB
// GLAPI void APIENTRY glUniformMatrix2fvARB (GLint location, GLsizei count,
// GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix2fvARB OpenGLLoadercontext->glUniformMatrix2fvARB
// GLAPI void APIENTRY glUniformMatrix3fvARB (GLint location, GLsizei count,
// GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix3fvARB OpenGLLoadercontext->glUniformMatrix3fvARB
// GLAPI void APIENTRY glUniformMatrix4fvARB (GLint location, GLsizei count,
// GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix4fvARB OpenGLLoadercontext->glUniformMatrix4fvARB
// GLAPI void APIENTRY glGetObjectParameterfvARB (GLhandleARB obj, GLenum pname,
// GLfloat *params);
#define GLGetObjectParameterfvARB OpenGLLoadercontext->glGetObjectParameterfvARB
// GLAPI void APIENTRY glGetObjectParameterivARB (GLhandleARB obj, GLenum pname,
// GLint *params);
#define GLGetObjectParameterivARB OpenGLLoadercontext->glGetObjectParameterivARB
// GLAPI void APIENTRY glGetInfoLogARB (GLhandleARB obj, GLsizei maxLength,
// GLsizei *length, GLcharARB *infoLog);
#define GLGetInfoLogARB OpenGLLoadercontext->glGetInfoLogARB
// GLAPI void APIENTRY glGetAttachedObjectsARB (GLhandleARB containerObj,
// GLsizei maxCount, GLsizei *count, GLhandleARB *obj);
#define GLGetAttachedObjectsARB OpenGLLoadercontext->glGetAttachedObjectsARB
// GLAPI GLint APIENTRY glGetUniformLocationARB (GLhandleARB programObj, const
// GLcharARB *name);
#define GLGetUniformLocationARB OpenGLLoadercontext->glGetUniformLocationARB
// GLAPI void APIENTRY glGetActiveUniformARB (GLhandleARB programObj, GLuint
// index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type,
// GLcharARB *name);
#define GLGetActiveUniformARB OpenGLLoadercontext->glGetActiveUniformARB
// GLAPI void APIENTRY glGetUniformfvARB (GLhandleARB programObj, GLint
// location, GLfloat *params);
#define GLGetUniformfvARB OpenGLLoadercontext->glGetUniformfvARB
// GLAPI void APIENTRY glGetUniformivARB (GLhandleARB programObj, GLint
// location, GLint *params);
#define GLGetUniformivARB OpenGLLoadercontext->glGetUniformivARB
// GLAPI void APIENTRY glGetShaderSourceARB (GLhandleARB obj, GLsizei maxLength,
// GLsizei *length, GLcharARB *source);
#define GLGetShaderSourceARB OpenGLLoadercontext->glGetShaderSourceARB
// GLAPI void APIENTRY glNamedStringARB (GLenum type, GLint namelen, const
// GLchar *name, GLint stringlen, const GLchar *string);
#define GLNamedStringARB OpenGLLoadercontext->glNamedStringARB
// GLAPI void APIENTRY glDeleteNamedStringARB (GLint namelen, const GLchar
// *name);
#define GLDeleteNamedStringARB OpenGLLoadercontext->glDeleteNamedStringARB
// GLAPI void APIENTRY glCompileShaderIncludeARB (GLuint shader, GLsizei count,
// const GLchar *const*path, const GLint *length);
#define GLCompileShaderIncludeARB OpenGLLoadercontext->glCompileShaderIncludeARB
// GLAPI GLboolean APIENTRY glIsNamedStringARB (GLint namelen, const GLchar
// *name);
#define GLIsNamedStringARB OpenGLLoadercontext->glIsNamedStringARB
// GLAPI void APIENTRY glGetNamedStringARB (GLint namelen, const GLchar *name,
// GLsizei bufSize, GLint *stringlen, GLchar *string);
#define GLGetNamedStringARB OpenGLLoadercontext->glGetNamedStringARB
// GLAPI void APIENTRY glGetNamedStringivARB (GLint namelen, const GLchar *name,
// GLenum pname, GLint *params);
#define GLGetNamedStringivARB OpenGLLoadercontext->glGetNamedStringivARB
// GLAPI void APIENTRY glBufferPageCommitmentARB (GLenum target, GLintptr
// offset, GLsizeiptr size, GLboolean commit);
#define GLBufferPageCommitmentARB OpenGLLoadercontext->glBufferPageCommitmentARB
// GLAPI void APIENTRY glNamedBufferPageCommitmentEXT (GLuint buffer, GLintptr
// offset, GLsizeiptr size, GLboolean commit);
#define GLNamedBufferPageCommitmentEXT                                         \
  OpenGLLoadercontext->glNamedBufferPageCommitmentEXT
// GLAPI void APIENTRY glNamedBufferPageCommitmentARB (GLuint buffer, GLintptr
// offset, GLsizeiptr size, GLboolean commit);
#define GLNamedBufferPageCommitmentARB                                         \
  OpenGLLoadercontext->glNamedBufferPageCommitmentARB
// GLAPI void APIENTRY glTexPageCommitmentARB (GLenum target, GLint level, GLint
// xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei
// depth, GLboolean commit);
#define GLTexPageCommitmentARB OpenGLLoadercontext->glTexPageCommitmentARB
// GLAPI void APIENTRY glTexBufferARB (GLenum target, GLenum internalformat,
// GLuint buffer);
#define GLTexBufferARB OpenGLLoadercontext->glTexBufferARB
// GLAPI void APIENTRY glCompressedTexImage3DARB (GLenum target, GLint level,
// GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint
// border, GLsizei imageSize, const void *data);
#define GLCompressedTexImage3DARB OpenGLLoadercontext->glCompressedTexImage3DARB
// GLAPI void APIENTRY glCompressedTexImage2DARB (GLenum target, GLint level,
// GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei
// imageSize, const void *data);
#define GLCompressedTexImage2DARB OpenGLLoadercontext->glCompressedTexImage2DARB
// GLAPI void APIENTRY glCompressedTexImage1DARB (GLenum target, GLint level,
// GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const
// void *data);
#define GLCompressedTexImage1DARB OpenGLLoadercontext->glCompressedTexImage1DARB
// GLAPI void APIENTRY glCompressedTexSubImage3DARB (GLenum target, GLint level,
// GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height,
// GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
#define GLCompressedTexSubImage3DARB                                           \
  OpenGLLoadercontext->glCompressedTexSubImage3DARB
// GLAPI void APIENTRY glCompressedTexSubImage2DARB (GLenum target, GLint level,
// GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format,
// GLsizei imageSize, const void *data);
#define GLCompressedTexSubImage2DARB                                           \
  OpenGLLoadercontext->glCompressedTexSubImage2DARB
// GLAPI void APIENTRY glCompressedTexSubImage1DARB (GLenum target, GLint level,
// GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void
// *data);
#define GLCompressedTexSubImage1DARB                                           \
  OpenGLLoadercontext->glCompressedTexSubImage1DARB
// GLAPI void APIENTRY glGetCompressedTexImageARB (GLenum target, GLint level,
// void *img);
#define GLGetCompressedTexImageARB                                             \
  OpenGLLoadercontext->glGetCompressedTexImageARB
// GLAPI void APIENTRY glLoadTransposeMatrixfARB (const GLfloat *m);
#define GLLoadTransposeMatrixfARB OpenGLLoadercontext->glLoadTransposeMatrixfARB
// GLAPI void APIENTRY glLoadTransposeMatrixdARB (const GLdouble *m);
#define GLLoadTransposeMatrixdARB OpenGLLoadercontext->glLoadTransposeMatrixdARB
// GLAPI void APIENTRY glMultTransposeMatrixfARB (const GLfloat *m);
#define GLMultTransposeMatrixfARB OpenGLLoadercontext->glMultTransposeMatrixfARB
// GLAPI void APIENTRY glMultTransposeMatrixdARB (const GLdouble *m);
#define GLMultTransposeMatrixdARB OpenGLLoadercontext->glMultTransposeMatrixdARB
// GLAPI void APIENTRY glWeightbvARB (GLint size, const GLbyte *weights);
#define GLWeightbvARB OpenGLLoadercontext->glWeightbvARB
// GLAPI void APIENTRY glWeightsvARB (GLint size, const GLshort *weights);
#define GLWeightsvARB OpenGLLoadercontext->glWeightsvARB
// GLAPI void APIENTRY glWeightivARB (GLint size, const GLint *weights);
#define GLWeightivARB OpenGLLoadercontext->glWeightivARB
// GLAPI void APIENTRY glWeightfvARB (GLint size, const GLfloat *weights);
#define GLWeightfvARB OpenGLLoadercontext->glWeightfvARB
// GLAPI void APIENTRY glWeightdvARB (GLint size, const GLdouble *weights);
#define GLWeightdvARB OpenGLLoadercontext->glWeightdvARB
// GLAPI void APIENTRY glWeightubvARB (GLint size, const GLubyte *weights);
#define GLWeightubvARB OpenGLLoadercontext->glWeightubvARB
// GLAPI void APIENTRY glWeightusvARB (GLint size, const GLushort *weights);
#define GLWeightusvARB OpenGLLoadercontext->glWeightusvARB
// GLAPI void APIENTRY glWeightuivARB (GLint size, const GLuint *weights);
#define GLWeightuivARB OpenGLLoadercontext->glWeightuivARB
// GLAPI void APIENTRY glWeightPointerARB (GLint size, GLenum type, GLsizei
// stride, const void *pointer);
#define GLWeightPointerARB OpenGLLoadercontext->glWeightPointerARB
// GLAPI void APIENTRY glVertexBlendARB (GLint count);
#define GLVertexBlendARB OpenGLLoadercontext->glVertexBlendARB
// GLAPI void APIENTRY glBindBufferARB (GLenum target, GLuint buffer);
#define GLBindBufferARB OpenGLLoadercontext->glBindBufferARB
// GLAPI void APIENTRY glDeleteBuffersARB (GLsizei n, const GLuint *buffers);
#define GLDeleteBuffersARB OpenGLLoadercontext->glDeleteBuffersARB
// GLAPI void APIENTRY glGenBuffersARB (GLsizei n, GLuint *buffers);
#define GLGenBuffersARB OpenGLLoadercontext->glGenBuffersARB
// GLAPI GLboolean APIENTRY glIsBufferARB (GLuint buffer);
#define GLIsBufferARB OpenGLLoadercontext->glIsBufferARB
// GLAPI void APIENTRY glBufferDataARB (GLenum target, GLsizeiptrARB size, const
// void *data, GLenum usage);
#define GLBufferDataARB OpenGLLoadercontext->glBufferDataARB
// GLAPI void APIENTRY glBufferSubDataARB (GLenum target, GLintptrARB offset,
// GLsizeiptrARB size, const void *data);
#define GLBufferSubDataARB OpenGLLoadercontext->glBufferSubDataARB
// GLAPI void APIENTRY glGetBufferSubDataARB (GLenum target, GLintptrARB offset,
// GLsizeiptrARB size, void *data);
#define GLGetBufferSubDataARB OpenGLLoadercontext->glGetBufferSubDataARB
// GLAPI void *APIENTRY glMapBufferARB (GLenum target, GLenum access);
#define GLMapBufferARB OpenGLLoadercontext->glMapBufferARB
// GLAPI GLboolean APIENTRY glUnmapBufferARB (GLenum target);
#define GLUnmapBufferARB OpenGLLoadercontext->glUnmapBufferARB
// GLAPI void APIENTRY glGetBufferParameterivARB (GLenum target, GLenum pname,
// GLint *params);
#define GLGetBufferParameterivARB OpenGLLoadercontext->glGetBufferParameterivARB
// GLAPI void APIENTRY glGetBufferPointervARB (GLenum target, GLenum pname, void
// **params);
#define GLGetBufferPointervARB OpenGLLoadercontext->glGetBufferPointervARB
// GLAPI void APIENTRY glVertexAttrib1dARB (GLuint index, GLdouble x);
#define GLVertexAttrib1dARB OpenGLLoadercontext->glVertexAttrib1dARB
// GLAPI void APIENTRY glVertexAttrib1dvARB (GLuint index, const GLdouble *v);
#define GLVertexAttrib1dvARB OpenGLLoadercontext->glVertexAttrib1dvARB
// GLAPI void APIENTRY glVertexAttrib1fARB (GLuint index, GLfloat x);
#define GLVertexAttrib1fARB OpenGLLoadercontext->glVertexAttrib1fARB
// GLAPI void APIENTRY glVertexAttrib1fvARB (GLuint index, const GLfloat *v);
#define GLVertexAttrib1fvARB OpenGLLoadercontext->glVertexAttrib1fvARB
// GLAPI void APIENTRY glVertexAttrib1sARB (GLuint index, GLshort x);
#define GLVertexAttrib1sARB OpenGLLoadercontext->glVertexAttrib1sARB
// GLAPI void APIENTRY glVertexAttrib1svARB (GLuint index, const GLshort *v);
#define GLVertexAttrib1svARB OpenGLLoadercontext->glVertexAttrib1svARB
// GLAPI void APIENTRY glVertexAttrib2dARB (GLuint index, GLdouble x, GLdouble
// y);
#define GLVertexAttrib2dARB OpenGLLoadercontext->glVertexAttrib2dARB
// GLAPI void APIENTRY glVertexAttrib2dvARB (GLuint index, const GLdouble *v);
#define GLVertexAttrib2dvARB OpenGLLoadercontext->glVertexAttrib2dvARB
// GLAPI void APIENTRY glVertexAttrib2fARB (GLuint index, GLfloat x, GLfloat y);
#define GLVertexAttrib2fARB OpenGLLoadercontext->glVertexAttrib2fARB
// GLAPI void APIENTRY glVertexAttrib2fvARB (GLuint index, const GLfloat *v);
#define GLVertexAttrib2fvARB OpenGLLoadercontext->glVertexAttrib2fvARB
// GLAPI void APIENTRY glVertexAttrib2sARB (GLuint index, GLshort x, GLshort y);
#define GLVertexAttrib2sARB OpenGLLoadercontext->glVertexAttrib2sARB
// GLAPI void APIENTRY glVertexAttrib2svARB (GLuint index, const GLshort *v);
#define GLVertexAttrib2svARB OpenGLLoadercontext->glVertexAttrib2svARB
// GLAPI void APIENTRY glVertexAttrib3dARB (GLuint index, GLdouble x, GLdouble
// y, GLdouble z);
#define GLVertexAttrib3dARB OpenGLLoadercontext->glVertexAttrib3dARB
// GLAPI void APIENTRY glVertexAttrib3dvARB (GLuint index, const GLdouble *v);
#define GLVertexAttrib3dvARB OpenGLLoadercontext->glVertexAttrib3dvARB
// GLAPI void APIENTRY glVertexAttrib3fARB (GLuint index, GLfloat x, GLfloat y,
// GLfloat z);
#define GLVertexAttrib3fARB OpenGLLoadercontext->glVertexAttrib3fARB
// GLAPI void APIENTRY glVertexAttrib3fvARB (GLuint index, const GLfloat *v);
#define GLVertexAttrib3fvARB OpenGLLoadercontext->glVertexAttrib3fvARB
// GLAPI void APIENTRY glVertexAttrib3sARB (GLuint index, GLshort x, GLshort y,
// GLshort z);
#define GLVertexAttrib3sARB OpenGLLoadercontext->glVertexAttrib3sARB
// GLAPI void APIENTRY glVertexAttrib3svARB (GLuint index, const GLshort *v);
#define GLVertexAttrib3svARB OpenGLLoadercontext->glVertexAttrib3svARB
// GLAPI void APIENTRY glVertexAttrib4NbvARB (GLuint index, const GLbyte *v);
#define GLVertexAttrib4NbvARB OpenGLLoadercontext->glVertexAttrib4NbvARB
// GLAPI void APIENTRY glVertexAttrib4NivARB (GLuint index, const GLint *v);
#define GLVertexAttrib4NivARB OpenGLLoadercontext->glVertexAttrib4NivARB
// GLAPI void APIENTRY glVertexAttrib4NsvARB (GLuint index, const GLshort *v);
#define GLVertexAttrib4NsvARB OpenGLLoadercontext->glVertexAttrib4NsvARB
// GLAPI void APIENTRY glVertexAttrib4NubARB (GLuint index, GLubyte x, GLubyte
// y, GLubyte z, GLubyte w);
#define GLVertexAttrib4NubARB OpenGLLoadercontext->glVertexAttrib4NubARB
// GLAPI void APIENTRY glVertexAttrib4NubvARB (GLuint index, const GLubyte *v);
#define GLVertexAttrib4NubvARB OpenGLLoadercontext->glVertexAttrib4NubvARB
// GLAPI void APIENTRY glVertexAttrib4NuivARB (GLuint index, const GLuint *v);
#define GLVertexAttrib4NuivARB OpenGLLoadercontext->glVertexAttrib4NuivARB
// GLAPI void APIENTRY glVertexAttrib4NusvARB (GLuint index, const GLushort *v);
#define GLVertexAttrib4NusvARB OpenGLLoadercontext->glVertexAttrib4NusvARB
// GLAPI void APIENTRY glVertexAttrib4bvARB (GLuint index, const GLbyte *v);
#define GLVertexAttrib4bvARB OpenGLLoadercontext->glVertexAttrib4bvARB
// GLAPI void APIENTRY glVertexAttrib4dARB (GLuint index, GLdouble x, GLdouble
// y, GLdouble z, GLdouble w);
#define GLVertexAttrib4dARB OpenGLLoadercontext->glVertexAttrib4dARB
// GLAPI void APIENTRY glVertexAttrib4dvARB (GLuint index, const GLdouble *v);
#define GLVertexAttrib4dvARB OpenGLLoadercontext->glVertexAttrib4dvARB
// GLAPI void APIENTRY glVertexAttrib4fARB (GLuint index, GLfloat x, GLfloat y,
// GLfloat z, GLfloat w);
#define GLVertexAttrib4fARB OpenGLLoadercontext->glVertexAttrib4fARB
// GLAPI void APIENTRY glVertexAttrib4fvARB (GLuint index, const GLfloat *v);
#define GLVertexAttrib4fvARB OpenGLLoadercontext->glVertexAttrib4fvARB
// GLAPI void APIENTRY glVertexAttrib4ivARB (GLuint index, const GLint *v);
#define GLVertexAttrib4ivARB OpenGLLoadercontext->glVertexAttrib4ivARB
// GLAPI void APIENTRY glVertexAttrib4sARB (GLuint index, GLshort x, GLshort y,
// GLshort z, GLshort w);
#define GLVertexAttrib4sARB OpenGLLoadercontext->glVertexAttrib4sARB
// GLAPI void APIENTRY glVertexAttrib4svARB (GLuint index, const GLshort *v);
#define GLVertexAttrib4svARB OpenGLLoadercontext->glVertexAttrib4svARB
// GLAPI void APIENTRY glVertexAttrib4ubvARB (GLuint index, const GLubyte *v);
#define GLVertexAttrib4ubvARB OpenGLLoadercontext->glVertexAttrib4ubvARB
// GLAPI void APIENTRY glVertexAttrib4uivARB (GLuint index, const GLuint *v);
#define GLVertexAttrib4uivARB OpenGLLoadercontext->glVertexAttrib4uivARB
// GLAPI void APIENTRY glVertexAttrib4usvARB (GLuint index, const GLushort *v);
#define GLVertexAttrib4usvARB OpenGLLoadercontext->glVertexAttrib4usvARB
// GLAPI void APIENTRY glVertexAttribPointerARB (GLuint index, GLint size,
// GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
#define GLVertexAttribPointerARB OpenGLLoadercontext->glVertexAttribPointerARB
// GLAPI void APIENTRY glEnableVertexAttribArrayARB (GLuint index);
#define GLEnableVertexAttribArrayARB                                           \
  OpenGLLoadercontext->glEnableVertexAttribArrayARB
// GLAPI void APIENTRY glDisableVertexAttribArrayARB (GLuint index);
#define GLDisableVertexAttribArrayARB                                          \
  OpenGLLoadercontext->glDisableVertexAttribArrayARB
// GLAPI void APIENTRY glGetVertexAttribdvARB (GLuint index, GLenum pname,
// GLdouble *params);
#define GLGetVertexAttribdvARB OpenGLLoadercontext->glGetVertexAttribdvARB
// GLAPI void APIENTRY glGetVertexAttribfvARB (GLuint index, GLenum pname,
// GLfloat *params);
#define GLGetVertexAttribfvARB OpenGLLoadercontext->glGetVertexAttribfvARB
// GLAPI void APIENTRY glGetVertexAttribivARB (GLuint index, GLenum pname, GLint
// *params);
#define GLGetVertexAttribivARB OpenGLLoadercontext->glGetVertexAttribivARB
// GLAPI void APIENTRY glGetVertexAttribPointervARB (GLuint index, GLenum pname,
// void **pointer);
#define GLGetVertexAttribPointervARB                                           \
  OpenGLLoadercontext->glGetVertexAttribPointervARB
// GLAPI void APIENTRY glBindAttribLocationARB (GLhandleARB programObj, GLuint
// index, const GLcharARB *name);
#define GLBindAttribLocationARB OpenGLLoadercontext->glBindAttribLocationARB
// GLAPI void APIENTRY glGetActiveAttribARB (GLhandleARB programObj, GLuint
// index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type,
// GLcharARB *name);
#define GLGetActiveAttribARB OpenGLLoadercontext->glGetActiveAttribARB
// GLAPI GLint APIENTRY glGetAttribLocationARB (GLhandleARB programObj, const
// GLcharARB *name);
#define GLGetAttribLocationARB OpenGLLoadercontext->glGetAttribLocationARB
// GLAPI void APIENTRY glDepthRangeArraydvNV (GLuint first, GLsizei count, const
// GLdouble *v);
#define GLDepthRangeArraydvNV OpenGLLoadercontext->glDepthRangeArraydvNV
// GLAPI void APIENTRY glDepthRangeIndexeddNV (GLuint index, GLdouble n,
// GLdouble f);
#define GLDepthRangeIndexeddNV OpenGLLoadercontext->glDepthRangeIndexeddNV
// GLAPI void APIENTRY glWindowPos2dARB (GLdouble x, GLdouble y);
#define GLWindowPos2dARB OpenGLLoadercontext->glWindowPos2dARB
// GLAPI void APIENTRY glWindowPos2dvARB (const GLdouble *v);
#define GLWindowPos2dvARB OpenGLLoadercontext->glWindowPos2dvARB
// GLAPI void APIENTRY glWindowPos2fARB (GLfloat x, GLfloat y);
#define GLWindowPos2fARB OpenGLLoadercontext->glWindowPos2fARB
// GLAPI void APIENTRY glWindowPos2fvARB (const GLfloat *v);
#define GLWindowPos2fvARB OpenGLLoadercontext->glWindowPos2fvARB
// GLAPI void APIENTRY glWindowPos2iARB (GLint x, GLint y);
#define GLWindowPos2iARB OpenGLLoadercontext->glWindowPos2iARB
// GLAPI void APIENTRY glWindowPos2ivARB (const GLint *v);
#define GLWindowPos2ivARB OpenGLLoadercontext->glWindowPos2ivARB
// GLAPI void APIENTRY glWindowPos2sARB (GLshort x, GLshort y);
#define GLWindowPos2sARB OpenGLLoadercontext->glWindowPos2sARB
// GLAPI void APIENTRY glWindowPos2svARB (const GLshort *v);
#define GLWindowPos2svARB OpenGLLoadercontext->glWindowPos2svARB
// GLAPI void APIENTRY glWindowPos3dARB (GLdouble x, GLdouble y, GLdouble z);
#define GLWindowPos3dARB OpenGLLoadercontext->glWindowPos3dARB
// GLAPI void APIENTRY glWindowPos3dvARB (const GLdouble *v);
#define GLWindowPos3dvARB OpenGLLoadercontext->glWindowPos3dvARB
// GLAPI void APIENTRY glWindowPos3fARB (GLfloat x, GLfloat y, GLfloat z);
#define GLWindowPos3fARB OpenGLLoadercontext->glWindowPos3fARB
// GLAPI void APIENTRY glWindowPos3fvARB (const GLfloat *v);
#define GLWindowPos3fvARB OpenGLLoadercontext->glWindowPos3fvARB
// GLAPI void APIENTRY glWindowPos3iARB (GLint x, GLint y, GLint z);
#define GLWindowPos3iARB OpenGLLoadercontext->glWindowPos3iARB
// GLAPI void APIENTRY glWindowPos3ivARB (const GLint *v);
#define GLWindowPos3ivARB OpenGLLoadercontext->glWindowPos3ivARB
// GLAPI void APIENTRY glWindowPos3sARB (GLshort x, GLshort y, GLshort z);
#define GLWindowPos3sARB OpenGLLoadercontext->glWindowPos3sARB
// GLAPI void APIENTRY glWindowPos3svARB (const GLshort *v);
#define GLWindowPos3svARB OpenGLLoadercontext->glWindowPos3svARB
// GLAPI void APIENTRY glBlendBarrierKHR (void);
#define GLBlendBarrierKHR OpenGLLoadercontext->glBlendBarrierKHR
// GLAPI void APIENTRY glMaxShaderCompilerThreadsKHR (GLuint count);
#define GLMaxShaderCompilerThreadsKHR                                          \
  OpenGLLoadercontext->glMaxShaderCompilerThreadsKHR
// GLAPI void APIENTRY glMultiTexCoord1bOES (GLenum texture, GLbyte s);
#define GLMultiTexCoord1bOES OpenGLLoadercontext->glMultiTexCoord1bOES
// GLAPI void APIENTRY glMultiTexCoord1bvOES (GLenum texture, const GLbyte
// *coords);
#define GLMultiTexCoord1bvOES OpenGLLoadercontext->glMultiTexCoord1bvOES
// GLAPI void APIENTRY glMultiTexCoord2bOES (GLenum texture, GLbyte s, GLbyte
// t);
#define GLMultiTexCoord2bOES OpenGLLoadercontext->glMultiTexCoord2bOES
// GLAPI void APIENTRY glMultiTexCoord2bvOES (GLenum texture, const GLbyte
// *coords);
#define GLMultiTexCoord2bvOES OpenGLLoadercontext->glMultiTexCoord2bvOES
// GLAPI void APIENTRY glMultiTexCoord3bOES (GLenum texture, GLbyte s, GLbyte t,
// GLbyte r);
#define GLMultiTexCoord3bOES OpenGLLoadercontext->glMultiTexCoord3bOES
// GLAPI void APIENTRY glMultiTexCoord3bvOES (GLenum texture, const GLbyte
// *coords);
#define GLMultiTexCoord3bvOES OpenGLLoadercontext->glMultiTexCoord3bvOES
// GLAPI void APIENTRY glMultiTexCoord4bOES (GLenum texture, GLbyte s, GLbyte t,
// GLbyte r, GLbyte q);
#define GLMultiTexCoord4bOES OpenGLLoadercontext->glMultiTexCoord4bOES
// GLAPI void APIENTRY glMultiTexCoord4bvOES (GLenum texture, const GLbyte
// *coords);
#define GLMultiTexCoord4bvOES OpenGLLoadercontext->glMultiTexCoord4bvOES
// GLAPI void APIENTRY glTexCoord1bOES (GLbyte s);
#define GLTexCoord1bOES OpenGLLoadercontext->glTexCoord1bOES
// GLAPI void APIENTRY glTexCoord1bvOES (const GLbyte *coords);
#define GLTexCoord1bvOES OpenGLLoadercontext->glTexCoord1bvOES
// GLAPI void APIENTRY glTexCoord2bOES (GLbyte s, GLbyte t);
#define GLTexCoord2bOES OpenGLLoadercontext->glTexCoord2bOES
// GLAPI void APIENTRY glTexCoord2bvOES (const GLbyte *coords);
#define GLTexCoord2bvOES OpenGLLoadercontext->glTexCoord2bvOES
// GLAPI void APIENTRY glTexCoord3bOES (GLbyte s, GLbyte t, GLbyte r);
#define GLTexCoord3bOES OpenGLLoadercontext->glTexCoord3bOES
// GLAPI void APIENTRY glTexCoord3bvOES (const GLbyte *coords);
#define GLTexCoord3bvOES OpenGLLoadercontext->glTexCoord3bvOES
// GLAPI void APIENTRY glTexCoord4bOES (GLbyte s, GLbyte t, GLbyte r, GLbyte q);
#define GLTexCoord4bOES OpenGLLoadercontext->glTexCoord4bOES
// GLAPI void APIENTRY glTexCoord4bvOES (const GLbyte *coords);
#define GLTexCoord4bvOES OpenGLLoadercontext->glTexCoord4bvOES
// GLAPI void APIENTRY glVertex2bOES (GLbyte x, GLbyte y);
#define GLVertex2bOES OpenGLLoadercontext->glVertex2bOES
// GLAPI void APIENTRY glVertex2bvOES (const GLbyte *coords);
#define GLVertex2bvOES OpenGLLoadercontext->glVertex2bvOES
// GLAPI void APIENTRY glVertex3bOES (GLbyte x, GLbyte y, GLbyte z);
#define GLVertex3bOES OpenGLLoadercontext->glVertex3bOES
// GLAPI void APIENTRY glVertex3bvOES (const GLbyte *coords);
#define GLVertex3bvOES OpenGLLoadercontext->glVertex3bvOES
// GLAPI void APIENTRY glVertex4bOES (GLbyte x, GLbyte y, GLbyte z, GLbyte w);
#define GLVertex4bOES OpenGLLoadercontext->glVertex4bOES
// GLAPI void APIENTRY glVertex4bvOES (const GLbyte *coords);
#define GLVertex4bvOES OpenGLLoadercontext->glVertex4bvOES
// GLAPI void APIENTRY glAlphaFuncxOES (GLenum func, GLfixed ref);
#define GLAlphaFuncxOES OpenGLLoadercontext->glAlphaFuncxOES
// GLAPI void APIENTRY glClearColorxOES (GLfixed red, GLfixed green, GLfixed
// blue, GLfixed alpha);
#define GLClearColorxOES OpenGLLoadercontext->glClearColorxOES
// GLAPI void APIENTRY glClearDepthxOES (GLfixed depth);
#define GLClearDepthxOES OpenGLLoadercontext->glClearDepthxOES
// GLAPI void APIENTRY glClipPlanexOES (GLenum plane, const GLfixed *equation);
#define GLClipPlanexOES OpenGLLoadercontext->glClipPlanexOES
// GLAPI void APIENTRY glColor4xOES (GLfixed red, GLfixed green, GLfixed blue,
// GLfixed alpha);
#define GLColor4xOES OpenGLLoadercontext->glColor4xOES
// GLAPI void APIENTRY glDepthRangexOES (GLfixed n, GLfixed f);
#define GLDepthRangexOES OpenGLLoadercontext->glDepthRangexOES
// GLAPI void APIENTRY glFogxOES (GLenum pname, GLfixed param);
#define GLFogxOES OpenGLLoadercontext->glFogxOES
// GLAPI void APIENTRY glFogxvOES (GLenum pname, const GLfixed *param);
#define GLFogxvOES OpenGLLoadercontext->glFogxvOES
// GLAPI void APIENTRY glFrustumxOES (GLfixed l, GLfixed r, GLfixed b, GLfixed
// t, GLfixed n, GLfixed f);
#define GLFrustumxOES OpenGLLoadercontext->glFrustumxOES
// GLAPI void APIENTRY glGetClipPlanexOES (GLenum plane, GLfixed *equation);
#define GLGetClipPlanexOES OpenGLLoadercontext->glGetClipPlanexOES
// GLAPI void APIENTRY glGetFixedvOES (GLenum pname, GLfixed *params);
#define GLGetFixedvOES OpenGLLoadercontext->glGetFixedvOES
// GLAPI void APIENTRY glGetTexEnvxvOES (GLenum target, GLenum pname, GLfixed
// *params);
#define GLGetTexEnvxvOES OpenGLLoadercontext->glGetTexEnvxvOES
// GLAPI void APIENTRY glGetTexParameterxvOES (GLenum target, GLenum pname,
// GLfixed *params);
#define GLGetTexParameterxvOES OpenGLLoadercontext->glGetTexParameterxvOES
// GLAPI void APIENTRY glLightModelxOES (GLenum pname, GLfixed param);
#define GLLightModelxOES OpenGLLoadercontext->glLightModelxOES
// GLAPI void APIENTRY glLightModelxvOES (GLenum pname, const GLfixed *param);
#define GLLightModelxvOES OpenGLLoadercontext->glLightModelxvOES
// GLAPI void APIENTRY glLightxOES (GLenum light, GLenum pname, GLfixed param);
#define GLLightxOES OpenGLLoadercontext->glLightxOES
// GLAPI void APIENTRY glLightxvOES (GLenum light, GLenum pname, const GLfixed
// *params);
#define GLLightxvOES OpenGLLoadercontext->glLightxvOES
// GLAPI void APIENTRY glLineWidthxOES (GLfixed width);
#define GLLineWidthxOES OpenGLLoadercontext->glLineWidthxOES
// GLAPI void APIENTRY glLoadMatrixxOES (const GLfixed *m);
#define GLLoadMatrixxOES OpenGLLoadercontext->glLoadMatrixxOES
// GLAPI void APIENTRY glMaterialxOES (GLenum face, GLenum pname, GLfixed
// param);
#define GLMaterialxOES OpenGLLoadercontext->glMaterialxOES
// GLAPI void APIENTRY glMaterialxvOES (GLenum face, GLenum pname, const GLfixed
// *param);
#define GLMaterialxvOES OpenGLLoadercontext->glMaterialxvOES
// GLAPI void APIENTRY glMultMatrixxOES (const GLfixed *m);
#define GLMultMatrixxOES OpenGLLoadercontext->glMultMatrixxOES
// GLAPI void APIENTRY glMultiTexCoord4xOES (GLenum texture, GLfixed s, GLfixed
// t, GLfixed r, GLfixed q);
#define GLMultiTexCoord4xOES OpenGLLoadercontext->glMultiTexCoord4xOES
// GLAPI void APIENTRY glNormal3xOES (GLfixed nx, GLfixed ny, GLfixed nz);
#define GLNormal3xOES OpenGLLoadercontext->glNormal3xOES
// GLAPI void APIENTRY glOrthoxOES (GLfixed l, GLfixed r, GLfixed b, GLfixed t,
// GLfixed n, GLfixed f);
#define GLOrthoxOES OpenGLLoadercontext->glOrthoxOES
// GLAPI void APIENTRY glPointParameterxvOES (GLenum pname, const GLfixed
// *params);
#define GLPointParameterxvOES OpenGLLoadercontext->glPointParameterxvOES
// GLAPI void APIENTRY glPointSizexOES (GLfixed size);
#define GLPointSizexOES OpenGLLoadercontext->glPointSizexOES
// GLAPI void APIENTRY glPolygonOffsetxOES (GLfixed factor, GLfixed units);
#define GLPolygonOffsetxOES OpenGLLoadercontext->glPolygonOffsetxOES
// GLAPI void APIENTRY glRotatexOES (GLfixed angle, GLfixed x, GLfixed y,
// GLfixed z);
#define GLRotatexOES OpenGLLoadercontext->glRotatexOES
// GLAPI void APIENTRY glScalexOES (GLfixed x, GLfixed y, GLfixed z);
#define GLScalexOES OpenGLLoadercontext->glScalexOES
// GLAPI void APIENTRY glTexEnvxOES (GLenum target, GLenum pname, GLfixed
// param);
#define GLTexEnvxOES OpenGLLoadercontext->glTexEnvxOES
// GLAPI void APIENTRY glTexEnvxvOES (GLenum target, GLenum pname, const GLfixed
// *params);
#define GLTexEnvxvOES OpenGLLoadercontext->glTexEnvxvOES
// GLAPI void APIENTRY glTexParameterxOES (GLenum target, GLenum pname, GLfixed
// param);
#define GLTexParameterxOES OpenGLLoadercontext->glTexParameterxOES
// GLAPI void APIENTRY glTexParameterxvOES (GLenum target, GLenum pname, const
// GLfixed *params);
#define GLTexParameterxvOES OpenGLLoadercontext->glTexParameterxvOES
// GLAPI void APIENTRY glTranslatexOES (GLfixed x, GLfixed y, GLfixed z);
#define GLTranslatexOES OpenGLLoadercontext->glTranslatexOES
// GLAPI void APIENTRY glAccumxOES (GLenum op, GLfixed value);
#define GLAccumxOES OpenGLLoadercontext->glAccumxOES
// GLAPI void APIENTRY glBitmapxOES (GLsizei width, GLsizei height, GLfixed
// xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, const GLubyte *bitmap);
#define GLBitmapxOES OpenGLLoadercontext->glBitmapxOES
// GLAPI void APIENTRY glBlendColorxOES (GLfixed red, GLfixed green, GLfixed
// blue, GLfixed alpha);
#define GLBlendColorxOES OpenGLLoadercontext->glBlendColorxOES
// GLAPI void APIENTRY glClearAccumxOES (GLfixed red, GLfixed green, GLfixed
// blue, GLfixed alpha);
#define GLClearAccumxOES OpenGLLoadercontext->glClearAccumxOES
// GLAPI void APIENTRY glColor3xOES (GLfixed red, GLfixed green, GLfixed blue);
#define GLColor3xOES OpenGLLoadercontext->glColor3xOES
// GLAPI void APIENTRY glColor3xvOES (const GLfixed *components);
#define GLColor3xvOES OpenGLLoadercontext->glColor3xvOES
// GLAPI void APIENTRY glColor4xvOES (const GLfixed *components);
#define GLColor4xvOES OpenGLLoadercontext->glColor4xvOES
// GLAPI void APIENTRY glConvolutionParameterxOES (GLenum target, GLenum pname,
// GLfixed param);
#define GLConvolutionParameterxOES                                             \
  OpenGLLoadercontext->glConvolutionParameterxOES
// GLAPI void APIENTRY glConvolutionParameterxvOES (GLenum target, GLenum pname,
// const GLfixed *params);
#define GLConvolutionParameterxvOES                                            \
  OpenGLLoadercontext->glConvolutionParameterxvOES
// GLAPI void APIENTRY glEvalCoord1xOES (GLfixed u);
#define GLEvalCoord1xOES OpenGLLoadercontext->glEvalCoord1xOES
// GLAPI void APIENTRY glEvalCoord1xvOES (const GLfixed *coords);
#define GLEvalCoord1xvOES OpenGLLoadercontext->glEvalCoord1xvOES
// GLAPI void APIENTRY glEvalCoord2xOES (GLfixed u, GLfixed v);
#define GLEvalCoord2xOES OpenGLLoadercontext->glEvalCoord2xOES
// GLAPI void APIENTRY glEvalCoord2xvOES (const GLfixed *coords);
#define GLEvalCoord2xvOES OpenGLLoadercontext->glEvalCoord2xvOES
// GLAPI void APIENTRY glFeedbackBufferxOES (GLsizei n, GLenum type, const
// GLfixed *buffer);
#define GLFeedbackBufferxOES OpenGLLoadercontext->glFeedbackBufferxOES
// GLAPI void APIENTRY glGetConvolutionParameterxvOES (GLenum target, GLenum
// pname, GLfixed *params);
#define GLGetConvolutionParameterxvOES                                         \
  OpenGLLoadercontext->glGetConvolutionParameterxvOES
// GLAPI void APIENTRY glGetHistogramParameterxvOES (GLenum target, GLenum
// pname, GLfixed *params);
#define GLGetHistogramParameterxvOES                                           \
  OpenGLLoadercontext->glGetHistogramParameterxvOES
// GLAPI void APIENTRY glGetLightxOES (GLenum light, GLenum pname, GLfixed
// *params);
#define GLGetLightxOES OpenGLLoadercontext->glGetLightxOES
// GLAPI void APIENTRY glGetMapxvOES (GLenum target, GLenum query, GLfixed *v);
#define GLGetMapxvOES OpenGLLoadercontext->glGetMapxvOES
// GLAPI void APIENTRY glGetMaterialxOES (GLenum face, GLenum pname, GLfixed
// param);
#define GLGetMaterialxOES OpenGLLoadercontext->glGetMaterialxOES
// GLAPI void APIENTRY glGetPixelMapxv (GLenum map, GLint size, GLfixed
// *values);
#define GLGetPixelMapxv OpenGLLoadercontext->glGetPixelMapxv
// GLAPI void APIENTRY glGetTexGenxvOES (GLenum coord, GLenum pname, GLfixed
// *params);
#define GLGetTexGenxvOES OpenGLLoadercontext->glGetTexGenxvOES
// GLAPI void APIENTRY glGetTexLevelParameterxvOES (GLenum target, GLint level,
// GLenum pname, GLfixed *params);
#define GLGetTexLevelParameterxvOES                                            \
  OpenGLLoadercontext->glGetTexLevelParameterxvOES
// GLAPI void APIENTRY glIndexxOES (GLfixed component);
#define GLIndexxOES OpenGLLoadercontext->glIndexxOES
// GLAPI void APIENTRY glIndexxvOES (const GLfixed *component);
#define GLIndexxvOES OpenGLLoadercontext->glIndexxvOES
// GLAPI void APIENTRY glLoadTransposeMatrixxOES (const GLfixed *m);
#define GLLoadTransposeMatrixxOES OpenGLLoadercontext->glLoadTransposeMatrixxOES
// GLAPI void APIENTRY glMap1xOES (GLenum target, GLfixed u1, GLfixed u2, GLint
// stride, GLint order, GLfixed points);
#define GLMap1xOES OpenGLLoadercontext->glMap1xOES
// GLAPI void APIENTRY glMap2xOES (GLenum target, GLfixed u1, GLfixed u2, GLint
// ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder,
// GLfixed points);
#define GLMap2xOES OpenGLLoadercontext->glMap2xOES
// GLAPI void APIENTRY glMapGrid1xOES (GLint n, GLfixed u1, GLfixed u2);
#define GLMapGrid1xOES OpenGLLoadercontext->glMapGrid1xOES
// GLAPI void APIENTRY glMapGrid2xOES (GLint n, GLfixed u1, GLfixed u2, GLfixed
// v1, GLfixed v2);
#define GLMapGrid2xOES OpenGLLoadercontext->glMapGrid2xOES
// GLAPI void APIENTRY glMultTransposeMatrixxOES (const GLfixed *m);
#define GLMultTransposeMatrixxOES OpenGLLoadercontext->glMultTransposeMatrixxOES
// GLAPI void APIENTRY glMultiTexCoord1xOES (GLenum texture, GLfixed s);
#define GLMultiTexCoord1xOES OpenGLLoadercontext->glMultiTexCoord1xOES
// GLAPI void APIENTRY glMultiTexCoord1xvOES (GLenum texture, const GLfixed
// *coords);
#define GLMultiTexCoord1xvOES OpenGLLoadercontext->glMultiTexCoord1xvOES
// GLAPI void APIENTRY glMultiTexCoord2xOES (GLenum texture, GLfixed s, GLfixed
// t);
#define GLMultiTexCoord2xOES OpenGLLoadercontext->glMultiTexCoord2xOES
// GLAPI void APIENTRY glMultiTexCoord2xvOES (GLenum texture, const GLfixed
// *coords);
#define GLMultiTexCoord2xvOES OpenGLLoadercontext->glMultiTexCoord2xvOES
// GLAPI void APIENTRY glMultiTexCoord3xOES (GLenum texture, GLfixed s, GLfixed
// t, GLfixed r);
#define GLMultiTexCoord3xOES OpenGLLoadercontext->glMultiTexCoord3xOES
// GLAPI void APIENTRY glMultiTexCoord3xvOES (GLenum texture, const GLfixed
// *coords);
#define GLMultiTexCoord3xvOES OpenGLLoadercontext->glMultiTexCoord3xvOES
// GLAPI void APIENTRY glMultiTexCoord4xvOES (GLenum texture, const GLfixed
// *coords);
#define GLMultiTexCoord4xvOES OpenGLLoadercontext->glMultiTexCoord4xvOES
// GLAPI void APIENTRY glNormal3xvOES (const GLfixed *coords);
#define GLNormal3xvOES OpenGLLoadercontext->glNormal3xvOES
// GLAPI void APIENTRY glPassThroughxOES (GLfixed token);
#define GLPassThroughxOES OpenGLLoadercontext->glPassThroughxOES
// GLAPI void APIENTRY glPixelMapx (GLenum map, GLint size, const GLfixed
// *values);
#define GLPixelMapx OpenGLLoadercontext->glPixelMapx
// GLAPI void APIENTRY glPixelStorex (GLenum pname, GLfixed param);
#define GLPixelStorex OpenGLLoadercontext->glPixelStorex
// GLAPI void APIENTRY glPixelTransferxOES (GLenum pname, GLfixed param);
#define GLPixelTransferxOES OpenGLLoadercontext->glPixelTransferxOES
// GLAPI void APIENTRY glPixelZoomxOES (GLfixed xfactor, GLfixed yfactor);
#define GLPixelZoomxOES OpenGLLoadercontext->glPixelZoomxOES
// GLAPI void APIENTRY glPrioritizeTexturesxOES (GLsizei n, const GLuint
// *textures, const GLfixed *priorities);
#define GLPrioritizeTexturesxOES OpenGLLoadercontext->glPrioritizeTexturesxOES
// GLAPI void APIENTRY glRasterPos2xOES (GLfixed x, GLfixed y);
#define GLRasterPos2xOES OpenGLLoadercontext->glRasterPos2xOES
// GLAPI void APIENTRY glRasterPos2xvOES (const GLfixed *coords);
#define GLRasterPos2xvOES OpenGLLoadercontext->glRasterPos2xvOES
// GLAPI void APIENTRY glRasterPos3xOES (GLfixed x, GLfixed y, GLfixed z);
#define GLRasterPos3xOES OpenGLLoadercontext->glRasterPos3xOES
// GLAPI void APIENTRY glRasterPos3xvOES (const GLfixed *coords);
#define GLRasterPos3xvOES OpenGLLoadercontext->glRasterPos3xvOES
// GLAPI void APIENTRY glRasterPos4xOES (GLfixed x, GLfixed y, GLfixed z,
// GLfixed w);
#define GLRasterPos4xOES OpenGLLoadercontext->glRasterPos4xOES
// GLAPI void APIENTRY glRasterPos4xvOES (const GLfixed *coords);
#define GLRasterPos4xvOES OpenGLLoadercontext->glRasterPos4xvOES
// GLAPI void APIENTRY glRectxOES (GLfixed x1, GLfixed y1, GLfixed x2, GLfixed
// y2);
#define GLRectxOES OpenGLLoadercontext->glRectxOES
// GLAPI void APIENTRY glRectxvOES (const GLfixed *v1, const GLfixed *v2);
#define GLRectxvOES OpenGLLoadercontext->glRectxvOES
// GLAPI void APIENTRY glTexCoord1xOES (GLfixed s);
#define GLTexCoord1xOES OpenGLLoadercontext->glTexCoord1xOES
// GLAPI void APIENTRY glTexCoord1xvOES (const GLfixed *coords);
#define GLTexCoord1xvOES OpenGLLoadercontext->glTexCoord1xvOES
// GLAPI void APIENTRY glTexCoord2xOES (GLfixed s, GLfixed t);
#define GLTexCoord2xOES OpenGLLoadercontext->glTexCoord2xOES
// GLAPI void APIENTRY glTexCoord2xvOES (const GLfixed *coords);
#define GLTexCoord2xvOES OpenGLLoadercontext->glTexCoord2xvOES
// GLAPI void APIENTRY glTexCoord3xOES (GLfixed s, GLfixed t, GLfixed r);
#define GLTexCoord3xOES OpenGLLoadercontext->glTexCoord3xOES
// GLAPI void APIENTRY glTexCoord3xvOES (const GLfixed *coords);
#define GLTexCoord3xvOES OpenGLLoadercontext->glTexCoord3xvOES
// GLAPI void APIENTRY glTexCoord4xOES (GLfixed s, GLfixed t, GLfixed r, GLfixed
// q);
#define GLTexCoord4xOES OpenGLLoadercontext->glTexCoord4xOES
// GLAPI void APIENTRY glTexCoord4xvOES (const GLfixed *coords);
#define GLTexCoord4xvOES OpenGLLoadercontext->glTexCoord4xvOES
// GLAPI void APIENTRY glTexGenxOES (GLenum coord, GLenum pname, GLfixed param);
#define GLTexGenxOES OpenGLLoadercontext->glTexGenxOES
// GLAPI void APIENTRY glTexGenxvOES (GLenum coord, GLenum pname, const GLfixed
// *params);
#define GLTexGenxvOES OpenGLLoadercontext->glTexGenxvOES
// GLAPI void APIENTRY glVertex2xOES (GLfixed x);
#define GLVertex2xOES OpenGLLoadercontext->glVertex2xOES
// GLAPI void APIENTRY glVertex2xvOES (const GLfixed *coords);
#define GLVertex2xvOES OpenGLLoadercontext->glVertex2xvOES
// GLAPI void APIENTRY glVertex3xOES (GLfixed x, GLfixed y);
#define GLVertex3xOES OpenGLLoadercontext->glVertex3xOES
// GLAPI void APIENTRY glVertex3xvOES (const GLfixed *coords);
#define GLVertex3xvOES OpenGLLoadercontext->glVertex3xvOES
// GLAPI void APIENTRY glVertex4xOES (GLfixed x, GLfixed y, GLfixed z);
#define GLVertex4xOES OpenGLLoadercontext->glVertex4xOES
// GLAPI void APIENTRY glVertex4xvOES (const GLfixed *coords);
#define GLVertex4xvOES OpenGLLoadercontext->glVertex4xvOES
// GLAPI GLbitfield APIENTRY glQueryMatrixxOES (GLfixed *mantissa, GLint
// *exponent);
#define GLQueryMatrixxOES OpenGLLoadercontext->glQueryMatrixxOES
// GLAPI void APIENTRY glClearDepthfOES (GLclampf depth);
#define GLClearDepthfOES OpenGLLoadercontext->glClearDepthfOES
// GLAPI void APIENTRY glClipPlanefOES (GLenum plane, const GLfloat *equation);
#define GLClipPlanefOES OpenGLLoadercontext->glClipPlanefOES
// GLAPI void APIENTRY glDepthRangefOES (GLclampf n, GLclampf f);
#define GLDepthRangefOES OpenGLLoadercontext->glDepthRangefOES
// GLAPI void APIENTRY glFrustumfOES (GLfloat l, GLfloat r, GLfloat b, GLfloat
// t, GLfloat n, GLfloat f);
#define GLFrustumfOES OpenGLLoadercontext->glFrustumfOES
// GLAPI void APIENTRY glGetClipPlanefOES (GLenum plane, GLfloat *equation);
#define GLGetClipPlanefOES OpenGLLoadercontext->glGetClipPlanefOES
// GLAPI void APIENTRY glOrthofOES (GLfloat l, GLfloat r, GLfloat b, GLfloat t,
// GLfloat n, GLfloat f);
#define GLOrthofOES OpenGLLoadercontext->glOrthofOES
// GLAPI void APIENTRY glTbufferMask3DFX (GLuint mask);
#define GLTbufferMask3DFX OpenGLLoadercontext->glTbufferMask3DFX
// GLAPI void APIENTRY glDebugMessageEnableAMD (GLenum category, GLenum
// severity, GLsizei count, const GLuint *ids, GLboolean enabled);
#define GLDebugMessageEnableAMD OpenGLLoadercontext->glDebugMessageEnableAMD
// GLAPI void APIENTRY glDebugMessageInsertAMD (GLenum category, GLenum
// severity, GLuint id, GLsizei length, const GLchar *buf);
#define GLDebugMessageInsertAMD OpenGLLoadercontext->glDebugMessageInsertAMD
// GLAPI void APIENTRY glDebugMessageCallbackAMD (GLDEBUGPROCAMD callback, void
// *userParam);
#define GLDebugMessageCallbackAMD OpenGLLoadercontext->glDebugMessageCallbackAMD
// GLAPI GLuint APIENTRY glGetDebugMessageLogAMD (GLuint count, GLsizei bufSize,
// GLenum *categories, GLenum *severities, GLuint *ids, GLsizei *lengths, GLchar
// *message);
#define GLGetDebugMessageLogAMD OpenGLLoadercontext->glGetDebugMessageLogAMD
// GLAPI void APIENTRY glBlendFuncIndexedAMD (GLuint buf, GLenum src, GLenum
// dst);
#define GLBlendFuncIndexedAMD OpenGLLoadercontext->glBlendFuncIndexedAMD
// GLAPI void APIENTRY glBlendFuncSeparateIndexedAMD (GLuint buf, GLenum srcRGB,
// GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
#define GLBlendFuncSeparateIndexedAMD                                          \
  OpenGLLoadercontext->glBlendFuncSeparateIndexedAMD
// GLAPI void APIENTRY glBlendEquationIndexedAMD (GLuint buf, GLenum mode);
#define GLBlendEquationIndexedAMD OpenGLLoadercontext->glBlendEquationIndexedAMD
// GLAPI void APIENTRY glBlendEquationSeparateIndexedAMD (GLuint buf, GLenum
// modeRGB, GLenum modeAlpha);
#define GLBlendEquationSeparateIndexedAMD                                      \
  OpenGLLoadercontext->glBlendEquationSeparateIndexedAMD
// GLAPI void APIENTRY glRenderbufferStorageMultisampleAdvancedAMD (GLenum
// target, GLsizei samples, GLsizei storageSamples, GLenum internalformat,
// GLsizei width, GLsizei height);
#define GLRenderbufferStorageMultisampleAdvancedAMD                            \
  OpenGLLoadercontext->glRenderbufferStorageMultisampleAdvancedAMD
// GLAPI void APIENTRY glNamedRenderbufferStorageMultisampleAdvancedAMD (GLuint
// renderbuffer, GLsizei samples, GLsizei storageSamples, GLenum internalformat,
// GLsizei width, GLsizei height);
#define GLNamedRenderbufferStorageMultisampleAdvancedAMD                       \
  OpenGLLoadercontext->glNamedRenderbufferStorageMultisampleAdvancedAMD
// GLAPI void APIENTRY glFramebufferSamplePositionsfvAMD (GLenum target, GLuint
// numsamples, GLuint pixelindex, const GLfloat *values);
#define GLFramebufferSamplePositionsfvAMD                                      \
  OpenGLLoadercontext->glFramebufferSamplePositionsfvAMD
// GLAPI void APIENTRY glNamedFramebufferSamplePositionsfvAMD (GLuint
// framebuffer, GLuint numsamples, GLuint pixelindex, const GLfloat *values);
#define GLNamedFramebufferSamplePositionsfvAMD                                 \
  OpenGLLoadercontext->glNamedFramebufferSamplePositionsfvAMD
// GLAPI void APIENTRY glGetFramebufferParameterfvAMD (GLenum target, GLenum
// pname, GLuint numsamples, GLuint pixelindex, GLsizei size, GLfloat *values);
#define GLGetFramebufferParameterfvAMD                                         \
  OpenGLLoadercontext->glGetFramebufferParameterfvAMD
// GLAPI void APIENTRY glGetNamedFramebufferParameterfvAMD (GLuint framebuffer,
// GLenum pname, GLuint numsamples, GLuint pixelindex, GLsizei size, GLfloat
// *values);
#define GLGetNamedFramebufferParameterfvAMD                                    \
  OpenGLLoadercontext->glGetNamedFramebufferParameterfvAMD
// GLAPI void APIENTRY glUniform1i64NV (GLint location, GLint64EXT x);
#define GLUniform1i64NV OpenGLLoadercontext->glUniform1i64NV
// GLAPI void APIENTRY glUniform2i64NV (GLint location, GLint64EXT x, GLint64EXT
// y);
#define GLUniform2i64NV OpenGLLoadercontext->glUniform2i64NV
// GLAPI void APIENTRY glUniform3i64NV (GLint location, GLint64EXT x, GLint64EXT
// y, GLint64EXT z);
#define GLUniform3i64NV OpenGLLoadercontext->glUniform3i64NV
// GLAPI void APIENTRY glUniform4i64NV (GLint location, GLint64EXT x, GLint64EXT
// y, GLint64EXT z, GLint64EXT w);
#define GLUniform4i64NV OpenGLLoadercontext->glUniform4i64NV
// GLAPI void APIENTRY glUniform1i64vNV (GLint location, GLsizei count, const
// GLint64EXT *value);
#define GLUniform1i64vNV OpenGLLoadercontext->glUniform1i64vNV
// GLAPI void APIENTRY glUniform2i64vNV (GLint location, GLsizei count, const
// GLint64EXT *value);
#define GLUniform2i64vNV OpenGLLoadercontext->glUniform2i64vNV
// GLAPI void APIENTRY glUniform3i64vNV (GLint location, GLsizei count, const
// GLint64EXT *value);
#define GLUniform3i64vNV OpenGLLoadercontext->glUniform3i64vNV
// GLAPI void APIENTRY glUniform4i64vNV (GLint location, GLsizei count, const
// GLint64EXT *value);
#define GLUniform4i64vNV OpenGLLoadercontext->glUniform4i64vNV
// GLAPI void APIENTRY glUniform1ui64NV (GLint location, GLuint64EXT x);
#define GLUniform1ui64NV OpenGLLoadercontext->glUniform1ui64NV
// GLAPI void APIENTRY glUniform2ui64NV (GLint location, GLuint64EXT x,
// GLuint64EXT y);
#define GLUniform2ui64NV OpenGLLoadercontext->glUniform2ui64NV
// GLAPI void APIENTRY glUniform3ui64NV (GLint location, GLuint64EXT x,
// GLuint64EXT y, GLuint64EXT z);
#define GLUniform3ui64NV OpenGLLoadercontext->glUniform3ui64NV
// GLAPI void APIENTRY glUniform4ui64NV (GLint location, GLuint64EXT x,
// GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
#define GLUniform4ui64NV OpenGLLoadercontext->glUniform4ui64NV
// GLAPI void APIENTRY glUniform1ui64vNV (GLint location, GLsizei count, const
// GLuint64EXT *value);
#define GLUniform1ui64vNV OpenGLLoadercontext->glUniform1ui64vNV
// GLAPI void APIENTRY glUniform2ui64vNV (GLint location, GLsizei count, const
// GLuint64EXT *value);
#define GLUniform2ui64vNV OpenGLLoadercontext->glUniform2ui64vNV
// GLAPI void APIENTRY glUniform3ui64vNV (GLint location, GLsizei count, const
// GLuint64EXT *value);
#define GLUniform3ui64vNV OpenGLLoadercontext->glUniform3ui64vNV
// GLAPI void APIENTRY glUniform4ui64vNV (GLint location, GLsizei count, const
// GLuint64EXT *value);
#define GLUniform4ui64vNV OpenGLLoadercontext->glUniform4ui64vNV
// GLAPI void APIENTRY glGetUniformi64vNV (GLuint program, GLint location,
// GLint64EXT *params);
#define GLGetUniformi64vNV OpenGLLoadercontext->glGetUniformi64vNV
// GLAPI void APIENTRY glGetUniformui64vNV (GLuint program, GLint location,
// GLuint64EXT *params);
#define GLGetUniformui64vNV OpenGLLoadercontext->glGetUniformui64vNV
// GLAPI void APIENTRY glProgramUniform1i64NV (GLuint program, GLint location,
// GLint64EXT x);
#define GLProgramUniform1i64NV OpenGLLoadercontext->glProgramUniform1i64NV
// GLAPI void APIENTRY glProgramUniform2i64NV (GLuint program, GLint location,
// GLint64EXT x, GLint64EXT y);
#define GLProgramUniform2i64NV OpenGLLoadercontext->glProgramUniform2i64NV
// GLAPI void APIENTRY glProgramUniform3i64NV (GLuint program, GLint location,
// GLint64EXT x, GLint64EXT y, GLint64EXT z);
#define GLProgramUniform3i64NV OpenGLLoadercontext->glProgramUniform3i64NV
// GLAPI void APIENTRY glProgramUniform4i64NV (GLuint program, GLint location,
// GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
#define GLProgramUniform4i64NV OpenGLLoadercontext->glProgramUniform4i64NV
// GLAPI void APIENTRY glProgramUniform1i64vNV (GLuint program, GLint location,
// GLsizei count, const GLint64EXT *value);
#define GLProgramUniform1i64vNV OpenGLLoadercontext->glProgramUniform1i64vNV
// GLAPI void APIENTRY glProgramUniform2i64vNV (GLuint program, GLint location,
// GLsizei count, const GLint64EXT *value);
#define GLProgramUniform2i64vNV OpenGLLoadercontext->glProgramUniform2i64vNV
// GLAPI void APIENTRY glProgramUniform3i64vNV (GLuint program, GLint location,
// GLsizei count, const GLint64EXT *value);
#define GLProgramUniform3i64vNV OpenGLLoadercontext->glProgramUniform3i64vNV
// GLAPI void APIENTRY glProgramUniform4i64vNV (GLuint program, GLint location,
// GLsizei count, const GLint64EXT *value);
#define GLProgramUniform4i64vNV OpenGLLoadercontext->glProgramUniform4i64vNV
// GLAPI void APIENTRY glProgramUniform1ui64NV (GLuint program, GLint location,
// GLuint64EXT x);
#define GLProgramUniform1ui64NV OpenGLLoadercontext->glProgramUniform1ui64NV
// GLAPI void APIENTRY glProgramUniform2ui64NV (GLuint program, GLint location,
// GLuint64EXT x, GLuint64EXT y);
#define GLProgramUniform2ui64NV OpenGLLoadercontext->glProgramUniform2ui64NV
// GLAPI void APIENTRY glProgramUniform3ui64NV (GLuint program, GLint location,
// GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
#define GLProgramUniform3ui64NV OpenGLLoadercontext->glProgramUniform3ui64NV
// GLAPI void APIENTRY glProgramUniform4ui64NV (GLuint program, GLint location,
// GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
#define GLProgramUniform4ui64NV OpenGLLoadercontext->glProgramUniform4ui64NV
// GLAPI void APIENTRY glProgramUniform1ui64vNV (GLuint program, GLint location,
// GLsizei count, const GLuint64EXT *value);
#define GLProgramUniform1ui64vNV OpenGLLoadercontext->glProgramUniform1ui64vNV
// GLAPI void APIENTRY glProgramUniform2ui64vNV (GLuint program, GLint location,
// GLsizei count, const GLuint64EXT *value);
#define GLProgramUniform2ui64vNV OpenGLLoadercontext->glProgramUniform2ui64vNV
// GLAPI void APIENTRY glProgramUniform3ui64vNV (GLuint program, GLint location,
// GLsizei count, const GLuint64EXT *value);
#define GLProgramUniform3ui64vNV OpenGLLoadercontext->glProgramUniform3ui64vNV
// GLAPI void APIENTRY glProgramUniform4ui64vNV (GLuint program, GLint location,
// GLsizei count, const GLuint64EXT *value);
#define GLProgramUniform4ui64vNV OpenGLLoadercontext->glProgramUniform4ui64vNV
// GLAPI void APIENTRY glVertexAttribParameteriAMD (GLuint index, GLenum pname,
// GLint param);
#define GLVertexAttribParameteriAMD                                            \
  OpenGLLoadercontext->glVertexAttribParameteriAMD
// GLAPI void APIENTRY glMultiDrawArraysIndirectAMD (GLenum mode, const void
// *indirect, GLsizei primcount, GLsizei stride);
#define GLMultiDrawArraysIndirectAMD                                           \
  OpenGLLoadercontext->glMultiDrawArraysIndirectAMD
// GLAPI void APIENTRY glMultiDrawElementsIndirectAMD (GLenum mode, GLenum type,
// const void *indirect, GLsizei primcount, GLsizei stride);
#define GLMultiDrawElementsIndirectAMD                                         \
  OpenGLLoadercontext->glMultiDrawElementsIndirectAMD
// GLAPI void APIENTRY glGenNamesAMD (GLenum identifier, GLuint num, GLuint
// *names);
#define GLGenNamesAMD OpenGLLoadercontext->glGenNamesAMD
// GLAPI void APIENTRY glDeleteNamesAMD (GLenum identifier, GLuint num, const
// GLuint *names);
#define GLDeleteNamesAMD OpenGLLoadercontext->glDeleteNamesAMD
// GLAPI GLboolean APIENTRY glIsNameAMD (GLenum identifier, GLuint name);
#define GLIsNameAMD OpenGLLoadercontext->glIsNameAMD
// GLAPI void APIENTRY glQueryObjectParameteruiAMD (GLenum target, GLuint id,
// GLenum pname, GLuint param);
#define GLQueryObjectParameteruiAMD                                            \
  OpenGLLoadercontext->glQueryObjectParameteruiAMD
// GLAPI void APIENTRY glGetPerfMonitorGroupsAMD (GLint *numGroups, GLsizei
// groupsSize, GLuint *groups);
#define GLGetPerfMonitorGroupsAMD OpenGLLoadercontext->glGetPerfMonitorGroupsAMD
// GLAPI void APIENTRY glGetPerfMonitorCountersAMD (GLuint group, GLint
// *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint
// *counters);
#define GLGetPerfMonitorCountersAMD                                            \
  OpenGLLoadercontext->glGetPerfMonitorCountersAMD
// GLAPI void APIENTRY glGetPerfMonitorGroupStringAMD (GLuint group, GLsizei
// bufSize, GLsizei *length, GLchar *groupString);
#define GLGetPerfMonitorGroupStringAMD                                         \
  OpenGLLoadercontext->glGetPerfMonitorGroupStringAMD
// GLAPI void APIENTRY glGetPerfMonitorCounterStringAMD (GLuint group, GLuint
// counter, GLsizei bufSize, GLsizei *length, GLchar *counterString);
#define GLGetPerfMonitorCounterStringAMD                                       \
  OpenGLLoadercontext->glGetPerfMonitorCounterStringAMD
// GLAPI void APIENTRY glGetPerfMonitorCounterInfoAMD (GLuint group, GLuint
// counter, GLenum pname, void *data);
#define GLGetPerfMonitorCounterInfoAMD                                         \
  OpenGLLoadercontext->glGetPerfMonitorCounterInfoAMD
// GLAPI void APIENTRY glGenPerfMonitorsAMD (GLsizei n, GLuint *monitors);
#define GLGenPerfMonitorsAMD OpenGLLoadercontext->glGenPerfMonitorsAMD
// GLAPI void APIENTRY glDeletePerfMonitorsAMD (GLsizei n, GLuint *monitors);
#define GLDeletePerfMonitorsAMD OpenGLLoadercontext->glDeletePerfMonitorsAMD
// GLAPI void APIENTRY glSelectPerfMonitorCountersAMD (GLuint monitor, GLboolean
// enable, GLuint group, GLint numCounters, GLuint *counterList);
#define GLSelectPerfMonitorCountersAMD                                         \
  OpenGLLoadercontext->glSelectPerfMonitorCountersAMD
// GLAPI void APIENTRY glBeginPerfMonitorAMD (GLuint monitor);
#define GLBeginPerfMonitorAMD OpenGLLoadercontext->glBeginPerfMonitorAMD
// GLAPI void APIENTRY glEndPerfMonitorAMD (GLuint monitor);
#define GLEndPerfMonitorAMD OpenGLLoadercontext->glEndPerfMonitorAMD
// GLAPI void APIENTRY glGetPerfMonitorCounterDataAMD (GLuint monitor, GLenum
// pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten);
#define GLGetPerfMonitorCounterDataAMD                                         \
  OpenGLLoadercontext->glGetPerfMonitorCounterDataAMD
// GLAPI void APIENTRY glSetMultisamplefvAMD (GLenum pname, GLuint index, const
// GLfloat *val);
#define GLSetMultisamplefvAMD OpenGLLoadercontext->glSetMultisamplefvAMD
// GLAPI void APIENTRY glTexStorageSparseAMD (GLenum target, GLenum
// internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers,
// GLbitfield flags);
#define GLTexStorageSparseAMD OpenGLLoadercontext->glTexStorageSparseAMD
// GLAPI void APIENTRY glTextureStorageSparseAMD (GLuint texture, GLenum target,
// GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei
// layers, GLbitfield flags);
#define GLTextureStorageSparseAMD OpenGLLoadercontext->glTextureStorageSparseAMD
// GLAPI void APIENTRY glStencilOpValueAMD (GLenum face, GLuint value);
#define GLStencilOpValueAMD OpenGLLoadercontext->glStencilOpValueAMD
// GLAPI void APIENTRY glTessellationFactorAMD (GLfloat factor);
#define GLTessellationFactorAMD OpenGLLoadercontext->glTessellationFactorAMD
// GLAPI void APIENTRY glTessellationModeAMD (GLenum mode);
#define GLTessellationModeAMD OpenGLLoadercontext->glTessellationModeAMD
// GLAPI void APIENTRY glElementPointerAPPLE (GLenum type, const void *pointer);
#define GLElementPointerAPPLE OpenGLLoadercontext->glElementPointerAPPLE
// GLAPI void APIENTRY glDrawElementArrayAPPLE (GLenum mode, GLint first,
// GLsizei count);
#define GLDrawElementArrayAPPLE OpenGLLoadercontext->glDrawElementArrayAPPLE
// GLAPI void APIENTRY glDrawRangeElementArrayAPPLE (GLenum mode, GLuint start,
// GLuint end, GLint first, GLsizei count);
#define GLDrawRangeElementArrayAPPLE                                           \
  OpenGLLoadercontext->glDrawRangeElementArrayAPPLE
// GLAPI void APIENTRY glMultiDrawElementArrayAPPLE (GLenum mode, const GLint
// *first, const GLsizei *count, GLsizei primcount);
#define GLMultiDrawElementArrayAPPLE                                           \
  OpenGLLoadercontext->glMultiDrawElementArrayAPPLE
// GLAPI void APIENTRY glMultiDrawRangeElementArrayAPPLE (GLenum mode, GLuint
// start, GLuint end, const GLint *first, const GLsizei *count, GLsizei
// primcount);
#define GLMultiDrawRangeElementArrayAPPLE                                      \
  OpenGLLoadercontext->glMultiDrawRangeElementArrayAPPLE
// GLAPI void APIENTRY glGenFencesAPPLE (GLsizei n, GLuint *fences);
#define GLGenFencesAPPLE OpenGLLoadercontext->glGenFencesAPPLE
// GLAPI void APIENTRY glDeleteFencesAPPLE (GLsizei n, const GLuint *fences);
#define GLDeleteFencesAPPLE OpenGLLoadercontext->glDeleteFencesAPPLE
// GLAPI void APIENTRY glSetFenceAPPLE (GLuint fence);
#define GLSetFenceAPPLE OpenGLLoadercontext->glSetFenceAPPLE
// GLAPI GLboolean APIENTRY glIsFenceAPPLE (GLuint fence);
#define GLIsFenceAPPLE OpenGLLoadercontext->glIsFenceAPPLE
// GLAPI GLboolean APIENTRY glTestFenceAPPLE (GLuint fence);
#define GLTestFenceAPPLE OpenGLLoadercontext->glTestFenceAPPLE
// GLAPI void APIENTRY glFinishFenceAPPLE (GLuint fence);
#define GLFinishFenceAPPLE OpenGLLoadercontext->glFinishFenceAPPLE
// GLAPI GLboolean APIENTRY glTestObjectAPPLE (GLenum object, GLuint name);
#define GLTestObjectAPPLE OpenGLLoadercontext->glTestObjectAPPLE
// GLAPI void APIENTRY glFinishObjectAPPLE (GLenum object, GLint name);
#define GLFinishObjectAPPLE OpenGLLoadercontext->glFinishObjectAPPLE
// GLAPI void APIENTRY glBufferParameteriAPPLE (GLenum target, GLenum pname,
// GLint param);
#define GLBufferParameteriAPPLE OpenGLLoadercontext->glBufferParameteriAPPLE
// GLAPI void APIENTRY glFlushMappedBufferRangeAPPLE (GLenum target, GLintptr
// offset, GLsizeiptr size);
#define GLFlushMappedBufferRangeAPPLE                                          \
  OpenGLLoadercontext->glFlushMappedBufferRangeAPPLE
// GLAPI GLenum APIENTRY glObjectPurgeableAPPLE (GLenum objectType, GLuint name,
// GLenum option);
#define GLObjectPurgeableAPPLE OpenGLLoadercontext->glObjectPurgeableAPPLE
// GLAPI GLenum APIENTRY glObjectUnpurgeableAPPLE (GLenum objectType, GLuint
// name, GLenum option);
#define GLObjectUnpurgeableAPPLE OpenGLLoadercontext->glObjectUnpurgeableAPPLE
// GLAPI void APIENTRY glGetObjectParameterivAPPLE (GLenum objectType, GLuint
// name, GLenum pname, GLint *params);
#define GLGetObjectParameterivAPPLE                                            \
  OpenGLLoadercontext->glGetObjectParameterivAPPLE
// GLAPI void APIENTRY glTextureRangeAPPLE (GLenum target, GLsizei length, const
// void *pointer);
#define GLTextureRangeAPPLE OpenGLLoadercontext->glTextureRangeAPPLE
// GLAPI void APIENTRY glGetTexParameterPointervAPPLE (GLenum target, GLenum
// pname, void **params);
#define GLGetTexParameterPointervAPPLE                                         \
  OpenGLLoadercontext->glGetTexParameterPointervAPPLE
// GLAPI void APIENTRY glBindVertexArrayAPPLE (GLuint array);
#define GLBindVertexArrayAPPLE OpenGLLoadercontext->glBindVertexArrayAPPLE
// GLAPI void APIENTRY glDeleteVertexArraysAPPLE (GLsizei n, const GLuint
// *arrays);
#define GLDeleteVertexArraysAPPLE OpenGLLoadercontext->glDeleteVertexArraysAPPLE
// GLAPI void APIENTRY glGenVertexArraysAPPLE (GLsizei n, GLuint *arrays);
#define GLGenVertexArraysAPPLE OpenGLLoadercontext->glGenVertexArraysAPPLE
// GLAPI GLboolean APIENTRY glIsVertexArrayAPPLE (GLuint array);
#define GLIsVertexArrayAPPLE OpenGLLoadercontext->glIsVertexArrayAPPLE
// GLAPI void APIENTRY glVertexArrayRangeAPPLE (GLsizei length, void *pointer);
#define GLVertexArrayRangeAPPLE OpenGLLoadercontext->glVertexArrayRangeAPPLE
// GLAPI void APIENTRY glFlushVertexArrayRangeAPPLE (GLsizei length, void
// *pointer);
#define GLFlushVertexArrayRangeAPPLE                                           \
  OpenGLLoadercontext->glFlushVertexArrayRangeAPPLE
// GLAPI void APIENTRY glVertexArrayParameteriAPPLE (GLenum pname, GLint param);
#define GLVertexArrayParameteriAPPLE                                           \
  OpenGLLoadercontext->glVertexArrayParameteriAPPLE
// GLAPI void APIENTRY glEnableVertexAttribAPPLE (GLuint index, GLenum pname);
#define GLEnableVertexAttribAPPLE OpenGLLoadercontext->glEnableVertexAttribAPPLE
// GLAPI void APIENTRY glDisableVertexAttribAPPLE (GLuint index, GLenum pname);
#define GLDisableVertexAttribAPPLE                                             \
  OpenGLLoadercontext->glDisableVertexAttribAPPLE
// GLAPI GLboolean APIENTRY glIsVertexAttribEnabledAPPLE (GLuint index, GLenum
// pname);
#define GLIsVertexAttribEnabledAPPLE                                           \
  OpenGLLoadercontext->glIsVertexAttribEnabledAPPLE
// GLAPI void APIENTRY glMapVertexAttrib1dAPPLE (GLuint index, GLuint size,
// GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points);
#define GLMapVertexAttrib1dAPPLE OpenGLLoadercontext->glMapVertexAttrib1dAPPLE
// GLAPI void APIENTRY glMapVertexAttrib1fAPPLE (GLuint index, GLuint size,
// GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points);
#define GLMapVertexAttrib1fAPPLE OpenGLLoadercontext->glMapVertexAttrib1fAPPLE
// GLAPI void APIENTRY glMapVertexAttrib2dAPPLE (GLuint index, GLuint size,
// GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble
// v2, GLint vstride, GLint vorder, const GLdouble *points);
#define GLMapVertexAttrib2dAPPLE OpenGLLoadercontext->glMapVertexAttrib2dAPPLE
// GLAPI void APIENTRY glMapVertexAttrib2fAPPLE (GLuint index, GLuint size,
// GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2,
// GLint vstride, GLint vorder, const GLfloat *points);
#define GLMapVertexAttrib2fAPPLE OpenGLLoadercontext->glMapVertexAttrib2fAPPLE
// GLAPI void APIENTRY glDrawBuffersATI (GLsizei n, const GLenum *bufs);
#define GLDrawBuffersATI OpenGLLoadercontext->glDrawBuffersATI
// GLAPI void APIENTRY glElementPointerATI (GLenum type, const void *pointer);
#define GLElementPointerATI OpenGLLoadercontext->glElementPointerATI
// GLAPI void APIENTRY glDrawElementArrayATI (GLenum mode, GLsizei count);
#define GLDrawElementArrayATI OpenGLLoadercontext->glDrawElementArrayATI
// GLAPI void APIENTRY glDrawRangeElementArrayATI (GLenum mode, GLuint start,
// GLuint end, GLsizei count);
#define GLDrawRangeElementArrayATI                                             \
  OpenGLLoadercontext->glDrawRangeElementArrayATI
// GLAPI void APIENTRY glTexBumpParameterivATI (GLenum pname, const GLint
// *param);
#define GLTexBumpParameterivATI OpenGLLoadercontext->glTexBumpParameterivATI
// GLAPI void APIENTRY glTexBumpParameterfvATI (GLenum pname, const GLfloat
// *param);
#define GLTexBumpParameterfvATI OpenGLLoadercontext->glTexBumpParameterfvATI
// GLAPI void APIENTRY glGetTexBumpParameterivATI (GLenum pname, GLint *param);
#define GLGetTexBumpParameterivATI                                             \
  OpenGLLoadercontext->glGetTexBumpParameterivATI
// GLAPI void APIENTRY glGetTexBumpParameterfvATI (GLenum pname, GLfloat
// *param);
#define GLGetTexBumpParameterfvATI                                             \
  OpenGLLoadercontext->glGetTexBumpParameterfvATI
// GLAPI GLuint APIENTRY glGenFragmentShadersATI (GLuint range);
#define GLGenFragmentShadersATI OpenGLLoadercontext->glGenFragmentShadersATI
// GLAPI void APIENTRY glBindFragmentShaderATI (GLuint id);
#define GLBindFragmentShaderATI OpenGLLoadercontext->glBindFragmentShaderATI
// GLAPI void APIENTRY glDeleteFragmentShaderATI (GLuint id);
#define GLDeleteFragmentShaderATI OpenGLLoadercontext->glDeleteFragmentShaderATI
// GLAPI void APIENTRY glBeginFragmentShaderATI (void);
#define GLBeginFragmentShaderATI OpenGLLoadercontext->glBeginFragmentShaderATI
// GLAPI void APIENTRY glEndFragmentShaderATI (void);
#define GLEndFragmentShaderATI OpenGLLoadercontext->glEndFragmentShaderATI
// GLAPI void APIENTRY glPassTexCoordATI (GLuint dst, GLuint coord, GLenum
// swizzle);
#define GLPassTexCoordATI OpenGLLoadercontext->glPassTexCoordATI
// GLAPI void APIENTRY glSampleMapATI (GLuint dst, GLuint interp, GLenum
// swizzle);
#define GLSampleMapATI OpenGLLoadercontext->glSampleMapATI
// GLAPI void APIENTRY glColorFragmentOp1ATI (GLenum op, GLuint dst, GLuint
// dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
#define GLColorFragmentOp1ATI OpenGLLoadercontext->glColorFragmentOp1ATI
// GLAPI void APIENTRY glColorFragmentOp2ATI (GLenum op, GLuint dst, GLuint
// dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint
// arg2, GLuint arg2Rep, GLuint arg2Mod);
#define GLColorFragmentOp2ATI OpenGLLoadercontext->glColorFragmentOp2ATI
// GLAPI void APIENTRY glColorFragmentOp3ATI (GLenum op, GLuint dst, GLuint
// dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint
// arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint
// arg3Mod);
#define GLColorFragmentOp3ATI OpenGLLoadercontext->glColorFragmentOp3ATI
// GLAPI void APIENTRY glAlphaFragmentOp1ATI (GLenum op, GLuint dst, GLuint
// dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
#define GLAlphaFragmentOp1ATI OpenGLLoadercontext->glAlphaFragmentOp1ATI
// GLAPI void APIENTRY glAlphaFragmentOp2ATI (GLenum op, GLuint dst, GLuint
// dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint
// arg2Rep, GLuint arg2Mod);
#define GLAlphaFragmentOp2ATI OpenGLLoadercontext->glAlphaFragmentOp2ATI
// GLAPI void APIENTRY glAlphaFragmentOp3ATI (GLenum op, GLuint dst, GLuint
// dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint
// arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
#define GLAlphaFragmentOp3ATI OpenGLLoadercontext->glAlphaFragmentOp3ATI
// GLAPI void APIENTRY glSetFragmentShaderConstantATI (GLuint dst, const GLfloat
// *value);
#define GLSetFragmentShaderConstantATI                                         \
  OpenGLLoadercontext->glSetFragmentShaderConstantATI
// GLAPI void *APIENTRY glMapObjectBufferATI (GLuint buffer);
#define GLMapObjectBufferATI OpenGLLoadercontext->glMapObjectBufferATI
// GLAPI void APIENTRY glUnmapObjectBufferATI (GLuint buffer);
#define GLUnmapObjectBufferATI OpenGLLoadercontext->glUnmapObjectBufferATI
// GLAPI void APIENTRY glPNTrianglesiATI (GLenum pname, GLint param);
#define GLPNTrianglesiATI OpenGLLoadercontext->glPNTrianglesiATI
// GLAPI void APIENTRY glPNTrianglesfATI (GLenum pname, GLfloat param);
#define GLPNTrianglesfATI OpenGLLoadercontext->glPNTrianglesfATI
// GLAPI void APIENTRY glStencilOpSeparateATI (GLenum face, GLenum sfail, GLenum
// dpfail, GLenum dppass);
#define GLStencilOpSeparateATI OpenGLLoadercontext->glStencilOpSeparateATI
// GLAPI void APIENTRY glStencilFuncSeparateATI (GLenum frontfunc, GLenum
// backfunc, GLint ref, GLuint mask);
#define GLStencilFuncSeparateATI OpenGLLoadercontext->glStencilFuncSeparateATI
// GLAPI GLuint APIENTRY glNewObjectBufferATI (GLsizei size, const void
// *pointer, GLenum usage);
#define GLNewObjectBufferATI OpenGLLoadercontext->glNewObjectBufferATI
// GLAPI GLboolean APIENTRY glIsObjectBufferATI (GLuint buffer);
#define GLIsObjectBufferATI OpenGLLoadercontext->glIsObjectBufferATI
// GLAPI void APIENTRY glUpdateObjectBufferATI (GLuint buffer, GLuint offset,
// GLsizei size, const void *pointer, GLenum preserve);
#define GLUpdateObjectBufferATI OpenGLLoadercontext->glUpdateObjectBufferATI
// GLAPI void APIENTRY glGetObjectBufferfvATI (GLuint buffer, GLenum pname,
// GLfloat *params);
#define GLGetObjectBufferfvATI OpenGLLoadercontext->glGetObjectBufferfvATI
// GLAPI void APIENTRY glGetObjectBufferivATI (GLuint buffer, GLenum pname,
// GLint *params);
#define GLGetObjectBufferivATI OpenGLLoadercontext->glGetObjectBufferivATI
// GLAPI void APIENTRY glFreeObjectBufferATI (GLuint buffer);
#define GLFreeObjectBufferATI OpenGLLoadercontext->glFreeObjectBufferATI
// GLAPI void APIENTRY glArrayObjectATI (GLenum array, GLint size, GLenum type,
// GLsizei stride, GLuint buffer, GLuint offset);
#define GLArrayObjectATI OpenGLLoadercontext->glArrayObjectATI
// GLAPI void APIENTRY glGetArrayObjectfvATI (GLenum array, GLenum pname,
// GLfloat *params);
#define GLGetArrayObjectfvATI OpenGLLoadercontext->glGetArrayObjectfvATI
// GLAPI void APIENTRY glGetArrayObjectivATI (GLenum array, GLenum pname, GLint
// *params);
#define GLGetArrayObjectivATI OpenGLLoadercontext->glGetArrayObjectivATI
// GLAPI void APIENTRY glVariantArrayObjectATI (GLuint id, GLenum type, GLsizei
// stride, GLuint buffer, GLuint offset);
#define GLVariantArrayObjectATI OpenGLLoadercontext->glVariantArrayObjectATI
// GLAPI void APIENTRY glGetVariantArrayObjectfvATI (GLuint id, GLenum pname,
// GLfloat *params);
#define GLGetVariantArrayObjectfvATI                                           \
  OpenGLLoadercontext->glGetVariantArrayObjectfvATI
// GLAPI void APIENTRY glGetVariantArrayObjectivATI (GLuint id, GLenum pname,
// GLint *params);
#define GLGetVariantArrayObjectivATI                                           \
  OpenGLLoadercontext->glGetVariantArrayObjectivATI
// GLAPI void APIENTRY glVertexAttribArrayObjectATI (GLuint index, GLint size,
// GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint
// offset);
#define GLVertexAttribArrayObjectATI                                           \
  OpenGLLoadercontext->glVertexAttribArrayObjectATI
// GLAPI void APIENTRY glGetVertexAttribArrayObjectfvATI (GLuint index, GLenum
// pname, GLfloat *params);
#define GLGetVertexAttribArrayObjectfvATI                                      \
  OpenGLLoadercontext->glGetVertexAttribArrayObjectfvATI
// GLAPI void APIENTRY glGetVertexAttribArrayObjectivATI (GLuint index, GLenum
// pname, GLint *params);
#define GLGetVertexAttribArrayObjectivATI                                      \
  OpenGLLoadercontext->glGetVertexAttribArrayObjectivATI
// GLAPI void APIENTRY glVertexStream1sATI (GLenum stream, GLshort x);
#define GLVertexStream1sATI OpenGLLoadercontext->glVertexStream1sATI
// GLAPI void APIENTRY glVertexStream1svATI (GLenum stream, const GLshort
// *coords);
#define GLVertexStream1svATI OpenGLLoadercontext->glVertexStream1svATI
// GLAPI void APIENTRY glVertexStream1iATI (GLenum stream, GLint x);
#define GLVertexStream1iATI OpenGLLoadercontext->glVertexStream1iATI
// GLAPI void APIENTRY glVertexStream1ivATI (GLenum stream, const GLint
// *coords);
#define GLVertexStream1ivATI OpenGLLoadercontext->glVertexStream1ivATI
// GLAPI void APIENTRY glVertexStream1fATI (GLenum stream, GLfloat x);
#define GLVertexStream1fATI OpenGLLoadercontext->glVertexStream1fATI
// GLAPI void APIENTRY glVertexStream1fvATI (GLenum stream, const GLfloat
// *coords);
#define GLVertexStream1fvATI OpenGLLoadercontext->glVertexStream1fvATI
// GLAPI void APIENTRY glVertexStream1dATI (GLenum stream, GLdouble x);
#define GLVertexStream1dATI OpenGLLoadercontext->glVertexStream1dATI
// GLAPI void APIENTRY glVertexStream1dvATI (GLenum stream, const GLdouble
// *coords);
#define GLVertexStream1dvATI OpenGLLoadercontext->glVertexStream1dvATI
// GLAPI void APIENTRY glVertexStream2sATI (GLenum stream, GLshort x, GLshort
// y);
#define GLVertexStream2sATI OpenGLLoadercontext->glVertexStream2sATI
// GLAPI void APIENTRY glVertexStream2svATI (GLenum stream, const GLshort
// *coords);
#define GLVertexStream2svATI OpenGLLoadercontext->glVertexStream2svATI
// GLAPI void APIENTRY glVertexStream2iATI (GLenum stream, GLint x, GLint y);
#define GLVertexStream2iATI OpenGLLoadercontext->glVertexStream2iATI
// GLAPI void APIENTRY glVertexStream2ivATI (GLenum stream, const GLint
// *coords);
#define GLVertexStream2ivATI OpenGLLoadercontext->glVertexStream2ivATI
// GLAPI void APIENTRY glVertexStream2fATI (GLenum stream, GLfloat x, GLfloat
// y);
#define GLVertexStream2fATI OpenGLLoadercontext->glVertexStream2fATI
// GLAPI void APIENTRY glVertexStream2fvATI (GLenum stream, const GLfloat
// *coords);
#define GLVertexStream2fvATI OpenGLLoadercontext->glVertexStream2fvATI
// GLAPI void APIENTRY glVertexStream2dATI (GLenum stream, GLdouble x, GLdouble
// y);
#define GLVertexStream2dATI OpenGLLoadercontext->glVertexStream2dATI
// GLAPI void APIENTRY glVertexStream2dvATI (GLenum stream, const GLdouble
// *coords);
#define GLVertexStream2dvATI OpenGLLoadercontext->glVertexStream2dvATI
// GLAPI void APIENTRY glVertexStream3sATI (GLenum stream, GLshort x, GLshort y,
// GLshort z);
#define GLVertexStream3sATI OpenGLLoadercontext->glVertexStream3sATI
// GLAPI void APIENTRY glVertexStream3svATI (GLenum stream, const GLshort
// *coords);
#define GLVertexStream3svATI OpenGLLoadercontext->glVertexStream3svATI
// GLAPI void APIENTRY glVertexStream3iATI (GLenum stream, GLint x, GLint y,
// GLint z);
#define GLVertexStream3iATI OpenGLLoadercontext->glVertexStream3iATI
// GLAPI void APIENTRY glVertexStream3ivATI (GLenum stream, const GLint
// *coords);
#define GLVertexStream3ivATI OpenGLLoadercontext->glVertexStream3ivATI
// GLAPI void APIENTRY glVertexStream3fATI (GLenum stream, GLfloat x, GLfloat y,
// GLfloat z);
#define GLVertexStream3fATI OpenGLLoadercontext->glVertexStream3fATI
// GLAPI void APIENTRY glVertexStream3fvATI (GLenum stream, const GLfloat
// *coords);
#define GLVertexStream3fvATI OpenGLLoadercontext->glVertexStream3fvATI
// GLAPI void APIENTRY glVertexStream3dATI (GLenum stream, GLdouble x, GLdouble
// y, GLdouble z);
#define GLVertexStream3dATI OpenGLLoadercontext->glVertexStream3dATI
// GLAPI void APIENTRY glVertexStream3dvATI (GLenum stream, const GLdouble
// *coords);
#define GLVertexStream3dvATI OpenGLLoadercontext->glVertexStream3dvATI
// GLAPI void APIENTRY glVertexStream4sATI (GLenum stream, GLshort x, GLshort y,
// GLshort z, GLshort w);
#define GLVertexStream4sATI OpenGLLoadercontext->glVertexStream4sATI
// GLAPI void APIENTRY glVertexStream4svATI (GLenum stream, const GLshort
// *coords);
#define GLVertexStream4svATI OpenGLLoadercontext->glVertexStream4svATI
// GLAPI void APIENTRY glVertexStream4iATI (GLenum stream, GLint x, GLint y,
// GLint z, GLint w);
#define GLVertexStream4iATI OpenGLLoadercontext->glVertexStream4iATI
// GLAPI void APIENTRY glVertexStream4ivATI (GLenum stream, const GLint
// *coords);
#define GLVertexStream4ivATI OpenGLLoadercontext->glVertexStream4ivATI
// GLAPI void APIENTRY glVertexStream4fATI (GLenum stream, GLfloat x, GLfloat y,
// GLfloat z, GLfloat w);
#define GLVertexStream4fATI OpenGLLoadercontext->glVertexStream4fATI
// GLAPI void APIENTRY glVertexStream4fvATI (GLenum stream, const GLfloat
// *coords);
#define GLVertexStream4fvATI OpenGLLoadercontext->glVertexStream4fvATI
// GLAPI void APIENTRY glVertexStream4dATI (GLenum stream, GLdouble x, GLdouble
// y, GLdouble z, GLdouble w);
#define GLVertexStream4dATI OpenGLLoadercontext->glVertexStream4dATI
// GLAPI void APIENTRY glVertexStream4dvATI (GLenum stream, const GLdouble
// *coords);
#define GLVertexStream4dvATI OpenGLLoadercontext->glVertexStream4dvATI
// GLAPI void APIENTRY glNormalStream3bATI (GLenum stream, GLbyte nx, GLbyte ny,
// GLbyte nz);
#define GLNormalStream3bATI OpenGLLoadercontext->glNormalStream3bATI
// GLAPI void APIENTRY glNormalStream3bvATI (GLenum stream, const GLbyte
// *coords);
#define GLNormalStream3bvATI OpenGLLoadercontext->glNormalStream3bvATI
// GLAPI void APIENTRY glNormalStream3sATI (GLenum stream, GLshort nx, GLshort
// ny, GLshort nz);
#define GLNormalStream3sATI OpenGLLoadercontext->glNormalStream3sATI
// GLAPI void APIENTRY glNormalStream3svATI (GLenum stream, const GLshort
// *coords);
#define GLNormalStream3svATI OpenGLLoadercontext->glNormalStream3svATI
// GLAPI void APIENTRY glNormalStream3iATI (GLenum stream, GLint nx, GLint ny,
// GLint nz);
#define GLNormalStream3iATI OpenGLLoadercontext->glNormalStream3iATI
// GLAPI void APIENTRY glNormalStream3ivATI (GLenum stream, const GLint
// *coords);
#define GLNormalStream3ivATI OpenGLLoadercontext->glNormalStream3ivATI
// GLAPI void APIENTRY glNormalStream3fATI (GLenum stream, GLfloat nx, GLfloat
// ny, GLfloat nz);
#define GLNormalStream3fATI OpenGLLoadercontext->glNormalStream3fATI
// GLAPI void APIENTRY glNormalStream3fvATI (GLenum stream, const GLfloat
// *coords);
#define GLNormalStream3fvATI OpenGLLoadercontext->glNormalStream3fvATI
// GLAPI void APIENTRY glNormalStream3dATI (GLenum stream, GLdouble nx, GLdouble
// ny, GLdouble nz);
#define GLNormalStream3dATI OpenGLLoadercontext->glNormalStream3dATI
// GLAPI void APIENTRY glNormalStream3dvATI (GLenum stream, const GLdouble
// *coords);
#define GLNormalStream3dvATI OpenGLLoadercontext->glNormalStream3dvATI
// GLAPI void APIENTRY glClientActiveVertexStreamATI (GLenum stream);
#define GLClientActiveVertexStreamATI                                          \
  OpenGLLoadercontext->glClientActiveVertexStreamATI
// GLAPI void APIENTRY glVertexBlendEnviATI (GLenum pname, GLint param);
#define GLVertexBlendEnviATI OpenGLLoadercontext->glVertexBlendEnviATI
// GLAPI void APIENTRY glVertexBlendEnvfATI (GLenum pname, GLfloat param);
#define GLVertexBlendEnvfATI OpenGLLoadercontext->glVertexBlendEnvfATI
// GLAPI void APIENTRY glEGLImageTargetTexStorageEXT (GLenum target,
// GLeglImageOES image, const GLint* attrib_list);
#define GLEGLImageTargetTexStorageEXT                                          \
  OpenGLLoadercontext->glEGLImageTargetTexStorageEXT
// GLAPI void APIENTRY glEGLImageTargetTextureStorageEXT (GLuint texture,
// GLeglImageOES image, const GLint* attrib_list);
#define GLEGLImageTargetTextureStorageEXT                                      \
  OpenGLLoadercontext->glEGLImageTargetTextureStorageEXT
// GLAPI void APIENTRY glUniformBufferEXT (GLuint program, GLint location,
// GLuint buffer);
#define GLUniformBufferEXT OpenGLLoadercontext->glUniformBufferEXT
// GLAPI GLint APIENTRY glGetUniformBufferSizeEXT (GLuint program, GLint
// location);
#define GLGetUniformBufferSizeEXT OpenGLLoadercontext->glGetUniformBufferSizeEXT
// GLAPI GLintptr APIENTRY glGetUniformOffsetEXT (GLuint program, GLint
// location);
#define GLGetUniformOffsetEXT OpenGLLoadercontext->glGetUniformOffsetEXT
// GLAPI void APIENTRY glBlendColorEXT (GLfloat red, GLfloat green, GLfloat
// blue, GLfloat alpha);
#define GLBlendColorEXT OpenGLLoadercontext->glBlendColorEXT
// GLAPI void APIENTRY glBlendEquationSeparateEXT (GLenum modeRGB, GLenum
// modeAlpha);
#define GLBlendEquationSeparateEXT                                             \
  OpenGLLoadercontext->glBlendEquationSeparateEXT
// GLAPI void APIENTRY glBlendFuncSeparateEXT (GLenum sfactorRGB, GLenum
// dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
#define GLBlendFuncSeparateEXT OpenGLLoadercontext->glBlendFuncSeparateEXT
// GLAPI void APIENTRY glBlendEquationEXT (GLenum mode);
#define GLBlendEquationEXT OpenGLLoadercontext->glBlendEquationEXT
// GLAPI void APIENTRY glColorSubTableEXT (GLenum target, GLsizei start, GLsizei
// count, GLenum format, GLenum type, const void *data);
#define GLColorSubTableEXT OpenGLLoadercontext->glColorSubTableEXT
// GLAPI void APIENTRY glCopyColorSubTableEXT (GLenum target, GLsizei start,
// GLint x, GLint y, GLsizei width);
#define GLCopyColorSubTableEXT OpenGLLoadercontext->glCopyColorSubTableEXT
// GLAPI void APIENTRY glLockArraysEXT (GLint first, GLsizei count);
#define GLLockArraysEXT OpenGLLoadercontext->glLockArraysEXT
// GLAPI void APIENTRY glUnlockArraysEXT (void);
#define GLUnlockArraysEXT OpenGLLoadercontext->glUnlockArraysEXT
// GLAPI void APIENTRY glConvolutionFilter1DEXT (GLenum target, GLenum
// internalformat, GLsizei width, GLenum format, GLenum type, const void
// *image);
#define GLConvolutionFilter1DEXT OpenGLLoadercontext->glConvolutionFilter1DEXT
// GLAPI void APIENTRY glConvolutionFilter2DEXT (GLenum target, GLenum
// internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type,
// const void *image);
#define GLConvolutionFilter2DEXT OpenGLLoadercontext->glConvolutionFilter2DEXT
// GLAPI void APIENTRY glConvolutionParameterfEXT (GLenum target, GLenum pname,
// GLfloat params);
#define GLConvolutionParameterfEXT                                             \
  OpenGLLoadercontext->glConvolutionParameterfEXT
// GLAPI void APIENTRY glConvolutionParameterfvEXT (GLenum target, GLenum pname,
// const GLfloat *params);
#define GLConvolutionParameterfvEXT                                            \
  OpenGLLoadercontext->glConvolutionParameterfvEXT
// GLAPI void APIENTRY glConvolutionParameteriEXT (GLenum target, GLenum pname,
// GLint params);
#define GLConvolutionParameteriEXT                                             \
  OpenGLLoadercontext->glConvolutionParameteriEXT
// GLAPI void APIENTRY glConvolutionParameterivEXT (GLenum target, GLenum pname,
// const GLint *params);
#define GLConvolutionParameterivEXT                                            \
  OpenGLLoadercontext->glConvolutionParameterivEXT
// GLAPI void APIENTRY glCopyConvolutionFilter1DEXT (GLenum target, GLenum
// internalformat, GLint x, GLint y, GLsizei width);
#define GLCopyConvolutionFilter1DEXT                                           \
  OpenGLLoadercontext->glCopyConvolutionFilter1DEXT
// GLAPI void APIENTRY glCopyConvolutionFilter2DEXT (GLenum target, GLenum
// internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
#define GLCopyConvolutionFilter2DEXT                                           \
  OpenGLLoadercontext->glCopyConvolutionFilter2DEXT
// GLAPI void APIENTRY glGetConvolutionFilterEXT (GLenum target, GLenum format,
// GLenum type, void *image);
#define GLGetConvolutionFilterEXT OpenGLLoadercontext->glGetConvolutionFilterEXT
// GLAPI void APIENTRY glGetConvolutionParameterfvEXT (GLenum target, GLenum
// pname, GLfloat *params);
#define GLGetConvolutionParameterfvEXT                                         \
  OpenGLLoadercontext->glGetConvolutionParameterfvEXT
// GLAPI void APIENTRY glGetConvolutionParameterivEXT (GLenum target, GLenum
// pname, GLint *params);
#define GLGetConvolutionParameterivEXT                                         \
  OpenGLLoadercontext->glGetConvolutionParameterivEXT
// GLAPI void APIENTRY glGetSeparableFilterEXT (GLenum target, GLenum format,
// GLenum type, void *row, void *column, void *span);
#define GLGetSeparableFilterEXT OpenGLLoadercontext->glGetSeparableFilterEXT
// GLAPI void APIENTRY glSeparableFilter2DEXT (GLenum target, GLenum
// internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type,
// const void *row, const void *column);
#define GLSeparableFilter2DEXT OpenGLLoadercontext->glSeparableFilter2DEXT
// GLAPI void APIENTRY glTangent3bEXT (GLbyte tx, GLbyte ty, GLbyte tz);
#define GLTangent3bEXT OpenGLLoadercontext->glTangent3bEXT
// GLAPI void APIENTRY glTangent3bvEXT (const GLbyte *v);
#define GLTangent3bvEXT OpenGLLoadercontext->glTangent3bvEXT
// GLAPI void APIENTRY glTangent3dEXT (GLdouble tx, GLdouble ty, GLdouble tz);
#define GLTangent3dEXT OpenGLLoadercontext->glTangent3dEXT
// GLAPI void APIENTRY glTangent3dvEXT (const GLdouble *v);
#define GLTangent3dvEXT OpenGLLoadercontext->glTangent3dvEXT
// GLAPI void APIENTRY glTangent3fEXT (GLfloat tx, GLfloat ty, GLfloat tz);
#define GLTangent3fEXT OpenGLLoadercontext->glTangent3fEXT
// GLAPI void APIENTRY glTangent3fvEXT (const GLfloat *v);
#define GLTangent3fvEXT OpenGLLoadercontext->glTangent3fvEXT
// GLAPI void APIENTRY glTangent3iEXT (GLint tx, GLint ty, GLint tz);
#define GLTangent3iEXT OpenGLLoadercontext->glTangent3iEXT
// GLAPI void APIENTRY glTangent3ivEXT (const GLint *v);
#define GLTangent3ivEXT OpenGLLoadercontext->glTangent3ivEXT
// GLAPI void APIENTRY glTangent3sEXT (GLshort tx, GLshort ty, GLshort tz);
#define GLTangent3sEXT OpenGLLoadercontext->glTangent3sEXT
// GLAPI void APIENTRY glTangent3svEXT (const GLshort *v);
#define GLTangent3svEXT OpenGLLoadercontext->glTangent3svEXT
// GLAPI void APIENTRY glBinormal3bEXT (GLbyte bx, GLbyte by, GLbyte bz);
#define GLBinormal3bEXT OpenGLLoadercontext->glBinormal3bEXT
// GLAPI void APIENTRY glBinormal3bvEXT (const GLbyte *v);
#define GLBinormal3bvEXT OpenGLLoadercontext->glBinormal3bvEXT
// GLAPI void APIENTRY glBinormal3dEXT (GLdouble bx, GLdouble by, GLdouble bz);
#define GLBinormal3dEXT OpenGLLoadercontext->glBinormal3dEXT
// GLAPI void APIENTRY glBinormal3dvEXT (const GLdouble *v);
#define GLBinormal3dvEXT OpenGLLoadercontext->glBinormal3dvEXT
// GLAPI void APIENTRY glBinormal3fEXT (GLfloat bx, GLfloat by, GLfloat bz);
#define GLBinormal3fEXT OpenGLLoadercontext->glBinormal3fEXT
// GLAPI void APIENTRY glBinormal3fvEXT (const GLfloat *v);
#define GLBinormal3fvEXT OpenGLLoadercontext->glBinormal3fvEXT
// GLAPI void APIENTRY glBinormal3iEXT (GLint bx, GLint by, GLint bz);
#define GLBinormal3iEXT OpenGLLoadercontext->glBinormal3iEXT
// GLAPI void APIENTRY glBinormal3ivEXT (const GLint *v);
#define GLBinormal3ivEXT OpenGLLoadercontext->glBinormal3ivEXT
// GLAPI void APIENTRY glBinormal3sEXT (GLshort bx, GLshort by, GLshort bz);
#define GLBinormal3sEXT OpenGLLoadercontext->glBinormal3sEXT
// GLAPI void APIENTRY glBinormal3svEXT (const GLshort *v);
#define GLBinormal3svEXT OpenGLLoadercontext->glBinormal3svEXT
// GLAPI void APIENTRY glTangentPointerEXT (GLenum type, GLsizei stride, const
// void *pointer);
#define GLTangentPointerEXT OpenGLLoadercontext->glTangentPointerEXT
// GLAPI void APIENTRY glBinormalPointerEXT (GLenum type, GLsizei stride, const
// void *pointer);
#define GLBinormalPointerEXT OpenGLLoadercontext->glBinormalPointerEXT
// GLAPI void APIENTRY glCopyTexImage1DEXT (GLenum target, GLint level, GLenum
// internalformat, GLint x, GLint y, GLsizei width, GLint border);
#define GLCopyTexImage1DEXT OpenGLLoadercontext->glCopyTexImage1DEXT
// GLAPI void APIENTRY glCopyTexImage2DEXT (GLenum target, GLint level, GLenum
// internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint
// border);
#define GLCopyTexImage2DEXT OpenGLLoadercontext->glCopyTexImage2DEXT
// GLAPI void APIENTRY glCopyTexSubImage1DEXT (GLenum target, GLint level, GLint
// xoffset, GLint x, GLint y, GLsizei width);
#define GLCopyTexSubImage1DEXT OpenGLLoadercontext->glCopyTexSubImage1DEXT
// GLAPI void APIENTRY glCopyTexSubImage2DEXT (GLenum target, GLint level, GLint
// xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
#define GLCopyTexSubImage2DEXT OpenGLLoadercontext->glCopyTexSubImage2DEXT
// GLAPI void APIENTRY glCopyTexSubImage3DEXT (GLenum target, GLint level, GLint
// xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width,
// GLsizei height);
#define GLCopyTexSubImage3DEXT OpenGLLoadercontext->glCopyTexSubImage3DEXT
// GLAPI void APIENTRY glCullParameterdvEXT (GLenum pname, GLdouble *params);
#define GLCullParameterdvEXT OpenGLLoadercontext->glCullParameterdvEXT
// GLAPI void APIENTRY glCullParameterfvEXT (GLenum pname, GLfloat *params);
#define GLCullParameterfvEXT OpenGLLoadercontext->glCullParameterfvEXT
// GLAPI void APIENTRY glLabelObjectEXT (GLenum type, GLuint object, GLsizei
// length, const GLchar *label);
#define GLLabelObjectEXT OpenGLLoadercontext->glLabelObjectEXT
// GLAPI void APIENTRY glGetObjectLabelEXT (GLenum type, GLuint object, GLsizei
// bufSize, GLsizei *length, GLchar *label);
#define GLGetObjectLabelEXT OpenGLLoadercontext->glGetObjectLabelEXT
// GLAPI void APIENTRY glInsertEventMarkerEXT (GLsizei length, const GLchar
// *marker);
#define GLInsertEventMarkerEXT OpenGLLoadercontext->glInsertEventMarkerEXT
// GLAPI void APIENTRY glPushGroupMarkerEXT (GLsizei length, const GLchar
// *marker);
#define GLPushGroupMarkerEXT OpenGLLoadercontext->glPushGroupMarkerEXT
// GLAPI void APIENTRY glPopGroupMarkerEXT (void);
#define GLPopGroupMarkerEXT OpenGLLoadercontext->glPopGroupMarkerEXT
// GLAPI void APIENTRY glDepthBoundsEXT (GLclampd zmin, GLclampd zmax);
#define GLDepthBoundsEXT OpenGLLoadercontext->glDepthBoundsEXT
// GLAPI void APIENTRY glMatrixLoadfEXT (GLenum mode, const GLfloat *m);
#define GLMatrixLoadfEXT OpenGLLoadercontext->glMatrixLoadfEXT
// GLAPI void APIENTRY glMatrixLoaddEXT (GLenum mode, const GLdouble *m);
#define GLMatrixLoaddEXT OpenGLLoadercontext->glMatrixLoaddEXT
// GLAPI void APIENTRY glMatrixMultfEXT (GLenum mode, const GLfloat *m);
#define GLMatrixMultfEXT OpenGLLoadercontext->glMatrixMultfEXT
// GLAPI void APIENTRY glMatrixMultdEXT (GLenum mode, const GLdouble *m);
#define GLMatrixMultdEXT OpenGLLoadercontext->glMatrixMultdEXT
// GLAPI void APIENTRY glMatrixLoadIdentityEXT (GLenum mode);
#define GLMatrixLoadIdentityEXT OpenGLLoadercontext->glMatrixLoadIdentityEXT
// GLAPI void APIENTRY glMatrixRotatefEXT (GLenum mode, GLfloat angle, GLfloat
// x, GLfloat y, GLfloat z);
#define GLMatrixRotatefEXT OpenGLLoadercontext->glMatrixRotatefEXT
// GLAPI void APIENTRY glMatrixRotatedEXT (GLenum mode, GLdouble angle, GLdouble
// x, GLdouble y, GLdouble z);
#define GLMatrixRotatedEXT OpenGLLoadercontext->glMatrixRotatedEXT
// GLAPI void APIENTRY glMatrixScalefEXT (GLenum mode, GLfloat x, GLfloat y,
// GLfloat z);
#define GLMatrixScalefEXT OpenGLLoadercontext->glMatrixScalefEXT
// GLAPI void APIENTRY glMatrixScaledEXT (GLenum mode, GLdouble x, GLdouble y,
// GLdouble z);
#define GLMatrixScaledEXT OpenGLLoadercontext->glMatrixScaledEXT
// GLAPI void APIENTRY glMatrixTranslatefEXT (GLenum mode, GLfloat x, GLfloat y,
// GLfloat z);
#define GLMatrixTranslatefEXT OpenGLLoadercontext->glMatrixTranslatefEXT
// GLAPI void APIENTRY glMatrixTranslatedEXT (GLenum mode, GLdouble x, GLdouble
// y, GLdouble z);
#define GLMatrixTranslatedEXT OpenGLLoadercontext->glMatrixTranslatedEXT
// GLAPI void APIENTRY glMatrixFrustumEXT (GLenum mode, GLdouble left, GLdouble
// right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
#define GLMatrixFrustumEXT OpenGLLoadercontext->glMatrixFrustumEXT
// GLAPI void APIENTRY glMatrixOrthoEXT (GLenum mode, GLdouble left, GLdouble
// right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
#define GLMatrixOrthoEXT OpenGLLoadercontext->glMatrixOrthoEXT
// GLAPI void APIENTRY glMatrixPopEXT (GLenum mode);
#define GLMatrixPopEXT OpenGLLoadercontext->glMatrixPopEXT
// GLAPI void APIENTRY glMatrixPushEXT (GLenum mode);
#define GLMatrixPushEXT OpenGLLoadercontext->glMatrixPushEXT
// GLAPI void APIENTRY glClientAttribDefaultEXT (GLbitfield mask);
#define GLClientAttribDefaultEXT OpenGLLoadercontext->glClientAttribDefaultEXT
// GLAPI void APIENTRY glPushClientAttribDefaultEXT (GLbitfield mask);
#define GLPushClientAttribDefaultEXT                                           \
  OpenGLLoadercontext->glPushClientAttribDefaultEXT
// GLAPI void APIENTRY glTextureParameterfEXT (GLuint texture, GLenum target,
// GLenum pname, GLfloat param);
#define GLTextureParameterfEXT OpenGLLoadercontext->glTextureParameterfEXT
// GLAPI void APIENTRY glTextureParameterfvEXT (GLuint texture, GLenum target,
// GLenum pname, const GLfloat *params);
#define GLTextureParameterfvEXT OpenGLLoadercontext->glTextureParameterfvEXT
// GLAPI void APIENTRY glTextureParameteriEXT (GLuint texture, GLenum target,
// GLenum pname, GLint param);
#define GLTextureParameteriEXT OpenGLLoadercontext->glTextureParameteriEXT
// GLAPI void APIENTRY glTextureParameterivEXT (GLuint texture, GLenum target,
// GLenum pname, const GLint *params);
#define GLTextureParameterivEXT OpenGLLoadercontext->glTextureParameterivEXT
// GLAPI void APIENTRY glTextureImage1DEXT (GLuint texture, GLenum target, GLint
// level, GLint internalformat, GLsizei width, GLint border, GLenum format,
// GLenum type, const void *pixels);
#define GLTextureImage1DEXT OpenGLLoadercontext->glTextureImage1DEXT
// GLAPI void APIENTRY glTextureImage2DEXT (GLuint texture, GLenum target, GLint
// level, GLint internalformat, GLsizei width, GLsizei height, GLint border,
// GLenum format, GLenum type, const void *pixels);
#define GLTextureImage2DEXT OpenGLLoadercontext->glTextureImage2DEXT
// GLAPI void APIENTRY glTextureSubImage1DEXT (GLuint texture, GLenum target,
// GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const
// void *pixels);
#define GLTextureSubImage1DEXT OpenGLLoadercontext->glTextureSubImage1DEXT
// GLAPI void APIENTRY glTextureSubImage2DEXT (GLuint texture, GLenum target,
// GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height,
// GLenum format, GLenum type, const void *pixels);
#define GLTextureSubImage2DEXT OpenGLLoadercontext->glTextureSubImage2DEXT
// GLAPI void APIENTRY glCopyTextureImage1DEXT (GLuint texture, GLenum target,
// GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint
// border);
#define GLCopyTextureImage1DEXT OpenGLLoadercontext->glCopyTextureImage1DEXT
// GLAPI void APIENTRY glCopyTextureImage2DEXT (GLuint texture, GLenum target,
// GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei
// height, GLint border);
#define GLCopyTextureImage2DEXT OpenGLLoadercontext->glCopyTextureImage2DEXT
// GLAPI void APIENTRY glCopyTextureSubImage1DEXT (GLuint texture, GLenum
// target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
#define GLCopyTextureSubImage1DEXT                                             \
  OpenGLLoadercontext->glCopyTextureSubImage1DEXT
// GLAPI void APIENTRY glCopyTextureSubImage2DEXT (GLuint texture, GLenum
// target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei
// width, GLsizei height);
#define GLCopyTextureSubImage2DEXT                                             \
  OpenGLLoadercontext->glCopyTextureSubImage2DEXT
// GLAPI void APIENTRY glGetTextureImageEXT (GLuint texture, GLenum target,
// GLint level, GLenum format, GLenum type, void *pixels);
#define GLGetTextureImageEXT OpenGLLoadercontext->glGetTextureImageEXT
// GLAPI void APIENTRY glGetTextureParameterfvEXT (GLuint texture, GLenum
// target, GLenum pname, GLfloat *params);
#define GLGetTextureParameterfvEXT                                             \
  OpenGLLoadercontext->glGetTextureParameterfvEXT
// GLAPI void APIENTRY glGetTextureParameterivEXT (GLuint texture, GLenum
// target, GLenum pname, GLint *params);
#define GLGetTextureParameterivEXT                                             \
  OpenGLLoadercontext->glGetTextureParameterivEXT
// GLAPI void APIENTRY glGetTextureLevelParameterfvEXT (GLuint texture, GLenum
// target, GLint level, GLenum pname, GLfloat *params);
#define GLGetTextureLevelParameterfvEXT                                        \
  OpenGLLoadercontext->glGetTextureLevelParameterfvEXT
// GLAPI void APIENTRY glGetTextureLevelParameterivEXT (GLuint texture, GLenum
// target, GLint level, GLenum pname, GLint *params);
#define GLGetTextureLevelParameterivEXT                                        \
  OpenGLLoadercontext->glGetTextureLevelParameterivEXT
// GLAPI void APIENTRY glTextureImage3DEXT (GLuint texture, GLenum target, GLint
// level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth,
// GLint border, GLenum format, GLenum type, const void *pixels);
#define GLTextureImage3DEXT OpenGLLoadercontext->glTextureImage3DEXT
// GLAPI void APIENTRY glTextureSubImage3DEXT (GLuint texture, GLenum target,
// GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width,
// GLsizei height, GLsizei depth, GLenum format, GLenum type, const void
// *pixels);
#define GLTextureSubImage3DEXT OpenGLLoadercontext->glTextureSubImage3DEXT
// GLAPI void APIENTRY glCopyTextureSubImage3DEXT (GLuint texture, GLenum
// target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x,
// GLint y, GLsizei width, GLsizei height);
#define GLCopyTextureSubImage3DEXT                                             \
  OpenGLLoadercontext->glCopyTextureSubImage3DEXT
// GLAPI void APIENTRY glBindMultiTextureEXT (GLenum texunit, GLenum target,
// GLuint texture);
#define GLBindMultiTextureEXT OpenGLLoadercontext->glBindMultiTextureEXT
// GLAPI void APIENTRY glMultiTexCoordPointerEXT (GLenum texunit, GLint size,
// GLenum type, GLsizei stride, const void *pointer);
#define GLMultiTexCoordPointerEXT OpenGLLoadercontext->glMultiTexCoordPointerEXT
// GLAPI void APIENTRY glMultiTexEnvfEXT (GLenum texunit, GLenum target, GLenum
// pname, GLfloat param);
#define GLMultiTexEnvfEXT OpenGLLoadercontext->glMultiTexEnvfEXT
// GLAPI void APIENTRY glMultiTexEnvfvEXT (GLenum texunit, GLenum target, GLenum
// pname, const GLfloat *params);
#define GLMultiTexEnvfvEXT OpenGLLoadercontext->glMultiTexEnvfvEXT
// GLAPI void APIENTRY glMultiTexEnviEXT (GLenum texunit, GLenum target, GLenum
// pname, GLint param);
#define GLMultiTexEnviEXT OpenGLLoadercontext->glMultiTexEnviEXT
// GLAPI void APIENTRY glMultiTexEnvivEXT (GLenum texunit, GLenum target, GLenum
// pname, const GLint *params);
#define GLMultiTexEnvivEXT OpenGLLoadercontext->glMultiTexEnvivEXT
// GLAPI void APIENTRY glMultiTexGendEXT (GLenum texunit, GLenum coord, GLenum
// pname, GLdouble param);
#define GLMultiTexGendEXT OpenGLLoadercontext->glMultiTexGendEXT
// GLAPI void APIENTRY glMultiTexGendvEXT (GLenum texunit, GLenum coord, GLenum
// pname, const GLdouble *params);
#define GLMultiTexGendvEXT OpenGLLoadercontext->glMultiTexGendvEXT
// GLAPI void APIENTRY glMultiTexGenfEXT (GLenum texunit, GLenum coord, GLenum
// pname, GLfloat param);
#define GLMultiTexGenfEXT OpenGLLoadercontext->glMultiTexGenfEXT
// GLAPI void APIENTRY glMultiTexGenfvEXT (GLenum texunit, GLenum coord, GLenum
// pname, const GLfloat *params);
#define GLMultiTexGenfvEXT OpenGLLoadercontext->glMultiTexGenfvEXT
// GLAPI void APIENTRY glMultiTexGeniEXT (GLenum texunit, GLenum coord, GLenum
// pname, GLint param);
#define GLMultiTexGeniEXT OpenGLLoadercontext->glMultiTexGeniEXT
// GLAPI void APIENTRY glMultiTexGenivEXT (GLenum texunit, GLenum coord, GLenum
// pname, const GLint *params);
#define GLMultiTexGenivEXT OpenGLLoadercontext->glMultiTexGenivEXT
// GLAPI void APIENTRY glGetMultiTexEnvfvEXT (GLenum texunit, GLenum target,
// GLenum pname, GLfloat *params);
#define GLGetMultiTexEnvfvEXT OpenGLLoadercontext->glGetMultiTexEnvfvEXT
// GLAPI void APIENTRY glGetMultiTexEnvivEXT (GLenum texunit, GLenum target,
// GLenum pname, GLint *params);
#define GLGetMultiTexEnvivEXT OpenGLLoadercontext->glGetMultiTexEnvivEXT
// GLAPI void APIENTRY glGetMultiTexGendvEXT (GLenum texunit, GLenum coord,
// GLenum pname, GLdouble *params);
#define GLGetMultiTexGendvEXT OpenGLLoadercontext->glGetMultiTexGendvEXT
// GLAPI void APIENTRY glGetMultiTexGenfvEXT (GLenum texunit, GLenum coord,
// GLenum pname, GLfloat *params);
#define GLGetMultiTexGenfvEXT OpenGLLoadercontext->glGetMultiTexGenfvEXT
// GLAPI void APIENTRY glGetMultiTexGenivEXT (GLenum texunit, GLenum coord,
// GLenum pname, GLint *params);
#define GLGetMultiTexGenivEXT OpenGLLoadercontext->glGetMultiTexGenivEXT
// GLAPI void APIENTRY glMultiTexParameteriEXT (GLenum texunit, GLenum target,
// GLenum pname, GLint param);
#define GLMultiTexParameteriEXT OpenGLLoadercontext->glMultiTexParameteriEXT
// GLAPI void APIENTRY glMultiTexParameterivEXT (GLenum texunit, GLenum target,
// GLenum pname, const GLint *params);
#define GLMultiTexParameterivEXT OpenGLLoadercontext->glMultiTexParameterivEXT
// GLAPI void APIENTRY glMultiTexParameterfEXT (GLenum texunit, GLenum target,
// GLenum pname, GLfloat param);
#define GLMultiTexParameterfEXT OpenGLLoadercontext->glMultiTexParameterfEXT
// GLAPI void APIENTRY glMultiTexParameterfvEXT (GLenum texunit, GLenum target,
// GLenum pname, const GLfloat *params);
#define GLMultiTexParameterfvEXT OpenGLLoadercontext->glMultiTexParameterfvEXT
// GLAPI void APIENTRY glMultiTexImage1DEXT (GLenum texunit, GLenum target,
// GLint level, GLint internalformat, GLsizei width, GLint border, GLenum
// format, GLenum type, const void *pixels);
#define GLMultiTexImage1DEXT OpenGLLoadercontext->glMultiTexImage1DEXT
// GLAPI void APIENTRY glMultiTexImage2DEXT (GLenum texunit, GLenum target,
// GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint
// border, GLenum format, GLenum type, const void *pixels);
#define GLMultiTexImage2DEXT OpenGLLoadercontext->glMultiTexImage2DEXT
// GLAPI void APIENTRY glMultiTexSubImage1DEXT (GLenum texunit, GLenum target,
// GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const
// void *pixels);
#define GLMultiTexSubImage1DEXT OpenGLLoadercontext->glMultiTexSubImage1DEXT
// GLAPI void APIENTRY glMultiTexSubImage2DEXT (GLenum texunit, GLenum target,
// GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height,
// GLenum format, GLenum type, const void *pixels);
#define GLMultiTexSubImage2DEXT OpenGLLoadercontext->glMultiTexSubImage2DEXT
// GLAPI void APIENTRY glCopyMultiTexImage1DEXT (GLenum texunit, GLenum target,
// GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint
// border);
#define GLCopyMultiTexImage1DEXT OpenGLLoadercontext->glCopyMultiTexImage1DEXT
// GLAPI void APIENTRY glCopyMultiTexImage2DEXT (GLenum texunit, GLenum target,
// GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei
// height, GLint border);
#define GLCopyMultiTexImage2DEXT OpenGLLoadercontext->glCopyMultiTexImage2DEXT
// GLAPI void APIENTRY glCopyMultiTexSubImage1DEXT (GLenum texunit, GLenum
// target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
#define GLCopyMultiTexSubImage1DEXT                                            \
  OpenGLLoadercontext->glCopyMultiTexSubImage1DEXT
// GLAPI void APIENTRY glCopyMultiTexSubImage2DEXT (GLenum texunit, GLenum
// target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei
// width, GLsizei height);
#define GLCopyMultiTexSubImage2DEXT                                            \
  OpenGLLoadercontext->glCopyMultiTexSubImage2DEXT
// GLAPI void APIENTRY glGetMultiTexImageEXT (GLenum texunit, GLenum target,
// GLint level, GLenum format, GLenum type, void *pixels);
#define GLGetMultiTexImageEXT OpenGLLoadercontext->glGetMultiTexImageEXT
// GLAPI void APIENTRY glGetMultiTexParameterfvEXT (GLenum texunit, GLenum
// target, GLenum pname, GLfloat *params);
#define GLGetMultiTexParameterfvEXT                                            \
  OpenGLLoadercontext->glGetMultiTexParameterfvEXT
// GLAPI void APIENTRY glGetMultiTexParameterivEXT (GLenum texunit, GLenum
// target, GLenum pname, GLint *params);
#define GLGetMultiTexParameterivEXT                                            \
  OpenGLLoadercontext->glGetMultiTexParameterivEXT
// GLAPI void APIENTRY glGetMultiTexLevelParameterfvEXT (GLenum texunit, GLenum
// target, GLint level, GLenum pname, GLfloat *params);
#define GLGetMultiTexLevelParameterfvEXT                                       \
  OpenGLLoadercontext->glGetMultiTexLevelParameterfvEXT
// GLAPI void APIENTRY glGetMultiTexLevelParameterivEXT (GLenum texunit, GLenum
// target, GLint level, GLenum pname, GLint *params);
#define GLGetMultiTexLevelParameterivEXT                                       \
  OpenGLLoadercontext->glGetMultiTexLevelParameterivEXT
// GLAPI void APIENTRY glMultiTexImage3DEXT (GLenum texunit, GLenum target,
// GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei
// depth, GLint border, GLenum format, GLenum type, const void *pixels);
#define GLMultiTexImage3DEXT OpenGLLoadercontext->glMultiTexImage3DEXT
// GLAPI void APIENTRY glMultiTexSubImage3DEXT (GLenum texunit, GLenum target,
// GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width,
// GLsizei height, GLsizei depth, GLenum format, GLenum type, const void
// *pixels);
#define GLMultiTexSubImage3DEXT OpenGLLoadercontext->glMultiTexSubImage3DEXT
// GLAPI void APIENTRY glCopyMultiTexSubImage3DEXT (GLenum texunit, GLenum
// target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x,
// GLint y, GLsizei width, GLsizei height);
#define GLCopyMultiTexSubImage3DEXT                                            \
  OpenGLLoadercontext->glCopyMultiTexSubImage3DEXT
// GLAPI void APIENTRY glEnableClientStateIndexedEXT (GLenum array, GLuint
// index);
#define GLEnableClientStateIndexedEXT                                          \
  OpenGLLoadercontext->glEnableClientStateIndexedEXT
// GLAPI void APIENTRY glDisableClientStateIndexedEXT (GLenum array, GLuint
// index);
#define GLDisableClientStateIndexedEXT                                         \
  OpenGLLoadercontext->glDisableClientStateIndexedEXT
// GLAPI void APIENTRY glGetFloatIndexedvEXT (GLenum target, GLuint index,
// GLfloat *data);
#define GLGetFloatIndexedvEXT OpenGLLoadercontext->glGetFloatIndexedvEXT
// GLAPI void APIENTRY glGetDoubleIndexedvEXT (GLenum target, GLuint index,
// GLdouble *data);
#define GLGetDoubleIndexedvEXT OpenGLLoadercontext->glGetDoubleIndexedvEXT
// GLAPI void APIENTRY glGetPointerIndexedvEXT (GLenum target, GLuint index,
// void **data);
#define GLGetPointerIndexedvEXT OpenGLLoadercontext->glGetPointerIndexedvEXT
// GLAPI void APIENTRY glEnableIndexedEXT (GLenum target, GLuint index);
#define GLEnableIndexedEXT OpenGLLoadercontext->glEnableIndexedEXT
// GLAPI void APIENTRY glDisableIndexedEXT (GLenum target, GLuint index);
#define GLDisableIndexedEXT OpenGLLoadercontext->glDisableIndexedEXT
// GLAPI GLboolean APIENTRY glIsEnabledIndexedEXT (GLenum target, GLuint index);
#define GLIsEnabledIndexedEXT OpenGLLoadercontext->glIsEnabledIndexedEXT
// GLAPI void APIENTRY glGetIntegerIndexedvEXT (GLenum target, GLuint index,
// GLint *data);
#define GLGetIntegerIndexedvEXT OpenGLLoadercontext->glGetIntegerIndexedvEXT
// GLAPI void APIENTRY glGetBooleanIndexedvEXT (GLenum target, GLuint index,
// GLboolean *data);
#define GLGetBooleanIndexedvEXT OpenGLLoadercontext->glGetBooleanIndexedvEXT
// GLAPI void APIENTRY glCompressedTextureImage3DEXT (GLuint texture, GLenum
// target, GLint level, GLenum internalformat, GLsizei width, GLsizei height,
// GLsizei depth, GLint border, GLsizei imageSize, const void *bits);
#define GLCompressedTextureImage3DEXT                                          \
  OpenGLLoadercontext->glCompressedTextureImage3DEXT
// GLAPI void APIENTRY glCompressedTextureImage2DEXT (GLuint texture, GLenum
// target, GLint level, GLenum internalformat, GLsizei width, GLsizei height,
// GLint border, GLsizei imageSize, const void *bits);
#define GLCompressedTextureImage2DEXT                                          \
  OpenGLLoadercontext->glCompressedTextureImage2DEXT
// GLAPI void APIENTRY glCompressedTextureImage1DEXT (GLuint texture, GLenum
// target, GLint level, GLenum internalformat, GLsizei width, GLint border,
// GLsizei imageSize, const void *bits);
#define GLCompressedTextureImage1DEXT                                          \
  OpenGLLoadercontext->glCompressedTextureImage1DEXT
// GLAPI void APIENTRY glCompressedTextureSubImage3DEXT (GLuint texture, GLenum
// target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei
// width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const
// void *bits);
#define GLCompressedTextureSubImage3DEXT                                       \
  OpenGLLoadercontext->glCompressedTextureSubImage3DEXT
// GLAPI void APIENTRY glCompressedTextureSubImage2DEXT (GLuint texture, GLenum
// target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei
// height, GLenum format, GLsizei imageSize, const void *bits);
#define GLCompressedTextureSubImage2DEXT                                       \
  OpenGLLoadercontext->glCompressedTextureSubImage2DEXT
// GLAPI void APIENTRY glCompressedTextureSubImage1DEXT (GLuint texture, GLenum
// target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei
// imageSize, const void *bits);
#define GLCompressedTextureSubImage1DEXT                                       \
  OpenGLLoadercontext->glCompressedTextureSubImage1DEXT
// GLAPI void APIENTRY glGetCompressedTextureImageEXT (GLuint texture, GLenum
// target, GLint lod, void *img);
#define GLGetCompressedTextureImageEXT                                         \
  OpenGLLoadercontext->glGetCompressedTextureImageEXT
// GLAPI void APIENTRY glCompressedMultiTexImage3DEXT (GLenum texunit, GLenum
// target, GLint level, GLenum internalformat, GLsizei width, GLsizei height,
// GLsizei depth, GLint border, GLsizei imageSize, const void *bits);
#define GLCompressedMultiTexImage3DEXT                                         \
  OpenGLLoadercontext->glCompressedMultiTexImage3DEXT
// GLAPI void APIENTRY glCompressedMultiTexImage2DEXT (GLenum texunit, GLenum
// target, GLint level, GLenum internalformat, GLsizei width, GLsizei height,
// GLint border, GLsizei imageSize, const void *bits);
#define GLCompressedMultiTexImage2DEXT                                         \
  OpenGLLoadercontext->glCompressedMultiTexImage2DEXT
// GLAPI void APIENTRY glCompressedMultiTexImage1DEXT (GLenum texunit, GLenum
// target, GLint level, GLenum internalformat, GLsizei width, GLint border,
// GLsizei imageSize, const void *bits);
#define GLCompressedMultiTexImage1DEXT                                         \
  OpenGLLoadercontext->glCompressedMultiTexImage1DEXT
// GLAPI void APIENTRY glCompressedMultiTexSubImage3DEXT (GLenum texunit, GLenum
// target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei
// width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const
// void *bits);
#define GLCompressedMultiTexSubImage3DEXT                                      \
  OpenGLLoadercontext->glCompressedMultiTexSubImage3DEXT
// GLAPI void APIENTRY glCompressedMultiTexSubImage2DEXT (GLenum texunit, GLenum
// target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei
// height, GLenum format, GLsizei imageSize, const void *bits);
#define GLCompressedMultiTexSubImage2DEXT                                      \
  OpenGLLoadercontext->glCompressedMultiTexSubImage2DEXT
// GLAPI void APIENTRY glCompressedMultiTexSubImage1DEXT (GLenum texunit, GLenum
// target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei
// imageSize, const void *bits);
#define GLCompressedMultiTexSubImage1DEXT                                      \
  OpenGLLoadercontext->glCompressedMultiTexSubImage1DEXT
// GLAPI void APIENTRY glGetCompressedMultiTexImageEXT (GLenum texunit, GLenum
// target, GLint lod, void *img);
#define GLGetCompressedMultiTexImageEXT                                        \
  OpenGLLoadercontext->glGetCompressedMultiTexImageEXT
// GLAPI void APIENTRY glMatrixLoadTransposefEXT (GLenum mode, const GLfloat
// *m);
#define GLMatrixLoadTransposefEXT OpenGLLoadercontext->glMatrixLoadTransposefEXT
// GLAPI void APIENTRY glMatrixLoadTransposedEXT (GLenum mode, const GLdouble
// *m);
#define GLMatrixLoadTransposedEXT OpenGLLoadercontext->glMatrixLoadTransposedEXT
// GLAPI void APIENTRY glMatrixMultTransposefEXT (GLenum mode, const GLfloat
// *m);
#define GLMatrixMultTransposefEXT OpenGLLoadercontext->glMatrixMultTransposefEXT
// GLAPI void APIENTRY glMatrixMultTransposedEXT (GLenum mode, const GLdouble
// *m);
#define GLMatrixMultTransposedEXT OpenGLLoadercontext->glMatrixMultTransposedEXT
// GLAPI void APIENTRY glNamedBufferDataEXT (GLuint buffer, GLsizeiptr size,
// const void *data, GLenum usage);
#define GLNamedBufferDataEXT OpenGLLoadercontext->glNamedBufferDataEXT
// GLAPI void APIENTRY glNamedBufferSubDataEXT (GLuint buffer, GLintptr offset,
// GLsizeiptr size, const void *data);
#define GLNamedBufferSubDataEXT OpenGLLoadercontext->glNamedBufferSubDataEXT
// GLAPI void *APIENTRY glMapNamedBufferEXT (GLuint buffer, GLenum access);
#define GLMapNamedBufferEXT OpenGLLoadercontext->glMapNamedBufferEXT
// GLAPI GLboolean APIENTRY glUnmapNamedBufferEXT (GLuint buffer);
#define GLUnmapNamedBufferEXT OpenGLLoadercontext->glUnmapNamedBufferEXT
// GLAPI void APIENTRY glGetNamedBufferParameterivEXT (GLuint buffer, GLenum
// pname, GLint *params);
#define GLGetNamedBufferParameterivEXT                                         \
  OpenGLLoadercontext->glGetNamedBufferParameterivEXT
// GLAPI void APIENTRY glGetNamedBufferPointervEXT (GLuint buffer, GLenum pname,
// void **params);
#define GLGetNamedBufferPointervEXT                                            \
  OpenGLLoadercontext->glGetNamedBufferPointervEXT
// GLAPI void APIENTRY glGetNamedBufferSubDataEXT (GLuint buffer, GLintptr
// offset, GLsizeiptr size, void *data);
#define GLGetNamedBufferSubDataEXT                                             \
  OpenGLLoadercontext->glGetNamedBufferSubDataEXT
// GLAPI void APIENTRY glProgramUniform1fEXT (GLuint program, GLint location,
// GLfloat v0);
#define GLProgramUniform1fEXT OpenGLLoadercontext->glProgramUniform1fEXT
// GLAPI void APIENTRY glProgramUniform2fEXT (GLuint program, GLint location,
// GLfloat v0, GLfloat v1);
#define GLProgramUniform2fEXT OpenGLLoadercontext->glProgramUniform2fEXT
// GLAPI void APIENTRY glProgramUniform3fEXT (GLuint program, GLint location,
// GLfloat v0, GLfloat v1, GLfloat v2);
#define GLProgramUniform3fEXT OpenGLLoadercontext->glProgramUniform3fEXT
// GLAPI void APIENTRY glProgramUniform4fEXT (GLuint program, GLint location,
// GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
#define GLProgramUniform4fEXT OpenGLLoadercontext->glProgramUniform4fEXT
// GLAPI void APIENTRY glProgramUniform1iEXT (GLuint program, GLint location,
// GLint v0);
#define GLProgramUniform1iEXT OpenGLLoadercontext->glProgramUniform1iEXT
// GLAPI void APIENTRY glProgramUniform2iEXT (GLuint program, GLint location,
// GLint v0, GLint v1);
#define GLProgramUniform2iEXT OpenGLLoadercontext->glProgramUniform2iEXT
// GLAPI void APIENTRY glProgramUniform3iEXT (GLuint program, GLint location,
// GLint v0, GLint v1, GLint v2);
#define GLProgramUniform3iEXT OpenGLLoadercontext->glProgramUniform3iEXT
// GLAPI void APIENTRY glProgramUniform4iEXT (GLuint program, GLint location,
// GLint v0, GLint v1, GLint v2, GLint v3);
#define GLProgramUniform4iEXT OpenGLLoadercontext->glProgramUniform4iEXT
// GLAPI void APIENTRY glProgramUniform1fvEXT (GLuint program, GLint location,
// GLsizei count, const GLfloat *value);
#define GLProgramUniform1fvEXT OpenGLLoadercontext->glProgramUniform1fvEXT
// GLAPI void APIENTRY glProgramUniform2fvEXT (GLuint program, GLint location,
// GLsizei count, const GLfloat *value);
#define GLProgramUniform2fvEXT OpenGLLoadercontext->glProgramUniform2fvEXT
// GLAPI void APIENTRY glProgramUniform3fvEXT (GLuint program, GLint location,
// GLsizei count, const GLfloat *value);
#define GLProgramUniform3fvEXT OpenGLLoadercontext->glProgramUniform3fvEXT
// GLAPI void APIENTRY glProgramUniform4fvEXT (GLuint program, GLint location,
// GLsizei count, const GLfloat *value);
#define GLProgramUniform4fvEXT OpenGLLoadercontext->glProgramUniform4fvEXT
// GLAPI void APIENTRY glProgramUniform1ivEXT (GLuint program, GLint location,
// GLsizei count, const GLint *value);
#define GLProgramUniform1ivEXT OpenGLLoadercontext->glProgramUniform1ivEXT
// GLAPI void APIENTRY glProgramUniform2ivEXT (GLuint program, GLint location,
// GLsizei count, const GLint *value);
#define GLProgramUniform2ivEXT OpenGLLoadercontext->glProgramUniform2ivEXT
// GLAPI void APIENTRY glProgramUniform3ivEXT (GLuint program, GLint location,
// GLsizei count, const GLint *value);
#define GLProgramUniform3ivEXT OpenGLLoadercontext->glProgramUniform3ivEXT
// GLAPI void APIENTRY glProgramUniform4ivEXT (GLuint program, GLint location,
// GLsizei count, const GLint *value);
#define GLProgramUniform4ivEXT OpenGLLoadercontext->glProgramUniform4ivEXT
// GLAPI void APIENTRY glProgramUniformMatrix2fvEXT (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix2fvEXT                                           \
  OpenGLLoadercontext->glProgramUniformMatrix2fvEXT
// GLAPI void APIENTRY glProgramUniformMatrix3fvEXT (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix3fvEXT                                           \
  OpenGLLoadercontext->glProgramUniformMatrix3fvEXT
// GLAPI void APIENTRY glProgramUniformMatrix4fvEXT (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix4fvEXT                                           \
  OpenGLLoadercontext->glProgramUniformMatrix4fvEXT
// GLAPI void APIENTRY glProgramUniformMatrix2x3fvEXT (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix2x3fvEXT                                         \
  OpenGLLoadercontext->glProgramUniformMatrix2x3fvEXT
// GLAPI void APIENTRY glProgramUniformMatrix3x2fvEXT (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix3x2fvEXT                                         \
  OpenGLLoadercontext->glProgramUniformMatrix3x2fvEXT
// GLAPI void APIENTRY glProgramUniformMatrix2x4fvEXT (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix2x4fvEXT                                         \
  OpenGLLoadercontext->glProgramUniformMatrix2x4fvEXT
// GLAPI void APIENTRY glProgramUniformMatrix4x2fvEXT (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix4x2fvEXT                                         \
  OpenGLLoadercontext->glProgramUniformMatrix4x2fvEXT
// GLAPI void APIENTRY glProgramUniformMatrix3x4fvEXT (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix3x4fvEXT                                         \
  OpenGLLoadercontext->glProgramUniformMatrix3x4fvEXT
// GLAPI void APIENTRY glProgramUniformMatrix4x3fvEXT (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix4x3fvEXT                                         \
  OpenGLLoadercontext->glProgramUniformMatrix4x3fvEXT
// GLAPI void APIENTRY glTextureBufferEXT (GLuint texture, GLenum target, GLenum
// internalformat, GLuint buffer);
#define GLTextureBufferEXT OpenGLLoadercontext->glTextureBufferEXT
// GLAPI void APIENTRY glMultiTexBufferEXT (GLenum texunit, GLenum target,
// GLenum internalformat, GLuint buffer);
#define GLMultiTexBufferEXT OpenGLLoadercontext->glMultiTexBufferEXT
// GLAPI void APIENTRY glTextureParameterIivEXT (GLuint texture, GLenum target,
// GLenum pname, const GLint *params);
#define GLTextureParameterIivEXT OpenGLLoadercontext->glTextureParameterIivEXT
// GLAPI void APIENTRY glTextureParameterIuivEXT (GLuint texture, GLenum target,
// GLenum pname, const GLuint *params);
#define GLTextureParameterIuivEXT OpenGLLoadercontext->glTextureParameterIuivEXT
// GLAPI void APIENTRY glGetTextureParameterIivEXT (GLuint texture, GLenum
// target, GLenum pname, GLint *params);
#define GLGetTextureParameterIivEXT                                            \
  OpenGLLoadercontext->glGetTextureParameterIivEXT
// GLAPI void APIENTRY glGetTextureParameterIuivEXT (GLuint texture, GLenum
// target, GLenum pname, GLuint *params);
#define GLGetTextureParameterIuivEXT                                           \
  OpenGLLoadercontext->glGetTextureParameterIuivEXT
// GLAPI void APIENTRY glMultiTexParameterIivEXT (GLenum texunit, GLenum target,
// GLenum pname, const GLint *params);
#define GLMultiTexParameterIivEXT OpenGLLoadercontext->glMultiTexParameterIivEXT
// GLAPI void APIENTRY glMultiTexParameterIuivEXT (GLenum texunit, GLenum
// target, GLenum pname, const GLuint *params);
#define GLMultiTexParameterIuivEXT                                             \
  OpenGLLoadercontext->glMultiTexParameterIuivEXT
// GLAPI void APIENTRY glGetMultiTexParameterIivEXT (GLenum texunit, GLenum
// target, GLenum pname, GLint *params);
#define GLGetMultiTexParameterIivEXT                                           \
  OpenGLLoadercontext->glGetMultiTexParameterIivEXT
// GLAPI void APIENTRY glGetMultiTexParameterIuivEXT (GLenum texunit, GLenum
// target, GLenum pname, GLuint *params);
#define GLGetMultiTexParameterIuivEXT                                          \
  OpenGLLoadercontext->glGetMultiTexParameterIuivEXT
// GLAPI void APIENTRY glProgramUniform1uiEXT (GLuint program, GLint location,
// GLuint v0);
#define GLProgramUniform1uiEXT OpenGLLoadercontext->glProgramUniform1uiEXT
// GLAPI void APIENTRY glProgramUniform2uiEXT (GLuint program, GLint location,
// GLuint v0, GLuint v1);
#define GLProgramUniform2uiEXT OpenGLLoadercontext->glProgramUniform2uiEXT
// GLAPI void APIENTRY glProgramUniform3uiEXT (GLuint program, GLint location,
// GLuint v0, GLuint v1, GLuint v2);
#define GLProgramUniform3uiEXT OpenGLLoadercontext->glProgramUniform3uiEXT
// GLAPI void APIENTRY glProgramUniform4uiEXT (GLuint program, GLint location,
// GLuint v0, GLuint v1, GLuint v2, GLuint v3);
#define GLProgramUniform4uiEXT OpenGLLoadercontext->glProgramUniform4uiEXT
// GLAPI void APIENTRY glProgramUniform1uivEXT (GLuint program, GLint location,
// GLsizei count, const GLuint *value);
#define GLProgramUniform1uivEXT OpenGLLoadercontext->glProgramUniform1uivEXT
// GLAPI void APIENTRY glProgramUniform2uivEXT (GLuint program, GLint location,
// GLsizei count, const GLuint *value);
#define GLProgramUniform2uivEXT OpenGLLoadercontext->glProgramUniform2uivEXT
// GLAPI void APIENTRY glProgramUniform3uivEXT (GLuint program, GLint location,
// GLsizei count, const GLuint *value);
#define GLProgramUniform3uivEXT OpenGLLoadercontext->glProgramUniform3uivEXT
// GLAPI void APIENTRY glProgramUniform4uivEXT (GLuint program, GLint location,
// GLsizei count, const GLuint *value);
#define GLProgramUniform4uivEXT OpenGLLoadercontext->glProgramUniform4uivEXT
// GLAPI void APIENTRY glNamedProgramLocalParameters4fvEXT (GLuint program,
// GLenum target, GLuint index, GLsizei count, const GLfloat *params);
#define GLNamedProgramLocalParameters4fvEXT                                    \
  OpenGLLoadercontext->glNamedProgramLocalParameters4fvEXT
// GLAPI void APIENTRY glNamedProgramLocalParameterI4iEXT (GLuint program,
// GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
#define GLNamedProgramLocalParameterI4iEXT                                     \
  OpenGLLoadercontext->glNamedProgramLocalParameterI4iEXT
// GLAPI void APIENTRY glNamedProgramLocalParameterI4ivEXT (GLuint program,
// GLenum target, GLuint index, const GLint *params);
#define GLNamedProgramLocalParameterI4ivEXT                                    \
  OpenGLLoadercontext->glNamedProgramLocalParameterI4ivEXT
// GLAPI void APIENTRY glNamedProgramLocalParametersI4ivEXT (GLuint program,
// GLenum target, GLuint index, GLsizei count, const GLint *params);
#define GLNamedProgramLocalParametersI4ivEXT                                   \
  OpenGLLoadercontext->glNamedProgramLocalParametersI4ivEXT
// GLAPI void APIENTRY glNamedProgramLocalParameterI4uiEXT (GLuint program,
// GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
#define GLNamedProgramLocalParameterI4uiEXT                                    \
  OpenGLLoadercontext->glNamedProgramLocalParameterI4uiEXT
// GLAPI void APIENTRY glNamedProgramLocalParameterI4uivEXT (GLuint program,
// GLenum target, GLuint index, const GLuint *params);
#define GLNamedProgramLocalParameterI4uivEXT                                   \
  OpenGLLoadercontext->glNamedProgramLocalParameterI4uivEXT
// GLAPI void APIENTRY glNamedProgramLocalParametersI4uivEXT (GLuint program,
// GLenum target, GLuint index, GLsizei count, const GLuint *params);
#define GLNamedProgramLocalParametersI4uivEXT                                  \
  OpenGLLoadercontext->glNamedProgramLocalParametersI4uivEXT
// GLAPI void APIENTRY glGetNamedProgramLocalParameterIivEXT (GLuint program,
// GLenum target, GLuint index, GLint *params);
#define GLGetNamedProgramLocalParameterIivEXT                                  \
  OpenGLLoadercontext->glGetNamedProgramLocalParameterIivEXT
// GLAPI void APIENTRY glGetNamedProgramLocalParameterIuivEXT (GLuint program,
// GLenum target, GLuint index, GLuint *params);
#define GLGetNamedProgramLocalParameterIuivEXT                                 \
  OpenGLLoadercontext->glGetNamedProgramLocalParameterIuivEXT
// GLAPI void APIENTRY glEnableClientStateiEXT (GLenum array, GLuint index);
#define GLEnableClientStateiEXT OpenGLLoadercontext->glEnableClientStateiEXT
// GLAPI void APIENTRY glDisableClientStateiEXT (GLenum array, GLuint index);
#define GLDisableClientStateiEXT OpenGLLoadercontext->glDisableClientStateiEXT
// GLAPI void APIENTRY glGetFloati_vEXT (GLenum pname, GLuint index, GLfloat
// *params);
#define GLGetFloati_vEXT OpenGLLoadercontext->glGetFloati_vEXT
// GLAPI void APIENTRY glGetDoublei_vEXT (GLenum pname, GLuint index, GLdouble
// *params);
#define GLGetDoublei_vEXT OpenGLLoadercontext->glGetDoublei_vEXT
// GLAPI void APIENTRY glGetPointeri_vEXT (GLenum pname, GLuint index, void
// **params);
#define GLGetPointeri_vEXT OpenGLLoadercontext->glGetPointeri_vEXT
// GLAPI void APIENTRY glNamedProgramStringEXT (GLuint program, GLenum target,
// GLenum format, GLsizei len, const void *string);
#define GLNamedProgramStringEXT OpenGLLoadercontext->glNamedProgramStringEXT
// GLAPI void APIENTRY glNamedProgramLocalParameter4dEXT (GLuint program, GLenum
// target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
#define GLNamedProgramLocalParameter4dEXT                                      \
  OpenGLLoadercontext->glNamedProgramLocalParameter4dEXT
// GLAPI void APIENTRY glNamedProgramLocalParameter4dvEXT (GLuint program,
// GLenum target, GLuint index, const GLdouble *params);
#define GLNamedProgramLocalParameter4dvEXT                                     \
  OpenGLLoadercontext->glNamedProgramLocalParameter4dvEXT
// GLAPI void APIENTRY glNamedProgramLocalParameter4fEXT (GLuint program, GLenum
// target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
#define GLNamedProgramLocalParameter4fEXT                                      \
  OpenGLLoadercontext->glNamedProgramLocalParameter4fEXT
// GLAPI void APIENTRY glNamedProgramLocalParameter4fvEXT (GLuint program,
// GLenum target, GLuint index, const GLfloat *params);
#define GLNamedProgramLocalParameter4fvEXT                                     \
  OpenGLLoadercontext->glNamedProgramLocalParameter4fvEXT
// GLAPI void APIENTRY glGetNamedProgramLocalParameterdvEXT (GLuint program,
// GLenum target, GLuint index, GLdouble *params);
#define GLGetNamedProgramLocalParameterdvEXT                                   \
  OpenGLLoadercontext->glGetNamedProgramLocalParameterdvEXT
// GLAPI void APIENTRY glGetNamedProgramLocalParameterfvEXT (GLuint program,
// GLenum target, GLuint index, GLfloat *params);
#define GLGetNamedProgramLocalParameterfvEXT                                   \
  OpenGLLoadercontext->glGetNamedProgramLocalParameterfvEXT
// GLAPI void APIENTRY glGetNamedProgramivEXT (GLuint program, GLenum target,
// GLenum pname, GLint *params);
#define GLGetNamedProgramivEXT OpenGLLoadercontext->glGetNamedProgramivEXT
// GLAPI void APIENTRY glGetNamedProgramStringEXT (GLuint program, GLenum
// target, GLenum pname, void *string);
#define GLGetNamedProgramStringEXT                                             \
  OpenGLLoadercontext->glGetNamedProgramStringEXT
// GLAPI void APIENTRY glNamedRenderbufferStorageEXT (GLuint renderbuffer,
// GLenum internalformat, GLsizei width, GLsizei height);
#define GLNamedRenderbufferStorageEXT                                          \
  OpenGLLoadercontext->glNamedRenderbufferStorageEXT
// GLAPI void APIENTRY glGetNamedRenderbufferParameterivEXT (GLuint
// renderbuffer, GLenum pname, GLint *params);
#define GLGetNamedRenderbufferParameterivEXT                                   \
  OpenGLLoadercontext->glGetNamedRenderbufferParameterivEXT
// GLAPI void APIENTRY glNamedRenderbufferStorageMultisampleEXT (GLuint
// renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei
// height);
#define GLNamedRenderbufferStorageMultisampleEXT                               \
  OpenGLLoadercontext->glNamedRenderbufferStorageMultisampleEXT
// GLAPI void APIENTRY glNamedRenderbufferStorageMultisampleCoverageEXT (GLuint
// renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum
// internalformat, GLsizei width, GLsizei height);
#define GLNamedRenderbufferStorageMultisampleCoverageEXT                       \
  OpenGLLoadercontext->glNamedRenderbufferStorageMultisampleCoverageEXT
// GLAPI GLenum APIENTRY glCheckNamedFramebufferStatusEXT (GLuint framebuffer,
// GLenum target);
#define GLCheckNamedFramebufferStatusEXT                                       \
  OpenGLLoadercontext->glCheckNamedFramebufferStatusEXT
// GLAPI void APIENTRY glNamedFramebufferTexture1DEXT (GLuint framebuffer,
// GLenum attachment, GLenum textarget, GLuint texture, GLint level);
#define GLNamedFramebufferTexture1DEXT                                         \
  OpenGLLoadercontext->glNamedFramebufferTexture1DEXT
// GLAPI void APIENTRY glNamedFramebufferTexture2DEXT (GLuint framebuffer,
// GLenum attachment, GLenum textarget, GLuint texture, GLint level);
#define GLNamedFramebufferTexture2DEXT                                         \
  OpenGLLoadercontext->glNamedFramebufferTexture2DEXT
// GLAPI void APIENTRY glNamedFramebufferTexture3DEXT (GLuint framebuffer,
// GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint
// zoffset);
#define GLNamedFramebufferTexture3DEXT                                         \
  OpenGLLoadercontext->glNamedFramebufferTexture3DEXT
// GLAPI void APIENTRY glNamedFramebufferRenderbufferEXT (GLuint framebuffer,
// GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
#define GLNamedFramebufferRenderbufferEXT                                      \
  OpenGLLoadercontext->glNamedFramebufferRenderbufferEXT
// GLAPI void APIENTRY glGetNamedFramebufferAttachmentParameterivEXT (GLuint
// framebuffer, GLenum attachment, GLenum pname, GLint *params);
#define GLGetNamedFramebufferAttachmentParameterivEXT                          \
  OpenGLLoadercontext->glGetNamedFramebufferAttachmentParameterivEXT
// GLAPI void APIENTRY glGenerateTextureMipmapEXT (GLuint texture, GLenum
// target);
#define GLGenerateTextureMipmapEXT                                             \
  OpenGLLoadercontext->glGenerateTextureMipmapEXT
// GLAPI void APIENTRY glGenerateMultiTexMipmapEXT (GLenum texunit, GLenum
// target);
#define GLGenerateMultiTexMipmapEXT                                            \
  OpenGLLoadercontext->glGenerateMultiTexMipmapEXT
// GLAPI void APIENTRY glFramebufferDrawBufferEXT (GLuint framebuffer, GLenum
// mode);
#define GLFramebufferDrawBufferEXT                                             \
  OpenGLLoadercontext->glFramebufferDrawBufferEXT
// GLAPI void APIENTRY glFramebufferDrawBuffersEXT (GLuint framebuffer, GLsizei
// n, const GLenum *bufs);
#define GLFramebufferDrawBuffersEXT                                            \
  OpenGLLoadercontext->glFramebufferDrawBuffersEXT
// GLAPI void APIENTRY glFramebufferReadBufferEXT (GLuint framebuffer, GLenum
// mode);
#define GLFramebufferReadBufferEXT                                             \
  OpenGLLoadercontext->glFramebufferReadBufferEXT
// GLAPI void APIENTRY glGetFramebufferParameterivEXT (GLuint framebuffer,
// GLenum pname, GLint *params);
#define GLGetFramebufferParameterivEXT                                         \
  OpenGLLoadercontext->glGetFramebufferParameterivEXT
// GLAPI void APIENTRY glNamedCopyBufferSubDataEXT (GLuint readBuffer, GLuint
// writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
#define GLNamedCopyBufferSubDataEXT                                            \
  OpenGLLoadercontext->glNamedCopyBufferSubDataEXT
// GLAPI void APIENTRY glNamedFramebufferTextureEXT (GLuint framebuffer, GLenum
// attachment, GLuint texture, GLint level);
#define GLNamedFramebufferTextureEXT                                           \
  OpenGLLoadercontext->glNamedFramebufferTextureEXT
// GLAPI void APIENTRY glNamedFramebufferTextureLayerEXT (GLuint framebuffer,
// GLenum attachment, GLuint texture, GLint level, GLint layer);
#define GLNamedFramebufferTextureLayerEXT                                      \
  OpenGLLoadercontext->glNamedFramebufferTextureLayerEXT
// GLAPI void APIENTRY glNamedFramebufferTextureFaceEXT (GLuint framebuffer,
// GLenum attachment, GLuint texture, GLint level, GLenum face);
#define GLNamedFramebufferTextureFaceEXT                                       \
  OpenGLLoadercontext->glNamedFramebufferTextureFaceEXT
// GLAPI void APIENTRY glTextureRenderbufferEXT (GLuint texture, GLenum target,
// GLuint renderbuffer);
#define GLTextureRenderbufferEXT OpenGLLoadercontext->glTextureRenderbufferEXT
// GLAPI void APIENTRY glMultiTexRenderbufferEXT (GLenum texunit, GLenum target,
// GLuint renderbuffer);
#define GLMultiTexRenderbufferEXT OpenGLLoadercontext->glMultiTexRenderbufferEXT
// GLAPI void APIENTRY glVertexArrayVertexOffsetEXT (GLuint vaobj, GLuint
// buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
#define GLVertexArrayVertexOffsetEXT                                           \
  OpenGLLoadercontext->glVertexArrayVertexOffsetEXT
// GLAPI void APIENTRY glVertexArrayColorOffsetEXT (GLuint vaobj, GLuint buffer,
// GLint size, GLenum type, GLsizei stride, GLintptr offset);
#define GLVertexArrayColorOffsetEXT                                            \
  OpenGLLoadercontext->glVertexArrayColorOffsetEXT
// GLAPI void APIENTRY glVertexArrayEdgeFlagOffsetEXT (GLuint vaobj, GLuint
// buffer, GLsizei stride, GLintptr offset);
#define GLVertexArrayEdgeFlagOffsetEXT                                         \
  OpenGLLoadercontext->glVertexArrayEdgeFlagOffsetEXT
// GLAPI void APIENTRY glVertexArrayIndexOffsetEXT (GLuint vaobj, GLuint buffer,
// GLenum type, GLsizei stride, GLintptr offset);
#define GLVertexArrayIndexOffsetEXT                                            \
  OpenGLLoadercontext->glVertexArrayIndexOffsetEXT
// GLAPI void APIENTRY glVertexArrayNormalOffsetEXT (GLuint vaobj, GLuint
// buffer, GLenum type, GLsizei stride, GLintptr offset);
#define GLVertexArrayNormalOffsetEXT                                           \
  OpenGLLoadercontext->glVertexArrayNormalOffsetEXT
// GLAPI void APIENTRY glVertexArrayTexCoordOffsetEXT (GLuint vaobj, GLuint
// buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
#define GLVertexArrayTexCoordOffsetEXT                                         \
  OpenGLLoadercontext->glVertexArrayTexCoordOffsetEXT
// GLAPI void APIENTRY glVertexArrayMultiTexCoordOffsetEXT (GLuint vaobj, GLuint
// buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr
// offset);
#define GLVertexArrayMultiTexCoordOffsetEXT                                    \
  OpenGLLoadercontext->glVertexArrayMultiTexCoordOffsetEXT
// GLAPI void APIENTRY glVertexArrayFogCoordOffsetEXT (GLuint vaobj, GLuint
// buffer, GLenum type, GLsizei stride, GLintptr offset);
#define GLVertexArrayFogCoordOffsetEXT                                         \
  OpenGLLoadercontext->glVertexArrayFogCoordOffsetEXT
// GLAPI void APIENTRY glVertexArraySecondaryColorOffsetEXT (GLuint vaobj,
// GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
#define GLVertexArraySecondaryColorOffsetEXT                                   \
  OpenGLLoadercontext->glVertexArraySecondaryColorOffsetEXT
// GLAPI void APIENTRY glVertexArrayVertexAttribOffsetEXT (GLuint vaobj, GLuint
// buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei
// stride, GLintptr offset);
#define GLVertexArrayVertexAttribOffsetEXT                                     \
  OpenGLLoadercontext->glVertexArrayVertexAttribOffsetEXT
// GLAPI void APIENTRY glVertexArrayVertexAttribIOffsetEXT (GLuint vaobj, GLuint
// buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr
// offset);
#define GLVertexArrayVertexAttribIOffsetEXT                                    \
  OpenGLLoadercontext->glVertexArrayVertexAttribIOffsetEXT
// GLAPI void APIENTRY glEnableVertexArrayEXT (GLuint vaobj, GLenum array);
#define GLEnableVertexArrayEXT OpenGLLoadercontext->glEnableVertexArrayEXT
// GLAPI void APIENTRY glDisableVertexArrayEXT (GLuint vaobj, GLenum array);
#define GLDisableVertexArrayEXT OpenGLLoadercontext->glDisableVertexArrayEXT
// GLAPI void APIENTRY glEnableVertexArrayAttribEXT (GLuint vaobj, GLuint
// index);
#define GLEnableVertexArrayAttribEXT                                           \
  OpenGLLoadercontext->glEnableVertexArrayAttribEXT
// GLAPI void APIENTRY glDisableVertexArrayAttribEXT (GLuint vaobj, GLuint
// index);
#define GLDisableVertexArrayAttribEXT                                          \
  OpenGLLoadercontext->glDisableVertexArrayAttribEXT
// GLAPI void APIENTRY glGetVertexArrayIntegervEXT (GLuint vaobj, GLenum pname,
// GLint *param);
#define GLGetVertexArrayIntegervEXT                                            \
  OpenGLLoadercontext->glGetVertexArrayIntegervEXT
// GLAPI void APIENTRY glGetVertexArrayPointervEXT (GLuint vaobj, GLenum pname,
// void **param);
#define GLGetVertexArrayPointervEXT                                            \
  OpenGLLoadercontext->glGetVertexArrayPointervEXT
// GLAPI void APIENTRY glGetVertexArrayIntegeri_vEXT (GLuint vaobj, GLuint
// index, GLenum pname, GLint *param);
#define GLGetVertexArrayIntegeri_vEXT                                          \
  OpenGLLoadercontext->glGetVertexArrayIntegeri_vEXT
// GLAPI void APIENTRY glGetVertexArrayPointeri_vEXT (GLuint vaobj, GLuint
// index, GLenum pname, void **param);
#define GLGetVertexArrayPointeri_vEXT                                          \
  OpenGLLoadercontext->glGetVertexArrayPointeri_vEXT
// GLAPI void *APIENTRY glMapNamedBufferRangeEXT (GLuint buffer, GLintptr
// offset, GLsizeiptr length, GLbitfield access);
#define GLMapNamedBufferRangeEXT OpenGLLoadercontext->glMapNamedBufferRangeEXT
// GLAPI void APIENTRY glFlushMappedNamedBufferRangeEXT (GLuint buffer, GLintptr
// offset, GLsizeiptr length);
#define GLFlushMappedNamedBufferRangeEXT                                       \
  OpenGLLoadercontext->glFlushMappedNamedBufferRangeEXT
// GLAPI void APIENTRY glNamedBufferStorageEXT (GLuint buffer, GLsizeiptr size,
// const void *data, GLbitfield flags);
#define GLNamedBufferStorageEXT OpenGLLoadercontext->glNamedBufferStorageEXT
// GLAPI void APIENTRY glClearNamedBufferDataEXT (GLuint buffer, GLenum
// internalformat, GLenum format, GLenum type, const void *data);
#define GLClearNamedBufferDataEXT OpenGLLoadercontext->glClearNamedBufferDataEXT
// GLAPI void APIENTRY glClearNamedBufferSubDataEXT (GLuint buffer, GLenum
// internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum
// type, const void *data);
#define GLClearNamedBufferSubDataEXT                                           \
  OpenGLLoadercontext->glClearNamedBufferSubDataEXT
// GLAPI void APIENTRY glNamedFramebufferParameteriEXT (GLuint framebuffer,
// GLenum pname, GLint param);
#define GLNamedFramebufferParameteriEXT                                        \
  OpenGLLoadercontext->glNamedFramebufferParameteriEXT
// GLAPI void APIENTRY glGetNamedFramebufferParameterivEXT (GLuint framebuffer,
// GLenum pname, GLint *params);
#define GLGetNamedFramebufferParameterivEXT                                    \
  OpenGLLoadercontext->glGetNamedFramebufferParameterivEXT
// GLAPI void APIENTRY glProgramUniform1dEXT (GLuint program, GLint location,
// GLdouble x);
#define GLProgramUniform1dEXT OpenGLLoadercontext->glProgramUniform1dEXT
// GLAPI void APIENTRY glProgramUniform2dEXT (GLuint program, GLint location,
// GLdouble x, GLdouble y);
#define GLProgramUniform2dEXT OpenGLLoadercontext->glProgramUniform2dEXT
// GLAPI void APIENTRY glProgramUniform3dEXT (GLuint program, GLint location,
// GLdouble x, GLdouble y, GLdouble z);
#define GLProgramUniform3dEXT OpenGLLoadercontext->glProgramUniform3dEXT
// GLAPI void APIENTRY glProgramUniform4dEXT (GLuint program, GLint location,
// GLdouble x, GLdouble y, GLdouble z, GLdouble w);
#define GLProgramUniform4dEXT OpenGLLoadercontext->glProgramUniform4dEXT
// GLAPI void APIENTRY glProgramUniform1dvEXT (GLuint program, GLint location,
// GLsizei count, const GLdouble *value);
#define GLProgramUniform1dvEXT OpenGLLoadercontext->glProgramUniform1dvEXT
// GLAPI void APIENTRY glProgramUniform2dvEXT (GLuint program, GLint location,
// GLsizei count, const GLdouble *value);
#define GLProgramUniform2dvEXT OpenGLLoadercontext->glProgramUniform2dvEXT
// GLAPI void APIENTRY glProgramUniform3dvEXT (GLuint program, GLint location,
// GLsizei count, const GLdouble *value);
#define GLProgramUniform3dvEXT OpenGLLoadercontext->glProgramUniform3dvEXT
// GLAPI void APIENTRY glProgramUniform4dvEXT (GLuint program, GLint location,
// GLsizei count, const GLdouble *value);
#define GLProgramUniform4dvEXT OpenGLLoadercontext->glProgramUniform4dvEXT
// GLAPI void APIENTRY glProgramUniformMatrix2dvEXT (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLdouble *value);
#define GLProgramUniformMatrix2dvEXT                                           \
  OpenGLLoadercontext->glProgramUniformMatrix2dvEXT
// GLAPI void APIENTRY glProgramUniformMatrix3dvEXT (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLdouble *value);
#define GLProgramUniformMatrix3dvEXT                                           \
  OpenGLLoadercontext->glProgramUniformMatrix3dvEXT
// GLAPI void APIENTRY glProgramUniformMatrix4dvEXT (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLdouble *value);
#define GLProgramUniformMatrix4dvEXT                                           \
  OpenGLLoadercontext->glProgramUniformMatrix4dvEXT
// GLAPI void APIENTRY glProgramUniformMatrix2x3dvEXT (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLdouble *value);
#define GLProgramUniformMatrix2x3dvEXT                                         \
  OpenGLLoadercontext->glProgramUniformMatrix2x3dvEXT
// GLAPI void APIENTRY glProgramUniformMatrix2x4dvEXT (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLdouble *value);
#define GLProgramUniformMatrix2x4dvEXT                                         \
  OpenGLLoadercontext->glProgramUniformMatrix2x4dvEXT
// GLAPI void APIENTRY glProgramUniformMatrix3x2dvEXT (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLdouble *value);
#define GLProgramUniformMatrix3x2dvEXT                                         \
  OpenGLLoadercontext->glProgramUniformMatrix3x2dvEXT
// GLAPI void APIENTRY glProgramUniformMatrix3x4dvEXT (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLdouble *value);
#define GLProgramUniformMatrix3x4dvEXT                                         \
  OpenGLLoadercontext->glProgramUniformMatrix3x4dvEXT
// GLAPI void APIENTRY glProgramUniformMatrix4x2dvEXT (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLdouble *value);
#define GLProgramUniformMatrix4x2dvEXT                                         \
  OpenGLLoadercontext->glProgramUniformMatrix4x2dvEXT
// GLAPI void APIENTRY glProgramUniformMatrix4x3dvEXT (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLdouble *value);
#define GLProgramUniformMatrix4x3dvEXT                                         \
  OpenGLLoadercontext->glProgramUniformMatrix4x3dvEXT
// GLAPI void APIENTRY glTextureBufferRangeEXT (GLuint texture, GLenum target,
// GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
#define GLTextureBufferRangeEXT OpenGLLoadercontext->glTextureBufferRangeEXT
// GLAPI void APIENTRY glTextureStorage1DEXT (GLuint texture, GLenum target,
// GLsizei levels, GLenum internalformat, GLsizei width);
#define GLTextureStorage1DEXT OpenGLLoadercontext->glTextureStorage1DEXT
// GLAPI void APIENTRY glTextureStorage2DEXT (GLuint texture, GLenum target,
// GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
#define GLTextureStorage2DEXT OpenGLLoadercontext->glTextureStorage2DEXT
// GLAPI void APIENTRY glTextureStorage3DEXT (GLuint texture, GLenum target,
// GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei
// depth);
#define GLTextureStorage3DEXT OpenGLLoadercontext->glTextureStorage3DEXT
// GLAPI void APIENTRY glTextureStorage2DMultisampleEXT (GLuint texture, GLenum
// target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei
// height, GLboolean fixedsamplelocations);
#define GLTextureStorage2DMultisampleEXT                                       \
  OpenGLLoadercontext->glTextureStorage2DMultisampleEXT
// GLAPI void APIENTRY glTextureStorage3DMultisampleEXT (GLuint texture, GLenum
// target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei
// height, GLsizei depth, GLboolean fixedsamplelocations);
#define GLTextureStorage3DMultisampleEXT                                       \
  OpenGLLoadercontext->glTextureStorage3DMultisampleEXT
// GLAPI void APIENTRY glVertexArrayBindVertexBufferEXT (GLuint vaobj, GLuint
// bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
#define GLVertexArrayBindVertexBufferEXT                                       \
  OpenGLLoadercontext->glVertexArrayBindVertexBufferEXT
// GLAPI void APIENTRY glVertexArrayVertexAttribFormatEXT (GLuint vaobj, GLuint
// attribindex, GLint size, GLenum type, GLboolean normalized, GLuint
// relativeoffset);
#define GLVertexArrayVertexAttribFormatEXT                                     \
  OpenGLLoadercontext->glVertexArrayVertexAttribFormatEXT
// GLAPI void APIENTRY glVertexArrayVertexAttribIFormatEXT (GLuint vaobj, GLuint
// attribindex, GLint size, GLenum type, GLuint relativeoffset);
#define GLVertexArrayVertexAttribIFormatEXT                                    \
  OpenGLLoadercontext->glVertexArrayVertexAttribIFormatEXT
// GLAPI void APIENTRY glVertexArrayVertexAttribLFormatEXT (GLuint vaobj, GLuint
// attribindex, GLint size, GLenum type, GLuint relativeoffset);
#define GLVertexArrayVertexAttribLFormatEXT                                    \
  OpenGLLoadercontext->glVertexArrayVertexAttribLFormatEXT
// GLAPI void APIENTRY glVertexArrayVertexAttribBindingEXT (GLuint vaobj, GLuint
// attribindex, GLuint bindingindex);
#define GLVertexArrayVertexAttribBindingEXT                                    \
  OpenGLLoadercontext->glVertexArrayVertexAttribBindingEXT
// GLAPI void APIENTRY glVertexArrayVertexBindingDivisorEXT (GLuint vaobj,
// GLuint bindingindex, GLuint divisor);
#define GLVertexArrayVertexBindingDivisorEXT                                   \
  OpenGLLoadercontext->glVertexArrayVertexBindingDivisorEXT
// GLAPI void APIENTRY glVertexArrayVertexAttribLOffsetEXT (GLuint vaobj, GLuint
// buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr
// offset);
#define GLVertexArrayVertexAttribLOffsetEXT                                    \
  OpenGLLoadercontext->glVertexArrayVertexAttribLOffsetEXT
// GLAPI void APIENTRY glTexturePageCommitmentEXT (GLuint texture, GLint level,
// GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height,
// GLsizei depth, GLboolean commit);
#define GLTexturePageCommitmentEXT                                             \
  OpenGLLoadercontext->glTexturePageCommitmentEXT
// GLAPI void APIENTRY glVertexArrayVertexAttribDivisorEXT (GLuint vaobj, GLuint
// index, GLuint divisor);
#define GLVertexArrayVertexAttribDivisorEXT                                    \
  OpenGLLoadercontext->glVertexArrayVertexAttribDivisorEXT
// GLAPI void APIENTRY glColorMaskIndexedEXT (GLuint index, GLboolean r,
// GLboolean g, GLboolean b, GLboolean a);
#define GLColorMaskIndexedEXT OpenGLLoadercontext->glColorMaskIndexedEXT
// GLAPI void APIENTRY glDrawArraysInstancedEXT (GLenum mode, GLint start,
// GLsizei count, GLsizei primcount);
#define GLDrawArraysInstancedEXT OpenGLLoadercontext->glDrawArraysInstancedEXT
// GLAPI void APIENTRY glDrawElementsInstancedEXT (GLenum mode, GLsizei count,
// GLenum type, const void *indices, GLsizei primcount);
#define GLDrawElementsInstancedEXT                                             \
  OpenGLLoadercontext->glDrawElementsInstancedEXT
// GLAPI void APIENTRY glDrawRangeElementsEXT (GLenum mode, GLuint start, GLuint
// end, GLsizei count, GLenum type, const void *indices);
#define GLDrawRangeElementsEXT OpenGLLoadercontext->glDrawRangeElementsEXT
// GLAPI void APIENTRY glBufferStorageExternalEXT (GLenum target, GLintptr
// offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield
// flags);
#define GLBufferStorageExternalEXT                                             \
  OpenGLLoadercontext->glBufferStorageExternalEXT
// GLAPI void APIENTRY glNamedBufferStorageExternalEXT (GLuint buffer, GLintptr
// offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield
// flags);
#define GLNamedBufferStorageExternalEXT                                        \
  OpenGLLoadercontext->glNamedBufferStorageExternalEXT
// GLAPI void APIENTRY glFogCoordfEXT (GLfloat coord);
#define GLFogCoordfEXT OpenGLLoadercontext->glFogCoordfEXT
// GLAPI void APIENTRY glFogCoordfvEXT (const GLfloat *coord);
#define GLFogCoordfvEXT OpenGLLoadercontext->glFogCoordfvEXT
// GLAPI void APIENTRY glFogCoorddEXT (GLdouble coord);
#define GLFogCoorddEXT OpenGLLoadercontext->glFogCoorddEXT
// GLAPI void APIENTRY glFogCoorddvEXT (const GLdouble *coord);
#define GLFogCoorddvEXT OpenGLLoadercontext->glFogCoorddvEXT
// GLAPI void APIENTRY glFogCoordPointerEXT (GLenum type, GLsizei stride, const
// void *pointer);
#define GLFogCoordPointerEXT OpenGLLoadercontext->glFogCoordPointerEXT
// GLAPI void APIENTRY glBlitFramebufferEXT (GLint srcX0, GLint srcY0, GLint
// srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1,
// GLbitfield mask, GLenum filter);
#define GLBlitFramebufferEXT OpenGLLoadercontext->glBlitFramebufferEXT
// GLAPI void APIENTRY glBlitFramebufferLayersEXT (GLint srcX0, GLint srcY0,
// GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1,
// GLbitfield mask, GLenum filter);
#define GLBlitFramebufferLayersEXT                                             \
  OpenGLLoadercontext->glBlitFramebufferLayersEXT
// GLAPI void APIENTRY glBlitFramebufferLayerEXT (GLint srcX0, GLint srcY0,
// GLint srcX1, GLint srcY1, GLint srcLayer, GLint dstX0, GLint dstY0, GLint
// dstX1, GLint dstY1, GLint dstLayer, GLbitfield mask, GLenum filter);
#define GLBlitFramebufferLayerEXT OpenGLLoadercontext->glBlitFramebufferLayerEXT
// GLAPI void APIENTRY glRenderbufferStorageMultisampleEXT (GLenum target,
// GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
#define GLRenderbufferStorageMultisampleEXT                                    \
  OpenGLLoadercontext->glRenderbufferStorageMultisampleEXT
// GLAPI GLboolean APIENTRY glIsRenderbufferEXT (GLuint renderbuffer);
#define GLIsRenderbufferEXT OpenGLLoadercontext->glIsRenderbufferEXT
// GLAPI void APIENTRY glBindRenderbufferEXT (GLenum target, GLuint
// renderbuffer);
#define GLBindRenderbufferEXT OpenGLLoadercontext->glBindRenderbufferEXT
// GLAPI void APIENTRY glDeleteRenderbuffersEXT (GLsizei n, const GLuint
// *renderbuffers);
#define GLDeleteRenderbuffersEXT OpenGLLoadercontext->glDeleteRenderbuffersEXT
// GLAPI void APIENTRY glGenRenderbuffersEXT (GLsizei n, GLuint *renderbuffers);
#define GLGenRenderbuffersEXT OpenGLLoadercontext->glGenRenderbuffersEXT
// GLAPI void APIENTRY glRenderbufferStorageEXT (GLenum target, GLenum
// internalformat, GLsizei width, GLsizei height);
#define GLRenderbufferStorageEXT OpenGLLoadercontext->glRenderbufferStorageEXT
// GLAPI void APIENTRY glGetRenderbufferParameterivEXT (GLenum target, GLenum
// pname, GLint *params);
#define GLGetRenderbufferParameterivEXT                                        \
  OpenGLLoadercontext->glGetRenderbufferParameterivEXT
// GLAPI GLboolean APIENTRY glIsFramebufferEXT (GLuint framebuffer);
#define GLIsFramebufferEXT OpenGLLoadercontext->glIsFramebufferEXT
// GLAPI void APIENTRY glBindFramebufferEXT (GLenum target, GLuint framebuffer);
#define GLBindFramebufferEXT OpenGLLoadercontext->glBindFramebufferEXT
// GLAPI void APIENTRY glDeleteFramebuffersEXT (GLsizei n, const GLuint
// *framebuffers);
#define GLDeleteFramebuffersEXT OpenGLLoadercontext->glDeleteFramebuffersEXT
// GLAPI void APIENTRY glGenFramebuffersEXT (GLsizei n, GLuint *framebuffers);
#define GLGenFramebuffersEXT OpenGLLoadercontext->glGenFramebuffersEXT
// GLAPI GLenum APIENTRY glCheckFramebufferStatusEXT (GLenum target);
#define GLCheckFramebufferStatusEXT                                            \
  OpenGLLoadercontext->glCheckFramebufferStatusEXT
// GLAPI void APIENTRY glFramebufferTexture1DEXT (GLenum target, GLenum
// attachment, GLenum textarget, GLuint texture, GLint level);
#define GLFramebufferTexture1DEXT OpenGLLoadercontext->glFramebufferTexture1DEXT
// GLAPI void APIENTRY glFramebufferTexture2DEXT (GLenum target, GLenum
// attachment, GLenum textarget, GLuint texture, GLint level);
#define GLFramebufferTexture2DEXT OpenGLLoadercontext->glFramebufferTexture2DEXT
// GLAPI void APIENTRY glFramebufferTexture3DEXT (GLenum target, GLenum
// attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
#define GLFramebufferTexture3DEXT OpenGLLoadercontext->glFramebufferTexture3DEXT
// GLAPI void APIENTRY glFramebufferRenderbufferEXT (GLenum target, GLenum
// attachment, GLenum renderbuffertarget, GLuint renderbuffer);
#define GLFramebufferRenderbufferEXT                                           \
  OpenGLLoadercontext->glFramebufferRenderbufferEXT
// GLAPI void APIENTRY glGetFramebufferAttachmentParameterivEXT (GLenum target,
// GLenum attachment, GLenum pname, GLint *params);
#define GLGetFramebufferAttachmentParameterivEXT                               \
  OpenGLLoadercontext->glGetFramebufferAttachmentParameterivEXT
// GLAPI void APIENTRY glGenerateMipmapEXT (GLenum target);
#define GLGenerateMipmapEXT OpenGLLoadercontext->glGenerateMipmapEXT
// GLAPI void APIENTRY glProgramParameteriEXT (GLuint program, GLenum pname,
// GLint value);
#define GLProgramParameteriEXT OpenGLLoadercontext->glProgramParameteriEXT
// GLAPI void APIENTRY glProgramEnvParameters4fvEXT (GLenum target, GLuint
// index, GLsizei count, const GLfloat *params);
#define GLProgramEnvParameters4fvEXT                                           \
  OpenGLLoadercontext->glProgramEnvParameters4fvEXT
// GLAPI void APIENTRY glProgramLocalParameters4fvEXT (GLenum target, GLuint
// index, GLsizei count, const GLfloat *params);
#define GLProgramLocalParameters4fvEXT                                         \
  OpenGLLoadercontext->glProgramLocalParameters4fvEXT
// GLAPI void APIENTRY glGetUniformuivEXT (GLuint program, GLint location,
// GLuint *params);
#define GLGetUniformuivEXT OpenGLLoadercontext->glGetUniformuivEXT
// GLAPI void APIENTRY glBindFragDataLocationEXT (GLuint program, GLuint color,
// const GLchar *name);
#define GLBindFragDataLocationEXT OpenGLLoadercontext->glBindFragDataLocationEXT
// GLAPI GLint APIENTRY glGetFragDataLocationEXT (GLuint program, const GLchar
// *name);
#define GLGetFragDataLocationEXT OpenGLLoadercontext->glGetFragDataLocationEXT
// GLAPI void APIENTRY glUniform1uiEXT (GLint location, GLuint v0);
#define GLUniform1uiEXT OpenGLLoadercontext->glUniform1uiEXT
// GLAPI void APIENTRY glUniform2uiEXT (GLint location, GLuint v0, GLuint v1);
#define GLUniform2uiEXT OpenGLLoadercontext->glUniform2uiEXT
// GLAPI void APIENTRY glUniform3uiEXT (GLint location, GLuint v0, GLuint v1,
// GLuint v2);
#define GLUniform3uiEXT OpenGLLoadercontext->glUniform3uiEXT
// GLAPI void APIENTRY glUniform4uiEXT (GLint location, GLuint v0, GLuint v1,
// GLuint v2, GLuint v3);
#define GLUniform4uiEXT OpenGLLoadercontext->glUniform4uiEXT
// GLAPI void APIENTRY glUniform1uivEXT (GLint location, GLsizei count, const
// GLuint *value);
#define GLUniform1uivEXT OpenGLLoadercontext->glUniform1uivEXT
// GLAPI void APIENTRY glUniform2uivEXT (GLint location, GLsizei count, const
// GLuint *value);
#define GLUniform2uivEXT OpenGLLoadercontext->glUniform2uivEXT
// GLAPI void APIENTRY glUniform3uivEXT (GLint location, GLsizei count, const
// GLuint *value);
#define GLUniform3uivEXT OpenGLLoadercontext->glUniform3uivEXT
// GLAPI void APIENTRY glUniform4uivEXT (GLint location, GLsizei count, const
// GLuint *value);
#define GLUniform4uivEXT OpenGLLoadercontext->glUniform4uivEXT
// GLAPI void APIENTRY glVertexAttribI1iEXT (GLuint index, GLint x);
#define GLVertexAttribI1iEXT OpenGLLoadercontext->glVertexAttribI1iEXT
// GLAPI void APIENTRY glVertexAttribI2iEXT (GLuint index, GLint x, GLint y);
#define GLVertexAttribI2iEXT OpenGLLoadercontext->glVertexAttribI2iEXT
// GLAPI void APIENTRY glVertexAttribI3iEXT (GLuint index, GLint x, GLint y,
// GLint z);
#define GLVertexAttribI3iEXT OpenGLLoadercontext->glVertexAttribI3iEXT
// GLAPI void APIENTRY glVertexAttribI4iEXT (GLuint index, GLint x, GLint y,
// GLint z, GLint w);
#define GLVertexAttribI4iEXT OpenGLLoadercontext->glVertexAttribI4iEXT
// GLAPI void APIENTRY glVertexAttribI1uiEXT (GLuint index, GLuint x);
#define GLVertexAttribI1uiEXT OpenGLLoadercontext->glVertexAttribI1uiEXT
// GLAPI void APIENTRY glVertexAttribI2uiEXT (GLuint index, GLuint x, GLuint y);
#define GLVertexAttribI2uiEXT OpenGLLoadercontext->glVertexAttribI2uiEXT
// GLAPI void APIENTRY glVertexAttribI3uiEXT (GLuint index, GLuint x, GLuint y,
// GLuint z);
#define GLVertexAttribI3uiEXT OpenGLLoadercontext->glVertexAttribI3uiEXT
// GLAPI void APIENTRY glVertexAttribI4uiEXT (GLuint index, GLuint x, GLuint y,
// GLuint z, GLuint w);
#define GLVertexAttribI4uiEXT OpenGLLoadercontext->glVertexAttribI4uiEXT
// GLAPI void APIENTRY glVertexAttribI1ivEXT (GLuint index, const GLint *v);
#define GLVertexAttribI1ivEXT OpenGLLoadercontext->glVertexAttribI1ivEXT
// GLAPI void APIENTRY glVertexAttribI2ivEXT (GLuint index, const GLint *v);
#define GLVertexAttribI2ivEXT OpenGLLoadercontext->glVertexAttribI2ivEXT
// GLAPI void APIENTRY glVertexAttribI3ivEXT (GLuint index, const GLint *v);
#define GLVertexAttribI3ivEXT OpenGLLoadercontext->glVertexAttribI3ivEXT
// GLAPI void APIENTRY glVertexAttribI4ivEXT (GLuint index, const GLint *v);
#define GLVertexAttribI4ivEXT OpenGLLoadercontext->glVertexAttribI4ivEXT
// GLAPI void APIENTRY glVertexAttribI1uivEXT (GLuint index, const GLuint *v);
#define GLVertexAttribI1uivEXT OpenGLLoadercontext->glVertexAttribI1uivEXT
// GLAPI void APIENTRY glVertexAttribI2uivEXT (GLuint index, const GLuint *v);
#define GLVertexAttribI2uivEXT OpenGLLoadercontext->glVertexAttribI2uivEXT
// GLAPI void APIENTRY glVertexAttribI3uivEXT (GLuint index, const GLuint *v);
#define GLVertexAttribI3uivEXT OpenGLLoadercontext->glVertexAttribI3uivEXT
// GLAPI void APIENTRY glVertexAttribI4uivEXT (GLuint index, const GLuint *v);
#define GLVertexAttribI4uivEXT OpenGLLoadercontext->glVertexAttribI4uivEXT
// GLAPI void APIENTRY glVertexAttribI4bvEXT (GLuint index, const GLbyte *v);
#define GLVertexAttribI4bvEXT OpenGLLoadercontext->glVertexAttribI4bvEXT
// GLAPI void APIENTRY glVertexAttribI4svEXT (GLuint index, const GLshort *v);
#define GLVertexAttribI4svEXT OpenGLLoadercontext->glVertexAttribI4svEXT
// GLAPI void APIENTRY glVertexAttribI4ubvEXT (GLuint index, const GLubyte *v);
#define GLVertexAttribI4ubvEXT OpenGLLoadercontext->glVertexAttribI4ubvEXT
// GLAPI void APIENTRY glVertexAttribI4usvEXT (GLuint index, const GLushort *v);
#define GLVertexAttribI4usvEXT OpenGLLoadercontext->glVertexAttribI4usvEXT
// GLAPI void APIENTRY glVertexAttribIPointerEXT (GLuint index, GLint size,
// GLenum type, GLsizei stride, const void *pointer);
#define GLVertexAttribIPointerEXT OpenGLLoadercontext->glVertexAttribIPointerEXT
// GLAPI void APIENTRY glGetVertexAttribIivEXT (GLuint index, GLenum pname,
// GLint *params);
#define GLGetVertexAttribIivEXT OpenGLLoadercontext->glGetVertexAttribIivEXT
// GLAPI void APIENTRY glGetVertexAttribIuivEXT (GLuint index, GLenum pname,
// GLuint *params);
#define GLGetVertexAttribIuivEXT OpenGLLoadercontext->glGetVertexAttribIuivEXT
// GLAPI void APIENTRY glGetHistogramEXT (GLenum target, GLboolean reset, GLenum
// format, GLenum type, void *values);
#define GLGetHistogramEXT OpenGLLoadercontext->glGetHistogramEXT
// GLAPI void APIENTRY glGetHistogramParameterfvEXT (GLenum target, GLenum
// pname, GLfloat *params);
#define GLGetHistogramParameterfvEXT                                           \
  OpenGLLoadercontext->glGetHistogramParameterfvEXT
// GLAPI void APIENTRY glGetHistogramParameterivEXT (GLenum target, GLenum
// pname, GLint *params);
#define GLGetHistogramParameterivEXT                                           \
  OpenGLLoadercontext->glGetHistogramParameterivEXT
// GLAPI void APIENTRY glGetMinmaxEXT (GLenum target, GLboolean reset, GLenum
// format, GLenum type, void *values);
#define GLGetMinmaxEXT OpenGLLoadercontext->glGetMinmaxEXT
// GLAPI void APIENTRY glGetMinmaxParameterfvEXT (GLenum target, GLenum pname,
// GLfloat *params);
#define GLGetMinmaxParameterfvEXT OpenGLLoadercontext->glGetMinmaxParameterfvEXT
// GLAPI void APIENTRY glGetMinmaxParameterivEXT (GLenum target, GLenum pname,
// GLint *params);
#define GLGetMinmaxParameterivEXT OpenGLLoadercontext->glGetMinmaxParameterivEXT
// GLAPI void APIENTRY glHistogramEXT (GLenum target, GLsizei width, GLenum
// internalformat, GLboolean sink);
#define GLHistogramEXT OpenGLLoadercontext->glHistogramEXT
// GLAPI void APIENTRY glMinmaxEXT (GLenum target, GLenum internalformat,
// GLboolean sink);
#define GLMinmaxEXT OpenGLLoadercontext->glMinmaxEXT
// GLAPI void APIENTRY glResetHistogramEXT (GLenum target);
#define GLResetHistogramEXT OpenGLLoadercontext->glResetHistogramEXT
// GLAPI void APIENTRY glResetMinmaxEXT (GLenum target);
#define GLResetMinmaxEXT OpenGLLoadercontext->glResetMinmaxEXT
// GLAPI void APIENTRY glIndexFuncEXT (GLenum func, GLclampf ref);
#define GLIndexFuncEXT OpenGLLoadercontext->glIndexFuncEXT
// GLAPI void APIENTRY glIndexMaterialEXT (GLenum face, GLenum mode);
#define GLIndexMaterialEXT OpenGLLoadercontext->glIndexMaterialEXT
// GLAPI void APIENTRY glApplyTextureEXT (GLenum mode);
#define GLApplyTextureEXT OpenGLLoadercontext->glApplyTextureEXT
// GLAPI void APIENTRY glTextureLightEXT (GLenum pname);
#define GLTextureLightEXT OpenGLLoadercontext->glTextureLightEXT
// GLAPI void APIENTRY glTextureMaterialEXT (GLenum face, GLenum mode);
#define GLTextureMaterialEXT OpenGLLoadercontext->glTextureMaterialEXT
// GLAPI void APIENTRY glGetUnsignedBytevEXT (GLenum pname, GLubyte *data);
#define GLGetUnsignedBytevEXT OpenGLLoadercontext->glGetUnsignedBytevEXT
// GLAPI void APIENTRY glGetUnsignedBytei_vEXT (GLenum target, GLuint index,
// GLubyte *data);
#define GLGetUnsignedBytei_vEXT OpenGLLoadercontext->glGetUnsignedBytei_vEXT
// GLAPI void APIENTRY glDeleteMemoryObjectsEXT (GLsizei n, const GLuint
// *memoryObjects);
#define GLDeleteMemoryObjectsEXT OpenGLLoadercontext->glDeleteMemoryObjectsEXT
// GLAPI GLboolean APIENTRY glIsMemoryObjectEXT (GLuint memoryObject);
#define GLIsMemoryObjectEXT OpenGLLoadercontext->glIsMemoryObjectEXT
// GLAPI void APIENTRY glCreateMemoryObjectsEXT (GLsizei n, GLuint
// *memoryObjects);
#define GLCreateMemoryObjectsEXT OpenGLLoadercontext->glCreateMemoryObjectsEXT
// GLAPI void APIENTRY glMemoryObjectParameterivEXT (GLuint memoryObject, GLenum
// pname, const GLint *params);
#define GLMemoryObjectParameterivEXT                                           \
  OpenGLLoadercontext->glMemoryObjectParameterivEXT
// GLAPI void APIENTRY glGetMemoryObjectParameterivEXT (GLuint memoryObject,
// GLenum pname, GLint *params);
#define GLGetMemoryObjectParameterivEXT                                        \
  OpenGLLoadercontext->glGetMemoryObjectParameterivEXT
// GLAPI void APIENTRY glTexStorageMem2DEXT (GLenum target, GLsizei levels,
// GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64
// offset);
#define GLTexStorageMem2DEXT OpenGLLoadercontext->glTexStorageMem2DEXT
// GLAPI void APIENTRY glTexStorageMem2DMultisampleEXT (GLenum target, GLsizei
// samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean
// fixedSampleLocations, GLuint memory, GLuint64 offset);
#define GLTexStorageMem2DMultisampleEXT                                        \
  OpenGLLoadercontext->glTexStorageMem2DMultisampleEXT
// GLAPI void APIENTRY glTexStorageMem3DEXT (GLenum target, GLsizei levels,
// GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint
// memory, GLuint64 offset);
#define GLTexStorageMem3DEXT OpenGLLoadercontext->glTexStorageMem3DEXT
// GLAPI void APIENTRY glTexStorageMem3DMultisampleEXT (GLenum target, GLsizei
// samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth,
// GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
#define GLTexStorageMem3DMultisampleEXT                                        \
  OpenGLLoadercontext->glTexStorageMem3DMultisampleEXT
// GLAPI void APIENTRY glBufferStorageMemEXT (GLenum target, GLsizeiptr size,
// GLuint memory, GLuint64 offset);
#define GLBufferStorageMemEXT OpenGLLoadercontext->glBufferStorageMemEXT
// GLAPI void APIENTRY glTextureStorageMem2DEXT (GLuint texture, GLsizei levels,
// GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64
// offset);
#define GLTextureStorageMem2DEXT OpenGLLoadercontext->glTextureStorageMem2DEXT
// GLAPI void APIENTRY glTextureStorageMem2DMultisampleEXT (GLuint texture,
// GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height,
// GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
#define GLTextureStorageMem2DMultisampleEXT                                    \
  OpenGLLoadercontext->glTextureStorageMem2DMultisampleEXT
// GLAPI void APIENTRY glTextureStorageMem3DEXT (GLuint texture, GLsizei levels,
// GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint
// memory, GLuint64 offset);
#define GLTextureStorageMem3DEXT OpenGLLoadercontext->glTextureStorageMem3DEXT
// GLAPI void APIENTRY glTextureStorageMem3DMultisampleEXT (GLuint texture,
// GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height,
// GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64
// offset);
#define GLTextureStorageMem3DMultisampleEXT                                    \
  OpenGLLoadercontext->glTextureStorageMem3DMultisampleEXT
// GLAPI void APIENTRY glNamedBufferStorageMemEXT (GLuint buffer, GLsizeiptr
// size, GLuint memory, GLuint64 offset);
#define GLNamedBufferStorageMemEXT                                             \
  OpenGLLoadercontext->glNamedBufferStorageMemEXT
// GLAPI void APIENTRY glTexStorageMem1DEXT (GLenum target, GLsizei levels,
// GLenum internalFormat, GLsizei width, GLuint memory, GLuint64 offset);
#define GLTexStorageMem1DEXT OpenGLLoadercontext->glTexStorageMem1DEXT
// GLAPI void APIENTRY glTextureStorageMem1DEXT (GLuint texture, GLsizei levels,
// GLenum internalFormat, GLsizei width, GLuint memory, GLuint64 offset);
#define GLTextureStorageMem1DEXT OpenGLLoadercontext->glTextureStorageMem1DEXT
// GLAPI void APIENTRY glImportMemoryFdEXT (GLuint memory, GLuint64 size, GLenum
// handleType, GLint fd);
#define GLImportMemoryFdEXT OpenGLLoadercontext->glImportMemoryFdEXT
// GLAPI void APIENTRY glImportMemoryWin32HandleEXT (GLuint memory, GLuint64
// size, GLenum handleType, void *handle);
#define GLImportMemoryWin32HandleEXT                                           \
  OpenGLLoadercontext->glImportMemoryWin32HandleEXT
// GLAPI void APIENTRY glImportMemoryWin32NameEXT (GLuint memory, GLuint64 size,
// GLenum handleType, const void *name);
#define GLImportMemoryWin32NameEXT                                             \
  OpenGLLoadercontext->glImportMemoryWin32NameEXT
// GLAPI void APIENTRY glMultiDrawArraysEXT (GLenum mode, const GLint *first,
// const GLsizei *count, GLsizei primcount);
#define GLMultiDrawArraysEXT OpenGLLoadercontext->glMultiDrawArraysEXT
// GLAPI void APIENTRY glMultiDrawElementsEXT (GLenum mode, const GLsizei
// *count, GLenum type, const void *const*indices, GLsizei primcount);
#define GLMultiDrawElementsEXT OpenGLLoadercontext->glMultiDrawElementsEXT
// GLAPI void APIENTRY glSampleMaskEXT (GLclampf value, GLboolean invert);
#define GLSampleMaskEXT OpenGLLoadercontext->glSampleMaskEXT
// GLAPI void APIENTRY glSamplePatternEXT (GLenum pattern);
#define GLSamplePatternEXT OpenGLLoadercontext->glSamplePatternEXT
// GLAPI void APIENTRY glColorTableEXT (GLenum target, GLenum internalFormat,
// GLsizei width, GLenum format, GLenum type, const void *table);
#define GLColorTableEXT OpenGLLoadercontext->glColorTableEXT
// GLAPI void APIENTRY glGetColorTableEXT (GLenum target, GLenum format, GLenum
// type, void *data);
#define GLGetColorTableEXT OpenGLLoadercontext->glGetColorTableEXT
// GLAPI void APIENTRY glGetColorTableParameterivEXT (GLenum target, GLenum
// pname, GLint *params);
#define GLGetColorTableParameterivEXT                                          \
  OpenGLLoadercontext->glGetColorTableParameterivEXT
// GLAPI void APIENTRY glGetColorTableParameterfvEXT (GLenum target, GLenum
// pname, GLfloat *params);
#define GLGetColorTableParameterfvEXT                                          \
  OpenGLLoadercontext->glGetColorTableParameterfvEXT
// GLAPI void APIENTRY glPixelTransformParameteriEXT (GLenum target, GLenum
// pname, GLint param);
#define GLPixelTransformParameteriEXT                                          \
  OpenGLLoadercontext->glPixelTransformParameteriEXT
// GLAPI void APIENTRY glPixelTransformParameterfEXT (GLenum target, GLenum
// pname, GLfloat param);
#define GLPixelTransformParameterfEXT                                          \
  OpenGLLoadercontext->glPixelTransformParameterfEXT
// GLAPI void APIENTRY glPixelTransformParameterivEXT (GLenum target, GLenum
// pname, const GLint *params);
#define GLPixelTransformParameterivEXT                                         \
  OpenGLLoadercontext->glPixelTransformParameterivEXT
// GLAPI void APIENTRY glPixelTransformParameterfvEXT (GLenum target, GLenum
// pname, const GLfloat *params);
#define GLPixelTransformParameterfvEXT                                         \
  OpenGLLoadercontext->glPixelTransformParameterfvEXT
// GLAPI void APIENTRY glGetPixelTransformParameterivEXT (GLenum target, GLenum
// pname, GLint *params);
#define GLGetPixelTransformParameterivEXT                                      \
  OpenGLLoadercontext->glGetPixelTransformParameterivEXT
// GLAPI void APIENTRY glGetPixelTransformParameterfvEXT (GLenum target, GLenum
// pname, GLfloat *params);
#define GLGetPixelTransformParameterfvEXT                                      \
  OpenGLLoadercontext->glGetPixelTransformParameterfvEXT
// GLAPI void APIENTRY glPointParameterfEXT (GLenum pname, GLfloat param);
#define GLPointParameterfEXT OpenGLLoadercontext->glPointParameterfEXT
// GLAPI void APIENTRY glPointParameterfvEXT (GLenum pname, const GLfloat
// *params);
#define GLPointParameterfvEXT OpenGLLoadercontext->glPointParameterfvEXT
// GLAPI void APIENTRY glPolygonOffsetEXT (GLfloat factor, GLfloat bias);
#define GLPolygonOffsetEXT OpenGLLoadercontext->glPolygonOffsetEXT
// GLAPI void APIENTRY glPolygonOffsetClampEXT (GLfloat factor, GLfloat units,
// GLfloat clamp);
#define GLPolygonOffsetClampEXT OpenGLLoadercontext->glPolygonOffsetClampEXT
// GLAPI void APIENTRY glProvokingVertexEXT (GLenum mode);
#define GLProvokingVertexEXT OpenGLLoadercontext->glProvokingVertexEXT
// GLAPI void APIENTRY glRasterSamplesEXT (GLuint samples, GLboolean
// fixedsamplelocations);
#define GLRasterSamplesEXT OpenGLLoadercontext->glRasterSamplesEXT
// GLAPI void APIENTRY glSecondaryColor3bEXT (GLbyte red, GLbyte green, GLbyte
// blue);
#define GLSecondaryColor3bEXT OpenGLLoadercontext->glSecondaryColor3bEXT
// GLAPI void APIENTRY glSecondaryColor3bvEXT (const GLbyte *v);
#define GLSecondaryColor3bvEXT OpenGLLoadercontext->glSecondaryColor3bvEXT
// GLAPI void APIENTRY glSecondaryColor3dEXT (GLdouble red, GLdouble green,
// GLdouble blue);
#define GLSecondaryColor3dEXT OpenGLLoadercontext->glSecondaryColor3dEXT
// GLAPI void APIENTRY glSecondaryColor3dvEXT (const GLdouble *v);
#define GLSecondaryColor3dvEXT OpenGLLoadercontext->glSecondaryColor3dvEXT
// GLAPI void APIENTRY glSecondaryColor3fEXT (GLfloat red, GLfloat green,
// GLfloat blue);
#define GLSecondaryColor3fEXT OpenGLLoadercontext->glSecondaryColor3fEXT
// GLAPI void APIENTRY glSecondaryColor3fvEXT (const GLfloat *v);
#define GLSecondaryColor3fvEXT OpenGLLoadercontext->glSecondaryColor3fvEXT
// GLAPI void APIENTRY glSecondaryColor3iEXT (GLint red, GLint green, GLint
// blue);
#define GLSecondaryColor3iEXT OpenGLLoadercontext->glSecondaryColor3iEXT
// GLAPI void APIENTRY glSecondaryColor3ivEXT (const GLint *v);
#define GLSecondaryColor3ivEXT OpenGLLoadercontext->glSecondaryColor3ivEXT
// GLAPI void APIENTRY glSecondaryColor3sEXT (GLshort red, GLshort green,
// GLshort blue);
#define GLSecondaryColor3sEXT OpenGLLoadercontext->glSecondaryColor3sEXT
// GLAPI void APIENTRY glSecondaryColor3svEXT (const GLshort *v);
#define GLSecondaryColor3svEXT OpenGLLoadercontext->glSecondaryColor3svEXT
// GLAPI void APIENTRY glSecondaryColor3ubEXT (GLubyte red, GLubyte green,
// GLubyte blue);
#define GLSecondaryColor3ubEXT OpenGLLoadercontext->glSecondaryColor3ubEXT
// GLAPI void APIENTRY glSecondaryColor3ubvEXT (const GLubyte *v);
#define GLSecondaryColor3ubvEXT OpenGLLoadercontext->glSecondaryColor3ubvEXT
// GLAPI void APIENTRY glSecondaryColor3uiEXT (GLuint red, GLuint green, GLuint
// blue);
#define GLSecondaryColor3uiEXT OpenGLLoadercontext->glSecondaryColor3uiEXT
// GLAPI void APIENTRY glSecondaryColor3uivEXT (const GLuint *v);
#define GLSecondaryColor3uivEXT OpenGLLoadercontext->glSecondaryColor3uivEXT
// GLAPI void APIENTRY glSecondaryColor3usEXT (GLushort red, GLushort green,
// GLushort blue);
#define GLSecondaryColor3usEXT OpenGLLoadercontext->glSecondaryColor3usEXT
// GLAPI void APIENTRY glSecondaryColor3usvEXT (const GLushort *v);
#define GLSecondaryColor3usvEXT OpenGLLoadercontext->glSecondaryColor3usvEXT
// GLAPI void APIENTRY glSecondaryColorPointerEXT (GLint size, GLenum type,
// GLsizei stride, const void *pointer);
#define GLSecondaryColorPointerEXT                                             \
  OpenGLLoadercontext->glSecondaryColorPointerEXT
// GLAPI void APIENTRY glGenSemaphoresEXT (GLsizei n, GLuint *semaphores);
#define GLGenSemaphoresEXT OpenGLLoadercontext->glGenSemaphoresEXT
// GLAPI void APIENTRY glDeleteSemaphoresEXT (GLsizei n, const GLuint
// *semaphores);
#define GLDeleteSemaphoresEXT OpenGLLoadercontext->glDeleteSemaphoresEXT
// GLAPI GLboolean APIENTRY glIsSemaphoreEXT (GLuint semaphore);
#define GLIsSemaphoreEXT OpenGLLoadercontext->glIsSemaphoreEXT
// GLAPI void APIENTRY glSemaphoreParameterui64vEXT (GLuint semaphore, GLenum
// pname, const GLuint64 *params);
#define GLSemaphoreParameterui64vEXT                                           \
  OpenGLLoadercontext->glSemaphoreParameterui64vEXT
// GLAPI void APIENTRY glGetSemaphoreParameterui64vEXT (GLuint semaphore, GLenum
// pname, GLuint64 *params);
#define GLGetSemaphoreParameterui64vEXT                                        \
  OpenGLLoadercontext->glGetSemaphoreParameterui64vEXT
// GLAPI void APIENTRY glWaitSemaphoreEXT (GLuint semaphore, GLuint
// numBufferBarriers, const GLuint *buffers, GLuint numTextureBarriers, const
// GLuint *textures, const GLenum *srcLayouts);
#define GLWaitSemaphoreEXT OpenGLLoadercontext->glWaitSemaphoreEXT
// GLAPI void APIENTRY glSignalSemaphoreEXT (GLuint semaphore, GLuint
// numBufferBarriers, const GLuint *buffers, GLuint numTextureBarriers, const
// GLuint *textures, const GLenum *dstLayouts);
#define GLSignalSemaphoreEXT OpenGLLoadercontext->glSignalSemaphoreEXT
// GLAPI void APIENTRY glImportSemaphoreFdEXT (GLuint semaphore, GLenum
// handleType, GLint fd);
#define GLImportSemaphoreFdEXT OpenGLLoadercontext->glImportSemaphoreFdEXT
// GLAPI void APIENTRY glImportSemaphoreWin32HandleEXT (GLuint semaphore, GLenum
// handleType, void *handle);
#define GLImportSemaphoreWin32HandleEXT                                        \
  OpenGLLoadercontext->glImportSemaphoreWin32HandleEXT
// GLAPI void APIENTRY glImportSemaphoreWin32NameEXT (GLuint semaphore, GLenum
// handleType, const void *name);
#define GLImportSemaphoreWin32NameEXT                                          \
  OpenGLLoadercontext->glImportSemaphoreWin32NameEXT
// GLAPI void APIENTRY glUseShaderProgramEXT (GLenum type, GLuint program);
#define GLUseShaderProgramEXT OpenGLLoadercontext->glUseShaderProgramEXT
// GLAPI void APIENTRY glActiveProgramEXT (GLuint program);
#define GLActiveProgramEXT OpenGLLoadercontext->glActiveProgramEXT
// GLAPI GLuint APIENTRY glCreateShaderProgramEXT (GLenum type, const GLchar
// *string);
#define GLCreateShaderProgramEXT OpenGLLoadercontext->glCreateShaderProgramEXT
// GLAPI void APIENTRY glFramebufferFetchBarrierEXT (void);
#define GLFramebufferFetchBarrierEXT                                           \
  OpenGLLoadercontext->glFramebufferFetchBarrierEXT
// GLAPI void APIENTRY glBindImageTextureEXT (GLuint index, GLuint texture,
// GLint level, GLboolean layered, GLint layer, GLenum access, GLint format);
#define GLBindImageTextureEXT OpenGLLoadercontext->glBindImageTextureEXT
// GLAPI void APIENTRY glMemoryBarrierEXT (GLbitfield barriers);
#define GLMemoryBarrierEXT OpenGLLoadercontext->glMemoryBarrierEXT
// GLAPI void APIENTRY glStencilClearTagEXT (GLsizei stencilTagBits, GLuint
// stencilClearTag);
#define GLStencilClearTagEXT OpenGLLoadercontext->glStencilClearTagEXT
// GLAPI void APIENTRY glActiveStencilFaceEXT (GLenum face);
#define GLActiveStencilFaceEXT OpenGLLoadercontext->glActiveStencilFaceEXT
// GLAPI void APIENTRY glTexSubImage1DEXT (GLenum target, GLint level, GLint
// xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
#define GLTexSubImage1DEXT OpenGLLoadercontext->glTexSubImage1DEXT
// GLAPI void APIENTRY glTexSubImage2DEXT (GLenum target, GLint level, GLint
// xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum
// type, const void *pixels);
#define GLTexSubImage2DEXT OpenGLLoadercontext->glTexSubImage2DEXT
// GLAPI void APIENTRY glTexImage3DEXT (GLenum target, GLint level, GLenum
// internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border,
// GLenum format, GLenum type, const void *pixels);
#define GLTexImage3DEXT OpenGLLoadercontext->glTexImage3DEXT
// GLAPI void APIENTRY glTexSubImage3DEXT (GLenum target, GLint level, GLint
// xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei
// depth, GLenum format, GLenum type, const void *pixels);
#define GLTexSubImage3DEXT OpenGLLoadercontext->glTexSubImage3DEXT
// GLAPI void APIENTRY glFramebufferTextureLayerEXT (GLenum target, GLenum
// attachment, GLuint texture, GLint level, GLint layer);
#define GLFramebufferTextureLayerEXT                                           \
  OpenGLLoadercontext->glFramebufferTextureLayerEXT
// GLAPI void APIENTRY glTexBufferEXT (GLenum target, GLenum internalformat,
// GLuint buffer);
#define GLTexBufferEXT OpenGLLoadercontext->glTexBufferEXT
// GLAPI void APIENTRY glTexParameterIivEXT (GLenum target, GLenum pname, const
// GLint *params);
#define GLTexParameterIivEXT OpenGLLoadercontext->glTexParameterIivEXT
// GLAPI void APIENTRY glTexParameterIuivEXT (GLenum target, GLenum pname, const
// GLuint *params);
#define GLTexParameterIuivEXT OpenGLLoadercontext->glTexParameterIuivEXT
// GLAPI void APIENTRY glGetTexParameterIivEXT (GLenum target, GLenum pname,
// GLint *params);
#define GLGetTexParameterIivEXT OpenGLLoadercontext->glGetTexParameterIivEXT
// GLAPI void APIENTRY glGetTexParameterIuivEXT (GLenum target, GLenum pname,
// GLuint *params);
#define GLGetTexParameterIuivEXT OpenGLLoadercontext->glGetTexParameterIuivEXT
// GLAPI void APIENTRY glClearColorIiEXT (GLint red, GLint green, GLint blue,
// GLint alpha);
#define GLClearColorIiEXT OpenGLLoadercontext->glClearColorIiEXT
// GLAPI void APIENTRY glClearColorIuiEXT (GLuint red, GLuint green, GLuint
// blue, GLuint alpha);
#define GLClearColorIuiEXT OpenGLLoadercontext->glClearColorIuiEXT
// GLAPI GLboolean APIENTRY glAreTexturesResidentEXT (GLsizei n, const GLuint
// *textures, GLboolean *residences);
#define GLAreTexturesResidentEXT OpenGLLoadercontext->glAreTexturesResidentEXT
// GLAPI void APIENTRY glBindTextureEXT (GLenum target, GLuint texture);
#define GLBindTextureEXT OpenGLLoadercontext->glBindTextureEXT
// GLAPI void APIENTRY glDeleteTexturesEXT (GLsizei n, const GLuint *textures);
#define GLDeleteTexturesEXT OpenGLLoadercontext->glDeleteTexturesEXT
// GLAPI void APIENTRY glGenTexturesEXT (GLsizei n, GLuint *textures);
#define GLGenTexturesEXT OpenGLLoadercontext->glGenTexturesEXT
// GLAPI GLboolean APIENTRY glIsTextureEXT (GLuint texture);
#define GLIsTextureEXT OpenGLLoadercontext->glIsTextureEXT
// GLAPI void APIENTRY glPrioritizeTexturesEXT (GLsizei n, const GLuint
// *textures, const GLclampf *priorities);
#define GLPrioritizeTexturesEXT OpenGLLoadercontext->glPrioritizeTexturesEXT
// GLAPI void APIENTRY glTextureNormalEXT (GLenum mode);
#define GLTextureNormalEXT OpenGLLoadercontext->glTextureNormalEXT
// GLAPI void APIENTRY glTexStorage1DEXT (GLenum target, GLsizei levels, GLenum
// internalformat, GLsizei width);
#define GLTexStorage1DEXT OpenGLLoadercontext->glTexStorage1DEXT
// GLAPI void APIENTRY glTexStorage2DEXT (GLenum target, GLsizei levels, GLenum
// internalformat, GLsizei width, GLsizei height);
#define GLTexStorage2DEXT OpenGLLoadercontext->glTexStorage2DEXT
// GLAPI void APIENTRY glTexStorage3DEXT (GLenum target, GLsizei levels, GLenum
// internalformat, GLsizei width, GLsizei height, GLsizei depth);
#define GLTexStorage3DEXT OpenGLLoadercontext->glTexStorage3DEXT
// GLAPI void APIENTRY glGetQueryObjecti64vEXT (GLuint id, GLenum pname, GLint64
// *params);
#define GLGetQueryObjecti64vEXT OpenGLLoadercontext->glGetQueryObjecti64vEXT
// GLAPI void APIENTRY glGetQueryObjectui64vEXT (GLuint id, GLenum pname,
// GLuint64 *params);
#define GLGetQueryObjectui64vEXT OpenGLLoadercontext->glGetQueryObjectui64vEXT
// GLAPI void APIENTRY glBeginTransformFeedbackEXT (GLenum primitiveMode);
#define GLBeginTransformFeedbackEXT                                            \
  OpenGLLoadercontext->glBeginTransformFeedbackEXT
// GLAPI void APIENTRY glEndTransformFeedbackEXT (void);
#define GLEndTransformFeedbackEXT OpenGLLoadercontext->glEndTransformFeedbackEXT
// GLAPI void APIENTRY glBindBufferRangeEXT (GLenum target, GLuint index, GLuint
// buffer, GLintptr offset, GLsizeiptr size);
#define GLBindBufferRangeEXT OpenGLLoadercontext->glBindBufferRangeEXT
// GLAPI void APIENTRY glBindBufferOffsetEXT (GLenum target, GLuint index,
// GLuint buffer, GLintptr offset);
#define GLBindBufferOffsetEXT OpenGLLoadercontext->glBindBufferOffsetEXT
// GLAPI void APIENTRY glBindBufferBaseEXT (GLenum target, GLuint index, GLuint
// buffer);
#define GLBindBufferBaseEXT OpenGLLoadercontext->glBindBufferBaseEXT
// GLAPI void APIENTRY glTransformFeedbackVaryingsEXT (GLuint program, GLsizei
// count, const GLchar *const*varyings, GLenum bufferMode);
#define GLTransformFeedbackVaryingsEXT                                         \
  OpenGLLoadercontext->glTransformFeedbackVaryingsEXT
// GLAPI void APIENTRY glGetTransformFeedbackVaryingEXT (GLuint program, GLuint
// index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar
// *name);
#define GLGetTransformFeedbackVaryingEXT                                       \
  OpenGLLoadercontext->glGetTransformFeedbackVaryingEXT
// GLAPI void APIENTRY glArrayElementEXT (GLint i);
#define GLArrayElementEXT OpenGLLoadercontext->glArrayElementEXT
// GLAPI void APIENTRY glColorPointerEXT (GLint size, GLenum type, GLsizei
// stride, GLsizei count, const void *pointer);
#define GLColorPointerEXT OpenGLLoadercontext->glColorPointerEXT
// GLAPI void APIENTRY glDrawArraysEXT (GLenum mode, GLint first, GLsizei
// count);
#define GLDrawArraysEXT OpenGLLoadercontext->glDrawArraysEXT
// GLAPI void APIENTRY glEdgeFlagPointerEXT (GLsizei stride, GLsizei count,
// const GLboolean *pointer);
#define GLEdgeFlagPointerEXT OpenGLLoadercontext->glEdgeFlagPointerEXT
// GLAPI void APIENTRY glGetPointervEXT (GLenum pname, void **params);
#define GLGetPointervEXT OpenGLLoadercontext->glGetPointervEXT
// GLAPI void APIENTRY glIndexPointerEXT (GLenum type, GLsizei stride, GLsizei
// count, const void *pointer);
#define GLIndexPointerEXT OpenGLLoadercontext->glIndexPointerEXT
// GLAPI void APIENTRY glNormalPointerEXT (GLenum type, GLsizei stride, GLsizei
// count, const void *pointer);
#define GLNormalPointerEXT OpenGLLoadercontext->glNormalPointerEXT
// GLAPI void APIENTRY glTexCoordPointerEXT (GLint size, GLenum type, GLsizei
// stride, GLsizei count, const void *pointer);
#define GLTexCoordPointerEXT OpenGLLoadercontext->glTexCoordPointerEXT
// GLAPI void APIENTRY glVertexPointerEXT (GLint size, GLenum type, GLsizei
// stride, GLsizei count, const void *pointer);
#define GLVertexPointerEXT OpenGLLoadercontext->glVertexPointerEXT
// GLAPI void APIENTRY glVertexAttribL1dEXT (GLuint index, GLdouble x);
#define GLVertexAttribL1dEXT OpenGLLoadercontext->glVertexAttribL1dEXT
// GLAPI void APIENTRY glVertexAttribL2dEXT (GLuint index, GLdouble x, GLdouble
// y);
#define GLVertexAttribL2dEXT OpenGLLoadercontext->glVertexAttribL2dEXT
// GLAPI void APIENTRY glVertexAttribL3dEXT (GLuint index, GLdouble x, GLdouble
// y, GLdouble z);
#define GLVertexAttribL3dEXT OpenGLLoadercontext->glVertexAttribL3dEXT
// GLAPI void APIENTRY glVertexAttribL4dEXT (GLuint index, GLdouble x, GLdouble
// y, GLdouble z, GLdouble w);
#define GLVertexAttribL4dEXT OpenGLLoadercontext->glVertexAttribL4dEXT
// GLAPI void APIENTRY glVertexAttribL1dvEXT (GLuint index, const GLdouble *v);
#define GLVertexAttribL1dvEXT OpenGLLoadercontext->glVertexAttribL1dvEXT
// GLAPI void APIENTRY glVertexAttribL2dvEXT (GLuint index, const GLdouble *v);
#define GLVertexAttribL2dvEXT OpenGLLoadercontext->glVertexAttribL2dvEXT
// GLAPI void APIENTRY glVertexAttribL3dvEXT (GLuint index, const GLdouble *v);
#define GLVertexAttribL3dvEXT OpenGLLoadercontext->glVertexAttribL3dvEXT
// GLAPI void APIENTRY glVertexAttribL4dvEXT (GLuint index, const GLdouble *v);
#define GLVertexAttribL4dvEXT OpenGLLoadercontext->glVertexAttribL4dvEXT
// GLAPI void APIENTRY glVertexAttribLPointerEXT (GLuint index, GLint size,
// GLenum type, GLsizei stride, const void *pointer);
#define GLVertexAttribLPointerEXT OpenGLLoadercontext->glVertexAttribLPointerEXT
// GLAPI void APIENTRY glGetVertexAttribLdvEXT (GLuint index, GLenum pname,
// GLdouble *params);
#define GLGetVertexAttribLdvEXT OpenGLLoadercontext->glGetVertexAttribLdvEXT
// GLAPI void APIENTRY glBeginVertexShaderEXT (void);
#define GLBeginVertexShaderEXT OpenGLLoadercontext->glBeginVertexShaderEXT
// GLAPI void APIENTRY glEndVertexShaderEXT (void);
#define GLEndVertexShaderEXT OpenGLLoadercontext->glEndVertexShaderEXT
// GLAPI void APIENTRY glBindVertexShaderEXT (GLuint id);
#define GLBindVertexShaderEXT OpenGLLoadercontext->glBindVertexShaderEXT
// GLAPI GLuint APIENTRY glGenVertexShadersEXT (GLuint range);
#define GLGenVertexShadersEXT OpenGLLoadercontext->glGenVertexShadersEXT
// GLAPI void APIENTRY glDeleteVertexShaderEXT (GLuint id);
#define GLDeleteVertexShaderEXT OpenGLLoadercontext->glDeleteVertexShaderEXT
// GLAPI void APIENTRY glShaderOp1EXT (GLenum op, GLuint res, GLuint arg1);
#define GLShaderOp1EXT OpenGLLoadercontext->glShaderOp1EXT
// GLAPI void APIENTRY glShaderOp2EXT (GLenum op, GLuint res, GLuint arg1,
// GLuint arg2);
#define GLShaderOp2EXT OpenGLLoadercontext->glShaderOp2EXT
// GLAPI void APIENTRY glShaderOp3EXT (GLenum op, GLuint res, GLuint arg1,
// GLuint arg2, GLuint arg3);
#define GLShaderOp3EXT OpenGLLoadercontext->glShaderOp3EXT
// GLAPI void APIENTRY glSwizzleEXT (GLuint res, GLuint in, GLenum outX, GLenum
// outY, GLenum outZ, GLenum outW);
#define GLSwizzleEXT OpenGLLoadercontext->glSwizzleEXT
// GLAPI void APIENTRY glWriteMaskEXT (GLuint res, GLuint in, GLenum outX,
// GLenum outY, GLenum outZ, GLenum outW);
#define GLWriteMaskEXT OpenGLLoadercontext->glWriteMaskEXT
// GLAPI void APIENTRY glInsertComponentEXT (GLuint res, GLuint src, GLuint
// num);
#define GLInsertComponentEXT OpenGLLoadercontext->glInsertComponentEXT
// GLAPI void APIENTRY glExtractComponentEXT (GLuint res, GLuint src, GLuint
// num);
#define GLExtractComponentEXT OpenGLLoadercontext->glExtractComponentEXT
// GLAPI GLuint APIENTRY glGenSymbolsEXT (GLenum datatype, GLenum storagetype,
// GLenum range, GLuint components);
#define GLGenSymbolsEXT OpenGLLoadercontext->glGenSymbolsEXT
// GLAPI void APIENTRY glSetInvariantEXT (GLuint id, GLenum type, const void
// *addr);
#define GLSetInvariantEXT OpenGLLoadercontext->glSetInvariantEXT
// GLAPI void APIENTRY glSetLocalConstantEXT (GLuint id, GLenum type, const void
// *addr);
#define GLSetLocalConstantEXT OpenGLLoadercontext->glSetLocalConstantEXT
// GLAPI void APIENTRY glVariantbvEXT (GLuint id, const GLbyte *addr);
#define GLVariantbvEXT OpenGLLoadercontext->glVariantbvEXT
// GLAPI void APIENTRY glVariantsvEXT (GLuint id, const GLshort *addr);
#define GLVariantsvEXT OpenGLLoadercontext->glVariantsvEXT
// GLAPI void APIENTRY glVariantivEXT (GLuint id, const GLint *addr);
#define GLVariantivEXT OpenGLLoadercontext->glVariantivEXT
// GLAPI void APIENTRY glVariantfvEXT (GLuint id, const GLfloat *addr);
#define GLVariantfvEXT OpenGLLoadercontext->glVariantfvEXT
// GLAPI void APIENTRY glVariantdvEXT (GLuint id, const GLdouble *addr);
#define GLVariantdvEXT OpenGLLoadercontext->glVariantdvEXT
// GLAPI void APIENTRY glVariantubvEXT (GLuint id, const GLubyte *addr);
#define GLVariantubvEXT OpenGLLoadercontext->glVariantubvEXT
// GLAPI void APIENTRY glVariantusvEXT (GLuint id, const GLushort *addr);
#define GLVariantusvEXT OpenGLLoadercontext->glVariantusvEXT
// GLAPI void APIENTRY glVariantuivEXT (GLuint id, const GLuint *addr);
#define GLVariantuivEXT OpenGLLoadercontext->glVariantuivEXT
// GLAPI void APIENTRY glVariantPointerEXT (GLuint id, GLenum type, GLuint
// stride, const void *addr);
#define GLVariantPointerEXT OpenGLLoadercontext->glVariantPointerEXT
// GLAPI void APIENTRY glEnableVariantClientStateEXT (GLuint id);
#define GLEnableVariantClientStateEXT                                          \
  OpenGLLoadercontext->glEnableVariantClientStateEXT
// GLAPI void APIENTRY glDisableVariantClientStateEXT (GLuint id);
#define GLDisableVariantClientStateEXT                                         \
  OpenGLLoadercontext->glDisableVariantClientStateEXT
// GLAPI GLuint APIENTRY glBindLightParameterEXT (GLenum light, GLenum value);
#define GLBindLightParameterEXT OpenGLLoadercontext->glBindLightParameterEXT
// GLAPI GLuint APIENTRY glBindMaterialParameterEXT (GLenum face, GLenum value);
#define GLBindMaterialParameterEXT                                             \
  OpenGLLoadercontext->glBindMaterialParameterEXT
// GLAPI GLuint APIENTRY glBindTexGenParameterEXT (GLenum unit, GLenum coord,
// GLenum value);
#define GLBindTexGenParameterEXT OpenGLLoadercontext->glBindTexGenParameterEXT
// GLAPI GLuint APIENTRY glBindTextureUnitParameterEXT (GLenum unit, GLenum
// value);
#define GLBindTextureUnitParameterEXT                                          \
  OpenGLLoadercontext->glBindTextureUnitParameterEXT
// GLAPI GLuint APIENTRY glBindParameterEXT (GLenum value);
#define GLBindParameterEXT OpenGLLoadercontext->glBindParameterEXT
// GLAPI GLboolean APIENTRY glIsVariantEnabledEXT (GLuint id, GLenum cap);
#define GLIsVariantEnabledEXT OpenGLLoadercontext->glIsVariantEnabledEXT
// GLAPI void APIENTRY glGetVariantBooleanvEXT (GLuint id, GLenum value,
// GLboolean *data);
#define GLGetVariantBooleanvEXT OpenGLLoadercontext->glGetVariantBooleanvEXT
// GLAPI void APIENTRY glGetVariantIntegervEXT (GLuint id, GLenum value, GLint
// *data);
#define GLGetVariantIntegervEXT OpenGLLoadercontext->glGetVariantIntegervEXT
// GLAPI void APIENTRY glGetVariantFloatvEXT (GLuint id, GLenum value, GLfloat
// *data);
#define GLGetVariantFloatvEXT OpenGLLoadercontext->glGetVariantFloatvEXT
// GLAPI void APIENTRY glGetVariantPointervEXT (GLuint id, GLenum value, void
// **data);
#define GLGetVariantPointervEXT OpenGLLoadercontext->glGetVariantPointervEXT
// GLAPI void APIENTRY glGetInvariantBooleanvEXT (GLuint id, GLenum value,
// GLboolean *data);
#define GLGetInvariantBooleanvEXT OpenGLLoadercontext->glGetInvariantBooleanvEXT
// GLAPI void APIENTRY glGetInvariantIntegervEXT (GLuint id, GLenum value, GLint
// *data);
#define GLGetInvariantIntegervEXT OpenGLLoadercontext->glGetInvariantIntegervEXT
// GLAPI void APIENTRY glGetInvariantFloatvEXT (GLuint id, GLenum value, GLfloat
// *data);
#define GLGetInvariantFloatvEXT OpenGLLoadercontext->glGetInvariantFloatvEXT
// GLAPI void APIENTRY glGetLocalConstantBooleanvEXT (GLuint id, GLenum value,
// GLboolean *data);
#define GLGetLocalConstantBooleanvEXT                                          \
  OpenGLLoadercontext->glGetLocalConstantBooleanvEXT
// GLAPI void APIENTRY glGetLocalConstantIntegervEXT (GLuint id, GLenum value,
// GLint *data);
#define GLGetLocalConstantIntegervEXT                                          \
  OpenGLLoadercontext->glGetLocalConstantIntegervEXT
// GLAPI void APIENTRY glGetLocalConstantFloatvEXT (GLuint id, GLenum value,
// GLfloat *data);
#define GLGetLocalConstantFloatvEXT                                            \
  OpenGLLoadercontext->glGetLocalConstantFloatvEXT
// GLAPI void APIENTRY glVertexWeightfEXT (GLfloat weight);
#define GLVertexWeightfEXT OpenGLLoadercontext->glVertexWeightfEXT
// GLAPI void APIENTRY glVertexWeightfvEXT (const GLfloat *weight);
#define GLVertexWeightfvEXT OpenGLLoadercontext->glVertexWeightfvEXT
// GLAPI void APIENTRY glVertexWeightPointerEXT (GLint size, GLenum type,
// GLsizei stride, const void *pointer);
#define GLVertexWeightPointerEXT OpenGLLoadercontext->glVertexWeightPointerEXT
// GLAPI GLboolean APIENTRY glAcquireKeyedMutexWin32EXT (GLuint memory, GLuint64
// key, GLuint timeout);
#define GLAcquireKeyedMutexWin32EXT                                            \
  OpenGLLoadercontext->glAcquireKeyedMutexWin32EXT
// GLAPI GLboolean APIENTRY glReleaseKeyedMutexWin32EXT (GLuint memory, GLuint64
// key);
#define GLReleaseKeyedMutexWin32EXT                                            \
  OpenGLLoadercontext->glReleaseKeyedMutexWin32EXT
// GLAPI void APIENTRY glWindowRectanglesEXT (GLenum mode, GLsizei count, const
// GLint *box);
#define GLWindowRectanglesEXT OpenGLLoadercontext->glWindowRectanglesEXT
// GLAPI GLsync APIENTRY glImportSyncEXT (GLenum external_sync_type, GLintptr
// external_sync, GLbitfield flags);
#define GLImportSyncEXT OpenGLLoadercontext->glImportSyncEXT
// GLAPI void APIENTRY glFrameTerminatorGREMEDY (void);
#define GLFrameTerminatorGREMEDY OpenGLLoadercontext->glFrameTerminatorGREMEDY
// GLAPI void APIENTRY glStringMarkerGREMEDY (GLsizei len, const void *string);
#define GLStringMarkerGREMEDY OpenGLLoadercontext->glStringMarkerGREMEDY
// GLAPI void APIENTRY glImageTransformParameteriHP (GLenum target, GLenum
// pname, GLint param);
#define GLImageTransformParameteriHP                                           \
  OpenGLLoadercontext->glImageTransformParameteriHP
// GLAPI void APIENTRY glImageTransformParameterfHP (GLenum target, GLenum
// pname, GLfloat param);
#define GLImageTransformParameterfHP                                           \
  OpenGLLoadercontext->glImageTransformParameterfHP
// GLAPI void APIENTRY glImageTransformParameterivHP (GLenum target, GLenum
// pname, const GLint *params);
#define GLImageTransformParameterivHP                                          \
  OpenGLLoadercontext->glImageTransformParameterivHP
// GLAPI void APIENTRY glImageTransformParameterfvHP (GLenum target, GLenum
// pname, const GLfloat *params);
#define GLImageTransformParameterfvHP                                          \
  OpenGLLoadercontext->glImageTransformParameterfvHP
// GLAPI void APIENTRY glGetImageTransformParameterivHP (GLenum target, GLenum
// pname, GLint *params);
#define GLGetImageTransformParameterivHP                                       \
  OpenGLLoadercontext->glGetImageTransformParameterivHP
// GLAPI void APIENTRY glGetImageTransformParameterfvHP (GLenum target, GLenum
// pname, GLfloat *params);
#define GLGetImageTransformParameterfvHP                                       \
  OpenGLLoadercontext->glGetImageTransformParameterfvHP
// GLAPI void APIENTRY glMultiModeDrawArraysIBM (const GLenum *mode, const GLint
// *first, const GLsizei *count, GLsizei primcount, GLint modestride);
#define GLMultiModeDrawArraysIBM OpenGLLoadercontext->glMultiModeDrawArraysIBM
// GLAPI void APIENTRY glMultiModeDrawElementsIBM (const GLenum *mode, const
// GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount,
// GLint modestride);
#define GLMultiModeDrawElementsIBM                                             \
  OpenGLLoadercontext->glMultiModeDrawElementsIBM
// GLAPI void APIENTRY glFlushStaticDataIBM (GLenum target);
#define GLFlushStaticDataIBM OpenGLLoadercontext->glFlushStaticDataIBM
// GLAPI void APIENTRY glColorPointerListIBM (GLint size, GLenum type, GLint
// stride, const void **pointer, GLint ptrstride);
#define GLColorPointerListIBM OpenGLLoadercontext->glColorPointerListIBM
// GLAPI void APIENTRY glSecondaryColorPointerListIBM (GLint size, GLenum type,
// GLint stride, const void **pointer, GLint ptrstride);
#define GLSecondaryColorPointerListIBM                                         \
  OpenGLLoadercontext->glSecondaryColorPointerListIBM
// GLAPI void APIENTRY glEdgeFlagPointerListIBM (GLint stride, const GLboolean
// **pointer, GLint ptrstride);
#define GLEdgeFlagPointerListIBM OpenGLLoadercontext->glEdgeFlagPointerListIBM
// GLAPI void APIENTRY glFogCoordPointerListIBM (GLenum type, GLint stride,
// const void **pointer, GLint ptrstride);
#define GLFogCoordPointerListIBM OpenGLLoadercontext->glFogCoordPointerListIBM
// GLAPI void APIENTRY glIndexPointerListIBM (GLenum type, GLint stride, const
// void **pointer, GLint ptrstride);
#define GLIndexPointerListIBM OpenGLLoadercontext->glIndexPointerListIBM
// GLAPI void APIENTRY glNormalPointerListIBM (GLenum type, GLint stride, const
// void **pointer, GLint ptrstride);
#define GLNormalPointerListIBM OpenGLLoadercontext->glNormalPointerListIBM
// GLAPI void APIENTRY glTexCoordPointerListIBM (GLint size, GLenum type, GLint
// stride, const void **pointer, GLint ptrstride);
#define GLTexCoordPointerListIBM OpenGLLoadercontext->glTexCoordPointerListIBM
// GLAPI void APIENTRY glVertexPointerListIBM (GLint size, GLenum type, GLint
// stride, const void **pointer, GLint ptrstride);
#define GLVertexPointerListIBM OpenGLLoadercontext->glVertexPointerListIBM
// GLAPI void APIENTRY glBlendFuncSeparateINGR (GLenum sfactorRGB, GLenum
// dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
#define GLBlendFuncSeparateINGR OpenGLLoadercontext->glBlendFuncSeparateINGR
// GLAPI void APIENTRY glApplyFramebufferAttachmentCMAAINTEL (void);
#define GLApplyFramebufferAttachmentCMAAINTEL                                  \
  OpenGLLoadercontext->glApplyFramebufferAttachmentCMAAINTEL
// GLAPI void APIENTRY glSyncTextureINTEL (GLuint texture);
#define GLSyncTextureINTEL OpenGLLoadercontext->glSyncTextureINTEL
// GLAPI void APIENTRY glUnmapTexture2DINTEL (GLuint texture, GLint level);
#define GLUnmapTexture2DINTEL OpenGLLoadercontext->glUnmapTexture2DINTEL
// GLAPI void *APIENTRY glMapTexture2DINTEL (GLuint texture, GLint level,
// GLbitfield access, GLint *stride, GLenum *layout);
#define GLMapTexture2DINTEL OpenGLLoadercontext->glMapTexture2DINTEL
// GLAPI void APIENTRY glVertexPointervINTEL (GLint size, GLenum type, const
// void **pointer);
#define GLVertexPointervINTEL OpenGLLoadercontext->glVertexPointervINTEL
// GLAPI void APIENTRY glNormalPointervINTEL (GLenum type, const void
// **pointer);
#define GLNormalPointervINTEL OpenGLLoadercontext->glNormalPointervINTEL
// GLAPI void APIENTRY glColorPointervINTEL (GLint size, GLenum type, const void
// **pointer);
#define GLColorPointervINTEL OpenGLLoadercontext->glColorPointervINTEL
// GLAPI void APIENTRY glTexCoordPointervINTEL (GLint size, GLenum type, const
// void **pointer);
#define GLTexCoordPointervINTEL OpenGLLoadercontext->glTexCoordPointervINTEL
// GLAPI void APIENTRY glBeginPerfQueryINTEL (GLuint queryHandle);
#define GLBeginPerfQueryINTEL OpenGLLoadercontext->glBeginPerfQueryINTEL
// GLAPI void APIENTRY glCreatePerfQueryINTEL (GLuint queryId, GLuint
// *queryHandle);
#define GLCreatePerfQueryINTEL OpenGLLoadercontext->glCreatePerfQueryINTEL
// GLAPI void APIENTRY glDeletePerfQueryINTEL (GLuint queryHandle);
#define GLDeletePerfQueryINTEL OpenGLLoadercontext->glDeletePerfQueryINTEL
// GLAPI void APIENTRY glEndPerfQueryINTEL (GLuint queryHandle);
#define GLEndPerfQueryINTEL OpenGLLoadercontext->glEndPerfQueryINTEL
// GLAPI void APIENTRY glGetFirstPerfQueryIdINTEL (GLuint *queryId);
#define GLGetFirstPerfQueryIdINTEL                                             \
  OpenGLLoadercontext->glGetFirstPerfQueryIdINTEL
// GLAPI void APIENTRY glGetNextPerfQueryIdINTEL (GLuint queryId, GLuint
// *nextQueryId);
#define GLGetNextPerfQueryIdINTEL OpenGLLoadercontext->glGetNextPerfQueryIdINTEL
// GLAPI void APIENTRY glGetPerfCounterInfoINTEL (GLuint queryId, GLuint
// counterId, GLuint counterNameLength, GLchar *counterName, GLuint
// counterDescLength, GLchar *counterDesc, GLuint *counterOffset, GLuint
// *counterDataSize, GLuint *counterTypeEnum, GLuint *counterDataTypeEnum,
// GLuint64 *rawCounterMaxValue);
#define GLGetPerfCounterInfoINTEL OpenGLLoadercontext->glGetPerfCounterInfoINTEL
// GLAPI void APIENTRY glGetPerfQueryDataINTEL (GLuint queryHandle, GLuint
// flags, GLsizei dataSize, void *data, GLuint *bytesWritten);
#define GLGetPerfQueryDataINTEL OpenGLLoadercontext->glGetPerfQueryDataINTEL
// GLAPI void APIENTRY glGetPerfQueryIdByNameINTEL (GLchar *queryName, GLuint
// *queryId);
#define GLGetPerfQueryIdByNameINTEL                                            \
  OpenGLLoadercontext->glGetPerfQueryIdByNameINTEL
// GLAPI void APIENTRY glGetPerfQueryInfoINTEL (GLuint queryId, GLuint
// queryNameLength, GLchar *queryName, GLuint *dataSize, GLuint *noCounters,
// GLuint *noInstances, GLuint *capsMask);
#define GLGetPerfQueryInfoINTEL OpenGLLoadercontext->glGetPerfQueryInfoINTEL
// GLAPI void APIENTRY glFramebufferParameteriMESA (GLenum target, GLenum pname,
// GLint param);
#define GLFramebufferParameteriMESA                                            \
  OpenGLLoadercontext->glFramebufferParameteriMESA
// GLAPI void APIENTRY glGetFramebufferParameterivMESA (GLenum target, GLenum
// pname, GLint *params);
#define GLGetFramebufferParameterivMESA                                        \
  OpenGLLoadercontext->glGetFramebufferParameterivMESA
// GLAPI void APIENTRY glResizeBuffersMESA (void);
#define GLResizeBuffersMESA OpenGLLoadercontext->glResizeBuffersMESA
// GLAPI void APIENTRY glWindowPos2dMESA (GLdouble x, GLdouble y);
#define GLWindowPos2dMESA OpenGLLoadercontext->glWindowPos2dMESA
// GLAPI void APIENTRY glWindowPos2dvMESA (const GLdouble *v);
#define GLWindowPos2dvMESA OpenGLLoadercontext->glWindowPos2dvMESA
// GLAPI void APIENTRY glWindowPos2fMESA (GLfloat x, GLfloat y);
#define GLWindowPos2fMESA OpenGLLoadercontext->glWindowPos2fMESA
// GLAPI void APIENTRY glWindowPos2fvMESA (const GLfloat *v);
#define GLWindowPos2fvMESA OpenGLLoadercontext->glWindowPos2fvMESA
// GLAPI void APIENTRY glWindowPos2iMESA (GLint x, GLint y);
#define GLWindowPos2iMESA OpenGLLoadercontext->glWindowPos2iMESA
// GLAPI void APIENTRY glWindowPos2ivMESA (const GLint *v);
#define GLWindowPos2ivMESA OpenGLLoadercontext->glWindowPos2ivMESA
// GLAPI void APIENTRY glWindowPos2sMESA (GLshort x, GLshort y);
#define GLWindowPos2sMESA OpenGLLoadercontext->glWindowPos2sMESA
// GLAPI void APIENTRY glWindowPos2svMESA (const GLshort *v);
#define GLWindowPos2svMESA OpenGLLoadercontext->glWindowPos2svMESA
// GLAPI void APIENTRY glWindowPos3dMESA (GLdouble x, GLdouble y, GLdouble z);
#define GLWindowPos3dMESA OpenGLLoadercontext->glWindowPos3dMESA
// GLAPI void APIENTRY glWindowPos3dvMESA (const GLdouble *v);
#define GLWindowPos3dvMESA OpenGLLoadercontext->glWindowPos3dvMESA
// GLAPI void APIENTRY glWindowPos3fMESA (GLfloat x, GLfloat y, GLfloat z);
#define GLWindowPos3fMESA OpenGLLoadercontext->glWindowPos3fMESA
// GLAPI void APIENTRY glWindowPos3fvMESA (const GLfloat *v);
#define GLWindowPos3fvMESA OpenGLLoadercontext->glWindowPos3fvMESA
// GLAPI void APIENTRY glWindowPos3iMESA (GLint x, GLint y, GLint z);
#define GLWindowPos3iMESA OpenGLLoadercontext->glWindowPos3iMESA
// GLAPI void APIENTRY glWindowPos3ivMESA (const GLint *v);
#define GLWindowPos3ivMESA OpenGLLoadercontext->glWindowPos3ivMESA
// GLAPI void APIENTRY glWindowPos3sMESA (GLshort x, GLshort y, GLshort z);
#define GLWindowPos3sMESA OpenGLLoadercontext->glWindowPos3sMESA
// GLAPI void APIENTRY glWindowPos3svMESA (const GLshort *v);
#define GLWindowPos3svMESA OpenGLLoadercontext->glWindowPos3svMESA
// GLAPI void APIENTRY glWindowPos4dMESA (GLdouble x, GLdouble y, GLdouble z,
// GLdouble w);
#define GLWindowPos4dMESA OpenGLLoadercontext->glWindowPos4dMESA
// GLAPI void APIENTRY glWindowPos4dvMESA (const GLdouble *v);
#define GLWindowPos4dvMESA OpenGLLoadercontext->glWindowPos4dvMESA
// GLAPI void APIENTRY glWindowPos4fMESA (GLfloat x, GLfloat y, GLfloat z,
// GLfloat w);
#define GLWindowPos4fMESA OpenGLLoadercontext->glWindowPos4fMESA
// GLAPI void APIENTRY glWindowPos4fvMESA (const GLfloat *v);
#define GLWindowPos4fvMESA OpenGLLoadercontext->glWindowPos4fvMESA
// GLAPI void APIENTRY glWindowPos4iMESA (GLint x, GLint y, GLint z, GLint w);
#define GLWindowPos4iMESA OpenGLLoadercontext->glWindowPos4iMESA
// GLAPI void APIENTRY glWindowPos4ivMESA (const GLint *v);
#define GLWindowPos4ivMESA OpenGLLoadercontext->glWindowPos4ivMESA
// GLAPI void APIENTRY glWindowPos4sMESA (GLshort x, GLshort y, GLshort z,
// GLshort w);
#define GLWindowPos4sMESA OpenGLLoadercontext->glWindowPos4sMESA
// GLAPI void APIENTRY glWindowPos4svMESA (const GLshort *v);
#define GLWindowPos4svMESA OpenGLLoadercontext->glWindowPos4svMESA
// GLAPI void APIENTRY glBeginConditionalRenderNVX (GLuint id);
#define GLBeginConditionalRenderNVX                                            \
  OpenGLLoadercontext->glBeginConditionalRenderNVX
// GLAPI void APIENTRY glEndConditionalRenderNVX (void);
#define GLEndConditionalRenderNVX OpenGLLoadercontext->glEndConditionalRenderNVX
// GLAPI void APIENTRY glUploadGpuMaskNVX (GLbitfield mask);
#define GLUploadGpuMaskNVX OpenGLLoadercontext->glUploadGpuMaskNVX
// GLAPI void APIENTRY glMulticastViewportArrayvNVX (GLuint gpu, GLuint first,
// GLsizei count, const GLfloat *v);
#define GLMulticastViewportArrayvNVX                                           \
  OpenGLLoadercontext->glMulticastViewportArrayvNVX
// GLAPI void APIENTRY glMulticastViewportPositionWScaleNVX (GLuint gpu, GLuint
// index, GLfloat xcoeff, GLfloat ycoeff);
#define GLMulticastViewportPositionWScaleNVX                                   \
  OpenGLLoadercontext->glMulticastViewportPositionWScaleNVX
// GLAPI void APIENTRY glMulticastScissorArrayvNVX (GLuint gpu, GLuint first,
// GLsizei count, const GLint *v);
#define GLMulticastScissorArrayvNVX                                            \
  OpenGLLoadercontext->glMulticastScissorArrayvNVX
// GLAPI GLuint APIENTRY glAsyncCopyBufferSubDataNVX (GLsizei
// waitSemaphoreCount, const GLuint *waitSemaphoreArray, const GLuint64
// *fenceValueArray, GLuint readGpu, GLbitfield writeGpuMask, GLuint readBuffer,
// GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr
// size, GLsizei signalSemaphoreCount, const GLuint *signalSemaphoreArray, const
// GLuint64 *signalValueArray);
#define GLAsyncCopyBufferSubDataNVX                                            \
  OpenGLLoadercontext->glAsyncCopyBufferSubDataNVX
// GLAPI GLuint APIENTRY glAsyncCopyImageSubDataNVX (GLsizei waitSemaphoreCount,
// const GLuint *waitSemaphoreArray, const GLuint64 *waitValueArray, GLuint
// srcGpu, GLbitfield dstGpuMask, GLuint srcName, GLenum srcTarget, GLint
// srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum
// dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei
// srcWidth, GLsizei srcHeight, GLsizei srcDepth, GLsizei signalSemaphoreCount,
// const GLuint *signalSemaphoreArray, const GLuint64 *signalValueArray);
#define GLAsyncCopyImageSubDataNVX                                             \
  OpenGLLoadercontext->glAsyncCopyImageSubDataNVX
// GLAPI void APIENTRY glLGPUNamedBufferSubDataNVX (GLbitfield gpuMask, GLuint
// buffer, GLintptr offset, GLsizeiptr size, const void *data);
#define GLLGPUNamedBufferSubDataNVX                                            \
  OpenGLLoadercontext->glLGPUNamedBufferSubDataNVX
// GLAPI void APIENTRY glLGPUCopyImageSubDataNVX (GLuint sourceGpu, GLbitfield
// destinationGpuMask, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint
// srcX, GLint srxY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint
// dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height,
// GLsizei depth);
#define GLLGPUCopyImageSubDataNVX OpenGLLoadercontext->glLGPUCopyImageSubDataNVX
// GLAPI void APIENTRY glLGPUInterlockNVX (void);
#define GLLGPUInterlockNVX OpenGLLoadercontext->glLGPUInterlockNVX
// GLAPI GLuint APIENTRY glCreateProgressFenceNVX (void);
#define GLCreateProgressFenceNVX OpenGLLoadercontext->glCreateProgressFenceNVX
// GLAPI void APIENTRY glSignalSemaphoreui64NVX (GLuint signalGpu, GLsizei
// fenceObjectCount, const GLuint *semaphoreArray, const GLuint64
// *fenceValueArray);
#define GLSignalSemaphoreui64NVX OpenGLLoadercontext->glSignalSemaphoreui64NVX
// GLAPI void APIENTRY glWaitSemaphoreui64NVX (GLuint waitGpu, GLsizei
// fenceObjectCount, const GLuint *semaphoreArray, const GLuint64
// *fenceValueArray);
#define GLWaitSemaphoreui64NVX OpenGLLoadercontext->glWaitSemaphoreui64NVX
// GLAPI void APIENTRY glClientWaitSemaphoreui64NVX (GLsizei fenceObjectCount,
// const GLuint *semaphoreArray, const GLuint64 *fenceValueArray);
#define GLClientWaitSemaphoreui64NVX                                           \
  OpenGLLoadercontext->glClientWaitSemaphoreui64NVX
// GLAPI void APIENTRY glAlphaToCoverageDitherControlNV (GLenum mode);
#define GLAlphaToCoverageDitherControlNV                                       \
  OpenGLLoadercontext->glAlphaToCoverageDitherControlNV
// GLAPI void APIENTRY glMultiDrawArraysIndirectBindlessNV (GLenum mode, const
// void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);
#define GLMultiDrawArraysIndirectBindlessNV                                    \
  OpenGLLoadercontext->glMultiDrawArraysIndirectBindlessNV
// GLAPI void APIENTRY glMultiDrawElementsIndirectBindlessNV (GLenum mode,
// GLenum type, const void *indirect, GLsizei drawCount, GLsizei stride, GLint
// vertexBufferCount);
#define GLMultiDrawElementsIndirectBindlessNV                                  \
  OpenGLLoadercontext->glMultiDrawElementsIndirectBindlessNV
// GLAPI void APIENTRY glMultiDrawArraysIndirectBindlessCountNV (GLenum mode,
// const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei
// stride, GLint vertexBufferCount);
#define GLMultiDrawArraysIndirectBindlessCountNV                               \
  OpenGLLoadercontext->glMultiDrawArraysIndirectBindlessCountNV
// GLAPI void APIENTRY glMultiDrawElementsIndirectBindlessCountNV (GLenum mode,
// GLenum type, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount,
// GLsizei stride, GLint vertexBufferCount);
#define GLMultiDrawElementsIndirectBindlessCountNV                             \
  OpenGLLoadercontext->glMultiDrawElementsIndirectBindlessCountNV
// GLAPI GLuint64 APIENTRY glGetTextureHandleNV (GLuint texture);
#define GLGetTextureHandleNV OpenGLLoadercontext->glGetTextureHandleNV
// GLAPI GLuint64 APIENTRY glGetTextureSamplerHandleNV (GLuint texture, GLuint
// sampler);
#define GLGetTextureSamplerHandleNV                                            \
  OpenGLLoadercontext->glGetTextureSamplerHandleNV
// GLAPI void APIENTRY glMakeTextureHandleResidentNV (GLuint64 handle);
#define GLMakeTextureHandleResidentNV                                          \
  OpenGLLoadercontext->glMakeTextureHandleResidentNV
// GLAPI void APIENTRY glMakeTextureHandleNonResidentNV (GLuint64 handle);
#define GLMakeTextureHandleNonResidentNV                                       \
  OpenGLLoadercontext->glMakeTextureHandleNonResidentNV
// GLAPI GLuint64 APIENTRY glGetImageHandleNV (GLuint texture, GLint level,
// GLboolean layered, GLint layer, GLenum format);
#define GLGetImageHandleNV OpenGLLoadercontext->glGetImageHandleNV
// GLAPI void APIENTRY glMakeImageHandleResidentNV (GLuint64 handle, GLenum
// access);
#define GLMakeImageHandleResidentNV                                            \
  OpenGLLoadercontext->glMakeImageHandleResidentNV
// GLAPI void APIENTRY glMakeImageHandleNonResidentNV (GLuint64 handle);
#define GLMakeImageHandleNonResidentNV                                         \
  OpenGLLoadercontext->glMakeImageHandleNonResidentNV
// GLAPI void APIENTRY glUniformHandleui64NV (GLint location, GLuint64 value);
#define GLUniformHandleui64NV OpenGLLoadercontext->glUniformHandleui64NV
// GLAPI void APIENTRY glUniformHandleui64vNV (GLint location, GLsizei count,
// const GLuint64 *value);
#define GLUniformHandleui64vNV OpenGLLoadercontext->glUniformHandleui64vNV
// GLAPI void APIENTRY glProgramUniformHandleui64NV (GLuint program, GLint
// location, GLuint64 value);
#define GLProgramUniformHandleui64NV                                           \
  OpenGLLoadercontext->glProgramUniformHandleui64NV
// GLAPI void APIENTRY glProgramUniformHandleui64vNV (GLuint program, GLint
// location, GLsizei count, const GLuint64 *values);
#define GLProgramUniformHandleui64vNV                                          \
  OpenGLLoadercontext->glProgramUniformHandleui64vNV
// GLAPI GLboolean APIENTRY glIsTextureHandleResidentNV (GLuint64 handle);
#define GLIsTextureHandleResidentNV                                            \
  OpenGLLoadercontext->glIsTextureHandleResidentNV
// GLAPI GLboolean APIENTRY glIsImageHandleResidentNV (GLuint64 handle);
#define GLIsImageHandleResidentNV OpenGLLoadercontext->glIsImageHandleResidentNV
// GLAPI void APIENTRY glBlendParameteriNV (GLenum pname, GLint value);
#define GLBlendParameteriNV OpenGLLoadercontext->glBlendParameteriNV
// GLAPI void APIENTRY glBlendBarrierNV (void);
#define GLBlendBarrierNV OpenGLLoadercontext->glBlendBarrierNV
// GLAPI void APIENTRY glViewportPositionWScaleNV (GLuint index, GLfloat xcoeff,
// GLfloat ycoeff);
#define GLViewportPositionWScaleNV                                             \
  OpenGLLoadercontext->glViewportPositionWScaleNV
// GLAPI void APIENTRY glCreateStatesNV (GLsizei n, GLuint *states);
#define GLCreateStatesNV OpenGLLoadercontext->glCreateStatesNV
// GLAPI void APIENTRY glDeleteStatesNV (GLsizei n, const GLuint *states);
#define GLDeleteStatesNV OpenGLLoadercontext->glDeleteStatesNV
// GLAPI GLboolean APIENTRY glIsStateNV (GLuint state);
#define GLIsStateNV OpenGLLoadercontext->glIsStateNV
// GLAPI void APIENTRY glStateCaptureNV (GLuint state, GLenum mode);
#define GLStateCaptureNV OpenGLLoadercontext->glStateCaptureNV
// GLAPI GLuint APIENTRY glGetCommandHeaderNV (GLenum tokenID, GLuint size);
#define GLGetCommandHeaderNV OpenGLLoadercontext->glGetCommandHeaderNV
// GLAPI GLushort APIENTRY glGetStageIndexNV (GLenum shadertype);
#define GLGetStageIndexNV OpenGLLoadercontext->glGetStageIndexNV
// GLAPI void APIENTRY glDrawCommandsNV (GLenum primitiveMode, GLuint buffer,
// const GLintptr *indirects, const GLsizei *sizes, GLuint count);
#define GLDrawCommandsNV OpenGLLoadercontext->glDrawCommandsNV
// GLAPI void APIENTRY glDrawCommandsAddressNV (GLenum primitiveMode, const
// GLuint64 *indirects, const GLsizei *sizes, GLuint count);
#define GLDrawCommandsAddressNV OpenGLLoadercontext->glDrawCommandsAddressNV
// GLAPI void APIENTRY glDrawCommandsStatesNV (GLuint buffer, const GLintptr
// *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos,
// GLuint count);
#define GLDrawCommandsStatesNV OpenGLLoadercontext->glDrawCommandsStatesNV
// GLAPI void APIENTRY glDrawCommandsStatesAddressNV (const GLuint64 *indirects,
// const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint
// count);
#define GLDrawCommandsStatesAddressNV                                          \
  OpenGLLoadercontext->glDrawCommandsStatesAddressNV
// GLAPI void APIENTRY glCreateCommandListsNV (GLsizei n, GLuint *lists);
#define GLCreateCommandListsNV OpenGLLoadercontext->glCreateCommandListsNV
// GLAPI void APIENTRY glDeleteCommandListsNV (GLsizei n, const GLuint *lists);
#define GLDeleteCommandListsNV OpenGLLoadercontext->glDeleteCommandListsNV
// GLAPI GLboolean APIENTRY glIsCommandListNV (GLuint list);
#define GLIsCommandListNV OpenGLLoadercontext->glIsCommandListNV
// GLAPI void APIENTRY glListDrawCommandsStatesClientNV (GLuint list, GLuint
// segment, const void **indirects, const GLsizei *sizes, const GLuint *states,
// const GLuint *fbos, GLuint count);
#define GLListDrawCommandsStatesClientNV                                       \
  OpenGLLoadercontext->glListDrawCommandsStatesClientNV
// GLAPI void APIENTRY glCommandListSegmentsNV (GLuint list, GLuint segments);
#define GLCommandListSegmentsNV OpenGLLoadercontext->glCommandListSegmentsNV
// GLAPI void APIENTRY glCompileCommandListNV (GLuint list);
#define GLCompileCommandListNV OpenGLLoadercontext->glCompileCommandListNV
// GLAPI void APIENTRY glCallCommandListNV (GLuint list);
#define GLCallCommandListNV OpenGLLoadercontext->glCallCommandListNV
// GLAPI void APIENTRY glBeginConditionalRenderNV (GLuint id, GLenum mode);
#define GLBeginConditionalRenderNV                                             \
  OpenGLLoadercontext->glBeginConditionalRenderNV
// GLAPI void APIENTRY glEndConditionalRenderNV (void);
#define GLEndConditionalRenderNV OpenGLLoadercontext->glEndConditionalRenderNV
// GLAPI void APIENTRY glSubpixelPrecisionBiasNV (GLuint xbits, GLuint ybits);
#define GLSubpixelPrecisionBiasNV OpenGLLoadercontext->glSubpixelPrecisionBiasNV
// GLAPI void APIENTRY glConservativeRasterParameterfNV (GLenum pname, GLfloat
// value);
#define GLConservativeRasterParameterfNV                                       \
  OpenGLLoadercontext->glConservativeRasterParameterfNV
// GLAPI void APIENTRY glConservativeRasterParameteriNV (GLenum pname, GLint
// param);
#define GLConservativeRasterParameteriNV                                       \
  OpenGLLoadercontext->glConservativeRasterParameteriNV
// GLAPI void APIENTRY glCopyImageSubDataNV (GLuint srcName, GLenum srcTarget,
// GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum
// dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width,
// GLsizei height, GLsizei depth);
#define GLCopyImageSubDataNV OpenGLLoadercontext->glCopyImageSubDataNV
// GLAPI void APIENTRY glDepthRangedNV (GLdouble zNear, GLdouble zFar);
#define GLDepthRangedNV OpenGLLoadercontext->glDepthRangedNV
// GLAPI void APIENTRY glClearDepthdNV (GLdouble depth);
#define GLClearDepthdNV OpenGLLoadercontext->glClearDepthdNV
// GLAPI void APIENTRY glDepthBoundsdNV (GLdouble zmin, GLdouble zmax);
#define GLDepthBoundsdNV OpenGLLoadercontext->glDepthBoundsdNV
// GLAPI void APIENTRY glDrawTextureNV (GLuint texture, GLuint sampler, GLfloat
// x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0,
// GLfloat s1, GLfloat t1);
#define GLDrawTextureNV OpenGLLoadercontext->glDrawTextureNV
// GLAPI void APIENTRY glDrawVkImageNV (GLuint64 vkImage, GLuint sampler,
// GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0,
// GLfloat t0, GLfloat s1, GLfloat t1);
#define GLDrawVkImageNV OpenGLLoadercontext->glDrawVkImageNV
// GLAPI GLVULKANPROCNV APIENTRY glGetVkProcAddrNV (const GLchar *name);
#define GLGetVkProcAddrNV OpenGLLoadercontext->glGetVkProcAddrNV
// GLAPI void APIENTRY glWaitVkSemaphoreNV (GLuint64 vkSemaphore);
#define GLWaitVkSemaphoreNV OpenGLLoadercontext->glWaitVkSemaphoreNV
// GLAPI void APIENTRY glSignalVkSemaphoreNV (GLuint64 vkSemaphore);
#define GLSignalVkSemaphoreNV OpenGLLoadercontext->glSignalVkSemaphoreNV
// GLAPI void APIENTRY glSignalVkFenceNV (GLuint64 vkFence);
#define GLSignalVkFenceNV OpenGLLoadercontext->glSignalVkFenceNV
// GLAPI void APIENTRY glMapControlPointsNV (GLenum target, GLuint index, GLenum
// type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean
// packed, const void *points);
#define GLMapControlPointsNV OpenGLLoadercontext->glMapControlPointsNV
// GLAPI void APIENTRY glMapParameterivNV (GLenum target, GLenum pname, const
// GLint *params);
#define GLMapParameterivNV OpenGLLoadercontext->glMapParameterivNV
// GLAPI void APIENTRY glMapParameterfvNV (GLenum target, GLenum pname, const
// GLfloat *params);
#define GLMapParameterfvNV OpenGLLoadercontext->glMapParameterfvNV
// GLAPI void APIENTRY glGetMapControlPointsNV (GLenum target, GLuint index,
// GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void
// *points);
#define GLGetMapControlPointsNV OpenGLLoadercontext->glGetMapControlPointsNV
// GLAPI void APIENTRY glGetMapParameterivNV (GLenum target, GLenum pname, GLint
// *params);
#define GLGetMapParameterivNV OpenGLLoadercontext->glGetMapParameterivNV
// GLAPI void APIENTRY glGetMapParameterfvNV (GLenum target, GLenum pname,
// GLfloat *params);
#define GLGetMapParameterfvNV OpenGLLoadercontext->glGetMapParameterfvNV
// GLAPI void APIENTRY glGetMapAttribParameterivNV (GLenum target, GLuint index,
// GLenum pname, GLint *params);
#define GLGetMapAttribParameterivNV                                            \
  OpenGLLoadercontext->glGetMapAttribParameterivNV
// GLAPI void APIENTRY glGetMapAttribParameterfvNV (GLenum target, GLuint index,
// GLenum pname, GLfloat *params);
#define GLGetMapAttribParameterfvNV                                            \
  OpenGLLoadercontext->glGetMapAttribParameterfvNV
// GLAPI void APIENTRY glEvalMapsNV (GLenum target, GLenum mode);
#define GLEvalMapsNV OpenGLLoadercontext->glEvalMapsNV
// GLAPI void APIENTRY glGetMultisamplefvNV (GLenum pname, GLuint index, GLfloat
// *val);
#define GLGetMultisamplefvNV OpenGLLoadercontext->glGetMultisamplefvNV
// GLAPI void APIENTRY glSampleMaskIndexedNV (GLuint index, GLbitfield mask);
#define GLSampleMaskIndexedNV OpenGLLoadercontext->glSampleMaskIndexedNV
// GLAPI void APIENTRY glTexRenderbufferNV (GLenum target, GLuint renderbuffer);
#define GLTexRenderbufferNV OpenGLLoadercontext->glTexRenderbufferNV
// GLAPI void APIENTRY glDeleteFencesNV (GLsizei n, const GLuint *fences);
#define GLDeleteFencesNV OpenGLLoadercontext->glDeleteFencesNV
// GLAPI void APIENTRY glGenFencesNV (GLsizei n, GLuint *fences);
#define GLGenFencesNV OpenGLLoadercontext->glGenFencesNV
// GLAPI GLboolean APIENTRY glIsFenceNV (GLuint fence);
#define GLIsFenceNV OpenGLLoadercontext->glIsFenceNV
// GLAPI GLboolean APIENTRY glTestFenceNV (GLuint fence);
#define GLTestFenceNV OpenGLLoadercontext->glTestFenceNV
// GLAPI void APIENTRY glGetFenceivNV (GLuint fence, GLenum pname, GLint
// *params);
#define GLGetFenceivNV OpenGLLoadercontext->glGetFenceivNV
// GLAPI void APIENTRY glFinishFenceNV (GLuint fence);
#define GLFinishFenceNV OpenGLLoadercontext->glFinishFenceNV
// GLAPI void APIENTRY glSetFenceNV (GLuint fence, GLenum condition);
#define GLSetFenceNV OpenGLLoadercontext->glSetFenceNV
// GLAPI void APIENTRY glFragmentCoverageColorNV (GLuint color);
#define GLFragmentCoverageColorNV OpenGLLoadercontext->glFragmentCoverageColorNV
// GLAPI void APIENTRY glProgramNamedParameter4fNV (GLuint id, GLsizei len,
// const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
#define GLProgramNamedParameter4fNV                                            \
  OpenGLLoadercontext->glProgramNamedParameter4fNV
// GLAPI void APIENTRY glProgramNamedParameter4fvNV (GLuint id, GLsizei len,
// const GLubyte *name, const GLfloat *v);
#define GLProgramNamedParameter4fvNV                                           \
  OpenGLLoadercontext->glProgramNamedParameter4fvNV
// GLAPI void APIENTRY glProgramNamedParameter4dNV (GLuint id, GLsizei len,
// const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
#define GLProgramNamedParameter4dNV                                            \
  OpenGLLoadercontext->glProgramNamedParameter4dNV
// GLAPI void APIENTRY glProgramNamedParameter4dvNV (GLuint id, GLsizei len,
// const GLubyte *name, const GLdouble *v);
#define GLProgramNamedParameter4dvNV                                           \
  OpenGLLoadercontext->glProgramNamedParameter4dvNV
// GLAPI void APIENTRY glGetProgramNamedParameterfvNV (GLuint id, GLsizei len,
// const GLubyte *name, GLfloat *params);
#define GLGetProgramNamedParameterfvNV                                         \
  OpenGLLoadercontext->glGetProgramNamedParameterfvNV
// GLAPI void APIENTRY glGetProgramNamedParameterdvNV (GLuint id, GLsizei len,
// const GLubyte *name, GLdouble *params);
#define GLGetProgramNamedParameterdvNV                                         \
  OpenGLLoadercontext->glGetProgramNamedParameterdvNV
// GLAPI void APIENTRY glCoverageModulationTableNV (GLsizei n, const GLfloat
// *v);
#define GLCoverageModulationTableNV                                            \
  OpenGLLoadercontext->glCoverageModulationTableNV
// GLAPI void APIENTRY glGetCoverageModulationTableNV (GLsizei bufSize, GLfloat
// *v);
#define GLGetCoverageModulationTableNV                                         \
  OpenGLLoadercontext->glGetCoverageModulationTableNV
// GLAPI void APIENTRY glCoverageModulationNV (GLenum components);
#define GLCoverageModulationNV OpenGLLoadercontext->glCoverageModulationNV
// GLAPI void APIENTRY glRenderbufferStorageMultisampleCoverageNV (GLenum
// target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat,
// GLsizei width, GLsizei height);
#define GLRenderbufferStorageMultisampleCoverageNV                             \
  OpenGLLoadercontext->glRenderbufferStorageMultisampleCoverageNV
// GLAPI void APIENTRY glProgramVertexLimitNV (GLenum target, GLint limit);
#define GLProgramVertexLimitNV OpenGLLoadercontext->glProgramVertexLimitNV
// GLAPI void APIENTRY glFramebufferTextureEXT (GLenum target, GLenum
// attachment, GLuint texture, GLint level);
#define GLFramebufferTextureEXT OpenGLLoadercontext->glFramebufferTextureEXT
// GLAPI void APIENTRY glFramebufferTextureFaceEXT (GLenum target, GLenum
// attachment, GLuint texture, GLint level, GLenum face);
#define GLFramebufferTextureFaceEXT                                            \
  OpenGLLoadercontext->glFramebufferTextureFaceEXT
// GLAPI void APIENTRY glRenderGpuMaskNV (GLbitfield mask);
#define GLRenderGpuMaskNV OpenGLLoadercontext->glRenderGpuMaskNV
// GLAPI void APIENTRY glMulticastBufferSubDataNV (GLbitfield gpuMask, GLuint
// buffer, GLintptr offset, GLsizeiptr size, const void *data);
#define GLMulticastBufferSubDataNV                                             \
  OpenGLLoadercontext->glMulticastBufferSubDataNV
// GLAPI void APIENTRY glMulticastCopyBufferSubDataNV (GLuint readGpu,
// GLbitfield writeGpuMask, GLuint readBuffer, GLuint writeBuffer, GLintptr
// readOffset, GLintptr writeOffset, GLsizeiptr size);
#define GLMulticastCopyBufferSubDataNV                                         \
  OpenGLLoadercontext->glMulticastCopyBufferSubDataNV
// GLAPI void APIENTRY glMulticastCopyImageSubDataNV (GLuint srcGpu, GLbitfield
// dstGpuMask, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX,
// GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel,
// GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight,
// GLsizei srcDepth);
#define GLMulticastCopyImageSubDataNV                                          \
  OpenGLLoadercontext->glMulticastCopyImageSubDataNV
// GLAPI void APIENTRY glMulticastBlitFramebufferNV (GLuint srcGpu, GLuint
// dstGpu, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0,
// GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
#define GLMulticastBlitFramebufferNV                                           \
  OpenGLLoadercontext->glMulticastBlitFramebufferNV
// GLAPI void APIENTRY glMulticastFramebufferSampleLocationsfvNV (GLuint gpu,
// GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v);
#define GLMulticastFramebufferSampleLocationsfvNV                              \
  OpenGLLoadercontext->glMulticastFramebufferSampleLocationsfvNV
// GLAPI void APIENTRY glMulticastBarrierNV (void);
#define GLMulticastBarrierNV OpenGLLoadercontext->glMulticastBarrierNV
// GLAPI void APIENTRY glMulticastWaitSyncNV (GLuint signalGpu, GLbitfield
// waitGpuMask);
#define GLMulticastWaitSyncNV OpenGLLoadercontext->glMulticastWaitSyncNV
// GLAPI void APIENTRY glMulticastGetQueryObjectivNV (GLuint gpu, GLuint id,
// GLenum pname, GLint *params);
#define GLMulticastGetQueryObjectivNV                                          \
  OpenGLLoadercontext->glMulticastGetQueryObjectivNV
// GLAPI void APIENTRY glMulticastGetQueryObjectuivNV (GLuint gpu, GLuint id,
// GLenum pname, GLuint *params);
#define GLMulticastGetQueryObjectuivNV                                         \
  OpenGLLoadercontext->glMulticastGetQueryObjectuivNV
// GLAPI void APIENTRY glMulticastGetQueryObjecti64vNV (GLuint gpu, GLuint id,
// GLenum pname, GLint64 *params);
#define GLMulticastGetQueryObjecti64vNV                                        \
  OpenGLLoadercontext->glMulticastGetQueryObjecti64vNV
// GLAPI void APIENTRY glMulticastGetQueryObjectui64vNV (GLuint gpu, GLuint id,
// GLenum pname, GLuint64 *params);
#define GLMulticastGetQueryObjectui64vNV                                       \
  OpenGLLoadercontext->glMulticastGetQueryObjectui64vNV
// GLAPI void APIENTRY glProgramLocalParameterI4iNV (GLenum target, GLuint
// index, GLint x, GLint y, GLint z, GLint w);
#define GLProgramLocalParameterI4iNV                                           \
  OpenGLLoadercontext->glProgramLocalParameterI4iNV
// GLAPI void APIENTRY glProgramLocalParameterI4ivNV (GLenum target, GLuint
// index, const GLint *params);
#define GLProgramLocalParameterI4ivNV                                          \
  OpenGLLoadercontext->glProgramLocalParameterI4ivNV
// GLAPI void APIENTRY glProgramLocalParametersI4ivNV (GLenum target, GLuint
// index, GLsizei count, const GLint *params);
#define GLProgramLocalParametersI4ivNV                                         \
  OpenGLLoadercontext->glProgramLocalParametersI4ivNV
// GLAPI void APIENTRY glProgramLocalParameterI4uiNV (GLenum target, GLuint
// index, GLuint x, GLuint y, GLuint z, GLuint w);
#define GLProgramLocalParameterI4uiNV                                          \
  OpenGLLoadercontext->glProgramLocalParameterI4uiNV
// GLAPI void APIENTRY glProgramLocalParameterI4uivNV (GLenum target, GLuint
// index, const GLuint *params);
#define GLProgramLocalParameterI4uivNV                                         \
  OpenGLLoadercontext->glProgramLocalParameterI4uivNV
// GLAPI void APIENTRY glProgramLocalParametersI4uivNV (GLenum target, GLuint
// index, GLsizei count, const GLuint *params);
#define GLProgramLocalParametersI4uivNV                                        \
  OpenGLLoadercontext->glProgramLocalParametersI4uivNV
// GLAPI void APIENTRY glProgramEnvParameterI4iNV (GLenum target, GLuint index,
// GLint x, GLint y, GLint z, GLint w);
#define GLProgramEnvParameterI4iNV                                             \
  OpenGLLoadercontext->glProgramEnvParameterI4iNV
// GLAPI void APIENTRY glProgramEnvParameterI4ivNV (GLenum target, GLuint index,
// const GLint *params);
#define GLProgramEnvParameterI4ivNV                                            \
  OpenGLLoadercontext->glProgramEnvParameterI4ivNV
// GLAPI void APIENTRY glProgramEnvParametersI4ivNV (GLenum target, GLuint
// index, GLsizei count, const GLint *params);
#define GLProgramEnvParametersI4ivNV                                           \
  OpenGLLoadercontext->glProgramEnvParametersI4ivNV
// GLAPI void APIENTRY glProgramEnvParameterI4uiNV (GLenum target, GLuint index,
// GLuint x, GLuint y, GLuint z, GLuint w);
#define GLProgramEnvParameterI4uiNV                                            \
  OpenGLLoadercontext->glProgramEnvParameterI4uiNV
// GLAPI void APIENTRY glProgramEnvParameterI4uivNV (GLenum target, GLuint
// index, const GLuint *params);
#define GLProgramEnvParameterI4uivNV                                           \
  OpenGLLoadercontext->glProgramEnvParameterI4uivNV
// GLAPI void APIENTRY glProgramEnvParametersI4uivNV (GLenum target, GLuint
// index, GLsizei count, const GLuint *params);
#define GLProgramEnvParametersI4uivNV                                          \
  OpenGLLoadercontext->glProgramEnvParametersI4uivNV
// GLAPI void APIENTRY glGetProgramLocalParameterIivNV (GLenum target, GLuint
// index, GLint *params);
#define GLGetProgramLocalParameterIivNV                                        \
  OpenGLLoadercontext->glGetProgramLocalParameterIivNV
// GLAPI void APIENTRY glGetProgramLocalParameterIuivNV (GLenum target, GLuint
// index, GLuint *params);
#define GLGetProgramLocalParameterIuivNV                                       \
  OpenGLLoadercontext->glGetProgramLocalParameterIuivNV
// GLAPI void APIENTRY glGetProgramEnvParameterIivNV (GLenum target, GLuint
// index, GLint *params);
#define GLGetProgramEnvParameterIivNV                                          \
  OpenGLLoadercontext->glGetProgramEnvParameterIivNV
// GLAPI void APIENTRY glGetProgramEnvParameterIuivNV (GLenum target, GLuint
// index, GLuint *params);
#define GLGetProgramEnvParameterIuivNV                                         \
  OpenGLLoadercontext->glGetProgramEnvParameterIuivNV
// GLAPI void APIENTRY glProgramSubroutineParametersuivNV (GLenum target,
// GLsizei count, const GLuint *params);
#define GLProgramSubroutineParametersuivNV                                     \
  OpenGLLoadercontext->glProgramSubroutineParametersuivNV
// GLAPI void APIENTRY glGetProgramSubroutineParameteruivNV (GLenum target,
// GLuint index, GLuint *param);
#define GLGetProgramSubroutineParameteruivNV                                   \
  OpenGLLoadercontext->glGetProgramSubroutineParameteruivNV
// GLAPI void APIENTRY glVertex2hNV (GLhalfNV x, GLhalfNV y);
#define GLVertex2hNV OpenGLLoadercontext->glVertex2hNV
// GLAPI void APIENTRY glVertex2hvNV (const GLhalfNV *v);
#define GLVertex2hvNV OpenGLLoadercontext->glVertex2hvNV
// GLAPI void APIENTRY glVertex3hNV (GLhalfNV x, GLhalfNV y, GLhalfNV z);
#define GLVertex3hNV OpenGLLoadercontext->glVertex3hNV
// GLAPI void APIENTRY glVertex3hvNV (const GLhalfNV *v);
#define GLVertex3hvNV OpenGLLoadercontext->glVertex3hvNV
// GLAPI void APIENTRY glVertex4hNV (GLhalfNV x, GLhalfNV y, GLhalfNV z,
// GLhalfNV w);
#define GLVertex4hNV OpenGLLoadercontext->glVertex4hNV
// GLAPI void APIENTRY glVertex4hvNV (const GLhalfNV *v);
#define GLVertex4hvNV OpenGLLoadercontext->glVertex4hvNV
// GLAPI void APIENTRY glNormal3hNV (GLhalfNV nx, GLhalfNV ny, GLhalfNV nz);
#define GLNormal3hNV OpenGLLoadercontext->glNormal3hNV
// GLAPI void APIENTRY glNormal3hvNV (const GLhalfNV *v);
#define GLNormal3hvNV OpenGLLoadercontext->glNormal3hvNV
// GLAPI void APIENTRY glColor3hNV (GLhalfNV red, GLhalfNV green, GLhalfNV
// blue);
#define GLColor3hNV OpenGLLoadercontext->glColor3hNV
// GLAPI void APIENTRY glColor3hvNV (const GLhalfNV *v);
#define GLColor3hvNV OpenGLLoadercontext->glColor3hvNV
// GLAPI void APIENTRY glColor4hNV (GLhalfNV red, GLhalfNV green, GLhalfNV blue,
// GLhalfNV alpha);
#define GLColor4hNV OpenGLLoadercontext->glColor4hNV
// GLAPI void APIENTRY glColor4hvNV (const GLhalfNV *v);
#define GLColor4hvNV OpenGLLoadercontext->glColor4hvNV
// GLAPI void APIENTRY glTexCoord1hNV (GLhalfNV s);
#define GLTexCoord1hNV OpenGLLoadercontext->glTexCoord1hNV
// GLAPI void APIENTRY glTexCoord1hvNV (const GLhalfNV *v);
#define GLTexCoord1hvNV OpenGLLoadercontext->glTexCoord1hvNV
// GLAPI void APIENTRY glTexCoord2hNV (GLhalfNV s, GLhalfNV t);
#define GLTexCoord2hNV OpenGLLoadercontext->glTexCoord2hNV
// GLAPI void APIENTRY glTexCoord2hvNV (const GLhalfNV *v);
#define GLTexCoord2hvNV OpenGLLoadercontext->glTexCoord2hvNV
// GLAPI void APIENTRY glTexCoord3hNV (GLhalfNV s, GLhalfNV t, GLhalfNV r);
#define GLTexCoord3hNV OpenGLLoadercontext->glTexCoord3hNV
// GLAPI void APIENTRY glTexCoord3hvNV (const GLhalfNV *v);
#define GLTexCoord3hvNV OpenGLLoadercontext->glTexCoord3hvNV
// GLAPI void APIENTRY glTexCoord4hNV (GLhalfNV s, GLhalfNV t, GLhalfNV r,
// GLhalfNV q);
#define GLTexCoord4hNV OpenGLLoadercontext->glTexCoord4hNV
// GLAPI void APIENTRY glTexCoord4hvNV (const GLhalfNV *v);
#define GLTexCoord4hvNV OpenGLLoadercontext->glTexCoord4hvNV
// GLAPI void APIENTRY glMultiTexCoord1hNV (GLenum target, GLhalfNV s);
#define GLMultiTexCoord1hNV OpenGLLoadercontext->glMultiTexCoord1hNV
// GLAPI void APIENTRY glMultiTexCoord1hvNV (GLenum target, const GLhalfNV *v);
#define GLMultiTexCoord1hvNV OpenGLLoadercontext->glMultiTexCoord1hvNV
// GLAPI void APIENTRY glMultiTexCoord2hNV (GLenum target, GLhalfNV s, GLhalfNV
// t);
#define GLMultiTexCoord2hNV OpenGLLoadercontext->glMultiTexCoord2hNV
// GLAPI void APIENTRY glMultiTexCoord2hvNV (GLenum target, const GLhalfNV *v);
#define GLMultiTexCoord2hvNV OpenGLLoadercontext->glMultiTexCoord2hvNV
// GLAPI void APIENTRY glMultiTexCoord3hNV (GLenum target, GLhalfNV s, GLhalfNV
// t, GLhalfNV r);
#define GLMultiTexCoord3hNV OpenGLLoadercontext->glMultiTexCoord3hNV
// GLAPI void APIENTRY glMultiTexCoord3hvNV (GLenum target, const GLhalfNV *v);
#define GLMultiTexCoord3hvNV OpenGLLoadercontext->glMultiTexCoord3hvNV
// GLAPI void APIENTRY glMultiTexCoord4hNV (GLenum target, GLhalfNV s, GLhalfNV
// t, GLhalfNV r, GLhalfNV q);
#define GLMultiTexCoord4hNV OpenGLLoadercontext->glMultiTexCoord4hNV
// GLAPI void APIENTRY glMultiTexCoord4hvNV (GLenum target, const GLhalfNV *v);
#define GLMultiTexCoord4hvNV OpenGLLoadercontext->glMultiTexCoord4hvNV
// GLAPI void APIENTRY glVertexAttrib1hNV (GLuint index, GLhalfNV x);
#define GLVertexAttrib1hNV OpenGLLoadercontext->glVertexAttrib1hNV
// GLAPI void APIENTRY glVertexAttrib1hvNV (GLuint index, const GLhalfNV *v);
#define GLVertexAttrib1hvNV OpenGLLoadercontext->glVertexAttrib1hvNV
// GLAPI void APIENTRY glVertexAttrib2hNV (GLuint index, GLhalfNV x, GLhalfNV
// y);
#define GLVertexAttrib2hNV OpenGLLoadercontext->glVertexAttrib2hNV
// GLAPI void APIENTRY glVertexAttrib2hvNV (GLuint index, const GLhalfNV *v);
#define GLVertexAttrib2hvNV OpenGLLoadercontext->glVertexAttrib2hvNV
// GLAPI void APIENTRY glVertexAttrib3hNV (GLuint index, GLhalfNV x, GLhalfNV y,
// GLhalfNV z);
#define GLVertexAttrib3hNV OpenGLLoadercontext->glVertexAttrib3hNV
// GLAPI void APIENTRY glVertexAttrib3hvNV (GLuint index, const GLhalfNV *v);
#define GLVertexAttrib3hvNV OpenGLLoadercontext->glVertexAttrib3hvNV
// GLAPI void APIENTRY glVertexAttrib4hNV (GLuint index, GLhalfNV x, GLhalfNV y,
// GLhalfNV z, GLhalfNV w);
#define GLVertexAttrib4hNV OpenGLLoadercontext->glVertexAttrib4hNV
// GLAPI void APIENTRY glVertexAttrib4hvNV (GLuint index, const GLhalfNV *v);
#define GLVertexAttrib4hvNV OpenGLLoadercontext->glVertexAttrib4hvNV
// GLAPI void APIENTRY glVertexAttribs1hvNV (GLuint index, GLsizei n, const
// GLhalfNV *v);
#define GLVertexAttribs1hvNV OpenGLLoadercontext->glVertexAttribs1hvNV
// GLAPI void APIENTRY glVertexAttribs2hvNV (GLuint index, GLsizei n, const
// GLhalfNV *v);
#define GLVertexAttribs2hvNV OpenGLLoadercontext->glVertexAttribs2hvNV
// GLAPI void APIENTRY glVertexAttribs3hvNV (GLuint index, GLsizei n, const
// GLhalfNV *v);
#define GLVertexAttribs3hvNV OpenGLLoadercontext->glVertexAttribs3hvNV
// GLAPI void APIENTRY glVertexAttribs4hvNV (GLuint index, GLsizei n, const
// GLhalfNV *v);
#define GLVertexAttribs4hvNV OpenGLLoadercontext->glVertexAttribs4hvNV
// GLAPI void APIENTRY glFogCoordhNV (GLhalfNV fog);
#define GLFogCoordhNV OpenGLLoadercontext->glFogCoordhNV
// GLAPI void APIENTRY glFogCoordhvNV (const GLhalfNV *fog);
#define GLFogCoordhvNV OpenGLLoadercontext->glFogCoordhvNV
// GLAPI void APIENTRY glSecondaryColor3hNV (GLhalfNV red, GLhalfNV green,
// GLhalfNV blue);
#define GLSecondaryColor3hNV OpenGLLoadercontext->glSecondaryColor3hNV
// GLAPI void APIENTRY glSecondaryColor3hvNV (const GLhalfNV *v);
#define GLSecondaryColor3hvNV OpenGLLoadercontext->glSecondaryColor3hvNV
// GLAPI void APIENTRY glVertexWeighthNV (GLhalfNV weight);
#define GLVertexWeighthNV OpenGLLoadercontext->glVertexWeighthNV
// GLAPI void APIENTRY glVertexWeighthvNV (const GLhalfNV *weight);
#define GLVertexWeighthvNV OpenGLLoadercontext->glVertexWeighthvNV
// GLAPI void APIENTRY glGetInternalformatSampleivNV (GLenum target, GLenum
// internalformat, GLsizei samples, GLenum pname, GLsizei count, GLint *params);
#define GLGetInternalformatSampleivNV                                          \
  OpenGLLoadercontext->glGetInternalformatSampleivNV
// GLAPI void APIENTRY glGetMemoryObjectDetachedResourcesuivNV (GLuint memory,
// GLenum pname, GLint first, GLsizei count, GLuint *params);
#define GLGetMemoryObjectDetachedResourcesuivNV                                \
  OpenGLLoadercontext->glGetMemoryObjectDetachedResourcesuivNV
// GLAPI void APIENTRY glResetMemoryObjectParameterNV (GLuint memory, GLenum
// pname);
#define GLResetMemoryObjectParameterNV                                         \
  OpenGLLoadercontext->glResetMemoryObjectParameterNV
// GLAPI void APIENTRY glTexAttachMemoryNV (GLenum target, GLuint memory,
// GLuint64 offset);
#define GLTexAttachMemoryNV OpenGLLoadercontext->glTexAttachMemoryNV
// GLAPI void APIENTRY glBufferAttachMemoryNV (GLenum target, GLuint memory,
// GLuint64 offset);
#define GLBufferAttachMemoryNV OpenGLLoadercontext->glBufferAttachMemoryNV
// GLAPI void APIENTRY glTextureAttachMemoryNV (GLuint texture, GLuint memory,
// GLuint64 offset);
#define GLTextureAttachMemoryNV OpenGLLoadercontext->glTextureAttachMemoryNV
// GLAPI void APIENTRY glNamedBufferAttachMemoryNV (GLuint buffer, GLuint
// memory, GLuint64 offset);
#define GLNamedBufferAttachMemoryNV                                            \
  OpenGLLoadercontext->glNamedBufferAttachMemoryNV
// GLAPI void APIENTRY glBufferPageCommitmentMemNV (GLenum target, GLintptr
// offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean
// commit);
#define GLBufferPageCommitmentMemNV                                            \
  OpenGLLoadercontext->glBufferPageCommitmentMemNV
// GLAPI void APIENTRY glTexPageCommitmentMemNV (GLenum target, GLint layer,
// GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width,
// GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean
// commit);
#define GLTexPageCommitmentMemNV OpenGLLoadercontext->glTexPageCommitmentMemNV
// GLAPI void APIENTRY glNamedBufferPageCommitmentMemNV (GLuint buffer, GLintptr
// offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean
// commit);
#define GLNamedBufferPageCommitmentMemNV                                       \
  OpenGLLoadercontext->glNamedBufferPageCommitmentMemNV
// GLAPI void APIENTRY glTexturePageCommitmentMemNV (GLuint texture, GLint
// layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei
// width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset,
// GLboolean commit);
#define GLTexturePageCommitmentMemNV                                           \
  OpenGLLoadercontext->glTexturePageCommitmentMemNV
// GLAPI void APIENTRY glDrawMeshTasksNV (GLuint first, GLuint count);
#define GLDrawMeshTasksNV OpenGLLoadercontext->glDrawMeshTasksNV
// GLAPI void APIENTRY glDrawMeshTasksIndirectNV (GLintptr indirect);
#define GLDrawMeshTasksIndirectNV OpenGLLoadercontext->glDrawMeshTasksIndirectNV
// GLAPI void APIENTRY glMultiDrawMeshTasksIndirectNV (GLintptr indirect,
// GLsizei drawcount, GLsizei stride);
#define GLMultiDrawMeshTasksIndirectNV                                         \
  OpenGLLoadercontext->glMultiDrawMeshTasksIndirectNV
// GLAPI void APIENTRY glMultiDrawMeshTasksIndirectCountNV (GLintptr indirect,
// GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
#define GLMultiDrawMeshTasksIndirectCountNV                                    \
  OpenGLLoadercontext->glMultiDrawMeshTasksIndirectCountNV
// GLAPI void APIENTRY glGenOcclusionQueriesNV (GLsizei n, GLuint *ids);
#define GLGenOcclusionQueriesNV OpenGLLoadercontext->glGenOcclusionQueriesNV
// GLAPI void APIENTRY glDeleteOcclusionQueriesNV (GLsizei n, const GLuint
// *ids);
#define GLDeleteOcclusionQueriesNV                                             \
  OpenGLLoadercontext->glDeleteOcclusionQueriesNV
// GLAPI GLboolean APIENTRY glIsOcclusionQueryNV (GLuint id);
#define GLIsOcclusionQueryNV OpenGLLoadercontext->glIsOcclusionQueryNV
// GLAPI void APIENTRY glBeginOcclusionQueryNV (GLuint id);
#define GLBeginOcclusionQueryNV OpenGLLoadercontext->glBeginOcclusionQueryNV
// GLAPI void APIENTRY glEndOcclusionQueryNV (void);
#define GLEndOcclusionQueryNV OpenGLLoadercontext->glEndOcclusionQueryNV
// GLAPI void APIENTRY glGetOcclusionQueryivNV (GLuint id, GLenum pname, GLint
// *params);
#define GLGetOcclusionQueryivNV OpenGLLoadercontext->glGetOcclusionQueryivNV
// GLAPI void APIENTRY glGetOcclusionQueryuivNV (GLuint id, GLenum pname, GLuint
// *params);
#define GLGetOcclusionQueryuivNV OpenGLLoadercontext->glGetOcclusionQueryuivNV
// GLAPI void APIENTRY glProgramBufferParametersfvNV (GLenum target, GLuint
// bindingIndex, GLuint wordIndex, GLsizei count, const GLfloat *params);
#define GLProgramBufferParametersfvNV                                          \
  OpenGLLoadercontext->glProgramBufferParametersfvNV
// GLAPI void APIENTRY glProgramBufferParametersIivNV (GLenum target, GLuint
// bindingIndex, GLuint wordIndex, GLsizei count, const GLint *params);
#define GLProgramBufferParametersIivNV                                         \
  OpenGLLoadercontext->glProgramBufferParametersIivNV
// GLAPI void APIENTRY glProgramBufferParametersIuivNV (GLenum target, GLuint
// bindingIndex, GLuint wordIndex, GLsizei count, const GLuint *params);
#define GLProgramBufferParametersIuivNV                                        \
  OpenGLLoadercontext->glProgramBufferParametersIuivNV
// GLAPI GLuint APIENTRY glGenPathsNV (GLsizei range);
#define GLGenPathsNV OpenGLLoadercontext->glGenPathsNV
// GLAPI void APIENTRY glDeletePathsNV (GLuint path, GLsizei range);
#define GLDeletePathsNV OpenGLLoadercontext->glDeletePathsNV
// GLAPI GLboolean APIENTRY glIsPathNV (GLuint path);
#define GLIsPathNV OpenGLLoadercontext->glIsPathNV
// GLAPI void APIENTRY glPathCommandsNV (GLuint path, GLsizei numCommands, const
// GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords);
#define GLPathCommandsNV OpenGLLoadercontext->glPathCommandsNV
// GLAPI void APIENTRY glPathCoordsNV (GLuint path, GLsizei numCoords, GLenum
// coordType, const void *coords);
#define GLPathCoordsNV OpenGLLoadercontext->glPathCoordsNV
// GLAPI void APIENTRY glPathSubCommandsNV (GLuint path, GLsizei commandStart,
// GLsizei commandsToDelete, GLsizei numCommands, const GLubyte *commands,
// GLsizei numCoords, GLenum coordType, const void *coords);
#define GLPathSubCommandsNV OpenGLLoadercontext->glPathSubCommandsNV
// GLAPI void APIENTRY glPathSubCoordsNV (GLuint path, GLsizei coordStart,
// GLsizei numCoords, GLenum coordType, const void *coords);
#define GLPathSubCoordsNV OpenGLLoadercontext->glPathSubCoordsNV
// GLAPI void APIENTRY glPathStringNV (GLuint path, GLenum format, GLsizei
// length, const void *pathString);
#define GLPathStringNV OpenGLLoadercontext->glPathStringNV
// GLAPI void APIENTRY glPathGlyphsNV (GLuint firstPathName, GLenum fontTarget,
// const void *fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type,
// const void *charcodes, GLenum handleMissingGlyphs, GLuint
// pathParameterTemplate, GLfloat emScale);
#define GLPathGlyphsNV OpenGLLoadercontext->glPathGlyphsNV
// GLAPI void APIENTRY glPathGlyphRangeNV (GLuint firstPathName, GLenum
// fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyph,
// GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate,
// GLfloat emScale);
#define GLPathGlyphRangeNV OpenGLLoadercontext->glPathGlyphRangeNV
// GLAPI void APIENTRY glWeightPathsNV (GLuint resultPath, GLsizei numPaths,
// const GLuint *paths, const GLfloat *weights);
#define GLWeightPathsNV OpenGLLoadercontext->glWeightPathsNV
// GLAPI void APIENTRY glCopyPathNV (GLuint resultPath, GLuint srcPath);
#define GLCopyPathNV OpenGLLoadercontext->glCopyPathNV
// GLAPI void APIENTRY glInterpolatePathsNV (GLuint resultPath, GLuint pathA,
// GLuint pathB, GLfloat weight);
#define GLInterpolatePathsNV OpenGLLoadercontext->glInterpolatePathsNV
// GLAPI void APIENTRY glTransformPathNV (GLuint resultPath, GLuint srcPath,
// GLenum transformType, const GLfloat *transformValues);
#define GLTransformPathNV OpenGLLoadercontext->glTransformPathNV
// GLAPI void APIENTRY glPathParameterivNV (GLuint path, GLenum pname, const
// GLint *value);
#define GLPathParameterivNV OpenGLLoadercontext->glPathParameterivNV
// GLAPI void APIENTRY glPathParameteriNV (GLuint path, GLenum pname, GLint
// value);
#define GLPathParameteriNV OpenGLLoadercontext->glPathParameteriNV
// GLAPI void APIENTRY glPathParameterfvNV (GLuint path, GLenum pname, const
// GLfloat *value);
#define GLPathParameterfvNV OpenGLLoadercontext->glPathParameterfvNV
// GLAPI void APIENTRY glPathParameterfNV (GLuint path, GLenum pname, GLfloat
// value);
#define GLPathParameterfNV OpenGLLoadercontext->glPathParameterfNV
// GLAPI void APIENTRY glPathDashArrayNV (GLuint path, GLsizei dashCount, const
// GLfloat *dashArray);
#define GLPathDashArrayNV OpenGLLoadercontext->glPathDashArrayNV
// GLAPI void APIENTRY glPathStencilFuncNV (GLenum func, GLint ref, GLuint
// mask);
#define GLPathStencilFuncNV OpenGLLoadercontext->glPathStencilFuncNV
// GLAPI void APIENTRY glPathStencilDepthOffsetNV (GLfloat factor, GLfloat
// units);
#define GLPathStencilDepthOffsetNV                                             \
  OpenGLLoadercontext->glPathStencilDepthOffsetNV
// GLAPI void APIENTRY glStencilFillPathNV (GLuint path, GLenum fillMode, GLuint
// mask);
#define GLStencilFillPathNV OpenGLLoadercontext->glStencilFillPathNV
// GLAPI void APIENTRY glStencilStrokePathNV (GLuint path, GLint reference,
// GLuint mask);
#define GLStencilStrokePathNV OpenGLLoadercontext->glStencilStrokePathNV
// GLAPI void APIENTRY glStencilFillPathInstancedNV (GLsizei numPaths, GLenum
// pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint
// mask, GLenum transformType, const GLfloat *transformValues);
#define GLStencilFillPathInstancedNV                                           \
  OpenGLLoadercontext->glStencilFillPathInstancedNV
// GLAPI void APIENTRY glStencilStrokePathInstancedNV (GLsizei numPaths, GLenum
// pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint
// mask, GLenum transformType, const GLfloat *transformValues);
#define GLStencilStrokePathInstancedNV                                         \
  OpenGLLoadercontext->glStencilStrokePathInstancedNV
// GLAPI void APIENTRY glPathCoverDepthFuncNV (GLenum func);
#define GLPathCoverDepthFuncNV OpenGLLoadercontext->glPathCoverDepthFuncNV
// GLAPI void APIENTRY glCoverFillPathNV (GLuint path, GLenum coverMode);
#define GLCoverFillPathNV OpenGLLoadercontext->glCoverFillPathNV
// GLAPI void APIENTRY glCoverStrokePathNV (GLuint path, GLenum coverMode);
#define GLCoverStrokePathNV OpenGLLoadercontext->glCoverStrokePathNV
// GLAPI void APIENTRY glCoverFillPathInstancedNV (GLsizei numPaths, GLenum
// pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum
// transformType, const GLfloat *transformValues);
#define GLCoverFillPathInstancedNV                                             \
  OpenGLLoadercontext->glCoverFillPathInstancedNV
// GLAPI void APIENTRY glCoverStrokePathInstancedNV (GLsizei numPaths, GLenum
// pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum
// transformType, const GLfloat *transformValues);
#define GLCoverStrokePathInstancedNV                                           \
  OpenGLLoadercontext->glCoverStrokePathInstancedNV
// GLAPI void APIENTRY glGetPathParameterivNV (GLuint path, GLenum pname, GLint
// *value);
#define GLGetPathParameterivNV OpenGLLoadercontext->glGetPathParameterivNV
// GLAPI void APIENTRY glGetPathParameterfvNV (GLuint path, GLenum pname,
// GLfloat *value);
#define GLGetPathParameterfvNV OpenGLLoadercontext->glGetPathParameterfvNV
// GLAPI void APIENTRY glGetPathCommandsNV (GLuint path, GLubyte *commands);
#define GLGetPathCommandsNV OpenGLLoadercontext->glGetPathCommandsNV
// GLAPI void APIENTRY glGetPathCoordsNV (GLuint path, GLfloat *coords);
#define GLGetPathCoordsNV OpenGLLoadercontext->glGetPathCoordsNV
// GLAPI void APIENTRY glGetPathDashArrayNV (GLuint path, GLfloat *dashArray);
#define GLGetPathDashArrayNV OpenGLLoadercontext->glGetPathDashArrayNV
// GLAPI void APIENTRY glGetPathMetricsNV (GLbitfield metricQueryMask, GLsizei
// numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLsizei
// stride, GLfloat *metrics);
#define GLGetPathMetricsNV OpenGLLoadercontext->glGetPathMetricsNV
// GLAPI void APIENTRY glGetPathMetricRangeNV (GLbitfield metricQueryMask,
// GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat *metrics);
#define GLGetPathMetricRangeNV OpenGLLoadercontext->glGetPathMetricRangeNV
// GLAPI void APIENTRY glGetPathSpacingNV (GLenum pathListMode, GLsizei
// numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLfloat
// advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat
// *returnedSpacing);
#define GLGetPathSpacingNV OpenGLLoadercontext->glGetPathSpacingNV
// GLAPI GLboolean APIENTRY glIsPointInFillPathNV (GLuint path, GLuint mask,
// GLfloat x, GLfloat y);
#define GLIsPointInFillPathNV OpenGLLoadercontext->glIsPointInFillPathNV
// GLAPI GLboolean APIENTRY glIsPointInStrokePathNV (GLuint path, GLfloat x,
// GLfloat y);
#define GLIsPointInStrokePathNV OpenGLLoadercontext->glIsPointInStrokePathNV
// GLAPI GLfloat APIENTRY glGetPathLengthNV (GLuint path, GLsizei startSegment,
// GLsizei numSegments);
#define GLGetPathLengthNV OpenGLLoadercontext->glGetPathLengthNV
// GLAPI GLboolean APIENTRY glPointAlongPathNV (GLuint path, GLsizei
// startSegment, GLsizei numSegments, GLfloat distance, GLfloat *x, GLfloat *y,
// GLfloat *tangentX, GLfloat *tangentY);
#define GLPointAlongPathNV OpenGLLoadercontext->glPointAlongPathNV
// GLAPI void APIENTRY glMatrixLoad3x2fNV (GLenum matrixMode, const GLfloat *m);
#define GLMatrixLoad3x2fNV OpenGLLoadercontext->glMatrixLoad3x2fNV
// GLAPI void APIENTRY glMatrixLoad3x3fNV (GLenum matrixMode, const GLfloat *m);
#define GLMatrixLoad3x3fNV OpenGLLoadercontext->glMatrixLoad3x3fNV
// GLAPI void APIENTRY glMatrixLoadTranspose3x3fNV (GLenum matrixMode, const
// GLfloat *m);
#define GLMatrixLoadTranspose3x3fNV                                            \
  OpenGLLoadercontext->glMatrixLoadTranspose3x3fNV
// GLAPI void APIENTRY glMatrixMult3x2fNV (GLenum matrixMode, const GLfloat *m);
#define GLMatrixMult3x2fNV OpenGLLoadercontext->glMatrixMult3x2fNV
// GLAPI void APIENTRY glMatrixMult3x3fNV (GLenum matrixMode, const GLfloat *m);
#define GLMatrixMult3x3fNV OpenGLLoadercontext->glMatrixMult3x3fNV
// GLAPI void APIENTRY glMatrixMultTranspose3x3fNV (GLenum matrixMode, const
// GLfloat *m);
#define GLMatrixMultTranspose3x3fNV                                            \
  OpenGLLoadercontext->glMatrixMultTranspose3x3fNV
// GLAPI void APIENTRY glStencilThenCoverFillPathNV (GLuint path, GLenum
// fillMode, GLuint mask, GLenum coverMode);
#define GLStencilThenCoverFillPathNV                                           \
  OpenGLLoadercontext->glStencilThenCoverFillPathNV
// GLAPI void APIENTRY glStencilThenCoverStrokePathNV (GLuint path, GLint
// reference, GLuint mask, GLenum coverMode);
#define GLStencilThenCoverStrokePathNV                                         \
  OpenGLLoadercontext->glStencilThenCoverStrokePathNV
// GLAPI void APIENTRY glStencilThenCoverFillPathInstancedNV (GLsizei numPaths,
// GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode,
// GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat
// *transformValues);
#define GLStencilThenCoverFillPathInstancedNV                                  \
  OpenGLLoadercontext->glStencilThenCoverFillPathInstancedNV
// GLAPI void APIENTRY glStencilThenCoverStrokePathInstancedNV (GLsizei
// numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint
// reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat
// *transformValues);
#define GLStencilThenCoverStrokePathInstancedNV                                \
  OpenGLLoadercontext->glStencilThenCoverStrokePathInstancedNV
// GLAPI GLenum APIENTRY glPathGlyphIndexRangeNV (GLenum fontTarget, const void
// *fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat
// emScale, GLuint *baseAndCount);
#define GLPathGlyphIndexRangeNV OpenGLLoadercontext->glPathGlyphIndexRangeNV
// GLAPI GLenum APIENTRY glPathGlyphIndexArrayNV (GLuint firstPathName, GLenum
// fontTarget, const void *fontName, GLbitfield fontStyle, GLuint
// firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat
// emScale);
#define GLPathGlyphIndexArrayNV OpenGLLoadercontext->glPathGlyphIndexArrayNV
// GLAPI GLenum APIENTRY glPathMemoryGlyphIndexArrayNV (GLuint firstPathName,
// GLenum fontTarget, GLsizeiptr fontSize, const void *fontData, GLsizei
// faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint
// pathParameterTemplate, GLfloat emScale);
#define GLPathMemoryGlyphIndexArrayNV                                          \
  OpenGLLoadercontext->glPathMemoryGlyphIndexArrayNV
// GLAPI void APIENTRY glProgramPathFragmentInputGenNV (GLuint program, GLint
// location, GLenum genMode, GLint components, const GLfloat *coeffs);
#define GLProgramPathFragmentInputGenNV                                        \
  OpenGLLoadercontext->glProgramPathFragmentInputGenNV
// GLAPI void APIENTRY glGetProgramResourcefvNV (GLuint program, GLenum
// programInterface, GLuint index, GLsizei propCount, const GLenum *props,
// GLsizei count, GLsizei *length, GLfloat *params);
#define GLGetProgramResourcefvNV OpenGLLoadercontext->glGetProgramResourcefvNV
// GLAPI void APIENTRY glPathColorGenNV (GLenum color, GLenum genMode, GLenum
// colorFormat, const GLfloat *coeffs);
#define GLPathColorGenNV OpenGLLoadercontext->glPathColorGenNV
// GLAPI void APIENTRY glPathTexGenNV (GLenum texCoordSet, GLenum genMode, GLint
// components, const GLfloat *coeffs);
#define GLPathTexGenNV OpenGLLoadercontext->glPathTexGenNV
// GLAPI void APIENTRY glPathFogGenNV (GLenum genMode);
#define GLPathFogGenNV OpenGLLoadercontext->glPathFogGenNV
// GLAPI void APIENTRY glGetPathColorGenivNV (GLenum color, GLenum pname, GLint
// *value);
#define GLGetPathColorGenivNV OpenGLLoadercontext->glGetPathColorGenivNV
// GLAPI void APIENTRY glGetPathColorGenfvNV (GLenum color, GLenum pname,
// GLfloat *value);
#define GLGetPathColorGenfvNV OpenGLLoadercontext->glGetPathColorGenfvNV
// GLAPI void APIENTRY glGetPathTexGenivNV (GLenum texCoordSet, GLenum pname,
// GLint *value);
#define GLGetPathTexGenivNV OpenGLLoadercontext->glGetPathTexGenivNV
// GLAPI void APIENTRY glGetPathTexGenfvNV (GLenum texCoordSet, GLenum pname,
// GLfloat *value);
#define GLGetPathTexGenfvNV OpenGLLoadercontext->glGetPathTexGenfvNV
// GLAPI void APIENTRY glPixelDataRangeNV (GLenum target, GLsizei length, const
// void *pointer);
#define GLPixelDataRangeNV OpenGLLoadercontext->glPixelDataRangeNV
// GLAPI void APIENTRY glFlushPixelDataRangeNV (GLenum target);
#define GLFlushPixelDataRangeNV OpenGLLoadercontext->glFlushPixelDataRangeNV
// GLAPI void APIENTRY glPointParameteriNV (GLenum pname, GLint param);
#define GLPointParameteriNV OpenGLLoadercontext->glPointParameteriNV
// GLAPI void APIENTRY glPointParameterivNV (GLenum pname, const GLint *params);
#define GLPointParameterivNV OpenGLLoadercontext->glPointParameterivNV
// GLAPI void APIENTRY glPresentFrameKeyedNV (GLuint video_slot, GLuint64EXT
// minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum
// type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint
// fill1, GLuint key1);
#define GLPresentFrameKeyedNV OpenGLLoadercontext->glPresentFrameKeyedNV
// GLAPI void APIENTRY glPresentFrameDualFillNV (GLuint video_slot, GLuint64EXT
// minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum
// type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum
// target2, GLuint fill2, GLenum target3, GLuint fill3);
#define GLPresentFrameDualFillNV OpenGLLoadercontext->glPresentFrameDualFillNV
// GLAPI void APIENTRY glGetVideoivNV (GLuint video_slot, GLenum pname, GLint
// *params);
#define GLGetVideoivNV OpenGLLoadercontext->glGetVideoivNV
// GLAPI void APIENTRY glGetVideouivNV (GLuint video_slot, GLenum pname, GLuint
// *params);
#define GLGetVideouivNV OpenGLLoadercontext->glGetVideouivNV
// GLAPI void APIENTRY glGetVideoi64vNV (GLuint video_slot, GLenum pname,
// GLint64EXT *params);
#define GLGetVideoi64vNV OpenGLLoadercontext->glGetVideoi64vNV
// GLAPI void APIENTRY glGetVideoui64vNV (GLuint video_slot, GLenum pname,
// GLuint64EXT *params);
#define GLGetVideoui64vNV OpenGLLoadercontext->glGetVideoui64vNV
// GLAPI void APIENTRY glPrimitiveRestartNV (void);
#define GLPrimitiveRestartNV OpenGLLoadercontext->glPrimitiveRestartNV
// GLAPI void APIENTRY glPrimitiveRestartIndexNV (GLuint index);
#define GLPrimitiveRestartIndexNV OpenGLLoadercontext->glPrimitiveRestartIndexNV
// GLAPI GLint APIENTRY glQueryResourceNV (GLenum queryType, GLint tagId, GLuint
// count, GLint *buffer);
#define GLQueryResourceNV OpenGLLoadercontext->glQueryResourceNV
// GLAPI void APIENTRY glGenQueryResourceTagNV (GLsizei n, GLint *tagIds);
#define GLGenQueryResourceTagNV OpenGLLoadercontext->glGenQueryResourceTagNV
// GLAPI void APIENTRY glDeleteQueryResourceTagNV (GLsizei n, const GLint
// *tagIds);
#define GLDeleteQueryResourceTagNV                                             \
  OpenGLLoadercontext->glDeleteQueryResourceTagNV
// GLAPI void APIENTRY glQueryResourceTagNV (GLint tagId, const GLchar
// *tagString);
#define GLQueryResourceTagNV OpenGLLoadercontext->glQueryResourceTagNV
// GLAPI void APIENTRY glCombinerParameterfvNV (GLenum pname, const GLfloat
// *params);
#define GLCombinerParameterfvNV OpenGLLoadercontext->glCombinerParameterfvNV
// GLAPI void APIENTRY glCombinerParameterfNV (GLenum pname, GLfloat param);
#define GLCombinerParameterfNV OpenGLLoadercontext->glCombinerParameterfNV
// GLAPI void APIENTRY glCombinerParameterivNV (GLenum pname, const GLint
// *params);
#define GLCombinerParameterivNV OpenGLLoadercontext->glCombinerParameterivNV
// GLAPI void APIENTRY glCombinerParameteriNV (GLenum pname, GLint param);
#define GLCombinerParameteriNV OpenGLLoadercontext->glCombinerParameteriNV
// GLAPI void APIENTRY glCombinerInputNV (GLenum stage, GLenum portion, GLenum
// variable, GLenum input, GLenum mapping, GLenum componentUsage);
#define GLCombinerInputNV OpenGLLoadercontext->glCombinerInputNV
// GLAPI void APIENTRY glCombinerOutputNV (GLenum stage, GLenum portion, GLenum
// abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias,
// GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum);
#define GLCombinerOutputNV OpenGLLoadercontext->glCombinerOutputNV
// GLAPI void APIENTRY glFinalCombinerInputNV (GLenum variable, GLenum input,
// GLenum mapping, GLenum componentUsage);
#define GLFinalCombinerInputNV OpenGLLoadercontext->glFinalCombinerInputNV
// GLAPI void APIENTRY glGetCombinerInputParameterfvNV (GLenum stage, GLenum
// portion, GLenum variable, GLenum pname, GLfloat *params);
#define GLGetCombinerInputParameterfvNV                                        \
  OpenGLLoadercontext->glGetCombinerInputParameterfvNV
// GLAPI void APIENTRY glGetCombinerInputParameterivNV (GLenum stage, GLenum
// portion, GLenum variable, GLenum pname, GLint *params);
#define GLGetCombinerInputParameterivNV                                        \
  OpenGLLoadercontext->glGetCombinerInputParameterivNV
// GLAPI void APIENTRY glGetCombinerOutputParameterfvNV (GLenum stage, GLenum
// portion, GLenum pname, GLfloat *params);
#define GLGetCombinerOutputParameterfvNV                                       \
  OpenGLLoadercontext->glGetCombinerOutputParameterfvNV
// GLAPI void APIENTRY glGetCombinerOutputParameterivNV (GLenum stage, GLenum
// portion, GLenum pname, GLint *params);
#define GLGetCombinerOutputParameterivNV                                       \
  OpenGLLoadercontext->glGetCombinerOutputParameterivNV
// GLAPI void APIENTRY glGetFinalCombinerInputParameterfvNV (GLenum variable,
// GLenum pname, GLfloat *params);
#define GLGetFinalCombinerInputParameterfvNV                                   \
  OpenGLLoadercontext->glGetFinalCombinerInputParameterfvNV
// GLAPI void APIENTRY glGetFinalCombinerInputParameterivNV (GLenum variable,
// GLenum pname, GLint *params);
#define GLGetFinalCombinerInputParameterivNV                                   \
  OpenGLLoadercontext->glGetFinalCombinerInputParameterivNV
// GLAPI void APIENTRY glCombinerStageParameterfvNV (GLenum stage, GLenum pname,
// const GLfloat *params);
#define GLCombinerStageParameterfvNV                                           \
  OpenGLLoadercontext->glCombinerStageParameterfvNV
// GLAPI void APIENTRY glGetCombinerStageParameterfvNV (GLenum stage, GLenum
// pname, GLfloat *params);
#define GLGetCombinerStageParameterfvNV                                        \
  OpenGLLoadercontext->glGetCombinerStageParameterfvNV
// GLAPI void APIENTRY glFramebufferSampleLocationsfvNV (GLenum target, GLuint
// start, GLsizei count, const GLfloat *v);
#define GLFramebufferSampleLocationsfvNV                                       \
  OpenGLLoadercontext->glFramebufferSampleLocationsfvNV
// GLAPI void APIENTRY glNamedFramebufferSampleLocationsfvNV (GLuint
// framebuffer, GLuint start, GLsizei count, const GLfloat *v);
#define GLNamedFramebufferSampleLocationsfvNV                                  \
  OpenGLLoadercontext->glNamedFramebufferSampleLocationsfvNV
// GLAPI void APIENTRY glResolveDepthValuesNV (void);
#define GLResolveDepthValuesNV OpenGLLoadercontext->glResolveDepthValuesNV
// GLAPI void APIENTRY glScissorExclusiveNV (GLint x, GLint y, GLsizei width,
// GLsizei height);
#define GLScissorExclusiveNV OpenGLLoadercontext->glScissorExclusiveNV
// GLAPI void APIENTRY glScissorExclusiveArrayvNV (GLuint first, GLsizei count,
// const GLint *v);
#define GLScissorExclusiveArrayvNV                                             \
  OpenGLLoadercontext->glScissorExclusiveArrayvNV
// GLAPI void APIENTRY glMakeBufferResidentNV (GLenum target, GLenum access);
#define GLMakeBufferResidentNV OpenGLLoadercontext->glMakeBufferResidentNV
// GLAPI void APIENTRY glMakeBufferNonResidentNV (GLenum target);
#define GLMakeBufferNonResidentNV OpenGLLoadercontext->glMakeBufferNonResidentNV
// GLAPI GLboolean APIENTRY glIsBufferResidentNV (GLenum target);
#define GLIsBufferResidentNV OpenGLLoadercontext->glIsBufferResidentNV
// GLAPI void APIENTRY glMakeNamedBufferResidentNV (GLuint buffer, GLenum
// access);
#define GLMakeNamedBufferResidentNV                                            \
  OpenGLLoadercontext->glMakeNamedBufferResidentNV
// GLAPI void APIENTRY glMakeNamedBufferNonResidentNV (GLuint buffer);
#define GLMakeNamedBufferNonResidentNV                                         \
  OpenGLLoadercontext->glMakeNamedBufferNonResidentNV
// GLAPI GLboolean APIENTRY glIsNamedBufferResidentNV (GLuint buffer);
#define GLIsNamedBufferResidentNV OpenGLLoadercontext->glIsNamedBufferResidentNV
// GLAPI void APIENTRY glGetBufferParameterui64vNV (GLenum target, GLenum pname,
// GLuint64EXT *params);
#define GLGetBufferParameterui64vNV                                            \
  OpenGLLoadercontext->glGetBufferParameterui64vNV
// GLAPI void APIENTRY glGetNamedBufferParameterui64vNV (GLuint buffer, GLenum
// pname, GLuint64EXT *params);
#define GLGetNamedBufferParameterui64vNV                                       \
  OpenGLLoadercontext->glGetNamedBufferParameterui64vNV
// GLAPI void APIENTRY glGetIntegerui64vNV (GLenum value, GLuint64EXT *result);
#define GLGetIntegerui64vNV OpenGLLoadercontext->glGetIntegerui64vNV
// GLAPI void APIENTRY glUniformui64NV (GLint location, GLuint64EXT value);
#define GLUniformui64NV OpenGLLoadercontext->glUniformui64NV
// GLAPI void APIENTRY glUniformui64vNV (GLint location, GLsizei count, const
// GLuint64EXT *value);
#define GLUniformui64vNV OpenGLLoadercontext->glUniformui64vNV
// GLAPI void APIENTRY glProgramUniformui64NV (GLuint program, GLint location,
// GLuint64EXT value);
#define GLProgramUniformui64NV OpenGLLoadercontext->glProgramUniformui64NV
// GLAPI void APIENTRY glProgramUniformui64vNV (GLuint program, GLint location,
// GLsizei count, const GLuint64EXT *value);
#define GLProgramUniformui64vNV OpenGLLoadercontext->glProgramUniformui64vNV
// GLAPI void APIENTRY glBindShadingRateImageNV (GLuint texture);
#define GLBindShadingRateImageNV OpenGLLoadercontext->glBindShadingRateImageNV
// GLAPI void APIENTRY glGetShadingRateImagePaletteNV (GLuint viewport, GLuint
// entry, GLenum *rate);
#define GLGetShadingRateImagePaletteNV                                         \
  OpenGLLoadercontext->glGetShadingRateImagePaletteNV
// GLAPI void APIENTRY glGetShadingRateSampleLocationivNV (GLenum rate, GLuint
// samples, GLuint index, GLint *location);
#define GLGetShadingRateSampleLocationivNV                                     \
  OpenGLLoadercontext->glGetShadingRateSampleLocationivNV
// GLAPI void APIENTRY glShadingRateImageBarrierNV (GLboolean synchronize);
#define GLShadingRateImageBarrierNV                                            \
  OpenGLLoadercontext->glShadingRateImageBarrierNV
// GLAPI void APIENTRY glShadingRateImagePaletteNV (GLuint viewport, GLuint
// first, GLsizei count, const GLenum *rates);
#define GLShadingRateImagePaletteNV                                            \
  OpenGLLoadercontext->glShadingRateImagePaletteNV
// GLAPI void APIENTRY glShadingRateSampleOrderNV (GLenum order);
#define GLShadingRateSampleOrderNV                                             \
  OpenGLLoadercontext->glShadingRateSampleOrderNV
// GLAPI void APIENTRY glShadingRateSampleOrderCustomNV (GLenum rate, GLuint
// samples, const GLint *locations);
#define GLShadingRateSampleOrderCustomNV                                       \
  OpenGLLoadercontext->glShadingRateSampleOrderCustomNV
// GLAPI void APIENTRY glTextureBarrierNV (void);
#define GLTextureBarrierNV OpenGLLoadercontext->glTextureBarrierNV
// GLAPI void APIENTRY glTexImage2DMultisampleCoverageNV (GLenum target, GLsizei
// coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width,
// GLsizei height, GLboolean fixedSampleLocations);
#define GLTexImage2DMultisampleCoverageNV                                      \
  OpenGLLoadercontext->glTexImage2DMultisampleCoverageNV
// GLAPI void APIENTRY glTexImage3DMultisampleCoverageNV (GLenum target, GLsizei
// coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width,
// GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
#define GLTexImage3DMultisampleCoverageNV                                      \
  OpenGLLoadercontext->glTexImage3DMultisampleCoverageNV
// GLAPI void APIENTRY glTextureImage2DMultisampleNV (GLuint texture, GLenum
// target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height,
// GLboolean fixedSampleLocations);
#define GLTextureImage2DMultisampleNV                                          \
  OpenGLLoadercontext->glTextureImage2DMultisampleNV
// GLAPI void APIENTRY glTextureImage3DMultisampleNV (GLuint texture, GLenum
// target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height,
// GLsizei depth, GLboolean fixedSampleLocations);
#define GLTextureImage3DMultisampleNV                                          \
  OpenGLLoadercontext->glTextureImage3DMultisampleNV
// GLAPI void APIENTRY glTextureImage2DMultisampleCoverageNV (GLuint texture,
// GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint
// internalFormat, GLsizei width, GLsizei height, GLboolean
// fixedSampleLocations);
#define GLTextureImage2DMultisampleCoverageNV                                  \
  OpenGLLoadercontext->glTextureImage2DMultisampleCoverageNV
// GLAPI void APIENTRY glTextureImage3DMultisampleCoverageNV (GLuint texture,
// GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint
// internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean
// fixedSampleLocations);
#define GLTextureImage3DMultisampleCoverageNV                                  \
  OpenGLLoadercontext->glTextureImage3DMultisampleCoverageNV
// GLAPI void APIENTRY glCreateSemaphoresNV (GLsizei n, GLuint *semaphores);
#define GLCreateSemaphoresNV OpenGLLoadercontext->glCreateSemaphoresNV
// GLAPI void APIENTRY glSemaphoreParameterivNV (GLuint semaphore, GLenum pname,
// const GLint *params);
#define GLSemaphoreParameterivNV OpenGLLoadercontext->glSemaphoreParameterivNV
// GLAPI void APIENTRY glGetSemaphoreParameterivNV (GLuint semaphore, GLenum
// pname, GLint *params);
#define GLGetSemaphoreParameterivNV                                            \
  OpenGLLoadercontext->glGetSemaphoreParameterivNV
// GLAPI void APIENTRY glBeginTransformFeedbackNV (GLenum primitiveMode);
#define GLBeginTransformFeedbackNV                                             \
  OpenGLLoadercontext->glBeginTransformFeedbackNV
// GLAPI void APIENTRY glEndTransformFeedbackNV (void);
#define GLEndTransformFeedbackNV OpenGLLoadercontext->glEndTransformFeedbackNV
// GLAPI void APIENTRY glTransformFeedbackAttribsNV (GLsizei count, const GLint
// *attribs, GLenum bufferMode);
#define GLTransformFeedbackAttribsNV                                           \
  OpenGLLoadercontext->glTransformFeedbackAttribsNV
// GLAPI void APIENTRY glBindBufferRangeNV (GLenum target, GLuint index, GLuint
// buffer, GLintptr offset, GLsizeiptr size);
#define GLBindBufferRangeNV OpenGLLoadercontext->glBindBufferRangeNV
// GLAPI void APIENTRY glBindBufferOffsetNV (GLenum target, GLuint index, GLuint
// buffer, GLintptr offset);
#define GLBindBufferOffsetNV OpenGLLoadercontext->glBindBufferOffsetNV
// GLAPI void APIENTRY glBindBufferBaseNV (GLenum target, GLuint index, GLuint
// buffer);
#define GLBindBufferBaseNV OpenGLLoadercontext->glBindBufferBaseNV
// GLAPI void APIENTRY glTransformFeedbackVaryingsNV (GLuint program, GLsizei
// count, const GLint *locations, GLenum bufferMode);
#define GLTransformFeedbackVaryingsNV                                          \
  OpenGLLoadercontext->glTransformFeedbackVaryingsNV
// GLAPI void APIENTRY glActiveVaryingNV (GLuint program, const GLchar *name);
#define GLActiveVaryingNV OpenGLLoadercontext->glActiveVaryingNV
// GLAPI GLint APIENTRY glGetVaryingLocationNV (GLuint program, const GLchar
// *name);
#define GLGetVaryingLocationNV OpenGLLoadercontext->glGetVaryingLocationNV
// GLAPI void APIENTRY glGetActiveVaryingNV (GLuint program, GLuint index,
// GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
#define GLGetActiveVaryingNV OpenGLLoadercontext->glGetActiveVaryingNV
// GLAPI void APIENTRY glGetTransformFeedbackVaryingNV (GLuint program, GLuint
// index, GLint *location);
#define GLGetTransformFeedbackVaryingNV                                        \
  OpenGLLoadercontext->glGetTransformFeedbackVaryingNV
// GLAPI void APIENTRY glTransformFeedbackStreamAttribsNV (GLsizei count, const
// GLint *attribs, GLsizei nbuffers, const GLint *bufstreams, GLenum
// bufferMode);
#define GLTransformFeedbackStreamAttribsNV                                     \
  OpenGLLoadercontext->glTransformFeedbackStreamAttribsNV
// GLAPI void APIENTRY glBindTransformFeedbackNV (GLenum target, GLuint id);
#define GLBindTransformFeedbackNV OpenGLLoadercontext->glBindTransformFeedbackNV
// GLAPI void APIENTRY glDeleteTransformFeedbacksNV (GLsizei n, const GLuint
// *ids);
#define GLDeleteTransformFeedbacksNV                                           \
  OpenGLLoadercontext->glDeleteTransformFeedbacksNV
// GLAPI void APIENTRY glGenTransformFeedbacksNV (GLsizei n, GLuint *ids);
#define GLGenTransformFeedbacksNV OpenGLLoadercontext->glGenTransformFeedbacksNV
// GLAPI GLboolean APIENTRY glIsTransformFeedbackNV (GLuint id);
#define GLIsTransformFeedbackNV OpenGLLoadercontext->glIsTransformFeedbackNV
// GLAPI void APIENTRY glPauseTransformFeedbackNV (void);
#define GLPauseTransformFeedbackNV                                             \
  OpenGLLoadercontext->glPauseTransformFeedbackNV
// GLAPI void APIENTRY glResumeTransformFeedbackNV (void);
#define GLResumeTransformFeedbackNV                                            \
  OpenGLLoadercontext->glResumeTransformFeedbackNV
// GLAPI void APIENTRY glDrawTransformFeedbackNV (GLenum mode, GLuint id);
#define GLDrawTransformFeedbackNV OpenGLLoadercontext->glDrawTransformFeedbackNV
// GLAPI void APIENTRY glVDPAUInitNV (const void *vdpDevice, const void
// *getProcAddress);
#define GLVDPAUInitNV OpenGLLoadercontext->glVDPAUInitNV
// GLAPI void APIENTRY glVDPAUFiniNV (void);
#define GLVDPAUFiniNV OpenGLLoadercontext->glVDPAUFiniNV
// GLAPI GLvdpauSurfaceNV APIENTRY glVDPAURegisterVideoSurfaceNV (const void
// *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint
// *textureNames);
#define GLVDPAURegisterVideoSurfaceNV                                          \
  OpenGLLoadercontext->glVDPAURegisterVideoSurfaceNV
// GLAPI GLvdpauSurfaceNV APIENTRY glVDPAURegisterOutputSurfaceNV (const void
// *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint
// *textureNames);
#define GLVDPAURegisterOutputSurfaceNV                                         \
  OpenGLLoadercontext->glVDPAURegisterOutputSurfaceNV
// GLAPI GLboolean APIENTRY glVDPAUIsSurfaceNV (GLvdpauSurfaceNV surface);
#define GLVDPAUIsSurfaceNV OpenGLLoadercontext->glVDPAUIsSurfaceNV
// GLAPI void APIENTRY glVDPAUUnregisterSurfaceNV (GLvdpauSurfaceNV surface);
#define GLVDPAUUnregisterSurfaceNV                                             \
  OpenGLLoadercontext->glVDPAUUnregisterSurfaceNV
// GLAPI void APIENTRY glVDPAUGetSurfaceivNV (GLvdpauSurfaceNV surface, GLenum
// pname, GLsizei count, GLsizei *length, GLint *values);
#define GLVDPAUGetSurfaceivNV OpenGLLoadercontext->glVDPAUGetSurfaceivNV
// GLAPI void APIENTRY glVDPAUSurfaceAccessNV (GLvdpauSurfaceNV surface, GLenum
// access);
#define GLVDPAUSurfaceAccessNV OpenGLLoadercontext->glVDPAUSurfaceAccessNV
// GLAPI void APIENTRY glVDPAUMapSurfacesNV (GLsizei numSurfaces, const
// GLvdpauSurfaceNV *surfaces);
#define GLVDPAUMapSurfacesNV OpenGLLoadercontext->glVDPAUMapSurfacesNV
// GLAPI void APIENTRY glVDPAUUnmapSurfacesNV (GLsizei numSurface, const
// GLvdpauSurfaceNV *surfaces);
#define GLVDPAUUnmapSurfacesNV OpenGLLoadercontext->glVDPAUUnmapSurfacesNV
// GLAPI GLvdpauSurfaceNV APIENTRY
// glVDPAURegisterVideoSurfaceWithPictureStructureNV (const void *vdpSurface,
// GLenum target, GLsizei numTextureNames, const GLuint *textureNames, GLboolean
// isFrameStructure);
#define GLVDPAURegisterVideoSurfaceWithPictureStructureNV                      \
  OpenGLLoadercontext->glVDPAURegisterVideoSurfaceWithPictureStructureNV
// GLAPI void APIENTRY glFlushVertexArrayRangeNV (void);
#define GLFlushVertexArrayRangeNV OpenGLLoadercontext->glFlushVertexArrayRangeNV
// GLAPI void APIENTRY glVertexArrayRangeNV (GLsizei length, const void
// *pointer);
#define GLVertexArrayRangeNV OpenGLLoadercontext->glVertexArrayRangeNV
// GLAPI void APIENTRY glVertexAttribL1i64NV (GLuint index, GLint64EXT x);
#define GLVertexAttribL1i64NV OpenGLLoadercontext->glVertexAttribL1i64NV
// GLAPI void APIENTRY glVertexAttribL2i64NV (GLuint index, GLint64EXT x,
// GLint64EXT y);
#define GLVertexAttribL2i64NV OpenGLLoadercontext->glVertexAttribL2i64NV
// GLAPI void APIENTRY glVertexAttribL3i64NV (GLuint index, GLint64EXT x,
// GLint64EXT y, GLint64EXT z);
#define GLVertexAttribL3i64NV OpenGLLoadercontext->glVertexAttribL3i64NV
// GLAPI void APIENTRY glVertexAttribL4i64NV (GLuint index, GLint64EXT x,
// GLint64EXT y, GLint64EXT z, GLint64EXT w);
#define GLVertexAttribL4i64NV OpenGLLoadercontext->glVertexAttribL4i64NV
// GLAPI void APIENTRY glVertexAttribL1i64vNV (GLuint index, const GLint64EXT
// *v);
#define GLVertexAttribL1i64vNV OpenGLLoadercontext->glVertexAttribL1i64vNV
// GLAPI void APIENTRY glVertexAttribL2i64vNV (GLuint index, const GLint64EXT
// *v);
#define GLVertexAttribL2i64vNV OpenGLLoadercontext->glVertexAttribL2i64vNV
// GLAPI void APIENTRY glVertexAttribL3i64vNV (GLuint index, const GLint64EXT
// *v);
#define GLVertexAttribL3i64vNV OpenGLLoadercontext->glVertexAttribL3i64vNV
// GLAPI void APIENTRY glVertexAttribL4i64vNV (GLuint index, const GLint64EXT
// *v);
#define GLVertexAttribL4i64vNV OpenGLLoadercontext->glVertexAttribL4i64vNV
// GLAPI void APIENTRY glVertexAttribL1ui64NV (GLuint index, GLuint64EXT x);
#define GLVertexAttribL1ui64NV OpenGLLoadercontext->glVertexAttribL1ui64NV
// GLAPI void APIENTRY glVertexAttribL2ui64NV (GLuint index, GLuint64EXT x,
// GLuint64EXT y);
#define GLVertexAttribL2ui64NV OpenGLLoadercontext->glVertexAttribL2ui64NV
// GLAPI void APIENTRY glVertexAttribL3ui64NV (GLuint index, GLuint64EXT x,
// GLuint64EXT y, GLuint64EXT z);
#define GLVertexAttribL3ui64NV OpenGLLoadercontext->glVertexAttribL3ui64NV
// GLAPI void APIENTRY glVertexAttribL4ui64NV (GLuint index, GLuint64EXT x,
// GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
#define GLVertexAttribL4ui64NV OpenGLLoadercontext->glVertexAttribL4ui64NV
// GLAPI void APIENTRY glVertexAttribL1ui64vNV (GLuint index, const GLuint64EXT
// *v);
#define GLVertexAttribL1ui64vNV OpenGLLoadercontext->glVertexAttribL1ui64vNV
// GLAPI void APIENTRY glVertexAttribL2ui64vNV (GLuint index, const GLuint64EXT
// *v);
#define GLVertexAttribL2ui64vNV OpenGLLoadercontext->glVertexAttribL2ui64vNV
// GLAPI void APIENTRY glVertexAttribL3ui64vNV (GLuint index, const GLuint64EXT
// *v);
#define GLVertexAttribL3ui64vNV OpenGLLoadercontext->glVertexAttribL3ui64vNV
// GLAPI void APIENTRY glVertexAttribL4ui64vNV (GLuint index, const GLuint64EXT
// *v);
#define GLVertexAttribL4ui64vNV OpenGLLoadercontext->glVertexAttribL4ui64vNV
// GLAPI void APIENTRY glGetVertexAttribLi64vNV (GLuint index, GLenum pname,
// GLint64EXT *params);
#define GLGetVertexAttribLi64vNV OpenGLLoadercontext->glGetVertexAttribLi64vNV
// GLAPI void APIENTRY glGetVertexAttribLui64vNV (GLuint index, GLenum pname,
// GLuint64EXT *params);
#define GLGetVertexAttribLui64vNV OpenGLLoadercontext->glGetVertexAttribLui64vNV
// GLAPI void APIENTRY glVertexAttribLFormatNV (GLuint index, GLint size, GLenum
// type, GLsizei stride);
#define GLVertexAttribLFormatNV OpenGLLoadercontext->glVertexAttribLFormatNV
// GLAPI void APIENTRY glBufferAddressRangeNV (GLenum pname, GLuint index,
// GLuint64EXT address, GLsizeiptr length);
#define GLBufferAddressRangeNV OpenGLLoadercontext->glBufferAddressRangeNV
// GLAPI void APIENTRY glVertexFormatNV (GLint size, GLenum type, GLsizei
// stride);
#define GLVertexFormatNV OpenGLLoadercontext->glVertexFormatNV
// GLAPI void APIENTRY glNormalFormatNV (GLenum type, GLsizei stride);
#define GLNormalFormatNV OpenGLLoadercontext->glNormalFormatNV
// GLAPI void APIENTRY glColorFormatNV (GLint size, GLenum type, GLsizei
// stride);
#define GLColorFormatNV OpenGLLoadercontext->glColorFormatNV
// GLAPI void APIENTRY glIndexFormatNV (GLenum type, GLsizei stride);
#define GLIndexFormatNV OpenGLLoadercontext->glIndexFormatNV
// GLAPI void APIENTRY glTexCoordFormatNV (GLint size, GLenum type, GLsizei
// stride);
#define GLTexCoordFormatNV OpenGLLoadercontext->glTexCoordFormatNV
// GLAPI void APIENTRY glEdgeFlagFormatNV (GLsizei stride);
#define GLEdgeFlagFormatNV OpenGLLoadercontext->glEdgeFlagFormatNV
// GLAPI void APIENTRY glSecondaryColorFormatNV (GLint size, GLenum type,
// GLsizei stride);
#define GLSecondaryColorFormatNV OpenGLLoadercontext->glSecondaryColorFormatNV
// GLAPI void APIENTRY glFogCoordFormatNV (GLenum type, GLsizei stride);
#define GLFogCoordFormatNV OpenGLLoadercontext->glFogCoordFormatNV
// GLAPI void APIENTRY glVertexAttribFormatNV (GLuint index, GLint size, GLenum
// type, GLboolean normalized, GLsizei stride);
#define GLVertexAttribFormatNV OpenGLLoadercontext->glVertexAttribFormatNV
// GLAPI void APIENTRY glVertexAttribIFormatNV (GLuint index, GLint size, GLenum
// type, GLsizei stride);
#define GLVertexAttribIFormatNV OpenGLLoadercontext->glVertexAttribIFormatNV
// GLAPI void APIENTRY glGetIntegerui64i_vNV (GLenum value, GLuint index,
// GLuint64EXT *result);
#define GLGetIntegerui64i_vNV OpenGLLoadercontext->glGetIntegerui64i_vNV
// GLAPI GLboolean APIENTRY glAreProgramsResidentNV (GLsizei n, const GLuint
// *programs, GLboolean *residences);
#define GLAreProgramsResidentNV OpenGLLoadercontext->glAreProgramsResidentNV
// GLAPI void APIENTRY glBindProgramNV (GLenum target, GLuint id);
#define GLBindProgramNV OpenGLLoadercontext->glBindProgramNV
// GLAPI void APIENTRY glDeleteProgramsNV (GLsizei n, const GLuint *programs);
#define GLDeleteProgramsNV OpenGLLoadercontext->glDeleteProgramsNV
// GLAPI void APIENTRY glExecuteProgramNV (GLenum target, GLuint id, const
// GLfloat *params);
#define GLExecuteProgramNV OpenGLLoadercontext->glExecuteProgramNV
// GLAPI void APIENTRY glGenProgramsNV (GLsizei n, GLuint *programs);
#define GLGenProgramsNV OpenGLLoadercontext->glGenProgramsNV
// GLAPI void APIENTRY glGetProgramParameterdvNV (GLenum target, GLuint index,
// GLenum pname, GLdouble *params);
#define GLGetProgramParameterdvNV OpenGLLoadercontext->glGetProgramParameterdvNV
// GLAPI void APIENTRY glGetProgramParameterfvNV (GLenum target, GLuint index,
// GLenum pname, GLfloat *params);
#define GLGetProgramParameterfvNV OpenGLLoadercontext->glGetProgramParameterfvNV
// GLAPI void APIENTRY glGetProgramivNV (GLuint id, GLenum pname, GLint
// *params);
#define GLGetProgramivNV OpenGLLoadercontext->glGetProgramivNV
// GLAPI void APIENTRY glGetProgramStringNV (GLuint id, GLenum pname, GLubyte
// *program);
#define GLGetProgramStringNV OpenGLLoadercontext->glGetProgramStringNV
// GLAPI void APIENTRY glGetTrackMatrixivNV (GLenum target, GLuint address,
// GLenum pname, GLint *params);
#define GLGetTrackMatrixivNV OpenGLLoadercontext->glGetTrackMatrixivNV
// GLAPI void APIENTRY glGetVertexAttribdvNV (GLuint index, GLenum pname,
// GLdouble *params);
#define GLGetVertexAttribdvNV OpenGLLoadercontext->glGetVertexAttribdvNV
// GLAPI void APIENTRY glGetVertexAttribfvNV (GLuint index, GLenum pname,
// GLfloat *params);
#define GLGetVertexAttribfvNV OpenGLLoadercontext->glGetVertexAttribfvNV
// GLAPI void APIENTRY glGetVertexAttribivNV (GLuint index, GLenum pname, GLint
// *params);
#define GLGetVertexAttribivNV OpenGLLoadercontext->glGetVertexAttribivNV
// GLAPI void APIENTRY glGetVertexAttribPointervNV (GLuint index, GLenum pname,
// void **pointer);
#define GLGetVertexAttribPointervNV                                            \
  OpenGLLoadercontext->glGetVertexAttribPointervNV
// GLAPI GLboolean APIENTRY glIsProgramNV (GLuint id);
#define GLIsProgramNV OpenGLLoadercontext->glIsProgramNV
// GLAPI void APIENTRY glLoadProgramNV (GLenum target, GLuint id, GLsizei len,
// const GLubyte *program);
#define GLLoadProgramNV OpenGLLoadercontext->glLoadProgramNV
// GLAPI void APIENTRY glProgramParameter4dNV (GLenum target, GLuint index,
// GLdouble x, GLdouble y, GLdouble z, GLdouble w);
#define GLProgramParameter4dNV OpenGLLoadercontext->glProgramParameter4dNV
// GLAPI void APIENTRY glProgramParameter4dvNV (GLenum target, GLuint index,
// const GLdouble *v);
#define GLProgramParameter4dvNV OpenGLLoadercontext->glProgramParameter4dvNV
// GLAPI void APIENTRY glProgramParameter4fNV (GLenum target, GLuint index,
// GLfloat x, GLfloat y, GLfloat z, GLfloat w);
#define GLProgramParameter4fNV OpenGLLoadercontext->glProgramParameter4fNV
// GLAPI void APIENTRY glProgramParameter4fvNV (GLenum target, GLuint index,
// const GLfloat *v);
#define GLProgramParameter4fvNV OpenGLLoadercontext->glProgramParameter4fvNV
// GLAPI void APIENTRY glProgramParameters4dvNV (GLenum target, GLuint index,
// GLsizei count, const GLdouble *v);
#define GLProgramParameters4dvNV OpenGLLoadercontext->glProgramParameters4dvNV
// GLAPI void APIENTRY glProgramParameters4fvNV (GLenum target, GLuint index,
// GLsizei count, const GLfloat *v);
#define GLProgramParameters4fvNV OpenGLLoadercontext->glProgramParameters4fvNV
// GLAPI void APIENTRY glRequestResidentProgramsNV (GLsizei n, const GLuint
// *programs);
#define GLRequestResidentProgramsNV                                            \
  OpenGLLoadercontext->glRequestResidentProgramsNV
// GLAPI void APIENTRY glTrackMatrixNV (GLenum target, GLuint address, GLenum
// matrix, GLenum transform);
#define GLTrackMatrixNV OpenGLLoadercontext->glTrackMatrixNV
// GLAPI void APIENTRY glVertexAttribPointerNV (GLuint index, GLint fsize,
// GLenum type, GLsizei stride, const void *pointer);
#define GLVertexAttribPointerNV OpenGLLoadercontext->glVertexAttribPointerNV
// GLAPI void APIENTRY glVertexAttrib1dNV (GLuint index, GLdouble x);
#define GLVertexAttrib1dNV OpenGLLoadercontext->glVertexAttrib1dNV
// GLAPI void APIENTRY glVertexAttrib1dvNV (GLuint index, const GLdouble *v);
#define GLVertexAttrib1dvNV OpenGLLoadercontext->glVertexAttrib1dvNV
// GLAPI void APIENTRY glVertexAttrib1fNV (GLuint index, GLfloat x);
#define GLVertexAttrib1fNV OpenGLLoadercontext->glVertexAttrib1fNV
// GLAPI void APIENTRY glVertexAttrib1fvNV (GLuint index, const GLfloat *v);
#define GLVertexAttrib1fvNV OpenGLLoadercontext->glVertexAttrib1fvNV
// GLAPI void APIENTRY glVertexAttrib1sNV (GLuint index, GLshort x);
#define GLVertexAttrib1sNV OpenGLLoadercontext->glVertexAttrib1sNV
// GLAPI void APIENTRY glVertexAttrib1svNV (GLuint index, const GLshort *v);
#define GLVertexAttrib1svNV OpenGLLoadercontext->glVertexAttrib1svNV
// GLAPI void APIENTRY glVertexAttrib2dNV (GLuint index, GLdouble x, GLdouble
// y);
#define GLVertexAttrib2dNV OpenGLLoadercontext->glVertexAttrib2dNV
// GLAPI void APIENTRY glVertexAttrib2dvNV (GLuint index, const GLdouble *v);
#define GLVertexAttrib2dvNV OpenGLLoadercontext->glVertexAttrib2dvNV
// GLAPI void APIENTRY glVertexAttrib2fNV (GLuint index, GLfloat x, GLfloat y);
#define GLVertexAttrib2fNV OpenGLLoadercontext->glVertexAttrib2fNV
// GLAPI void APIENTRY glVertexAttrib2fvNV (GLuint index, const GLfloat *v);
#define GLVertexAttrib2fvNV OpenGLLoadercontext->glVertexAttrib2fvNV
// GLAPI void APIENTRY glVertexAttrib2sNV (GLuint index, GLshort x, GLshort y);
#define GLVertexAttrib2sNV OpenGLLoadercontext->glVertexAttrib2sNV
// GLAPI void APIENTRY glVertexAttrib2svNV (GLuint index, const GLshort *v);
#define GLVertexAttrib2svNV OpenGLLoadercontext->glVertexAttrib2svNV
// GLAPI void APIENTRY glVertexAttrib3dNV (GLuint index, GLdouble x, GLdouble y,
// GLdouble z);
#define GLVertexAttrib3dNV OpenGLLoadercontext->glVertexAttrib3dNV
// GLAPI void APIENTRY glVertexAttrib3dvNV (GLuint index, const GLdouble *v);
#define GLVertexAttrib3dvNV OpenGLLoadercontext->glVertexAttrib3dvNV
// GLAPI void APIENTRY glVertexAttrib3fNV (GLuint index, GLfloat x, GLfloat y,
// GLfloat z);
#define GLVertexAttrib3fNV OpenGLLoadercontext->glVertexAttrib3fNV
// GLAPI void APIENTRY glVertexAttrib3fvNV (GLuint index, const GLfloat *v);
#define GLVertexAttrib3fvNV OpenGLLoadercontext->glVertexAttrib3fvNV
// GLAPI void APIENTRY glVertexAttrib3sNV (GLuint index, GLshort x, GLshort y,
// GLshort z);
#define GLVertexAttrib3sNV OpenGLLoadercontext->glVertexAttrib3sNV
// GLAPI void APIENTRY glVertexAttrib3svNV (GLuint index, const GLshort *v);
#define GLVertexAttrib3svNV OpenGLLoadercontext->glVertexAttrib3svNV
// GLAPI void APIENTRY glVertexAttrib4dNV (GLuint index, GLdouble x, GLdouble y,
// GLdouble z, GLdouble w);
#define GLVertexAttrib4dNV OpenGLLoadercontext->glVertexAttrib4dNV
// GLAPI void APIENTRY glVertexAttrib4dvNV (GLuint index, const GLdouble *v);
#define GLVertexAttrib4dvNV OpenGLLoadercontext->glVertexAttrib4dvNV
// GLAPI void APIENTRY glVertexAttrib4fNV (GLuint index, GLfloat x, GLfloat y,
// GLfloat z, GLfloat w);
#define GLVertexAttrib4fNV OpenGLLoadercontext->glVertexAttrib4fNV
// GLAPI void APIENTRY glVertexAttrib4fvNV (GLuint index, const GLfloat *v);
#define GLVertexAttrib4fvNV OpenGLLoadercontext->glVertexAttrib4fvNV
// GLAPI void APIENTRY glVertexAttrib4sNV (GLuint index, GLshort x, GLshort y,
// GLshort z, GLshort w);
#define GLVertexAttrib4sNV OpenGLLoadercontext->glVertexAttrib4sNV
// GLAPI void APIENTRY glVertexAttrib4svNV (GLuint index, const GLshort *v);
#define GLVertexAttrib4svNV OpenGLLoadercontext->glVertexAttrib4svNV
// GLAPI void APIENTRY glVertexAttrib4ubNV (GLuint index, GLubyte x, GLubyte y,
// GLubyte z, GLubyte w);
#define GLVertexAttrib4ubNV OpenGLLoadercontext->glVertexAttrib4ubNV
// GLAPI void APIENTRY glVertexAttrib4ubvNV (GLuint index, const GLubyte *v);
#define GLVertexAttrib4ubvNV OpenGLLoadercontext->glVertexAttrib4ubvNV
// GLAPI void APIENTRY glVertexAttribs1dvNV (GLuint index, GLsizei count, const
// GLdouble *v);
#define GLVertexAttribs1dvNV OpenGLLoadercontext->glVertexAttribs1dvNV
// GLAPI void APIENTRY glVertexAttribs1fvNV (GLuint index, GLsizei count, const
// GLfloat *v);
#define GLVertexAttribs1fvNV OpenGLLoadercontext->glVertexAttribs1fvNV
// GLAPI void APIENTRY glVertexAttribs1svNV (GLuint index, GLsizei count, const
// GLshort *v);
#define GLVertexAttribs1svNV OpenGLLoadercontext->glVertexAttribs1svNV
// GLAPI void APIENTRY glVertexAttribs2dvNV (GLuint index, GLsizei count, const
// GLdouble *v);
#define GLVertexAttribs2dvNV OpenGLLoadercontext->glVertexAttribs2dvNV
// GLAPI void APIENTRY glVertexAttribs2fvNV (GLuint index, GLsizei count, const
// GLfloat *v);
#define GLVertexAttribs2fvNV OpenGLLoadercontext->glVertexAttribs2fvNV
// GLAPI void APIENTRY glVertexAttribs2svNV (GLuint index, GLsizei count, const
// GLshort *v);
#define GLVertexAttribs2svNV OpenGLLoadercontext->glVertexAttribs2svNV
// GLAPI void APIENTRY glVertexAttribs3dvNV (GLuint index, GLsizei count, const
// GLdouble *v);
#define GLVertexAttribs3dvNV OpenGLLoadercontext->glVertexAttribs3dvNV
// GLAPI void APIENTRY glVertexAttribs3fvNV (GLuint index, GLsizei count, const
// GLfloat *v);
#define GLVertexAttribs3fvNV OpenGLLoadercontext->glVertexAttribs3fvNV
// GLAPI void APIENTRY glVertexAttribs3svNV (GLuint index, GLsizei count, const
// GLshort *v);
#define GLVertexAttribs3svNV OpenGLLoadercontext->glVertexAttribs3svNV
// GLAPI void APIENTRY glVertexAttribs4dvNV (GLuint index, GLsizei count, const
// GLdouble *v);
#define GLVertexAttribs4dvNV OpenGLLoadercontext->glVertexAttribs4dvNV
// GLAPI void APIENTRY glVertexAttribs4fvNV (GLuint index, GLsizei count, const
// GLfloat *v);
#define GLVertexAttribs4fvNV OpenGLLoadercontext->glVertexAttribs4fvNV
// GLAPI void APIENTRY glVertexAttribs4svNV (GLuint index, GLsizei count, const
// GLshort *v);
#define GLVertexAttribs4svNV OpenGLLoadercontext->glVertexAttribs4svNV
// GLAPI void APIENTRY glVertexAttribs4ubvNV (GLuint index, GLsizei count, const
// GLubyte *v);
#define GLVertexAttribs4ubvNV OpenGLLoadercontext->glVertexAttribs4ubvNV
// GLAPI void APIENTRY glBeginVideoCaptureNV (GLuint video_capture_slot);
#define GLBeginVideoCaptureNV OpenGLLoadercontext->glBeginVideoCaptureNV
// GLAPI void APIENTRY glBindVideoCaptureStreamBufferNV (GLuint
// video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset);
#define GLBindVideoCaptureStreamBufferNV                                       \
  OpenGLLoadercontext->glBindVideoCaptureStreamBufferNV
// GLAPI void APIENTRY glBindVideoCaptureStreamTextureNV (GLuint
// video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint
// texture);
#define GLBindVideoCaptureStreamTextureNV                                      \
  OpenGLLoadercontext->glBindVideoCaptureStreamTextureNV
// GLAPI void APIENTRY glEndVideoCaptureNV (GLuint video_capture_slot);
#define GLEndVideoCaptureNV OpenGLLoadercontext->glEndVideoCaptureNV
// GLAPI void APIENTRY glGetVideoCaptureivNV (GLuint video_capture_slot, GLenum
// pname, GLint *params);
#define GLGetVideoCaptureivNV OpenGLLoadercontext->glGetVideoCaptureivNV
// GLAPI void APIENTRY glGetVideoCaptureStreamivNV (GLuint video_capture_slot,
// GLuint stream, GLenum pname, GLint *params);
#define GLGetVideoCaptureStreamivNV                                            \
  OpenGLLoadercontext->glGetVideoCaptureStreamivNV
// GLAPI void APIENTRY glGetVideoCaptureStreamfvNV (GLuint video_capture_slot,
// GLuint stream, GLenum pname, GLfloat *params);
#define GLGetVideoCaptureStreamfvNV                                            \
  OpenGLLoadercontext->glGetVideoCaptureStreamfvNV
// GLAPI void APIENTRY glGetVideoCaptureStreamdvNV (GLuint video_capture_slot,
// GLuint stream, GLenum pname, GLdouble *params);
#define GLGetVideoCaptureStreamdvNV                                            \
  OpenGLLoadercontext->glGetVideoCaptureStreamdvNV
// GLAPI GLenum APIENTRY glVideoCaptureNV (GLuint video_capture_slot, GLuint
// *sequence_num, GLuint64EXT *capture_time);
#define GLVideoCaptureNV OpenGLLoadercontext->glVideoCaptureNV
// GLAPI void APIENTRY glVideoCaptureStreamParameterivNV (GLuint
// video_capture_slot, GLuint stream, GLenum pname, const GLint *params);
#define GLVideoCaptureStreamParameterivNV                                      \
  OpenGLLoadercontext->glVideoCaptureStreamParameterivNV
// GLAPI void APIENTRY glVideoCaptureStreamParameterfvNV (GLuint
// video_capture_slot, GLuint stream, GLenum pname, const GLfloat *params);
#define GLVideoCaptureStreamParameterfvNV                                      \
  OpenGLLoadercontext->glVideoCaptureStreamParameterfvNV
// GLAPI void APIENTRY glVideoCaptureStreamParameterdvNV (GLuint
// video_capture_slot, GLuint stream, GLenum pname, const GLdouble *params);
#define GLVideoCaptureStreamParameterdvNV                                      \
  OpenGLLoadercontext->glVideoCaptureStreamParameterdvNV
// GLAPI void APIENTRY glViewportSwizzleNV (GLuint index, GLenum swizzlex,
// GLenum swizzley, GLenum swizzlez, GLenum swizzlew);
#define GLViewportSwizzleNV OpenGLLoadercontext->glViewportSwizzleNV
// GLAPI void APIENTRY glFramebufferTextureMultiviewOVR (GLenum target, GLenum
// attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei
// numViews);
#define GLFramebufferTextureMultiviewOVR                                       \
  OpenGLLoadercontext->glFramebufferTextureMultiviewOVR
// GLAPI void APIENTRY glHintPGI (GLenum target, GLint mode);
#define GLHintPGI OpenGLLoadercontext->glHintPGI
// GLAPI void APIENTRY glDetailTexFuncSGIS (GLenum target, GLsizei n, const
// GLfloat *points);
#define GLDetailTexFuncSGIS OpenGLLoadercontext->glDetailTexFuncSGIS
// GLAPI void APIENTRY glGetDetailTexFuncSGIS (GLenum target, GLfloat *points);
#define GLGetDetailTexFuncSGIS OpenGLLoadercontext->glGetDetailTexFuncSGIS
// GLAPI void APIENTRY glFogFuncSGIS (GLsizei n, const GLfloat *points);
#define GLFogFuncSGIS OpenGLLoadercontext->glFogFuncSGIS
// GLAPI void APIENTRY glGetFogFuncSGIS (GLfloat *points);
#define GLGetFogFuncSGIS OpenGLLoadercontext->glGetFogFuncSGIS
// GLAPI void APIENTRY glSampleMaskSGIS (GLclampf value, GLboolean invert);
#define GLSampleMaskSGIS OpenGLLoadercontext->glSampleMaskSGIS
// GLAPI void APIENTRY glSamplePatternSGIS (GLenum pattern);
#define GLSamplePatternSGIS OpenGLLoadercontext->glSamplePatternSGIS
// GLAPI void APIENTRY glPixelTexGenParameteriSGIS (GLenum pname, GLint param);
#define GLPixelTexGenParameteriSGIS                                            \
  OpenGLLoadercontext->glPixelTexGenParameteriSGIS
// GLAPI void APIENTRY glPixelTexGenParameterivSGIS (GLenum pname, const GLint
// *params);
#define GLPixelTexGenParameterivSGIS                                           \
  OpenGLLoadercontext->glPixelTexGenParameterivSGIS
// GLAPI void APIENTRY glPixelTexGenParameterfSGIS (GLenum pname, GLfloat
// param);
#define GLPixelTexGenParameterfSGIS                                            \
  OpenGLLoadercontext->glPixelTexGenParameterfSGIS
// GLAPI void APIENTRY glPixelTexGenParameterfvSGIS (GLenum pname, const GLfloat
// *params);
#define GLPixelTexGenParameterfvSGIS                                           \
  OpenGLLoadercontext->glPixelTexGenParameterfvSGIS
// GLAPI void APIENTRY glGetPixelTexGenParameterivSGIS (GLenum pname, GLint
// *params);
#define GLGetPixelTexGenParameterivSGIS                                        \
  OpenGLLoadercontext->glGetPixelTexGenParameterivSGIS
// GLAPI void APIENTRY glGetPixelTexGenParameterfvSGIS (GLenum pname, GLfloat
// *params);
#define GLGetPixelTexGenParameterfvSGIS                                        \
  OpenGLLoadercontext->glGetPixelTexGenParameterfvSGIS
// GLAPI void APIENTRY glPointParameterfSGIS (GLenum pname, GLfloat param);
#define GLPointParameterfSGIS OpenGLLoadercontext->glPointParameterfSGIS
// GLAPI void APIENTRY glPointParameterfvSGIS (GLenum pname, const GLfloat
// *params);
#define GLPointParameterfvSGIS OpenGLLoadercontext->glPointParameterfvSGIS
// GLAPI void APIENTRY glSharpenTexFuncSGIS (GLenum target, GLsizei n, const
// GLfloat *points);
#define GLSharpenTexFuncSGIS OpenGLLoadercontext->glSharpenTexFuncSGIS
// GLAPI void APIENTRY glGetSharpenTexFuncSGIS (GLenum target, GLfloat *points);
#define GLGetSharpenTexFuncSGIS OpenGLLoadercontext->glGetSharpenTexFuncSGIS
// GLAPI void APIENTRY glTexImage4DSGIS (GLenum target, GLint level, GLenum
// internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d,
// GLint border, GLenum format, GLenum type, const void *pixels);
#define GLTexImage4DSGIS OpenGLLoadercontext->glTexImage4DSGIS
// GLAPI void APIENTRY glTexSubImage4DSGIS (GLenum target, GLint level, GLint
// xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei
// height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const void
// *pixels);
#define GLTexSubImage4DSGIS OpenGLLoadercontext->glTexSubImage4DSGIS
// GLAPI void APIENTRY glTextureColorMaskSGIS (GLboolean red, GLboolean green,
// GLboolean blue, GLboolean alpha);
#define GLTextureColorMaskSGIS OpenGLLoadercontext->glTextureColorMaskSGIS
// GLAPI void APIENTRY glGetTexFilterFuncSGIS (GLenum target, GLenum filter,
// GLfloat *weights);
#define GLGetTexFilterFuncSGIS OpenGLLoadercontext->glGetTexFilterFuncSGIS
// GLAPI void APIENTRY glTexFilterFuncSGIS (GLenum target, GLenum filter,
// GLsizei n, const GLfloat *weights);
#define GLTexFilterFuncSGIS OpenGLLoadercontext->glTexFilterFuncSGIS
// GLAPI void APIENTRY glAsyncMarkerSGIX (GLuint marker);
#define GLAsyncMarkerSGIX OpenGLLoadercontext->glAsyncMarkerSGIX
// GLAPI GLint APIENTRY glFinishAsyncSGIX (GLuint *markerp);
#define GLFinishAsyncSGIX OpenGLLoadercontext->glFinishAsyncSGIX
// GLAPI GLint APIENTRY glPollAsyncSGIX (GLuint *markerp);
#define GLPollAsyncSGIX OpenGLLoadercontext->glPollAsyncSGIX
// GLAPI GLuint APIENTRY glGenAsyncMarkersSGIX (GLsizei range);
#define GLGenAsyncMarkersSGIX OpenGLLoadercontext->glGenAsyncMarkersSGIX
// GLAPI void APIENTRY glDeleteAsyncMarkersSGIX (GLuint marker, GLsizei range);
#define GLDeleteAsyncMarkersSGIX OpenGLLoadercontext->glDeleteAsyncMarkersSGIX
// GLAPI GLboolean APIENTRY glIsAsyncMarkerSGIX (GLuint marker);
#define GLIsAsyncMarkerSGIX OpenGLLoadercontext->glIsAsyncMarkerSGIX
// GLAPI void APIENTRY glFlushRasterSGIX (void);
#define GLFlushRasterSGIX OpenGLLoadercontext->glFlushRasterSGIX
// GLAPI void APIENTRY glFragmentColorMaterialSGIX (GLenum face, GLenum mode);
#define GLFragmentColorMaterialSGIX                                            \
  OpenGLLoadercontext->glFragmentColorMaterialSGIX
// GLAPI void APIENTRY glFragmentLightfSGIX (GLenum light, GLenum pname, GLfloat
// param);
#define GLFragmentLightfSGIX OpenGLLoadercontext->glFragmentLightfSGIX
// GLAPI void APIENTRY glFragmentLightfvSGIX (GLenum light, GLenum pname, const
// GLfloat *params);
#define GLFragmentLightfvSGIX OpenGLLoadercontext->glFragmentLightfvSGIX
// GLAPI void APIENTRY glFragmentLightiSGIX (GLenum light, GLenum pname, GLint
// param);
#define GLFragmentLightiSGIX OpenGLLoadercontext->glFragmentLightiSGIX
// GLAPI void APIENTRY glFragmentLightivSGIX (GLenum light, GLenum pname, const
// GLint *params);
#define GLFragmentLightivSGIX OpenGLLoadercontext->glFragmentLightivSGIX
// GLAPI void APIENTRY glFragmentLightModelfSGIX (GLenum pname, GLfloat param);
#define GLFragmentLightModelfSGIX OpenGLLoadercontext->glFragmentLightModelfSGIX
// GLAPI void APIENTRY glFragmentLightModelfvSGIX (GLenum pname, const GLfloat
// *params);
#define GLFragmentLightModelfvSGIX                                             \
  OpenGLLoadercontext->glFragmentLightModelfvSGIX
// GLAPI void APIENTRY glFragmentLightModeliSGIX (GLenum pname, GLint param);
#define GLFragmentLightModeliSGIX OpenGLLoadercontext->glFragmentLightModeliSGIX
// GLAPI void APIENTRY glFragmentLightModelivSGIX (GLenum pname, const GLint
// *params);
#define GLFragmentLightModelivSGIX                                             \
  OpenGLLoadercontext->glFragmentLightModelivSGIX
// GLAPI void APIENTRY glFragmentMaterialfSGIX (GLenum face, GLenum pname,
// GLfloat param);
#define GLFragmentMaterialfSGIX OpenGLLoadercontext->glFragmentMaterialfSGIX
// GLAPI void APIENTRY glFragmentMaterialfvSGIX (GLenum face, GLenum pname,
// const GLfloat *params);
#define GLFragmentMaterialfvSGIX OpenGLLoadercontext->glFragmentMaterialfvSGIX
// GLAPI void APIENTRY glFragmentMaterialiSGIX (GLenum face, GLenum pname, GLint
// param);
#define GLFragmentMaterialiSGIX OpenGLLoadercontext->glFragmentMaterialiSGIX
// GLAPI void APIENTRY glFragmentMaterialivSGIX (GLenum face, GLenum pname,
// const GLint *params);
#define GLFragmentMaterialivSGIX OpenGLLoadercontext->glFragmentMaterialivSGIX
// GLAPI void APIENTRY glGetFragmentLightfvSGIX (GLenum light, GLenum pname,
// GLfloat *params);
#define GLGetFragmentLightfvSGIX OpenGLLoadercontext->glGetFragmentLightfvSGIX
// GLAPI void APIENTRY glGetFragmentLightivSGIX (GLenum light, GLenum pname,
// GLint *params);
#define GLGetFragmentLightivSGIX OpenGLLoadercontext->glGetFragmentLightivSGIX
// GLAPI void APIENTRY glGetFragmentMaterialfvSGIX (GLenum face, GLenum pname,
// GLfloat *params);
#define GLGetFragmentMaterialfvSGIX                                            \
  OpenGLLoadercontext->glGetFragmentMaterialfvSGIX
// GLAPI void APIENTRY glGetFragmentMaterialivSGIX (GLenum face, GLenum pname,
// GLint *params);
#define GLGetFragmentMaterialivSGIX                                            \
  OpenGLLoadercontext->glGetFragmentMaterialivSGIX
// GLAPI void APIENTRY glLightEnviSGIX (GLenum pname, GLint param);
#define GLLightEnviSGIX OpenGLLoadercontext->glLightEnviSGIX
// GLAPI void APIENTRY glFrameZoomSGIX (GLint factor);
#define GLFrameZoomSGIX OpenGLLoadercontext->glFrameZoomSGIX
// GLAPI void APIENTRY glIglooInterfaceSGIX (GLenum pname, const void *params);
#define GLIglooInterfaceSGIX OpenGLLoadercontext->glIglooInterfaceSGIX
// GLAPI GLint APIENTRY glGetInstrumentsSGIX (void);
#define GLGetInstrumentsSGIX OpenGLLoadercontext->glGetInstrumentsSGIX
// GLAPI void APIENTRY glInstrumentsBufferSGIX (GLsizei size, GLint *buffer);
#define GLInstrumentsBufferSGIX OpenGLLoadercontext->glInstrumentsBufferSGIX
// GLAPI GLint APIENTRY glPollInstrumentsSGIX (GLint *marker_p);
#define GLPollInstrumentsSGIX OpenGLLoadercontext->glPollInstrumentsSGIX
// GLAPI void APIENTRY glReadInstrumentsSGIX (GLint marker);
#define GLReadInstrumentsSGIX OpenGLLoadercontext->glReadInstrumentsSGIX
// GLAPI void APIENTRY glStartInstrumentsSGIX (void);
#define GLStartInstrumentsSGIX OpenGLLoadercontext->glStartInstrumentsSGIX
// GLAPI void APIENTRY glStopInstrumentsSGIX (GLint marker);
#define GLStopInstrumentsSGIX OpenGLLoadercontext->glStopInstrumentsSGIX
// GLAPI void APIENTRY glGetListParameterfvSGIX (GLuint list, GLenum pname,
// GLfloat *params);
#define GLGetListParameterfvSGIX OpenGLLoadercontext->glGetListParameterfvSGIX
// GLAPI void APIENTRY glGetListParameterivSGIX (GLuint list, GLenum pname,
// GLint *params);
#define GLGetListParameterivSGIX OpenGLLoadercontext->glGetListParameterivSGIX
// GLAPI void APIENTRY glListParameterfSGIX (GLuint list, GLenum pname, GLfloat
// param);
#define GLListParameterfSGIX OpenGLLoadercontext->glListParameterfSGIX
// GLAPI void APIENTRY glListParameterfvSGIX (GLuint list, GLenum pname, const
// GLfloat *params);
#define GLListParameterfvSGIX OpenGLLoadercontext->glListParameterfvSGIX
// GLAPI void APIENTRY glListParameteriSGIX (GLuint list, GLenum pname, GLint
// param);
#define GLListParameteriSGIX OpenGLLoadercontext->glListParameteriSGIX
// GLAPI void APIENTRY glListParameterivSGIX (GLuint list, GLenum pname, const
// GLint *params);
#define GLListParameterivSGIX OpenGLLoadercontext->glListParameterivSGIX
// GLAPI void APIENTRY glPixelTexGenSGIX (GLenum mode);
#define GLPixelTexGenSGIX OpenGLLoadercontext->glPixelTexGenSGIX
// GLAPI void APIENTRY glDeformationMap3dSGIX (GLenum target, GLdouble u1,
// GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint
// vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder,
// const GLdouble *points);
#define GLDeformationMap3dSGIX OpenGLLoadercontext->glDeformationMap3dSGIX
// GLAPI void APIENTRY glDeformationMap3fSGIX (GLenum target, GLfloat u1,
// GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint
// vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder,
// const GLfloat *points);
#define GLDeformationMap3fSGIX OpenGLLoadercontext->glDeformationMap3fSGIX
// GLAPI void APIENTRY glDeformSGIX (GLbitfield mask);
#define GLDeformSGIX OpenGLLoadercontext->glDeformSGIX
// GLAPI void APIENTRY glLoadIdentityDeformationMapSGIX (GLbitfield mask);
#define GLLoadIdentityDeformationMapSGIX                                       \
  OpenGLLoadercontext->glLoadIdentityDeformationMapSGIX
// GLAPI void APIENTRY glReferencePlaneSGIX (const GLdouble *equation);
#define GLReferencePlaneSGIX OpenGLLoadercontext->glReferencePlaneSGIX
// GLAPI void APIENTRY glSpriteParameterfSGIX (GLenum pname, GLfloat param);
#define GLSpriteParameterfSGIX OpenGLLoadercontext->glSpriteParameterfSGIX
// GLAPI void APIENTRY glSpriteParameterfvSGIX (GLenum pname, const GLfloat
// *params);
#define GLSpriteParameterfvSGIX OpenGLLoadercontext->glSpriteParameterfvSGIX
// GLAPI void APIENTRY glSpriteParameteriSGIX (GLenum pname, GLint param);
#define GLSpriteParameteriSGIX OpenGLLoadercontext->glSpriteParameteriSGIX
// GLAPI void APIENTRY glSpriteParameterivSGIX (GLenum pname, const GLint
// *params);
#define GLSpriteParameterivSGIX OpenGLLoadercontext->glSpriteParameterivSGIX
// GLAPI void APIENTRY glTagSampleBufferSGIX (void);
#define GLTagSampleBufferSGIX OpenGLLoadercontext->glTagSampleBufferSGIX
// GLAPI void APIENTRY glColorTableSGI (GLenum target, GLenum internalformat,
// GLsizei width, GLenum format, GLenum type, const void *table);
#define GLColorTableSGI OpenGLLoadercontext->glColorTableSGI
// GLAPI void APIENTRY glColorTableParameterfvSGI (GLenum target, GLenum pname,
// const GLfloat *params);
#define GLColorTableParameterfvSGI                                             \
  OpenGLLoadercontext->glColorTableParameterfvSGI
// GLAPI void APIENTRY glColorTableParameterivSGI (GLenum target, GLenum pname,
// const GLint *params);
#define GLColorTableParameterivSGI                                             \
  OpenGLLoadercontext->glColorTableParameterivSGI
// GLAPI void APIENTRY glCopyColorTableSGI (GLenum target, GLenum
// internalformat, GLint x, GLint y, GLsizei width);
#define GLCopyColorTableSGI OpenGLLoadercontext->glCopyColorTableSGI
// GLAPI void APIENTRY glGetColorTableSGI (GLenum target, GLenum format, GLenum
// type, void *table);
#define GLGetColorTableSGI OpenGLLoadercontext->glGetColorTableSGI
// GLAPI void APIENTRY glGetColorTableParameterfvSGI (GLenum target, GLenum
// pname, GLfloat *params);
#define GLGetColorTableParameterfvSGI                                          \
  OpenGLLoadercontext->glGetColorTableParameterfvSGI
// GLAPI void APIENTRY glGetColorTableParameterivSGI (GLenum target, GLenum
// pname, GLint *params);
#define GLGetColorTableParameterivSGI                                          \
  OpenGLLoadercontext->glGetColorTableParameterivSGI
// GLAPI void APIENTRY glFinishTextureSUNX (void);
#define GLFinishTextureSUNX OpenGLLoadercontext->glFinishTextureSUNX
// GLAPI void APIENTRY glGlobalAlphaFactorbSUN (GLbyte factor);
#define GLGlobalAlphaFactorbSUN OpenGLLoadercontext->glGlobalAlphaFactorbSUN
// GLAPI void APIENTRY glGlobalAlphaFactorsSUN (GLshort factor);
#define GLGlobalAlphaFactorsSUN OpenGLLoadercontext->glGlobalAlphaFactorsSUN
// GLAPI void APIENTRY glGlobalAlphaFactoriSUN (GLint factor);
#define GLGlobalAlphaFactoriSUN OpenGLLoadercontext->glGlobalAlphaFactoriSUN
// GLAPI void APIENTRY glGlobalAlphaFactorfSUN (GLfloat factor);
#define GLGlobalAlphaFactorfSUN OpenGLLoadercontext->glGlobalAlphaFactorfSUN
// GLAPI void APIENTRY glGlobalAlphaFactordSUN (GLdouble factor);
#define GLGlobalAlphaFactordSUN OpenGLLoadercontext->glGlobalAlphaFactordSUN
// GLAPI void APIENTRY glGlobalAlphaFactorubSUN (GLubyte factor);
#define GLGlobalAlphaFactorubSUN OpenGLLoadercontext->glGlobalAlphaFactorubSUN
// GLAPI void APIENTRY glGlobalAlphaFactorusSUN (GLushort factor);
#define GLGlobalAlphaFactorusSUN OpenGLLoadercontext->glGlobalAlphaFactorusSUN
// GLAPI void APIENTRY glGlobalAlphaFactoruiSUN (GLuint factor);
#define GLGlobalAlphaFactoruiSUN OpenGLLoadercontext->glGlobalAlphaFactoruiSUN
// GLAPI void APIENTRY glDrawMeshArraysSUN (GLenum mode, GLint first, GLsizei
// count, GLsizei width);
#define GLDrawMeshArraysSUN OpenGLLoadercontext->glDrawMeshArraysSUN
// GLAPI void APIENTRY glReplacementCodeuiSUN (GLuint code);
#define GLReplacementCodeuiSUN OpenGLLoadercontext->glReplacementCodeuiSUN
// GLAPI void APIENTRY glReplacementCodeusSUN (GLushort code);
#define GLReplacementCodeusSUN OpenGLLoadercontext->glReplacementCodeusSUN
// GLAPI void APIENTRY glReplacementCodeubSUN (GLubyte code);
#define GLReplacementCodeubSUN OpenGLLoadercontext->glReplacementCodeubSUN
// GLAPI void APIENTRY glReplacementCodeuivSUN (const GLuint *code);
#define GLReplacementCodeuivSUN OpenGLLoadercontext->glReplacementCodeuivSUN
// GLAPI void APIENTRY glReplacementCodeusvSUN (const GLushort *code);
#define GLReplacementCodeusvSUN OpenGLLoadercontext->glReplacementCodeusvSUN
// GLAPI void APIENTRY glReplacementCodeubvSUN (const GLubyte *code);
#define GLReplacementCodeubvSUN OpenGLLoadercontext->glReplacementCodeubvSUN
// GLAPI void APIENTRY glReplacementCodePointerSUN (GLenum type, GLsizei stride,
// const void **pointer);
#define GLReplacementCodePointerSUN                                            \
  OpenGLLoadercontext->glReplacementCodePointerSUN
// GLAPI void APIENTRY glColor4ubVertex2fSUN (GLubyte r, GLubyte g, GLubyte b,
// GLubyte a, GLfloat x, GLfloat y);
#define GLColor4ubVertex2fSUN OpenGLLoadercontext->glColor4ubVertex2fSUN
// GLAPI void APIENTRY glColor4ubVertex2fvSUN (const GLubyte *c, const GLfloat
// *v);
#define GLColor4ubVertex2fvSUN OpenGLLoadercontext->glColor4ubVertex2fvSUN
// GLAPI void APIENTRY glColor4ubVertex3fSUN (GLubyte r, GLubyte g, GLubyte b,
// GLubyte a, GLfloat x, GLfloat y, GLfloat z);
#define GLColor4ubVertex3fSUN OpenGLLoadercontext->glColor4ubVertex3fSUN
// GLAPI void APIENTRY glColor4ubVertex3fvSUN (const GLubyte *c, const GLfloat
// *v);
#define GLColor4ubVertex3fvSUN OpenGLLoadercontext->glColor4ubVertex3fvSUN
// GLAPI void APIENTRY glColor3fVertex3fSUN (GLfloat r, GLfloat g, GLfloat b,
// GLfloat x, GLfloat y, GLfloat z);
#define GLColor3fVertex3fSUN OpenGLLoadercontext->glColor3fVertex3fSUN
// GLAPI void APIENTRY glColor3fVertex3fvSUN (const GLfloat *c, const GLfloat
// *v);
#define GLColor3fVertex3fvSUN OpenGLLoadercontext->glColor3fVertex3fvSUN
// GLAPI void APIENTRY glNormal3fVertex3fSUN (GLfloat nx, GLfloat ny, GLfloat
// nz, GLfloat x, GLfloat y, GLfloat z);
#define GLNormal3fVertex3fSUN OpenGLLoadercontext->glNormal3fVertex3fSUN
// GLAPI void APIENTRY glNormal3fVertex3fvSUN (const GLfloat *n, const GLfloat
// *v);
#define GLNormal3fVertex3fvSUN OpenGLLoadercontext->glNormal3fVertex3fvSUN
// GLAPI void APIENTRY glColor4fNormal3fVertex3fSUN (GLfloat r, GLfloat g,
// GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat
// y, GLfloat z);
#define GLColor4fNormal3fVertex3fSUN                                           \
  OpenGLLoadercontext->glColor4fNormal3fVertex3fSUN
// GLAPI void APIENTRY glColor4fNormal3fVertex3fvSUN (const GLfloat *c, const
// GLfloat *n, const GLfloat *v);
#define GLColor4fNormal3fVertex3fvSUN                                          \
  OpenGLLoadercontext->glColor4fNormal3fVertex3fvSUN
// GLAPI void APIENTRY glTexCoord2fVertex3fSUN (GLfloat s, GLfloat t, GLfloat x,
// GLfloat y, GLfloat z);
#define GLTexCoord2fVertex3fSUN OpenGLLoadercontext->glTexCoord2fVertex3fSUN
// GLAPI void APIENTRY glTexCoord2fVertex3fvSUN (const GLfloat *tc, const
// GLfloat *v);
#define GLTexCoord2fVertex3fvSUN OpenGLLoadercontext->glTexCoord2fVertex3fvSUN
// GLAPI void APIENTRY glTexCoord4fVertex4fSUN (GLfloat s, GLfloat t, GLfloat p,
// GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
#define GLTexCoord4fVertex4fSUN OpenGLLoadercontext->glTexCoord4fVertex4fSUN
// GLAPI void APIENTRY glTexCoord4fVertex4fvSUN (const GLfloat *tc, const
// GLfloat *v);
#define GLTexCoord4fVertex4fvSUN OpenGLLoadercontext->glTexCoord4fVertex4fvSUN
// GLAPI void APIENTRY glTexCoord2fColor4ubVertex3fSUN (GLfloat s, GLfloat t,
// GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
#define GLTexCoord2fColor4ubVertex3fSUN                                        \
  OpenGLLoadercontext->glTexCoord2fColor4ubVertex3fSUN
// GLAPI void APIENTRY glTexCoord2fColor4ubVertex3fvSUN (const GLfloat *tc,
// const GLubyte *c, const GLfloat *v);
#define GLTexCoord2fColor4ubVertex3fvSUN                                       \
  OpenGLLoadercontext->glTexCoord2fColor4ubVertex3fvSUN
// GLAPI void APIENTRY glTexCoord2fColor3fVertex3fSUN (GLfloat s, GLfloat t,
// GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
#define GLTexCoord2fColor3fVertex3fSUN                                         \
  OpenGLLoadercontext->glTexCoord2fColor3fVertex3fSUN
// GLAPI void APIENTRY glTexCoord2fColor3fVertex3fvSUN (const GLfloat *tc, const
// GLfloat *c, const GLfloat *v);
#define GLTexCoord2fColor3fVertex3fvSUN                                        \
  OpenGLLoadercontext->glTexCoord2fColor3fVertex3fvSUN
// GLAPI void APIENTRY glTexCoord2fNormal3fVertex3fSUN (GLfloat s, GLfloat t,
// GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
#define GLTexCoord2fNormal3fVertex3fSUN                                        \
  OpenGLLoadercontext->glTexCoord2fNormal3fVertex3fSUN
// GLAPI void APIENTRY glTexCoord2fNormal3fVertex3fvSUN (const GLfloat *tc,
// const GLfloat *n, const GLfloat *v);
#define GLTexCoord2fNormal3fVertex3fvSUN                                       \
  OpenGLLoadercontext->glTexCoord2fNormal3fVertex3fvSUN
// GLAPI void APIENTRY glTexCoord2fColor4fNormal3fVertex3fSUN (GLfloat s,
// GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat
// ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
#define GLTexCoord2fColor4fNormal3fVertex3fSUN                                 \
  OpenGLLoadercontext->glTexCoord2fColor4fNormal3fVertex3fSUN
// GLAPI void APIENTRY glTexCoord2fColor4fNormal3fVertex3fvSUN (const GLfloat
// *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
#define GLTexCoord2fColor4fNormal3fVertex3fvSUN                                \
  OpenGLLoadercontext->glTexCoord2fColor4fNormal3fVertex3fvSUN
// GLAPI void APIENTRY glTexCoord4fColor4fNormal3fVertex4fSUN (GLfloat s,
// GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a,
// GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat
// w);
#define GLTexCoord4fColor4fNormal3fVertex4fSUN                                 \
  OpenGLLoadercontext->glTexCoord4fColor4fNormal3fVertex4fSUN
// GLAPI void APIENTRY glTexCoord4fColor4fNormal3fVertex4fvSUN (const GLfloat
// *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
#define GLTexCoord4fColor4fNormal3fVertex4fvSUN                                \
  OpenGLLoadercontext->glTexCoord4fColor4fNormal3fVertex4fvSUN
// GLAPI void APIENTRY glReplacementCodeuiVertex3fSUN (GLuint rc, GLfloat x,
// GLfloat y, GLfloat z);
#define GLReplacementCodeuiVertex3fSUN                                         \
  OpenGLLoadercontext->glReplacementCodeuiVertex3fSUN
// GLAPI void APIENTRY glReplacementCodeuiVertex3fvSUN (const GLuint *rc, const
// GLfloat *v);
#define GLReplacementCodeuiVertex3fvSUN                                        \
  OpenGLLoadercontext->glReplacementCodeuiVertex3fvSUN
// GLAPI void APIENTRY glReplacementCodeuiColor4ubVertex3fSUN (GLuint rc,
// GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
#define GLReplacementCodeuiColor4ubVertex3fSUN                                 \
  OpenGLLoadercontext->glReplacementCodeuiColor4ubVertex3fSUN
// GLAPI void APIENTRY glReplacementCodeuiColor4ubVertex3fvSUN (const GLuint
// *rc, const GLubyte *c, const GLfloat *v);
#define GLReplacementCodeuiColor4ubVertex3fvSUN                                \
  OpenGLLoadercontext->glReplacementCodeuiColor4ubVertex3fvSUN
// GLAPI void APIENTRY glReplacementCodeuiColor3fVertex3fSUN (GLuint rc, GLfloat
// r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
#define GLReplacementCodeuiColor3fVertex3fSUN                                  \
  OpenGLLoadercontext->glReplacementCodeuiColor3fVertex3fSUN
// GLAPI void APIENTRY glReplacementCodeuiColor3fVertex3fvSUN (const GLuint *rc,
// const GLfloat *c, const GLfloat *v);
#define GLReplacementCodeuiColor3fVertex3fvSUN                                 \
  OpenGLLoadercontext->glReplacementCodeuiColor3fVertex3fvSUN
// GLAPI void APIENTRY glReplacementCodeuiNormal3fVertex3fSUN (GLuint rc,
// GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
#define GLReplacementCodeuiNormal3fVertex3fSUN                                 \
  OpenGLLoadercontext->glReplacementCodeuiNormal3fVertex3fSUN
// GLAPI void APIENTRY glReplacementCodeuiNormal3fVertex3fvSUN (const GLuint
// *rc, const GLfloat *n, const GLfloat *v);
#define GLReplacementCodeuiNormal3fVertex3fvSUN                                \
  OpenGLLoadercontext->glReplacementCodeuiNormal3fVertex3fvSUN
// GLAPI void APIENTRY glReplacementCodeuiColor4fNormal3fVertex3fSUN (GLuint rc,
// GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat
// nz, GLfloat x, GLfloat y, GLfloat z);
#define GLReplacementCodeuiColor4fNormal3fVertex3fSUN                          \
  OpenGLLoadercontext->glReplacementCodeuiColor4fNormal3fVertex3fSUN
// GLAPI void APIENTRY glReplacementCodeuiColor4fNormal3fVertex3fvSUN (const
// GLuint *rc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
#define GLReplacementCodeuiColor4fNormal3fVertex3fvSUN                         \
  OpenGLLoadercontext->glReplacementCodeuiColor4fNormal3fVertex3fvSUN
// GLAPI void APIENTRY glReplacementCodeuiTexCoord2fVertex3fSUN (GLuint rc,
// GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z);
#define GLReplacementCodeuiTexCoord2fVertex3fSUN                               \
  OpenGLLoadercontext->glReplacementCodeuiTexCoord2fVertex3fSUN
// GLAPI void APIENTRY glReplacementCodeuiTexCoord2fVertex3fvSUN (const GLuint
// *rc, const GLfloat *tc, const GLfloat *v);
#define GLReplacementCodeuiTexCoord2fVertex3fvSUN                              \
  OpenGLLoadercontext->glReplacementCodeuiTexCoord2fVertex3fvSUN
// GLAPI void APIENTRY glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN (GLuint
// rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x,
// GLfloat y, GLfloat z);
#define GLReplacementCodeuiTexCoord2fNormal3fVertex3fSUN                       \
  OpenGLLoadercontext->glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN
// GLAPI void APIENTRY glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN (const
// GLuint *rc, const GLfloat *tc, const GLfloat *n, const GLfloat *v);
#define GLReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN                      \
  OpenGLLoadercontext->glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN
// GLAPI void APIENTRY glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN
// (GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a,
// GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
#define GLReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN                \
  OpenGLLoadercontext->glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN
// GLAPI void APIENTRY glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN
// (const GLuint *rc, const GLfloat *tc, const GLfloat *c, const GLfloat *n,
// const GLfloat *v);
#define GLReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN               \
  OpenGLLoadercontext->glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN
// GLAPI void APIENTRY glCullFace (GLenum mode);
#define GLCullFace OpenGLLoadercontext->glCullFace
// GLAPI void APIENTRY glFrontFace (GLenum mode);
#define GLFrontFace OpenGLLoadercontext->glFrontFace
// GLAPI void APIENTRY glHint (GLenum target, GLenum mode);
#define GLHint OpenGLLoadercontext->glHint
// GLAPI void APIENTRY glLineWidth (GLfloat width);
#define GLLineWidth OpenGLLoadercontext->glLineWidth
// GLAPI void APIENTRY glPointSize (GLfloat size);
#define GLPointSize OpenGLLoadercontext->glPointSize
// GLAPI void APIENTRY glPolygonMode (GLenum face, GLenum mode);
#define GLPolygonMode OpenGLLoadercontext->glPolygonMode
// GLAPI void APIENTRY glScissor (GLint x, GLint y, GLsizei width, GLsizei
// height);
#define GLScissor OpenGLLoadercontext->glScissor
// GLAPI void APIENTRY glTexParameterf (GLenum target, GLenum pname, GLfloat
// param);
#define GLTexParameterf OpenGLLoadercontext->glTexParameterf
// GLAPI void APIENTRY glTexParameterfv (GLenum target, GLenum pname, const
// GLfloat *params);
#define GLTexParameterfv OpenGLLoadercontext->glTexParameterfv
// GLAPI void APIENTRY glTexParameteri (GLenum target, GLenum pname, GLint
// param);
#define GLTexParameteri OpenGLLoadercontext->glTexParameteri
// GLAPI void APIENTRY glTexParameteriv (GLenum target, GLenum pname, const
// GLint *params);
#define GLTexParameteriv OpenGLLoadercontext->glTexParameteriv
// GLAPI void APIENTRY glTexImage1D (GLenum target, GLint level, GLint
// internalformat, GLsizei width, GLint border, GLenum format, GLenum type,
// const void *pixels);
#define GLTexImage1D OpenGLLoadercontext->glTexImage1D
// GLAPI void APIENTRY glTexImage2D (GLenum target, GLint level, GLint
// internalformat, GLsizei width, GLsizei height, GLint border, GLenum format,
// GLenum type, const void *pixels);
#define GLTexImage2D OpenGLLoadercontext->glTexImage2D
// GLAPI void APIENTRY glDrawBuffer (GLenum buf);
#define GLDrawBuffer OpenGLLoadercontext->glDrawBuffer
// GLAPI void APIENTRY glClear (GLbitfield mask);
#define GLClear OpenGLLoadercontext->glClear
// GLAPI void APIENTRY glClearColor (GLfloat red, GLfloat green, GLfloat blue,
// GLfloat alpha);
#define GLClearColor OpenGLLoadercontext->glClearColor
// GLAPI void APIENTRY glClearStencil (GLint s);
#define GLClearStencil OpenGLLoadercontext->glClearStencil
// GLAPI void APIENTRY glClearDepth (GLdouble depth);
#define GLClearDepth OpenGLLoadercontext->glClearDepth
// GLAPI void APIENTRY glStencilMask (GLuint mask);
#define GLStencilMask OpenGLLoadercontext->glStencilMask
// GLAPI void APIENTRY glColorMask (GLboolean red, GLboolean green, GLboolean
// blue, GLboolean alpha);
#define GLColorMask OpenGLLoadercontext->glColorMask
// GLAPI void APIENTRY glDepthMask (GLboolean flag);
#define GLDepthMask OpenGLLoadercontext->glDepthMask
// GLAPI void APIENTRY glDisable (GLenum cap);
#define GLDisable OpenGLLoadercontext->glDisable
// GLAPI void APIENTRY glEnable (GLenum cap);
#define GLEnable OpenGLLoadercontext->glEnable
// GLAPI void APIENTRY glFinish (void);
#define GLFinish OpenGLLoadercontext->glFinish
// GLAPI void APIENTRY glFlush (void);
#define GLFlush OpenGLLoadercontext->glFlush
// GLAPI void APIENTRY glBlendFunc (GLenum sfactor, GLenum dfactor);
#define GLBlendFunc OpenGLLoadercontext->glBlendFunc
// GLAPI void APIENTRY glLogicOp (GLenum opcode);
#define GLLogicOp OpenGLLoadercontext->glLogicOp
// GLAPI void APIENTRY glStencilFunc (GLenum func, GLint ref, GLuint mask);
#define GLStencilFunc OpenGLLoadercontext->glStencilFunc
// GLAPI void APIENTRY glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
#define GLStencilOp OpenGLLoadercontext->glStencilOp
// GLAPI void APIENTRY glDepthFunc (GLenum func);
#define GLDepthFunc OpenGLLoadercontext->glDepthFunc
// GLAPI void APIENTRY glPixelStoref (GLenum pname, GLfloat param);
#define GLPixelStoref OpenGLLoadercontext->glPixelStoref
// GLAPI void APIENTRY glPixelStorei (GLenum pname, GLint param);
#define GLPixelStorei OpenGLLoadercontext->glPixelStorei
// GLAPI void APIENTRY glReadBuffer (GLenum src);
#define GLReadBuffer OpenGLLoadercontext->glReadBuffer
// GLAPI void APIENTRY glReadPixels (GLint x, GLint y, GLsizei width, GLsizei
// height, GLenum format, GLenum type, void *pixels);
#define GLReadPixels OpenGLLoadercontext->glReadPixels
// GLAPI void APIENTRY glGetBooleanv (GLenum pname, GLboolean *data);
#define GLGetBooleanv OpenGLLoadercontext->glGetBooleanv
// GLAPI void APIENTRY glGetDoublev (GLenum pname, GLdouble *data);
#define GLGetDoublev OpenGLLoadercontext->glGetDoublev
// GLAPI GLenum APIENTRY glGetError (void);
#define GLGetError OpenGLLoadercontext->glGetError
// GLAPI void APIENTRY glGetFloatv (GLenum pname, GLfloat *data);
#define GLGetFloatv OpenGLLoadercontext->glGetFloatv
// GLAPI void APIENTRY glGetIntegerv (GLenum pname, GLint *data);
#define GLGetIntegerv OpenGLLoadercontext->glGetIntegerv
// GLAPI const GLubyte *APIENTRY glGetString (GLenum name);
#define GLGetString OpenGLLoadercontext->glGetString
// GLAPI void APIENTRY glGetTexImage (GLenum target, GLint level, GLenum format,
// GLenum type, void *pixels);
#define GLGetTexImage OpenGLLoadercontext->glGetTexImage
// GLAPI void APIENTRY glGetTexParameterfv (GLenum target, GLenum pname, GLfloat
// *params);
#define GLGetTexParameterfv OpenGLLoadercontext->glGetTexParameterfv
// GLAPI void APIENTRY glGetTexParameteriv (GLenum target, GLenum pname, GLint
// *params);
#define GLGetTexParameteriv OpenGLLoadercontext->glGetTexParameteriv
// GLAPI void APIENTRY glGetTexLevelParameterfv (GLenum target, GLint level,
// GLenum pname, GLfloat *params);
#define GLGetTexLevelParameterfv OpenGLLoadercontext->glGetTexLevelParameterfv
// GLAPI void APIENTRY glGetTexLevelParameteriv (GLenum target, GLint level,
// GLenum pname, GLint *params);
#define GLGetTexLevelParameteriv OpenGLLoadercontext->glGetTexLevelParameteriv
// GLAPI GLboolean APIENTRY glIsEnabled (GLenum cap);
#define GLIsEnabled OpenGLLoadercontext->glIsEnabled
// GLAPI void APIENTRY glDepthRange (GLdouble n, GLdouble f);
#define GLDepthRange OpenGLLoadercontext->glDepthRange
// GLAPI void APIENTRY glViewport (GLint x, GLint y, GLsizei width, GLsizei
// height);
#define GLViewport OpenGLLoadercontext->glViewport
// GLAPI void APIENTRY glDrawArrays (GLenum mode, GLint first, GLsizei count);
#define GLDrawArrays OpenGLLoadercontext->glDrawArrays
// GLAPI void APIENTRY glDrawElements (GLenum mode, GLsizei count, GLenum type,
// const void *indices);
#define GLDrawElements OpenGLLoadercontext->glDrawElements
// GLAPI void APIENTRY glGetPointerv (GLenum pname, void **params);
#define GLGetPointerv OpenGLLoadercontext->glGetPointerv
// GLAPI void APIENTRY glPolygonOffset (GLfloat factor, GLfloat units);
#define GLPolygonOffset OpenGLLoadercontext->glPolygonOffset
// GLAPI void APIENTRY glCopyTexImage1D (GLenum target, GLint level, GLenum
// internalformat, GLint x, GLint y, GLsizei width, GLint border);
#define GLCopyTexImage1D OpenGLLoadercontext->glCopyTexImage1D
// GLAPI void APIENTRY glCopyTexImage2D (GLenum target, GLint level, GLenum
// internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint
// border);
#define GLCopyTexImage2D OpenGLLoadercontext->glCopyTexImage2D
// GLAPI void APIENTRY glCopyTexSubImage1D (GLenum target, GLint level, GLint
// xoffset, GLint x, GLint y, GLsizei width);
#define GLCopyTexSubImage1D OpenGLLoadercontext->glCopyTexSubImage1D
// GLAPI void APIENTRY glCopyTexSubImage2D (GLenum target, GLint level, GLint
// xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
#define GLCopyTexSubImage2D OpenGLLoadercontext->glCopyTexSubImage2D
// GLAPI void APIENTRY glTexSubImage1D (GLenum target, GLint level, GLint
// xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
#define GLTexSubImage1D OpenGLLoadercontext->glTexSubImage1D
// GLAPI void APIENTRY glTexSubImage2D (GLenum target, GLint level, GLint
// xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum
// type, const void *pixels);
#define GLTexSubImage2D OpenGLLoadercontext->glTexSubImage2D
// GLAPI void APIENTRY glBindTexture (GLenum target, GLuint texture);
#define GLBindTexture OpenGLLoadercontext->glBindTexture
// GLAPI void APIENTRY glDeleteTextures (GLsizei n, const GLuint *textures);
#define GLDeleteTextures OpenGLLoadercontext->glDeleteTextures
// GLAPI void APIENTRY glGenTextures (GLsizei n, GLuint *textures);
#define GLGenTextures OpenGLLoadercontext->glGenTextures
// GLAPI GLboolean APIENTRY glIsTexture (GLuint texture);
#define GLIsTexture OpenGLLoadercontext->glIsTexture
