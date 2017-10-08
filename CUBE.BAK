
#include"3dframe.CPP"
void draw_sphere()
{
	int arr[4];
	int arr2[4];
	int len=500,wid=500,ber=300;
       for(double i=0;i<len;i+=5)
	for(double j=0;j<wid;j+=5){
	putxyz(i,j,500,arr,BLUE);
	putxyz(500,j,i,arr,RED);
	putxyz(i,500,j,arr,GREEN);

	}
	for(i=0;i<len;i+=5)
	for(j=0;j<wid;j+=5){
	putxyz(i,j,0,arr,BLUE);
	putxyz(00,j,i,arr,RED);
	putxyz(i,00,j,arr,GREEN);

	}
	polyhedron(0,0,0,500,500,500);




}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc \\bgi");
	DRAW3DFRAME();
       //	setbkcolor(LIGHTCYAN);
       cleardevice();
	draw_sphere();
	getch();
	closegraph();
}