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
	glColor3f (1.0, 1.0, 1.0);
	
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
	glColor3f (0.87, 0.87, 0.87);
	
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
	glColor3f (0.65, 0.0, 0.0);
	
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
	glColor3f (0.52, 0.0, 0.0);
	
	glBegin(GL_POLYGON);
	
	glVertex2d(x1,y1);
	glVertex2d(x2,y2);
	glVertex2d(x3,y3);
	glVertex2d(x4,y4);
	
	glEnd();

	glFlush();
}

void rectangle5(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	glColor3f (0.32, 0.00, 0.00);
	
	glBegin(GL_POLYGON);
	
	glVertex2d(x1,y1);
	glVertex2d(x2,y2);
	glVertex2d(x3,y3);
	glVertex2d(x4,y4);
	
	glEnd();

	glFlush();
}


void midPoint(int xc, int yc, int r){

	glColor3f (0.86, 0.0, 0.0);

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

	// circle
	midPoint(0,450,280);

	// inbar0d
	rectangle2(-215,190,215,190,215,210,-215,210);
	rectangle2(-215,390,215,390,215,410,-215,410);
	rectangle2(-215,590,215,590,215,610,-215,610);

	// inbar0u
	rectangle2(-210,740,210,740,210,760,-210,760);

	// inbar-1
	rectangle2(-445,150,-315,110,-315,130,-445,170);
	rectangle2(-445,350,-315,310,-315,330,-445,370);

	// inbar1
	rectangle2(445,150,315,110,315,130,445,170);
	rectangle2(445,350,315,310,315,330,445,370);

	// inbar-2
	rectangle2(-695,100,-545,75,-545,95,-695,120);
	rectangle2(-695,275,-545,250,-545,270,-695,295);

	// inbar2
	rectangle2(695,100,545,75,545,95,695,120);
	rectangle2(695,275,545,250,545,270,695,295);

	// col0d
	rectangle(-15,0,15,0,15,600,-15,600);
	rectangle(-215,0,-165,0,-165,600,-215,600);
	rectangle(165,0,215,0,215,600,165,600);

	// col0u
	rectangle(-15,600,15,600,8,920,-8,920);
	rectangle(-215,600,-165,600,-200,920,-235,920);
	rectangle(165,600,215,600,235,920,200,920);
	
	// bar0
	rectangle(-220,900,220,900,225,920,-225,920);

	// col-1
	rectangle(-340,0,-315,0,-315,575,-340,575);
	rectangle(-445,0,-420,0,-420,600,-445,620);

	// bar-1
	rectangle(-445,595,-315,550,-315,575,-445,620);

	// col1
	rectangle(340,0,315,0,315,575,340,575);
	rectangle(445,0,420,0,420,600,445,620);

	// bar1
	rectangle(445,595,315,550,315,575,445,620);

	// col-2
	rectangle(-570,0,-545,0,-545,425,-570,425);
	rectangle(-695,0,-670,0,-670,450,-695,450);

	// bar-2
	rectangle(-695,425,-545,400,-545,425,-695,450);

	// col2
	rectangle(570,0,545,0,545,425,570,425);
	rectangle(695,0,670,0,670,450,695,450);

	// bar2
	rectangle(695,425,545,400,545,425,695,450);

	// base1
	rectangle3(-775,0,775,0,775,-50,-775,-50);

	// base2
	rectangle4(-825,-50,825,-50,825,-100,-825,-100);

	// base3
	rectangle5(-855,-100,855,-100,855,-150,-855,-150);
}

void init (void){
	
	glClearColor (0.0, 0.0, 0.0, 0.0);
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-1000,1000,-800,1300);		//fix the windows size
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