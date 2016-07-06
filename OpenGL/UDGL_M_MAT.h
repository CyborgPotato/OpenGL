#ifndef UDGL_M_MAT
#define UDGL_M_MAT

#define mat2(mType,vType) typedef struct { \
								union { \
									struct { \
										 vec2##mType r[2];\
									}; \
									vType m[2][2]; \
								}; \
							} mat2##mType
#define mat2x3(mType,vType) typedef struct { \
								union { \
									struct { \
										 vec3##mType r[2];\
									}; \
									vType m[2][3]; \
								}; \
							} mat2x3##mType
#define mat2x4(mType,vType) typedef struct { \
								union { \
									struct { \
										 vec4##mType r[2];\
									}; \
									vType m[2][4]; \
								}; \
							} mat2x4##mType
#define mat3(mType,vType) typedef struct { \
								union { \
									struct { \
										 vec3##mType r[3];\
									}; \
									vType m[3][3]; \
								}; \
							} mat3##mType
#define mat3x2(mType,vType) typedef struct { \
								union { \
									struct { \
										 vec2##mType r[3];\
									}; \
									vType m[3][2]; \
								}; \
							} mat3x2##mType
#define mat3x4(mType,vType) typedef struct { \
								union { \
									struct { \
										 vec4##mType r[3];\
									}; \
									vType m[3][4]; \
								}; \
							} mat3x4##mType
#define mat4(mType,vType) typedef struct { \
								union { \
									struct { \
										 vec4##mType r[4];\
									}; \
									vType m[4][4]; \
								}; \
							} mat4##mType
#define mat4x2(mType,vType) typedef struct { \
								union { \
									struct { \
										 vec2##mType r[4];\
									}; \
									vType m[4][2]; \
								}; \
							} mat4x2##mType
#define mat4x3(mType,vType) typedef struct { \
								union { \
									struct { \
										 vec3##mType r[4];\
									}; \
									vType m[4][3]; \
								}; \
							} mat4x3##mType
/*----------------------------*/
/*       Byte Matrices        */
/*----------------------------*/
mat2(b,GLbyte);
mat2x3(b, GLbyte);
mat2x4(b, GLbyte);
mat3(b, GLbyte);
mat3x2(b, GLbyte);
mat3x4(b, GLbyte);
mat4(b, GLbyte);
mat4x2(b, GLbyte);
mat4x3(b, GLbyte);

mat2(ub, GLubyte);
mat2x3(ub, GLubyte);
mat2x4(ub, GLubyte);
mat3(ub, GLubyte);
mat3x2(ub, GLubyte);
mat3x4(ub, GLubyte);
mat4(ub, GLubyte);
mat4x2(ub, GLubyte);
mat4x3(ub, GLubyte);

mat2(i, GLint);
mat2x3(i, GLint);
mat2x4(i, GLint);
mat3(i, GLint);
mat3x2(i, GLint);
mat3x4(i, GLint);
mat4(i, GLint);
mat4x2(i, GLint);
mat4x3(i, GLint);

mat2(f, GLfloat);
mat2x3(f, GLfloat);
mat2x4(f, GLfloat);
mat3(f, GLfloat);
mat3x2(f, GLfloat);
mat3x4(f, GLfloat);
mat4(f, GLfloat);
mat4x2(f, GLfloat);
mat4x3(f, GLfloat);

#endif // !UDGL_M_MAT

