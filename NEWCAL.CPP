#include<math.h>
#include<iostream.h>
#include<conio.h>
void main()
{

	int rad=1500;
	clrscr();
	for(double i=45;i<=45;i=i+1)
	{
	double phi=((3.14159)/180)*i;
	for(double j=44.9;j<=45.01;j=j+=0.005)
	{
	    double theta,x,y,z;
	    theta=((3.14159)/180)*j;
	    x=rad*cos(phi)*cos(theta);
	    y=rad*sin(theta)*cos(phi);
	    z=rad*sin(phi);
	    cout<<x<<"  "<<y<<"  "<<z<<endl;
	}
	}
	getch();
}