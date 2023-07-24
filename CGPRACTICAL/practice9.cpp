#include<iostream>
#include<graphics.h>
#include<math.h>

using namespace std;

void bresdraw(int xc,int yc,int x,int y)
{
	putpixel(xc+x, yc+y, 3);
	putpixel(xc-x, yc+y, 3);	
	putpixel(xc+x, yc-y, 3);
	putpixel(xc-x, yc-y, 3);
	putpixel(xc+y, yc+x, 3);
	putpixel(xc-y, yc+x, 3);
	putpixel(xc+y, yc-x, 3);
	putpixel(xc-y, yc-x, 3);
}

void brescircle(int xc,int yc,int r)
{
	int x=0,y=r;
	int d=3-2*r;
	bresdraw(xc,yc,x,y);
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
		bresdraw(xc,yc,x,y);
	}
}

void ddaline(int x1,int y1,int x2,int y2)
{
	int dx=x2-x1;
	int dy=y2-y1;

	int steps=dx>dy?dx:dy;

	float xInc=dx/(float)steps;
	float yInc=dy/(float)steps;
	
	float x=x1;
	float y=y1;
	
	for(int i=0;i<=steps;i++)
	{
		putpixel(x,y,3);
		x+=xInc;
		y+=yInc;	
	}	
}

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	brescircle(150,180,57);
	brescircle(150,180,57/2);
	
	ddaline(150,125,198,210);
	ddaline(150,125,102,210);
	ddaline(102,210,198,210);
	
	
	getch();
	closegraph();	
}
