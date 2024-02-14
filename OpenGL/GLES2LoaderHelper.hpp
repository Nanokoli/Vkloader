// GL_APICALL void GL_APIENTRY glActiveTexture (GLenum texture);
#define GLActiveTexture GLES2Loadercontext->glActiveTexture
// GL_APICALL void GL_APIENTRY glAttachShader (GLuint program, GLuint shader);
#define GLAttachShader GLES2Loadercontext->glAttachShader
// GL_APICALL void GL_APIENTRY glBindAttribLocation (GLuint program, GLuint
// index, const GLchar *name);
#define GLBindAttribLocation GLES2Loadercontext->glBindAttribLocation
// GL_APICALL void GL_APIENTRY glBindBuffer (GLenum target, GLuint buffer);
#define GLBindBuffer GLES2Loadercontext->glBindBuffer
// GL_APICALL void GL_APIENTRY glBindFramebuffer (GLenum target, GLuint
// framebuffer);
#define GLBindFramebuffer GLES2Loadercontext->glBindFramebuffer
// GL_APICALL void GL_APIENTRY glBindRenderbuffer (GLenum target, GLuint
// renderbuffer);
#define GLBindRenderbuffer GLES2Loadercontext->glBindRenderbuffer
// GL_APICALL void GL_APIENTRY glBindTexture (GLenum target, GLuint texture);
#define GLBindTexture GLES2Loadercontext->glBindTexture
// GL_APICALL void GL_APIENTRY glBlendColor (GLfloat red, GLfloat green, GLfloat
// blue, GLfloat alpha);
#define GLBlendColor GLES2Loadercontext->glBlendColor
// GL_APICALL void GL_APIENTRY glBlendEquation (GLenum mode);
#define GLBlendEquation GLES2Loadercontext->glBlendEquation
// GL_APICALL void GL_APIENTRY glBlendEquationSeparate (GLenum modeRGB, GLenum
// modeAlpha);
#define GLBlendEquationSeparate GLES2Loadercontext->glBlendEquationSeparate
// GL_APICALL void GL_APIENTRY glBlendFunc (GLenum sfactor, GLenum dfactor);
#define GLBlendFunc GLES2Loadercontext->glBlendFunc
// GL_APICALL void GL_APIENTRY glBlendFuncSeparate (GLenum sfactorRGB, GLenum
// dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
#define GLBlendFuncSeparate GLES2Loadercontext->glBlendFuncSeparate
// GL_APICALL void GL_APIENTRY glBufferData (GLenum target, GLsizeiptr size,
// const void *data, GLenum usage);
#define GLBufferData GLES2Loadercontext->glBufferData
// GL_APICALL void GL_APIENTRY glBufferSubData (GLenum target, GLintptr offset,
// GLsizeiptr size, const void *data);
#define GLBufferSubData GLES2Loadercontext->glBufferSubData
// GL_APICALL GLenum GL_APIENTRY glCheckFramebufferStatus (GLenum target);
#define GLCheckFramebufferStatus GLES2Loadercontext->glCheckFramebufferStatus
// GL_APICALL void GL_APIENTRY glClear (GLbitfield mask);
#define GLClear GLES2Loadercontext->glClear
// GL_APICALL void GL_APIENTRY glClearColor (GLfloat red, GLfloat green, GLfloat
// blue, GLfloat alpha);
#define GLClearColor GLES2Loadercontext->glClearColor
// GL_APICALL void GL_APIENTRY glClearDepthf (GLfloat d);
#define GLClearDepthf GLES2Loadercontext->glClearDepthf
// GL_APICALL void GL_APIENTRY glClearStencil (GLint s);
#define GLClearStencil GLES2Loadercontext->glClearStencil
// GL_APICALL void GL_APIENTRY glColorMask (GLboolean red, GLboolean green,
// GLboolean blue, GLboolean alpha);
#define GLColorMask GLES2Loadercontext->glColorMask
// GL_APICALL void GL_APIENTRY glCompileShader (GLuint shader);
#define GLCompileShader GLES2Loadercontext->glCompileShader
// GL_APICALL void GL_APIENTRY glCompressedTexImage2D (GLenum target, GLint
// level, GLenum internalformat, GLsizei width, GLsizei height, GLint border,
// GLsizei imageSize, const void *data);
#define GLCompressedTexImage2D GLES2Loadercontext->glCompressedTexImage2D
// GL_APICALL void GL_APIENTRY glCompressedTexSubImage2D (GLenum target, GLint
// level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum
// format, GLsizei imageSize, const void *data);
#define GLCompressedTexSubImage2D GLES2Loadercontext->glCompressedTexSubImage2D
// GL_APICALL void GL_APIENTRY glCopyTexImage2D (GLenum target, GLint level,
// GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint
// border);
#define GLCopyTexImage2D GLES2Loadercontext->glCopyTexImage2D
// GL_APICALL void GL_APIENTRY glCopyTexSubImage2D (GLenum target, GLint level,
// GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei
// height);
#define GLCopyTexSubImage2D GLES2Loadercontext->glCopyTexSubImage2D
// GL_APICALL GLuint GL_APIENTRY glCreateProgram (void);
#define GLCreateProgram GLES2Loadercontext->glCreateProgram
// GL_APICALL GLuint GL_APIENTRY glCreateShader (GLenum type);
#define GLCreateShader GLES2Loadercontext->glCreateShader
// GL_APICALL void GL_APIENTRY glCullFace (GLenum mode);
#define GLCullFace GLES2Loadercontext->glCullFace
// GL_APICALL void GL_APIENTRY glDeleteBuffers (GLsizei n, const GLuint
// *buffers);
#define GLDeleteBuffers GLES2Loadercontext->glDeleteBuffers
// GL_APICALL void GL_APIENTRY glDeleteFramebuffers (GLsizei n, const GLuint
// *framebuffers);
#define GLDeleteFramebuffers GLES2Loadercontext->glDeleteFramebuffers
// GL_APICALL void GL_APIENTRY glDeleteProgram (GLuint program);
#define GLDeleteProgram GLES2Loadercontext->glDeleteProgram
// GL_APICALL void GL_APIENTRY glDeleteRenderbuffers (GLsizei n, const GLuint
// *renderbuffers);
#define GLDeleteRenderbuffers GLES2Loadercontext->glDeleteRenderbuffers
// GL_APICALL void GL_APIENTRY glDeleteShader (GLuint shader);
#define GLDeleteShader GLES2Loadercontext->glDeleteShader
// GL_APICALL void GL_APIENTRY glDeleteTextures (GLsizei n, const GLuint
// *textures);
#define GLDeleteTextures GLES2Loadercontext->glDeleteTextures
// GL_APICALL void GL_APIENTRY glDepthFunc (GLenum func);
#define GLDepthFunc GLES2Loadercontext->glDepthFunc
// GL_APICALL void GL_APIENTRY glDepthMask (GLboolean flag);
#define GLDepthMask GLES2Loadercontext->glDepthMask
// GL_APICALL void GL_APIENTRY glDepthRangef (GLfloat n, GLfloat f);
#define GLDepthRangef GLES2Loadercontext->glDepthRangef
// GL_APICALL void GL_APIENTRY glDetachShader (GLuint program, GLuint shader);
#define GLDetachShader GLES2Loadercontext->glDetachShader
// GL_APICALL void GL_APIENTRY glDisable (GLenum cap);
#define GLDisable GLES2Loadercontext->glDisable
// GL_APICALL void GL_APIENTRY glDisableVertexAttribArray (GLuint index);
#define GLDisableVertexAttribArray                                             \
  GLES2Loadercontext->glDisableVertexAttribArray
// GL_APICALL void GL_APIENTRY glDrawArrays (GLenum mode, GLint first, GLsizei
// count);
#define GLDrawArrays GLES2Loadercontext->glDrawArrays
// GL_APICALL void GL_APIENTRY glDrawElements (GLenum mode, GLsizei count,
// GLenum type, const void *indices);
#define GLDrawElements GLES2Loadercontext->glDrawElements
// GL_APICALL void GL_APIENTRY glEnable (GLenum cap);
#define GLEnable GLES2Loadercontext->glEnable
// GL_APICALL void GL_APIENTRY glEnableVertexAttribArray (GLuint index);
#define GLEnableVertexAttribArray GLES2Loadercontext->glEnableVertexAttribArray
// GL_APICALL void GL_APIENTRY glFinish (void);
#define GLFinish GLES2Loadercontext->glFinish
// GL_APICALL void GL_APIENTRY glFlush (void);
#define GLFlush GLES2Loadercontext->glFlush
// GL_APICALL void GL_APIENTRY glFramebufferRenderbuffer (GLenum target, GLenum
// attachment, GLenum renderbuffertarget, GLuint renderbuffer);
#define GLFramebufferRenderbuffer GLES2Loadercontext->glFramebufferRenderbuffer
// GL_APICALL void GL_APIENTRY glFramebufferTexture2D (GLenum target, GLenum
// attachment, GLenum textarget, GLuint texture, GLint level);
#define GLFramebufferTexture2D GLES2Loadercontext->glFramebufferTexture2D
// GL_APICALL void GL_APIENTRY glFrontFace (GLenum mode);
#define GLFrontFace GLES2Loadercontext->glFrontFace
// GL_APICALL void GL_APIENTRY glGenBuffers (GLsizei n, GLuint *buffers);
#define GLGenBuffers GLES2Loadercontext->glGenBuffers
// GL_APICALL void GL_APIENTRY glGenerateMipmap (GLenum target);
#define GLGenerateMipmap GLES2Loadercontext->glGenerateMipmap
// GL_APICALL void GL_APIENTRY glGenFramebuffers (GLsizei n, GLuint
// *framebuffers);
#define GLGenFramebuffers GLES2Loadercontext->glGenFramebuffers
// GL_APICALL void GL_APIENTRY glGenRenderbuffers (GLsizei n, GLuint
// *renderbuffers);
#define GLGenRenderbuffers GLES2Loadercontext->glGenRenderbuffers
// GL_APICALL void GL_APIENTRY glGenTextures (GLsizei n, GLuint *textures);
#define GLGenTextures GLES2Loadercontext->glGenTextures
// GL_APICALL void GL_APIENTRY glGetActiveAttrib (GLuint program, GLuint index,
// GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
#define GLGetActiveAttrib GLES2Loadercontext->glGetActiveAttrib
// GL_APICALL void GL_APIENTRY glGetActiveUniform (GLuint program, GLuint index,
// GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
#define GLGetActiveUniform GLES2Loadercontext->glGetActiveUniform
// GL_APICALL void GL_APIENTRY glGetAttachedShaders (GLuint program, GLsizei
// maxCount, GLsizei *count, GLuint *shaders);
#define GLGetAttachedShaders GLES2Loadercontext->glGetAttachedShaders
// GL_APICALL GLint GL_APIENTRY glGetAttribLocation (GLuint program, const
// GLchar *name);
#define GLGetAttribLocation GLES2Loadercontext->glGetAttribLocation
// GL_APICALL void GL_APIENTRY glGetBooleanv (GLenum pname, GLboolean *data);
#define GLGetBooleanv GLES2Loadercontext->glGetBooleanv
// GL_APICALL void GL_APIENTRY glGetBufferParameteriv (GLenum target, GLenum
// pname, GLint *params);
#define GLGetBufferParameteriv GLES2Loadercontext->glGetBufferParameteriv
// GL_APICALL GLenum GL_APIENTRY glGetError (void);
#define GLGetError GLES2Loadercontext->glGetError
// GL_APICALL void GL_APIENTRY glGetFloatv (GLenum pname, GLfloat *data);
#define GLGetFloatv GLES2Loadercontext->glGetFloatv
// GL_APICALL void GL_APIENTRY glGetFramebufferAttachmentParameteriv (GLenum
// target, GLenum attachment, GLenum pname, GLint *params);
#define GLGetFramebufferAttachmentParameteriv                                  \
  GLES2Loadercontext->glGetFramebufferAttachmentParameteriv
// GL_APICALL void GL_APIENTRY glGetIntegerv (GLenum pname, GLint *data);
#define GLGetIntegerv GLES2Loadercontext->glGetIntegerv
// GL_APICALL void GL_APIENTRY glGetProgramiv (GLuint program, GLenum pname,
// GLint *params);
#define GLGetProgramiv GLES2Loadercontext->glGetProgramiv
// GL_APICALL void GL_APIENTRY glGetProgramInfoLog (GLuint program, GLsizei
// bufSize, GLsizei *length, GLchar *infoLog);
#define GLGetProgramInfoLog GLES2Loadercontext->glGetProgramInfoLog
// GL_APICALL void GL_APIENTRY glGetRenderbufferParameteriv (GLenum target,
// GLenum pname, GLint *params);
#define GLGetRenderbufferParameteriv                                           \
  GLES2Loadercontext->glGetRenderbufferParameteriv
// GL_APICALL void GL_APIENTRY glGetShaderiv (GLuint shader, GLenum pname, GLint
// *params);
#define GLGetShaderiv GLES2Loadercontext->glGetShaderiv
// GL_APICALL void GL_APIENTRY glGetShaderInfoLog (GLuint shader, GLsizei
// bufSize, GLsizei *length, GLchar *infoLog);
#define GLGetShaderInfoLog GLES2Loadercontext->glGetShaderInfoLog
// GL_APICALL void GL_APIENTRY glGetShaderPrecisionFormat (GLenum shadertype,
// GLenum precisiontype, GLint *range, GLint *precision);
#define GLGetShaderPrecisionFormat                                             \
  GLES2Loadercontext->glGetShaderPrecisionFormat
// GL_APICALL void GL_APIENTRY glGetShaderSource (GLuint shader, GLsizei
// bufSize, GLsizei *length, GLchar *source);
#define GLGetShaderSource GLES2Loadercontext->glGetShaderSource
// GL_APICALL const GLubyte *GL_APIENTRY glGetString (GLenum name);
#define GLGetString GLES2Loadercontext->glGetString
// GL_APICALL void GL_APIENTRY glGetTexParameterfv (GLenum target, GLenum pname,
// GLfloat *params);
#define GLGetTexParameterfv GLES2Loadercontext->glGetTexParameterfv
// GL_APICALL void GL_APIENTRY glGetTexParameteriv (GLenum target, GLenum pname,
// GLint *params);
#define GLGetTexParameteriv GLES2Loadercontext->glGetTexParameteriv
// GL_APICALL void GL_APIENTRY glGetUniformfv (GLuint program, GLint location,
// GLfloat *params);
#define GLGetUniformfv GLES2Loadercontext->glGetUniformfv
// GL_APICALL void GL_APIENTRY glGetUniformiv (GLuint program, GLint location,
// GLint *params);
#define GLGetUniformiv GLES2Loadercontext->glGetUniformiv
// GL_APICALL GLint GL_APIENTRY glGetUniformLocation (GLuint program, const
// GLchar *name);
#define GLGetUniformLocation GLES2Loadercontext->glGetUniformLocation
// GL_APICALL void GL_APIENTRY glGetVertexAttribfv (GLuint index, GLenum pname,
// GLfloat *params);
#define GLGetVertexAttribfv GLES2Loadercontext->glGetVertexAttribfv
// GL_APICALL void GL_APIENTRY glGetVertexAttribiv (GLuint index, GLenum pname,
// GLint *params);
#define GLGetVertexAttribiv GLES2Loadercontext->glGetVertexAttribiv
// GL_APICALL void GL_APIENTRY glGetVertexAttribPointerv (GLuint index, GLenum
// pname, void **pointer);
#define GLGetVertexAttribPointerv GLES2Loadercontext->glGetVertexAttribPointerv
// GL_APICALL void GL_APIENTRY glHint (GLenum target, GLenum mode);
#define GLHint GLES2Loadercontext->glHint
// GL_APICALL GLboolean GL_APIENTRY glIsBuffer (GLuint buffer);
#define GLIsBuffer GLES2Loadercontext->glIsBuffer
// GL_APICALL GLboolean GL_APIENTRY glIsEnabled (GLenum cap);
#define GLIsEnabled GLES2Loadercontext->glIsEnabled
// GL_APICALL GLboolean GL_APIENTRY glIsFramebuffer (GLuint framebuffer);
#define GLIsFramebuffer GLES2Loadercontext->glIsFramebuffer
// GL_APICALL GLboolean GL_APIENTRY glIsProgram (GLuint program);
#define GLIsProgram GLES2Loadercontext->glIsProgram
// GL_APICALL GLboolean GL_APIENTRY glIsRenderbuffer (GLuint renderbuffer);
#define GLIsRenderbuffer GLES2Loadercontext->glIsRenderbuffer
// GL_APICALL GLboolean GL_APIENTRY glIsShader (GLuint shader);
#define GLIsShader GLES2Loadercontext->glIsShader
// GL_APICALL GLboolean GL_APIENTRY glIsTexture (GLuint texture);
#define GLIsTexture GLES2Loadercontext->glIsTexture
// GL_APICALL void GL_APIENTRY glLineWidth (GLfloat width);
#define GLLineWidth GLES2Loadercontext->glLineWidth
// GL_APICALL void GL_APIENTRY glLinkProgram (GLuint program);
#define GLLinkProgram GLES2Loadercontext->glLinkProgram
// GL_APICALL void GL_APIENTRY glPixelStorei (GLenum pname, GLint param);
#define GLPixelStorei GLES2Loadercontext->glPixelStorei
// GL_APICALL void GL_APIENTRY glPolygonOffset (GLfloat factor, GLfloat units);
#define GLPolygonOffset GLES2Loadercontext->glPolygonOffset
// GL_APICALL void GL_APIENTRY glReadPixels (GLint x, GLint y, GLsizei width,
// GLsizei height, GLenum format, GLenum type, void *pixels);
#define GLReadPixels GLES2Loadercontext->glReadPixels
// GL_APICALL void GL_APIENTRY glReleaseShaderCompiler (void);
#define GLReleaseShaderCompiler GLES2Loadercontext->glReleaseShaderCompiler
// GL_APICALL void GL_APIENTRY glRenderbufferStorage (GLenum target, GLenum
// internalformat, GLsizei width, GLsizei height);
#define GLRenderbufferStorage GLES2Loadercontext->glRenderbufferStorage
// GL_APICALL void GL_APIENTRY glSampleCoverage (GLfloat value, GLboolean
// invert);
#define GLSampleCoverage GLES2Loadercontext->glSampleCoverage
// GL_APICALL void GL_APIENTRY glScissor (GLint x, GLint y, GLsizei width,
// GLsizei height);
#define GLScissor GLES2Loadercontext->glScissor
// GL_APICALL void GL_APIENTRY glShaderBinary (GLsizei count, const GLuint
// *shaders, GLenum binaryFormat, const void *binary, GLsizei length);
#define GLShaderBinary GLES2Loadercontext->glShaderBinary
// GL_APICALL void GL_APIENTRY glShaderSource (GLuint shader, GLsizei count,
// const GLchar *const*string, const GLint *length);
#define GLShaderSource GLES2Loadercontext->glShaderSource
// GL_APICALL void GL_APIENTRY glStencilFunc (GLenum func, GLint ref, GLuint
// mask);
#define GLStencilFunc GLES2Loadercontext->glStencilFunc
// GL_APICALL void GL_APIENTRY glStencilFuncSeparate (GLenum face, GLenum func,
// GLint ref, GLuint mask);
#define GLStencilFuncSeparate GLES2Loadercontext->glStencilFuncSeparate
// GL_APICALL void GL_APIENTRY glStencilMask (GLuint mask);
#define GLStencilMask GLES2Loadercontext->glStencilMask
// GL_APICALL void GL_APIENTRY glStencilMaskSeparate (GLenum face, GLuint mask);
#define GLStencilMaskSeparate GLES2Loadercontext->glStencilMaskSeparate
// GL_APICALL void GL_APIENTRY glStencilOp (GLenum fail, GLenum zfail, GLenum
// zpass);
#define GLStencilOp GLES2Loadercontext->glStencilOp
// GL_APICALL void GL_APIENTRY glStencilOpSeparate (GLenum face, GLenum sfail,
// GLenum dpfail, GLenum dppass);
#define GLStencilOpSeparate GLES2Loadercontext->glStencilOpSeparate
// GL_APICALL void GL_APIENTRY glTexImage2D (GLenum target, GLint level, GLint
// internalformat, GLsizei width, GLsizei height, GLint border, GLenum format,
// GLenum type, const void *pixels);
#define GLTexImage2D GLES2Loadercontext->glTexImage2D
// GL_APICALL void GL_APIENTRY glTexParameterf (GLenum target, GLenum pname,
// GLfloat param);
#define GLTexParameterf GLES2Loadercontext->glTexParameterf
// GL_APICALL void GL_APIENTRY glTexParameterfv (GLenum target, GLenum pname,
// const GLfloat *params);
#define GLTexParameterfv GLES2Loadercontext->glTexParameterfv
// GL_APICALL void GL_APIENTRY glTexParameteri (GLenum target, GLenum pname,
// GLint param);
#define GLTexParameteri GLES2Loadercontext->glTexParameteri
// GL_APICALL void GL_APIENTRY glTexParameteriv (GLenum target, GLenum pname,
// const GLint *params);
#define GLTexParameteriv GLES2Loadercontext->glTexParameteriv
// GL_APICALL void GL_APIENTRY glTexSubImage2D (GLenum target, GLint level,
// GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format,
// GLenum type, const void *pixels);
#define GLTexSubImage2D GLES2Loadercontext->glTexSubImage2D
// GL_APICALL void GL_APIENTRY glUniform1f (GLint location, GLfloat v0);
#define GLUniform1f GLES2Loadercontext->glUniform1f
// GL_APICALL void GL_APIENTRY glUniform1fv (GLint location, GLsizei count,
// const GLfloat *value);
#define GLUniform1fv GLES2Loadercontext->glUniform1fv
// GL_APICALL void GL_APIENTRY glUniform1i (GLint location, GLint v0);
#define GLUniform1i GLES2Loadercontext->glUniform1i
// GL_APICALL void GL_APIENTRY glUniform1iv (GLint location, GLsizei count,
// const GLint *value);
#define GLUniform1iv GLES2Loadercontext->glUniform1iv
// GL_APICALL void GL_APIENTRY glUniform2f (GLint location, GLfloat v0, GLfloat
// v1);
#define GLUniform2f GLES2Loadercontext->glUniform2f
// GL_APICALL void GL_APIENTRY glUniform2fv (GLint location, GLsizei count,
// const GLfloat *value);
#define GLUniform2fv GLES2Loadercontext->glUniform2fv
// GL_APICALL void GL_APIENTRY glUniform2i (GLint location, GLint v0, GLint v1);
#define GLUniform2i GLES2Loadercontext->glUniform2i
// GL_APICALL void GL_APIENTRY glUniform2iv (GLint location, GLsizei count,
// const GLint *value);
#define GLUniform2iv GLES2Loadercontext->glUniform2iv
// GL_APICALL void GL_APIENTRY glUniform3f (GLint location, GLfloat v0, GLfloat
// v1, GLfloat v2);
#define GLUniform3f GLES2Loadercontext->glUniform3f
// GL_APICALL void GL_APIENTRY glUniform3fv (GLint location, GLsizei count,
// const GLfloat *value);
#define GLUniform3fv GLES2Loadercontext->glUniform3fv
// GL_APICALL void GL_APIENTRY glUniform3i (GLint location, GLint v0, GLint v1,
// GLint v2);
#define GLUniform3i GLES2Loadercontext->glUniform3i
// GL_APICALL void GL_APIENTRY glUniform3iv (GLint location, GLsizei count,
// const GLint *value);
#define GLUniform3iv GLES2Loadercontext->glUniform3iv
// GL_APICALL void GL_APIENTRY glUniform4f (GLint location, GLfloat v0, GLfloat
// v1, GLfloat v2, GLfloat v3);
#define GLUniform4f GLES2Loadercontext->glUniform4f
// GL_APICALL void GL_APIENTRY glUniform4fv (GLint location, GLsizei count,
// const GLfloat *value);
#define GLUniform4fv GLES2Loadercontext->glUniform4fv
// GL_APICALL void GL_APIENTRY glUniform4i (GLint location, GLint v0, GLint v1,
// GLint v2, GLint v3);
#define GLUniform4i GLES2Loadercontext->glUniform4i
// GL_APICALL void GL_APIENTRY glUniform4iv (GLint location, GLsizei count,
// const GLint *value);
#define GLUniform4iv GLES2Loadercontext->glUniform4iv
// GL_APICALL void GL_APIENTRY glUniformMatrix2fv (GLint location, GLsizei
// count, GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix2fv GLES2Loadercontext->glUniformMatrix2fv
// GL_APICALL void GL_APIENTRY glUniformMatrix3fv (GLint location, GLsizei
// count, GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix3fv GLES2Loadercontext->glUniformMatrix3fv
// GL_APICALL void GL_APIENTRY glUniformMatrix4fv (GLint location, GLsizei
// count, GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix4fv GLES2Loadercontext->glUniformMatrix4fv
// GL_APICALL void GL_APIENTRY glUseProgram (GLuint program);
#define GLUseProgram GLES2Loadercontext->glUseProgram
// GL_APICALL void GL_APIENTRY glValidateProgram (GLuint program);
#define GLValidateProgram GLES2Loadercontext->glValidateProgram
// GL_APICALL void GL_APIENTRY glVertexAttrib1f (GLuint index, GLfloat x);
#define GLVertexAttrib1f GLES2Loadercontext->glVertexAttrib1f
// GL_APICALL void GL_APIENTRY glVertexAttrib1fv (GLuint index, const GLfloat
// *v);
#define GLVertexAttrib1fv GLES2Loadercontext->glVertexAttrib1fv
// GL_APICALL void GL_APIENTRY glVertexAttrib2f (GLuint index, GLfloat x,
// GLfloat y);
#define GLVertexAttrib2f GLES2Loadercontext->glVertexAttrib2f
// GL_APICALL void GL_APIENTRY glVertexAttrib2fv (GLuint index, const GLfloat
// *v);
#define GLVertexAttrib2fv GLES2Loadercontext->glVertexAttrib2fv
// GL_APICALL void GL_APIENTRY glVertexAttrib3f (GLuint index, GLfloat x,
// GLfloat y, GLfloat z);
#define GLVertexAttrib3f GLES2Loadercontext->glVertexAttrib3f
// GL_APICALL void GL_APIENTRY glVertexAttrib3fv (GLuint index, const GLfloat
// *v);
#define GLVertexAttrib3fv GLES2Loadercontext->glVertexAttrib3fv
// GL_APICALL void GL_APIENTRY glVertexAttrib4f (GLuint index, GLfloat x,
// GLfloat y, GLfloat z, GLfloat w);
#define GLVertexAttrib4f GLES2Loadercontext->glVertexAttrib4f
// GL_APICALL void GL_APIENTRY glVertexAttrib4fv (GLuint index, const GLfloat
// *v);
#define GLVertexAttrib4fv GLES2Loadercontext->glVertexAttrib4fv
// GL_APICALL void GL_APIENTRY glVertexAttribPointer (GLuint index, GLint size,
// GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
#define GLVertexAttribPointer GLES2Loadercontext->glVertexAttribPointer
// GL_APICALL void GL_APIENTRY glViewport (GLint x, GLint y, GLsizei width,
// GLsizei height);
#define GLViewport GLES2Loadercontext->glViewport
// GL_APICALL void GL_APIENTRY glReadBuffer (GLenum src);
#define GLReadBuffer GLES2Loadercontext->glReadBuffer
// GL_APICALL void GL_APIENTRY glDrawRangeElements (GLenum mode, GLuint start,
// GLuint end, GLsizei count, GLenum type, const void *indices);
#define GLDrawRangeElements GLES2Loadercontext->glDrawRangeElements
// GL_APICALL void GL_APIENTRY glTexImage3D (GLenum target, GLint level, GLint
// internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border,
// GLenum format, GLenum type, const void *pixels);
#define GLTexImage3D GLES2Loadercontext->glTexImage3D
// GL_APICALL void GL_APIENTRY glTexSubImage3D (GLenum target, GLint level,
// GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height,
// GLsizei depth, GLenum format, GLenum type, const void *pixels);
#define GLTexSubImage3D GLES2Loadercontext->glTexSubImage3D
// GL_APICALL void GL_APIENTRY glCopyTexSubImage3D (GLenum target, GLint level,
// GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width,
// GLsizei height);
#define GLCopyTexSubImage3D GLES2Loadercontext->glCopyTexSubImage3D
// GL_APICALL void GL_APIENTRY glCompressedTexImage3D (GLenum target, GLint
// level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth,
// GLint border, GLsizei imageSize, const void *data);
#define GLCompressedTexImage3D GLES2Loadercontext->glCompressedTexImage3D
// GL_APICALL void GL_APIENTRY glCompressedTexSubImage3D (GLenum target, GLint
// level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei
// height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
#define GLCompressedTexSubImage3D GLES2Loadercontext->glCompressedTexSubImage3D
// GL_APICALL void GL_APIENTRY glGenQueries (GLsizei n, GLuint *ids);
#define GLGenQueries GLES2Loadercontext->glGenQueries
// GL_APICALL void GL_APIENTRY glDeleteQueries (GLsizei n, const GLuint *ids);
#define GLDeleteQueries GLES2Loadercontext->glDeleteQueries
// GL_APICALL GLboolean GL_APIENTRY glIsQuery (GLuint id);
#define GLIsQuery GLES2Loadercontext->glIsQuery
// GL_APICALL void GL_APIENTRY glBeginQuery (GLenum target, GLuint id);
#define GLBeginQuery GLES2Loadercontext->glBeginQuery
// GL_APICALL void GL_APIENTRY glEndQuery (GLenum target);
#define GLEndQuery GLES2Loadercontext->glEndQuery
// GL_APICALL void GL_APIENTRY glGetQueryiv (GLenum target, GLenum pname, GLint
// *params);
#define GLGetQueryiv GLES2Loadercontext->glGetQueryiv
// GL_APICALL void GL_APIENTRY glGetQueryObjectuiv (GLuint id, GLenum pname,
// GLuint *params);
#define GLGetQueryObjectuiv GLES2Loadercontext->glGetQueryObjectuiv
// GL_APICALL GLboolean GL_APIENTRY glUnmapBuffer (GLenum target);
#define GLUnmapBuffer GLES2Loadercontext->glUnmapBuffer
// GL_APICALL void GL_APIENTRY glGetBufferPointerv (GLenum target, GLenum pname,
// void **params);
#define GLGetBufferPointerv GLES2Loadercontext->glGetBufferPointerv
// GL_APICALL void GL_APIENTRY glDrawBuffers (GLsizei n, const GLenum *bufs);
#define GLDrawBuffers GLES2Loadercontext->glDrawBuffers
// GL_APICALL void GL_APIENTRY glUniformMatrix2x3fv (GLint location, GLsizei
// count, GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix2x3fv GLES2Loadercontext->glUniformMatrix2x3fv
// GL_APICALL void GL_APIENTRY glUniformMatrix3x2fv (GLint location, GLsizei
// count, GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix3x2fv GLES2Loadercontext->glUniformMatrix3x2fv
// GL_APICALL void GL_APIENTRY glUniformMatrix2x4fv (GLint location, GLsizei
// count, GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix2x4fv GLES2Loadercontext->glUniformMatrix2x4fv
// GL_APICALL void GL_APIENTRY glUniformMatrix4x2fv (GLint location, GLsizei
// count, GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix4x2fv GLES2Loadercontext->glUniformMatrix4x2fv
// GL_APICALL void GL_APIENTRY glUniformMatrix3x4fv (GLint location, GLsizei
// count, GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix3x4fv GLES2Loadercontext->glUniformMatrix3x4fv
// GL_APICALL void GL_APIENTRY glUniformMatrix4x3fv (GLint location, GLsizei
// count, GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix4x3fv GLES2Loadercontext->glUniformMatrix4x3fv
// GL_APICALL void GL_APIENTRY glBlitFramebuffer (GLint srcX0, GLint srcY0,
// GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1,
// GLbitfield mask, GLenum filter);
#define GLBlitFramebuffer GLES2Loadercontext->glBlitFramebuffer
// GL_APICALL void GL_APIENTRY glRenderbufferStorageMultisample (GLenum target,
// GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
#define GLRenderbufferStorageMultisample                                       \
  GLES2Loadercontext->glRenderbufferStorageMultisample
// GL_APICALL void GL_APIENTRY glFramebufferTextureLayer (GLenum target, GLenum
// attachment, GLuint texture, GLint level, GLint layer);
#define GLFramebufferTextureLayer GLES2Loadercontext->glFramebufferTextureLayer
// GL_APICALL void *GL_APIENTRY glMapBufferRange (GLenum target, GLintptr
// offset, GLsizeiptr length, GLbitfield access);
#define GLMapBufferRange GLES2Loadercontext->glMapBufferRange
// GL_APICALL void GL_APIENTRY glFlushMappedBufferRange (GLenum target, GLintptr
// offset, GLsizeiptr length);
#define GLFlushMappedBufferRange GLES2Loadercontext->glFlushMappedBufferRange
// GL_APICALL void GL_APIENTRY glBindVertexArray (GLuint array);
#define GLBindVertexArray GLES2Loadercontext->glBindVertexArray
// GL_APICALL void GL_APIENTRY glDeleteVertexArrays (GLsizei n, const GLuint
// *arrays);
#define GLDeleteVertexArrays GLES2Loadercontext->glDeleteVertexArrays
// GL_APICALL void GL_APIENTRY glGenVertexArrays (GLsizei n, GLuint *arrays);
#define GLGenVertexArrays GLES2Loadercontext->glGenVertexArrays
// GL_APICALL GLboolean GL_APIENTRY glIsVertexArray (GLuint array);
#define GLIsVertexArray GLES2Loadercontext->glIsVertexArray
// GL_APICALL void GL_APIENTRY glGetIntegeri_v (GLenum target, GLuint index,
// GLint *data);
#define GLGetIntegeri_v GLES2Loadercontext->glGetIntegeri_v
// GL_APICALL void GL_APIENTRY glBeginTransformFeedback (GLenum primitiveMode);
#define GLBeginTransformFeedback GLES2Loadercontext->glBeginTransformFeedback
// GL_APICALL void GL_APIENTRY glEndTransformFeedback (void);
#define GLEndTransformFeedback GLES2Loadercontext->glEndTransformFeedback
// GL_APICALL void GL_APIENTRY glBindBufferRange (GLenum target, GLuint index,
// GLuint buffer, GLintptr offset, GLsizeiptr size);
#define GLBindBufferRange GLES2Loadercontext->glBindBufferRange
// GL_APICALL void GL_APIENTRY glBindBufferBase (GLenum target, GLuint index,
// GLuint buffer);
#define GLBindBufferBase GLES2Loadercontext->glBindBufferBase
// GL_APICALL void GL_APIENTRY glTransformFeedbackVaryings (GLuint program,
// GLsizei count, const GLchar *const*varyings, GLenum bufferMode);
#define GLTransformFeedbackVaryings                                            \
  GLES2Loadercontext->glTransformFeedbackVaryings
// GL_APICALL void GL_APIENTRY glGetTransformFeedbackVarying (GLuint program,
// GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type,
// GLchar *name);
#define GLGetTransformFeedbackVarying                                          \
  GLES2Loadercontext->glGetTransformFeedbackVarying
// GL_APICALL void GL_APIENTRY glVertexAttribIPointer (GLuint index, GLint size,
// GLenum type, GLsizei stride, const void *pointer);
#define GLVertexAttribIPointer GLES2Loadercontext->glVertexAttribIPointer
// GL_APICALL void GL_APIENTRY glGetVertexAttribIiv (GLuint index, GLenum pname,
// GLint *params);
#define GLGetVertexAttribIiv GLES2Loadercontext->glGetVertexAttribIiv
// GL_APICALL void GL_APIENTRY glGetVertexAttribIuiv (GLuint index, GLenum
// pname, GLuint *params);
#define GLGetVertexAttribIuiv GLES2Loadercontext->glGetVertexAttribIuiv
// GL_APICALL void GL_APIENTRY glVertexAttribI4i (GLuint index, GLint x, GLint
// y, GLint z, GLint w);
#define GLVertexAttribI4i GLES2Loadercontext->glVertexAttribI4i
// GL_APICALL void GL_APIENTRY glVertexAttribI4ui (GLuint index, GLuint x,
// GLuint y, GLuint z, GLuint w);
#define GLVertexAttribI4ui GLES2Loadercontext->glVertexAttribI4ui
// GL_APICALL void GL_APIENTRY glVertexAttribI4iv (GLuint index, const GLint
// *v);
#define GLVertexAttribI4iv GLES2Loadercontext->glVertexAttribI4iv
// GL_APICALL void GL_APIENTRY glVertexAttribI4uiv (GLuint index, const GLuint
// *v);
#define GLVertexAttribI4uiv GLES2Loadercontext->glVertexAttribI4uiv
// GL_APICALL void GL_APIENTRY glGetUniformuiv (GLuint program, GLint location,
// GLuint *params);
#define GLGetUniformuiv GLES2Loadercontext->glGetUniformuiv
// GL_APICALL GLint GL_APIENTRY glGetFragDataLocation (GLuint program, const
// GLchar *name);
#define GLGetFragDataLocation GLES2Loadercontext->glGetFragDataLocation
// GL_APICALL void GL_APIENTRY glUniform1ui (GLint location, GLuint v0);
#define GLUniform1ui GLES2Loadercontext->glUniform1ui
// GL_APICALL void GL_APIENTRY glUniform2ui (GLint location, GLuint v0, GLuint
// v1);
#define GLUniform2ui GLES2Loadercontext->glUniform2ui
// GL_APICALL void GL_APIENTRY glUniform3ui (GLint location, GLuint v0, GLuint
// v1, GLuint v2);
#define GLUniform3ui GLES2Loadercontext->glUniform3ui
// GL_APICALL void GL_APIENTRY glUniform4ui (GLint location, GLuint v0, GLuint
// v1, GLuint v2, GLuint v3);
#define GLUniform4ui GLES2Loadercontext->glUniform4ui
// GL_APICALL void GL_APIENTRY glUniform1uiv (GLint location, GLsizei count,
// const GLuint *value);
#define GLUniform1uiv GLES2Loadercontext->glUniform1uiv
// GL_APICALL void GL_APIENTRY glUniform2uiv (GLint location, GLsizei count,
// const GLuint *value);
#define GLUniform2uiv GLES2Loadercontext->glUniform2uiv
// GL_APICALL void GL_APIENTRY glUniform3uiv (GLint location, GLsizei count,
// const GLuint *value);
#define GLUniform3uiv GLES2Loadercontext->glUniform3uiv
// GL_APICALL void GL_APIENTRY glUniform4uiv (GLint location, GLsizei count,
// const GLuint *value);
#define GLUniform4uiv GLES2Loadercontext->glUniform4uiv
// GL_APICALL void GL_APIENTRY glClearBufferiv (GLenum buffer, GLint drawbuffer,
// const GLint *value);
#define GLClearBufferiv GLES2Loadercontext->glClearBufferiv
// GL_APICALL void GL_APIENTRY glClearBufferuiv (GLenum buffer, GLint
// drawbuffer, const GLuint *value);
#define GLClearBufferuiv GLES2Loadercontext->glClearBufferuiv
// GL_APICALL void GL_APIENTRY glClearBufferfv (GLenum buffer, GLint drawbuffer,
// const GLfloat *value);
#define GLClearBufferfv GLES2Loadercontext->glClearBufferfv
// GL_APICALL void GL_APIENTRY glClearBufferfi (GLenum buffer, GLint drawbuffer,
// GLfloat depth, GLint stencil);
#define GLClearBufferfi GLES2Loadercontext->glClearBufferfi
// GL_APICALL const GLubyte *GL_APIENTRY glGetStringi (GLenum name, GLuint
// index);
#define GLGetStringi GLES2Loadercontext->glGetStringi
// GL_APICALL void GL_APIENTRY glCopyBufferSubData (GLenum readTarget, GLenum
// writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
#define GLCopyBufferSubData GLES2Loadercontext->glCopyBufferSubData
// GL_APICALL void GL_APIENTRY glGetUniformIndices (GLuint program, GLsizei
// uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices);
#define GLGetUniformIndices GLES2Loadercontext->glGetUniformIndices
// GL_APICALL void GL_APIENTRY glGetActiveUniformsiv (GLuint program, GLsizei
// uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
#define GLGetActiveUniformsiv GLES2Loadercontext->glGetActiveUniformsiv
// GL_APICALL GLuint GL_APIENTRY glGetUniformBlockIndex (GLuint program, const
// GLchar *uniformBlockName);
#define GLGetUniformBlockIndex GLES2Loadercontext->glGetUniformBlockIndex
// GL_APICALL void GL_APIENTRY glGetActiveUniformBlockiv (GLuint program, GLuint
// uniformBlockIndex, GLenum pname, GLint *params);
#define GLGetActiveUniformBlockiv GLES2Loadercontext->glGetActiveUniformBlockiv
// GL_APICALL void GL_APIENTRY glGetActiveUniformBlockName (GLuint program,
// GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar
// *uniformBlockName);
#define GLGetActiveUniformBlockName                                            \
  GLES2Loadercontext->glGetActiveUniformBlockName
// GL_APICALL void GL_APIENTRY glUniformBlockBinding (GLuint program, GLuint
// uniformBlockIndex, GLuint uniformBlockBinding);
#define GLUniformBlockBinding GLES2Loadercontext->glUniformBlockBinding
// GL_APICALL void GL_APIENTRY glDrawArraysInstanced (GLenum mode, GLint first,
// GLsizei count, GLsizei instancecount);
#define GLDrawArraysInstanced GLES2Loadercontext->glDrawArraysInstanced
// GL_APICALL void GL_APIENTRY glDrawElementsInstanced (GLenum mode, GLsizei
// count, GLenum type, const void *indices, GLsizei instancecount);
#define GLDrawElementsInstanced GLES2Loadercontext->glDrawElementsInstanced
// GL_APICALL GLsync GL_APIENTRY glFenceSync (GLenum condition, GLbitfield
// flags);
#define GLFenceSync GLES2Loadercontext->glFenceSync
// GL_APICALL GLboolean GL_APIENTRY glIsSync (GLsync sync);
#define GLIsSync GLES2Loadercontext->glIsSync
// GL_APICALL void GL_APIENTRY glDeleteSync (GLsync sync);
#define GLDeleteSync GLES2Loadercontext->glDeleteSync
// GL_APICALL GLenum GL_APIENTRY glClientWaitSync (GLsync sync, GLbitfield
// flags, GLuint64 timeout);
#define GLClientWaitSync GLES2Loadercontext->glClientWaitSync
// GL_APICALL void GL_APIENTRY glWaitSync (GLsync sync, GLbitfield flags,
// GLuint64 timeout);
#define GLWaitSync GLES2Loadercontext->glWaitSync
// GL_APICALL void GL_APIENTRY glGetInteger64v (GLenum pname, GLint64 *data);
#define GLGetInteger64v GLES2Loadercontext->glGetInteger64v
// GL_APICALL void GL_APIENTRY glGetSynciv (GLsync sync, GLenum pname, GLsizei
// count, GLsizei *length, GLint *values);
#define GLGetSynciv GLES2Loadercontext->glGetSynciv
// GL_APICALL void GL_APIENTRY glGetInteger64i_v (GLenum target, GLuint index,
// GLint64 *data);
#define GLGetInteger64i_v GLES2Loadercontext->glGetInteger64i_v
// GL_APICALL void GL_APIENTRY glGetBufferParameteri64v (GLenum target, GLenum
// pname, GLint64 *params);
#define GLGetBufferParameteri64v GLES2Loadercontext->glGetBufferParameteri64v
// GL_APICALL void GL_APIENTRY glGenSamplers (GLsizei count, GLuint *samplers);
#define GLGenSamplers GLES2Loadercontext->glGenSamplers
// GL_APICALL void GL_APIENTRY glDeleteSamplers (GLsizei count, const GLuint
// *samplers);
#define GLDeleteSamplers GLES2Loadercontext->glDeleteSamplers
// GL_APICALL GLboolean GL_APIENTRY glIsSampler (GLuint sampler);
#define GLIsSampler GLES2Loadercontext->glIsSampler
// GL_APICALL void GL_APIENTRY glBindSampler (GLuint unit, GLuint sampler);
#define GLBindSampler GLES2Loadercontext->glBindSampler
// GL_APICALL void GL_APIENTRY glSamplerParameteri (GLuint sampler, GLenum
// pname, GLint param);
#define GLSamplerParameteri GLES2Loadercontext->glSamplerParameteri
// GL_APICALL void GL_APIENTRY glSamplerParameteriv (GLuint sampler, GLenum
// pname, const GLint *param);
#define GLSamplerParameteriv GLES2Loadercontext->glSamplerParameteriv
// GL_APICALL void GL_APIENTRY glSamplerParameterf (GLuint sampler, GLenum
// pname, GLfloat param);
#define GLSamplerParameterf GLES2Loadercontext->glSamplerParameterf
// GL_APICALL void GL_APIENTRY glSamplerParameterfv (GLuint sampler, GLenum
// pname, const GLfloat *param);
#define GLSamplerParameterfv GLES2Loadercontext->glSamplerParameterfv
// GL_APICALL void GL_APIENTRY glGetSamplerParameteriv (GLuint sampler, GLenum
// pname, GLint *params);
#define GLGetSamplerParameteriv GLES2Loadercontext->glGetSamplerParameteriv
// GL_APICALL void GL_APIENTRY glGetSamplerParameterfv (GLuint sampler, GLenum
// pname, GLfloat *params);
#define GLGetSamplerParameterfv GLES2Loadercontext->glGetSamplerParameterfv
// GL_APICALL void GL_APIENTRY glVertexAttribDivisor (GLuint index, GLuint
// divisor);
#define GLVertexAttribDivisor GLES2Loadercontext->glVertexAttribDivisor
// GL_APICALL void GL_APIENTRY glBindTransformFeedback (GLenum target, GLuint
// id);
#define GLBindTransformFeedback GLES2Loadercontext->glBindTransformFeedback
// GL_APICALL void GL_APIENTRY glDeleteTransformFeedbacks (GLsizei n, const
// GLuint *ids);
#define GLDeleteTransformFeedbacks                                             \
  GLES2Loadercontext->glDeleteTransformFeedbacks
// GL_APICALL void GL_APIENTRY glGenTransformFeedbacks (GLsizei n, GLuint *ids);
#define GLGenTransformFeedbacks GLES2Loadercontext->glGenTransformFeedbacks
// GL_APICALL GLboolean GL_APIENTRY glIsTransformFeedback (GLuint id);
#define GLIsTransformFeedback GLES2Loadercontext->glIsTransformFeedback
// GL_APICALL void GL_APIENTRY glPauseTransformFeedback (void);
#define GLPauseTransformFeedback GLES2Loadercontext->glPauseTransformFeedback
// GL_APICALL void GL_APIENTRY glResumeTransformFeedback (void);
#define GLResumeTransformFeedback GLES2Loadercontext->glResumeTransformFeedback
// GL_APICALL void GL_APIENTRY glGetProgramBinary (GLuint program, GLsizei
// bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
#define GLGetProgramBinary GLES2Loadercontext->glGetProgramBinary
// GL_APICALL void GL_APIENTRY glProgramBinary (GLuint program, GLenum
// binaryFormat, const void *binary, GLsizei length);
#define GLProgramBinary GLES2Loadercontext->glProgramBinary
// GL_APICALL void GL_APIENTRY glProgramParameteri (GLuint program, GLenum
// pname, GLint value);
#define GLProgramParameteri GLES2Loadercontext->glProgramParameteri
// GL_APICALL void GL_APIENTRY glInvalidateFramebuffer (GLenum target, GLsizei
// numAttachments, const GLenum *attachments);
#define GLInvalidateFramebuffer GLES2Loadercontext->glInvalidateFramebuffer
// GL_APICALL void GL_APIENTRY glInvalidateSubFramebuffer (GLenum target,
// GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei
// width, GLsizei height);
#define GLInvalidateSubFramebuffer                                             \
  GLES2Loadercontext->glInvalidateSubFramebuffer
// GL_APICALL void GL_APIENTRY glTexStorage2D (GLenum target, GLsizei levels,
// GLenum internalformat, GLsizei width, GLsizei height);
#define GLTexStorage2D GLES2Loadercontext->glTexStorage2D
// GL_APICALL void GL_APIENTRY glTexStorage3D (GLenum target, GLsizei levels,
// GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
#define GLTexStorage3D GLES2Loadercontext->glTexStorage3D
// GL_APICALL void GL_APIENTRY glGetInternalformativ (GLenum target, GLenum
// internalformat, GLenum pname, GLsizei count, GLint *params);
#define GLGetInternalformativ GLES2Loadercontext->glGetInternalformativ
// GL_APICALL void GL_APIENTRY glDispatchCompute (GLuint num_groups_x, GLuint
// num_groups_y, GLuint num_groups_z);
#define GLDispatchCompute GLES2Loadercontext->glDispatchCompute
// GL_APICALL void GL_APIENTRY glDispatchComputeIndirect (GLintptr indirect);
#define GLDispatchComputeIndirect GLES2Loadercontext->glDispatchComputeIndirect
// GL_APICALL void GL_APIENTRY glDrawArraysIndirect (GLenum mode, const void
// *indirect);
#define GLDrawArraysIndirect GLES2Loadercontext->glDrawArraysIndirect
// GL_APICALL void GL_APIENTRY glDrawElementsIndirect (GLenum mode, GLenum type,
// const void *indirect);
#define GLDrawElementsIndirect GLES2Loadercontext->glDrawElementsIndirect
// GL_APICALL void GL_APIENTRY glFramebufferParameteri (GLenum target, GLenum
// pname, GLint param);
#define GLFramebufferParameteri GLES2Loadercontext->glFramebufferParameteri
// GL_APICALL void GL_APIENTRY glGetFramebufferParameteriv (GLenum target,
// GLenum pname, GLint *params);
#define GLGetFramebufferParameteriv                                            \
  GLES2Loadercontext->glGetFramebufferParameteriv
// GL_APICALL void GL_APIENTRY glGetProgramInterfaceiv (GLuint program, GLenum
// programInterface, GLenum pname, GLint *params);
#define GLGetProgramInterfaceiv GLES2Loadercontext->glGetProgramInterfaceiv
// GL_APICALL GLuint GL_APIENTRY glGetProgramResourceIndex (GLuint program,
// GLenum programInterface, const GLchar *name);
#define GLGetProgramResourceIndex GLES2Loadercontext->glGetProgramResourceIndex
// GL_APICALL void GL_APIENTRY glGetProgramResourceName (GLuint program, GLenum
// programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar
// *name);
#define GLGetProgramResourceName GLES2Loadercontext->glGetProgramResourceName
// GL_APICALL void GL_APIENTRY glGetProgramResourceiv (GLuint program, GLenum
// programInterface, GLuint index, GLsizei propCount, const GLenum *props,
// GLsizei count, GLsizei *length, GLint *params);
#define GLGetProgramResourceiv GLES2Loadercontext->glGetProgramResourceiv
// GL_APICALL GLint GL_APIENTRY glGetProgramResourceLocation (GLuint program,
// GLenum programInterface, const GLchar *name);
#define GLGetProgramResourceLocation                                           \
  GLES2Loadercontext->glGetProgramResourceLocation
// GL_APICALL void GL_APIENTRY glUseProgramStages (GLuint pipeline, GLbitfield
// stages, GLuint program);
#define GLUseProgramStages GLES2Loadercontext->glUseProgramStages
// GL_APICALL void GL_APIENTRY glActiveShaderProgram (GLuint pipeline, GLuint
// program);
#define GLActiveShaderProgram GLES2Loadercontext->glActiveShaderProgram
// GL_APICALL GLuint GL_APIENTRY glCreateShaderProgramv (GLenum type, GLsizei
// count, const GLchar *const*strings);
#define GLCreateShaderProgramv GLES2Loadercontext->glCreateShaderProgramv
// GL_APICALL void GL_APIENTRY glBindProgramPipeline (GLuint pipeline);
#define GLBindProgramPipeline GLES2Loadercontext->glBindProgramPipeline
// GL_APICALL void GL_APIENTRY glDeleteProgramPipelines (GLsizei n, const GLuint
// *pipelines);
#define GLDeleteProgramPipelines GLES2Loadercontext->glDeleteProgramPipelines
// GL_APICALL void GL_APIENTRY glGenProgramPipelines (GLsizei n, GLuint
// *pipelines);
#define GLGenProgramPipelines GLES2Loadercontext->glGenProgramPipelines
// GL_APICALL GLboolean GL_APIENTRY glIsProgramPipeline (GLuint pipeline);
#define GLIsProgramPipeline GLES2Loadercontext->glIsProgramPipeline
// GL_APICALL void GL_APIENTRY glGetProgramPipelineiv (GLuint pipeline, GLenum
// pname, GLint *params);
#define GLGetProgramPipelineiv GLES2Loadercontext->glGetProgramPipelineiv
// GL_APICALL void GL_APIENTRY glProgramUniform1i (GLuint program, GLint
// location, GLint v0);
#define GLProgramUniform1i GLES2Loadercontext->glProgramUniform1i
// GL_APICALL void GL_APIENTRY glProgramUniform2i (GLuint program, GLint
// location, GLint v0, GLint v1);
#define GLProgramUniform2i GLES2Loadercontext->glProgramUniform2i
// GL_APICALL void GL_APIENTRY glProgramUniform3i (GLuint program, GLint
// location, GLint v0, GLint v1, GLint v2);
#define GLProgramUniform3i GLES2Loadercontext->glProgramUniform3i
// GL_APICALL void GL_APIENTRY glProgramUniform4i (GLuint program, GLint
// location, GLint v0, GLint v1, GLint v2, GLint v3);
#define GLProgramUniform4i GLES2Loadercontext->glProgramUniform4i
// GL_APICALL void GL_APIENTRY glProgramUniform1ui (GLuint program, GLint
// location, GLuint v0);
#define GLProgramUniform1ui GLES2Loadercontext->glProgramUniform1ui
// GL_APICALL void GL_APIENTRY glProgramUniform2ui (GLuint program, GLint
// location, GLuint v0, GLuint v1);
#define GLProgramUniform2ui GLES2Loadercontext->glProgramUniform2ui
// GL_APICALL void GL_APIENTRY glProgramUniform3ui (GLuint program, GLint
// location, GLuint v0, GLuint v1, GLuint v2);
#define GLProgramUniform3ui GLES2Loadercontext->glProgramUniform3ui
// GL_APICALL void GL_APIENTRY glProgramUniform4ui (GLuint program, GLint
// location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
#define GLProgramUniform4ui GLES2Loadercontext->glProgramUniform4ui
// GL_APICALL void GL_APIENTRY glProgramUniform1f (GLuint program, GLint
// location, GLfloat v0);
#define GLProgramUniform1f GLES2Loadercontext->glProgramUniform1f
// GL_APICALL void GL_APIENTRY glProgramUniform2f (GLuint program, GLint
// location, GLfloat v0, GLfloat v1);
#define GLProgramUniform2f GLES2Loadercontext->glProgramUniform2f
// GL_APICALL void GL_APIENTRY glProgramUniform3f (GLuint program, GLint
// location, GLfloat v0, GLfloat v1, GLfloat v2);
#define GLProgramUniform3f GLES2Loadercontext->glProgramUniform3f
// GL_APICALL void GL_APIENTRY glProgramUniform4f (GLuint program, GLint
// location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
#define GLProgramUniform4f GLES2Loadercontext->glProgramUniform4f
// GL_APICALL void GL_APIENTRY glProgramUniform1iv (GLuint program, GLint
// location, GLsizei count, const GLint *value);
#define GLProgramUniform1iv GLES2Loadercontext->glProgramUniform1iv
// GL_APICALL void GL_APIENTRY glProgramUniform2iv (GLuint program, GLint
// location, GLsizei count, const GLint *value);
#define GLProgramUniform2iv GLES2Loadercontext->glProgramUniform2iv
// GL_APICALL void GL_APIENTRY glProgramUniform3iv (GLuint program, GLint
// location, GLsizei count, const GLint *value);
#define GLProgramUniform3iv GLES2Loadercontext->glProgramUniform3iv
// GL_APICALL void GL_APIENTRY glProgramUniform4iv (GLuint program, GLint
// location, GLsizei count, const GLint *value);
#define GLProgramUniform4iv GLES2Loadercontext->glProgramUniform4iv
// GL_APICALL void GL_APIENTRY glProgramUniform1uiv (GLuint program, GLint
// location, GLsizei count, const GLuint *value);
#define GLProgramUniform1uiv GLES2Loadercontext->glProgramUniform1uiv
// GL_APICALL void GL_APIENTRY glProgramUniform2uiv (GLuint program, GLint
// location, GLsizei count, const GLuint *value);
#define GLProgramUniform2uiv GLES2Loadercontext->glProgramUniform2uiv
// GL_APICALL void GL_APIENTRY glProgramUniform3uiv (GLuint program, GLint
// location, GLsizei count, const GLuint *value);
#define GLProgramUniform3uiv GLES2Loadercontext->glProgramUniform3uiv
// GL_APICALL void GL_APIENTRY glProgramUniform4uiv (GLuint program, GLint
// location, GLsizei count, const GLuint *value);
#define GLProgramUniform4uiv GLES2Loadercontext->glProgramUniform4uiv
// GL_APICALL void GL_APIENTRY glProgramUniform1fv (GLuint program, GLint
// location, GLsizei count, const GLfloat *value);
#define GLProgramUniform1fv GLES2Loadercontext->glProgramUniform1fv
// GL_APICALL void GL_APIENTRY glProgramUniform2fv (GLuint program, GLint
// location, GLsizei count, const GLfloat *value);
#define GLProgramUniform2fv GLES2Loadercontext->glProgramUniform2fv
// GL_APICALL void GL_APIENTRY glProgramUniform3fv (GLuint program, GLint
// location, GLsizei count, const GLfloat *value);
#define GLProgramUniform3fv GLES2Loadercontext->glProgramUniform3fv
// GL_APICALL void GL_APIENTRY glProgramUniform4fv (GLuint program, GLint
// location, GLsizei count, const GLfloat *value);
#define GLProgramUniform4fv GLES2Loadercontext->glProgramUniform4fv
// GL_APICALL void GL_APIENTRY glProgramUniformMatrix2fv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix2fv GLES2Loadercontext->glProgramUniformMatrix2fv
// GL_APICALL void GL_APIENTRY glProgramUniformMatrix3fv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix3fv GLES2Loadercontext->glProgramUniformMatrix3fv
// GL_APICALL void GL_APIENTRY glProgramUniformMatrix4fv (GLuint program, GLint
// location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix4fv GLES2Loadercontext->glProgramUniformMatrix4fv
// GL_APICALL void GL_APIENTRY glProgramUniformMatrix2x3fv (GLuint program,
// GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix2x3fv                                            \
  GLES2Loadercontext->glProgramUniformMatrix2x3fv
// GL_APICALL void GL_APIENTRY glProgramUniformMatrix3x2fv (GLuint program,
// GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix3x2fv                                            \
  GLES2Loadercontext->glProgramUniformMatrix3x2fv
// GL_APICALL void GL_APIENTRY glProgramUniformMatrix2x4fv (GLuint program,
// GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix2x4fv                                            \
  GLES2Loadercontext->glProgramUniformMatrix2x4fv
// GL_APICALL void GL_APIENTRY glProgramUniformMatrix4x2fv (GLuint program,
// GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix4x2fv                                            \
  GLES2Loadercontext->glProgramUniformMatrix4x2fv
// GL_APICALL void GL_APIENTRY glProgramUniformMatrix3x4fv (GLuint program,
// GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix3x4fv                                            \
  GLES2Loadercontext->glProgramUniformMatrix3x4fv
// GL_APICALL void GL_APIENTRY glProgramUniformMatrix4x3fv (GLuint program,
// GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix4x3fv                                            \
  GLES2Loadercontext->glProgramUniformMatrix4x3fv
// GL_APICALL void GL_APIENTRY glValidateProgramPipeline (GLuint pipeline);
#define GLValidateProgramPipeline GLES2Loadercontext->glValidateProgramPipeline
// GL_APICALL void GL_APIENTRY glGetProgramPipelineInfoLog (GLuint pipeline,
// GLsizei bufSize, GLsizei *length, GLchar *infoLog);
#define GLGetProgramPipelineInfoLog                                            \
  GLES2Loadercontext->glGetProgramPipelineInfoLog
// GL_APICALL void GL_APIENTRY glBindImageTexture (GLuint unit, GLuint texture,
// GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
#define GLBindImageTexture GLES2Loadercontext->glBindImageTexture
// GL_APICALL void GL_APIENTRY glGetBooleani_v (GLenum target, GLuint index,
// GLboolean *data);
#define GLGetBooleani_v GLES2Loadercontext->glGetBooleani_v
// GL_APICALL void GL_APIENTRY glMemoryBarrier (GLbitfield barriers);
#define GLMemoryBarrier GLES2Loadercontext->glMemoryBarrier
// GL_APICALL void GL_APIENTRY glMemoryBarrierByRegion (GLbitfield barriers);
#define GLMemoryBarrierByRegion GLES2Loadercontext->glMemoryBarrierByRegion
// GL_APICALL void GL_APIENTRY glTexStorage2DMultisample (GLenum target, GLsizei
// samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean
// fixedsamplelocations);
#define GLTexStorage2DMultisample GLES2Loadercontext->glTexStorage2DMultisample
// GL_APICALL void GL_APIENTRY glGetMultisamplefv (GLenum pname, GLuint index,
// GLfloat *val);
#define GLGetMultisamplefv GLES2Loadercontext->glGetMultisamplefv
// GL_APICALL void GL_APIENTRY glSampleMaski (GLuint maskNumber, GLbitfield
// mask);
#define GLSampleMaski GLES2Loadercontext->glSampleMaski
// GL_APICALL void GL_APIENTRY glGetTexLevelParameteriv (GLenum target, GLint
// level, GLenum pname, GLint *params);
#define GLGetTexLevelParameteriv GLES2Loadercontext->glGetTexLevelParameteriv
// GL_APICALL void GL_APIENTRY glGetTexLevelParameterfv (GLenum target, GLint
// level, GLenum pname, GLfloat *params);
#define GLGetTexLevelParameterfv GLES2Loadercontext->glGetTexLevelParameterfv
// GL_APICALL void GL_APIENTRY glBindVertexBuffer (GLuint bindingindex, GLuint
// buffer, GLintptr offset, GLsizei stride);
#define GLBindVertexBuffer GLES2Loadercontext->glBindVertexBuffer
// GL_APICALL void GL_APIENTRY glVertexAttribFormat (GLuint attribindex, GLint
// size, GLenum type, GLboolean normalized, GLuint relativeoffset);
#define GLVertexAttribFormat GLES2Loadercontext->glVertexAttribFormat
// GL_APICALL void GL_APIENTRY glVertexAttribIFormat (GLuint attribindex, GLint
// size, GLenum type, GLuint relativeoffset);
#define GLVertexAttribIFormat GLES2Loadercontext->glVertexAttribIFormat
// GL_APICALL void GL_APIENTRY glVertexAttribBinding (GLuint attribindex, GLuint
// bindingindex);
#define GLVertexAttribBinding GLES2Loadercontext->glVertexAttribBinding
// GL_APICALL void GL_APIENTRY glVertexBindingDivisor (GLuint bindingindex,
// GLuint divisor);
#define GLVertexBindingDivisor GLES2Loadercontext->glVertexBindingDivisor
// GL_APICALL void GL_APIENTRY glBlendBarrier (void);
#define GLBlendBarrier GLES2Loadercontext->glBlendBarrier
// GL_APICALL void GL_APIENTRY glCopyImageSubData (GLuint srcName, GLenum
// srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint
// dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint
// dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
#define GLCopyImageSubData GLES2Loadercontext->glCopyImageSubData
// GL_APICALL void GL_APIENTRY glDebugMessageControl (GLenum source, GLenum
// type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
#define GLDebugMessageControl GLES2Loadercontext->glDebugMessageControl
// GL_APICALL void GL_APIENTRY glDebugMessageInsert (GLenum source, GLenum type,
// GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
#define GLDebugMessageInsert GLES2Loadercontext->glDebugMessageInsert
// GL_APICALL void GL_APIENTRY glDebugMessageCallback (GLDEBUGPROC callback,
// const void *userParam);
#define GLDebugMessageCallback GLES2Loadercontext->glDebugMessageCallback
// GL_APICALL GLuint GL_APIENTRY glGetDebugMessageLog (GLuint count, GLsizei
// bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities,
// GLsizei *lengths, GLchar *messageLog);
#define GLGetDebugMessageLog GLES2Loadercontext->glGetDebugMessageLog
// GL_APICALL void GL_APIENTRY glPushDebugGroup (GLenum source, GLuint id,
// GLsizei length, const GLchar *message);
#define GLPushDebugGroup GLES2Loadercontext->glPushDebugGroup
// GL_APICALL void GL_APIENTRY glPopDebugGroup (void);
#define GLPopDebugGroup GLES2Loadercontext->glPopDebugGroup
// GL_APICALL void GL_APIENTRY glObjectLabel (GLenum identifier, GLuint name,
// GLsizei length, const GLchar *label);
#define GLObjectLabel GLES2Loadercontext->glObjectLabel
// GL_APICALL void GL_APIENTRY glGetObjectLabel (GLenum identifier, GLuint name,
// GLsizei bufSize, GLsizei *length, GLchar *label);
#define GLGetObjectLabel GLES2Loadercontext->glGetObjectLabel
// GL_APICALL void GL_APIENTRY glObjectPtrLabel (const void *ptr, GLsizei
// length, const GLchar *label);
#define GLObjectPtrLabel GLES2Loadercontext->glObjectPtrLabel
// GL_APICALL void GL_APIENTRY glGetObjectPtrLabel (const void *ptr, GLsizei
// bufSize, GLsizei *length, GLchar *label);
#define GLGetObjectPtrLabel GLES2Loadercontext->glGetObjectPtrLabel
// GL_APICALL void GL_APIENTRY glGetPointerv (GLenum pname, void **params);
#define GLGetPointerv GLES2Loadercontext->glGetPointerv
// GL_APICALL void GL_APIENTRY glEnablei (GLenum target, GLuint index);
#define GLEnablei GLES2Loadercontext->glEnablei
// GL_APICALL void GL_APIENTRY glDisablei (GLenum target, GLuint index);
#define GLDisablei GLES2Loadercontext->glDisablei
// GL_APICALL void GL_APIENTRY glBlendEquationi (GLuint buf, GLenum mode);
#define GLBlendEquationi GLES2Loadercontext->glBlendEquationi
// GL_APICALL void GL_APIENTRY glBlendEquationSeparatei (GLuint buf, GLenum
// modeRGB, GLenum modeAlpha);
#define GLBlendEquationSeparatei GLES2Loadercontext->glBlendEquationSeparatei
// GL_APICALL void GL_APIENTRY glBlendFunci (GLuint buf, GLenum src, GLenum
// dst);
#define GLBlendFunci GLES2Loadercontext->glBlendFunci
// GL_APICALL void GL_APIENTRY glBlendFuncSeparatei (GLuint buf, GLenum srcRGB,
// GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
#define GLBlendFuncSeparatei GLES2Loadercontext->glBlendFuncSeparatei
// GL_APICALL void GL_APIENTRY glColorMaski (GLuint index, GLboolean r,
// GLboolean g, GLboolean b, GLboolean a);
#define GLColorMaski GLES2Loadercontext->glColorMaski
// GL_APICALL GLboolean GL_APIENTRY glIsEnabledi (GLenum target, GLuint index);
#define GLIsEnabledi GLES2Loadercontext->glIsEnabledi
// GL_APICALL void GL_APIENTRY glDrawElementsBaseVertex (GLenum mode, GLsizei
// count, GLenum type, const void *indices, GLint basevertex);
#define GLDrawElementsBaseVertex GLES2Loadercontext->glDrawElementsBaseVertex
// GL_APICALL void GL_APIENTRY glDrawRangeElementsBaseVertex (GLenum mode,
// GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices,
// GLint basevertex);
#define GLDrawRangeElementsBaseVertex                                          \
  GLES2Loadercontext->glDrawRangeElementsBaseVertex
// GL_APICALL void GL_APIENTRY glDrawElementsInstancedBaseVertex (GLenum mode,
// GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint
// basevertex);
#define GLDrawElementsInstancedBaseVertex                                      \
  GLES2Loadercontext->glDrawElementsInstancedBaseVertex
// GL_APICALL void GL_APIENTRY glFramebufferTexture (GLenum target, GLenum
// attachment, GLuint texture, GLint level);
#define GLFramebufferTexture GLES2Loadercontext->glFramebufferTexture
// GL_APICALL void GL_APIENTRY glPrimitiveBoundingBox (GLfloat minX, GLfloat
// minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ,
// GLfloat maxW);
#define GLPrimitiveBoundingBox GLES2Loadercontext->glPrimitiveBoundingBox
// GL_APICALL GLenum GL_APIENTRY glGetGraphicsResetStatus (void);
#define GLGetGraphicsResetStatus GLES2Loadercontext->glGetGraphicsResetStatus
// GL_APICALL void GL_APIENTRY glReadnPixels (GLint x, GLint y, GLsizei width,
// GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
#define GLReadnPixels GLES2Loadercontext->glReadnPixels
// GL_APICALL void GL_APIENTRY glGetnUniformfv (GLuint program, GLint location,
// GLsizei bufSize, GLfloat *params);
#define GLGetnUniformfv GLES2Loadercontext->glGetnUniformfv
// GL_APICALL void GL_APIENTRY glGetnUniformiv (GLuint program, GLint location,
// GLsizei bufSize, GLint *params);
#define GLGetnUniformiv GLES2Loadercontext->glGetnUniformiv
// GL_APICALL void GL_APIENTRY glGetnUniformuiv (GLuint program, GLint location,
// GLsizei bufSize, GLuint *params);
#define GLGetnUniformuiv GLES2Loadercontext->glGetnUniformuiv
// GL_APICALL void GL_APIENTRY glMinSampleShading (GLfloat value);
#define GLMinSampleShading GLES2Loadercontext->glMinSampleShading
// GL_APICALL void GL_APIENTRY glPatchParameteri (GLenum pname, GLint value);
#define GLPatchParameteri GLES2Loadercontext->glPatchParameteri
// GL_APICALL void GL_APIENTRY glTexParameterIiv (GLenum target, GLenum pname,
// const GLint *params);
#define GLTexParameterIiv GLES2Loadercontext->glTexParameterIiv
// GL_APICALL void GL_APIENTRY glTexParameterIuiv (GLenum target, GLenum pname,
// const GLuint *params);
#define GLTexParameterIuiv GLES2Loadercontext->glTexParameterIuiv
// GL_APICALL void GL_APIENTRY glGetTexParameterIiv (GLenum target, GLenum
// pname, GLint *params);
#define GLGetTexParameterIiv GLES2Loadercontext->glGetTexParameterIiv
// GL_APICALL void GL_APIENTRY glGetTexParameterIuiv (GLenum target, GLenum
// pname, GLuint *params);
#define GLGetTexParameterIuiv GLES2Loadercontext->glGetTexParameterIuiv
// GL_APICALL void GL_APIENTRY glSamplerParameterIiv (GLuint sampler, GLenum
// pname, const GLint *param);
#define GLSamplerParameterIiv GLES2Loadercontext->glSamplerParameterIiv
// GL_APICALL void GL_APIENTRY glSamplerParameterIuiv (GLuint sampler, GLenum
// pname, const GLuint *param);
#define GLSamplerParameterIuiv GLES2Loadercontext->glSamplerParameterIuiv
// GL_APICALL void GL_APIENTRY glGetSamplerParameterIiv (GLuint sampler, GLenum
// pname, GLint *params);
#define GLGetSamplerParameterIiv GLES2Loadercontext->glGetSamplerParameterIiv
// GL_APICALL void GL_APIENTRY glGetSamplerParameterIuiv (GLuint sampler, GLenum
// pname, GLuint *params);
#define GLGetSamplerParameterIuiv GLES2Loadercontext->glGetSamplerParameterIuiv
// GL_APICALL void GL_APIENTRY glTexBuffer (GLenum target, GLenum
// internalformat, GLuint buffer);
#define GLTexBuffer GLES2Loadercontext->glTexBuffer
// GL_APICALL void GL_APIENTRY glTexBufferRange (GLenum target, GLenum
// internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
#define GLTexBufferRange GLES2Loadercontext->glTexBufferRange
// GL_APICALL void GL_APIENTRY glTexStorage3DMultisample (GLenum target, GLsizei
// samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth,
// GLboolean fixedsamplelocations);
#define GLTexStorage3DMultisample GLES2Loadercontext->glTexStorage3DMultisample
// GL_APICALL void GL_APIENTRY glBlendBarrierKHR (void);
#define GLBlendBarrierKHR GLES2Loadercontext->glBlendBarrierKHR
// GL_APICALL void GL_APIENTRY glDebugMessageControlKHR (GLenum source, GLenum
// type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
#define GLDebugMessageControlKHR GLES2Loadercontext->glDebugMessageControlKHR
// GL_APICALL void GL_APIENTRY glDebugMessageInsertKHR (GLenum source, GLenum
// type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
#define GLDebugMessageInsertKHR GLES2Loadercontext->glDebugMessageInsertKHR
// GL_APICALL void GL_APIENTRY glDebugMessageCallbackKHR (GLDEBUGPROCKHR
// callback, const void *userParam);
#define GLDebugMessageCallbackKHR GLES2Loadercontext->glDebugMessageCallbackKHR
// GL_APICALL GLuint GL_APIENTRY glGetDebugMessageLogKHR (GLuint count, GLsizei
// bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities,
// GLsizei *lengths, GLchar *messageLog);
#define GLGetDebugMessageLogKHR GLES2Loadercontext->glGetDebugMessageLogKHR
// GL_APICALL void GL_APIENTRY glPushDebugGroupKHR (GLenum source, GLuint id,
// GLsizei length, const GLchar *message);
#define GLPushDebugGroupKHR GLES2Loadercontext->glPushDebugGroupKHR
// GL_APICALL void GL_APIENTRY glPopDebugGroupKHR (void);
#define GLPopDebugGroupKHR GLES2Loadercontext->glPopDebugGroupKHR
// GL_APICALL void GL_APIENTRY glObjectLabelKHR (GLenum identifier, GLuint name,
// GLsizei length, const GLchar *label);
#define GLObjectLabelKHR GLES2Loadercontext->glObjectLabelKHR
// GL_APICALL void GL_APIENTRY glGetObjectLabelKHR (GLenum identifier, GLuint
// name, GLsizei bufSize, GLsizei *length, GLchar *label);
#define GLGetObjectLabelKHR GLES2Loadercontext->glGetObjectLabelKHR
// GL_APICALL void GL_APIENTRY glObjectPtrLabelKHR (const void *ptr, GLsizei
// length, const GLchar *label);
#define GLObjectPtrLabelKHR GLES2Loadercontext->glObjectPtrLabelKHR
// GL_APICALL void GL_APIENTRY glGetObjectPtrLabelKHR (const void *ptr, GLsizei
// bufSize, GLsizei *length, GLchar *label);
#define GLGetObjectPtrLabelKHR GLES2Loadercontext->glGetObjectPtrLabelKHR
// GL_APICALL void GL_APIENTRY glGetPointervKHR (GLenum pname, void **params);
#define GLGetPointervKHR GLES2Loadercontext->glGetPointervKHR
// GL_APICALL void GL_APIENTRY glMaxShaderCompilerThreadsKHR (GLuint count);
#define GLMaxShaderCompilerThreadsKHR                                          \
  GLES2Loadercontext->glMaxShaderCompilerThreadsKHR
// GL_APICALL GLenum GL_APIENTRY glGetGraphicsResetStatusKHR (void);
#define GLGetGraphicsResetStatusKHR                                            \
  GLES2Loadercontext->glGetGraphicsResetStatusKHR
// GL_APICALL void GL_APIENTRY glReadnPixelsKHR (GLint x, GLint y, GLsizei
// width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void
// *data);
#define GLReadnPixelsKHR GLES2Loadercontext->glReadnPixelsKHR
// GL_APICALL void GL_APIENTRY glGetnUniformfvKHR (GLuint program, GLint
// location, GLsizei bufSize, GLfloat *params);
#define GLGetnUniformfvKHR GLES2Loadercontext->glGetnUniformfvKHR
// GL_APICALL void GL_APIENTRY glGetnUniformivKHR (GLuint program, GLint
// location, GLsizei bufSize, GLint *params);
#define GLGetnUniformivKHR GLES2Loadercontext->glGetnUniformivKHR
// GL_APICALL void GL_APIENTRY glGetnUniformuivKHR (GLuint program, GLint
// location, GLsizei bufSize, GLuint *params);
#define GLGetnUniformuivKHR GLES2Loadercontext->glGetnUniformuivKHR
// GL_APICALL void GL_APIENTRY glEGLImageTargetTexture2DOES (GLenum target,
// GLeglImageOES image);
#define GLEGLImageTargetTexture2DOES                                           \
  GLES2Loadercontext->glEGLImageTargetTexture2DOES
// GL_APICALL void GL_APIENTRY glEGLImageTargetRenderbufferStorageOES (GLenum
// target, GLeglImageOES image);
#define GLEGLImageTargetRenderbufferStorageOES                                 \
  GLES2Loadercontext->glEGLImageTargetRenderbufferStorageOES
// GL_APICALL void GL_APIENTRY glCopyImageSubDataOES (GLuint srcName, GLenum
// srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint
// dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint
// dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
#define GLCopyImageSubDataOES GLES2Loadercontext->glCopyImageSubDataOES
// GL_APICALL void GL_APIENTRY glEnableiOES (GLenum target, GLuint index);
#define GLEnableiOES GLES2Loadercontext->glEnableiOES
// GL_APICALL void GL_APIENTRY glDisableiOES (GLenum target, GLuint index);
#define GLDisableiOES GLES2Loadercontext->glDisableiOES
// GL_APICALL void GL_APIENTRY glBlendEquationiOES (GLuint buf, GLenum mode);
#define GLBlendEquationiOES GLES2Loadercontext->glBlendEquationiOES
// GL_APICALL void GL_APIENTRY glBlendEquationSeparateiOES (GLuint buf, GLenum
// modeRGB, GLenum modeAlpha);
#define GLBlendEquationSeparateiOES                                            \
  GLES2Loadercontext->glBlendEquationSeparateiOES
// GL_APICALL void GL_APIENTRY glBlendFunciOES (GLuint buf, GLenum src, GLenum
// dst);
#define GLBlendFunciOES GLES2Loadercontext->glBlendFunciOES
// GL_APICALL void GL_APIENTRY glBlendFuncSeparateiOES (GLuint buf, GLenum
// srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
#define GLBlendFuncSeparateiOES GLES2Loadercontext->glBlendFuncSeparateiOES
// GL_APICALL void GL_APIENTRY glColorMaskiOES (GLuint index, GLboolean r,
// GLboolean g, GLboolean b, GLboolean a);
#define GLColorMaskiOES GLES2Loadercontext->glColorMaskiOES
// GL_APICALL GLboolean GL_APIENTRY glIsEnablediOES (GLenum target, GLuint
// index);
#define GLIsEnablediOES GLES2Loadercontext->glIsEnablediOES
// GL_APICALL void GL_APIENTRY glDrawElementsBaseVertexOES (GLenum mode, GLsizei
// count, GLenum type, const void *indices, GLint basevertex);
#define GLDrawElementsBaseVertexOES                                            \
  GLES2Loadercontext->glDrawElementsBaseVertexOES
// GL_APICALL void GL_APIENTRY glDrawRangeElementsBaseVertexOES (GLenum mode,
// GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices,
// GLint basevertex);
#define GLDrawRangeElementsBaseVertexOES                                       \
  GLES2Loadercontext->glDrawRangeElementsBaseVertexOES
// GL_APICALL void GL_APIENTRY glDrawElementsInstancedBaseVertexOES (GLenum
// mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount,
// GLint basevertex);
#define GLDrawElementsInstancedBaseVertexOES                                   \
  GLES2Loadercontext->glDrawElementsInstancedBaseVertexOES
// GL_APICALL void GL_APIENTRY glMultiDrawElementsBaseVertexEXT (GLenum mode,
// const GLsizei *count, GLenum type, const void *const*indices, GLsizei
// drawcount, const GLint *basevertex);
#define GLMultiDrawElementsBaseVertexEXT                                       \
  GLES2Loadercontext->glMultiDrawElementsBaseVertexEXT
// GL_APICALL void GL_APIENTRY glFramebufferTextureOES (GLenum target, GLenum
// attachment, GLuint texture, GLint level);
#define GLFramebufferTextureOES GLES2Loadercontext->glFramebufferTextureOES
// GL_APICALL void GL_APIENTRY glGetProgramBinaryOES (GLuint program, GLsizei
// bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
#define GLGetProgramBinaryOES GLES2Loadercontext->glGetProgramBinaryOES
// GL_APICALL void GL_APIENTRY glProgramBinaryOES (GLuint program, GLenum
// binaryFormat, const void *binary, GLint length);
#define GLProgramBinaryOES GLES2Loadercontext->glProgramBinaryOES
// GL_APICALL void *GL_APIENTRY glMapBufferOES (GLenum target, GLenum access);
#define GLMapBufferOES GLES2Loadercontext->glMapBufferOES
// GL_APICALL GLboolean GL_APIENTRY glUnmapBufferOES (GLenum target);
#define GLUnmapBufferOES GLES2Loadercontext->glUnmapBufferOES
// GL_APICALL void GL_APIENTRY glGetBufferPointervOES (GLenum target, GLenum
// pname, void **params);
#define GLGetBufferPointervOES GLES2Loadercontext->glGetBufferPointervOES
// GL_APICALL void GL_APIENTRY glPrimitiveBoundingBoxOES (GLfloat minX, GLfloat
// minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ,
// GLfloat maxW);
#define GLPrimitiveBoundingBoxOES GLES2Loadercontext->glPrimitiveBoundingBoxOES
// GL_APICALL void GL_APIENTRY glMinSampleShadingOES (GLfloat value);
#define GLMinSampleShadingOES GLES2Loadercontext->glMinSampleShadingOES
// GL_APICALL void GL_APIENTRY glPatchParameteriOES (GLenum pname, GLint value);
#define GLPatchParameteriOES GLES2Loadercontext->glPatchParameteriOES
// GL_APICALL void GL_APIENTRY glTexImage3DOES (GLenum target, GLint level,
// GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint
// border, GLenum format, GLenum type, const void *pixels);
#define GLTexImage3DOES GLES2Loadercontext->glTexImage3DOES
// GL_APICALL void GL_APIENTRY glTexSubImage3DOES (GLenum target, GLint level,
// GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height,
// GLsizei depth, GLenum format, GLenum type, const void *pixels);
#define GLTexSubImage3DOES GLES2Loadercontext->glTexSubImage3DOES
// GL_APICALL void GL_APIENTRY glCopyTexSubImage3DOES (GLenum target, GLint
// level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei
// width, GLsizei height);
#define GLCopyTexSubImage3DOES GLES2Loadercontext->glCopyTexSubImage3DOES
// GL_APICALL void GL_APIENTRY glCompressedTexImage3DOES (GLenum target, GLint
// level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth,
// GLint border, GLsizei imageSize, const void *data);
#define GLCompressedTexImage3DOES GLES2Loadercontext->glCompressedTexImage3DOES
// GL_APICALL void GL_APIENTRY glCompressedTexSubImage3DOES (GLenum target,
// GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width,
// GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void
// *data);
#define GLCompressedTexSubImage3DOES                                           \
  GLES2Loadercontext->glCompressedTexSubImage3DOES
// GL_APICALL void GL_APIENTRY glFramebufferTexture3DOES (GLenum target, GLenum
// attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
#define GLFramebufferTexture3DOES GLES2Loadercontext->glFramebufferTexture3DOES
// GL_APICALL void GL_APIENTRY glTexParameterIivOES (GLenum target, GLenum
// pname, const GLint *params);
#define GLTexParameterIivOES GLES2Loadercontext->glTexParameterIivOES
// GL_APICALL void GL_APIENTRY glTexParameterIuivOES (GLenum target, GLenum
// pname, const GLuint *params);
#define GLTexParameterIuivOES GLES2Loadercontext->glTexParameterIuivOES
// GL_APICALL void GL_APIENTRY glGetTexParameterIivOES (GLenum target, GLenum
// pname, GLint *params);
#define GLGetTexParameterIivOES GLES2Loadercontext->glGetTexParameterIivOES
// GL_APICALL void GL_APIENTRY glGetTexParameterIuivOES (GLenum target, GLenum
// pname, GLuint *params);
#define GLGetTexParameterIuivOES GLES2Loadercontext->glGetTexParameterIuivOES
// GL_APICALL void GL_APIENTRY glSamplerParameterIivOES (GLuint sampler, GLenum
// pname, const GLint *param);
#define GLSamplerParameterIivOES GLES2Loadercontext->glSamplerParameterIivOES
// GL_APICALL void GL_APIENTRY glSamplerParameterIuivOES (GLuint sampler, GLenum
// pname, const GLuint *param);
#define GLSamplerParameterIuivOES GLES2Loadercontext->glSamplerParameterIuivOES
// GL_APICALL void GL_APIENTRY glGetSamplerParameterIivOES (GLuint sampler,
// GLenum pname, GLint *params);
#define GLGetSamplerParameterIivOES                                            \
  GLES2Loadercontext->glGetSamplerParameterIivOES
// GL_APICALL void GL_APIENTRY glGetSamplerParameterIuivOES (GLuint sampler,
// GLenum pname, GLuint *params);
#define GLGetSamplerParameterIuivOES                                           \
  GLES2Loadercontext->glGetSamplerParameterIuivOES
// GL_APICALL void GL_APIENTRY glTexBufferOES (GLenum target, GLenum
// internalformat, GLuint buffer);
#define GLTexBufferOES GLES2Loadercontext->glTexBufferOES
// GL_APICALL void GL_APIENTRY glTexBufferRangeOES (GLenum target, GLenum
// internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
#define GLTexBufferRangeOES GLES2Loadercontext->glTexBufferRangeOES
// GL_APICALL void GL_APIENTRY glTexStorage3DMultisampleOES (GLenum target,
// GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height,
// GLsizei depth, GLboolean fixedsamplelocations);
#define GLTexStorage3DMultisampleOES                                           \
  GLES2Loadercontext->glTexStorage3DMultisampleOES
// GL_APICALL void GL_APIENTRY glTextureViewOES (GLuint texture, GLenum target,
// GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels,
// GLuint minlayer, GLuint numlayers);
#define GLTextureViewOES GLES2Loadercontext->glTextureViewOES
// GL_APICALL void GL_APIENTRY glBindVertexArrayOES (GLuint array);
#define GLBindVertexArrayOES GLES2Loadercontext->glBindVertexArrayOES
// GL_APICALL void GL_APIENTRY glDeleteVertexArraysOES (GLsizei n, const GLuint
// *arrays);
#define GLDeleteVertexArraysOES GLES2Loadercontext->glDeleteVertexArraysOES
// GL_APICALL void GL_APIENTRY glGenVertexArraysOES (GLsizei n, GLuint *arrays);
#define GLGenVertexArraysOES GLES2Loadercontext->glGenVertexArraysOES
// GL_APICALL GLboolean GL_APIENTRY glIsVertexArrayOES (GLuint array);
#define GLIsVertexArrayOES GLES2Loadercontext->glIsVertexArrayOES
// GL_APICALL void GL_APIENTRY glViewportArrayvOES (GLuint first, GLsizei count,
// const GLfloat *v);
#define GLViewportArrayvOES GLES2Loadercontext->glViewportArrayvOES
// GL_APICALL void GL_APIENTRY glViewportIndexedfOES (GLuint index, GLfloat x,
// GLfloat y, GLfloat w, GLfloat h);
#define GLViewportIndexedfOES GLES2Loadercontext->glViewportIndexedfOES
// GL_APICALL void GL_APIENTRY glViewportIndexedfvOES (GLuint index, const
// GLfloat *v);
#define GLViewportIndexedfvOES GLES2Loadercontext->glViewportIndexedfvOES
// GL_APICALL void GL_APIENTRY glScissorArrayvOES (GLuint first, GLsizei count,
// const GLint *v);
#define GLScissorArrayvOES GLES2Loadercontext->glScissorArrayvOES
// GL_APICALL void GL_APIENTRY glScissorIndexedOES (GLuint index, GLint left,
// GLint bottom, GLsizei width, GLsizei height);
#define GLScissorIndexedOES GLES2Loadercontext->glScissorIndexedOES
// GL_APICALL void GL_APIENTRY glScissorIndexedvOES (GLuint index, const GLint
// *v);
#define GLScissorIndexedvOES GLES2Loadercontext->glScissorIndexedvOES
// GL_APICALL void GL_APIENTRY glDepthRangeArrayfvOES (GLuint first, GLsizei
// count, const GLfloat *v);
#define GLDepthRangeArrayfvOES GLES2Loadercontext->glDepthRangeArrayfvOES
// GL_APICALL void GL_APIENTRY glDepthRangeIndexedfOES (GLuint index, GLfloat n,
// GLfloat f);
#define GLDepthRangeIndexedfOES GLES2Loadercontext->glDepthRangeIndexedfOES
// GL_APICALL void GL_APIENTRY glGetFloati_vOES (GLenum target, GLuint index,
// GLfloat *data);
#define GLGetFloati_vOES GLES2Loadercontext->glGetFloati_vOES
// GL_APICALL void GL_APIENTRY glRenderbufferStorageMultisampleAdvancedAMD
// (GLenum target, GLsizei samples, GLsizei storageSamples, GLenum
// internalformat, GLsizei width, GLsizei height);
#define GLRenderbufferStorageMultisampleAdvancedAMD                            \
  GLES2Loadercontext->glRenderbufferStorageMultisampleAdvancedAMD
// GL_APICALL void GL_APIENTRY glNamedRenderbufferStorageMultisampleAdvancedAMD
// (GLuint renderbuffer, GLsizei samples, GLsizei storageSamples, GLenum
// internalformat, GLsizei width, GLsizei height);
#define GLNamedRenderbufferStorageMultisampleAdvancedAMD                       \
  GLES2Loadercontext->glNamedRenderbufferStorageMultisampleAdvancedAMD
// GL_APICALL void GL_APIENTRY glGetPerfMonitorGroupsAMD (GLint *numGroups,
// GLsizei groupsSize, GLuint *groups);
#define GLGetPerfMonitorGroupsAMD GLES2Loadercontext->glGetPerfMonitorGroupsAMD
// GL_APICALL void GL_APIENTRY glGetPerfMonitorCountersAMD (GLuint group, GLint
// *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint
// *counters);
#define GLGetPerfMonitorCountersAMD                                            \
  GLES2Loadercontext->glGetPerfMonitorCountersAMD
// GL_APICALL void GL_APIENTRY glGetPerfMonitorGroupStringAMD (GLuint group,
// GLsizei bufSize, GLsizei *length, GLchar *groupString);
#define GLGetPerfMonitorGroupStringAMD                                         \
  GLES2Loadercontext->glGetPerfMonitorGroupStringAMD
// GL_APICALL void GL_APIENTRY glGetPerfMonitorCounterStringAMD (GLuint group,
// GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString);
#define GLGetPerfMonitorCounterStringAMD                                       \
  GLES2Loadercontext->glGetPerfMonitorCounterStringAMD
// GL_APICALL void GL_APIENTRY glGetPerfMonitorCounterInfoAMD (GLuint group,
// GLuint counter, GLenum pname, void *data);
#define GLGetPerfMonitorCounterInfoAMD                                         \
  GLES2Loadercontext->glGetPerfMonitorCounterInfoAMD
// GL_APICALL void GL_APIENTRY glGenPerfMonitorsAMD (GLsizei n, GLuint
// *monitors);
#define GLGenPerfMonitorsAMD GLES2Loadercontext->glGenPerfMonitorsAMD
// GL_APICALL void GL_APIENTRY glDeletePerfMonitorsAMD (GLsizei n, GLuint
// *monitors);
#define GLDeletePerfMonitorsAMD GLES2Loadercontext->glDeletePerfMonitorsAMD
// GL_APICALL void GL_APIENTRY glSelectPerfMonitorCountersAMD (GLuint monitor,
// GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList);
#define GLSelectPerfMonitorCountersAMD                                         \
  GLES2Loadercontext->glSelectPerfMonitorCountersAMD
// GL_APICALL void GL_APIENTRY glBeginPerfMonitorAMD (GLuint monitor);
#define GLBeginPerfMonitorAMD GLES2Loadercontext->glBeginPerfMonitorAMD
// GL_APICALL void GL_APIENTRY glEndPerfMonitorAMD (GLuint monitor);
#define GLEndPerfMonitorAMD GLES2Loadercontext->glEndPerfMonitorAMD
// GL_APICALL void GL_APIENTRY glGetPerfMonitorCounterDataAMD (GLuint monitor,
// GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten);
#define GLGetPerfMonitorCounterDataAMD                                         \
  GLES2Loadercontext->glGetPerfMonitorCounterDataAMD
// GL_APICALL void GL_APIENTRY glBlitFramebufferANGLE (GLint srcX0, GLint srcY0,
// GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1,
// GLbitfield mask, GLenum filter);
#define GLBlitFramebufferANGLE GLES2Loadercontext->glBlitFramebufferANGLE
// GL_APICALL void GL_APIENTRY glRenderbufferStorageMultisampleANGLE (GLenum
// target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei
// height);
#define GLRenderbufferStorageMultisampleANGLE                                  \
  GLES2Loadercontext->glRenderbufferStorageMultisampleANGLE
// GL_APICALL void GL_APIENTRY glDrawArraysInstancedANGLE (GLenum mode, GLint
// first, GLsizei count, GLsizei primcount);
#define GLDrawArraysInstancedANGLE                                             \
  GLES2Loadercontext->glDrawArraysInstancedANGLE
// GL_APICALL void GL_APIENTRY glDrawElementsInstancedANGLE (GLenum mode,
// GLsizei count, GLenum type, const void *indices, GLsizei primcount);
#define GLDrawElementsInstancedANGLE                                           \
  GLES2Loadercontext->glDrawElementsInstancedANGLE
// GL_APICALL void GL_APIENTRY glVertexAttribDivisorANGLE (GLuint index, GLuint
// divisor);
#define GLVertexAttribDivisorANGLE                                             \
  GLES2Loadercontext->glVertexAttribDivisorANGLE
// GL_APICALL void GL_APIENTRY glGetTranslatedShaderSourceANGLE (GLuint shader,
// GLsizei bufSize, GLsizei *length, GLchar *source);
#define GLGetTranslatedShaderSourceANGLE                                       \
  GLES2Loadercontext->glGetTranslatedShaderSourceANGLE
// GL_APICALL void GL_APIENTRY glCopyTextureLevelsAPPLE (GLuint
// destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei
// sourceLevelCount);
#define GLCopyTextureLevelsAPPLE GLES2Loadercontext->glCopyTextureLevelsAPPLE
// GL_APICALL void GL_APIENTRY glRenderbufferStorageMultisampleAPPLE (GLenum
// target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei
// height);
#define GLRenderbufferStorageMultisampleAPPLE                                  \
  GLES2Loadercontext->glRenderbufferStorageMultisampleAPPLE
// GL_APICALL void GL_APIENTRY glResolveMultisampleFramebufferAPPLE (void);
#define GLResolveMultisampleFramebufferAPPLE                                   \
  GLES2Loadercontext->glResolveMultisampleFramebufferAPPLE
// GL_APICALL GLsync GL_APIENTRY glFenceSyncAPPLE (GLenum condition, GLbitfield
// flags);
#define GLFenceSyncAPPLE GLES2Loadercontext->glFenceSyncAPPLE
// GL_APICALL GLboolean GL_APIENTRY glIsSyncAPPLE (GLsync sync);
#define GLIsSyncAPPLE GLES2Loadercontext->glIsSyncAPPLE
// GL_APICALL void GL_APIENTRY glDeleteSyncAPPLE (GLsync sync);
#define GLDeleteSyncAPPLE GLES2Loadercontext->glDeleteSyncAPPLE
// GL_APICALL GLenum GL_APIENTRY glClientWaitSyncAPPLE (GLsync sync, GLbitfield
// flags, GLuint64 timeout);
#define GLClientWaitSyncAPPLE GLES2Loadercontext->glClientWaitSyncAPPLE
// GL_APICALL void GL_APIENTRY glWaitSyncAPPLE (GLsync sync, GLbitfield flags,
// GLuint64 timeout);
#define GLWaitSyncAPPLE GLES2Loadercontext->glWaitSyncAPPLE
// GL_APICALL void GL_APIENTRY glGetInteger64vAPPLE (GLenum pname, GLint64
// *params);
#define GLGetInteger64vAPPLE GLES2Loadercontext->glGetInteger64vAPPLE
// GL_APICALL void GL_APIENTRY glGetSyncivAPPLE (GLsync sync, GLenum pname,
// GLsizei count, GLsizei *length, GLint *values);
#define GLGetSyncivAPPLE GLES2Loadercontext->glGetSyncivAPPLE
// GL_APICALL void GL_APIENTRY glMaxActiveShaderCoresARM (GLuint count);
#define GLMaxActiveShaderCoresARM GLES2Loadercontext->glMaxActiveShaderCoresARM
// GL_APICALL void GL_APIENTRY glEGLImageTargetTexStorageEXT (GLenum target,
// GLeglImageOES image, const GLint* attrib_list);
#define GLEGLImageTargetTexStorageEXT                                          \
  GLES2Loadercontext->glEGLImageTargetTexStorageEXT
// GL_APICALL void GL_APIENTRY glEGLImageTargetTextureStorageEXT (GLuint
// texture, GLeglImageOES image, const GLint* attrib_list);
#define GLEGLImageTargetTextureStorageEXT                                      \
  GLES2Loadercontext->glEGLImageTargetTextureStorageEXT
// GL_APICALL void GL_APIENTRY glDrawArraysInstancedBaseInstanceEXT (GLenum
// mode, GLint first, GLsizei count, GLsizei instancecount, GLuint
// baseinstance);
#define GLDrawArraysInstancedBaseInstanceEXT                                   \
  GLES2Loadercontext->glDrawArraysInstancedBaseInstanceEXT
// GL_APICALL void GL_APIENTRY glDrawElementsInstancedBaseInstanceEXT (GLenum
// mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount,
// GLuint baseinstance);
#define GLDrawElementsInstancedBaseInstanceEXT                                 \
  GLES2Loadercontext->glDrawElementsInstancedBaseInstanceEXT
// GL_APICALL void GL_APIENTRY glDrawElementsInstancedBaseVertexBaseInstanceEXT
// (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei
// instancecount, GLint basevertex, GLuint baseinstance);
#define GLDrawElementsInstancedBaseVertexBaseInstanceEXT                       \
  GLES2Loadercontext->glDrawElementsInstancedBaseVertexBaseInstanceEXT
// GL_APICALL void GL_APIENTRY glBindFragDataLocationIndexedEXT (GLuint program,
// GLuint colorNumber, GLuint index, const GLchar *name);
#define GLBindFragDataLocationIndexedEXT                                       \
  GLES2Loadercontext->glBindFragDataLocationIndexedEXT
// GL_APICALL void GL_APIENTRY glBindFragDataLocationEXT (GLuint program, GLuint
// color, const GLchar *name);
#define GLBindFragDataLocationEXT GLES2Loadercontext->glBindFragDataLocationEXT
// GL_APICALL GLint GL_APIENTRY glGetProgramResourceLocationIndexEXT (GLuint
// program, GLenum programInterface, const GLchar *name);
#define GLGetProgramResourceLocationIndexEXT                                   \
  GLES2Loadercontext->glGetProgramResourceLocationIndexEXT
// GL_APICALL GLint GL_APIENTRY glGetFragDataIndexEXT (GLuint program, const
// GLchar *name);
#define GLGetFragDataIndexEXT GLES2Loadercontext->glGetFragDataIndexEXT
// GL_APICALL void GL_APIENTRY glBufferStorageEXT (GLenum target, GLsizeiptr
// size, const void *data, GLbitfield flags);
#define GLBufferStorageEXT GLES2Loadercontext->glBufferStorageEXT
// GL_APICALL void GL_APIENTRY glClearTexImageEXT (GLuint texture, GLint level,
// GLenum format, GLenum type, const void *data);
#define GLClearTexImageEXT GLES2Loadercontext->glClearTexImageEXT
// GL_APICALL void GL_APIENTRY glClearTexSubImageEXT (GLuint texture, GLint
// level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei
// height, GLsizei depth, GLenum format, GLenum type, const void *data);
#define GLClearTexSubImageEXT GLES2Loadercontext->glClearTexSubImageEXT
// GL_APICALL void GL_APIENTRY glClipControlEXT (GLenum origin, GLenum depth);
#define GLClipControlEXT GLES2Loadercontext->glClipControlEXT
// GL_APICALL void GL_APIENTRY glCopyImageSubDataEXT (GLuint srcName, GLenum
// srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint
// dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint
// dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
#define GLCopyImageSubDataEXT GLES2Loadercontext->glCopyImageSubDataEXT
// GL_APICALL void GL_APIENTRY glLabelObjectEXT (GLenum type, GLuint object,
// GLsizei length, const GLchar *label);
#define GLLabelObjectEXT GLES2Loadercontext->glLabelObjectEXT
// GL_APICALL void GL_APIENTRY glGetObjectLabelEXT (GLenum type, GLuint object,
// GLsizei bufSize, GLsizei *length, GLchar *label);
#define GLGetObjectLabelEXT GLES2Loadercontext->glGetObjectLabelEXT
// GL_APICALL void GL_APIENTRY glInsertEventMarkerEXT (GLsizei length, const
// GLchar *marker);
#define GLInsertEventMarkerEXT GLES2Loadercontext->glInsertEventMarkerEXT
// GL_APICALL void GL_APIENTRY glPushGroupMarkerEXT (GLsizei length, const
// GLchar *marker);
#define GLPushGroupMarkerEXT GLES2Loadercontext->glPushGroupMarkerEXT
// GL_APICALL void GL_APIENTRY glPopGroupMarkerEXT (void);
#define GLPopGroupMarkerEXT GLES2Loadercontext->glPopGroupMarkerEXT
// GL_APICALL void GL_APIENTRY glDiscardFramebufferEXT (GLenum target, GLsizei
// numAttachments, const GLenum *attachments);
#define GLDiscardFramebufferEXT GLES2Loadercontext->glDiscardFramebufferEXT
// GL_APICALL void GL_APIENTRY glGenQueriesEXT (GLsizei n, GLuint *ids);
#define GLGenQueriesEXT GLES2Loadercontext->glGenQueriesEXT
// GL_APICALL void GL_APIENTRY glDeleteQueriesEXT (GLsizei n, const GLuint
// *ids);
#define GLDeleteQueriesEXT GLES2Loadercontext->glDeleteQueriesEXT
// GL_APICALL GLboolean GL_APIENTRY glIsQueryEXT (GLuint id);
#define GLIsQueryEXT GLES2Loadercontext->glIsQueryEXT
// GL_APICALL void GL_APIENTRY glBeginQueryEXT (GLenum target, GLuint id);
#define GLBeginQueryEXT GLES2Loadercontext->glBeginQueryEXT
// GL_APICALL void GL_APIENTRY glEndQueryEXT (GLenum target);
#define GLEndQueryEXT GLES2Loadercontext->glEndQueryEXT
// GL_APICALL void GL_APIENTRY glQueryCounterEXT (GLuint id, GLenum target);
#define GLQueryCounterEXT GLES2Loadercontext->glQueryCounterEXT
// GL_APICALL void GL_APIENTRY glGetQueryivEXT (GLenum target, GLenum pname,
// GLint *params);
#define GLGetQueryivEXT GLES2Loadercontext->glGetQueryivEXT
// GL_APICALL void GL_APIENTRY glGetQueryObjectivEXT (GLuint id, GLenum pname,
// GLint *params);
#define GLGetQueryObjectivEXT GLES2Loadercontext->glGetQueryObjectivEXT
// GL_APICALL void GL_APIENTRY glGetQueryObjectuivEXT (GLuint id, GLenum pname,
// GLuint *params);
#define GLGetQueryObjectuivEXT GLES2Loadercontext->glGetQueryObjectuivEXT
// GL_APICALL void GL_APIENTRY glGetQueryObjecti64vEXT (GLuint id, GLenum pname,
// GLint64 *params);
#define GLGetQueryObjecti64vEXT GLES2Loadercontext->glGetQueryObjecti64vEXT
// GL_APICALL void GL_APIENTRY glGetQueryObjectui64vEXT (GLuint id, GLenum
// pname, GLuint64 *params);
#define GLGetQueryObjectui64vEXT GLES2Loadercontext->glGetQueryObjectui64vEXT
// GL_APICALL void GL_APIENTRY glGetInteger64vEXT (GLenum pname, GLint64 *data);
#define GLGetInteger64vEXT GLES2Loadercontext->glGetInteger64vEXT
// GL_APICALL void GL_APIENTRY glDrawBuffersEXT (GLsizei n, const GLenum *bufs);
#define GLDrawBuffersEXT GLES2Loadercontext->glDrawBuffersEXT
// GL_APICALL void GL_APIENTRY glEnableiEXT (GLenum target, GLuint index);
#define GLEnableiEXT GLES2Loadercontext->glEnableiEXT
// GL_APICALL void GL_APIENTRY glDisableiEXT (GLenum target, GLuint index);
#define GLDisableiEXT GLES2Loadercontext->glDisableiEXT
// GL_APICALL void GL_APIENTRY glBlendEquationiEXT (GLuint buf, GLenum mode);
#define GLBlendEquationiEXT GLES2Loadercontext->glBlendEquationiEXT
// GL_APICALL void GL_APIENTRY glBlendEquationSeparateiEXT (GLuint buf, GLenum
// modeRGB, GLenum modeAlpha);
#define GLBlendEquationSeparateiEXT                                            \
  GLES2Loadercontext->glBlendEquationSeparateiEXT
// GL_APICALL void GL_APIENTRY glBlendFunciEXT (GLuint buf, GLenum src, GLenum
// dst);
#define GLBlendFunciEXT GLES2Loadercontext->glBlendFunciEXT
// GL_APICALL void GL_APIENTRY glBlendFuncSeparateiEXT (GLuint buf, GLenum
// srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
#define GLBlendFuncSeparateiEXT GLES2Loadercontext->glBlendFuncSeparateiEXT
// GL_APICALL void GL_APIENTRY glColorMaskiEXT (GLuint index, GLboolean r,
// GLboolean g, GLboolean b, GLboolean a);
#define GLColorMaskiEXT GLES2Loadercontext->glColorMaskiEXT
// GL_APICALL GLboolean GL_APIENTRY glIsEnablediEXT (GLenum target, GLuint
// index);
#define GLIsEnablediEXT GLES2Loadercontext->glIsEnablediEXT
// GL_APICALL void GL_APIENTRY glDrawElementsBaseVertexEXT (GLenum mode, GLsizei
// count, GLenum type, const void *indices, GLint basevertex);
#define GLDrawElementsBaseVertexEXT                                            \
  GLES2Loadercontext->glDrawElementsBaseVertexEXT
// GL_APICALL void GL_APIENTRY glDrawRangeElementsBaseVertexEXT (GLenum mode,
// GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices,
// GLint basevertex);
#define GLDrawRangeElementsBaseVertexEXT                                       \
  GLES2Loadercontext->glDrawRangeElementsBaseVertexEXT
// GL_APICALL void GL_APIENTRY glDrawElementsInstancedBaseVertexEXT (GLenum
// mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount,
// GLint basevertex);
#define GLDrawElementsInstancedBaseVertexEXT                                   \
  GLES2Loadercontext->glDrawElementsInstancedBaseVertexEXT
// GL_APICALL void GL_APIENTRY glDrawArraysInstancedEXT (GLenum mode, GLint
// start, GLsizei count, GLsizei primcount);
#define GLDrawArraysInstancedEXT GLES2Loadercontext->glDrawArraysInstancedEXT
// GL_APICALL void GL_APIENTRY glDrawElementsInstancedEXT (GLenum mode, GLsizei
// count, GLenum type, const void *indices, GLsizei primcount);
#define GLDrawElementsInstancedEXT                                             \
  GLES2Loadercontext->glDrawElementsInstancedEXT
// GL_APICALL void GL_APIENTRY glDrawTransformFeedbackEXT (GLenum mode, GLuint
// id);
#define GLDrawTransformFeedbackEXT                                             \
  GLES2Loadercontext->glDrawTransformFeedbackEXT
// GL_APICALL void GL_APIENTRY glDrawTransformFeedbackInstancedEXT (GLenum mode,
// GLuint id, GLsizei instancecount);
#define GLDrawTransformFeedbackInstancedEXT                                    \
  GLES2Loadercontext->glDrawTransformFeedbackInstancedEXT
// GL_APICALL void GL_APIENTRY glBufferStorageExternalEXT (GLenum target,
// GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer,
// GLbitfield flags);
#define GLBufferStorageExternalEXT                                             \
  GLES2Loadercontext->glBufferStorageExternalEXT
// GL_APICALL void GL_APIENTRY glNamedBufferStorageExternalEXT (GLuint buffer,
// GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer,
// GLbitfield flags);
#define GLNamedBufferStorageExternalEXT                                        \
  GLES2Loadercontext->glNamedBufferStorageExternalEXT
// GL_APICALL void GL_APIENTRY glGetFragmentShadingRatesEXT (GLsizei samples,
// GLsizei maxCount, GLsizei *count, GLenum *shadingRates);
#define GLGetFragmentShadingRatesEXT                                           \
  GLES2Loadercontext->glGetFragmentShadingRatesEXT
// GL_APICALL void GL_APIENTRY glShadingRateEXT (GLenum rate);
#define GLShadingRateEXT GLES2Loadercontext->glShadingRateEXT
// GL_APICALL void GL_APIENTRY glShadingRateCombinerOpsEXT (GLenum combinerOp0,
// GLenum combinerOp1);
#define GLShadingRateCombinerOpsEXT                                            \
  GLES2Loadercontext->glShadingRateCombinerOpsEXT
// GL_APICALL void GL_APIENTRY glFramebufferShadingRateEXT (GLenum target,
// GLenum attachment, GLuint texture, GLint baseLayer, GLsizei numLayers,
// GLsizei texelWidth, GLsizei texelHeight);
#define GLFramebufferShadingRateEXT                                            \
  GLES2Loadercontext->glFramebufferShadingRateEXT
// GL_APICALL void GL_APIENTRY glBlitFramebufferLayersEXT (GLint srcX0, GLint
// srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint
// dstY1, GLbitfield mask, GLenum filter);
#define GLBlitFramebufferLayersEXT                                             \
  GLES2Loadercontext->glBlitFramebufferLayersEXT
// GL_APICALL void GL_APIENTRY glBlitFramebufferLayerEXT (GLint srcX0, GLint
// srcY0, GLint srcX1, GLint srcY1, GLint srcLayer, GLint dstX0, GLint dstY0,
// GLint dstX1, GLint dstY1, GLint dstLayer, GLbitfield mask, GLenum filter);
#define GLBlitFramebufferLayerEXT GLES2Loadercontext->glBlitFramebufferLayerEXT
// GL_APICALL void GL_APIENTRY glFramebufferTextureEXT (GLenum target, GLenum
// attachment, GLuint texture, GLint level);
#define GLFramebufferTextureEXT GLES2Loadercontext->glFramebufferTextureEXT
// GL_APICALL void GL_APIENTRY glVertexAttribDivisorEXT (GLuint index, GLuint
// divisor);
#define GLVertexAttribDivisorEXT GLES2Loadercontext->glVertexAttribDivisorEXT
// GL_APICALL void *GL_APIENTRY glMapBufferRangeEXT (GLenum target, GLintptr
// offset, GLsizeiptr length, GLbitfield access);
#define GLMapBufferRangeEXT GLES2Loadercontext->glMapBufferRangeEXT
// GL_APICALL void GL_APIENTRY glFlushMappedBufferRangeEXT (GLenum target,
// GLintptr offset, GLsizeiptr length);
#define GLFlushMappedBufferRangeEXT                                            \
  GLES2Loadercontext->glFlushMappedBufferRangeEXT
// GL_APICALL void GL_APIENTRY glGetUnsignedBytevEXT (GLenum pname, GLubyte
// *data);
#define GLGetUnsignedBytevEXT GLES2Loadercontext->glGetUnsignedBytevEXT
// GL_APICALL void GL_APIENTRY glGetUnsignedBytei_vEXT (GLenum target, GLuint
// index, GLubyte *data);
#define GLGetUnsignedBytei_vEXT GLES2Loadercontext->glGetUnsignedBytei_vEXT
// GL_APICALL void GL_APIENTRY glDeleteMemoryObjectsEXT (GLsizei n, const GLuint
// *memoryObjects);
#define GLDeleteMemoryObjectsEXT GLES2Loadercontext->glDeleteMemoryObjectsEXT
// GL_APICALL GLboolean GL_APIENTRY glIsMemoryObjectEXT (GLuint memoryObject);
#define GLIsMemoryObjectEXT GLES2Loadercontext->glIsMemoryObjectEXT
// GL_APICALL void GL_APIENTRY glCreateMemoryObjectsEXT (GLsizei n, GLuint
// *memoryObjects);
#define GLCreateMemoryObjectsEXT GLES2Loadercontext->glCreateMemoryObjectsEXT
// GL_APICALL void GL_APIENTRY glMemoryObjectParameterivEXT (GLuint
// memoryObject, GLenum pname, const GLint *params);
#define GLMemoryObjectParameterivEXT                                           \
  GLES2Loadercontext->glMemoryObjectParameterivEXT
// GL_APICALL void GL_APIENTRY glGetMemoryObjectParameterivEXT (GLuint
// memoryObject, GLenum pname, GLint *params);
#define GLGetMemoryObjectParameterivEXT                                        \
  GLES2Loadercontext->glGetMemoryObjectParameterivEXT
// GL_APICALL void GL_APIENTRY glTexStorageMem2DEXT (GLenum target, GLsizei
// levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory,
// GLuint64 offset);
#define GLTexStorageMem2DEXT GLES2Loadercontext->glTexStorageMem2DEXT
// GL_APICALL void GL_APIENTRY glTexStorageMem2DMultisampleEXT (GLenum target,
// GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height,
// GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
#define GLTexStorageMem2DMultisampleEXT                                        \
  GLES2Loadercontext->glTexStorageMem2DMultisampleEXT
// GL_APICALL void GL_APIENTRY glTexStorageMem3DEXT (GLenum target, GLsizei
// levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth,
// GLuint memory, GLuint64 offset);
#define GLTexStorageMem3DEXT GLES2Loadercontext->glTexStorageMem3DEXT
// GL_APICALL void GL_APIENTRY glTexStorageMem3DMultisampleEXT (GLenum target,
// GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height,
// GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64
// offset);
#define GLTexStorageMem3DMultisampleEXT                                        \
  GLES2Loadercontext->glTexStorageMem3DMultisampleEXT
// GL_APICALL void GL_APIENTRY glBufferStorageMemEXT (GLenum target, GLsizeiptr
// size, GLuint memory, GLuint64 offset);
#define GLBufferStorageMemEXT GLES2Loadercontext->glBufferStorageMemEXT
// GL_APICALL void GL_APIENTRY glTextureStorageMem2DEXT (GLuint texture, GLsizei
// levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory,
// GLuint64 offset);
#define GLTextureStorageMem2DEXT GLES2Loadercontext->glTextureStorageMem2DEXT
// GL_APICALL void GL_APIENTRY glTextureStorageMem2DMultisampleEXT (GLuint
// texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei
// height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
#define GLTextureStorageMem2DMultisampleEXT                                    \
  GLES2Loadercontext->glTextureStorageMem2DMultisampleEXT
// GL_APICALL void GL_APIENTRY glTextureStorageMem3DEXT (GLuint texture, GLsizei
// levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth,
// GLuint memory, GLuint64 offset);
#define GLTextureStorageMem3DEXT GLES2Loadercontext->glTextureStorageMem3DEXT
// GL_APICALL void GL_APIENTRY glTextureStorageMem3DMultisampleEXT (GLuint
// texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei
// height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory,
// GLuint64 offset);
#define GLTextureStorageMem3DMultisampleEXT                                    \
  GLES2Loadercontext->glTextureStorageMem3DMultisampleEXT
// GL_APICALL void GL_APIENTRY glNamedBufferStorageMemEXT (GLuint buffer,
// GLsizeiptr size, GLuint memory, GLuint64 offset);
#define GLNamedBufferStorageMemEXT                                             \
  GLES2Loadercontext->glNamedBufferStorageMemEXT
// GL_APICALL void GL_APIENTRY glImportMemoryFdEXT (GLuint memory, GLuint64
// size, GLenum handleType, GLint fd);
#define GLImportMemoryFdEXT GLES2Loadercontext->glImportMemoryFdEXT
// GL_APICALL void GL_APIENTRY glImportMemoryWin32HandleEXT (GLuint memory,
// GLuint64 size, GLenum handleType, void *handle);
#define GLImportMemoryWin32HandleEXT                                           \
  GLES2Loadercontext->glImportMemoryWin32HandleEXT
// GL_APICALL void GL_APIENTRY glImportMemoryWin32NameEXT (GLuint memory,
// GLuint64 size, GLenum handleType, const void *name);
#define GLImportMemoryWin32NameEXT                                             \
  GLES2Loadercontext->glImportMemoryWin32NameEXT
// GL_APICALL void GL_APIENTRY glMultiDrawArraysEXT (GLenum mode, const GLint
// *first, const GLsizei *count, GLsizei primcount);
#define GLMultiDrawArraysEXT GLES2Loadercontext->glMultiDrawArraysEXT
// GL_APICALL void GL_APIENTRY glMultiDrawElementsEXT (GLenum mode, const
// GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount);
#define GLMultiDrawElementsEXT GLES2Loadercontext->glMultiDrawElementsEXT
// GL_APICALL void GL_APIENTRY glMultiDrawArraysIndirectEXT (GLenum mode, const
// void *indirect, GLsizei drawcount, GLsizei stride);
#define GLMultiDrawArraysIndirectEXT                                           \
  GLES2Loadercontext->glMultiDrawArraysIndirectEXT
// GL_APICALL void GL_APIENTRY glMultiDrawElementsIndirectEXT (GLenum mode,
// GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride);
#define GLMultiDrawElementsIndirectEXT                                         \
  GLES2Loadercontext->glMultiDrawElementsIndirectEXT
// GL_APICALL void GL_APIENTRY glRenderbufferStorageMultisampleEXT (GLenum
// target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei
// height);
#define GLRenderbufferStorageMultisampleEXT                                    \
  GLES2Loadercontext->glRenderbufferStorageMultisampleEXT
// GL_APICALL void GL_APIENTRY glFramebufferTexture2DMultisampleEXT (GLenum
// target, GLenum attachment, GLenum textarget, GLuint texture, GLint level,
// GLsizei samples);
#define GLFramebufferTexture2DMultisampleEXT                                   \
  GLES2Loadercontext->glFramebufferTexture2DMultisampleEXT
// GL_APICALL void GL_APIENTRY glReadBufferIndexedEXT (GLenum src, GLint index);
#define GLReadBufferIndexedEXT GLES2Loadercontext->glReadBufferIndexedEXT
// GL_APICALL void GL_APIENTRY glDrawBuffersIndexedEXT (GLint n, const GLenum
// *location, const GLint *indices);
#define GLDrawBuffersIndexedEXT GLES2Loadercontext->glDrawBuffersIndexedEXT
// GL_APICALL void GL_APIENTRY glGetIntegeri_vEXT (GLenum target, GLuint index,
// GLint *data);
#define GLGetIntegeri_vEXT GLES2Loadercontext->glGetIntegeri_vEXT
// GL_APICALL void GL_APIENTRY glPolygonOffsetClampEXT (GLfloat factor, GLfloat
// units, GLfloat clamp);
#define GLPolygonOffsetClampEXT GLES2Loadercontext->glPolygonOffsetClampEXT
// GL_APICALL void GL_APIENTRY glPrimitiveBoundingBoxEXT (GLfloat minX, GLfloat
// minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ,
// GLfloat maxW);
#define GLPrimitiveBoundingBoxEXT GLES2Loadercontext->glPrimitiveBoundingBoxEXT
// GL_APICALL void GL_APIENTRY glRasterSamplesEXT (GLuint samples, GLboolean
// fixedsamplelocations);
#define GLRasterSamplesEXT GLES2Loadercontext->glRasterSamplesEXT
// GL_APICALL GLenum GL_APIENTRY glGetGraphicsResetStatusEXT (void);
#define GLGetGraphicsResetStatusEXT                                            \
  GLES2Loadercontext->glGetGraphicsResetStatusEXT
// GL_APICALL void GL_APIENTRY glReadnPixelsEXT (GLint x, GLint y, GLsizei
// width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void
// *data);
#define GLReadnPixelsEXT GLES2Loadercontext->glReadnPixelsEXT
// GL_APICALL void GL_APIENTRY glGetnUniformfvEXT (GLuint program, GLint
// location, GLsizei bufSize, GLfloat *params);
#define GLGetnUniformfvEXT GLES2Loadercontext->glGetnUniformfvEXT
// GL_APICALL void GL_APIENTRY glGetnUniformivEXT (GLuint program, GLint
// location, GLsizei bufSize, GLint *params);
#define GLGetnUniformivEXT GLES2Loadercontext->glGetnUniformivEXT
// GL_APICALL void GL_APIENTRY glGenSemaphoresEXT (GLsizei n, GLuint
// *semaphores);
#define GLGenSemaphoresEXT GLES2Loadercontext->glGenSemaphoresEXT
// GL_APICALL void GL_APIENTRY glDeleteSemaphoresEXT (GLsizei n, const GLuint
// *semaphores);
#define GLDeleteSemaphoresEXT GLES2Loadercontext->glDeleteSemaphoresEXT
// GL_APICALL GLboolean GL_APIENTRY glIsSemaphoreEXT (GLuint semaphore);
#define GLIsSemaphoreEXT GLES2Loadercontext->glIsSemaphoreEXT
// GL_APICALL void GL_APIENTRY glSemaphoreParameterui64vEXT (GLuint semaphore,
// GLenum pname, const GLuint64 *params);
#define GLSemaphoreParameterui64vEXT                                           \
  GLES2Loadercontext->glSemaphoreParameterui64vEXT
// GL_APICALL void GL_APIENTRY glGetSemaphoreParameterui64vEXT (GLuint
// semaphore, GLenum pname, GLuint64 *params);
#define GLGetSemaphoreParameterui64vEXT                                        \
  GLES2Loadercontext->glGetSemaphoreParameterui64vEXT
// GL_APICALL void GL_APIENTRY glWaitSemaphoreEXT (GLuint semaphore, GLuint
// numBufferBarriers, const GLuint *buffers, GLuint numTextureBarriers, const
// GLuint *textures, const GLenum *srcLayouts);
#define GLWaitSemaphoreEXT GLES2Loadercontext->glWaitSemaphoreEXT
// GL_APICALL void GL_APIENTRY glSignalSemaphoreEXT (GLuint semaphore, GLuint
// numBufferBarriers, const GLuint *buffers, GLuint numTextureBarriers, const
// GLuint *textures, const GLenum *dstLayouts);
#define GLSignalSemaphoreEXT GLES2Loadercontext->glSignalSemaphoreEXT
// GL_APICALL void GL_APIENTRY glImportSemaphoreFdEXT (GLuint semaphore, GLenum
// handleType, GLint fd);
#define GLImportSemaphoreFdEXT GLES2Loadercontext->glImportSemaphoreFdEXT
// GL_APICALL void GL_APIENTRY glImportSemaphoreWin32HandleEXT (GLuint
// semaphore, GLenum handleType, void *handle);
#define GLImportSemaphoreWin32HandleEXT                                        \
  GLES2Loadercontext->glImportSemaphoreWin32HandleEXT
// GL_APICALL void GL_APIENTRY glImportSemaphoreWin32NameEXT (GLuint semaphore,
// GLenum handleType, const void *name);
#define GLImportSemaphoreWin32NameEXT                                          \
  GLES2Loadercontext->glImportSemaphoreWin32NameEXT
// GL_APICALL void GL_APIENTRY glActiveShaderProgramEXT (GLuint pipeline, GLuint
// program);
#define GLActiveShaderProgramEXT GLES2Loadercontext->glActiveShaderProgramEXT
// GL_APICALL void GL_APIENTRY glBindProgramPipelineEXT (GLuint pipeline);
#define GLBindProgramPipelineEXT GLES2Loadercontext->glBindProgramPipelineEXT
// GL_APICALL GLuint GL_APIENTRY glCreateShaderProgramvEXT (GLenum type, GLsizei
// count, const GLchar *const*strings);
#define GLCreateShaderProgramvEXT GLES2Loadercontext->glCreateShaderProgramvEXT
// GL_APICALL void GL_APIENTRY glDeleteProgramPipelinesEXT (GLsizei n, const
// GLuint *pipelines);
#define GLDeleteProgramPipelinesEXT                                            \
  GLES2Loadercontext->glDeleteProgramPipelinesEXT
// GL_APICALL void GL_APIENTRY glGenProgramPipelinesEXT (GLsizei n, GLuint
// *pipelines);
#define GLGenProgramPipelinesEXT GLES2Loadercontext->glGenProgramPipelinesEXT
// GL_APICALL void GL_APIENTRY glGetProgramPipelineInfoLogEXT (GLuint pipeline,
// GLsizei bufSize, GLsizei *length, GLchar *infoLog);
#define GLGetProgramPipelineInfoLogEXT                                         \
  GLES2Loadercontext->glGetProgramPipelineInfoLogEXT
// GL_APICALL void GL_APIENTRY glGetProgramPipelineivEXT (GLuint pipeline,
// GLenum pname, GLint *params);
#define GLGetProgramPipelineivEXT GLES2Loadercontext->glGetProgramPipelineivEXT
// GL_APICALL GLboolean GL_APIENTRY glIsProgramPipelineEXT (GLuint pipeline);
#define GLIsProgramPipelineEXT GLES2Loadercontext->glIsProgramPipelineEXT
// GL_APICALL void GL_APIENTRY glProgramParameteriEXT (GLuint program, GLenum
// pname, GLint value);
#define GLProgramParameteriEXT GLES2Loadercontext->glProgramParameteriEXT
// GL_APICALL void GL_APIENTRY glProgramUniform1fEXT (GLuint program, GLint
// location, GLfloat v0);
#define GLProgramUniform1fEXT GLES2Loadercontext->glProgramUniform1fEXT
// GL_APICALL void GL_APIENTRY glProgramUniform1fvEXT (GLuint program, GLint
// location, GLsizei count, const GLfloat *value);
#define GLProgramUniform1fvEXT GLES2Loadercontext->glProgramUniform1fvEXT
// GL_APICALL void GL_APIENTRY glProgramUniform1iEXT (GLuint program, GLint
// location, GLint v0);
#define GLProgramUniform1iEXT GLES2Loadercontext->glProgramUniform1iEXT
// GL_APICALL void GL_APIENTRY glProgramUniform1ivEXT (GLuint program, GLint
// location, GLsizei count, const GLint *value);
#define GLProgramUniform1ivEXT GLES2Loadercontext->glProgramUniform1ivEXT
// GL_APICALL void GL_APIENTRY glProgramUniform2fEXT (GLuint program, GLint
// location, GLfloat v0, GLfloat v1);
#define GLProgramUniform2fEXT GLES2Loadercontext->glProgramUniform2fEXT
// GL_APICALL void GL_APIENTRY glProgramUniform2fvEXT (GLuint program, GLint
// location, GLsizei count, const GLfloat *value);
#define GLProgramUniform2fvEXT GLES2Loadercontext->glProgramUniform2fvEXT
// GL_APICALL void GL_APIENTRY glProgramUniform2iEXT (GLuint program, GLint
// location, GLint v0, GLint v1);
#define GLProgramUniform2iEXT GLES2Loadercontext->glProgramUniform2iEXT
// GL_APICALL void GL_APIENTRY glProgramUniform2ivEXT (GLuint program, GLint
// location, GLsizei count, const GLint *value);
#define GLProgramUniform2ivEXT GLES2Loadercontext->glProgramUniform2ivEXT
// GL_APICALL void GL_APIENTRY glProgramUniform3fEXT (GLuint program, GLint
// location, GLfloat v0, GLfloat v1, GLfloat v2);
#define GLProgramUniform3fEXT GLES2Loadercontext->glProgramUniform3fEXT
// GL_APICALL void GL_APIENTRY glProgramUniform3fvEXT (GLuint program, GLint
// location, GLsizei count, const GLfloat *value);
#define GLProgramUniform3fvEXT GLES2Loadercontext->glProgramUniform3fvEXT
// GL_APICALL void GL_APIENTRY glProgramUniform3iEXT (GLuint program, GLint
// location, GLint v0, GLint v1, GLint v2);
#define GLProgramUniform3iEXT GLES2Loadercontext->glProgramUniform3iEXT
// GL_APICALL void GL_APIENTRY glProgramUniform3ivEXT (GLuint program, GLint
// location, GLsizei count, const GLint *value);
#define GLProgramUniform3ivEXT GLES2Loadercontext->glProgramUniform3ivEXT
// GL_APICALL void GL_APIENTRY glProgramUniform4fEXT (GLuint program, GLint
// location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
#define GLProgramUniform4fEXT GLES2Loadercontext->glProgramUniform4fEXT
// GL_APICALL void GL_APIENTRY glProgramUniform4fvEXT (GLuint program, GLint
// location, GLsizei count, const GLfloat *value);
#define GLProgramUniform4fvEXT GLES2Loadercontext->glProgramUniform4fvEXT
// GL_APICALL void GL_APIENTRY glProgramUniform4iEXT (GLuint program, GLint
// location, GLint v0, GLint v1, GLint v2, GLint v3);
#define GLProgramUniform4iEXT GLES2Loadercontext->glProgramUniform4iEXT
// GL_APICALL void GL_APIENTRY glProgramUniform4ivEXT (GLuint program, GLint
// location, GLsizei count, const GLint *value);
#define GLProgramUniform4ivEXT GLES2Loadercontext->glProgramUniform4ivEXT
// GL_APICALL void GL_APIENTRY glProgramUniformMatrix2fvEXT (GLuint program,
// GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix2fvEXT                                           \
  GLES2Loadercontext->glProgramUniformMatrix2fvEXT
// GL_APICALL void GL_APIENTRY glProgramUniformMatrix3fvEXT (GLuint program,
// GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix3fvEXT                                           \
  GLES2Loadercontext->glProgramUniformMatrix3fvEXT
// GL_APICALL void GL_APIENTRY glProgramUniformMatrix4fvEXT (GLuint program,
// GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix4fvEXT                                           \
  GLES2Loadercontext->glProgramUniformMatrix4fvEXT
// GL_APICALL void GL_APIENTRY glUseProgramStagesEXT (GLuint pipeline,
// GLbitfield stages, GLuint program);
#define GLUseProgramStagesEXT GLES2Loadercontext->glUseProgramStagesEXT
// GL_APICALL void GL_APIENTRY glValidateProgramPipelineEXT (GLuint pipeline);
#define GLValidateProgramPipelineEXT                                           \
  GLES2Loadercontext->glValidateProgramPipelineEXT
// GL_APICALL void GL_APIENTRY glProgramUniform1uiEXT (GLuint program, GLint
// location, GLuint v0);
#define GLProgramUniform1uiEXT GLES2Loadercontext->glProgramUniform1uiEXT
// GL_APICALL void GL_APIENTRY glProgramUniform2uiEXT (GLuint program, GLint
// location, GLuint v0, GLuint v1);
#define GLProgramUniform2uiEXT GLES2Loadercontext->glProgramUniform2uiEXT
// GL_APICALL void GL_APIENTRY glProgramUniform3uiEXT (GLuint program, GLint
// location, GLuint v0, GLuint v1, GLuint v2);
#define GLProgramUniform3uiEXT GLES2Loadercontext->glProgramUniform3uiEXT
// GL_APICALL void GL_APIENTRY glProgramUniform4uiEXT (GLuint program, GLint
// location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
#define GLProgramUniform4uiEXT GLES2Loadercontext->glProgramUniform4uiEXT
// GL_APICALL void GL_APIENTRY glProgramUniform1uivEXT (GLuint program, GLint
// location, GLsizei count, const GLuint *value);
#define GLProgramUniform1uivEXT GLES2Loadercontext->glProgramUniform1uivEXT
// GL_APICALL void GL_APIENTRY glProgramUniform2uivEXT (GLuint program, GLint
// location, GLsizei count, const GLuint *value);
#define GLProgramUniform2uivEXT GLES2Loadercontext->glProgramUniform2uivEXT
// GL_APICALL void GL_APIENTRY glProgramUniform3uivEXT (GLuint program, GLint
// location, GLsizei count, const GLuint *value);
#define GLProgramUniform3uivEXT GLES2Loadercontext->glProgramUniform3uivEXT
// GL_APICALL void GL_APIENTRY glProgramUniform4uivEXT (GLuint program, GLint
// location, GLsizei count, const GLuint *value);
#define GLProgramUniform4uivEXT GLES2Loadercontext->glProgramUniform4uivEXT
// GL_APICALL void GL_APIENTRY glProgramUniformMatrix2x3fvEXT (GLuint program,
// GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix2x3fvEXT                                         \
  GLES2Loadercontext->glProgramUniformMatrix2x3fvEXT
// GL_APICALL void GL_APIENTRY glProgramUniformMatrix3x2fvEXT (GLuint program,
// GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix3x2fvEXT                                         \
  GLES2Loadercontext->glProgramUniformMatrix3x2fvEXT
// GL_APICALL void GL_APIENTRY glProgramUniformMatrix2x4fvEXT (GLuint program,
// GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix2x4fvEXT                                         \
  GLES2Loadercontext->glProgramUniformMatrix2x4fvEXT
// GL_APICALL void GL_APIENTRY glProgramUniformMatrix4x2fvEXT (GLuint program,
// GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix4x2fvEXT                                         \
  GLES2Loadercontext->glProgramUniformMatrix4x2fvEXT
// GL_APICALL void GL_APIENTRY glProgramUniformMatrix3x4fvEXT (GLuint program,
// GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix3x4fvEXT                                         \
  GLES2Loadercontext->glProgramUniformMatrix3x4fvEXT
// GL_APICALL void GL_APIENTRY glProgramUniformMatrix4x3fvEXT (GLuint program,
// GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#define GLProgramUniformMatrix4x3fvEXT                                         \
  GLES2Loadercontext->glProgramUniformMatrix4x3fvEXT
// GL_APICALL void GL_APIENTRY glFramebufferFetchBarrierEXT (void);
#define GLFramebufferFetchBarrierEXT                                           \
  GLES2Loadercontext->glFramebufferFetchBarrierEXT
// GL_APICALL void GL_APIENTRY glFramebufferPixelLocalStorageSizeEXT (GLuint
// target, GLsizei size);
#define GLFramebufferPixelLocalStorageSizeEXT                                  \
  GLES2Loadercontext->glFramebufferPixelLocalStorageSizeEXT
// GL_APICALL GLsizei GL_APIENTRY glGetFramebufferPixelLocalStorageSizeEXT
// (GLuint target);
#define GLGetFramebufferPixelLocalStorageSizeEXT                               \
  GLES2Loadercontext->glGetFramebufferPixelLocalStorageSizeEXT
// GL_APICALL void GL_APIENTRY glClearPixelLocalStorageuiEXT (GLsizei offset,
// GLsizei n, const GLuint *values);
#define GLClearPixelLocalStorageuiEXT                                          \
  GLES2Loadercontext->glClearPixelLocalStorageuiEXT
// GL_APICALL void GL_APIENTRY glTexPageCommitmentEXT (GLenum target, GLint
// level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei
// height, GLsizei depth, GLboolean commit);
#define GLTexPageCommitmentEXT GLES2Loadercontext->glTexPageCommitmentEXT
// GL_APICALL void GL_APIENTRY glPatchParameteriEXT (GLenum pname, GLint value);
#define GLPatchParameteriEXT GLES2Loadercontext->glPatchParameteriEXT
// GL_APICALL void GL_APIENTRY glTexParameterIivEXT (GLenum target, GLenum
// pname, const GLint *params);
#define GLTexParameterIivEXT GLES2Loadercontext->glTexParameterIivEXT
// GL_APICALL void GL_APIENTRY glTexParameterIuivEXT (GLenum target, GLenum
// pname, const GLuint *params);
#define GLTexParameterIuivEXT GLES2Loadercontext->glTexParameterIuivEXT
// GL_APICALL void GL_APIENTRY glGetTexParameterIivEXT (GLenum target, GLenum
// pname, GLint *params);
#define GLGetTexParameterIivEXT GLES2Loadercontext->glGetTexParameterIivEXT
// GL_APICALL void GL_APIENTRY glGetTexParameterIuivEXT (GLenum target, GLenum
// pname, GLuint *params);
#define GLGetTexParameterIuivEXT GLES2Loadercontext->glGetTexParameterIuivEXT
// GL_APICALL void GL_APIENTRY glSamplerParameterIivEXT (GLuint sampler, GLenum
// pname, const GLint *param);
#define GLSamplerParameterIivEXT GLES2Loadercontext->glSamplerParameterIivEXT
// GL_APICALL void GL_APIENTRY glSamplerParameterIuivEXT (GLuint sampler, GLenum
// pname, const GLuint *param);
#define GLSamplerParameterIuivEXT GLES2Loadercontext->glSamplerParameterIuivEXT
// GL_APICALL void GL_APIENTRY glGetSamplerParameterIivEXT (GLuint sampler,
// GLenum pname, GLint *params);
#define GLGetSamplerParameterIivEXT                                            \
  GLES2Loadercontext->glGetSamplerParameterIivEXT
// GL_APICALL void GL_APIENTRY glGetSamplerParameterIuivEXT (GLuint sampler,
// GLenum pname, GLuint *params);
#define GLGetSamplerParameterIuivEXT                                           \
  GLES2Loadercontext->glGetSamplerParameterIuivEXT
// GL_APICALL void GL_APIENTRY glTexBufferEXT (GLenum target, GLenum
// internalformat, GLuint buffer);
#define GLTexBufferEXT GLES2Loadercontext->glTexBufferEXT
// GL_APICALL void GL_APIENTRY glTexBufferRangeEXT (GLenum target, GLenum
// internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
#define GLTexBufferRangeEXT GLES2Loadercontext->glTexBufferRangeEXT
// GL_APICALL void GL_APIENTRY glTexStorage1DEXT (GLenum target, GLsizei levels,
// GLenum internalformat, GLsizei width);
#define GLTexStorage1DEXT GLES2Loadercontext->glTexStorage1DEXT
// GL_APICALL void GL_APIENTRY glTexStorage2DEXT (GLenum target, GLsizei levels,
// GLenum internalformat, GLsizei width, GLsizei height);
#define GLTexStorage2DEXT GLES2Loadercontext->glTexStorage2DEXT
// GL_APICALL void GL_APIENTRY glTexStorage3DEXT (GLenum target, GLsizei levels,
// GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
#define GLTexStorage3DEXT GLES2Loadercontext->glTexStorage3DEXT
// GL_APICALL void GL_APIENTRY glTextureStorage1DEXT (GLuint texture, GLenum
// target, GLsizei levels, GLenum internalformat, GLsizei width);
#define GLTextureStorage1DEXT GLES2Loadercontext->glTextureStorage1DEXT
// GL_APICALL void GL_APIENTRY glTextureStorage2DEXT (GLuint texture, GLenum
// target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei
// height);
#define GLTextureStorage2DEXT GLES2Loadercontext->glTextureStorage2DEXT
// GL_APICALL void GL_APIENTRY glTextureStorage3DEXT (GLuint texture, GLenum
// target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height,
// GLsizei depth);
#define GLTextureStorage3DEXT GLES2Loadercontext->glTextureStorage3DEXT
// GL_APICALL void GL_APIENTRY glTexStorageAttribs2DEXT (GLenum target, GLsizei
// levels, GLenum internalformat, GLsizei width, GLsizei height, const GLint*
// attrib_list);
#define GLTexStorageAttribs2DEXT GLES2Loadercontext->glTexStorageAttribs2DEXT
// GL_APICALL void GL_APIENTRY glTexStorageAttribs3DEXT (GLenum target, GLsizei
// levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth,
// const GLint* attrib_list);
#define GLTexStorageAttribs3DEXT GLES2Loadercontext->glTexStorageAttribs3DEXT
// GL_APICALL void GL_APIENTRY glTextureViewEXT (GLuint texture, GLenum target,
// GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels,
// GLuint minlayer, GLuint numlayers);
#define GLTextureViewEXT GLES2Loadercontext->glTextureViewEXT
// GL_APICALL GLboolean GL_APIENTRY glAcquireKeyedMutexWin32EXT (GLuint memory,
// GLuint64 key, GLuint timeout);
#define GLAcquireKeyedMutexWin32EXT                                            \
  GLES2Loadercontext->glAcquireKeyedMutexWin32EXT
// GL_APICALL GLboolean GL_APIENTRY glReleaseKeyedMutexWin32EXT (GLuint memory,
// GLuint64 key);
#define GLReleaseKeyedMutexWin32EXT                                            \
  GLES2Loadercontext->glReleaseKeyedMutexWin32EXT
// GL_APICALL void GL_APIENTRY glWindowRectanglesEXT (GLenum mode, GLsizei
// count, const GLint *box);
#define GLWindowRectanglesEXT GLES2Loadercontext->glWindowRectanglesEXT
// GL_APICALL GLuint64 GL_APIENTRY glGetTextureHandleIMG (GLuint texture);
#define GLGetTextureHandleIMG GLES2Loadercontext->glGetTextureHandleIMG
// GL_APICALL GLuint64 GL_APIENTRY glGetTextureSamplerHandleIMG (GLuint texture,
// GLuint sampler);
#define GLGetTextureSamplerHandleIMG                                           \
  GLES2Loadercontext->glGetTextureSamplerHandleIMG
// GL_APICALL void GL_APIENTRY glUniformHandleui64IMG (GLint location, GLuint64
// value);
#define GLUniformHandleui64IMG GLES2Loadercontext->glUniformHandleui64IMG
// GL_APICALL void GL_APIENTRY glUniformHandleui64vIMG (GLint location, GLsizei
// count, const GLuint64 *value);
#define GLUniformHandleui64vIMG GLES2Loadercontext->glUniformHandleui64vIMG
// GL_APICALL void GL_APIENTRY glProgramUniformHandleui64IMG (GLuint program,
// GLint location, GLuint64 value);
#define GLProgramUniformHandleui64IMG                                          \
  GLES2Loadercontext->glProgramUniformHandleui64IMG
// GL_APICALL void GL_APIENTRY glProgramUniformHandleui64vIMG (GLuint program,
// GLint location, GLsizei count, const GLuint64 *values);
#define GLProgramUniformHandleui64vIMG                                         \
  GLES2Loadercontext->glProgramUniformHandleui64vIMG
// GL_APICALL void GL_APIENTRY glFramebufferTexture2DDownsampleIMG (GLenum
// target, GLenum attachment, GLenum textarget, GLuint texture, GLint level,
// GLint xscale, GLint yscale);
#define GLFramebufferTexture2DDownsampleIMG                                    \
  GLES2Loadercontext->glFramebufferTexture2DDownsampleIMG
// GL_APICALL void GL_APIENTRY glFramebufferTextureLayerDownsampleIMG (GLenum
// target, GLenum attachment, GLuint texture, GLint level, GLint layer, GLint
// xscale, GLint yscale);
#define GLFramebufferTextureLayerDownsampleIMG                                 \
  GLES2Loadercontext->glFramebufferTextureLayerDownsampleIMG
// GL_APICALL void GL_APIENTRY glRenderbufferStorageMultisampleIMG (GLenum
// target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei
// height);
#define GLRenderbufferStorageMultisampleIMG                                    \
  GLES2Loadercontext->glRenderbufferStorageMultisampleIMG
// GL_APICALL void GL_APIENTRY glFramebufferTexture2DMultisampleIMG (GLenum
// target, GLenum attachment, GLenum textarget, GLuint texture, GLint level,
// GLsizei samples);
#define GLFramebufferTexture2DMultisampleIMG                                   \
  GLES2Loadercontext->glFramebufferTexture2DMultisampleIMG
// GL_APICALL void GL_APIENTRY glApplyFramebufferAttachmentCMAAINTEL (void);
#define GLApplyFramebufferAttachmentCMAAINTEL                                  \
  GLES2Loadercontext->glApplyFramebufferAttachmentCMAAINTEL
// GL_APICALL void GL_APIENTRY glBeginPerfQueryINTEL (GLuint queryHandle);
#define GLBeginPerfQueryINTEL GLES2Loadercontext->glBeginPerfQueryINTEL
// GL_APICALL void GL_APIENTRY glCreatePerfQueryINTEL (GLuint queryId, GLuint
// *queryHandle);
#define GLCreatePerfQueryINTEL GLES2Loadercontext->glCreatePerfQueryINTEL
// GL_APICALL void GL_APIENTRY glDeletePerfQueryINTEL (GLuint queryHandle);
#define GLDeletePerfQueryINTEL GLES2Loadercontext->glDeletePerfQueryINTEL
// GL_APICALL void GL_APIENTRY glEndPerfQueryINTEL (GLuint queryHandle);
#define GLEndPerfQueryINTEL GLES2Loadercontext->glEndPerfQueryINTEL
// GL_APICALL void GL_APIENTRY glGetFirstPerfQueryIdINTEL (GLuint *queryId);
#define GLGetFirstPerfQueryIdINTEL                                             \
  GLES2Loadercontext->glGetFirstPerfQueryIdINTEL
// GL_APICALL void GL_APIENTRY glGetNextPerfQueryIdINTEL (GLuint queryId, GLuint
// *nextQueryId);
#define GLGetNextPerfQueryIdINTEL GLES2Loadercontext->glGetNextPerfQueryIdINTEL
// GL_APICALL void GL_APIENTRY glGetPerfCounterInfoINTEL (GLuint queryId, GLuint
// counterId, GLuint counterNameLength, GLchar *counterName, GLuint
// counterDescLength, GLchar *counterDesc, GLuint *counterOffset, GLuint
// *counterDataSize, GLuint *counterTypeEnum, GLuint *counterDataTypeEnum,
// GLuint64 *rawCounterMaxValue);
#define GLGetPerfCounterInfoINTEL GLES2Loadercontext->glGetPerfCounterInfoINTEL
// GL_APICALL void GL_APIENTRY glGetPerfQueryDataINTEL (GLuint queryHandle,
// GLuint flags, GLsizei dataSize, void *data, GLuint *bytesWritten);
#define GLGetPerfQueryDataINTEL GLES2Loadercontext->glGetPerfQueryDataINTEL
// GL_APICALL void GL_APIENTRY glGetPerfQueryIdByNameINTEL (GLchar *queryName,
// GLuint *queryId);
#define GLGetPerfQueryIdByNameINTEL                                            \
  GLES2Loadercontext->glGetPerfQueryIdByNameINTEL
// GL_APICALL void GL_APIENTRY glGetPerfQueryInfoINTEL (GLuint queryId, GLuint
// queryNameLength, GLchar *queryName, GLuint *dataSize, GLuint *noCounters,
// GLuint *noInstances, GLuint *capsMask);
#define GLGetPerfQueryInfoINTEL GLES2Loadercontext->glGetPerfQueryInfoINTEL
// GL_APICALL void GL_APIENTRY glFramebufferParameteriMESA (GLenum target,
// GLenum pname, GLint param);
#define GLFramebufferParameteriMESA                                            \
  GLES2Loadercontext->glFramebufferParameteriMESA
// GL_APICALL void GL_APIENTRY glGetFramebufferParameterivMESA (GLenum target,
// GLenum pname, GLint *params);
#define GLGetFramebufferParameterivMESA                                        \
  GLES2Loadercontext->glGetFramebufferParameterivMESA
// GL_APICALL GLuint64 GL_APIENTRY glGetTextureHandleNV (GLuint texture);
#define GLGetTextureHandleNV GLES2Loadercontext->glGetTextureHandleNV
// GL_APICALL GLuint64 GL_APIENTRY glGetTextureSamplerHandleNV (GLuint texture,
// GLuint sampler);
#define GLGetTextureSamplerHandleNV                                            \
  GLES2Loadercontext->glGetTextureSamplerHandleNV
// GL_APICALL void GL_APIENTRY glMakeTextureHandleResidentNV (GLuint64 handle);
#define GLMakeTextureHandleResidentNV                                          \
  GLES2Loadercontext->glMakeTextureHandleResidentNV
// GL_APICALL void GL_APIENTRY glMakeTextureHandleNonResidentNV (GLuint64
// handle);
#define GLMakeTextureHandleNonResidentNV                                       \
  GLES2Loadercontext->glMakeTextureHandleNonResidentNV
// GL_APICALL GLuint64 GL_APIENTRY glGetImageHandleNV (GLuint texture, GLint
// level, GLboolean layered, GLint layer, GLenum format);
#define GLGetImageHandleNV GLES2Loadercontext->glGetImageHandleNV
// GL_APICALL void GL_APIENTRY glMakeImageHandleResidentNV (GLuint64 handle,
// GLenum access);
#define GLMakeImageHandleResidentNV                                            \
  GLES2Loadercontext->glMakeImageHandleResidentNV
// GL_APICALL void GL_APIENTRY glMakeImageHandleNonResidentNV (GLuint64 handle);
#define GLMakeImageHandleNonResidentNV                                         \
  GLES2Loadercontext->glMakeImageHandleNonResidentNV
// GL_APICALL void GL_APIENTRY glUniformHandleui64NV (GLint location, GLuint64
// value);
#define GLUniformHandleui64NV GLES2Loadercontext->glUniformHandleui64NV
// GL_APICALL void GL_APIENTRY glUniformHandleui64vNV (GLint location, GLsizei
// count, const GLuint64 *value);
#define GLUniformHandleui64vNV GLES2Loadercontext->glUniformHandleui64vNV
// GL_APICALL void GL_APIENTRY glProgramUniformHandleui64NV (GLuint program,
// GLint location, GLuint64 value);
#define GLProgramUniformHandleui64NV                                           \
  GLES2Loadercontext->glProgramUniformHandleui64NV
// GL_APICALL void GL_APIENTRY glProgramUniformHandleui64vNV (GLuint program,
// GLint location, GLsizei count, const GLuint64 *values);
#define GLProgramUniformHandleui64vNV                                          \
  GLES2Loadercontext->glProgramUniformHandleui64vNV
// GL_APICALL GLboolean GL_APIENTRY glIsTextureHandleResidentNV (GLuint64
// handle);
#define GLIsTextureHandleResidentNV                                            \
  GLES2Loadercontext->glIsTextureHandleResidentNV
// GL_APICALL GLboolean GL_APIENTRY glIsImageHandleResidentNV (GLuint64 handle);
#define GLIsImageHandleResidentNV GLES2Loadercontext->glIsImageHandleResidentNV
// GL_APICALL void GL_APIENTRY glBlendParameteriNV (GLenum pname, GLint value);
#define GLBlendParameteriNV GLES2Loadercontext->glBlendParameteriNV
// GL_APICALL void GL_APIENTRY glBlendBarrierNV (void);
#define GLBlendBarrierNV GLES2Loadercontext->glBlendBarrierNV
// GL_APICALL void GL_APIENTRY glViewportPositionWScaleNV (GLuint index, GLfloat
// xcoeff, GLfloat ycoeff);
#define GLViewportPositionWScaleNV                                             \
  GLES2Loadercontext->glViewportPositionWScaleNV
// GL_APICALL void GL_APIENTRY glBeginConditionalRenderNV (GLuint id, GLenum
// mode);
#define GLBeginConditionalRenderNV                                             \
  GLES2Loadercontext->glBeginConditionalRenderNV
// GL_APICALL void GL_APIENTRY glEndConditionalRenderNV (void);
#define GLEndConditionalRenderNV GLES2Loadercontext->glEndConditionalRenderNV
// GL_APICALL void GL_APIENTRY glSubpixelPrecisionBiasNV (GLuint xbits, GLuint
// ybits);
#define GLSubpixelPrecisionBiasNV GLES2Loadercontext->glSubpixelPrecisionBiasNV
// GL_APICALL void GL_APIENTRY glConservativeRasterParameteriNV (GLenum pname,
// GLint param);
#define GLConservativeRasterParameteriNV                                       \
  GLES2Loadercontext->glConservativeRasterParameteriNV
// GL_APICALL void GL_APIENTRY glCopyBufferSubDataNV (GLenum readTarget, GLenum
// writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
#define GLCopyBufferSubDataNV GLES2Loadercontext->glCopyBufferSubDataNV
// GL_APICALL void GL_APIENTRY glCoverageMaskNV (GLboolean mask);
#define GLCoverageMaskNV GLES2Loadercontext->glCoverageMaskNV
// GL_APICALL void GL_APIENTRY glCoverageOperationNV (GLenum operation);
#define GLCoverageOperationNV GLES2Loadercontext->glCoverageOperationNV
// GL_APICALL void GL_APIENTRY glDrawBuffersNV (GLsizei n, const GLenum *bufs);
#define GLDrawBuffersNV GLES2Loadercontext->glDrawBuffersNV
// GL_APICALL void GL_APIENTRY glDrawArraysInstancedNV (GLenum mode, GLint
// first, GLsizei count, GLsizei primcount);
#define GLDrawArraysInstancedNV GLES2Loadercontext->glDrawArraysInstancedNV
// GL_APICALL void GL_APIENTRY glDrawElementsInstancedNV (GLenum mode, GLsizei
// count, GLenum type, const void *indices, GLsizei primcount);
#define GLDrawElementsInstancedNV GLES2Loadercontext->glDrawElementsInstancedNV
// GL_APICALL void GL_APIENTRY glDrawVkImageNV (GLuint64 vkImage, GLuint
// sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat
// s0, GLfloat t0, GLfloat s1, GLfloat t1);
#define GLDrawVkImageNV GLES2Loadercontext->glDrawVkImageNV
// GL_APICALL GLVULKANPROCNV GL_APIENTRY glGetVkProcAddrNV (const GLchar *name);
#define GLGetVkProcAddrNV GLES2Loadercontext->glGetVkProcAddrNV
// GL_APICALL void GL_APIENTRY glWaitVkSemaphoreNV (GLuint64 vkSemaphore);
#define GLWaitVkSemaphoreNV GLES2Loadercontext->glWaitVkSemaphoreNV
// GL_APICALL void GL_APIENTRY glSignalVkSemaphoreNV (GLuint64 vkSemaphore);
#define GLSignalVkSemaphoreNV GLES2Loadercontext->glSignalVkSemaphoreNV
// GL_APICALL void GL_APIENTRY glSignalVkFenceNV (GLuint64 vkFence);
#define GLSignalVkFenceNV GLES2Loadercontext->glSignalVkFenceNV
// GL_APICALL void GL_APIENTRY glDeleteFencesNV (GLsizei n, const GLuint
// *fences);
#define GLDeleteFencesNV GLES2Loadercontext->glDeleteFencesNV
// GL_APICALL void GL_APIENTRY glGenFencesNV (GLsizei n, GLuint *fences);
#define GLGenFencesNV GLES2Loadercontext->glGenFencesNV
// GL_APICALL GLboolean GL_APIENTRY glIsFenceNV (GLuint fence);
#define GLIsFenceNV GLES2Loadercontext->glIsFenceNV
// GL_APICALL GLboolean GL_APIENTRY glTestFenceNV (GLuint fence);
#define GLTestFenceNV GLES2Loadercontext->glTestFenceNV
// GL_APICALL void GL_APIENTRY glGetFenceivNV (GLuint fence, GLenum pname, GLint
// *params);
#define GLGetFenceivNV GLES2Loadercontext->glGetFenceivNV
// GL_APICALL void GL_APIENTRY glFinishFenceNV (GLuint fence);
#define GLFinishFenceNV GLES2Loadercontext->glFinishFenceNV
// GL_APICALL void GL_APIENTRY glSetFenceNV (GLuint fence, GLenum condition);
#define GLSetFenceNV GLES2Loadercontext->glSetFenceNV
// GL_APICALL void GL_APIENTRY glFragmentCoverageColorNV (GLuint color);
#define GLFragmentCoverageColorNV GLES2Loadercontext->glFragmentCoverageColorNV
// GL_APICALL void GL_APIENTRY glBlitFramebufferNV (GLint srcX0, GLint srcY0,
// GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1,
// GLbitfield mask, GLenum filter);
#define GLBlitFramebufferNV GLES2Loadercontext->glBlitFramebufferNV
// GL_APICALL void GL_APIENTRY glCoverageModulationTableNV (GLsizei n, const
// GLfloat *v);
#define GLCoverageModulationTableNV                                            \
  GLES2Loadercontext->glCoverageModulationTableNV
// GL_APICALL void GL_APIENTRY glGetCoverageModulationTableNV (GLsizei bufSize,
// GLfloat *v);
#define GLGetCoverageModulationTableNV                                         \
  GLES2Loadercontext->glGetCoverageModulationTableNV
// GL_APICALL void GL_APIENTRY glCoverageModulationNV (GLenum components);
#define GLCoverageModulationNV GLES2Loadercontext->glCoverageModulationNV
// GL_APICALL void GL_APIENTRY glRenderbufferStorageMultisampleNV (GLenum
// target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei
// height);
#define GLRenderbufferStorageMultisampleNV                                     \
  GLES2Loadercontext->glRenderbufferStorageMultisampleNV
// GL_APICALL void GL_APIENTRY glUniform1i64NV (GLint location, GLint64EXT x);
#define GLUniform1i64NV GLES2Loadercontext->glUniform1i64NV
// GL_APICALL void GL_APIENTRY glUniform2i64NV (GLint location, GLint64EXT x,
// GLint64EXT y);
#define GLUniform2i64NV GLES2Loadercontext->glUniform2i64NV
// GL_APICALL void GL_APIENTRY glUniform3i64NV (GLint location, GLint64EXT x,
// GLint64EXT y, GLint64EXT z);
#define GLUniform3i64NV GLES2Loadercontext->glUniform3i64NV
// GL_APICALL void GL_APIENTRY glUniform4i64NV (GLint location, GLint64EXT x,
// GLint64EXT y, GLint64EXT z, GLint64EXT w);
#define GLUniform4i64NV GLES2Loadercontext->glUniform4i64NV
// GL_APICALL void GL_APIENTRY glUniform1i64vNV (GLint location, GLsizei count,
// const GLint64EXT *value);
#define GLUniform1i64vNV GLES2Loadercontext->glUniform1i64vNV
// GL_APICALL void GL_APIENTRY glUniform2i64vNV (GLint location, GLsizei count,
// const GLint64EXT *value);
#define GLUniform2i64vNV GLES2Loadercontext->glUniform2i64vNV
// GL_APICALL void GL_APIENTRY glUniform3i64vNV (GLint location, GLsizei count,
// const GLint64EXT *value);
#define GLUniform3i64vNV GLES2Loadercontext->glUniform3i64vNV
// GL_APICALL void GL_APIENTRY glUniform4i64vNV (GLint location, GLsizei count,
// const GLint64EXT *value);
#define GLUniform4i64vNV GLES2Loadercontext->glUniform4i64vNV
// GL_APICALL void GL_APIENTRY glUniform1ui64NV (GLint location, GLuint64EXT x);
#define GLUniform1ui64NV GLES2Loadercontext->glUniform1ui64NV
// GL_APICALL void GL_APIENTRY glUniform2ui64NV (GLint location, GLuint64EXT x,
// GLuint64EXT y);
#define GLUniform2ui64NV GLES2Loadercontext->glUniform2ui64NV
// GL_APICALL void GL_APIENTRY glUniform3ui64NV (GLint location, GLuint64EXT x,
// GLuint64EXT y, GLuint64EXT z);
#define GLUniform3ui64NV GLES2Loadercontext->glUniform3ui64NV
// GL_APICALL void GL_APIENTRY glUniform4ui64NV (GLint location, GLuint64EXT x,
// GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
#define GLUniform4ui64NV GLES2Loadercontext->glUniform4ui64NV
// GL_APICALL void GL_APIENTRY glUniform1ui64vNV (GLint location, GLsizei count,
// const GLuint64EXT *value);
#define GLUniform1ui64vNV GLES2Loadercontext->glUniform1ui64vNV
// GL_APICALL void GL_APIENTRY glUniform2ui64vNV (GLint location, GLsizei count,
// const GLuint64EXT *value);
#define GLUniform2ui64vNV GLES2Loadercontext->glUniform2ui64vNV
// GL_APICALL void GL_APIENTRY glUniform3ui64vNV (GLint location, GLsizei count,
// const GLuint64EXT *value);
#define GLUniform3ui64vNV GLES2Loadercontext->glUniform3ui64vNV
// GL_APICALL void GL_APIENTRY glUniform4ui64vNV (GLint location, GLsizei count,
// const GLuint64EXT *value);
#define GLUniform4ui64vNV GLES2Loadercontext->glUniform4ui64vNV
// GL_APICALL void GL_APIENTRY glGetUniformi64vNV (GLuint program, GLint
// location, GLint64EXT *params);
#define GLGetUniformi64vNV GLES2Loadercontext->glGetUniformi64vNV
// GL_APICALL void GL_APIENTRY glProgramUniform1i64NV (GLuint program, GLint
// location, GLint64EXT x);
#define GLProgramUniform1i64NV GLES2Loadercontext->glProgramUniform1i64NV
// GL_APICALL void GL_APIENTRY glProgramUniform2i64NV (GLuint program, GLint
// location, GLint64EXT x, GLint64EXT y);
#define GLProgramUniform2i64NV GLES2Loadercontext->glProgramUniform2i64NV
// GL_APICALL void GL_APIENTRY glProgramUniform3i64NV (GLuint program, GLint
// location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
#define GLProgramUniform3i64NV GLES2Loadercontext->glProgramUniform3i64NV
// GL_APICALL void GL_APIENTRY glProgramUniform4i64NV (GLuint program, GLint
// location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
#define GLProgramUniform4i64NV GLES2Loadercontext->glProgramUniform4i64NV
// GL_APICALL void GL_APIENTRY glProgramUniform1i64vNV (GLuint program, GLint
// location, GLsizei count, const GLint64EXT *value);
#define GLProgramUniform1i64vNV GLES2Loadercontext->glProgramUniform1i64vNV
// GL_APICALL void GL_APIENTRY glProgramUniform2i64vNV (GLuint program, GLint
// location, GLsizei count, const GLint64EXT *value);
#define GLProgramUniform2i64vNV GLES2Loadercontext->glProgramUniform2i64vNV
// GL_APICALL void GL_APIENTRY glProgramUniform3i64vNV (GLuint program, GLint
// location, GLsizei count, const GLint64EXT *value);
#define GLProgramUniform3i64vNV GLES2Loadercontext->glProgramUniform3i64vNV
// GL_APICALL void GL_APIENTRY glProgramUniform4i64vNV (GLuint program, GLint
// location, GLsizei count, const GLint64EXT *value);
#define GLProgramUniform4i64vNV GLES2Loadercontext->glProgramUniform4i64vNV
// GL_APICALL void GL_APIENTRY glProgramUniform1ui64NV (GLuint program, GLint
// location, GLuint64EXT x);
#define GLProgramUniform1ui64NV GLES2Loadercontext->glProgramUniform1ui64NV
// GL_APICALL void GL_APIENTRY glProgramUniform2ui64NV (GLuint program, GLint
// location, GLuint64EXT x, GLuint64EXT y);
#define GLProgramUniform2ui64NV GLES2Loadercontext->glProgramUniform2ui64NV
// GL_APICALL void GL_APIENTRY glProgramUniform3ui64NV (GLuint program, GLint
// location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
#define GLProgramUniform3ui64NV GLES2Loadercontext->glProgramUniform3ui64NV
// GL_APICALL void GL_APIENTRY glProgramUniform4ui64NV (GLuint program, GLint
// location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
#define GLProgramUniform4ui64NV GLES2Loadercontext->glProgramUniform4ui64NV
// GL_APICALL void GL_APIENTRY glProgramUniform1ui64vNV (GLuint program, GLint
// location, GLsizei count, const GLuint64EXT *value);
#define GLProgramUniform1ui64vNV GLES2Loadercontext->glProgramUniform1ui64vNV
// GL_APICALL void GL_APIENTRY glProgramUniform2ui64vNV (GLuint program, GLint
// location, GLsizei count, const GLuint64EXT *value);
#define GLProgramUniform2ui64vNV GLES2Loadercontext->glProgramUniform2ui64vNV
// GL_APICALL void GL_APIENTRY glProgramUniform3ui64vNV (GLuint program, GLint
// location, GLsizei count, const GLuint64EXT *value);
#define GLProgramUniform3ui64vNV GLES2Loadercontext->glProgramUniform3ui64vNV
// GL_APICALL void GL_APIENTRY glProgramUniform4ui64vNV (GLuint program, GLint
// location, GLsizei count, const GLuint64EXT *value);
#define GLProgramUniform4ui64vNV GLES2Loadercontext->glProgramUniform4ui64vNV
// GL_APICALL void GL_APIENTRY glVertexAttribDivisorNV (GLuint index, GLuint
// divisor);
#define GLVertexAttribDivisorNV GLES2Loadercontext->glVertexAttribDivisorNV
// GL_APICALL void GL_APIENTRY glGetInternalformatSampleivNV (GLenum target,
// GLenum internalformat, GLsizei samples, GLenum pname, GLsizei count, GLint
// *params);
#define GLGetInternalformatSampleivNV                                          \
  GLES2Loadercontext->glGetInternalformatSampleivNV
// GL_APICALL void GL_APIENTRY glGetMemoryObjectDetachedResourcesuivNV (GLuint
// memory, GLenum pname, GLint first, GLsizei count, GLuint *params);
#define GLGetMemoryObjectDetachedResourcesuivNV                                \
  GLES2Loadercontext->glGetMemoryObjectDetachedResourcesuivNV
// GL_APICALL void GL_APIENTRY glResetMemoryObjectParameterNV (GLuint memory,
// GLenum pname);
#define GLResetMemoryObjectParameterNV                                         \
  GLES2Loadercontext->glResetMemoryObjectParameterNV
// GL_APICALL void GL_APIENTRY glTexAttachMemoryNV (GLenum target, GLuint
// memory, GLuint64 offset);
#define GLTexAttachMemoryNV GLES2Loadercontext->glTexAttachMemoryNV
// GL_APICALL void GL_APIENTRY glBufferAttachMemoryNV (GLenum target, GLuint
// memory, GLuint64 offset);
#define GLBufferAttachMemoryNV GLES2Loadercontext->glBufferAttachMemoryNV
// GL_APICALL void GL_APIENTRY glTextureAttachMemoryNV (GLuint texture, GLuint
// memory, GLuint64 offset);
#define GLTextureAttachMemoryNV GLES2Loadercontext->glTextureAttachMemoryNV
// GL_APICALL void GL_APIENTRY glNamedBufferAttachMemoryNV (GLuint buffer,
// GLuint memory, GLuint64 offset);
#define GLNamedBufferAttachMemoryNV                                            \
  GLES2Loadercontext->glNamedBufferAttachMemoryNV
// GL_APICALL void GL_APIENTRY glBufferPageCommitmentMemNV (GLenum target,
// GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset,
// GLboolean commit);
#define GLBufferPageCommitmentMemNV                                            \
  GLES2Loadercontext->glBufferPageCommitmentMemNV
// GL_APICALL void GL_APIENTRY glTexPageCommitmentMemNV (GLenum target, GLint
// layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei
// width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset,
// GLboolean commit);
#define GLTexPageCommitmentMemNV GLES2Loadercontext->glTexPageCommitmentMemNV
// GL_APICALL void GL_APIENTRY glNamedBufferPageCommitmentMemNV (GLuint buffer,
// GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset,
// GLboolean commit);
#define GLNamedBufferPageCommitmentMemNV                                       \
  GLES2Loadercontext->glNamedBufferPageCommitmentMemNV
// GL_APICALL void GL_APIENTRY glTexturePageCommitmentMemNV (GLuint texture,
// GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset,
// GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset,
// GLboolean commit);
#define GLTexturePageCommitmentMemNV                                           \
  GLES2Loadercontext->glTexturePageCommitmentMemNV
// GL_APICALL void GL_APIENTRY glDrawMeshTasksNV (GLuint first, GLuint count);
#define GLDrawMeshTasksNV GLES2Loadercontext->glDrawMeshTasksNV
// GL_APICALL void GL_APIENTRY glDrawMeshTasksIndirectNV (GLintptr indirect);
#define GLDrawMeshTasksIndirectNV GLES2Loadercontext->glDrawMeshTasksIndirectNV
// GL_APICALL void GL_APIENTRY glMultiDrawMeshTasksIndirectNV (GLintptr
// indirect, GLsizei drawcount, GLsizei stride);
#define GLMultiDrawMeshTasksIndirectNV                                         \
  GLES2Loadercontext->glMultiDrawMeshTasksIndirectNV
// GL_APICALL void GL_APIENTRY glMultiDrawMeshTasksIndirectCountNV (GLintptr
// indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
#define GLMultiDrawMeshTasksIndirectCountNV                                    \
  GLES2Loadercontext->glMultiDrawMeshTasksIndirectCountNV
// GL_APICALL void GL_APIENTRY glUniformMatrix2x3fvNV (GLint location, GLsizei
// count, GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix2x3fvNV GLES2Loadercontext->glUniformMatrix2x3fvNV
// GL_APICALL void GL_APIENTRY glUniformMatrix3x2fvNV (GLint location, GLsizei
// count, GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix3x2fvNV GLES2Loadercontext->glUniformMatrix3x2fvNV
// GL_APICALL void GL_APIENTRY glUniformMatrix2x4fvNV (GLint location, GLsizei
// count, GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix2x4fvNV GLES2Loadercontext->glUniformMatrix2x4fvNV
// GL_APICALL void GL_APIENTRY glUniformMatrix4x2fvNV (GLint location, GLsizei
// count, GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix4x2fvNV GLES2Loadercontext->glUniformMatrix4x2fvNV
// GL_APICALL void GL_APIENTRY glUniformMatrix3x4fvNV (GLint location, GLsizei
// count, GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix3x4fvNV GLES2Loadercontext->glUniformMatrix3x4fvNV
// GL_APICALL void GL_APIENTRY glUniformMatrix4x3fvNV (GLint location, GLsizei
// count, GLboolean transpose, const GLfloat *value);
#define GLUniformMatrix4x3fvNV GLES2Loadercontext->glUniformMatrix4x3fvNV
// GL_APICALL GLuint GL_APIENTRY glGenPathsNV (GLsizei range);
#define GLGenPathsNV GLES2Loadercontext->glGenPathsNV
// GL_APICALL void GL_APIENTRY glDeletePathsNV (GLuint path, GLsizei range);
#define GLDeletePathsNV GLES2Loadercontext->glDeletePathsNV
// GL_APICALL GLboolean GL_APIENTRY glIsPathNV (GLuint path);
#define GLIsPathNV GLES2Loadercontext->glIsPathNV
// GL_APICALL void GL_APIENTRY glPathCommandsNV (GLuint path, GLsizei
// numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType,
// const void *coords);
#define GLPathCommandsNV GLES2Loadercontext->glPathCommandsNV
// GL_APICALL void GL_APIENTRY glPathCoordsNV (GLuint path, GLsizei numCoords,
// GLenum coordType, const void *coords);
#define GLPathCoordsNV GLES2Loadercontext->glPathCoordsNV
// GL_APICALL void GL_APIENTRY glPathSubCommandsNV (GLuint path, GLsizei
// commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte
// *commands, GLsizei numCoords, GLenum coordType, const void *coords);
#define GLPathSubCommandsNV GLES2Loadercontext->glPathSubCommandsNV
// GL_APICALL void GL_APIENTRY glPathSubCoordsNV (GLuint path, GLsizei
// coordStart, GLsizei numCoords, GLenum coordType, const void *coords);
#define GLPathSubCoordsNV GLES2Loadercontext->glPathSubCoordsNV
// GL_APICALL void GL_APIENTRY glPathStringNV (GLuint path, GLenum format,
// GLsizei length, const void *pathString);
#define GLPathStringNV GLES2Loadercontext->glPathStringNV
// GL_APICALL void GL_APIENTRY glPathGlyphsNV (GLuint firstPathName, GLenum
// fontTarget, const void *fontName, GLbitfield fontStyle, GLsizei numGlyphs,
// GLenum type, const void *charcodes, GLenum handleMissingGlyphs, GLuint
// pathParameterTemplate, GLfloat emScale);
#define GLPathGlyphsNV GLES2Loadercontext->glPathGlyphsNV
// GL_APICALL void GL_APIENTRY glPathGlyphRangeNV (GLuint firstPathName, GLenum
// fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyph,
// GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate,
// GLfloat emScale);
#define GLPathGlyphRangeNV GLES2Loadercontext->glPathGlyphRangeNV
// GL_APICALL void GL_APIENTRY glWeightPathsNV (GLuint resultPath, GLsizei
// numPaths, const GLuint *paths, const GLfloat *weights);
#define GLWeightPathsNV GLES2Loadercontext->glWeightPathsNV
// GL_APICALL void GL_APIENTRY glCopyPathNV (GLuint resultPath, GLuint srcPath);
#define GLCopyPathNV GLES2Loadercontext->glCopyPathNV
// GL_APICALL void GL_APIENTRY glInterpolatePathsNV (GLuint resultPath, GLuint
// pathA, GLuint pathB, GLfloat weight);
#define GLInterpolatePathsNV GLES2Loadercontext->glInterpolatePathsNV
// GL_APICALL void GL_APIENTRY glTransformPathNV (GLuint resultPath, GLuint
// srcPath, GLenum transformType, const GLfloat *transformValues);
#define GLTransformPathNV GLES2Loadercontext->glTransformPathNV
// GL_APICALL void GL_APIENTRY glPathParameterivNV (GLuint path, GLenum pname,
// const GLint *value);
#define GLPathParameterivNV GLES2Loadercontext->glPathParameterivNV
// GL_APICALL void GL_APIENTRY glPathParameteriNV (GLuint path, GLenum pname,
// GLint value);
#define GLPathParameteriNV GLES2Loadercontext->glPathParameteriNV
// GL_APICALL void GL_APIENTRY glPathParameterfvNV (GLuint path, GLenum pname,
// const GLfloat *value);
#define GLPathParameterfvNV GLES2Loadercontext->glPathParameterfvNV
// GL_APICALL void GL_APIENTRY glPathParameterfNV (GLuint path, GLenum pname,
// GLfloat value);
#define GLPathParameterfNV GLES2Loadercontext->glPathParameterfNV
// GL_APICALL void GL_APIENTRY glPathDashArrayNV (GLuint path, GLsizei
// dashCount, const GLfloat *dashArray);
#define GLPathDashArrayNV GLES2Loadercontext->glPathDashArrayNV
// GL_APICALL void GL_APIENTRY glPathStencilFuncNV (GLenum func, GLint ref,
// GLuint mask);
#define GLPathStencilFuncNV GLES2Loadercontext->glPathStencilFuncNV
// GL_APICALL void GL_APIENTRY glPathStencilDepthOffsetNV (GLfloat factor,
// GLfloat units);
#define GLPathStencilDepthOffsetNV                                             \
  GLES2Loadercontext->glPathStencilDepthOffsetNV
// GL_APICALL void GL_APIENTRY glStencilFillPathNV (GLuint path, GLenum
// fillMode, GLuint mask);
#define GLStencilFillPathNV GLES2Loadercontext->glStencilFillPathNV
// GL_APICALL void GL_APIENTRY glStencilStrokePathNV (GLuint path, GLint
// reference, GLuint mask);
#define GLStencilStrokePathNV GLES2Loadercontext->glStencilStrokePathNV
// GL_APICALL void GL_APIENTRY glStencilFillPathInstancedNV (GLsizei numPaths,
// GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode,
// GLuint mask, GLenum transformType, const GLfloat *transformValues);
#define GLStencilFillPathInstancedNV                                           \
  GLES2Loadercontext->glStencilFillPathInstancedNV
// GL_APICALL void GL_APIENTRY glStencilStrokePathInstancedNV (GLsizei numPaths,
// GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference,
// GLuint mask, GLenum transformType, const GLfloat *transformValues);
#define GLStencilStrokePathInstancedNV                                         \
  GLES2Loadercontext->glStencilStrokePathInstancedNV
// GL_APICALL void GL_APIENTRY glPathCoverDepthFuncNV (GLenum func);
#define GLPathCoverDepthFuncNV GLES2Loadercontext->glPathCoverDepthFuncNV
// GL_APICALL void GL_APIENTRY glCoverFillPathNV (GLuint path, GLenum
// coverMode);
#define GLCoverFillPathNV GLES2Loadercontext->glCoverFillPathNV
// GL_APICALL void GL_APIENTRY glCoverStrokePathNV (GLuint path, GLenum
// coverMode);
#define GLCoverStrokePathNV GLES2Loadercontext->glCoverStrokePathNV
// GL_APICALL void GL_APIENTRY glCoverFillPathInstancedNV (GLsizei numPaths,
// GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode,
// GLenum transformType, const GLfloat *transformValues);
#define GLCoverFillPathInstancedNV                                             \
  GLES2Loadercontext->glCoverFillPathInstancedNV
// GL_APICALL void GL_APIENTRY glCoverStrokePathInstancedNV (GLsizei numPaths,
// GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode,
// GLenum transformType, const GLfloat *transformValues);
#define GLCoverStrokePathInstancedNV                                           \
  GLES2Loadercontext->glCoverStrokePathInstancedNV
// GL_APICALL void GL_APIENTRY glGetPathParameterivNV (GLuint path, GLenum
// pname, GLint *value);
#define GLGetPathParameterivNV GLES2Loadercontext->glGetPathParameterivNV
// GL_APICALL void GL_APIENTRY glGetPathParameterfvNV (GLuint path, GLenum
// pname, GLfloat *value);
#define GLGetPathParameterfvNV GLES2Loadercontext->glGetPathParameterfvNV
// GL_APICALL void GL_APIENTRY glGetPathCommandsNV (GLuint path, GLubyte
// *commands);
#define GLGetPathCommandsNV GLES2Loadercontext->glGetPathCommandsNV
// GL_APICALL void GL_APIENTRY glGetPathCoordsNV (GLuint path, GLfloat *coords);
#define GLGetPathCoordsNV GLES2Loadercontext->glGetPathCoordsNV
// GL_APICALL void GL_APIENTRY glGetPathDashArrayNV (GLuint path, GLfloat
// *dashArray);
#define GLGetPathDashArrayNV GLES2Loadercontext->glGetPathDashArrayNV
// GL_APICALL void GL_APIENTRY glGetPathMetricsNV (GLbitfield metricQueryMask,
// GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase,
// GLsizei stride, GLfloat *metrics);
#define GLGetPathMetricsNV GLES2Loadercontext->glGetPathMetricsNV
// GL_APICALL void GL_APIENTRY glGetPathMetricRangeNV (GLbitfield
// metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride,
// GLfloat *metrics);
#define GLGetPathMetricRangeNV GLES2Loadercontext->glGetPathMetricRangeNV
// GL_APICALL void GL_APIENTRY glGetPathSpacingNV (GLenum pathListMode, GLsizei
// numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLfloat
// advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat
// *returnedSpacing);
#define GLGetPathSpacingNV GLES2Loadercontext->glGetPathSpacingNV
// GL_APICALL GLboolean GL_APIENTRY glIsPointInFillPathNV (GLuint path, GLuint
// mask, GLfloat x, GLfloat y);
#define GLIsPointInFillPathNV GLES2Loadercontext->glIsPointInFillPathNV
// GL_APICALL GLboolean GL_APIENTRY glIsPointInStrokePathNV (GLuint path,
// GLfloat x, GLfloat y);
#define GLIsPointInStrokePathNV GLES2Loadercontext->glIsPointInStrokePathNV
// GL_APICALL GLfloat GL_APIENTRY glGetPathLengthNV (GLuint path, GLsizei
// startSegment, GLsizei numSegments);
#define GLGetPathLengthNV GLES2Loadercontext->glGetPathLengthNV
// GL_APICALL GLboolean GL_APIENTRY glPointAlongPathNV (GLuint path, GLsizei
// startSegment, GLsizei numSegments, GLfloat distance, GLfloat *x, GLfloat *y,
// GLfloat *tangentX, GLfloat *tangentY);
#define GLPointAlongPathNV GLES2Loadercontext->glPointAlongPathNV
// GL_APICALL void GL_APIENTRY glMatrixLoad3x2fNV (GLenum matrixMode, const
// GLfloat *m);
#define GLMatrixLoad3x2fNV GLES2Loadercontext->glMatrixLoad3x2fNV
// GL_APICALL void GL_APIENTRY glMatrixLoad3x3fNV (GLenum matrixMode, const
// GLfloat *m);
#define GLMatrixLoad3x3fNV GLES2Loadercontext->glMatrixLoad3x3fNV
// GL_APICALL void GL_APIENTRY glMatrixLoadTranspose3x3fNV (GLenum matrixMode,
// const GLfloat *m);
#define GLMatrixLoadTranspose3x3fNV                                            \
  GLES2Loadercontext->glMatrixLoadTranspose3x3fNV
// GL_APICALL void GL_APIENTRY glMatrixMult3x2fNV (GLenum matrixMode, const
// GLfloat *m);
#define GLMatrixMult3x2fNV GLES2Loadercontext->glMatrixMult3x2fNV
// GL_APICALL void GL_APIENTRY glMatrixMult3x3fNV (GLenum matrixMode, const
// GLfloat *m);
#define GLMatrixMult3x3fNV GLES2Loadercontext->glMatrixMult3x3fNV
// GL_APICALL void GL_APIENTRY glMatrixMultTranspose3x3fNV (GLenum matrixMode,
// const GLfloat *m);
#define GLMatrixMultTranspose3x3fNV                                            \
  GLES2Loadercontext->glMatrixMultTranspose3x3fNV
// GL_APICALL void GL_APIENTRY glStencilThenCoverFillPathNV (GLuint path, GLenum
// fillMode, GLuint mask, GLenum coverMode);
#define GLStencilThenCoverFillPathNV                                           \
  GLES2Loadercontext->glStencilThenCoverFillPathNV
// GL_APICALL void GL_APIENTRY glStencilThenCoverStrokePathNV (GLuint path,
// GLint reference, GLuint mask, GLenum coverMode);
#define GLStencilThenCoverStrokePathNV                                         \
  GLES2Loadercontext->glStencilThenCoverStrokePathNV
// GL_APICALL void GL_APIENTRY glStencilThenCoverFillPathInstancedNV (GLsizei
// numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum
// fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat
// *transformValues);
#define GLStencilThenCoverFillPathInstancedNV                                  \
  GLES2Loadercontext->glStencilThenCoverFillPathInstancedNV
// GL_APICALL void GL_APIENTRY glStencilThenCoverStrokePathInstancedNV (GLsizei
// numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint
// reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat
// *transformValues);
#define GLStencilThenCoverStrokePathInstancedNV                                \
  GLES2Loadercontext->glStencilThenCoverStrokePathInstancedNV
// GL_APICALL GLenum GL_APIENTRY glPathGlyphIndexRangeNV (GLenum fontTarget,
// const void *fontName, GLbitfield fontStyle, GLuint pathParameterTemplate,
// GLfloat emScale, GLuint *baseAndCount);
#define GLPathGlyphIndexRangeNV GLES2Loadercontext->glPathGlyphIndexRangeNV
// GL_APICALL GLenum GL_APIENTRY glPathGlyphIndexArrayNV (GLuint firstPathName,
// GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint
// firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat
// emScale);
#define GLPathGlyphIndexArrayNV GLES2Loadercontext->glPathGlyphIndexArrayNV
// GL_APICALL GLenum GL_APIENTRY glPathMemoryGlyphIndexArrayNV (GLuint
// firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void *fontData,
// GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint
// pathParameterTemplate, GLfloat emScale);
#define GLPathMemoryGlyphIndexArrayNV                                          \
  GLES2Loadercontext->glPathMemoryGlyphIndexArrayNV
// GL_APICALL void GL_APIENTRY glProgramPathFragmentInputGenNV (GLuint program,
// GLint location, GLenum genMode, GLint components, const GLfloat *coeffs);
#define GLProgramPathFragmentInputGenNV                                        \
  GLES2Loadercontext->glProgramPathFragmentInputGenNV
// GL_APICALL void GL_APIENTRY glGetProgramResourcefvNV (GLuint program, GLenum
// programInterface, GLuint index, GLsizei propCount, const GLenum *props,
// GLsizei count, GLsizei *length, GLfloat *params);
#define GLGetProgramResourcefvNV GLES2Loadercontext->glGetProgramResourcefvNV
// GL_APICALL void GL_APIENTRY glMatrixFrustumEXT (GLenum mode, GLdouble left,
// GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble
// zFar);
#define GLMatrixFrustumEXT GLES2Loadercontext->glMatrixFrustumEXT
// GL_APICALL void GL_APIENTRY glMatrixLoadIdentityEXT (GLenum mode);
#define GLMatrixLoadIdentityEXT GLES2Loadercontext->glMatrixLoadIdentityEXT
// GL_APICALL void GL_APIENTRY glMatrixLoadTransposefEXT (GLenum mode, const
// GLfloat *m);
#define GLMatrixLoadTransposefEXT GLES2Loadercontext->glMatrixLoadTransposefEXT
// GL_APICALL void GL_APIENTRY glMatrixLoadTransposedEXT (GLenum mode, const
// GLdouble *m);
#define GLMatrixLoadTransposedEXT GLES2Loadercontext->glMatrixLoadTransposedEXT
// GL_APICALL void GL_APIENTRY glMatrixLoadfEXT (GLenum mode, const GLfloat *m);
#define GLMatrixLoadfEXT GLES2Loadercontext->glMatrixLoadfEXT
// GL_APICALL void GL_APIENTRY glMatrixLoaddEXT (GLenum mode, const GLdouble
// *m);
#define GLMatrixLoaddEXT GLES2Loadercontext->glMatrixLoaddEXT
// GL_APICALL void GL_APIENTRY glMatrixMultTransposefEXT (GLenum mode, const
// GLfloat *m);
#define GLMatrixMultTransposefEXT GLES2Loadercontext->glMatrixMultTransposefEXT
// GL_APICALL void GL_APIENTRY glMatrixMultTransposedEXT (GLenum mode, const
// GLdouble *m);
#define GLMatrixMultTransposedEXT GLES2Loadercontext->glMatrixMultTransposedEXT
// GL_APICALL void GL_APIENTRY glMatrixMultfEXT (GLenum mode, const GLfloat *m);
#define GLMatrixMultfEXT GLES2Loadercontext->glMatrixMultfEXT
// GL_APICALL void GL_APIENTRY glMatrixMultdEXT (GLenum mode, const GLdouble
// *m);
#define GLMatrixMultdEXT GLES2Loadercontext->glMatrixMultdEXT
// GL_APICALL void GL_APIENTRY glMatrixOrthoEXT (GLenum mode, GLdouble left,
// GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble
// zFar);
#define GLMatrixOrthoEXT GLES2Loadercontext->glMatrixOrthoEXT
// GL_APICALL void GL_APIENTRY glMatrixPopEXT (GLenum mode);
#define GLMatrixPopEXT GLES2Loadercontext->glMatrixPopEXT
// GL_APICALL void GL_APIENTRY glMatrixPushEXT (GLenum mode);
#define GLMatrixPushEXT GLES2Loadercontext->glMatrixPushEXT
// GL_APICALL void GL_APIENTRY glMatrixRotatefEXT (GLenum mode, GLfloat angle,
// GLfloat x, GLfloat y, GLfloat z);
#define GLMatrixRotatefEXT GLES2Loadercontext->glMatrixRotatefEXT
// GL_APICALL void GL_APIENTRY glMatrixRotatedEXT (GLenum mode, GLdouble angle,
// GLdouble x, GLdouble y, GLdouble z);
#define GLMatrixRotatedEXT GLES2Loadercontext->glMatrixRotatedEXT
// GL_APICALL void GL_APIENTRY glMatrixScalefEXT (GLenum mode, GLfloat x,
// GLfloat y, GLfloat z);
#define GLMatrixScalefEXT GLES2Loadercontext->glMatrixScalefEXT
// GL_APICALL void GL_APIENTRY glMatrixScaledEXT (GLenum mode, GLdouble x,
// GLdouble y, GLdouble z);
#define GLMatrixScaledEXT GLES2Loadercontext->glMatrixScaledEXT
// GL_APICALL void GL_APIENTRY glMatrixTranslatefEXT (GLenum mode, GLfloat x,
// GLfloat y, GLfloat z);
#define GLMatrixTranslatefEXT GLES2Loadercontext->glMatrixTranslatefEXT
// GL_APICALL void GL_APIENTRY glMatrixTranslatedEXT (GLenum mode, GLdouble x,
// GLdouble y, GLdouble z);
#define GLMatrixTranslatedEXT GLES2Loadercontext->glMatrixTranslatedEXT
// GL_APICALL void GL_APIENTRY glPolygonModeNV (GLenum face, GLenum mode);
#define GLPolygonModeNV GLES2Loadercontext->glPolygonModeNV
// GL_APICALL void GL_APIENTRY glReadBufferNV (GLenum mode);
#define GLReadBufferNV GLES2Loadercontext->glReadBufferNV
// GL_APICALL void GL_APIENTRY glFramebufferSampleLocationsfvNV (GLenum target,
// GLuint start, GLsizei count, const GLfloat *v);
#define GLFramebufferSampleLocationsfvNV                                       \
  GLES2Loadercontext->glFramebufferSampleLocationsfvNV
// GL_APICALL void GL_APIENTRY glNamedFramebufferSampleLocationsfvNV (GLuint
// framebuffer, GLuint start, GLsizei count, const GLfloat *v);
#define GLNamedFramebufferSampleLocationsfvNV                                  \
  GLES2Loadercontext->glNamedFramebufferSampleLocationsfvNV
// GL_APICALL void GL_APIENTRY glResolveDepthValuesNV (void);
#define GLResolveDepthValuesNV GLES2Loadercontext->glResolveDepthValuesNV
// GL_APICALL void GL_APIENTRY glScissorExclusiveNV (GLint x, GLint y, GLsizei
// width, GLsizei height);
#define GLScissorExclusiveNV GLES2Loadercontext->glScissorExclusiveNV
// GL_APICALL void GL_APIENTRY glScissorExclusiveArrayvNV (GLuint first, GLsizei
// count, const GLint *v);
#define GLScissorExclusiveArrayvNV                                             \
  GLES2Loadercontext->glScissorExclusiveArrayvNV
// GL_APICALL void GL_APIENTRY glBindShadingRateImageNV (GLuint texture);
#define GLBindShadingRateImageNV GLES2Loadercontext->glBindShadingRateImageNV
// GL_APICALL void GL_APIENTRY glGetShadingRateImagePaletteNV (GLuint viewport,
// GLuint entry, GLenum *rate);
#define GLGetShadingRateImagePaletteNV                                         \
  GLES2Loadercontext->glGetShadingRateImagePaletteNV
// GL_APICALL void GL_APIENTRY glGetShadingRateSampleLocationivNV (GLenum rate,
// GLuint samples, GLuint index, GLint *location);
#define GLGetShadingRateSampleLocationivNV                                     \
  GLES2Loadercontext->glGetShadingRateSampleLocationivNV
// GL_APICALL void GL_APIENTRY glShadingRateImageBarrierNV (GLboolean
// synchronize);
#define GLShadingRateImageBarrierNV                                            \
  GLES2Loadercontext->glShadingRateImageBarrierNV
// GL_APICALL void GL_APIENTRY glShadingRateImagePaletteNV (GLuint viewport,
// GLuint first, GLsizei count, const GLenum *rates);
#define GLShadingRateImagePaletteNV                                            \
  GLES2Loadercontext->glShadingRateImagePaletteNV
// GL_APICALL void GL_APIENTRY glShadingRateSampleOrderNV (GLenum order);
#define GLShadingRateSampleOrderNV                                             \
  GLES2Loadercontext->glShadingRateSampleOrderNV
// GL_APICALL void GL_APIENTRY glShadingRateSampleOrderCustomNV (GLenum rate,
// GLuint samples, const GLint *locations);
#define GLShadingRateSampleOrderCustomNV                                       \
  GLES2Loadercontext->glShadingRateSampleOrderCustomNV
// GL_APICALL void GL_APIENTRY glCreateSemaphoresNV (GLsizei n, GLuint
// *semaphores);
#define GLCreateSemaphoresNV GLES2Loadercontext->glCreateSemaphoresNV
// GL_APICALL void GL_APIENTRY glSemaphoreParameterivNV (GLuint semaphore,
// GLenum pname, const GLint *params);
#define GLSemaphoreParameterivNV GLES2Loadercontext->glSemaphoreParameterivNV
// GL_APICALL void GL_APIENTRY glGetSemaphoreParameterivNV (GLuint semaphore,
// GLenum pname, GLint *params);
#define GLGetSemaphoreParameterivNV                                            \
  GLES2Loadercontext->glGetSemaphoreParameterivNV
// GL_APICALL void GL_APIENTRY glViewportArrayvNV (GLuint first, GLsizei count,
// const GLfloat *v);
#define GLViewportArrayvNV GLES2Loadercontext->glViewportArrayvNV
// GL_APICALL void GL_APIENTRY glViewportIndexedfNV (GLuint index, GLfloat x,
// GLfloat y, GLfloat w, GLfloat h);
#define GLViewportIndexedfNV GLES2Loadercontext->glViewportIndexedfNV
// GL_APICALL void GL_APIENTRY glViewportIndexedfvNV (GLuint index, const
// GLfloat *v);
#define GLViewportIndexedfvNV GLES2Loadercontext->glViewportIndexedfvNV
// GL_APICALL void GL_APIENTRY glScissorArrayvNV (GLuint first, GLsizei count,
// const GLint *v);
#define GLScissorArrayvNV GLES2Loadercontext->glScissorArrayvNV
// GL_APICALL void GL_APIENTRY glScissorIndexedNV (GLuint index, GLint left,
// GLint bottom, GLsizei width, GLsizei height);
#define GLScissorIndexedNV GLES2Loadercontext->glScissorIndexedNV
// GL_APICALL void GL_APIENTRY glScissorIndexedvNV (GLuint index, const GLint
// *v);
#define GLScissorIndexedvNV GLES2Loadercontext->glScissorIndexedvNV
// GL_APICALL void GL_APIENTRY glDepthRangeArrayfvNV (GLuint first, GLsizei
// count, const GLfloat *v);
#define GLDepthRangeArrayfvNV GLES2Loadercontext->glDepthRangeArrayfvNV
// GL_APICALL void GL_APIENTRY glDepthRangeIndexedfNV (GLuint index, GLfloat n,
// GLfloat f);
#define GLDepthRangeIndexedfNV GLES2Loadercontext->glDepthRangeIndexedfNV
// GL_APICALL void GL_APIENTRY glGetFloati_vNV (GLenum target, GLuint index,
// GLfloat *data);
#define GLGetFloati_vNV GLES2Loadercontext->glGetFloati_vNV
// GL_APICALL void GL_APIENTRY glEnableiNV (GLenum target, GLuint index);
#define GLEnableiNV GLES2Loadercontext->glEnableiNV
// GL_APICALL void GL_APIENTRY glDisableiNV (GLenum target, GLuint index);
#define GLDisableiNV GLES2Loadercontext->glDisableiNV
// GL_APICALL GLboolean GL_APIENTRY glIsEnablediNV (GLenum target, GLuint
// index);
#define GLIsEnablediNV GLES2Loadercontext->glIsEnablediNV
// GL_APICALL void GL_APIENTRY glViewportSwizzleNV (GLuint index, GLenum
// swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew);
#define GLViewportSwizzleNV GLES2Loadercontext->glViewportSwizzleNV
// GL_APICALL void GL_APIENTRY glFramebufferTextureMultiviewOVR (GLenum target,
// GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei
// numViews);
#define GLFramebufferTextureMultiviewOVR                                       \
  GLES2Loadercontext->glFramebufferTextureMultiviewOVR
// GL_APICALL void GL_APIENTRY glFramebufferTextureMultisampleMultiviewOVR
// (GLenum target, GLenum attachment, GLuint texture, GLint level, GLsizei
// samples, GLint baseViewIndex, GLsizei numViews);
#define GLFramebufferTextureMultisampleMultiviewOVR                            \
  GLES2Loadercontext->glFramebufferTextureMultisampleMultiviewOVR
// GL_APICALL void GL_APIENTRY glAlphaFuncQCOM (GLenum func, GLclampf ref);
#define GLAlphaFuncQCOM GLES2Loadercontext->glAlphaFuncQCOM
// GL_APICALL void GL_APIENTRY glGetDriverControlsQCOM (GLint *num, GLsizei
// size, GLuint *driverControls);
#define GLGetDriverControlsQCOM GLES2Loadercontext->glGetDriverControlsQCOM
// GL_APICALL void GL_APIENTRY glGetDriverControlStringQCOM (GLuint
// driverControl, GLsizei bufSize, GLsizei *length, GLchar
// *driverControlString);
#define GLGetDriverControlStringQCOM                                           \
  GLES2Loadercontext->glGetDriverControlStringQCOM
// GL_APICALL void GL_APIENTRY glEnableDriverControlQCOM (GLuint driverControl);
#define GLEnableDriverControlQCOM GLES2Loadercontext->glEnableDriverControlQCOM
// GL_APICALL void GL_APIENTRY glDisableDriverControlQCOM (GLuint
// driverControl);
#define GLDisableDriverControlQCOM                                             \
  GLES2Loadercontext->glDisableDriverControlQCOM
// GL_APICALL void GL_APIENTRY glExtGetTexturesQCOM (GLuint *textures, GLint
// maxTextures, GLint *numTextures);
#define GLExtGetTexturesQCOM GLES2Loadercontext->glExtGetTexturesQCOM
// GL_APICALL void GL_APIENTRY glExtGetBuffersQCOM (GLuint *buffers, GLint
// maxBuffers, GLint *numBuffers);
#define GLExtGetBuffersQCOM GLES2Loadercontext->glExtGetBuffersQCOM
// GL_APICALL void GL_APIENTRY glExtGetRenderbuffersQCOM (GLuint *renderbuffers,
// GLint maxRenderbuffers, GLint *numRenderbuffers);
#define GLExtGetRenderbuffersQCOM GLES2Loadercontext->glExtGetRenderbuffersQCOM
// GL_APICALL void GL_APIENTRY glExtGetFramebuffersQCOM (GLuint *framebuffers,
// GLint maxFramebuffers, GLint *numFramebuffers);
#define GLExtGetFramebuffersQCOM GLES2Loadercontext->glExtGetFramebuffersQCOM
// GL_APICALL void GL_APIENTRY glExtGetTexLevelParameterivQCOM (GLuint texture,
// GLenum face, GLint level, GLenum pname, GLint *params);
#define GLExtGetTexLevelParameterivQCOM                                        \
  GLES2Loadercontext->glExtGetTexLevelParameterivQCOM
// GL_APICALL void GL_APIENTRY glExtTexObjectStateOverrideiQCOM (GLenum target,
// GLenum pname, GLint param);
#define GLExtTexObjectStateOverrideiQCOM                                       \
  GLES2Loadercontext->glExtTexObjectStateOverrideiQCOM
// GL_APICALL void GL_APIENTRY glExtGetTexSubImageQCOM (GLenum target, GLint
// level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei
// height, GLsizei depth, GLenum format, GLenum type, void *texels);
#define GLExtGetTexSubImageQCOM GLES2Loadercontext->glExtGetTexSubImageQCOM
// GL_APICALL void GL_APIENTRY glExtGetBufferPointervQCOM (GLenum target, void
// **params);
#define GLExtGetBufferPointervQCOM                                             \
  GLES2Loadercontext->glExtGetBufferPointervQCOM
// GL_APICALL void GL_APIENTRY glExtGetShadersQCOM (GLuint *shaders, GLint
// maxShaders, GLint *numShaders);
#define GLExtGetShadersQCOM GLES2Loadercontext->glExtGetShadersQCOM
// GL_APICALL void GL_APIENTRY glExtGetProgramsQCOM (GLuint *programs, GLint
// maxPrograms, GLint *numPrograms);
#define GLExtGetProgramsQCOM GLES2Loadercontext->glExtGetProgramsQCOM
// GL_APICALL GLboolean GL_APIENTRY glExtIsProgramBinaryQCOM (GLuint program);
#define GLExtIsProgramBinaryQCOM GLES2Loadercontext->glExtIsProgramBinaryQCOM
// GL_APICALL void GL_APIENTRY glExtGetProgramBinarySourceQCOM (GLuint program,
// GLenum shadertype, GLchar *source, GLint *length);
#define GLExtGetProgramBinarySourceQCOM                                        \
  GLES2Loadercontext->glExtGetProgramBinarySourceQCOM
// GL_APICALL void GL_APIENTRY glExtrapolateTex2DQCOM (GLuint src1, GLuint src2,
// GLuint output, GLfloat scaleFactor);
#define GLExtrapolateTex2DQCOM GLES2Loadercontext->glExtrapolateTex2DQCOM
// GL_APICALL void GL_APIENTRY glFramebufferFoveationConfigQCOM (GLuint
// framebuffer, GLuint numLayers, GLuint focalPointsPerLayer, GLuint
// requestedFeatures, GLuint *providedFeatures);
#define GLFramebufferFoveationConfigQCOM                                       \
  GLES2Loadercontext->glFramebufferFoveationConfigQCOM
// GL_APICALL void GL_APIENTRY glFramebufferFoveationParametersQCOM (GLuint
// framebuffer, GLuint layer, GLuint focalPoint, GLfloat focalX, GLfloat focalY,
// GLfloat gainX, GLfloat gainY, GLfloat foveaArea);
#define GLFramebufferFoveationParametersQCOM                                   \
  GLES2Loadercontext->glFramebufferFoveationParametersQCOM
// GL_APICALL void GL_APIENTRY glTexEstimateMotionQCOM (GLuint ref, GLuint
// target, GLuint output);
#define GLTexEstimateMotionQCOM GLES2Loadercontext->glTexEstimateMotionQCOM
// GL_APICALL void GL_APIENTRY glTexEstimateMotionRegionsQCOM (GLuint ref,
// GLuint target, GLuint output, GLuint mask);
#define GLTexEstimateMotionRegionsQCOM                                         \
  GLES2Loadercontext->glTexEstimateMotionRegionsQCOM
// GL_APICALL void GL_APIENTRY glFramebufferFetchBarrierQCOM (void);
#define GLFramebufferFetchBarrierQCOM                                          \
  GLES2Loadercontext->glFramebufferFetchBarrierQCOM
// GL_APICALL void GL_APIENTRY glShadingRateQCOM (GLenum rate);
#define GLShadingRateQCOM GLES2Loadercontext->glShadingRateQCOM
// GL_APICALL void GL_APIENTRY glTextureFoveationParametersQCOM (GLuint texture,
// GLuint layer, GLuint focalPoint, GLfloat focalX, GLfloat focalY, GLfloat
// gainX, GLfloat gainY, GLfloat foveaArea);
#define GLTextureFoveationParametersQCOM                                       \
  GLES2Loadercontext->glTextureFoveationParametersQCOM
// GL_APICALL void GL_APIENTRY glStartTilingQCOM (GLuint x, GLuint y, GLuint
// width, GLuint height, GLbitfield preserveMask);
#define GLStartTilingQCOM GLES2Loadercontext->glStartTilingQCOM
// GL_APICALL void GL_APIENTRY glEndTilingQCOM (GLbitfield preserveMask);
#define GLEndTilingQCOM GLES2Loadercontext->glEndTilingQCOM
