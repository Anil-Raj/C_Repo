/*	hello friends!! This project is given my "Computer Graphics" subject.
	I hope that you like this program "
	please change path if error in initgraph function*/


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
#define M 100

	char Ch;
	int FLG[4];
	void plane(int,int);
	void lbl(int,int,int,int,int,int,int,int);
	void cmdlbl(int,int,int,int,char);
	void textbtn(int,int,int,int,int,int,int);
	void chekcmd(int);
	void menu();
	void set3dview();
	void logo();
	void setpnt();
	void settsfv();

	class D3{
			private:
				float cosa,cosb,sina,sinb,sinc,cosc;
			public:
				void ini(float cos1,float cos2,float cos3);
				void plot(int x,int y,int z,int &x1,int &y1);
				void plot1(int x,int y,int z,int &x1,int &y1,int xx,int yy);
				void plot2(int x,int y,int z,int xz,int yz,int zz,int c,int xx,int yy);
				void plot3d(int x,int y,int z,int col);
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
		x1=320+int(5.5+f1);
		y1=240-int(5.5+g1);
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
	void D3::plot2(int x,int y,int z,int xz,int yz,int zz,int c,int xx,int yy)
	{       float m1,m2,n1,n2;

		int i;
		switch(c)
		{
			case 1:for(i=0;i<100;i++){

			plot1(x+i,y,z,m1,m2,xx,yy);
			plot1(xz+i,yz,zz,m2,n2,xx,yy);
			line(m1,n1,m2,n2);        }
		}

	}

	D3 pnt,ptpl;
	void lbl(int x1,int y1,int x2,int y2,int ln,int cl,int p)
	{
		int d,fr,bk;
		d=3;
		setcolor(0);
		rectangle(x1-1,y1-1,x2+1,y2+1);
		setcolor(ln);
		rectangle(x1,y1,x2,y2);
		rectangle(x1+d,y1+d,x2-d,y2-d);
		line(x2,y1,x2-d,y1+d);
		line(x1,y2,x1+d,y2-d);
		fr=0;
		setfillstyle(1,fr);
		floodfill((x1+x2)/2,(y1+y1+d)/2,ln);
		bk=15;
		setfillstyle(1,bk);
		floodfill((x2+x2-d)/2,(y1+y2)/2,ln);
		setfillstyle(p,cl);
		bar(x1+d+1,y1+d+1,x2-d-1,y2-d-1);
		setcolor(7);
		rectangle(x1-1,y1-1,x2+1,y2+1);
	}

	void textbtn(int x1,int y1,int x2,int y2,int ln,int c1,int p)
	{
		int d,fr,bk;
		d=3;
		setcolor(c1);
		rectangle(x1-1,y1-1,x2+1,y2+10);
		setfillstyle(1,15);
		bar(x1,y1,x2,y2);
		setcolor(ln);
		rectangle(x1,y1,x2,y2);
		rectangle(x1+d,y1+d,x2-d,y2-d);
		line(x2,y1,x2-d,y1+d);
		line(x1,y2,x1+d,y2-d);
		fr=0;
		setfillstyle(1,fr);
		floodfill((x1+x2)/2,(y1+y1+d)/2,ln);
		bk=15;
		setfillstyle(1,bk);
		floodfill((x2+x2-d)/2,(y1+y2)/2,ln);
		setfillstyle(p,c1);
		bar(x1+d+1,y1+d+1,x2-d-1,y2-d-1);
		setcolor(7);
		rectangle(x1-1,y1-1,x2+1,y2+1);
	}

	class CMD
	{
		private:
			char *Str;
			int cl1;
			int ln,d,x1,y1,x2,y2,cl,fr,bk,v1,v2,flag,val,d1;
		public:
			void cmdbtn(int X1,int Y1,int X2,int Y2,char *str);
			int cmdclk(int V1,int V2);
	};

	void CMD::cmdbtn(int X1,int Y1,int X2,int Y2,char *str)
	{
		Str=str;
		x1=X1;
		y1=Y1;
		x2=X2;
		y2=Y2;
		ln=9;
		d=3;
		cl=10;
		fr=15;
		bk=0;
		setcolor(ln);
		rectangle(x1,y1,x2,y2);
		rectangle(x1+d,y1+d,x2-d,y2-d);
		line(x2,y1,x2-d,y1+d);
		line(x1,y2,x1+d,y2-d);
		setfillstyle(1,fr);
		floodfill((x1+x2)/2,(y1+y1+d)/2,ln);
		setfillstyle(1,bk);
		floodfill((x2+x2-d)/2,(y1+y2)/2,ln);
		setfillstyle(1,cl);
		bar(x1+d+1,y1+d+1,x2-d-1,y2-d-1);
		setcolor(ln);
		rectangle(x1-1,y1-1,x2+1,y2+1);
		rectangle(x1-2,y1-2,x2+2,y2+2);
		d1=5;
		cl1=4;
		setcolor(cl1);
		settextjustify(1,1);
		outtextxy((x1+x2)/2,(y1+y2)/2,Str);
	}

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
			fr=0;
			bk=15;
			setfillstyle(1,fr);
			floodfill((x1+x2)/2,(y1+y1+d)/2,ln);
			setfillstyle(1,bk);
			floodfill((x2+x2-d)/2,(y1+y2)/2,ln);
			setcolor(cl);
			settextjustify(1,1);
			outtextxy((x1+x2)/2,(y1+y2)/2,Str);
			setcolor(cl1);
			settextjustify(1,1);
			outtextxy((x1+x2+d1)/2,(y1+y2+d1)/2,Str);
			delay(70);
			fr=15;
			bk=0;
			setfillstyle(1,fr);
			floodfill((x1+x2)/2,(y1+y1+d)/2,ln);
			setfillstyle(1,bk);
			floodfill((x2+x2-d)/2,(y1+y2)/2,ln);
			setcolor(cl);
			settextjustify(1,1);
			outtextxy((x1+x2+d1)/2,(y1+y2+d1)/2,Str);
			setcolor(cl1);
			settextjustify(1,1);
			outtextxy((x1+x2)/2,(y1+y2)/2,Str);
			flag=1;
			val=-1;
			delay(300);
			val=v2;
		}
		return(val);
	}


	CMD ap[10];
	float H1,V1,Q1;
	int AX,AY,AZ;
	char *Pntstr[10];
	void set3dview()
	{
	int i=1;
	int d=5;
	int x11[50],y11[50];
	int ax,ay,az,d1,xp,yp;
	int Rx,Ry;
	Rx=160;
	Ry=212;
	char *str3d;
	str3d="> Use arrow keys to rotate & Press ESC to exit <";
	ax=100;
	ay=100;
	az=100;
	d1=15;
	setfillstyle(11,1);
	bar(100+d,390+d,540-d,415-d);
	settextstyle(2,0,4);
	setcolor(14);
	settextjustify(1,1);
	outtextxy(320,401,str3d);
	while(1)
	{
	ptpl.ini(H1,V1-90.0,Q1);
   /*	ptpl.plot1(-ax,ay,0,x11[31],y11[31],Rx,Ry);
	ptpl.plot1(-ax,-ay,0,x11[32],y11[32],Rx,Ry);
	ptpl.plot1(ax,ay,0,x11[33],y11[33],Rx,Ry);
	ptpl.plot1(ax,-ay,0,x11[34],y11[34],Rx,Ry);          */
	ptpl.plot1(0,0,0,x11[40],y11[40],Rx,Ry);
	ptpl.plot1(AX,AY,AZ,x11[27],y11[27],Rx,Ry);
	ptpl.plot1(AX+10,AY+10,AZ+10,x11[28],y11[28],Rx,Ry);
	ptpl.plot1(AX,AY,0,x11[29],y11[29],Rx,Ry);
	ptpl.plot1(0,AY,AZ,x11[30],y11[30],Rx,Ry);
	ptpl.plot1(AX,0,AZ,x11[35],y11[35],Rx,Ry);
	ptpl.plot1(AX,0,0,x11[36],y11[36],Rx,Ry);
	ptpl.plot1(0,AY,0,x11[37],y11[37],Rx,Ry);
	ptpl.plot1(0,0,AZ,x11[38],y11[38],Rx,Ry);
	setcolor(14);
  ptpl.plot2(0,0,0,AX,AY,0,1,Rx,Ry);

	setcolor(14);
      //	outtextxy(x11[28],y11[28],"P");
	putpixel(x11[27],y11[27],15);
	setcolor(10);
	circle(x11[27],y11[27],2);
	setcolor(10);
	 setlinestyle(1,1,2);
		line(x11[27],y11[27],x11[29],y11[29]);
		line(x11[36],y11[36],x11[35],y11[35]);
		line(x11[37],y11[37],x11[30],y11[30]);
		line(x11[38],y11[38],x11[40],y11[40]);

	setcolor(14);
		line(x11[27],y11[27],x11[30],y11[30]);
		line(x11[37],y11[37],x11[29],y11[29]);
		line(x11[38],y11[38],x11[35],y11[35]);
		line(x11[36],y11[36],x11[40],y11[40]);
	setcolor(13);
		line(x11[27],y11[27],x11[35],y11[35]);
		line(x11[30],y11[30],x11[38],y11[38]);
		line(x11[36],y11[36],x11[29],y11[29]);
		line(x11[37],y11[37],x11[40],y11[40]);
	setlinestyle(0,0,0);
	Ch=getch();
	delay(10);
	if(Ch==ESC)
	{
	setfillstyle(11,1);
	bar(100+d,390+d,540-d,415-d);

		while(1)
		{       settextstyle(0,0,0);
			chekcmd(ap[0].cmdclk(i,4));
			chekcmd(ap[1].cmdclk(i,1));
			chekcmd(ap[2].cmdclk(i,2));
			chekcmd(ap[3].cmdclk(i,3));
			settextstyle(2,0,4);
			setcolor(14);
			settextjustify(1,1);
			outtextxy(320,401,Pntstr[i]);
			settextstyle(0,0,0);
			Ch=getch();
			setfillstyle(11,1);
			bar(100+d,390+d,540-d,415-d);
			if(Ch==RIGHT)
			{i++;}
			if(Ch==LEFT)
			{i--;}
			if(i<1)
			{i=4;}
			if(i>4)
			{i=1;}
		}
	}
	setcolor(0);
	setfillstyle(0,0);
	bar(10+d,45+d,310-d,380-d);
	if(Ch=='l')
	{     }
	if(Ch==RIGHT)
	{
		H1+=5.0;
	}
	if(Ch==UP)
	{
		 V1-=5.0;
		 H1-=5.0;
	}
	if(Ch==LEFT)
	{
		H1-=5.0;
	}
	if(Ch==DOWN)
	{
		V1+=5.0;
	}
	if(Ch==HOME)
	{
		Q1-=3.0;
	}
	if(Ch==END)
	{
			Q1+=3.0;
	}
		setcolor(0);
		setfillstyle(0,0);
		bar(10+d,45+d,600-d,380-d);
	}
	}

	void setpnt()
      {
	      int i,xp,yp,d;
		int x11[50],y11[50];
		int ax,ay,az,d1;
		int Rx,Ry;
		char *strpnt;
		strpnt="> Use arrow , Home or End key to set point & Press ESC to exit <";
		i=2;
		d=5;
		Rx=160;
		Ry=212;
		ax=100;
		ay=100;
		az=100;
		d1=15;
	      /*	setfillstyle(11,1);
		bar(100+d,390+d,540-d,415-d);
		settextstyle(2,0,4);
		setcolor(14);
		settextjustify(1,1);
		outtextxy(320,401,strpnt);
		settextstyle(0,0,0);
		pnt.ini(H1,V1-90.0,Q1);
		ptpl.ini(H1,V1-90.0,Q1);
		settextstyle(0,0,0);     */

		while(1)
		{

		ptpl.plot1(AX-M,AY-M,AZ-M,x11[40],y11[40],Rx,Ry);
		ptpl.plot1(AX,AY,AZ,x11[27],y11[27],Rx,Ry);
		ptpl.plot1(AX+10,AY+10,AZ+10,x11[28],y11[28],Rx,Ry);
		ptpl.plot1(AX,AY,AZ-M,x11[29],y11[29],Rx,Ry);
		ptpl.plot1(AX-M,AY,AZ,x11[30],y11[30],Rx,Ry);
		ptpl.plot1(AX,AY-M,AZ,x11[35],y11[35],Rx,Ry);
		ptpl.plot1(AX,AY-M,AZ-M,x11[36],y11[36],Rx,Ry);
		ptpl.plot1(AX-M,AY,AZ-M,x11[37],y11[37],Rx,Ry);
		ptpl.plot1(AX-M,AY-M,AZ,x11[38],y11[38],Rx,Ry);
		setcolor(14);
		putpixel(x11[27],y11[27],15);
		setcolor(10);
		circle(x11[27],y11[27],2);
	setcolor(10);
		setlinestyle(1,1,2);
		     //	settsfv();
		line(x11[27],y11[27],x11[29],y11[29]);
		line(x11[36],y11[36],x11[35],y11[35]);
		line(x11[37],y11[37],x11[30],y11[30]);
		line(x11[38],y11[38],x11[40],y11[40]);

	setcolor(14);
		line(x11[27],y11[27],x11[30],y11[30]);
		line(x11[37],y11[37],x11[29],y11[29]);
		line(x11[38],y11[38],x11[35],y11[35]);
		line(x11[36],y11[36],x11[40],y11[40]);
	setcolor(13);
		line(x11[27],y11[27],x11[35],y11[35]);
		line(x11[30],y11[30],x11[38],y11[38]);
		line(x11[36],y11[36],x11[29],y11[29]);
		line(x11[37],y11[37],x11[40],y11[40]);
	setlinestyle(0,0,0);

		Ch=getch();
		delay(9);
		if(Ch==ESC)
		{
		setfillstyle(11,1);
		bar(100+d,390+d,540-d,415-d);

		while(1)
		{       settextstyle(0,0,0);
			chekcmd(ap[0].cmdclk(i,4));
			chekcmd(ap[1].cmdclk(i,1));
			chekcmd(ap[2].cmdclk(i,2));
			chekcmd(ap[3].cmdclk(i,3));
			settextstyle(2,0,4);
			setcolor(14);
			settextjustify(1,1);
			outtextxy(320,401,Pntstr[i]);
			settextstyle(0,0,0);
			Ch=getch();
			setfillstyle(11,1);
			bar(100+d,390+d,540-d,415-d);
			if(Ch==RIGHT)
			{i++;}
			if(Ch==LEFT)
			{i--;}
			if(i<1)
			{i=4;}
			if(i>4)
			{i=1;}
		}
	}
	if(Ch==RIGHT)
	{
		AX+=3;
	}
	if(Ch==HOME)
	{
		AZ+=3;
	}
	if(Ch==END)
	{
		AZ-=3;
	}
	if(Ch==UP)
	{
		AY+=3;
	}
	if(Ch==LEFT)
	{
		AX-=3;
	}
	if(Ch==DOWN)
	{
		AY-=3;
	}

	if(AX>300)
	{
	AX=300;
	}
	if(AX<-300)
	{
	AX=-300;
	}
	if(AZ>300)
	{
	AZ=300;
	}
	if(AZ<-80)
	{
	AZ=-80;
	}
	if(AY>80)
	{
	AY=80;
	}
	if(AY<-80)
	{
	AY=-80;
	}
	{
	setcolor(0);
	setfillstyle(0,0);
	bar(10+d,45+d,310-d,380-d);
	}

	}

	}
	void pointproj()
	{
		int i;
		H1=0.0;
		V1=0.0;
		Q1=0.0;
		AX=52;
		AY=52;
		AZ=52;
		Pntstr[4]="> Press ENTER to exit <";
		Pntstr[1]="> Press ENTER to set 3D view <";
		Pntstr[2]="> Press ENTER to set point <";
		Pntstr[3]="> Press ENTER to get info about Programmer <";

		textbtn(10,45,600,380,4,0,1);
	    //	textbtn(330,45,629,142,4,0,1);
	    //	textbtn(330,164,629,261,4,0,1);
	    //	textbtn(330,283,629,380,4,0,1);

		textbtn(100,390,540,415,4,1,11);
		ap[0].cmdbtn(510,425,600,465,"Exit");
		ap[1].cmdbtn(40,425,150,465,"Set 3D View");
		ap[2].cmdbtn(200,425,310,465,"Set Point");
		ap[3].cmdbtn(355,425,460,465,"About");
		setcolor(4);
		settextstyle(0,0,0);
		settextjustify(1,1);
		outtextxy(170,35," 3D View ");
		outtextxy(478,35," Top View ");
		outtextxy(478,154," Side View ");
		outtextxy(478,273," Front View ");
		chekcmd(ap[1].cmdclk(1,1));
		i=1;
		set3dview();
	}




	void chekcmd(int t)
	{
		switch(t)
		{
			case 1:
			{
				set3dview();
			}
			case 2:
			{
				setpnt();
			}
			case 3:
			{
				cleardevice();
				logo();
				}
			case 4:
			{     	closegraph();
				exit(1);
			}
		}
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

		void logo()
		{

			int i,j;
			char *str [5];
			i=100;
			j=100;
			str[0]=" PROGRAMMER :";
			str[3]=" CONTACT :";
			str[1]="> Samir Solanki (SAMSOL)";
			str[2]="> samirsolanki_online@hotmail.com ";
			settextjustify(1,1);
			setcolor(5);
			settextstyle(7,0,1);
			outtextxy(mx-100,my-60,str[0]);
			outtextxy(mx-130,my+40,str[3]);
			setcolor(14);
			settextjustify(1,1);
			settextstyle(3,0,2);
			outtextxy(mx+30,my-20,str[1]);
			outtextxy(mx+30,my+80,str[2]);
			getch();
			cleardevice();
			pointproj();
		    }
