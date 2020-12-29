#include<stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

int rund(double x) { return ((int)(x*10))%10>5?(int)++x:(int)x; }

void axes()
{
	glColor3f (1.0, 0.0, 0.0);
	
	glBegin(GL_POINTS);
	
	for(int i=-1000;i<=1000;i++){
		glVertex2d(0,i);
		glVertex2d(i,0);
	}

	glEnd();

	glFlush();
}

void rectangle1(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	glColor3f (0.63, 0.65, 0.69);
	
	glBegin(GL_POLYGON);
	
	glVertex2d(x1,y1);
	glVertex2d(x2,y2);
	glVertex2d(x3,y3);
	glVertex2d(x4,y4);
	
	glEnd();

	glFlush();
}

void rectangle2(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	glColor3f (0.76,0.53,0.59);
	
	glBegin(GL_POLYGON);
	
	glVertex2d(x1,y1);
	glVertex2d(x2,y2);
	glVertex2d(x3,y3);
	glVertex2d(x4,y4);
	
	glEnd();

	glFlush();
}

void rectangle3(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	glColor3f (0.77,0.88,0.94);
	
	glBegin(GL_POLYGON);
	
	glVertex2d(x1,y1);
	glVertex2d(x2,y2);
	glVertex2d(x3,y3);
	glVertex2d(x4,y4);
	
	glEnd();

	glFlush();
}

void rectangle4(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	glColor3f (0.91,0.62,0.45);
	
	glBegin(GL_POLYGON);
	
	glVertex2d(x1,y1);
	glVertex2d(x2,y2);
	glVertex2d(x3,y3);
	glVertex2d(x4,y4);
	
	glEnd();

	glFlush();
}

void triangle1(int x1, int y1, int x2, int y2, int x3, int y3)
{
	glColor3f (0.63, 0.65, 0.69);
	
	glBegin(GL_TRIANGLES);
	
	glVertex2d(x1,y1);
	glVertex2d(x2,y2);
	glVertex2d(x3,y3);
	
	glEnd();
	
	glFlush();
}

void triangle2(int x1, int y1, int x2, int y2, int x3, int y3)
{
	glColor3f (0.76,0.53,0.59);
	
	glBegin(GL_TRIANGLES);
	
	glVertex2d(x1,y1);
	glVertex2d(x2,y2);
	glVertex2d(x3,y3);
	
	glEnd();
	
	glFlush();
}

void triangle3(int x1, int y1, int x2, int y2, int x3, int y3)
{
	glColor3f (0.77,0.88,0.94);
	
	glBegin(GL_TRIANGLES);
	
	glVertex2d(x1,y1);
	glVertex2d(x2,y2);
	glVertex2d(x3,y3);
	
	glEnd();
	
	glFlush();
}

void triangle4(int x1, int y1, int x2, int y2, int x3, int y3)
{
	glColor3f (0.91,0.62,0.45);
	
	glBegin(GL_TRIANGLES);
	
	glVertex2d(x1,y1);
	glVertex2d(x2,y2);
	glVertex2d(x3,y3);
	
	glEnd();
	
	glFlush();
}

void display(void)
{
	glClear (GL_COLOR_BUFFER_BIT);
	
	axes();
	rectangle1(-100,250,100,250,100,450,-100,450);
	rectangle2(250,-100,450,-100,450,100,250,100);
	rectangle3(-100,-250,100,-250,100,-450,-100,-450);
	rectangle4(-250,-100,-450,-100,-450,100,-250,100);

	triangle1(-100,450,100,450,0,700);
	triangle1(100,250,100,450,350,350);
	triangle1(-100,250,100,250,0,0);
	triangle1(-100,250,-100,450,-350,350);

	triangle2(250,100,450,100,350,350);
	triangle2(450,100,450,-100,700,0);
	triangle2(250,-100,450,-100,350,-350);
	triangle2(250,100,250,-100,0,0);

	triangle3(-100,-250,100,-250,0,0);
	triangle3(100,-250,100,-450,350,-350);
	triangle3(-100,-450,100,-450,0,-700);
	triangle3(-100,-250,-100,-450,-350,-350);
	
	triangle4(-250,100,-450,100,-350,350);
	triangle4(-250,100,-250,-100,0,0);
	triangle4(-250,-100,-450,-100,-350,-350);
	triangle4(-450,100,-450,-100,-700,0);
}

void init (void){
	
	glClearColor (0.0, 0.0, 0.0, 0.0);
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-1000,1000,-1000,1000);		//fix the windows size
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (1000, 1000);
	glutInitWindowPosition (50, 50);
	glutCreateWindow ("172-15-9804");
	init ();
	glutDisplayFunc(display);
	glutMainLoop();
	
	return 0;
}