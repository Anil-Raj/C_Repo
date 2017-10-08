#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
int main()
{
	int driver=DETECT,mode;
	 int left, top, right, bottom;
	initgraph(&driver,&mode,"c:\\tc\\bgi");
	left = getmaxx() / 2 - 10;
	top = getmaxy() / 2 - 10;
	right = getmaxx() / 2 + 10;
	bottom = getmaxy() / 2 + 10;
	for(int x=0;x<2;x++){ clrscr();
	int j=0;
	for(int i=0;i<=400;i+=10)
	{       setcolor(j++);
		ellipse(left,top,0,360,30+i,30+i);
		delay(5);
		if(i==400)
		{       for(int k=0;k<=400;k+=10){
			setcolor(j++);
			rectangle(left+400-k,top+400-k,right-400+k,bottom-400+k);
			delay(500);}
		}

	}
	}
	getch();
	return 0;
}

