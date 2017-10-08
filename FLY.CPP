#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

void mov()
{
	int l=190,r=205,t=150,b=165,g;
	setfillstyle(2,2);
	ellipse(l,t,0,360,r,b);
	fillellipse(l+1,t+1,5,getmaxcolor());


}
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	setfillstyle(1,3);
	rectangle(150,50,350,450);
	floodfill(151,51,getmaxcolor());
	mov();
	getch();
	return 0;
}