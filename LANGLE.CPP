#include<gg.hh>
union REGS in,out;
void showmouseptr(void);
void getmousepos(int *button, int *x,  int *y);
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

int main()
{
	int gd=DETECT,gm;
	int button,x,y;
	initgraph(&gd,&gm,"c://tc");
	restrictmouseptr(0,0,635,430);
	showmouseptr();
	while(!kbhit()){
		getmousepos(&button,&x, &y);
			     }
	line(x,y,100,100);
	getch();
	return 0;
}

void getmousepos(int *button, int *x,  int *y) {

in.x.ax=3;
int86(0x33, &in, &out);
*button=out.x.bx;
*x=out.x.cx;
*y=out.x.dx;
}
void showmouseptr(void) {

in.x.ax=1;
int86(0x33, &in, &out);
}
