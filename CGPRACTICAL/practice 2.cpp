#include<iostream>
#include<graphics.h>

using namespace std;

void bresline(int x1,int y1,int x2,int y2)
{
	int dx,dy,x,y,p;

	dx=x2-x1;
	dy=y2-y1;
	
	x=x1;
	y=y1;
	
	p=2*dy-dx;
	
	while(x1<x2)
	{
		if(p>=0)
		{
			putpixel(x,y,7);
			y=y+1;
			p=p+2*dy-2*dx;
		}
		else
		{
			putpixel(x,y,7);
			p=p+2*dy;
		}
		x=x+1;
		delay(50);
	}
}

int main()
{
	int x1,y1,x2,y2;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	cout<<"Enter the 1st coordinate : ";
	cin>>x1>>y1;
	cout<<"Enter the 2nd coordinate : ";
	cin>>x2>>y2;
	bresline(x1,y1,x2,y2);
	getch();
	closegraph();
}
