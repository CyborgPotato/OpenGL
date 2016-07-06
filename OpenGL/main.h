#ifndef MAIN_H
#define MAIN_H 1
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "UDGL_M.h"
#include <stdlib.h>
#include <stdio.h>

void libInit(GLFWwindow* window) {
	

	glewExperimental = GL_TRUE;
	GLenum err = glewInit();
	if (err != GLEW_OK)
	{
		//Problem: glewInit failed, something is seriously wrong.
		printf("Glew Init Error\n%s\n",glewGetErrorString(err));
	}
	printf("Current Version : %s",glGetString(GL_VERSION));
}

#endif // MAIN_H
