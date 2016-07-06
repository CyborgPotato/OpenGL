#include "main.h"

int main(void)
{
	GLFWwindow* window;
	if (!glfwInit()) exit(-1);
	window = glfwCreateWindow(1920, 1080, "OGL Func", NULL, NULL);
	if (!window) { glfwTerminate(); exit(-1); }

	glfwMakeContextCurrent(window);
	libInit(window);

	vec3f point[3] = { {-1.f,-1.f,0.f}, {0,1.f,0.0f}, {1.f,-1.f,0.0f} };

	GLuint VBO;
	glGenBuffers(1,&VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(point), point, GL_STATIC_DRAW);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);

	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0.5f, 0.0f, 1.0f,1.0f);

		glDrawArrays(GL_TRIANGLES, 0, 3);

		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}