
#include<stdlib.h>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<time.h>
#include<string.h>
#include<dos.h>

class Snake
{
	int p1,p2,v1,v2,v3,e1,e2,prev,now,n,colr,dsp,cnt,dly,m;
	int stp,plGen;
	int xr,yr;


public:	void caught();

	int strtX,strtY,endX,endY;
	int pos[100][2];
	void show();
	void init();
	void pol();

	void win();
	void check();
	void move();
	void chngDir();
	void sndEt();
	void sndCgt();
	int test();
	void score();
	void clrscore();
	Snake();
    //	Snake(Snake*);
	~Snake();
};
Snake::Snake(){}

Snake::~Snake(){}


void Snake::sndEt()
{
	nosound();
      //	sound(2500);
	delay(2);
	nosound();
}

void Snake::sndCgt()
{
	nosound();
	for(int x=1000;x>0;x--)
	{
	 //	sound(x);
		delay(1);
	}
	nosound();
}




void Snake::check()
{


	pos[0][0]=p1;
	pos[0][1]=p2;
	for(int i=2;i<n;i++)
	{
		if(p1==pos[i-1][0]&&p2==pos[i-1][1])
		{
			caught();
			break;
		}
	}
}
void Snake::show()
{
	int x=getcolor();
	if(1)
	{
		setcolor(getbkcolor());
		setfillstyle(1,getbkcolor());
		fillellipse(v1,v2,yr,yr);
	}


	setcolor(colr);
	setfillstyle(1,9);
	if(now==8)
		fillellipse(pos[0][0],pos[0][1],xr,yr);
	else if(now==2)
		fillellipse(pos[0][0],pos[0][1],xr,yr);

	else if(now==4)
		fillellipse(pos[0][0],pos[0][1],yr,xr);
	else if(now==1)
		fillellipse(pos[0][0],pos[0][1],yr,xr);

	setcolor(x);
}
void Snake::win()
{       char ch;
	clrscr();
	printf("\n\t\n\tlevel completed\n\t\tpress enter");
	sleep(1);
	getch();
	closegraph();
	restorecrtmode();

 }


void Snake::move()
{
	int st=0;
	do{
		if(!kbhit())
		{

			if(!st)

				show();
			else
				st=0;
			delay(dly/4);

			delay(dly/4);
			delay(dly/4);
			check();
			delay(dly/4);
		}
		else if(stp)
		{



			check();
			show();
			st=1;
		}
	}while(stp);
}

void Snake::init()
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
	strtX=150;
	strtY=50;
	endX=350;
	endY=450;
	colr=14;
	now=prev;
	dsp=20;
	stp=111;
	cnt=-1;

	dly=150;
	xr=3;
	yr=9;



	int x=getcolor();
	setlinestyle(0,1,3);
	setcolor(15);
	rectangle(strtX,strtY,endX,endY);




}
void Snake::caught()
{
	stp=0;
	sndCgt();
	for(int i=0;i<=7;i++)
	{
		if(i%2)
		{
			setcolor(10);
			outtextxy(512,250,"GAME OVER");
			delay(900);
		}
		else
		{
			setcolor(0);
			outtextxy(512,250,"GAME OVER");
			delay(500);
		}
	}



}


void Snake::chngDir()
{
	int clr;
	fillsettingstype *p;
	char x=getch();
	if(x==72)
		now=8;
	else if(x==77)
		now=4;
	else if(x==80)
		now=2;
	else if(x==75)
		now=1;
	else if((x=='e')||(x=='E'))
		caught();
	else if((x=='p')||(x=='P'))
	{
	    //	int y=getcolor();
		int twnkl=1;
		settextstyle(11,0,9);
		while(1)
		{
			if(!kbhit())
			{
				int c=getch();
				if((c=='g')||(c=='G'))
				{
					clr=getcolor();
					setcolor(0);
					rectangle(endX+40,endY-10,getmaxx()-35,getmaxy()-160);
					outtextxy(endX+60,endY-29,"PAUSE");
					break;
				}
			}
			else
			{
				if(twnkl%2)
				{
					clr=getcolor();
					setcolor(10);
					rectangle(endX+40,endY-10,getmaxx()-35,getmaxy()-160);
					outtextxy(endX+60,endY-29,"PAUSE");
					setcolor(clr);
					delay(1000);
				}
				else
				{
					clr=getcolor();
					setcolor(0);
					rectangle(endX+40,endY-10,getmaxx()-35,getmaxy()-160);
					outtextxy(endX+60,endY-29,"PAUSE");
					setcolor(clr);
					delay(1000);
				}
			}
			twnkl++;
		}
		settextstyle(8,0,1);
	}

}

//Snake::Snake(Snake *p)
//{

 //	p=NULL;
//}


int Snake::test()
{
	for(int i=0;i<n;i++)
	{
		if(e1==pos[i][0]&&e2==pos[i][1])
		break;
		if(v1==e1&&v2==e2)
			break;
		if((e1>=endX+1)||(e2>=endY+1))
			break;
	}
	if(i!=n)
		return 1;
	else
		return 0;
}


void main()
{
	Snake snk;
	int gd=DETECT,gm,i,j,k,x,y;
	clrscr();
	initgraph(&gd,&gm,"c:\\tc\\BGI");
	setbkcolor(3);
	snk.init();
	snk.move();
	closegraph();
	restorecrtmode();

}
