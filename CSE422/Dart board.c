#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void display(void)
{
	glClear (GL_COLOR_BUFFER_BIT);

	// broder line
	glColor3f (1.0, 1.0, 1.0);
	int x0=0, y0=555, p0=1-y0;
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
		glVertex2d(ax0[i],ay0[i]);
		glVertex2d(tx0,ay0[i]);
		glVertex2d(ax0[i],ty0);
		glVertex2d(tx0,ty0);
		glVertex2d(ay0[i],ax0[i]);
		glVertex2d(ty0,ax0[i]);
		glVertex2d(ay0[i],tx0);
		glVertex2d(ty0,tx0);
	}
	glEnd();

	// outer circle
	glColor3f (0.0, 0.0, 0.0);
	int x1=0, y1=550, p1=1-y1;
	int ax1[1111], ay1[1111];
	int idx1=0;
	ax1[idx1]=x1;
	ay1[idx1++]=y1;
	while(1){
		if(p1<0){
			x1++; p1=p1+(2*x1)+1;
		}
		else{
			x1++; y1--; p1=p1+(2*x1)+1-2*y1;
		}
		ax1[idx1]=x1; ay1[idx1++]=y1;
		if(x1>=y1) break;
	}

	glBegin(GL_POLYGON);
	int tx1,ty1;
	for(int i=0;i<idx1;i++){
		tx1=ax1[i]*(-1); ty1=ay1[i]*(-1);
		glVertex2d(ax1[i],ay1[i]);
		glVertex2d(tx1,ay1[i]);
		glVertex2d(ax1[i],ty1);
		glVertex2d(tx1,ty1);
		glVertex2d(ay1[i],ax1[i]);
		glVertex2d(ty1,ax1[i]);
		glVertex2d(ay1[i],tx1);
		glVertex2d(ty1,tx1);
	}
	glEnd();

	// inner circle border
	glColor3f (1.0, 1.0, 1.0);
	x0=0, y0=453, p0=1-y0;
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
		ax0[idx0]=x0; ay0[idx0++]=y0;
		if(x0>=y0) break;
	}

	glBegin(GL_POLYGON);
	for(int i=0;i<idx0;i++){
		tx0=ax0[i]*(-1); ty0=ay0[i]*(-1);
		glVertex2d(ax0[i],ay0[i]);
		glVertex2d(tx0,ay0[i]);
		glVertex2d(ax0[i],ty0);
		glVertex2d(tx0,ty0);
		glVertex2d(ay0[i],ax0[i]);
		glVertex2d(ty0,ax0[i]);
		glVertex2d(ay0[i],tx0);
		glVertex2d(ty0,tx0);
	}
	glEnd();

	// inner circle
	glColor3f (0.0, 0.0, 0.0);
	int x2=0, y2=450, p2=1-y2;
	int ax2[1111], ay2[1111];
	int idx2=0;
	ax2[idx2]=x2;
	ay2[idx2++]=y2;
	while(1){
		if(p2<0){
			x2++; p2=p2+(2*x2)+1;
		}
		else{
			x2++; y2--; p2=p2+(2*x2)+1-2*y2;
		}
		ax2[idx2]=x2; ay2[idx2++]=y2;
		if(x2>=y2) break;
	}

	glBegin(GL_POLYGON);
	int tx2,ty2;
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i],ay2[i]);
		glVertex2d(tx2,ay2[i]);
		glVertex2d(ax2[i],ty2);
		glVertex2d(tx2,ty2);
		glVertex2d(ay2[i],ax2[i]);
		glVertex2d(ty2,ax2[i]);
		glVertex2d(ay2[i],tx2);
		glVertex2d(ty2,tx2);
	}
	glEnd();

	//seg1
	glColor3f (1.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ax2[0]*1.0,ay2[0]*1.0);
	glVertex2f(ax2[idx2-1]*1.0,ay2[idx2-1]*1.0);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i],ay2[i]);
	}
	glEnd();

	//seg2
	glColor3f (0.0, 1.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ay2[0]*1.0,ax2[0]*1.0);
	glVertex2f(ay2[idx2-1]*1.0,ax2[idx2-1]*1.0);
	glEnd();
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ay2[i],ax2[i]);
	}
	glEnd();

	//seg3
	glColor3f (1.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ay2[0]*1.0,ax2[0]*1.0*(-1));
	glVertex2f(ay2[idx2-1]*1.0,ax2[idx2-1]*1.0*(-1));
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ay2[i],ax2[i]*(-1));
	}
	glEnd();

	//seg4
	glColor3f (0.0, 1.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ax2[0]*1.0,ay2[0]*1.0*(-1));
	glVertex2f(ax2[idx2-1]*1.0,ay2[idx2-1]*1.0*(-1));
	glEnd();
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i],ay2[i]*(-1));
	}
	glEnd();

	//seg5
	glColor3f (1.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ax2[0]*1.0*(-1),ay2[0]*1.0*(-1));
	glVertex2f(ax2[idx2-1]*1.0*(-1),ay2[idx2-1]*1.0*(-1));
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i]*(-1),ay2[i]*(-1));
	}
	glEnd();

	//seg6
	glColor3f (0.0, 1.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ay2[0]*1.0*(-1),ax2[0]*1.0*(-1));
	glVertex2f(ay2[idx2-1]*1.0*(-1),ax2[idx2-1]*1.0*(-1));
	glEnd();
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ay2[i]*(-1),ax2[i]*(-1));
	}
	glEnd();

	//seg7
	glColor3f (1.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ay2[0]*1.0*(-1),ax2[0]*1.0);
	glVertex2f(ay2[idx2-1]*1.0*(-1),ax2[idx2-1]*1.0);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ay2[i]*(-1),ax2[i]);
	}
	glEnd();


	//seg8
	glColor3f (0.0, 1.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ax2[0]*1.0*(-1),ay2[0]*1.0);
	glVertex2f(ax2[idx2-1]*1.0*(-1),ay2[idx2-1]*1.0);
	glEnd();
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i]*(-1),ay2[i]);
	}
	glEnd();

	//inner cricle 2 border 
	glColor3f (1.0, 1.0, 1.0);
	x0=0, y0=428, p0=1-y0;
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
		ax0[idx0]=x0; ay0[idx0++]=y0;
		if(x0>=y0) break;
	}

	glBegin(GL_POLYGON);
	for(int i=0;i<idx0;i++){
		tx0=ax0[i]*(-1); ty0=ay0[i]*(-1);
		glVertex2d(ax0[i],ay0[i]);
		glVertex2d(tx0,ay0[i]);
		glVertex2d(ax0[i],ty0);
		glVertex2d(tx0,ty0);
		glVertex2d(ay0[i],ax0[i]);
		glVertex2d(ty0,ax0[i]);
		glVertex2d(ay0[i],tx0);
		glVertex2d(ty0,tx0);
	}
	glEnd();

	// inner circle 2
	glColor3f (0.0, 0.0, 0.0);
	x2=0, y2=425, p2=1-y2;
	ax2[1111], ay2[1111];
	idx2=0;
	ax2[idx2]=x2;
	ay2[idx2++]=y2;
	while(1){
		if(p2<0){
			x2++; p2=p2+(2*x2)+1;
		}
		else{
			x2++; y2--; p2=p2+(2*x2)+1-2*y2;
		}
		ax2[idx2]=x2; ay2[idx2++]=y2;
		if(x2>=y2) break;
	}

	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i],ay2[i]);
		glVertex2d(tx2,ay2[i]);
		glVertex2d(ax2[i],ty2);
		glVertex2d(tx2,ty2);
		glVertex2d(ay2[i],ax2[i]);
		glVertex2d(ty2,ax2[i]);
		glVertex2d(ay2[i],tx2);
		glVertex2d(ty2,tx2);
	}
	glEnd();

	//seg1
	glColor3f (0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ax2[0]*1.0,ay2[0]*1.0);
	glVertex2f(ax2[idx2-1]*1.0,ay2[idx2-1]*1.0);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i],ay2[i]);
	}
	glEnd();

	//seg2
	glColor3f (0.83, 0.83, 0.83);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ay2[0]*1.0,ax2[0]*1.0);
	glVertex2f(ay2[idx2-1]*1.0,ax2[idx2-1]*1.0);
	glEnd();
	glColor3f(0.83, 0.83, 0.83);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ay2[i],ax2[i]);
	}
	glEnd();

	//seg3
	glColor3f (0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ay2[0]*1.0,ax2[0]*1.0*(-1));
	glVertex2f(ay2[idx2-1]*1.0,ax2[idx2-1]*1.0*(-1));
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ay2[i],ax2[i]*(-1));
	}
	glEnd();

	//seg4
	glColor3f (0.83, 0.83, 0.83);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ax2[0]*1.0,ay2[0]*1.0*(-1));
	glVertex2f(ax2[idx2-1]*1.0,ay2[idx2-1]*1.0*(-1));
	glEnd();
	glColor3f(0.83, 0.83, 0.83);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i],ay2[i]*(-1));
	}
	glEnd();

	//seg5
	glColor3f (0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ax2[0]*1.0*(-1),ay2[0]*1.0*(-1));
	glVertex2f(ax2[idx2-1]*1.0*(-1),ay2[idx2-1]*1.0*(-1));
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i]*(-1),ay2[i]*(-1));
	}
	glEnd();

	//seg6
	glColor3f (0.83, 0.83, 0.83);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ay2[0]*1.0*(-1),ax2[0]*1.0*(-1));
	glVertex2f(ay2[idx2-1]*1.0*(-1),ax2[idx2-1]*1.0*(-1));
	glEnd();
	glColor3f(0.83, 0.83, 0.83);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ay2[i]*(-1),ax2[i]*(-1));
	}
	glEnd();

	//seg7
	glColor3f (0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ay2[0]*1.0*(-1),ax2[0]*1.0);
	glVertex2f(ay2[idx2-1]*1.0*(-1),ax2[idx2-1]*1.0);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ay2[i]*(-1),ax2[i]);
	}
	glEnd();


	//seg8
	glColor3f (0.83, 0.83, 0.83);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ax2[0]*1.0*(-1),ay2[0]*1.0);
	glVertex2f(ax2[idx2-1]*1.0*(-1),ay2[idx2-1]*1.0);
	glEnd();
	glColor3f(0.83, 0.83, 0.83);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i]*(-1),ay2[i]);
	}
	glEnd();

	//inner cricle 3 border 
	glColor3f (1.0, 1.0, 1.0);
	x0=0, y0=253, p0=1-y0;
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
		ax0[idx0]=x0; ay0[idx0++]=y0;
		if(x0>=y0) break;
	}

	glBegin(GL_POLYGON);
	for(int i=0;i<idx0;i++){
		tx0=ax0[i]*(-1); ty0=ay0[i]*(-1);
		glVertex2d(ax0[i],ay0[i]);
		glVertex2d(tx0,ay0[i]);
		glVertex2d(ax0[i],ty0);
		glVertex2d(tx0,ty0);
		glVertex2d(ay0[i],ax0[i]);
		glVertex2d(ty0,ax0[i]);
		glVertex2d(ay0[i],tx0);
		glVertex2d(ty0,tx0);
	}
	glEnd();

	// inner circle 3
	glColor3f (0.0, 0.0, 0.0);
	x2=0, y2=250, p2=1-y2;
	ax2[1111], ay2[1111];
	idx2=0;
	ax2[idx2]=x2;
	ay2[idx2++]=y2;
	while(1){
		if(p2<0){
			x2++; p2=p2+(2*x2)+1;
		}
		else{
			x2++; y2--; p2=p2+(2*x2)+1-2*y2;
		}
		ax2[idx2]=x2; ay2[idx2++]=y2;
		if(x2>=y2) break;
	}

	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i],ay2[i]);
		glVertex2d(tx2,ay2[i]);
		glVertex2d(ax2[i],ty2);
		glVertex2d(tx2,ty2);
		glVertex2d(ay2[i],ax2[i]);
		glVertex2d(ty2,ax2[i]);
		glVertex2d(ay2[i],tx2);
		glVertex2d(ty2,tx2);
	}
	glEnd();

	//seg1
	glColor3f (1.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ax2[0]*1.0,ay2[0]*1.0);
	glVertex2f(ax2[idx2-1]*1.0,ay2[idx2-1]*1.0);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i],ay2[i]);
	}
	glEnd();

	//seg2
	glColor3f (0.0, 1.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ay2[0]*1.0,ax2[0]*1.0);
	glVertex2f(ay2[idx2-1]*1.0,ax2[idx2-1]*1.0);
	glEnd();
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ay2[i],ax2[i]);
	}
	glEnd();

	//seg3
	glColor3f (1.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ay2[0]*1.0,ax2[0]*1.0*(-1));
	glVertex2f(ay2[idx2-1]*1.0,ax2[idx2-1]*1.0*(-1));
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ay2[i],ax2[i]*(-1));
	}
	glEnd();

	//seg4
	glColor3f (0.0, 1.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ax2[0]*1.0,ay2[0]*1.0*(-1));
	glVertex2f(ax2[idx2-1]*1.0,ay2[idx2-1]*1.0*(-1));
	glEnd();
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i],ay2[i]*(-1));
	}
	glEnd();

	//seg5
	glColor3f (1.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ax2[0]*1.0*(-1),ay2[0]*1.0*(-1));
	glVertex2f(ax2[idx2-1]*1.0*(-1),ay2[idx2-1]*1.0*(-1));
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i]*(-1),ay2[i]*(-1));
	}
	glEnd();

	//seg6
	glColor3f (0.0, 1.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ay2[0]*1.0*(-1),ax2[0]*1.0*(-1));
	glVertex2f(ay2[idx2-1]*1.0*(-1),ax2[idx2-1]*1.0*(-1));
	glEnd();
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ay2[i]*(-1),ax2[i]*(-1));
	}
	glEnd();

	//seg7
	glColor3f (1.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ay2[0]*1.0*(-1),ax2[0]*1.0);
	glVertex2f(ay2[idx2-1]*1.0*(-1),ax2[idx2-1]*1.0);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ay2[i]*(-1),ax2[i]);
	}
	glEnd();


	//seg8
	glColor3f (0.0, 1.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ax2[0]*1.0*(-1),ay2[0]*1.0);
	glVertex2f(ax2[idx2-1]*1.0*(-1),ay2[idx2-1]*1.0);
	glEnd();
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i]*(-1),ay2[i]);
	}
	glEnd();

	//inner cricle 4 border 
	glColor3f (1.0, 1.0, 1.0);
	x0=0, y0=228, p0=1-y0;
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
		ax0[idx0]=x0; ay0[idx0++]=y0;
		if(x0>=y0) break;
	}

	glBegin(GL_POLYGON);
	for(int i=0;i<idx0;i++){
		tx0=ax0[i]*(-1); ty0=ay0[i]*(-1);
		glVertex2d(ax0[i],ay0[i]);
		glVertex2d(tx0,ay0[i]);
		glVertex2d(ax0[i],ty0);
		glVertex2d(tx0,ty0);
		glVertex2d(ay0[i],ax0[i]);
		glVertex2d(ty0,ax0[i]);
		glVertex2d(ay0[i],tx0);
		glVertex2d(ty0,tx0);
	}
	glEnd();

	// inner circle 4
	glColor3f (0.0, 0.0, 0.0);
	x2=0, y2=225, p2=1-y2;
	ax2[1111], ay2[1111];
	idx2=0;
	ax2[idx2]=x2;
	ay2[idx2++]=y2;
	while(1){
		if(p2<0){
			x2++; p2=p2+(2*x2)+1;
		}
		else{
			x2++; y2--; p2=p2+(2*x2)+1-2*y2;
		}
		ax2[idx2]=x2; ay2[idx2++]=y2;
		if(x2>=y2) break;
	}

	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i],ay2[i]);
		glVertex2d(tx2,ay2[i]);
		glVertex2d(ax2[i],ty2);
		glVertex2d(tx2,ty2);
		glVertex2d(ay2[i],ax2[i]);
		glVertex2d(ty2,ax2[i]);
		glVertex2d(ay2[i],tx2);
		glVertex2d(ty2,tx2);
	}
	glEnd();

	//seg1
	glColor3f (0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ax2[0]*1.0,ay2[0]*1.0);
	glVertex2f(ax2[idx2-1]*1.0,ay2[idx2-1]*1.0);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i],ay2[i]);
	}
	glEnd();

	//seg2
	glColor3f (0.83, 0.83, 0.83);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ay2[0]*1.0,ax2[0]*1.0);
	glVertex2f(ay2[idx2-1]*1.0,ax2[idx2-1]*1.0);
	glEnd();
	glColor3f(0.83, 0.83, 0.83);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ay2[i],ax2[i]);
	}
	glEnd();

	//seg3
	glColor3f (0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ay2[0]*1.0,ax2[0]*1.0*(-1));
	glVertex2f(ay2[idx2-1]*1.0,ax2[idx2-1]*1.0*(-1));
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ay2[i],ax2[i]*(-1));
	}
	glEnd();

	//seg4
	glColor3f (0.83, 0.83, 0.83);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ax2[0]*1.0,ay2[0]*1.0*(-1));
	glVertex2f(ax2[idx2-1]*1.0,ay2[idx2-1]*1.0*(-1));
	glEnd();
	glColor3f(0.83, 0.83, 0.83);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i],ay2[i]*(-1));
	}
	glEnd();

	//seg5
	glColor3f (0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ax2[0]*1.0*(-1),ay2[0]*1.0*(-1));
	glVertex2f(ax2[idx2-1]*1.0*(-1),ay2[idx2-1]*1.0*(-1));
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i]*(-1),ay2[i]*(-1));
	}
	glEnd();

	//seg6
	glColor3f (0.83, 0.83, 0.83);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ay2[0]*1.0*(-1),ax2[0]*1.0*(-1));
	glVertex2f(ay2[idx2-1]*1.0*(-1),ax2[idx2-1]*1.0*(-1));
	glEnd();
	glColor3f(0.83, 0.83, 0.83);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ay2[i]*(-1),ax2[i]*(-1));
	}
	glEnd();

	//seg7
	glColor3f (0.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ay2[0]*1.0*(-1),ax2[0]*1.0);
	glVertex2f(ay2[idx2-1]*1.0*(-1),ax2[idx2-1]*1.0);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ay2[i]*(-1),ax2[i]);
	}
	glEnd();


	//seg8
	glColor3f (0.83, 0.83, 0.83);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0,0.0);
	glVertex2f(ax2[0]*1.0*(-1),ay2[0]*1.0);
	glVertex2f(ax2[idx2-1]*1.0*(-1),ay2[idx2-1]*1.0);
	glEnd();
	glColor3f(0.83, 0.83, 0.83);
	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i]*(-1),ay2[i]);
	}
	glEnd();

	//inner cricle 5 border 
	glColor3f (1.0, 1.0, 1.0);
	x0=0, y0=60, p0=1-y0;
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
		ax0[idx0]=x0; ay0[idx0++]=y0;
		if(x0>=y0) break;
	}

	glBegin(GL_POLYGON);
	for(int i=0;i<idx0;i++){
		tx0=ax0[i]*(-1); ty0=ay0[i]*(-1);
		glVertex2d(ax0[i],ay0[i]);
		glVertex2d(tx0,ay0[i]);
		glVertex2d(ax0[i],ty0);
		glVertex2d(tx0,ty0);
		glVertex2d(ay0[i],ax0[i]);
		glVertex2d(ty0,ax0[i]);
		glVertex2d(ay0[i],tx0);
		glVertex2d(ty0,tx0);
	}
	glEnd();

	// inner circle 5
	glColor3f (0.0, 1.0, 0.0);
	x2=0, y2=55, p2=1-y2;
	ax2[1111], ay2[1111];
	idx2=0;
	ax2[idx2]=x2;
	ay2[idx2++]=y2;
	while(1){
		if(p2<0){
			x2++; p2=p2+(2*x2)+1;
		}
		else{
			x2++; y2--; p2=p2+(2*x2)+1-2*y2;
		}
		ax2[idx2]=x2; ay2[idx2++]=y2;
		if(x2>=y2) break;
	}

	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i],ay2[i]);
		glVertex2d(tx2,ay2[i]);
		glVertex2d(ax2[i],ty2);
		glVertex2d(tx2,ty2);
		glVertex2d(ay2[i],ax2[i]);
		glVertex2d(ty2,ax2[i]);
		glVertex2d(ay2[i],tx2);
		glVertex2d(ty2,tx2);
	}
	glEnd();

	//inner cricle 6 border 
	glColor3f (1.0, 1.0, 1.0);
	x0=0, y0=30, p0=1-y0;
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
		ax0[idx0]=x0; ay0[idx0++]=y0;
		if(x0>=y0) break;
	}

	glBegin(GL_POLYGON);
	for(int i=0;i<idx0;i++){
		tx0=ax0[i]*(-1); ty0=ay0[i]*(-1);
		glVertex2d(ax0[i],ay0[i]);
		glVertex2d(tx0,ay0[i]);
		glVertex2d(ax0[i],ty0);
		glVertex2d(tx0,ty0);
		glVertex2d(ay0[i],ax0[i]);
		glVertex2d(ty0,ax0[i]);
		glVertex2d(ay0[i],tx0);
		glVertex2d(ty0,tx0);
	}
	glEnd();

	// inner circle 6
	glColor3f (1.0, 0.0, 0.0);
	x2=0, y2=25, p2=1-y2;
	ax2[1111], ay2[1111];
	idx2=0;
	ax2[idx2]=x2;
	ay2[idx2++]=y2;
	while(1){
		if(p2<0){
			x2++; p2=p2+(2*x2)+1;
		}
		else{
			x2++; y2--; p2=p2+(2*x2)+1-2*y2;
		}
		ax2[idx2]=x2; ay2[idx2++]=y2;
		if(x2>=y2) break;
	}

	glBegin(GL_POLYGON);
	for(int i=0;i<idx2;i++){
		tx2=ax2[i]*(-1); ty2=ay2[i]*(-1);
		glVertex2d(ax2[i],ay2[i]);
		glVertex2d(tx2,ay2[i]);
		glVertex2d(ax2[i],ty2);
		glVertex2d(tx2,ty2);
		glVertex2d(ay2[i],ax2[i]);
		glVertex2d(ty2,ax2[i]);
		glVertex2d(ay2[i],tx2);
		glVertex2d(ty2,tx2);
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