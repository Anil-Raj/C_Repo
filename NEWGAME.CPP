#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
#include<stdlib.h>
#include<iostream.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	setcolor(12);
	for(int i=0;i<300;i++)
	{
	rectangle(30,40+i,60,80+i);
	floodfill(35,41+i,12);
	delay(10);
	clearviewport();}

	return 0;
}