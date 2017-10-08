#include<iostream.h>
#include<conio.h>
int f(int n)
{
	if(n==0||n==1)
	return 1;
      if(n>0)
	return n*(n-1)*f(n-2);
}
int g(int n)
{
	if(n==0)
	return 0;
	if(n>0)
	return g(n-1)+n;
}

int main()
{
	int n[5]={1,5,10,15,20};
	clrscr();
	for(int i=0;i<5;i++)
	cout<<f(i)<<"<="<<g(i)<<"\n";
	return 0;
}
