#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>

typedef struct cse{
	int score;
	char namE[10];
	};
int main()
{       cse cs[10];
	cout<<"enter 5 names"<<endl;
       for(int i=0;i<5;i++)	cin<<cs[i].namE;
       cout<<"enter marks"<<endl;
       for(i=0;i<5;i++) cin<<yyycs[i].score;
       system("clear");
       for(i=0;i<5;i++)cout<<cs[i].namE<<"\t"<<cs[i].score<<endl;
       return 0;
}