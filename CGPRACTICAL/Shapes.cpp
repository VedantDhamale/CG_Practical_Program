#include<iostream>
#include<graphics.h>

void ddaAlg(int x1,int y1,int x2,int y2)
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

void display(int xc,int yc,int x,int y)
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

void CircleB(int x1,int y1,int r)
{
	int x,y,d;
	x=0,y=r;
	d=3-2*r;
	display(x1,y1,x,y);
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
		display(x1,y1,x,y);
	}
}

int main()
{
	int gd=DETECT, gm;
	initgraph(&gd,&gm,NULL);
	CircleB(150,180,57);
	CircleB(150,180,57/2);
	
	ddaAlg(150,125,198,210);
	ddaAlg(150,125,102,210);
	ddaAlg(102,210,198,210);

	getch();
	closegraph();
}
