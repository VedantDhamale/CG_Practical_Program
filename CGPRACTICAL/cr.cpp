#include<iostream>
#include<graphics.h>
using namespace std;
void drcircle(int xc,int yc,int x,int y)
{
	 putpixel((xc+x),(yc+y),RED);
	 putpixel((xc-x),(yc+y),RED);
	 putpixel((xc+x),(yc-y),RED);
	 putpixel((xc-x),(yc-y),RED);
	 putpixel((xc+y),(yc+x),RED);
	 putpixel((xc-y),(yc+x),RED);
	 putpixel((xc+y),(yc-x),RED);
	 putpixel((xc-y),(yc-x),RED);
}
 void crbrehsm(int xc,int yc,int r)
 {
 	int x=0,y=r,d;
 	d=3-2*r;
 	drcircle(xc,yc,x,y);
 	while(y>=x)
 	{
 		x++;
 		if(d>0)
 		{
 		y--;
 		d=d+4*(x-y)+10;
    	}
    	else
    	d=d+4*x+6;
    	drcircle(xc,yc,x,y);
    	delay(50);
	 }
 }
int main()
{
	int xc=300,yc=250,r=100;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	crbrehsm(xc,yc,r);
	getch();
	closegraph();
}
