#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");

	setbkcolor(0);
	setcolor(12);
	for(int i=40;i<520;i+=16){
	       //	setcolor(getbkcolor());
	       //	setfillstyle(1,getbkcolor());
	       setcolor(12);
	       setfillstyle(1,RED);
		fillellipse(30,i,4,8);

		delay(100);
		 if(i>=100)
		{    setcolor(getbkcolor());
		setfillstyle(0,getbkcolor());
		fillellipse(30,i-64,8,8);


		}
		delay(100);
	}
	getch();
	closegraph();

}