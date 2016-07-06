#ifndef UDGL_M
#define UDGL_M

#include <GL/glew.h>

typedef struct VECTOR_2_F {
	union {
		struct {
			GLfloat x;
			GLfloat y;
		};
		GLfloat v[2];
	};
} vec2f;

typedef struct VECTOR_3_F {
	union {
		struct {
			GLfloat x;
			GLfloat y;
			GLfloat z;
		};
		GLfloat v[3];
	};
} vec3f;

typedef struct VECTOR_4_F {
	union {
		struct {
			GLfloat x;
			GLfloat y;
			GLfloat z;
			GLfloat w;
		};
		GLfloat v[4];
	};
} vec4f;

vec3f cvec3f(GLfloat x, GLfloat y, GLfloat z) {
	vec3f t;
	t.x = x;
	t.y = y;
	t.z = z;
	return t;
}

#endif // !UDGL_M
