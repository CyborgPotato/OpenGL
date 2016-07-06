#ifndef UDGL_M_VECS
#define UDGL_M_VECS

/*----------------------------*/
/*        Byte Vectors        */
/*----------------------------*/
typedef struct VECTOR_2_B {
	union {
		struct {
			GLbyte x;
			GLbyte y;
		};
		GLbyte v[2];
	};
} vec2b;

typedef struct VECTOR_3_B {
	union {
		struct {
			GLbyte x;
			GLbyte y;
			GLbyte z;
		};
		GLbyte v[3];
	};
} vec3b;

typedef struct VECTOR_4_B {
	union {
		struct {
			GLbyte x;
			GLbyte y;
			GLbyte z;
			GLbyte w;
		};
		GLbyte v[4];
	};
} vec4b;

/*Unsigned Byte Vectors*/

typedef struct VECTOR_2_UB {
	union {
		struct {
			GLubyte x;
			GLubyte y;
		};
		GLubyte v[2];
	};
} vec2ub;

typedef struct VECTOR_3_UB {
	union {
		struct {
			GLubyte x;
			GLubyte y;
			GLubyte z;
		};
		GLubyte v[3];
	};
} vec3ub;

typedef struct VECTOR_4_UB {
	union {
		struct {
			GLubyte x;
			GLubyte y;
			GLubyte z;
			GLubyte w;
		};
		GLubyte v[4];
	};
} vec4ub;

/*----------------------------*/
/*        Int Vectors         */
/*----------------------------*/
typedef struct VECTOR_2_I {
	union {
		struct {
			GLint x;
			GLint y;
		};
		GLint v[2];
	};
} vec2i;

typedef struct VECTOR_3_I {
	union {
		struct {
			GLint x;
			GLint y;
			GLint z;
		};
		GLint v[3];
	};
} vec3i;

typedef struct VECTOR_4_I {
	union {
		struct {
			GLint x;
			GLint y;
			GLint z;
			GLint w;
		};
		GLint v[4];
	};
} vec4i;

/*----------------------------*/
/*       Float Vectors        */
/*----------------------------*/
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
#endif // !UDGL_M_VECS

