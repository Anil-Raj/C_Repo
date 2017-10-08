#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
int main()
{
	int driver=DETECT,mode;
	initgraph(&driver,&mode,"c:\\tc\\bgi");
	for(int i=0;i<300;i+=10)
	{
		line(i,150,i,200);
		line(600-i,150,600-i,200);
		delay(10);
	}

	getch();
	return 0;
}
