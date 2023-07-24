#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

int main()
{
	int x1=100,y1=100,x2=200,y2=200,ch=0,sx,sy;
	long xn,yn;
	double a;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	do
	{
		cout<<"MENU\n1].Translation\n2].Rotation\n3].Scalling\n";
		cout<<"Enter your choice : ";
		cin>>ch; 
		switch(ch){
			case 1:
				int tx,ty;
				rectangle(x1,y1,x2,y2);
				cout<<"Enter the Translation factors : ";
				cin>>tx>>ty;
				rectangle(x1+tx,y1+ty,x2+tx,y2+ty);
				break;
				
			case 2:
				rectangle(x1,y1,x2,y2);
				cout<<"Enter the Rotaion angle : ";
				cin>>a;
				a=(a*3.14)/180;
				xn=x1+((x2-x1)*cos(a)-(y2-y1)*sin(a));
				yn=y1+((x2-x1)*sin(a)+(y2-y1)*cos(a));			
				rectangle(x1,y1,xn,yn);
				break;
				
			case 3:
				rectangle(x1,y1,x2,y2);
				cout<<"Enter the Scalling factor sx and sy : ";
				cin>>sx>>sy;
				rectangle(x1*sx,y1*sy,x2*sx,y2*sy);
				break;
				
			default:
				cout<<"Wrong choice...";
		}
		cout<<"Do you want to continue press 1 else 0 : ";
		cin>>ch;
		if(ch==0)
			cout<<"Program Exited...";
	}while(ch!=0);
	
	getch();
	closegraph();
}
