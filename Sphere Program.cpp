
#include"3dframe.CPP"
void draw_sphere()
{
	int arr[4];
	int rad=1500;
	for(double i=0;i<90;i=i+1)
	{
	double phi=((3.14159)/180)*i;
	for(double j=0;j<90;j=j+0.05)
	{
	    double theta,x,y,z;
	    theta=((3.14159)/180)*j;
	    x=rad*cos(phi)*cos(theta);
	    y=rad*sin(theta)*cos(phi);
	    z=rad*sin(phi);
	    putxyz(int(x),-int(y),-(int)z,arr,BLUE);
	    putxyz(int(x),-int(y),(int )z,arr,  BLUE);
	    putxyz(-int(x),-int(y), (int)z,arr,MAGENTA);
	    putxyz(-int(x),-int(y),-(int)z,arr,MAGENTA);

	}
	}

	for(  i=0;i<=90;i=i+1)
	{
		double phi=((3.14159)/180)*i;
		for(double j=0;j<90;j=j+0.05)
		{
			double theta,x,y,z;
			theta=((3.14159)/180)*j;
			x=rad*cos(phi)*cos(theta);
			y=rad*sin(theta)*cos(phi);
			z=rad*sin(phi);
			putxyz(int(x),int(y), (int)z,arr,GREEN);
			putxyz(int(x),int(y),-(int)z,arr,GREEN);
			putxyz(-int(x),int(y),-(int)z,arr,RED);
			putxyz(-int(x),int(y), (int)z,arr,RED);


		}
	}
}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc \\bgi");
	DRAW3DFRAME();
	cleardevice();
	draw_sphere();
	getch();
	closegraph();
}