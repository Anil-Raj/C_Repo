#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm,min;
	initgraph(&gd,&gm," c:\\tc\\bgi");
	scanf("%d",&min);
	setfillstyle(1,BLACK);
	setcolor(BLACK);
	for(;min>=0;)
	{       for(int i=60;i>1;i--){
		window(0,0,20,10);
		printf("%d:%d",min,i);fgt
		delay(1000);
		clrscr();
		}
		min--;
	}
	return 0;
}