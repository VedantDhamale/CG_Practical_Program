#include<iostream>
#include<graphics.h>

using namespace std;

void drawcircle(int xc,int yc,int x,int y){
	putpixel(xc+x,yc+y,RED);
	putpixel(xc-x,yc+y,RED);
	putpixel(xc+x,yc-y,RED);
	putpixel(xc-x,yc-y,RED);
	putpixel(xc+y,yc+x,RED);
	putpixel(xc-y,yc+x,RED);
	putpixel(xc+y,yc-x,RED);
	putpixel(xc-y,yc-x,RED);		
}

void circlebre(int xc,int yc,int r){
	int x=0,y=r;
	int d=3-2*r;
	drawcircle(xc,yc,x,y);
	while(y>=x){
		x++;
		if(d>0){
			y=y-1;
			d=d+4*(x-y)+10;	
		}
		else
			d=d+4*x+6;
	
		drawcircle(xc,yc,x,y);
	}
}

int main(){
	int xc=300,yc=250,r=150;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	circlebre(xc,yc,r);
	getch();
	closegraph();
}
