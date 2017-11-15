#include "math.h"
#include <windows.h>                              // Header File For Windows
#include <GL\glew.h>
#include <gl\gl.h>  
#include <glm\glm.hpp>
#include "ShapeMaker.h"

GLfloat rot;
//bool    keys[256];

void Update()
{
	TakeInput();
	DrawShape();
}

//int DrawShape(GLvoid)
//{
//	
//}

void TakeInput()
{
	//if( WM_KEYDOWN)                        // Is A Key Being Held Down?
	//{
	//	keys[wParam] = TRUE;                    // If So, Mark It As TRUE
	//	return 0;                       // Jump Back
	//}

}

void DrawShape()
{

	glTranslatef(1.5f, 0.0f, -6.0f);
	glRotatef(rot, 0.0f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLES);                      //Draw a triangle
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);					// Top
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);					// Bottom Left
	glVertex3f(1.0f, -1.0f, 0.0f);					// Bottom Right
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);					// Top
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(0.0f, -1.0f, -1.0f);					// Bottom Left
	glVertex3f(0.0f, -1.0f, 1.0f);
	glEnd();
		
	glEnd();
	rot += 2;
}

