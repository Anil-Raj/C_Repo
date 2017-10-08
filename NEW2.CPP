#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	int driver=DETECT,mode;
	initgraph(&driver,&mode,"c:\\tc\\bgi");
	setcolor(10);
	rectangle(100,100,110,110);
	floodfill(102,102,10);
	getch();
	return 0;
}
