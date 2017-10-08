#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<process.h>
#include<stdlib.h>
#include <io.h>
#include <alloc.h>
#include <fcntl.h>
#include <stat.h>
#include<conio.h>
#include<string.h>

#define ESC 27
#define ENTER 13
#define RIGHT 77
#define LEFT 75
#define UP 72
#define DOWN 80
#define HOME 71
#define TAB 9
#define END 79
#define INSERT 82
#define DEL 83
#define BKSP 8
#define TXW 8
#define TXH 8
int gd=DETECT,gm,erc;
//int handle;
char string[100];
int length, res;
char *buf;
int handle, bytes;
char str[100];
char st[100][2];


int AX=100,AY=400;
int ll=10;
int p=0;
int q=1;
int p1=0;
int c,c1;
int n=0;
int turns=0;
char tns[10];
char ch ;
int tp4[9],tp5[9],tp[9];
int tpl[9],tpr[9];
int yu=0,yd=0,zu=0,zd=0;
int ml=0,mr=0,nl=0,nr=0;
int cl[6][9]={{15,15,15,15,15,15,15,15,15},
	      {14,14,14,14,14,14,14,14,14},
	      {4,4,4,4,4,4,4,4,4},
	      {2,2,2,2,2,2,2,2,2},
	      {1,1,1,1,1,1,1,1,1},
	  // {1,2,3,4,5,6,7,8,9}
	     {12,12,12,12,12,12,12,12,12}

	      };
int prb[6][9];/*={
		{},
		{},
		{},
		{},
		{},
		{}
	      };*/


void rsm()
{
	buf =(char *)malloc(10);

	if ((handle =
      open("score.txt", O_RDONLY | O_BINARY, S_IWRITE | S_IREAD)) == -1)
   {
      printf("Error Opening File\n");
      exit(1);
   }
   if ((bytes = read(handle, buf, 10)) == -1) {
      printf("Read Failed.\n");
      exit(1);
   }

   else {
      printf("Read: %d bytes read.\n", bytes);
   }

   strcpy(str, buf);
   for(int count=0;count<bytes;count++)
   {       int i=count%2;
	st[count/2][i]=str[count];
   }
   for(count=0;count<54;count++){
   int val=0;
//   printf("%c\n",st[count/2][0]);
 //  printf("%c\n",st[count/2][1]);
   val=st[count][1]-48;
   val=(st[count][0]-48)*10+val;

   //for(int i=0;i<bytes;i++)
   printf("\n\n%d",val);
   cl[count/6][count%9]=val;
   //for(i=0;i<2;i++)
   }
   getch();

}
void drawcube()
{	setcolor(6);

	rectangle(100,100,160,160);
	line(100,120,160,120);
	line(100,140,160,140);
	line(120,100,120,160);
	line(140,100,140,160);

	line(75,75,100,100);
	line(160,100,135,75);
	line(75,75,135,75);
	line(75,75,75,135);
	line(75,135,100,160);
	line(83,83,83,143);
	line(92,91,92,152);
	line(83,83,143,83);
	line(91,92,152,92);
	line(120,100,95,75);
	line(140,100,115,75);
	line(100,120,75,95);
	line(100,140,75,115);
		for(int i=0;i<3;i++){
		setfillstyle(1,cl[5][i]);
		floodfill(78+20*i,76,6);
		setfillstyle(1,cl[5][i+3]);
		floodfill(85+20*i,84,6);
		setfillstyle(1,cl[5][i+6]);
		floodfill(96+20*i,95,6);
		}
		for(i=0;i<3;i++){ c=(p+3)%4;
		setfillstyle(1,cl[c][0+i*3]);
		floodfill(76,78+20*i,6);
		setfillstyle(1,cl[c][1+i*3]);
		floodfill(84,85+20*i,6);
		setfillstyle(1,cl[c][2+i*3]);
		floodfill(95,96+20*i,6);
		}


		for(i=0;i<3;i++)for(int j=0;j<3;j++){
		setfillstyle(1,cl[p][(i*3)+j]);
		floodfill(101+20*j,102+20*i,6);}
}
void drawcube1()
{
	setcolor(6);
	//backside
	rectangle(300,100,360,160);
	line(320,100,320,160);
	line(340,100,340,160);
	line(300,120,360,120);
	line(300,140,360,140);

       //rightside
       line(360,100,385,125);
       line(360,120,385,145);
       line(360,140,385,165);
       line(360,160,385,185);
       line(368,108,368,168);
       line(377,116,377,176);
       line(385,125,385,185);

       //down
       line(300,160,360,160);
       line(309,168,369,168);
       line(317,176,377,176);
       line(325,185,385,185);
       line(300,160,325,185);
       line(320,160,345,185);
       line(340,160,365,185);
       for(int i=0;i<3;i++)
       {
		setfillstyle(1,cl[4][i]);
		floodfill(310+20*i,165,6);
		setfillstyle(1,cl[4][i+3]);
		floodfill(319+20*i,173,6);
		setfillstyle(1,cl[4][i+6]);
		floodfill(327+20*i,181,6);

       }
       for(i=0;i<3;i++)for(int j=0;j<3;j++){
		setfillstyle(1,cl[(p+2)%4][(i*3)+j]);
		floodfill(305+20*j,105+20*i,6);}

       for(i=0;i<3;i++){ c=(p+1)%4;
		setfillstyle(1,cl[c][0+i*3]);
		floodfill(365,115+20*i,6);
		setfillstyle(1,cl[c][1+i*3]);
		floodfill(372,113+20*i,6);
		setfillstyle(1,cl[c][2+i*3]);
		floodfill(383,127+20*i,6);
		}
		setfillstyle(1,cl[c][8]);

}
void pointproj();
void menu();
void help()
{       cleardevice();
	drawcube();
	outtextxy(105,105,"Q");
	outtextxy(125,105,"W");
	outtextxy(145,105,"E");
	outtextxy(105,125,"A");
	outtextxy(125,125,"S");
	outtextxy(145,125,"D");
	outtextxy(105,145,"Z");
	outtextxy(125,145,"X");
	outtextxy(145,145,"C");
	settextstyle(1,0,3);
	setcolor(GREEN);
	outtextxy(100,200,"USE ARROWS TO ROTATE THE CUBE ");
	outtextxy(100,250,"USE Esc TO RETURN TO MENU ");
	settextstyle(6,0,3);
	outtextxy(10,260,"example");
	outtextxy(100,280," Q A -- 1st column downward");
	outtextxy(100,310," Z A -- 1st column upward");
	outtextxy(100,340," Q W -- 1st row rightside");
	outtextxy(100,370," E W -- 1st row leftside");
	ch=getch();
	if(ch==ESC)menu();
}


void menu()
{       int opt=1,c;
  //	   for(int i=0;i<6;i++)for(int j=0;j<9;j++)cl[i][j]=prb[i][j];
	cleardevice();
	setbkcolor(LIGHTBLUE);
	settextstyle(0,0,1);
	outtextxy(100,100,"PLAY GAME");
	outtextxy(100,150,"HELP");
	outtextxy(100,200,"EXIT");
	rectangle(50,80+0,250,80+50);

	while(1){
	c=getch();
	cleardevice();
	setbkcolor(LIGHTBLUE);
	outtextxy(100,100,"PLAY GAME");
	outtextxy(100,150,"HELP");
	outtextxy(100,200,"EXIT");
	outtextxy(100,250,"SOLVE");

	if(c==DOWN)opt++;
	if(c==UP)opt--;
	if(opt>4)opt=1;
	if(opt<1)opt=4;
	rectangle(50,80+50*(opt-1),250,80+50*opt);
	if(c==ENTER)
	{	if(opt==1)pointproj();
		if(opt==2)help();
		if(opt==3){closegraph();exit(0);}
		if(opt==4) rsm();
	}

	}
}



void plot3()
{       for(int i=0;i<9;i++){   tp4[i]=cl[4][i];tp5[i]=cl[5][i]; }
	if(zd)
	{	cl[4][0]=tp4[6];
		cl[4][1]=tp4[3];
		cl[4][2]=tp4[0];
		cl[4][3]=tp4[7];
		cl[4][5]=tp4[1];
		cl[4][6]=tp4[8];
		cl[4][7]=tp4[5];
		cl[4][8]=tp4[2];
	} zd=0;
	if(zu)
	{
		cl[5][0]=tp5[6];
		cl[5][1]=tp5[3];
		cl[5][2]=tp5[0];
		cl[5][3]=tp5[7];
		cl[5][5]=tp5[1];
		cl[5][6]=tp5[8];
		cl[5][7]=tp5[5];
		cl[5][8]=tp5[2];

	}  zu=0;
	if(yd)
	{
		cl[4][0]=tp4[2];
		cl[4][1]=tp4[5];
		cl[4][2]=tp4[8];
		cl[4][3]=tp4[1];
		cl[4][5]=tp4[7];
		cl[4][6]=tp4[0];
		cl[4][7]=tp4[3];
		cl[4][8]=tp4[6];
	}yd=0;
	if(yu)
	{
		cl[5][0]=tp5[2];
		cl[5][1]=tp5[5];
		cl[5][2]=tp5[8];
		cl[5][3]=tp5[1];
		cl[5][5]=tp5[7];
		cl[5][6]=tp5[0];
		cl[5][7]=tp5[3];
		cl[5][8]=tp5[6];
	}    yu=0;
	int l,r;
	for(i=0;i<9;i++){   tpl[i]=cl[l][i];tpr[i]=cl[r][i]; }
	if(nl)
	{       l=(p+3)%4;
		for(i=0;i<9;i++)   tpl[i]=cl[l][i];
		cl[l][0]=tpl[6];
		cl[l][1]=tpl[3];
		cl[l][2]=tpl[0];
		cl[l][3]=tpl[7];
		cl[l][5]=tpl[1];
		cl[l][6]=tpl[8];
		cl[l][7]=tpl[5];
		cl[l][8]=tpl[2];
	}nl=0;
	if(nr)
	{       r=(p+1)%4;
		for(i=0;i<9;i++)tpr[i]=cl[r][i];
		cl[r][0]=tpr[6];
		cl[r][1]=tpr[3];
		cl[r][2]=tpr[0];
		cl[r][3]=tpr[7];
		cl[r][5]=tpr[1];
		cl[r][6]=tpr[8];
		cl[r][7]=tpr[5];
		cl[r][8]=tpr[2];
	}nr=0;
	if(ml)
	{
		l=(p+3)%4;
		for(i=0;i<9;i++)   tpl[i]=cl[l][i];
		cl[l][0]=tpl[2];
		cl[l][1]=tpl[5];
		cl[l][2]=tpl[8];
		cl[l][3]=tpl[1];
		cl[l][5]=tpl[7];
		cl[l][6]=tpl[0];
		cl[l][7]=tpl[3];
		cl[l][8]=tpl[6];
	}ml=0;
	if(mr)
	{
		r=(p+1)%4;
		for(i=0;i<9;i++)tpr[i]=cl[r][i];

		cl[r][0]=tpr[2];
		cl[r][1]=tpr[5];
		cl[r][2]=tpr[8];
		cl[r][3]=tpr[1];
		cl[r][5]=tpr[7];
		cl[r][6]=tpr[0];
		cl[r][7]=tpr[3];
		cl[r][8]=tpr[6];
	}mr=0;
	setcolor(6);
	drawcube();
	drawcube1();
}
void za()
{
	for(int i=0;i<9;i++) tp[i]=cl[5][i];
		cl[5][0]=cl[p][0];
		cl[5][3]=cl[p][3];
		cl[5][6]=cl[p][6];

		cl[p][0]=cl[4][6];
		cl[p][3]=cl[4][3];
		cl[p][6]=cl[4][0];

		cl[4][0]=cl[(p+2)%4][0];
		cl[4][3]=cl[(p+2)%4][3];
		cl[4][6]=cl[(p+2)%4][6];

		cl[(p+2)%4][0]=tp[6];
		cl[(p+2)%4][3]=tp[3];
		cl[(p+2)%4][6]=tp[0];
}
void zx()
{	c=(p+3)%4;
	  tp[6]=cl[c][6];
	  tp[7]=cl[c][7];
	  tp[8]=cl[c][8];
	  int c1=(p+2)%4;
	  cl[c][6]=cl[c1][8];
	  cl[c][7]=cl[c1][7];
	  cl[c][8]=cl[c1][6];

	  c=(p+1)%4;
	  cl[c1][6]=cl[c][6];
	  cl[c1][7]=cl[c][7];
	  cl[c1][8]=cl[c][8];

	  cl[c][6]=cl[p][8];
	  cl[c][7]=cl[p][7];
	  cl[c][8]=cl[p][6];

	  cl[p][6]=tp[6];
	  cl[p][7]=tp[7];
	  cl[p][8]=tp[8];
}
void qa()
{
			       //	for(int i=0;i<9;i++) tp[i]=cl[5][i];
				tp[0]=cl[(p+2)%4][0];
				tp[3]=cl[(p+2)%4][3];
				tp[6]=cl[(p+2)%4][6];

				cl[(p+2)%4][0]=cl[4][0];
				cl[(p+2)%4][3]=cl[4][3];
				cl[(p+2)%4][6]=cl[4][6];

				cl[4][0]=cl[p][6];
				cl[4][3]=cl[p][3];
				cl[4][6]=cl[p][0];


				cl[p][0]=cl[5][0];
				cl[p][3]=cl[5][3];
				cl[p][6]=cl[5][6];

				cl[5][0]=tp[6];
				cl[5][3]=tp[3];
				cl[5][6]=tp[0];

			}
void qw()
{
			   c=(p+3)%4;
			  tp[0]=cl[c][0];
			  tp[1]=cl[c][1];
			  tp[2]=cl[c][2];
			  int c1=(p+2)%4;
			  cl[c][0]=cl[c1][2];
			  cl[c][1]=cl[c1][1];
			  cl[c][2]=cl[c1][0];

			  c=(p+1)%4;
			  cl[c1][0]=cl[c][0];
			  cl[c1][1]=cl[c][1];
			  cl[c1][2]=cl[c][2];


			  cl[c][0]=cl[p][2];
			  cl[c][1]=cl[p][1];
			  cl[c][2]=cl[p][0];

			  cl[p][0]=tp[0];
			  cl[p][1]=tp[1];
			  cl[p][2]=tp[2];
}
void ed()
{
			  //	for(int i=0;i<9;i++) tp[i]=cl[5][i];
				tp[2]=cl[(p+2)%4][2];
				tp[5]=cl[(p+2)%4][5];
				tp[8]=cl[(p+2)%4][8];

				cl[(p+2)%4][2]=cl[4][2];
				cl[(p+2)%4][5]=cl[4][5];
				cl[(p+2)%4][8]=cl[4][8];

				cl[4][2]=cl[p][8];
				cl[4][5]=cl[p][5];
				cl[4][8]=cl[p][2];


				cl[p][2]=cl[5][8];
				cl[p][5]=cl[5][5];
				cl[p][8]=cl[5][2];

				cl[5][2]=tp[8];
				cl[5][5]=tp[5];
				cl[5][8]=tp[2];

}

void ew()
{
			int c1,tp[9];
			tp[0]=cl[p][0];
			tp[1]=cl[p][1];
			tp[2]=cl[p][2];

			c=(p+1)%4;
			cl[p][0]=cl[c][2];
			cl[p][1]=cl[c][1];
			cl[p][2]=cl[c][0];

			c1=(p+2)%4;
			cl[c][0]=cl[c1][0];
			cl[c][1]=cl[c1][1];
			cl[c][2]=cl[c1][2];

			c=(p+3)%4;
			cl[c1][0]=cl[c][2];
			cl[c1][1]=cl[c][1];
			cl[c1][2]=cl[c][0];

			  c=(p+3)%4;
			  cl[c][0]=tp[0];
			  cl[c][1]=tp[1];
			  cl[c][2]=tp[2];
}
void cd()
{                               int tp[9];
				tp[2]=cl[5][2];
				tp[5]=cl[5][5];
				tp[8]=cl[5][8];

				cl[5][2]=cl[p][2];
				cl[5][5]=cl[p][5];
				cl[5][8]=cl[p][8];

				cl[p][2]=cl[4][8];
				cl[p][5]=cl[4][5];
				cl[p][8]=cl[4][2];

				cl[4][2]=cl[(p+2)%4][2];
				cl[4][5]=cl[(p+2)%4][5];
				cl[4][8]=cl[(p+2)%4][8];

				cl[(p+2)%4][2]=tp[8];
				cl[(p+2)%4][5]=tp[5];
				cl[(p+2)%4][8]=tp[2];
}
void cx()
{        int c1,tp[9];
	tp[6]=cl[p][6];
	tp[7]=cl[p][7];
	tp[8]=cl[p][8];

	c=(p+1)%4;
	cl[p][6]=cl[c][8];
	cl[p][7]=cl[c][7];
	cl[p][8]=cl[c][6];

	c1=(p+2)%4;
	cl[c][6]=cl[c1][6];
	cl[c][7]=cl[c1][7];
	cl[c][8]=cl[c1][8];

	c=(p+3)%4;
	cl[c1][6]=cl[c][8];
	cl[c1][7]=cl[c][7];
	cl[c1][8]=cl[c][6];

	c=(p+3)%4;
	cl[c][6]=tp[6];
	cl[c][7]=tp[7];
	cl[c][8]=tp[8];

}
void ws()
{
				int tp[9];
				tp[1]=cl[(p+2)%4][1];
				tp[4]=cl[(p+2)%4][4];
				tp[7]=cl[(p+2)%4][7];

				cl[(p+2)%4][1]=cl[4][1];
				cl[(p+2)%4][4]=cl[4][4];
				cl[(p+2)%4][7]=cl[4][7];

				cl[4][1]=cl[p][7];
				cl[4][4]=cl[p][4];
				cl[4][7]=cl[p][1];


				cl[p][1]=cl[5][1];
				cl[p][4]=cl[5][4];
				cl[p][7]=cl[5][7];

				cl[5][1]=tp[7];
				cl[5][4]=tp[4];
				cl[5][7]=tp[1];

}
void xs()
{
				int tp[9];
				tp[1]=cl[5][1];
				tp[4]=cl[5][4];
				tp[7]=cl[5][7];

				cl[5][1]=cl[p][1];
				cl[5][4]=cl[p][4];
				cl[5][7]=cl[p][7];

				cl[p][1]=cl[4][7];
				cl[p][4]=cl[4][4];
				cl[p][7]=cl[4][1];

				cl[4][1]=cl[(p+2)%4][1];
				cl[4][4]=cl[(p+2)%4][4];
				cl[4][7]=cl[(p+2)%4][7];

				cl[(p+2)%4][1]=tp[7];
				cl[(p+2)%4][4]=tp[4];
				cl[(p+2)%4][7]=tp[1];
}

void as()
{
			  c=(p+3)%4;
			  tp[3]=cl[c][3];
			  tp[4]=cl[c][4];
			  tp[5]=cl[c][5];

			  int c1=(p+2)%4;
			  cl[c][3]=cl[c1][5];
			  cl[c][4]=cl[c1][4];
			  cl[c][5]=cl[c1][3];

			  c=(p+1)%4;
			  cl[c1][3]=cl[c][3];
			  cl[c1][4]=cl[c][4];
			  cl[c1][5]=cl[c][5];


			  cl[c][3]=cl[p][5];
			  cl[c][4]=cl[p][4];
			  cl[c][5]=cl[p][3];

			  cl[p][3]=tp[3];
			  cl[p][4]=tp[4];
			  cl[p][5]=tp[5];
}
void ds()
{   int c1;
			tp[3]=cl[p][3];
			tp[4]=cl[p][4];
			tp[5]=cl[p][5];

			c=(p+1)%4;
			cl[p][3]=cl[c][5];
			cl[p][4]=cl[c][4];
			cl[p][5]=cl[c][3];

			c1=(p+2)%4;
			cl[c][3]=cl[c1][3];
			cl[c][4]=cl[c1][4];
			cl[c][5]=cl[c1][5];

			c=(p+3)%4;
			cl[c1][3]=cl[c][5];
			cl[c1][4]=cl[c][4];
			cl[c1][5]=cl[c][3];


			cl[c][3]=tp[3];
			cl[c][4]=tp[4];
			cl[c][5]=tp[5];

}

void plot2()
{      while(1)
	{
		ch=getch();
		if(ch=='z')
		{	ch=getch();
			if(ch=='a') {turns++;	za();ml=1;}
			else if(ch=='x'){turns++; yd=1;	zx();}

	       }

		else if(ch=='q')
		{	ch=getch();
			if(ch=='a'){  qa();turns++;nl=1;}
			else if(ch=='w'){ qw();yu=1; turns++;}

	       }

	       else if(ch=='e')
		{	ch=getch();
			if(ch=='d'){turns++; ed();nr=1;}

			else if(ch=='w'){turns++;zu=1;  ew(); }

	       }
		else if(ch=='c')
		{	ch=getch();
			if(ch=='d'){turns++; cd();mr=1;}
			else if(ch=='x'){turns++;cx();zd=1;}

		}
		else if(ch=='w')
		{	ch=getch();
			if(ch=='s'){ ws();turns++;}

		}
		else if(ch=='x')
		{	ch=getch();
			if(ch=='s'){xs();turns++;}
		}
		else if(ch=='a')
		{
		ch=getch();
		if(ch=='s'){as();turns++;}
		}
		else if(ch=='d')
		{
		ch=getch();
		if(ch=='s'){ds();turns++;}
		}
		plot3();
		if(ch==UP)
		{qa();ws();ed();nl=1;nr=1;}
		if(ch==DOWN)
		{za();xs();cd();ml=1;mr=1;}
		if(ch==RIGHT)
		{yd=1;yu=1;qw();as();zx();}
		if(ch==LEFT)
		{zd=1;zu=1;ew();ds();cx();}
		if(p<0)
		{p=3;}
		if(p>3)
		{p=0;}
		if(q<0)q=1;
		if(q>1)q=0;

		cleardevice();
		itoa(turns,tns,10);
		outtextxy(10,10,tns);
		outtextxy(35,10,"turns");
		plot3();
		if(ch==ESC)
		{
			cleardevice();
			setbkcolor(LIGHTBLUE);
			for(int i=0;i<6;i++){
			for(int j=0;j<9;j++)printf("%d\t",cl[i][j]);printf("\n");}getch();

		    //	for(int i=0;i<6;i++){for(int j=0;j<9;j++){printf("%d\t",cl[i][j]); prb[i][j]=cl[i][j];}
		    //	printf("\n");}
			/*
			 Create a file named "TEST.$$$" in the current directory and write
			 a string to it.  If "TEST.$$$" already exists, it will be overwritten.
			*/

			if ((handle = open("score.txt", O_WRONLY | O_CREAT | O_TRUNC,
			      S_IREAD | S_IWRITE)) == -1)
			{
			   printf("Error opening file.\n");
			   exit(1);
			}
			char tt[100][2]={0};
			for(i=0;i<1;i++)
			{	for(int j=0;j<2;j++)
				{
					int v=2;//cl[i][j]=2;
					int n=i*9+j;
				       //har tt[2][2]={0,0};
				       if(v==1){tt[n][0]='0';tt[n][1]='1';

					if(v==2){tt[n][0]='0';tt[n][1]='2';}
					if(v==15){tt[n][0]='1';tt[n][1]='5';}
					if(v==4){tt[n][0]='0';tt[n][1]='4';}
					if(v==12){tt[n][0]='1';tt[n][1]='2';}
					if(v==14){tt[n][0]='1';tt[n][1]='4';}
					printf("string==%s",tt[n]);						strcpy(str,tt[n]);
					getch();
					strcpy(str,tt[n]);
					//	strcpy(str, "Hello, world!\n");
				length = strlen(str);

				if ((res = write(handle, str, length)) != length)
				{
						 printf("Error writing to the file.\n");
						  exit(1);

				}
				printf("Wrote %d bytes to the file.\n", res);
				getch();
				close(handle);
				}
			}
		}

				getch();

	       //close(handle);

		getch();
		menu();
		break;


	}

}
}
void pointproj()
{
	cleardevice();
	plot3();
	 plot2();

}


void main()
{



	initgraph(&gd,&gm,"");
	 erc = graphresult();
	 if (erc != grOk)
		{
			printf("Graphics error: %s\n", grapherrormsg(erc));
			printf("Press any key to halt:");
			getch();
			exit(1);
		}
		menu();
}
