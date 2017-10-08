#include<iostream.h>
#include<conio.h>

int main()
{
	int a[10]={5,4,7,2,1,6},n=6;
	clrscr();
	for(int i=0;i<2;i++)
	{       int pos=i;
		for(int j=i+1;j<n-1;j++)
		{
			if(a[j]<a[pos])
			{
			   pos=j;
			}
		}
		int temp=a[pos];
		a[pos]=a[i];
		a[i]=temp;
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<endl;
	return 0;
}

