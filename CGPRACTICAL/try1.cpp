#include<iostream>
#include<graphics.h>
#include<math.h>

using namespace std;

void ddaline(int x1,int y1, int x2,int y2 )
{
	int steps,x,y,i,dx,dy;	
	
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
	
	while(i<=steps)
	{
		putpixel(x,y,5);
		x=x+dx;
		y=y+dy;
		i=i+1;
	}
}

int main(){
	int x1,y1,x2,y2;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	cout<<"Enter the 1st co-ordinates : ";
	cin>>x1>>y1;
	cout<<"Enter the 2nd co-ordinates : ";
	cin>>x2>>y2;
	ddaline(x1,y1,x2,y2);
	getch();
	closegraph();	
}
