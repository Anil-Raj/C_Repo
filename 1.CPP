
#include <graphics.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{

   int gdriver = DETECT, gmode, errorcode;
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
   ellipse(100,200,0,30,30,20);
   circle(200,200,10);
   putpixel(200,202,2);
   putpixel(200,200,1);
   getch();


   closegraph();
   return 0;
}

