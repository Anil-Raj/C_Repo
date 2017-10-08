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
//char string[40];
int length, res;
char *buf;
int handle, bytes;
char str[200];
char st[54][2];

int rr=1;
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
{      // if(rr)
	{
	buf =(char *)malloc(200);

	if ((handle =
      open("score.txt", O_RDONLY | O_BINARY, S_IWRITE | S_IREAD)) == -1)
   {
      printf("Error Opening File\n");
      exit(1);
   }
   if ((bytes = read(handle, buf, 200)) == -1) {
      printf("Read Failed.\n");
      exit(1);
   }

   else {
   }
   strcpy(str, buf);

   for(int i=0;i<108;i++)
	str[i]=str[3+i];
   for(int count=0;count<bytes;count++)
   {       int i=(count)%2;
	st[count/2][i]=str[count];
   }
   for(count=0;count<54;count++){
   int val=0;

   val=st[count][1]-48;
   val=(st[count][0]-48)*10+val;


   cl[count/9][count%9]=val;

   }
   for(i=0;i<6;i++){
	for(int j=0;j<9;j++)
		printf("%4d",cl[i][j]);
	printf("\n");
	}
   getch();
   rr=0;
  }
}
void main()
{       clrscr();
	rsm();
	}