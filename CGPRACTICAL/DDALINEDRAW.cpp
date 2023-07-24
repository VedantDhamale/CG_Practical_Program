#include <graphics.h>
#include <iostream>
#include <math.h>

using namespace std;
 
int main()
{
	float x,y,x1,y1,x2,y2,dx,dy,step;
	int i,gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);

	cout<<"Enter the value of x1 and y1 : ";
	cin>>x1>>y1;//2,3
	cout<<"Enter the value of x2 and y2: ";
	cin>>x2>>y2;//6,15
 
	dx=abs(x2-x1);//4
	dy=abs(y2-y1);//12
 
	if(dx>=dy)//4>=12 false
		step=dx;
	else
		step=dy;
		
	//step=12
	dx=dx/step;//4/12=1/3
	dy=dy/step;//12/12=1
 
	x=x1;//2
	y=y1;//3
 
	i=1;
	
	while(i<=step){
		putpixel(x,y,5);
		x=x+dx;
		y=y+dy;
		i=i+1;
	}
	//LOOP 1
	//FIRST COORDINATE GETS PUTED THEN 
	//x WILL GET INCREAMENTED WITH dx values
	//y WILL GET INCREAMENTED WITH dy values
	//but the x and y increament depends on slop her in program on the values of the dx and dy
	// if dx is grater than or equal to then x become constant and y increases and wise versa when the dy is geater than the dx
 	
	getch();
	closegraph();
}
