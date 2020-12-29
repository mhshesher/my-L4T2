#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
	glClear (GL_COLOR_BUFFER_BIT);

	glColor3f (1.0, 1.0, 1.0);

	int x=0, y=400;
	int p=1-y;

	int ax[1111];
	int ay[1111];
	int idx=0;
	ax[idx]=x;
	ay[idx++]=y;
	while(1){
		if(p<0){
			x++;
			p=p+(2*x)+1;
		}
		else{
			x++;
			y--;
			p=p+(2*x)+1-2*y;
		}
		ax[idx]=x;
		ay[idx++]=y;
		if(x>=y) break;
	}

	glBegin(GL_POINTS);
	int tx,ty;
	for(int i=0;i<idx;i++){
		tx=ax[i]*(-1);
		ty=ay[i]*(-1);

		glVertex2d(ax[i],ay[i]);
		glVertex2d(tx,ay[i]);
		glVertex2d(ax[i],ty);
		glVertex2d(tx,ty);

		glVertex2d(ay[i],ax[i]);
		glVertex2d(ty,ax[i]);
		glVertex2d(ay[i],tx);
		glVertex2d(ty,tx);
	}

	glColor3f (1.0, 0.0, 0.0);

	for(int i=-1000;i<=1000;i++){
		glVertex2d(0,i);
		glVertex2d(i,0);
	}


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