#include<stdlib.h>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<time.h>
#include<string.h>
#include<dos.h>

class Same
{
	int x1,x2,y1,y2,pos[100][2],rc,dsp,n,prev,now,strtX,strtY,endX,endY,colr,stp,cnt,scr;
	int dly,xr,yr;
public:
	void init();
	void move();
	void score();
};
void Same:: init()
{
	time_t tm;
	srand(time(&tm));
	dsp=20;
	n=5;
	prev=4;
	for(int i=4;i>=0;i--)
	{
		pos[i][0]=201+(n-i-1)*dsp;
		pos[i][1]=301;
	}
	strtX=10;
	strtY=10;
	endX=480;
	endY=360;
	colr=14;
	now=prev;
	dsp=20;
	stp=111;
	cnt=-1;
	scr=0;
	dly=150;
	xr=3;
	yr=9;
	score();
	int x=getcolor();
	setbkcolor(3);
	setlinestyle(0,1,3);
	setcolor(15);
	rectangle(strtX-2,strtY-2,endX+2,endY+2);
	setlinestyle(0,1,1);
	settextstyle(8,0,1);
	setcolor(11);
	outtextxy(514,40,"SCORE");
	setcolor(14);
	settextstyle(11,0,5);
	outtextxy(524,110,"CONTROLS");
	outtextxy(522,135,"p=PAUSE");
	outtextxy(522,155,"g=RESUME");
	outtextxy(522,175,"e=EXIT");
	outtextxy(513,195,"ARROWS");
	outtextxy(512,205,"-MOVEMENT");
	setcolor(14);
	settextstyle(4,0,9);
	outtextxy(getmaxx()-500,getmaxy()-110,"SAME");
	settextstyle(8,0,1);
	setcolor(x);

}
void Same::move()
{

}
void Same::score()
{
}
void main()
{
	Same sm;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	sm.init();
	sm.move();
	getch();
	closegraph();
	restorecrtmode();
}
