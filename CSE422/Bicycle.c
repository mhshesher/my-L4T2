#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void display(void)
{
	glClear (GL_COLOR_BUFFER_BIT);

	// left wheel outer circle 1
	glColor3f (1.0, 1.0, 1.0);
	int x0=0, y0=200, p0=1-y0;
	int xc=-400, yc=0;
	// xc=0;
	// yc=0;
	int ax0[1111], ay0[1111];
	int ax[111], ay[111];
	int idx=0;
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
		// ax0[idx0]=x0+xc; ay0[idx0++]=y0+yc;
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

		if(i==0 || i==47 || i==93){
			ax[idx]=ax0[i]+xc;
			ay[idx++]=ay0[i]+yc;
			ax[idx]=tx0+xc;
			ay[idx++]=ay0[i]+yc;
			ax[idx]=ax0[i]+xc;
			ay[idx++]=ty0+yc;
			ax[idx]=tx0+xc;
			ay[idx++]=ty0+yc;
			
			ax[idx]=ay0[i]+xc;
			ay[idx++]=ax0[i]+yc;
			ax[idx]=ty0+xc;
			ay[idx++]=ax0[i]+yc;
			ax[idx]=ay0[i]+xc;
			ay[idx++]=tx0+yc;
			ax[idx]=ty0+xc;
			ay[idx++]=tx0+yc;
		}
	}
	glEnd();

	// left wheel outer circle 2
	glColor3f (0.66, 0.66, 0.66);
	x0=0, y0=180, p0=1-y0;
	xc=-400, yc=0;
	// xc=0;
	// yc=0;
	ax0[1111], ay0[1111];
	idx0=0;
	ax0[idx0]=x0;
	ay0[idx0++]=y0;
	while(1){
		if(p0<0){
			x0++; p0=p0+(2*x0)+1;
		}
		else{
			x0++; y0--; p0=p0+(2*x0)+1-2*y0;
		}
		// ax0[idx0]=x0+xc; ay0[idx0++]=y0+yc;
		ax0[idx0]=x0; ay0[idx0++]=y0;
		if(x0>=y0) break;
	}

	glBegin(GL_POLYGON);
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

	// left wheel outer circle 3
	glColor3f (0.0, 0.0, 0.0);
	x0=0, y0=170, p0=1-y0;
	xc=-400, yc=0;
	// xc=0;
	// yc=0;
	ax0[1111], ay0[1111];
	idx0=0;
	ax0[idx0]=x0;
	ay0[idx0++]=y0;
	while(1){
		if(p0<0){
			x0++; p0=p0+(2*x0)+1;
		}
		else{
			x0++; y0--; p0=p0+(2*x0)+1-2*y0;
		}
		// ax0[idx0]=x0+xc; ay0[idx0++]=y0+yc;
		ax0[idx0]=x0; ay0[idx0++]=y0;
		if(x0>=y0) break;
	}

	glBegin(GL_POLYGON);
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

	// left wheel center circle
	glColor3f (0.66, 0.66, 0.66);
	x0=0, y0=35, p0=1-y0;
	xc=-400, yc=0;
	// xc=0;
	// yc=0;
	ax0[1111], ay0[1111];
	idx0=0;
	ax0[idx0]=x0;
	ay0[idx0++]=y0;
	while(1){
		if(p0<0){
			x0++; p0=p0+(2*x0)+1;
		}
		else{
			x0++; y0--; p0=p0+(2*x0)+1-2*y0;
		}
		// ax0[idx0]=x0+xc; ay0[idx0++]=y0+yc;
		ax0[idx0]=x0; ay0[idx0++]=y0;
		if(x0>=y0) break;
	}

	glBegin(GL_POLYGON);
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

	// right wheel outer circle 1
	glColor3f (1.0, 1.0, 1.0);
	x0=0, y0=200, p0=1-y0;
	xc=400, yc=0;
	// xc=0;
	// yc=0;
	ax0[1111], ay0[1111];
	idx0=0;
	ax0[idx0]=x0;
	ay0[idx0++]=y0;
	while(1){
		if(p0<0){
			x0++; p0=p0+(2*x0)+1;
		}
		else{
			x0++; y0--; p0=p0+(2*x0)+1-2*y0;
		}
		// ax0[idx0]=x0+xc; ay0[idx0++]=y0+yc;
		ax0[idx0]=x0; ay0[idx0++]=y0;
		if(x0>=y0) break;
	}

	glBegin(GL_POLYGON);
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

	// right wheel outer circle 2
	glColor3f (0.66, 0.66, 0.66);
	x0=0, y0=180, p0=1-y0;
	xc=400, yc=0;
	// xc=0;
	// yc=0;
	ax0[1111], ay0[1111];
	idx0=0;
	ax0[idx0]=x0;
	ay0[idx0++]=y0;
	while(1){
		if(p0<0){
			x0++; p0=p0+(2*x0)+1;
		}
		else{
			x0++; y0--; p0=p0+(2*x0)+1-2*y0;
		}
		// ax0[idx0]=x0+xc; ay0[idx0++]=y0+yc;
		ax0[idx0]=x0; ay0[idx0++]=y0;
		if(x0>=y0) break;
	}

	glBegin(GL_POLYGON);
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

	// right wheel outer circle 3
	glColor3f (0.0, 0.0, 0.0);
	x0=0, y0=170, p0=1-y0;
	xc=400, yc=0;
	// xc=0;
	// yc=0;
	ax0[1111], ay0[1111];
	idx0=0;
	ax0[idx0]=x0;
	ay0[idx0++]=y0;
	while(1){
		if(p0<0){
			x0++; p0=p0+(2*x0)+1;
		}
		else{
			x0++; y0--; p0=p0+(2*x0)+1-2*y0;
		}
		// ax0[idx0]=x0+xc; ay0[idx0++]=y0+yc;
		ax0[idx0]=x0; ay0[idx0++]=y0;
		if(x0>=y0) break;
	}

	glBegin(GL_POLYGON);
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

	// right wheel center circle
	glColor3f (0.66, 0.66, 0.66);
	x0=0, y0=35, p0=1-y0;
	xc=400, yc=0;
	// xc=0;
	// yc=0;
	ax0[1111], ay0[1111];
	idx0=0;
	ax0[idx0]=x0;
	ay0[idx0++]=y0;
	while(1){
		if(p0<0){
			x0++; p0=p0+(2*x0)+1;
		}
		else{
			x0++; y0--; p0=p0+(2*x0)+1-2*y0;
		}
		// ax0[idx0]=x0+xc; ay0[idx0++]=y0+yc;
		ax0[idx0]=x0; ay0[idx0++]=y0;
		if(x0>=y0) break;
	}

	glBegin(GL_POLYGON);
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

	// left line
	glColor3f (1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(-408,0);
	glVertex2d(-128,300);
	glVertex2d(-143,300);
	glVertex2d(-393,0);
	glEnd();

	// mid left line
	glColor3f (1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(-8,0);
	glVertex2d(7,0);
	glVertex2d(-128,300);
	glVertex2d(-143,300);
	glEnd();

	// mid right line
	glColor3f (1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(-8,0);
	glVertex2d(7,0);
	glVertex2d(335,300);
	glVertex2d(320,300);
	glEnd();

	// right line
	glColor3f (1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(395,0);
	glVertex2d(405,0);
	glVertex2d(333,300);
	glVertex2d(323,300);
	glEnd();

	// upper line
	glColor3f (1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(-140,305);
	glVertex2d(-140,295);
	glVertex2d(333,295);
	glVertex2d(333,305);
	glEnd();

	// lower line
	glColor3f (1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(0,5);
	glVertex2d(0,-5);
	glVertex2d(400,-5);
	glVertex2d(400,5);
	glEnd();

	// left upper line
	glColor3f (1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(-140,300);
	glVertex2d(-130,300);
	glVertex2d(-115,350);
	glVertex2d(-125,350);
	glEnd();

	// right upper line
	glColor3f (1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(323,300);
	glVertex2d(333,300);
	glVertex2d(345,350);
	glVertex2d(338,350);
	glEnd();

	// left top line
	glColor3f (1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(-90,350);
	glVertex2d(-150,350);
	glVertex2d(-150,360);
	glVertex2d(-90,360);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2d(-150,360);
	glVertex2d(-150,350);
	glVertex2d(-105,375);
	glVertex2d(-120,375);
	glEnd();

	// right top line
	glColor3f (1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(375,350);
	glVertex2d(308,350);
	glVertex2d(308,360);
	glVertex2d(375,360);
	glEnd();

	// upper padel verti line
	glColor3f (1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(-5,0);
	glVertex2d(5,0);
	glVertex2d(5,75);
	glVertex2d(-5,75);
	glEnd();

	// upper padel horiz line
	glColor3f (1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(-12,75);
	glVertex2d(12,75);
	glVertex2d(12,85);
	glVertex2d(-12,85);
	glEnd();


	// center wheel outer circle 1
	glColor3f (0.66, 0.66, 0.66);
	x0=0, y0=55, p0=1-y0;
	xc=0, yc=0;
	// xc=0;
	// yc=0;
	ax0[1111], ay0[1111];
	idx0=0;
	ax0[idx0]=x0;
	ay0[idx0++]=y0;
	while(1){
		if(p0<0){
			x0++; p0=p0+(2*x0)+1;
		}
		else{
			x0++; y0--; p0=p0+(2*x0)+1-2*y0;
		}
		// ax0[idx0]=x0+xc; ay0[idx0++]=y0+yc;
		ax0[idx0]=x0; ay0[idx0++]=y0;
		if(x0>=y0) break;
	}

	glBegin(GL_POLYGON);
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

	// center wheel outer circle 2
	glColor3f (0.0, 0.0, 0.0);
	x0=0, y0=45, p0=1-y0;
	xc=0, yc=0;
	// xc=0;
	// yc=0;
	ax0[1111], ay0[1111];
	idx0=0;
	ax0[idx0]=x0;
	ay0[idx0++]=y0;
	while(1){
		if(p0<0){
			x0++; p0=p0+(2*x0)+1;
		}
		else{
			x0++; y0--; p0=p0+(2*x0)+1-2*y0;
		}
		// ax0[idx0]=x0+xc; ay0[idx0++]=y0+yc;
		ax0[idx0]=x0; ay0[idx0++]=y0;
		if(x0>=y0) break;
	}

	glBegin(GL_POLYGON);
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

	// center wheel center circle
	glColor3f (0.66, 0.66, 0.66);
	x0=0, y0=30, p0=1-y0;
	xc=0, yc=0;
	// xc=0;
	// yc=0;
	ax0[1111], ay0[1111];
	idx0=0;
	ax0[idx0]=x0;
	ay0[idx0++]=y0;
	while(1){
		if(p0<0){
			x0++; p0=p0+(2*x0)+1;
		}
		else{
			x0++; y0--; p0=p0+(2*x0)+1-2*y0;
		}
		// ax0[idx0]=x0+xc; ay0[idx0++]=y0+yc;
		ax0[idx0]=x0; ay0[idx0++]=y0;
		if(x0>=y0) break;
	}

	glBegin(GL_POLYGON);
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

	// lower padel verti line
	glColor3f (1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(-5,0);
	glVertex2d(5,0);
	glVertex2d(5,-75);
	glVertex2d(-5,-75);
	glEnd();

	// lower padel horiz line
	glColor3f (1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(-12,-75);
	glVertex2d(12,-75);
	glVertex2d(12,-85);
	glVertex2d(-12,-85);
	glEnd();

	// upper chain line
	glColor3f (0.83, 0.83, 0.83);
	glBegin(GL_POLYGON);
	glVertex2d(0,55);
	glVertex2d(400,35);
	glVertex2d(400,30);
	glVertex2d(0,50);
	glEnd();

	// lower chain line
	glColor3f (0.83, 0.83, 0.83);
	glBegin(GL_POLYGON);
	glVertex2d(0,-55);
	glVertex2d(400,-35);
	glVertex2d(400,-30);
	glVertex2d(0,-50);
	glEnd();

	glFlush ();
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