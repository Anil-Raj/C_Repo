#include <graphics.h>
#include   <dos.h>
#include <stdlib.h>
#include  	<stdio.h>
#include <conio.h>
#include  <bios.h>
#include <string.h>
#include<process.h>
#define DELAYS 10
#define INTR 0X1C
#ifdef__cplusplus
#define __CPPARGS ...
#else
#define __CPPARGS
#endif
void interrupt (*oldhandler) (__CPPARGS);
int  loop=0;
void interrupt  handler(__CPPARGS)
{
    disable(); loop++;
    enable();  oldhandler();
}
#define LCLICK 1
#define RCLICK 2
#define SPECIAL_KEY bioskey
#define RIGHT_ARROW 0x4d00
#define LEFT_ARROW 0x4b00
#define UP_ARROW 0x4800
#define DOWN_ARROW 0x5000
#define ESC 0x11b
#define  ENTER 0x1c0d
#define  BACKSPACE 0xe08
#define  SPACEBAR 0x3920
#define F1  0x3b00
#define F2 0x3c00
#define F3 0x3d00
#define F4  0x3e00
#define F5 0x3f00
#define F6 0x4000
/////////////*********  Declaration For Mouse Control **************///////////
class mouseobj{
	 public : 	    void    init();
	 void show();
	 void hide();
	 int post( int , int ,int ,int );
	 int press();
	 void vert_limit( int ,int );
	 void horiz_limit( int ,int );
	 };
void mouseobj::init()
{
	asm {mov ax,0x00;  int 0x33 }
}
void mouseobj::show()
{
	asm {mov ax,0x01;  int 0x33 }
}
 void mouseobj::hide(){  asm {mov  	ax,0x02;  int 0x33 } } void mouseobj::horiz_limit(  int minx,  int maxx ) {
 union REGS inregs,outregs; inregs.x.ax = 7; inregs.x.cx = minx; inregs.x.dx = maxx; int86(0x33,&inregs,&outregs); } void mouseobj::vert_limit(  int miny,  int maxy ){
 union REGS inregs,outregs; inregs.x.ax = 8; inregs.x.cx = miny; inregs.x.dx = maxy;int86(0x33,&inregs,&outregs); } int mouseobj::post( int left, int top, int right, int buttom) {  union REGS inregs,outregs; inregs.x.ax=3;  	  int86(0x33,&inregs,&outregs); return (outregs.x.cx>=left &&  outregs.x.cx<=right && outregs.x.dx>=top &&  outregs.x.dx<=buttom); } int mouseobj::press(){
 union REGS inregs,outregs; inregs.x.ax=3;  	  int86(0x33,&inregs,&outregs); return (outregs.x.bx); 			      }  /******************************* ******************/ char buf[80];  /*Class Interface (Base Class)*/ class interf {
 protected : int maxx,maxy;
public :void shadow_outtext(  int ,int ,char *,int ,int ,int );
	void thin_box(  int ,int ,int ,int ,int ,int ,int );
	void sizable_box(  int ,int ,int ,int ,int ,int ,int ,int );
	void quit_box(  int ,int ,int ,int );
	char box_exit();
	void interface();
};

/*Class Derive*/

class gameobj: public interf{
private :
	int x,y,color;
	int i,j;
public : int stage,stage_h;
	gameobj( int ,int ); void caro( int ,int ,int ); void show_text();
	void make_caro( int ,int ,int ,int );
	void fullclear( int cross[][45], int );
	void show_score( long );
	void show_next( int *);
	int not_miny( int ,int ,int ,int cross[][45]); int chang_stage( int *,int chang); void
	show_stage( int *,long ,int );
	void show_stage_h( int );
	int win();
	void lost();
};
void interf::thin_box( int x, int y, int x1, int y1, int width, int color, int color1)
{
	for ( int i=0;i<width;i++)
	{
		setcolor(color);
		line(x+i,y+i,x+i,y1-i);
		line(x+i,y+i,x1-i,y+i);
		setcolor(color1);line(x+i,y1-i,x1-i,y1-i); 			       line(x1-i,y+i,x1-i,y1-i); }} void interf::sizable_box( int x, int y, int x1, int y1, int width,int thick, int color,int color1)
		{

			thin_box(x, y, x1, y1, width, color,  color1);
			thin_box(x+thick, y+thick, x1-thick,   y1-thick, width, color1, color);

		}
		void interf::shadow_outtext( int x, int y, char *str, int color, int sh_color, int shadow)
		{
			setcolor(color);
			outtextxy(x- shadow,y-shadow,str);
			setcolor(sh_color);
			outtextxy(x,y,str);
		}
		void interf::quit_box( int x, int y, int z, int w)
		{
			thin_box(x,y,z,w,2,15,8);
			setfillstyle(1,7);
			bar(x+2,y+2,z-  2,w-2);
			settextstyle(0,0,1);
			setcolor(0);
			outtextxy(x+4,y+3, "x" );
		}
		char interf::box_exit()
		{
			sizable_box(maxx/2-150,maxy /2-60,maxx/2+150,maxy /2+60,1,1,15,8);
			thin_box(maxx/2-95,maxy /2+20,maxx/2-30,maxy /2+50,1,15,8);
			thin_box(maxx/2+20,maxy /2+20,maxx/2+90,maxy /2+50,1,15,8);
			setcolor(0);
			setusercharsize(2,5,2,5);
			settextstyle(installuserfont("kh02.chr" ),HORIZ_DIR,USER_CHAR_SIZE);
			outtextxy(maxx/2+30,maxy/2+18, "Qb;elg" );
			outtextxy(maxx/2-85,maxy/2+18, 	"elgeTot" );
			class mouseobj mouse;
			mouse.init();
			while (1)
			{
				mouse.show();
				mouse.horiz_limit(maxx/2-150,maxx /2+150);
				mouse.vert_limit(maxy /2-60,maxy/2+60);
				if (mouse.post(maxx/2-95,maxy /2+20,maxx/2-30,maxy/2+50))
				{
					if (mouse.press()==LCLICK)
					{
					   while (mouse.press()==LCLICK)
						thin_box(maxx/2-95,maxy /2+20,maxx/2-30,maxy /2+50,1,8,15);
					   mouse.hide();
					   thin_box(maxx/2-95,maxy /2+20,maxx/2-30,maxy /2+50,1,15,8);
					   if (mouse.post(maxx/2-95,maxy /2+20,maxx/2-30,maxy/2+50))
						return ( 'y' );
					   }
				}
				if (mouse.post(maxx/2+20,maxy /2+20,maxx/2+90,maxy/2+50))
				{
					 if (mouse.press()==LCLICK)
					 {
						while (mouse.press()==LCLICK) thin_box(maxx/2+20,maxy /2+20,maxx/2+90,maxy /2+50,1,8,15);
						mouse.hide();
						thin_box(maxx/2+20,maxy /2+20,maxx/2+90,maxy /2+50,1,15,8);
						if (mouse.post(maxx/2+20,maxy /2+20,maxx/2+90,maxy/2+50))
							return ('n' );
					 }
				}
			}
		}
		void interf::interface()
		{
			setfillstyle(1,3);
			bar(0,0,maxx,maxy);
			for ( int i=0;i<8;i++)
				thin_box(1,maxy-20+3*i,maxx- 1,maxy-21+3*i,1,15,8);
			for (i=0;i<9;i++)
				thin_box(1,17-2*i,maxx- 1,16-2*i,1,15,8);
			thin_box(180,maxy- 23,181,18,1,15,8);
			thin_box(182,maxy- 23,183,18,1,15,8);
			setfillstyle(1,0);
			bar(30,270,150,300);
			bar(30,150,150,220);
			thin_box(30,150,150,220,2,8,15);
			thin_box(30,270,150,300,2,8,15);
			bar(maxx/2-77,50,maxx /2+77,maxy-55);
			thin_box(maxx/2-77,50,maxx /2+77,maxy-55,2,8,15);
		}
		gameobj::gameobj( int xIn, int yIn)
		{

			maxx=xIn;
			maxy=yIn;
			stage = stage_h = 1;
		}
		void gameobj::caro( int x, int y, int color)
		{
			setfillstyle(1,color);
			bar(maxx/2-75+10*x,60+10*y,maxx /2-67+10*x,52+10*y);
			color?thin_box(maxx /2-74+10*x,60+10*y,maxx /2-66+10*x,52+10*y,1,15,8):
			thin_box(maxx /2-74+10*x,60+10*y,maxx /2-66+10*x,52+10*y,1,0,0);
		}
		void gameobj::make_caro( int CARO, int cx, int cy, int col)
		{
			x = cx;
			y = cy;
			color = col;
			setfillstyle(1,color);
			if ((CARO>=0&&CARO<4)||
			(CARO>4&&CARO<=7)||
				CARO==10||CARO==11||
			(CARO>12&&CARO<16)||
			(CARO>17&&
			CARO<21)||CARO==22|| CARO==23||
			(CARO>=25&&CARO<=31))
			caro(x,y,color);
			if (CARO==1||CARO==3||
			(CARO>=6&& CARO<=9)||CARO==11|| CARO==12||(CARO>=14&& CARO<=17)||(CARO>=19&&CARO<=22)|| CARO==24||(CARO>=26&&CARO<=28)) caro(x+1,y,color);if (CARO==1||CARO==4||CARO==6||CARO==11|| CARO==15||CARO==24||CARO==25|| 	CARO==27) caro(x+2,y,color);          if 	(CARO==1) { 	caro(x+3,y,color); caro(x+4,y,color); }          if ((CARO>=2&&CARO<=6)|| (CARO>=8&&CARO<=10)|| (CARO>11&&CARO<15)|| (CARO>=17&&CARO<=19)|| CARO==21||(CARO>=23&& CARO<=27)||CARO==29||CARO==30) caro(x,y-1,color);          if (CARO==2||CARO==5||CARO==10||CARO==14||CARO==16||CARO==21||CARO==26||CARO==28|| 	CARO==29) caro(x,y-2,color);          if 	(CARO==2) {	caro(x,y-3,color); caro(x,y-4,color); }          if (CARO==3||CARO==4|| (CARO>=7&&CARO<=13)|| (CARO>=16&&CARO<=18)|| (CARO>=20&&CARO<=25)
				||CARO==28)
				caro(x+1,y-1,color);
			if (CARO==4||CARO==8||CARO==9||CARO==13|| CARO==15||CARO==22||CARO==25|| 	CARO==27)
			caro(x+2,y-1,color);
			if (CARO==5||CARO==7||CARO==8||CARO==12|| CARO==16||CARO==23||CARO==26|| 	CARO==28)
			caro(x+1,y-2,color);
		}
void gameobj::fullclear( int cross[][45], int height){
for ( i=0 ; i<15 ; i++ ) for ( j=height ; j>0 ; j-- ) if ( j>0 ) cross[i+1][j] = cross[i+1] [j-1]; for ( i=0 ; i<15 ; i++ ) for ( j=0 ; j<37 ; j++ )if ( cross[i+1][j] ) caro(i,j,4) ; else caro(i,j,0); 		 } void gameobj::show_score( long score){
setfillstyle(1,0);  bar(30,50,150,90); thin_box(30,50,150,90,2,8,15); setusercharsize(1,2,1,2); settextstyle(1,0,USER_CHAR_SIZE);
	sprintf(buf, "%ld" ,score); settextjustify(CENTER_TEXT,CENTER_TEXT); shadow_outtext(90,68,buf,15,2,1); settextjustify(LEFT_TEXT,TOP_TEXT);  		    } void gameobj::show_next( int 	*CAROs){
	     *CAROs = random(31)+1; 	     setfillstyle(1,0); bar(30,150,150,220); thin_box(30,150,150,220,2,8,15); if (*CAROs>=29 && *CAROs<=31)  make_caro(*CAROs,-17,14,5); else make_caro(*CAROs,-17,14,1);  	     } void gameobj::show_stage( int *delays, long score, int tStage){
	 if (score/5000+tStage-1==stage) {     stage+=1; *delays = DELAYS-stage; bar(30,270,150,300); thin_box(30,270,150,300,2,8,15); sprintf(buf, "%d" ,stage); shadow_outtext(80,275,buf,15,3,1); } } void gameobj::show_stage_h( int chang){
		 if (chang==0){  if (stage_h<25)stage_h++;} if (chang==1){  if (stage_h>1)
stage_h--;} setfillstyle(1,0);  bar(30,350,150,380); thin_box(30,350,150,380,2,8,15); setusercharsize(1,2,1,2); settextstyle(1,0,USER_CHAR_SIZE); sprintf(buf, "%d"
,stage_h); shadow_outtext(80,355,buf,15,3,1); }
int gameobj::chang_stage( int *delays, int chang)
{
	if( chang==0 )
	if ( stage<8 )
	stage++ ;
	if( chang==1 )
	if( stage>1  )
	stage-- ;
	*delays = DELAYS - stage;
	setusercharsize(1,2,1,2);
	settextstyle(1,0,USER_CHAR_SIZE);
	setfillstyle(1,0);
	bar(30,270,150,300);
	thin_box(30,270,150,300,2,8,15);
	sprintf(buf, "%d" ,stage);
	shadow_outtext(80,275,buf,15,3,1);
	return 0;
}
int gameobj::win()
{
	      if(stage>8)
	      {
		 for (i=1;i<16;i++)
		 for (j=0;j<37;j++)
		 {
			caro(i-1,j,1) ;
			delay(1);
		 }
		 for (i=1;i<16;i++)
		 for (j=0;j<37;j++)
		 {
			caro(i-1,j,0) ;
			delay(1);
		 }
		 setfillstyle(1,7);
		 bar(getmaxx()/2-150,getmaxy() /2-60,getmaxx()/2+150,getmaxy()  /2+60);
		 settextstyle(installuserfont("kh02.chr"  ),0,1);
		 shadow_outtext(maxx/2-60,maxy /2-60, "GñkQñHehIy¡" 	,11,1,1);
		 setusercharsize(2,5,2,5);
		 settextstyle(installuserfont("kh02.chr" ),0,USER_CHAR_SIZE);
		 shadow_outtext(maxx/2-70,maxy /2-20, "etIGñkcg;elgbnþeToteT?" 	,11,1,1);
	      }
	      return (stage>8);
}

void gameobj::lost()
{
	for (j=0;j<37;j++)
	for(i=1;i<16; i++)
	{
		caro(i-1,j,1) ;
		delay(1);
	}
	for (j=0;j<37;j++)
	for(i=1;i<16; i++)
	{
		caro(i-1,36-j,0);
		delay(1);
	}
	setfillstyle(1,7);
	bar(maxx/2-150,maxy /2-60,maxx/2+150,maxy/2+60);
	settextstyle(installuserfont("kh02.chr"  ),0,1);
	shadow_outtext(maxx/2-60,maxy /2-60, "Gñkcaj;ehIy¡" 	,11,1,1);
	setusercharsize(2,5,2,5); settextstyle(installuserfont("kh02.chr" ),0,USER_CHAR_SIZE);
	shadow_outtext(maxx/2-70,maxy /2-20, "etIGñkcg;elgbnþeToteT?" 	,11,1,1);
}
gameobj::not_miny( int CARO, int xl, int i, int cross[][45]){
		return ((CARO==1&&!cross[xl]
		[i+1]&&!cross[xl+1][i+1]&&
		!cross[xl+2] [i+1]&&!cross[xl+3]
		[i+1]&&!cross[xl+4][i+1])||
		(CARO==2&&!cross[xl][i+1])||
		(CARO==3&&!cross[xl]
		[i+1]&&!cross[xl+1][i+1])||
		(CARO==4&&!cross[xl+2]
		[i+1]&&!cross[xl+1][i]&&!cross[xl]
		[i])||
		(CARO==5&&!cross[xl]
		[i+1]&&!cross[xl+1][i-1])||
		(CARO==6&&!cross[xl]
		[i+1]&&!cross[xl+1]
		[i+1]&&!cross[xl+2][i+1])||
		(CARO==7&&!cross[xl]
		[i+1]&&!cross[xl+1][i+1])||
		(CARO==8&&!cross[xl+1]
		[i+1]&&!cross[xl][i]&&!cross[xl+2]
		[i])||
		(CARO==9&&!cross[xl]
		[i]&&!cross[xl+1]
		[i+1]&&!cross[xl+2][i])||
		(CARO==11&&!cross[xl]
		[i+1]&&!cross[xl+1]
		[i+1]&&!cross[xl+2][i+1])||
		(CARO==10&&!cross[xl]
		[i+1]&&!cross[xl+1][i])||
		(CARO==12&&!cross[xl+1]
		[i+1]&&!cross[xl][i])||
		(CARO==13&&!cross[xl]
		[i+1]&&!cross[xl+1]
		[i]&&!cross[xl+2][i])||
		(CARO==14&&!cross[xl]
		[i+1]&&!cross[xl+1][i+1])||
		(CARO==15&&!cross[xl] [i+1]&&!cross[xl+1] [i+1]&&!cross[xl+2][i+1])|| (CARO==16&&!cross[xl] [i-1]&&!cross[xl+1][i+1])|| (CARO>=17&& CARO<=20&&!cross[xl] [i+CARO/18]&&!cross[xl+1] [i+(CARO==18?0:1)])|| (CARO==21&&!cross[xl]
		[i]&&!cross[xl+1][i+1])||
		(CARO==22&&!cross[xl]
		[i+1]&&!cross[xl+1]
		[i+1]&&!cross[xl+2][i])||
		(CARO==23&&!cross[xl]
		[i+1]&&!cross[xl+1][i])||
		(CARO==24&&!cross[xl]
		[i]&&!cross[xl+1]
		[i+1]&&!cross[xl+2][i+1])||
		((CARO==25||CARO==27)&&!cross[
		xl][i+1]&&!cross[xl+1][i+CARO
		/27]&&!cross[xl+2][i+1])||
		((CARO==26||CARO==28)&&!cross[
		xl][i+1]&&!cross[xl+1][i+1])||
		((CARO==29||CARO==30)&&!cross[
		xl][i+1]));




}
void gameobj::show_text()
{
	setfillstyle(1,1);
	bar(maxx/2+100,50,maxx /2+300,150);
	bar(maxx/2+100,190,maxx /2+300,maxy/2+145);
	sizable_box(maxx/2+100,50,maxx /2+300,150,1,1,15,8);
	sizable_box(maxx/2+100,190,maxx /2+300,maxy/2+145,1,1,15,8);
	thin_box(0,0,maxx,maxy,2,15,8);
	setcolor(15);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	outtextxy(maxx/2+110,210, "Arrow Key: Move" );
	outtextxy(maxx/2+110,230, " Space Bar: Change");
	outtextxy(maxx/2+110,250,  "Esc :  Quit" );
	outtextxy(maxx/2+110,270,  "F2  :  Increase Speed" );
	outtextxy(maxx/2+110,290,  "F3  :  Decrease Speed" );
	outtextxy(maxx/2+110,310,  "F4  :  Increase Height" );
	outtextxy(maxx/2+110,330,  "F5  :  Decrease Height" );
	outtextxy(maxx/2+110,350,  "F6  :  Pause" );
	shadow_outtext(maxx/2+103,170,"Using Key",13,14,1);
	shadow_outtext(maxx/2+103,30, "Author",13,14,1);
	shadow_outtext(maxx/2+170,400, 	"E-mail:" 	,0,15,1);
	shadow_outtext(maxx/2+120,420,"iechsetha@gmail.com " 	,0,15,1);
	shadow_outtext(maxx/2+128,440, "",10,12,1);
	shadow_outtext(maxx/2+145,70, "By: Iech Setha" 	,6,14,1);
	shadow_outtext(maxx/2+137,90, "Student Year Two" 	,8,11,1);
	shadow_outtext(maxx/2+115,110, "of Royal University of" 	,8,11,1);
	shadow_outtext(maxx/2+160,130, "Phnom Penh" 	,8,11,1);
	shadow_outtext(maxx/2-50,maxy-40 , "V 1.0.1 2003" 	,11,1,1);
	setusercharsize(2,5,6,13);
	settextstyle(installuserfont("kh02.chr" ),0,USER_CHAR_SIZE);
	shadow_outtext(75,15,"~BinÞ~u" 	,14,6,1);
	shadow_outtext(60,110, "ecjbnÞab;" 	,10,6,1);
	shadow_outtext(60,230, "vKÁ¬el,Ón¦" 	,15,4,1);
	shadow_outtext(60,310, "vKÁ¬kMBs;¦" 	,15,4,1);
	shadow_outtext(38,380, "eday³~~~eGoc~~esdæa" 	,15,1,1);
}
void main()
{
	int gd=0,gm,maxx,maxy;
	int oy,xleft,CARO,xright,CAROS,CAROs, y_min;
	int cross[18] [45],l,row=0,color,j,i,count;
	int ch,shoot,tempfull,delays,tstage=0;
	long score=0;
	initgraph(&gd,&gm, "c:\\tc\\bgi" );
	maxx=getmaxx();
	maxy=getmaxy();
	randomize();
	class gameobj game(maxx,maxy);
	oldhandler=getvect(INTR);
	setvect(INTR, handler);
	start:  score  = 0 ;
	delays = DELAYS ;
	game.interface();
	game.show_score(score);
	game.chang_stage(&delays,3);
	game.show_stage_h (3) ;
	game.show_text();
	for (i=1;i<16;i++)
	for (j=0;j<37;j++)
	game.caro(i-1,j,1) ;
	begin:  score = 0;
	xleft =  random(3)+6;
	tstage = game.stage ;
	CARO = random(31)+1;
	for (i=0;i<17;i++)
	for (j=0;j<38;j++)
	{
		if (i>0 && i<16 && j<37)
		if (j<38-game.stage_h)
		cross[i] [j]=0;
		else
		cross[i][j]=random(2);
		else cross[i][j] = 1 ;
	}
	setfillstyle(1,0);
	for (i=1;i<16;i++)
	for (j=0;j<37;j++)
	{
		if (cross[i][j]==0)
		game.caro(i-  1,j,0);
		else game.caro(i-1,j,4);
	}
	oy = CARO==2? 5:3;
	while(1)
	{
		row=0;
		if (CARO==1)
		xright=10;
		if(CARO==2||(CARO>=29&& CARO<=31))
		xright=14;
		if (CARO==3)
		xright=13;
		if (CARO==4||CARO==6||CARO==22||CARO==25||CARO==27|| CARO==9||CARO==11||CARO==13||CARO==15) xright=12; if (CARO==5||CARO==26||CARO==28|| CARO==12||CARO==10||CARO==7||CARO==8||CARO==14|| (CARO>=16&&CARO<=24&& CARO!=22)) xright=13; if (CARO==31) { i=36;  while(cross[xleft][i]){ i-- ; } y_min=i;  } game.make_caro(CARO,xleft-1,oy,RED);
		if(kbhit())
		{
			ch = SPECIAL_KEY(0);
			if (ch==F2)
			{
				game.chang_stage(&delays,0);
				goto begin;
			}
			if (ch==F3)
			{
				game.chang_stage(&delays,1);
				goto begin;
			}
			if(ch==F4)
			{
				game.show_stage_h(0);
				goto begin;
			} if(ch==F5)
			{
				game.show_stage_h(1);
				goto begin;
			}
			if (ch==F6)
			{
				SPECIAL_KEY(0);
			}
			if (ch==RIGHT_ARROW)
			{
				game.make_caro(CARO,xleft- 1,oy,0);
				if (xleft<=xright)
				{
				       if ((CARO==1&&!cross[xleft+5]  [oy])|| (CARO==2&&!cross[xleft+1] [oy]&&!cross[xleft+1][oy-1]&& !cross[xleft+1][oy-2]&& !cross[xleft+1][oy-3]&& !cross[xleft+1][oy-4])|| (CARO==3&&!cross[xleft+2] [oy]&&!cross[xleft+2][oy-1])|| ((CARO==4||CARO==6)&&!cross[xleft+3-2*(CARO/6)][oy-1]&&!cross[xleft+3][oy])|| ((CARO==5||CARO==7)&&!cross[xleft+2][oy-2]&& !cross[xleft+1+CARO /7][oy]&&!cross[xleft+1+CARO /7][oy-1])|| (CARO==8&&!cross[xleft+2] [oy]&&!cross[xleft+3][oy-1]&&!cross[xleft+2][oy-2])|| ((CARO==9||CARO==11)&&!cross[xleft+2+CARO/11][oy]&& !cross[xleft+3-CARO/11][oy-1])|| ((CARO==10||CARO==12)&&!cross[xleft+1+CARO/12][oy]&& !cross[xleft+2] [oy-1]&&!cross[xleft+1+CARO/12][oy-2])|| 		  ((CARO==13||CARO==15)&&!cross[xleft+1+2*(CARO/15)][oy]&& !cross[xleft+3][oy-1])||
				       ((CARO==14||CARO==16)&&!cross[xleft+2][oy]&& 		  !cross[xleft+1+CARO/16][oy- 1]&&!cross[xleft+1+CARO/16][oy-2])|| 		 ((CARO>=17&& CARO<=20)&&!cross[xleft+ (CARO==18?1:2)][oy]&&  		  !cross[xleft+(CARO==19?1:2)] 	[oy-1])|| 		 (CARO==21&&!cross[xleft+2] [oy]&&!cross[xleft+2][oy-1]&& !cross[xleft+1][oy-2])|| (CARO==22&&!cross[xleft+3] [oy-1]&&!cross[xleft+2][oy])|| (CARO==23&&!cross[xleft+1] [oy]&&!cross[xleft+2][oy-1]&& !cross[xleft+2][oy-2])|| (CARO==24&&!cross[xleft+3] [oy]&&!cross[xleft+2][oy-1])|| ((CARO==25||CARO==27)&&!cross[xleft+3][oy]&&!cross[xleft+3] [oy-1]&& !cross[xleft+1][oy-CARO/27])|| ((CARO==26||CARO==28)&&!cross[xleft+2][oy-2]&&!cross[xleft+2] [oy]&& !cross[xleft+2-CARO/28][oy-1])||(CARO==29&&!cross[xleft+1] [oy]&&!cross[xleft+1][oy-1]&& !cross[xleft+1][oy-2])|| (CARO==30&&!cross[xleft+1] [oy]&&!cross[xleft+1][oy-1])|| (CARO==31&&!cross[xleft+1] [oy])) xleft++; }}
					 game.make_caro(CARO,xleft- 1,oy,0);
					 if(xleft>1)
					 {
						if ((CARO==1&&!cross[xleft- 	1][oy])||(CARO==2&&!cross[xleft-1][oy]&& !cross[xleft-1][oy- 1]&&!cross[xleft-1][oy-2]&& !cross[xleft-1][oy-3]&&!cross[xleft-1][oy-4])|| 		 (CARO==3&&!cross[xleft-  1][oy]&&!cross[xleft-1][oy-1])|| ((CARO==4||CARO==6)&&!cross[xleft-1][oy-1]&& !cross[xleft+5-CARO][oy])|| ((CARO==5||CARO==7)&&!cross[xleft-1][oy]&&
						!cross[xleft-(1-CARO/7)] [oy-1]&&!cross[xleft-(1- CARO/7)][oy-2])||  		 (CARO==8&&!cross[xleft-1][oy-1]&&!cross[xleft][oy]&& !cross[xleft][oy-2])|| ((CARO==9||CARO==11)&&!cross[xleft-1][oy-5+CARO/2]&& !		  !cross[xleft][oy+4-CARO/2])|| ((CARO==10||CARO==12)&&!cross[xleft-1][oy-1]&& !cross[xleft-1+CARO /12][oy]&&!cross[xleft-1+CARO/12][oy-2])||
						((CARO==13||CARO==15)&&!cross[xleft-1][oy]&&
						!cross[xleft-14+CARO][oy-1])||
						((CARO==14||CARO==16)&&!cross[xleft-1][oy-2]&&
						!cross[xleft-1+CARO
						/16][oy]&&!cross[xleft-1+CARO
						/16][oy-1])||
						((CARO>=17&&
						CARO<=20)&&!cross[xleft-(CARO==20?0:1)][oy-1]&&
						!cross[xleft-(CARO==17?0:1)]
						[oy])|| !
						(CARO==21&&!cross[xleft-1][oy-
						2]&&!cross[xleft-1][oy-1]&&
						!cross[xleft][oy])||
						(CARO==22&&!cross[xleft-
						1][oy]&&!cross[xleft][oy-1])||
						(CARO==23&&!cross[xleft-
						1][oy]&&!cross[xleft-1][oy-1]&&
						!cross[xleft][oy-2])|| !
						(CARO==24&&!cross[xleft-1][oy-
						1]&&!cross[xleft][oy])||
						((CARO==25||CARO==27)&&!cross[xleft-1][oy]&&
						!cross[xleft-1][oy-
						1]&&!cross[xleft+1][oy-CARO /27])||
						((CARO==26||CARO==28)&&!cross[xleft-1][oy]&&
						!cross[xleft-1+CARO/28][oy-
						1]&&!cross[xleft-1][oy-2])||
						(CARO==29&&!cross[xleft-
						1][oy]&&!cross[xleft-1][oy-1]&&
						!cross[xleft-1][oy-2])||
						(CARO==30&&!cross[xleft-
						1][oy]&&!cross[xleft-1][oy-1])||
						(CARO==31&&!cross[xleft-
						1][oy]))
						xleft--;
					 }
				       } if (ch==DOWN_ARROW)
				       {
						game.make_caro(CARO,xleft-
						1,oy,0);
						if (game.not_miny(CARO,xleft,oy,cross )||
						(CARO==31&&!cross[xleft]
						[oy+1])) oy+=1 ;
						if (oy==8)
						{
							game.show_next(& 	CAROs);
						}
				       }if(ch==ESC)
					break ;
					if(ch==SPACEBAR||ch==ENTER)
					{
						if (CARO==30&&oy!=36)
						{
							shoot = oy;
							while (cross[xleft][shoot+1]!=1&& shoot<35)
							{
								game.make_caro(0,xleft-1,shoot+1,4);
								shoot++; delay(3); game.make_caro(0,xleft- 1,shoot,0);
							}
							game.make_caro(0,xleft-1,shoot+1,0);
							if (shoot!=36) cross[xleft] [shoot+1]=0;
						} if (CARO==29&&oy!=36)
						{
							shoot=oy+1;
							while (cross[xleft][shoot+1]!=1)
							{
								game.make_caro(0,xleft-1,shoot,0);
								shoot++;
								game.make_caro(0,xleft-1,shoot,4);
								delay(3);
							}
							cross[xleft][shoot]=1;
							for (l=1;l<=15;l++)
							{
								row+=cross[l][shoot];
								if (row==15)
								{
									score+=100;
									game.fullclear(cross,shoot);
									game.show_score(score);
									game.show_stage(&delays,score,tstage);
								}
							}
							if (((CARO==1&&oy>4)||
							(CARO==2&&xleft>2&& xleft<14&&!cross[xleft-2]
							[oy]&&
							!cross[xleft+2][oy])||
							(CARO==4||CARO==6||CARO==9||CARO==11||CARO==13||CARO==15||
							CARO==25||CARO==27||CARO==22|| CARO==24)||
							((CARO==5||CARO==10||CARO==16||CARO==23)&&
							!cross[xleft+2][oy])||
							((CARO==12||CARO==21)&&
							!cross[xleft+2][oy-1])||
							((CARO==7||CARO==14||CARO==26||CARO==28)&&
							!cross[xleft+2] [oy]&&!cross[xleft+2][oy-1])&&
							xleft<14)|| (CARO>=17&&CARO<=20&&
							xleft<15&&
							(!cross[xleft][oy]||!cross[xleft+1][oy]||!cross[xleft+1] [oy-1]||!cross[xleft]
							[oy-1])))
							{
								game.make_caro(CARO,xleft- 1,oy,0);
								if (CARO==2)
								xleft-=2;
								if (CARO==1)
								xleft+=2;
								CARO++;
								if (CARO==3)
								CARO=1;
								if (CARO==8)
								CARO=4;
								if (CARO==13)
								CARO=9;
								if (CARO==17)
								CARO=13;
								if (CARO==21)
								CARO=17;
								if (CARO==23)
								CARO=21;
								if (CARO==25)
								CARO=23;
								if (CARO==29)
								CARO=25;
							}
						}
					}
					if (loop%delays==0)
					{
						if (game.not_miny(CARO,xleft,oy,cross )||
						(CARO==31&&oy!=y_min))
						{
							oy++;
							loop=1;
							if (!cross[xleft][oy-1])
							game.make_caro(CARO,xleft-1,oy-1,0);
							if ((oy==8)||(oy<8&& (CARO==29||CARO==30)))
							{
								game.show_next(&CAROs);
							}
						}
						else
						{
							if ((CARO>=1&&CARO<=3)||
							(CARO>=5&&CARO<=7)||
							CARO==10||CARO==11||
							(CARO>=13&&CARO<=15)||
							(CARO>=18&& CARO<=20)||
							CARO==22||CARO==23||
							(CARO>=25&& CARO<=28)||
							CARO==31)
							cross[xleft][oy]=1;
							if (CARO==1||CARO==3||
							(CARO>=6&&
							CARO<=9)||CARO==11||CARO==12||
							(CARO>=14&& CARO<=17)||CARO==19||
							(CARO>=20&&CARO<=22)||
							CARO==24||(CARO>=26&&
							CARO<=28))
							cross[xleft+1][oy]=1;
							if (CARO==1||CARO==4||CARO==6||
							CARO==11||CARO==15||
							CARO==24||CARO==25||
							CARO==27)
							cross[xleft+2][oy]=1;
							if (CARO==1){ cross[xleft+3][oy]=1;
							cross[xleft+4][oy]=1; }
							if (CARO==2||(CARO>=3&&
							CARO<=6)||CARO==8||
							CARO==9||
							CARO==10||(CARO>=12&&
							CARO<=14)||(CARO>=17&& CARO<=19)||   CARO==21||(CARO>=23&&
CARO<=27)) 			   cross[xleft][oy-1]=1; if (CARO==2||CARO==5||CARO==10||CARO==14||CARO==16|| 		   CARO==21||CARO==26||CARO==28) 			   cross[xleft][oy-2]=1;if (CARO==2){cross[xleft] 	[oy-3]=1; 			   cross[xleft][oy-4]=1;} if (CARO==3||CARO==4||
(CARO>=7&& CARO<=13)||CARO==28|| (CARO>=16&&CARO<=18)|| (CARO>=20&&CARO<=25)) cross[xleft+1][oy-1]=1; if (CARO==4||CARO==8||CARO==9||CARO==13||CARO==15|| CARO==22||CARO==25||CARO==27) cross[xleft+2][oy-1]=1; if (CARO==5||CARO==7||CARO==8||CARO==12||CARO==16|| CARO==23||CARO==26||CARO==28) cross[xleft+1][oy-2]=1; for (l=0,tempfull=0;l<5;l++){  row=0; for (int l1=1;l1<=15;l1++) 	       { row+=cross[l1][oy-4+l]; if 	(row==15) { tempfull++;  game.fullclear(cross,oy-4+l); } }} if (tempfull>0){
	     score+=100*tempfull+ (tempfull-1)*100; game.show_score(score); game.show_stage(& delays,score,tstage); if (game.win()){
		game.stage--; if (game.box_exit()== 'n' ) goto stop; else goto start; } } for (i=0;i<15;i++) for
(j=0;j<37; j++) 	 {  if (cross[i+1][j]==0)  game.caro(i,j,0) ; else game.caro(i,j,4); } xleft = 6;	CARO=CAROs; if (CARO==2){ oy=6; } else oy = 3; }if (cross[xleft][4]==1||cross[xleft] [3]==1||cross[xleft][2]==1) {
		game.lost(); if (game.box_exit()== 'n' )  goto stop;  else goto start; 		     } }} stop:	closegraph(); 		exit(1); }