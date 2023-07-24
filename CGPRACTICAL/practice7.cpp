#include<iostream>
#include<graphics.h>

using namespace std;

void circledraw(int xc,int yc,int x,int y)
{
	putpixel(xc+x,yc+y,3);
	putpixel(xc-x,yc+y,3);
	putpixel(xc+x,yc-y,3);
	putpixel(xc-x,yc-y,3);
	putpixel(xc+y,yc+x,3);
	putpixel(xc-y,yc+x,3);
	putpixel(xc+y,yc-x,3);
	putpixel(xc-y,yc-x,3);
}

void circlealgo(int xc,int yc,int r)
{
	int x=0,y=r;
	int d=3-2*r;
	circledraw(xc,yc,x,y);
	while(y>=x)
	{
		x++;
		if(d>0)
		{
			y--;
			d=d+4*(x-y)+10;
		}
		else
		{
			d=d+4*x+6;
		}
		circledraw(xc,yc,x,y);
	}
}

int main()
{
	int xc=300,yc=250,r=150;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	circlealgo(xc,yc,r);
	getch();
	closegraph();	
}
