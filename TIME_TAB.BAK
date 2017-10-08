#include <dos.h>
#include<conio.h>
#include<graphics.h>
#include<iostream.h>
#include<stdlib.h>


int main(void)
{
   struct date d;
   clrscr();
   int gd=DETECT,gm,j=1,pos,poly[4]={10,100,60,180};
   char year[10],month[10],da[10];
   initgraph(&gd,&gm,"c:\\tc\\bgi");
   rectangle(10,10,630,420);
   for(int i=1;i<8;i++)
   {
	if(i<7)line(10,60*i,630,60*i);
	line(90*i,60,90*i,420);

   }
   settextstyle(3,HORIZ_DIR,4);
   setcolor(5);
   outtextxy(20,70,"MON");
   outtextxy(100,70,"TUE");
   outtextxy(185,70,"WED");
   outtextxy(275,70,"THU");
   outtextxy(370,70,"FRI");
   outtextxy(460,70,"SAT");
   outtextxy(550,70,"SUN");
   getdate(&d);
   moveto(100,10);
   itoa(d.da_year,year,10);
   itoa(d.da_mon,month,10);
   setcolor(9);
   settextstyle(4,HORIZ_DIR,1);
   outtextxy(520,10,month);
   outtextxy(530,10,"/");
  outtextxy(550,10,year);
  int y=2;
  for(i=90;i<=630&&j<30;i+=90)
  {

	itoa(j,da,10);
	outtextxy(i-20,65*y,da);
	if(i==630){y++;i=0;}
	j++;
  }
  while(1)
  {
	cin>>pos;
	fillpoly(3,poly);
  }
   getch();
   return 0;
}
