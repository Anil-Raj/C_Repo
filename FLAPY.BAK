
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void get(int y,int lx)
{       int j=0,k=0;  for(int l=0;l<lx;l++)
	for(int i=0;i<270;i++)
	{       if(i>40) j=i-40;
		else j=0;
		if(i>250) k++;
		setfillstyle(1,GREEN);
		rectangle(400-i+k,100,400-j,y);
		rectangle(400-i+k,y+60,400-j,430);
		floodfill(405-i+k,101,getmaxcolor());
		floodfill(405-i+k,y+61,getmaxcolor());

		delay(20);
		setfillstyle(1,LIGHTBLUE);
	       bar(150,100,400,430);

	}
}



int main()
{
	int gd=DETECT,gm,i,j;
	initgraph(&gd,&gm,"c:\\tc\\bgi");

	setbkcolor(GREEN);
	setfillstyle(1,LIGHTBLUE);
	rectangle(150,100,400,450);
	floodfill(160,120,getmaxcolor());
	setfillstyle(1,3);
	rectangle(150,430,400,450);
	floodfill(160,440,getmaxcolor());
	getch();
	int y=100+(rand()%200);
	get(y);

      //	moveflore();
	getch();
	return 0;
}
