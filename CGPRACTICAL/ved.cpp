#include<graphics.h>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int gd=DETECT,gm,ch,tx,ty,sx,sy,x1,y1,x2,y2;
	initgraph(&gd,&gm,NULL);
	long xn,yn;
	double a;
	x1=100,y1=100,x2=200,y2=200;
	do
	{
		cout<<"Transformation Are\n"<<"\n 1.Translation"<<"\n 2.Rotation"<<"\n 3.Scaling"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Translation"<<endl;
				rectangle(x1,y1,x2,y2);
				cout<<"Enter Translation Amount:-";
				cin>>tx>>ty;
				rectangle(x1+tx,y1+ty,x2+tx,y2+ty);
				break;	

			case 2:
				cout<<"Rotation"<<endl;
				rectangle(x1,y1,x2,y2);
				cout<<"Enter angle of rotation"<<endl;
				cin>>a;
				a=(a*3.14)/180;
				 xn=x1+((x2-x1)*cos(a)-(y2-y1)*sin(a));
				 yn=y1+((x2-x1)*sin(a)+(y2-y1)*cos(a));
				rectangle(x1,y1,xn,yn);
				break;
		
			case 3:
				cout<<"Scaling"<<endl;	
				rectangle(x1,y1,x2,y2);
				cout<<("Enter Scaling Factor;")<<endl;
				cin>>sx>>sy;
				rectangle(x1*sx,y1*sy,x2*sx,y2*sy);
				break;
			
			default:
				cout<<"wrong choice"<<endl;
				break;
		}
		cout<<"Do you want to continue press 1 else press 0: ";
		cin>>ch;
	}while(ch!=0);
	cout<<"Finished Execution ";
	getch();
	closegraph();
}



