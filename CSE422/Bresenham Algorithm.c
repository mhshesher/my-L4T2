// problem: Draw a line with endpoints (120,290) and (430,350) using Bresenham's line Algorithm

#include<stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

// int x1, y1, x2, y2;
// int a, b, c, d;

void display(void)
{
	glClear (GL_COLOR_BUFFER_BIT);
	
	// drawing axes
	glColor3f (1.0, 0.0, 0.0);
	glBegin(GL_POINTS);
	for(int i=-50;i<=450;i++){
		glVertex2d(0,i);
		glVertex2d(i,0);
	}


	// implementation of the algorithm
	glColor3f (1.0, 1.0, 1.0);

	int a=120, b=290, c=430, d=350;
	int dy=d-b;
	int dx=c-a;
	int diff1=2*dy-2*dx;
	int p0=2*dy-dx;
	int p=p0;
	int x=a, y=b;

	glBegin(GL_POINTS);
	glVertex2d(x,y);
	while(1){
		if(p>=0){
			x++;
			y++;
			p=p+diff1;
		}
		else{
			x++;
			p=p+2*dy;
		}

		glVertex2d(x,y);

		if(x==c && y==d) break;
	}



	glEnd();

	glFlush ();
}

void init (void){
	
	glClearColor (0.0, 0.0, 0.0, 0.0);
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-100,600,-100,600);		//fix the windows size
}

int main(int argc, char** argv)
{

	// scanf("%d %d %d %d",&a,&b,&c,&d);

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