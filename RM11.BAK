#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<graphics.h>
#include<ctype.h>

#define mx getmaxx()/2
#define my getmaxy()/2
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
# define pi M_PI

	char Ch;
	int FLG[4];
	void plane(int,int);
	void lbl(int,int,int,int,int,int,int,int);
	void cmdlbl(int,int,int,int,char);
	void menu();
	void set3dview();
	void logo();
	void settsfv();
	int k=0;


	float H1,V1,Q1;
	int AX,AY,AZ;
	char *Pntstr[10];
	void settsfv(){}


	class D3{
			private:
				float cosa,cosb,sina,sinb,sinc,cosc;
			public:
				void ini(float cos1,float cos2,float cos3);
				void plot(int x,int y,int z,int &x1,int &y1);
				void plot1(int x,int y,int z,int &x1,int &y1,int xx,int yy);
				void plot3d(int x,int y,int z,int col);
				void plot2(int x,int y,int z,int x1,int y1,int z1,int xx,int yy);
				void plot3(int r,int m,int clr,int xx,int yy);
		};

	void D3::ini(float cos1,float cos2,float cos3)
	{
		cosa=cos(cos1*pi/180);
		cosb=cos(cos2*pi/180);
		cosc=cos(cos3*pi/180);
		sina=sin(cos1*pi/180);
		sinb=sin(cos2*pi/180);
		sinc=sin(cos3*pi/180);
	}

	void D3::plot(int x,int y,int z,int &x1,int &y1)
	{
		float f,g,f1,g1;
		f=x*cosa-y*sina;
		g=x*sina*sinb+y*cosa*sinb+z*cosb;
		f1=f*cosc-g*sinc;
		g1=f*sinc+g*cosc;
		x1=320+int(.5+f1);
		y1=240-int(.5+g1);
	}
	void D3::plot3d(int x,int y,int z,int col)
	{
		int p,q;
		plot(x,y,z,p,q);
		putpixel(p,q,col);
	}
	void D3::plot1(int x,int y,int z,int &x1,int &y1,int xx,int yy)
	{
		float f,g,f1,g1;
		f=x*cosa-y*sina;
		g=x*sina*sinb+y*cosa*sinb+z*cosb;
		f1=f*cosc-g*sinc;
		g1=f*sinc+g*cosc;
		x1=xx+int(.5+f1);
		y1=yy+int(.5+g1);
	}
	void D3::plot2(int x,int y,int z,int x1,int y1,int z1,int xx,int yy)
	{
		int m,n,p,q,b=1;     while(b){ if(x!=x1){
		plot1(x1,y,z,m,n,xx,yy);
		plot1(x1,y1,z1,p,q,xx,yy);
	 //	(x>x1)?x--:x1--;
	 if(x==x1)b=0;
	 x1--; }
		else if(y!=y1){
			plot1(x,y1,z,m,n,xx,yy);
		plot1(x1,y1,z1,p,q,xx,yy);   y1--;
		if(y==y1)b=0;
		}
		else {
		plot1(x,y,z1,m,n,xx,yy);
		plot1(x1,y1,z1,p,q,xx,yy);
		z1--;if(z==z1)b=0;
		}
		line(m,n,p,q);
					  }
	}
	void D3::plot3(int r,int m,int clr,int x,int y)
	{
		setcolor(clr);
		int xx,yy;
		switch(r)
		{
			case 'f': xx=150,yy=180;
				switch(m)
				{
				case 0:plot2(0,0,0,AX/3,AY/3,0,xx,yy);
				case 1:plot2(AX/3,0,0,2*(AX/3),AY/3,0,xx,yy);
				case 2:plot2(2*(AX/3),0,0,AX,AY/3,0,xx,yy);
				case 3:plot2(0,AY/3,0,AX/3,2*(AY/3),0,xx,yy);
				case 4:plot2(AX/3,AY/3,0,2*(AX/3),2*(AY/3),0,xx,yy);
				case 5:plot2(2*(AX/3),AY/3,0,AX,2*(AY/3),0,xx,yy);
				case 6:plot2(0,2*(AY/3),0,AX/3,AY,0,xx,yy);
				case 7:plot2(AX/3,2*(AY/3),0,2*(AX/3),AY,0,xx,yy);
				case 8:plot2(2*(AX/3),2*(AY/3),0,AX,AY,0,xx,yy);
				}
				break;
			case 'b':  xx=150,yy=280;
				switch(m)
				{
				case 0:plot2(0,0,AZ,AX/3,AY/3,AZ,xx,yy);
				case 1:plot2(AX/3,0,AZ,2*(AX/3),AY/3,AZ,xx,yy);
				case 2:plot2(2*(AX/3),0,AZ,AX,AY/3,AZ,xx,yy);
				case 3:plot2(0,AY/3,AZ,AX/3,2*(AY/3),AZ,xx,yy);
				case 4:plot2(AX/3,AY/3,AZ,2*(AX/3),2*(AY/3),AZ,xx,yy);
				case 5:plot2(2*(AX/3),AY/3,AZ,AX,2*(AY/3),AZ,xx,yy);
				case 6:plot2(0,2*(AY/3),AZ,AX/3,AY,AZ,xx,yy);
				case 7:plot2(AX/3,2*(AY/3),AZ,2*(AX/3),AY,AZ,xx,yy);
				case 8:plot2(2*(AX/3),2*(AY/3),AZ,AX,AY,AZ,xx,yy);
				}
				break;
			case 'l':     xx=150;yy=130;
				switch(m)
				{
				case 0:plot2(0,0,0,0,AY/3,AZ/3,xx,yy);
				case 1:plot2(0,0,AZ/3,0,AY/3,2*(AZ/3),xx,yy);
				case 2:plot2(0,0,2*(AZ/3),0,AY/3,AZ,xx,yy);
				case 3:plot2(0,AY/3,0,0,2*(AY/3),AZ/3,xx,yy);
				case 4:plot2(0,AY/3,AZ/3,0,2*(AY/3),2*(AZ/3),xx,yy);
				case 5:plot2(0,AY/3,2*(AZ/3),0,2*(AY/3),AZ,xx,yy);
				case 6:plot2(0,2*(AY/3),0,0,AY,AZ/3,xx,yy);
				case 7:plot2(0,2*(AY/3),AZ/3,0,AY,2*(AZ/3),xx,yy);
				case 8:plot2(0,2*(AY/3),2*(AZ/3),0,AY,AZ,xx,yy);
				}break;
			case 'r': xx=50;yy=230;
				switch(m)
				{
				case 0:plot2(AX,0,0,AX,AY/3,AZ/3,xx,yy);
				case 1:plot2(AX,0,AZ/3,AX,AY/3,2*(AZ/3),xx,yy);
				case 2:plot2(AX,0,2*(AZ/3),AX,AY/3,AZ,xx,yy);
				case 3:plot2(AX,AY/3,0,AX,2*(AY/3),AZ/3,xx,yy);
				case 4:plot2(AX,AY/3,AZ/3,AX,2*(AY/3),2*(AZ/3),xx,yy);
				case 5:plot2(AX,AY/3,2*(AZ/3),AX,2*(AY/3),AZ,xx,yy);
				case 6:plot2(AX,2*(AY/3),0,AX,AY,AZ/3,xx,yy);
				case 7:plot2(AX,2*(AY/3),AZ/3,AX,AY,2*(AZ/3),xx,yy);
				case 8:plot2(AX,2*(AY/3),2*(AZ/3),AX,AY,AZ,xx,yy);
				}break;
			case 'u': xx=50;yy=180;
				switch(m)
				{
				case 0:plot2(0,AY,0,AX/3,AY,AZ/3,xx,yy);
				case 1:plot2(AX/3,AY,0,2*(AX/3),AY,AZ/3,xx,yy);
				case 2:plot2(2*(AX/3),AY,0,AX,AY,AZ/3,xx,yy);
				case 3:plot2(0,AY,AZ/3,AX/3,AY,2*(AZ/3),xx,yy);
				case 4:plot2(AX/3,AY,AZ/3,2*(AX/3),AY,2*(AZ/3),xx,yy);
				case 5:plot2(2*(AX/3),AY,AZ/3,AX,AY,2*(AZ/3),xx,yy);
				case 6:plot2(0,AY,2*(AZ/3),AX/3,AY,AZ,xx,yy);
				case 7:plot2(AX/3,AY,2*(AZ/3),2*(AX/3),AY,AZ,xx,yy);
				case 8:plot2(2*(AX/3),AY,2*(AZ/3),AX,AY,AZ,xx,yy);

				}break;
			case 'd':xx=250;yy=180;
				switch(m)
				{
				case 0:plot2(0,0,0,AX/3,0,AZ/3,xx,yy);
				case 1:plot2(AX/3,0,0,2*(AX/3),0,AZ/3,xx,yy);
				case 2:plot2(2*(AX/3),0,0,AX,0,AZ/3,xx,yy);
				case 3:plot2(0,0,AZ/3,AX/3,0,2*(AZ/3),xx,yy);
				case 4:plot2(AX/3,0,AZ/3,2*(AX/3),0,2*(AZ/3),xx,yy);
				case 5:plot2(2*(AX/3),0,AZ/3,AX,0,2*(AZ/3),xx,yy);
				case 6:plot2(0,0,2*(AZ/3),AX/3,0,AZ,xx,yy);
				case 7:plot2(AX/3,0,2*(AZ/3),2*(AX/3),0,AZ,xx,yy);
				case 8:plot2(2*(AX/3),0,2*(AZ/3),AX,0,AZ,xx,yy);

				}break;
		}
	}
	D3 pnt,ptpl;
	class CMD
	{
		private:
			char *Str;
			int cl1;
			int ln,d,x1,y1,x2,y2,cl,fr,bk,v1,v2,flag,val,d1;
		public:
			int cmdclk(int V1,int V2);
	};

	int CMD::cmdclk(int V1,int V2)
	{
		v1=V1;
		v2=V2;
		val=-1;
		if(v1==v2)
		{
			setcolor(4);
			rectangle(x1-2,y1-2,x2+2,y2+2);
			rectangle(x1-1,y1-1,x2+1,y2+1);
			flag=1;
			val=-1;
		}
		if(v1!=v2)
		{
			setcolor(ln);
			rectangle(x1-2,y1-2,x2+2,y2+2);
			rectangle(x1-1,y1-1,x2+1,y2+1);
			flag=1;
			val=-1;
			flag=0;
			val=-1;
		}
		if(flag==1 && Ch==ENTER)
		{

		}
		return(val);
	}

	CMD ap[10];
	int i=1;
	int d=5;
     //	int x11[50],y11[50];
	int Rx=160;
	int Ry=212;
	char *str3d;
	int ax=100;
	int ay=100;
	int az=100;
	int d1=15;
	int cl[6][9]={{15,15,15,15,15,15,15,15,15},
		      {14,14,14,14,14,14,14,14,14},
		      {4,4,4,4,4,4,4,4,4},
		      {2,2,2,2,2,2,2,2,2},
		      {1,1,1,1,1,1,1,1,1},
		      {12,12,12,12,12,12,12,12,12}};
	void pp()
	{
		outtextxy(450,80,"front white");
		outtextxy(450,90,"back red");
		outtextxy(450,100,"left green");
		outtextxy(450,110," right yellow");

	   char ch1,ch2,ch3;
	   int temp[9];
	ptpl.ini(H1,V1-90.0,Q1);
	setlinestyle(1,3,5);
	for(int i=0;i<9;i++){
		ptpl.plot3('b',i,cl[2][i],Rx,Ry);
		ptpl.plot3('l',i,cl[3][i],Rx,Ry);
		ptpl.plot3('u',i,cl[4][i],Rx,Ry);
		ptpl.plot3('d',i,cl[5][i],Rx,Ry);
		ptpl.plot3('r',i,cl[1][i],Rx,Ry);
		ptpl.plot3('f',i,cl[0][i],Rx,Ry);
		}
	      if(k==0){k++;
	      ch1=getch();
	      ch2=getch();
	      ch3=getch();

	      if((ch1=='q')&&(ch2=='w')&&(ch3=='e'))
	      {
		for(i=6;i<9;i++)temp[i]=cl[0][i];
		for(int j=0;j<6;j++)
			for(i=6;i<9;i++)
			{
				cl[0][i]=cl[3][i];
				cl[3][i]=cl[2][i];
				cl[2][i]=cl[1][i];
				cl[1][i]=temp[i];

			}
	     }             }
	}
	void kk()
	{

	CMD ap[10];
	int i=1;
	int d=5;
	int x11[50],y11[50];
	int Rx=160;
	int Ry=212;
	char *str3d;
	int ax=100;
	int ay=100;
	int az=100;
	int d1=15;
	   //	pnt.ini(
	}
	void set3dview()
	{
	kk();
	setfillstyle(11,1);
	//10,45,310,380,4,0
	bar(100+d,390+d,540-d,415-d);
	settextstyle(2,0,4);
	setcolor(14);
	settextjustify(1,1);
	outtextxy(320,401,str3d);
	settsfv();
	while(1)
	{
	pp();
	Ch=getch();
       //	delay(10);
	setcolor(0);
	setfillstyle(0,0);
      //	bar(0,0,mx*2,my*2);
      //	bar(10+d,45+d,310-d,380-d);
	if(Ch=='x') exit(0);
	if(Ch==RIGHT)H1+=90.0;
	if(Ch==UP)V1-=90.0;//5.0;
	if(Ch==LEFT)H1-=90.0;//5.0;
	if(Ch==DOWN)V1+=90.0;//5.0;
	if(Ch==HOME)Q1-=90.0;//5.0;
	if(Ch==END)Q1+=90.0;//5.0;
	setcolor(0);
	setfillstyle(0,0);
	 bar(0,0,mx*2,my*2);
       //	bar(10+d,45+d,310-d,380-d);
	}
	}

	void pointproj()
	{
		int i;
		H1=0.0;V1=0.0;Q1=0.0;
		AX=52;AY=52;AZ=52;
		setcolor(4);
		settextstyle(0,0,0);
		settextjustify(1,1);


		set3dview();
	}
	void main()
	{
		int gd=DETECT,gm,erc;
		initgraph(&gd,&gm,"\\tc\\bgi\\");
		 erc = graphresult();


		if (erc != grOk)
		{
			printf("Graphics error: %s\n", grapherrormsg(erc));
			printf("Press any key to halt:");
			getch();
			exit(1);
		}
		pointproj();
	}