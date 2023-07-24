#include<iostream>
#include<graphics.h>
#include<math.h>

using namespace std;

int main()
{
	float x,y,x1,y1,x2,y2,dx,dy,step;
	int i;
	
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	cout<<"Enter the 1st coordinates : ";
	cin>>x1>>y1;
	cout<<"Enter the 2nd coordinates : ";
	cin>>x2>>y2;
	
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	
	if(dx>=dy)
		step=dx;		
	else
		step=dy;
	
	dx=dx/step;
	dy=dy/step;
	
	x=x1;
	y=y1;
	
	i=1;
	
	while(i<=step)
	{
		putpixel(x,y,7);
		x=x+1;
		y=y+1;
		i=i+1;
	}
	
	getch();
	closegraph();
}
