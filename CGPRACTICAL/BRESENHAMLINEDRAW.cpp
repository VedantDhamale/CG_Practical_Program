#include<graphics.h>
#include<iostream>

using namespace std;

void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;
 
	dx=x1-x0;//8-1=7
	dy=y1-y0;//5-1=4
 
	x=x0;//1
	y=y0;//1
 
	//calulating the decision parameter (p)
	p=2*dy-dx;//-6
 	
	while(x<x1)
	{
		//case 1:
		if(p>=0)
		{
			putpixel(x,y,7);
			//cout<<x<<y;
			y=y+1;
			p=p+2*dy-2*dx;
		}
		//for case 2
		else
		{
			putpixel(x,y,7);
			//cout<<x<<y;
			p=p+2*dy;
		}
		x=x+1;
		delay(100);
	}
}
 
int main()
{
	int gd=DETECT, gm, x0, y0, x1, y1;
	initgraph(&gd, &gm, NULL);
 	
	//accept the coordinates
	cout<<"Enter co-ordinates of first point: ";
	cin>>x0>>y0;//1,1
 
	cout<<"Enter co-ordinates of second point: ";
	cin>>x1>>y1;//8,5
	
	//calling funtion and passing the parameters
	drawline(x0, y0, x1, y1);
 
	getch();
	closegraph();
}
