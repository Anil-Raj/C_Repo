
#include"3dframe.CPP"
void draw_sphere()
{	int arr[4];
	for(int i=0;i<500;i++)
		for(int j=0;j<200;j++)
	 putxyz(0+i,0+j,0,arr,50);
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