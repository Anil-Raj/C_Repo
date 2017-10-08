#include<stdio.h>
#include<conio.h>
#define nov 4
int main()
{
	int b[nov][nov],m[nov],n[nov],i,j,x=0,y=0;
	clrscr();
	for(i=0;i<4;i++)
	      for(j=0;j<4;j++){
			scanf("%d",&b[i][j]);
			if(b[i][j]==1){
				m[x++]=i;
				n[y++]=j;
			}
		}
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
		      b[m[i]][n[j]]=1;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++)
			printf("%d\t",b[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}