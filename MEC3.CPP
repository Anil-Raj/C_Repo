#include<stdio.h>
#include<conio.h>
int sm(char a[],char b[])
{
	for(int i=0;i<31-5;i++)
	{       int j=0 ;
		while(j<5&&b[j]==a[i+j])
			j++;
		if(j==5) return i;
	}
	return -1;
}

int main()
{
	int m,n,k;
	char a[31]="ahrfrwehfiuhrefjerjfkeusfckenrk",b[5]="sakhh";
	k=sm(a,b);
	if(k<0)printf("not found");
	return 0;
}
