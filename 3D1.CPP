#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	bar3d(10,10,30,30,5,5);
	getch();
	closegraph();
}