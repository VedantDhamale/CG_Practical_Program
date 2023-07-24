#include<iostream>
#include<graphics.h>
#include<math.h>

using namespace std;

int main()
{
	int x,y,x1,y1,x2,y2,steps,dx,dy,i;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	cout<<"Enter the 1st Coordinates : ";
	cin>>x1>>y1;
	
	cout<<"Enter the 2nd coordinates : ";
	cin>>x2>>y2;
	
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	
	if(dx>=dy)
		steps=dx;
	else
		steps=dy;
	
	dx=dx/steps;
	dy=dy/steps;
	
	x=x1;
	y=y1;
	
	i=1;
	while(i<=steps){
		putpixel(x,y,5);
		x+=1;
		y+=1;
		i+=1;
	}
	
	getch();
	closegraph();
}
