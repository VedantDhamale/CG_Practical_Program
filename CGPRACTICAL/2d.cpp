#include<graphics.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int gd=DETECT,gm,ch,tx,ty,theta,sx,sy;
	int x1,y1,x2,y2;
	x1=200,y1=200,x2=300,y2=300;
	initgraph(&gd,&gm,NULL);
	cout<<"Transformation are \n 1.Translation \n2.Rotation \n3.scalling:";
	cout<<"\nEnter your choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
		
			rectangle(x1,y1,x2,y2);
			cout<<"Translation Amout:-:";
			cin>>tx>>ty;
			rectangle(x1+tx,y1+ty,x2+tx,y2+ty);
			break;
		
		case 2:
			
				cout<<"Rotation:";
				rectangle(x1,y1,x2,y2);
				cout<<"Enter angle of rotation:";
				cin>>theta;
				theta=(theta*3.14)/180;
				rectangle(x1,y1,(x2-x1)*cos(theta)-(y2-y1)*sin(theta),(x2-x1)*sin(theta)+(y2-y1)*cos(theta));
				break;
				
				case 3:
					
						cout<<"scaling";
						rectangle(x1,y1,x2,y2);
						cout<<"Enter the scaling factor; ";
						cin>>sx>>sy;
						rectangle(x1,y1,(x2-x1)*sx,(y2-y1)*sy);
						break;
					
					default:
						
							cout<<"wrong choice";
							break;
					
						
						
					
			}
        	getch();
			closegraph();
		      	
		}
