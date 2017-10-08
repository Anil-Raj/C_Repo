#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
#include<time.h>
#include<iostream.h>
union REGS in,out;
void player(int x1,int y1);
void bk(int d1);
void showmouseptr(void);
void getmousepos(int *button, int *x,  int *y);
void restrictmouseptr(int x1, int y1,  int x2, int y2);
void main()
{
clrscr();
int gdriver = DETECT, gmode;
initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
int  stop=1,a,b,x,r,y,button,i=1,d=1,p=0;
textcolor(0);
cout<<"WELCOME TO SHOOTING  GAME\n";
cout<<"SHOOT ALL THE INCOMING  BOMBS BY USING LEFT  CLICK\nGET MORE POINTS TO  DESTROY THEM EARLY\nPRESS  ANY KET TO CONTINUE\nPRESS  ENTER AT ANY POINT TO EXIT THE GAME"; while(1) {
 if(kbhit()) {

a=getch(); break; } } 	clrscr(); a=1;
restrictmouseptr(0,0,635,430);
cout<<"points:: 0000";
while(stop==1) {
 setcolor(2);
//showmouseptr();
 getmousepos(&button,&x, &y);
 player(x,y);
 setcolor(1);
 if(kbhit())
 {

a=getch();
if(a+100==172) d++;
if(a==13) stop=0;
a=1;
}
bk(i);
if(i%72==1)
r=random(200);
setcolor(RED);
circle(200+r-(i%72)*(i%72) /16,100+r-(i%72)*(i%72) /16,(i%72)*(i%72)/40);
//setcolor(3);
//floodfill(200+r-(i%72)*(i%72) /16,100+r-(i%72)*(i%72) /16,3);
if(button==1) {
 circle(x,y,10); if(x<200+r-(i%72)*(i%72) /16+(i%72)*(i%72) /40&&x>200+r-(i%72)*(i%72) /16-(i%72)*(i%72) /40&&y<100+r-(i%72)*(i%72) /16+(i%72)*(i%72) /40&&y>100+r-(i%72)*(i%72) /16-(i%72)*(i%72)/40)
 {

p=p+100-i%72; cout<<"NICE SHOT shot point=" <<100-i%72;
 delay(80);
 sound(1000);delay(300);nosound(); 	clrscr(); cout<<"points:: 00"<<p; i=0; } } delay(100);
setcolor(16); bk(i); player(x,y);
if(button==1)
circle(x,y,10);
circle(200+r-(i%72)*(i%72) /16,100+r-(i%72)*(i%72) /16,(i%72)*(i%72)/40);
i++;
}
getch();
}
void bk(int d1)
{
int i;
for(i=1;i<=18;i++)
{
rectangle(150-(i+d1%5 /2)*i/2,100-(i+d1%5 /2)*i/2,500+(i+d1%5 /2)*i/2,300+(i+d1%5/2)*i/2);
}
}
void player(int x1,int y1) {
circle(x1,y1,1);
rectangle(300,300,330,330);
rectangle(280,330,340,380);
rectangle(300,380,330,430);
line(315,380,315,430);
line(335,330,345-(335- x1)/5,330-(330-y1)/5);
}
void
restrictmouseptr(int x1, int y1,  int x2, int y2)
{
in.x.ax=7;
in.x.cx=x1;
in.x.dx=x2;
int86(0x33,&in, &out);
in.x.ax=8;
in.x.cx=y1;
in.x.dx=y2;
int86(0x33, &in, &out);
}
void showmouseptr(void) {

in.x.ax=1;
int86(0x33, &in, &out);
}
void getmousepos(int *button, int *x,  int *y) {

in.x.ax=3;
int86(0x33, &in, &out);
*button=out.x.bx;
*x=out.x.cx;
*y=out.x.dx;
}