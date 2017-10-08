#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<iostream.h>
#include <io.h>
#include <string.h>



int left[50],right[50];
int y[5000];
int xxx=200;
double rg=200.0000;
int ch;
char c;
int po=0;
char s[10];
int max=5000;
int sc;
int max_score;
int m;
void draw(int l,double rr)
{       int r=rr;
	setfillstyle(1,YELLOW);
	fillellipse(l,r,10,8);

}

void back()
{   /*   int m;
	int left=150;
	for(int x=0;x<=5;x++){
	m=(rand()%50)+25;

	setcolor(RED);
	rectangle(left,450-m,left+30,450);
	left+=33;
	}

	setcolor(GREEN);    */
 }
void er(int l,int rr)
{
       int r=rr;
       setcolor(LIGHTBLUE);
	setfillstyle(1,LIGHTBLUE);
	fillellipse(l,r,10,10);

}
void fall(int xx,double rg,int m)
{
	draw(xx,rg);
	delay(300);
	for(;rg<444;)  {
	setcolor(GREEN);
	setfillstyle(1,GREEN);
	rectangle(left[m],50,right[m],y[m]);
	rectangle(left[m],y[m]+80,right[m],450);
	rectangle(left[m+1],50,right[m+1],y[m+1]);
	rectangle(left[m+1],y[m+1]+80,right[m+1],450);
	draw(xx,rg);

	outtextxy(150,100,"GAME OVER");
	delay(50);

	rg+=2;
	er(xx,rg-3);
	setcolor(LIGHTBLUE);
	rectangle(150,50,250,100);
	floodfill(151,51,LIGHTBLUE);

	  }
}
void out(int m)
{

	delay(100);
	clrscr();
	clrscr();
	rectangle(150,50,350,450);
	outtextxy(170,70,"SCORE:");
	itoa(m,s,10);
	outtextxy(230,70,s);
	outtextxy(170,100,"MAX SCORE:");

	itoa(max_score,s,10);
	outtextxy(270,100,s);

	outtextxy(170,130,"ENTER X TO EXIT");
	cin>> c;
	 unsigned count;
	int handle;




	_dos_write(handle,s, strlen(s), &count);
	_dos_close(handle);

	if(c=='x'||c=='X'){
	delay(100);
	exit(0);           }
}
void get()
{

	       int j=0;//,k=0;




		for(int i=0;i<max;i++)

		{      // if(i>40)

			y[i]=150+(rand()%200);
			j=i-40;
		     //	else j=0;
		    //	if(i>300) k++;
			for(m=0;m<50;m++)
			{
				left[m]=350-i+100*m;
					right[m]=350-j+100*m;

			}
			setcolor(GREEN);
			for(int n=0;n<50;n++)
			{
				int m=n;
				 setfillstyle(1,GREEN);
				 setcolor(GREEN);
			       if(n==0)	back();
				rectangle(left[m],50,right[m],y[m]);
				rectangle(left[m],y[m]+80,right[m],450);
				draw(xxx,rg);
			     //	delay(1);
			       if(n%7==0)	er(xxx,rg);
				if(po>0){
					rg-=.09;po--;
					}
				else rg+=.06;
				if(rg<59) rg+=4;
				if(rg>445)rg-=4;

				if((xxx+8>left[m]&&rg-10<=y[m]&&xxx-7<left[m]+41)||(xxx+7>left[m]&&rg+7>=y[m]+80&&xxx-7<right[m]))
				{       fall(xxx,rg,m);
					out(m);
				}



				if(kbhit())
				{
					ch=getch();
					if(ch==13)
					po=450;
				}


			}
			       //	if(xxx>right[i])cout<<i+1;
				setfillstyle(1,LIGHTBLUE);
				bar(150,50,350,450);

		}




}
void init()
{
	setfillstyle(1,LIGHTBLUE);
	rectangle(150,50,350,450);
	floodfill(151,51,getmaxcolor());
	rectangle(150,450,350,470);
	setfillstyle(3,GREEN);
	floodfill(151,451,getmaxcolor());
}
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	setbkcolor(GREEN);
	init();
	getch();

    get();


      //	getch();
	return 0;
}



