#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
int main()
{
	int gd=DETECT,gm,x,y;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	setcolor(RED);
	x=getmaxx()/2;
	y=getmaxy()/2;
	setfillstyle(7,2);
	rectangle(x-10,y+10,x+10,y+40);
	floodfill(x,y+30,RED);
	getch();
	return 0;
}