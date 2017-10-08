/*	Hello friends!!! this clock indicates your system time.
	I hope you like this code.....
	contact: samirsolanki_online@hotmail.com	
        please change path if error in initgraph function*/

	
#include<math.h>
#include<graphics.h>
#include <bios.h>
#include <time.h>
#include <conio.h>
#include <stdio.h>
#include<stdlib.h>
#include<dos.h>
#define D 65
#define V -42
#define q 147
#define a1 0
#define a2 1

 void print_lcd(long int,int ,int ,long int );
int i=0;
long  int lcd[10][7]={{a1,a1,a1,a2,a1,a1,a1},{a2,a2,a1,a2,a2,a1,a2},{a1,a2,a1,a1,a1,a2,a1},{a1,a2,a1,a1,a2,a1,a1},{a2,a1,a1,a1,a2,a1,a2},{a1,a1,a2,a1,a2,a1,a1},{a1,a1,a2,a1,a1,a1,a1},{a1,a1,a1,a2,a2,a1,a2},{a1,a1,a1,a1,a1,a1,a1},{a1,a1,a1,a1,a2,a1,a1}};
void time_sec(long int);
void time_hun(long int);
void time_min(long int);
void time_hr(long int);
void print_lcd( long int);
void main() {
long bios_time;
  clrscr();
   int gdriver = DETECT, gmode;
initgraph(&gdriver, &gmode, "c:\\tc\\bgi ");
//m.showMousePtr();
randomize();
for(int k=0;k<5000;k++)
{
putpixel(random(getmaxx()),random(getmaxy()),k);
}
setcolor(11);
bar3d(50+V,15+q,65+V+150*4,145+q,8,1);
setcolor(11);
rectangle(0,0,getmaxx(),getmaxy());
rectangle(1,1,getmaxx()-1,getmaxy()-1);
  while(1)
	{
	if(kbhit())
	{
	nosound();
	closegraph();
	exit(1);
	}

	 _bios_timeofday(_TIME_GETCLOCK, &bios_time);
	time_sec(bios_time);

	time_hun(bios_time);
	 time_min(bios_time);
	time_hr(bios_time);
	setfillstyle(1, getmaxcolor());
       //	rectangle(450-1,450-1,600+1,380+1);
     //	bar(450,450,600,380);
	setcolor(random(15)+1);
		settextstyle(2,0,8);
		outtextxy(40,50,"Contact : samirsolanki_online@hotmail.com");
		setcolor(random(15)+2);
	outtextxy(40,51,"Contact : samirsolanki_online@hotmail.com");
			setcolor(random(15)+2);
	outtextxy(40,52,"Contact : samirsolanki_online@hotmail.com");
		setfillstyle(11,5);
		floodfill(11,12,11);
	 }
    }
   void  time_hr(long bios_time)
	 {
	 long s;
	long  int h=V,i=1,r,j,sec,k,dig[2]={0},seg[2][7];
	sec=(bios_time / CLK_TCK / 3600);
  while(sec>0)
	{
	r=sec%10;
	 dig[i]=r;
	sec=sec/10;
	i--;
	}
   for(i=0;i<10;i++)
  {
  for(j=0;j<2;j++)
  {
  if(dig[j]==i)
  {
  for(k=0;k<7;k++)
  {
  seg[j][k]=lcd[i][k];
  }
  }
  }
  }
  for(i=0;i<2;i++)
  {j=0;
  h+=D;
  // -
      setfillstyle(seg[i][j], getmaxcolor());
     bar (20+h,25+q,50+h,30+q);
     j++;
     //|
     setfillstyle(seg[i][j], getmaxcolor());
     bar (10+h,30+q,20+h,80+q);
     j++;
     //  |
     setfillstyle(seg[i][j], getmaxcolor());
     bar (50+h,30+q,60+h,80+q);
     j++;
     // -
      setfillstyle(seg[i][j], getmaxcolor());
     bar (20+h,80+q,50+h,85+q);
     j++;
     //|
     setfillstyle(seg[i][j], getmaxcolor());
     bar (10+h,85+q,20+h,130+q);
     j++;
     //  |
     setfillstyle(seg[i][j], getmaxcolor());
    bar (50+h,85+q,60+h,130+q);
    j++;
	   // -
    setfillstyle(seg[i][j], getmaxcolor());
    bar (20+h,130+q,50+h,135+q);

    }
// print_lcd(seg[],2,7,h);
    }

    void time_min(long bios_time)
    {
    int h=V+150,i=1,r,j,sec,secnd,k,dig[2]={0},seg[2][7];
   sec=bios_time / CLK_TCK / 60-60*(int)(bios_time / CLK_TCK / 3600);
  while(sec>0)
  {
  r=sec%10;
  dig[i]=r;
  sec=sec/10;
  i--;
  }
  for(i=0;i<10;i++)
  {
  for(j=0;j<2;j++)
  {
  if(dig[j]==i)
  {
  for(k=0;k<7;k++)
  {
  seg[j][k]=lcd[i][k];
  }
  }
  }
  }
for(i=0;i<2;i++)
  {j=0;
  h+=D;
  // -
      setfillstyle(seg[i][j], getmaxcolor());
     bar (20+h,25+q,50+h,30+q);
     j++;
     //|
     setfillstyle(seg[i][j], getmaxcolor());
     bar (10+h,30+q,20+h,80+q);
     j++;
     //  |
     setfillstyle(seg[i][j], getmaxcolor());
     bar (50+h,30+q,60+h,80+q);
     j++;
     // -
      setfillstyle(seg[i][j], getmaxcolor());
     bar (20+h,80+q,50+h,85+q);
     j++;
     //|
     setfillstyle(seg[i][j], getmaxcolor());
     bar (10+h,85+q,20+h,130+q);
     j++;
     //  |
     setfillstyle(seg[i][j], getmaxcolor());
    bar (50+h,85+q,60+h,130+q);
    j++;
	   // -
    setfillstyle(seg[i][j], getmaxcolor());
    bar (20+h,130+q,50+h,135+q);

    }
    }
    void time_sec(long int bios_time)
    {
  long  int h=V+150*2,i=1,r,j,sec,s,k,dig[2]={0},seg[2][7];
  s=(bios_time / CLK_TCK-(long int)(bios_time / CLK_TCK /60)*60);
  sec=s;
 while(sec>0)
  {
  r=sec%10;
  dig[i]=r;
  sec=sec/10;
  i--;
  }
  for(i=0;i<10;i++)
  {
  for(j=0;j<2;j++)
  {
  if(dig[j]==i)
  {
  for(k=0;k<7;k++)
  {
  seg[j][k]=lcd[i][k];
  }
  }
  }
  }
for(i=0;i<2;i++)
  {j=0;
  h+=D;
  // -
      setfillstyle(seg[i][j], getmaxcolor());
     bar (20+h,25+q,50+h,30+q);
     j++;
     //|
     setfillstyle(seg[i][j], getmaxcolor());
     bar (10+h,30+q,20+h,80+q);
     j++;
     //  |
     setfillstyle(seg[i][j], getmaxcolor());
     bar (50+h,30+q,60+h,80+q);
     j++;
     // -
      setfillstyle(seg[i][j], getmaxcolor());
     bar (20+h,80+q,50+h,85+q);
     j++;
     //|
     setfillstyle(seg[i][j], getmaxcolor());
     bar (10+h,85+q,20+h,130+q);
     j++;
     //  |
     setfillstyle(seg[i][j], getmaxcolor());
    bar (50+h,85+q,60+h,130+q);
    j++;
	   // -
    setfillstyle(seg[i][j], getmaxcolor());
    bar (20+h,130+q,50+h,135+q);
    }
   }
     void time_hun(long bios_time)
    {
    int h=V+150*3,i=1,r,j,sec,secnd,k,dig[2],seg[2][7],fl;
  sec=((bios_time / CLK_TCK-(long int)(bios_time / CLK_TCK /60)*60)*100);
  sec=sec%100;
  int pp;
  if(sec<80)
  {
   pp=15;
  }
  else
  {

  pp=0;
  }
  if(sec<80)
  {
  nosound();
  }
  else
  {
  sound(1000);
  }
	int cc=0;
		for(int g=0;g<3;g++)
		{

		setfillstyle(1,pp);
		bar(160+g*150,250+cc,170+g*150,260+cc);
		bar(160+g*150,200+cc,170+g*150,210+cc);
				}
while(sec>0)
  {
  r=sec%10;
  dig[i]=r;
  sec=sec/10;
  i--;
  }
  for(i=0;i<10;i++)
  {
  for(j=0;j<2;j++)
  {
  if(dig[j]==i)
  {
  for(k=0;k<7;k++)
  {
  seg[j][k]=lcd[i][k];
  }
  }
  }
  }
for(i=0;i<2;i++)
 {j=0;
  h+=D;
  // -
      setfillstyle(seg[i][j], getmaxcolor());
     bar (20+h,25+q,50+h,30+q);
     j++;
     //|
     setfillstyle(seg[i][j], getmaxcolor());
     bar (10+h,30+q,20+h,80+q);
     j++;
     //  |
     setfillstyle(seg[i][j], getmaxcolor());
     bar (50+h,30+q,60+h,80+q);
     j++;
     // -
      setfillstyle(seg[i][j], getmaxcolor());
     bar (20+h,80+q,50+h,85+q);
     j++;
     //|
     setfillstyle(seg[i][j], getmaxcolor());
     bar (10+h,85+q,20+h,130+q);
     j++;
     //  |
     setfillstyle(seg[i][j], getmaxcolor());
    bar (50+h,85+q,60+h,130+q);
    j++;
	   // -
    setfillstyle(seg[i][j], getmaxcolor());
    bar (20+h,130+q,50+h,135+q);

    }
    }

