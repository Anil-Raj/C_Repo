
#include"3dframe.CPP"
void draw_sphere()
{
	int arr[4];
	int arr2[4];
	int len=3000,wid=2000,ber=300;
	for(int i=-1000;i<len;i+=10)
	for(int j=0;j<wid;j+=10){
	putxyz(0,i,j,arr,RED);
	putxyz(i,0,j,arr,GREEN);
	putxyz(j,i-100,500,arr,BLUE);
	putxyz(-j,-i+100,500,arr,BLUE);


       //	putxyz(1000,-1000,0,arr,RED);
			       }



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