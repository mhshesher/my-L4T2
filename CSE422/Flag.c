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

void rectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	glColor3f (0.0, 0.40, 0.28);
	
	glBegin(GL_POLYGON);
	
	glVertex2d(x1,y1);
	glVertex2d(x2,y2);
	glVertex2d(x3,y3);
	glVertex2d(x4,y4);
	
	glEnd();

	glFlush();
}

void midPoint(int xc, int yc, int r){

	glColor3f (0.85,0.16,0.11);

	int x0=0, y0=r, p0=1-r;
	int ax0[1111], ay0[1111];
	int idx0=0;
	ax0[idx0]=x0;
	ay0[idx0++]=y0;
	while(1){
		if(p0<0){
			x0++; p0=p0+(2*x0)+1;
		}
		else{
			x0++; y0--; p0=p0+(2*x0)+1-2*y0;
		}
		ax0[idx0]=x0; ay0[idx0++]=y0;
		if(x0>=y0) break;
	}

	glBegin(GL_POLYGON);
	int tx0,ty0;
	for(int i=0;i<idx0;i++){
		tx0=ax0[i]*(-1); ty0=ay0[i]*(-1);
		glVertex2d(ax0[i]+xc,ay0[i]+yc);
		glVertex2d(tx0+xc,ay0[i]+yc);
		glVertex2d(ax0[i]+xc,ty0+yc);
		glVertex2d(tx0+xc,ty0+yc);
		glVertex2d(ay0[i]+xc,ax0[i]+yc);
		glVertex2d(ty0+xc,ax0[i]+yc);
		glVertex2d(ay0[i]+xc,tx0+yc);
		glVertex2d(ty0+xc,tx0+yc);
	}
	glEnd();

	glFlush();
}


void display(void)
{
	glClear (GL_COLOR_BUFFER_BIT);
	
	// axes();
	rectangle(-400,0,400,0,400,480,-400,480);
	midPoint(-40,240,160);
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