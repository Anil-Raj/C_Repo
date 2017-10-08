
#include"3dframe.CPP"
void draw_sphere()
{
	int arr[4];
	int rad=1500;
	int x1=00;int y1=00;int z1=00;
	int l_x=500,b_y=500,h_z=500;
	for(double i=0;i<360;i=i+1)
	{

	}


	for(  i=0;i<=90;i=i+1)
	{
		double phi=((3.14159)/180)*i;
		for(double j=0;j<90;j=j+0.005)
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