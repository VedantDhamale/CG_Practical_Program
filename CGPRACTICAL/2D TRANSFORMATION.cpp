#include<graphics.h>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	
	int gd=DETECT,gm,ch,tx,ty,theta,sx,sy;
	initgraph(&gd,&gm,NULL);
	int x1,y1,x2,y2,xn1,xn2,yn1,yn2;
	x1=100,y1=100,x2=200,y2=200;
	
	do
	{
		cout<<"Transformation Are\n"<<"\n 1.Translation"<<"\n 2.Rotation"<<"\n 3.Scaling"<<"\n 4.Exit"<<endl;
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
				cin>>theta;
				theta=theta*(3.14)/180;
				rectangle(x1,y1,(x2-x1)*cos(theta)-(y2-y1)*sin(theta),(x2-x1)*sin(theta)+(y2-y1)*cos(theta));
				break;
		
			case 3:
				cout<<"Scaling"<<endl;	
				rectangle(x1,y1,x2,y2);
				cout<<("Enter Scaling Factor;")<<endl;
				cin>>sx>>sy;
				rectangle(x1*sx,y1*sy,x2*sx,y2*sy);
				break;
			
			case 4:
				cout<<"Exting program ...";
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



