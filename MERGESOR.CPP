#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>
#define max 100000
#include<stdlib.h>

void merge(long int a[],long int low,long int mid,long int high)
{
	long int c[max],i,j,k;
	i=k=low;
	j=mid+1;
	while(i<=mid&&j<=high)
	{
		if(a[i]<a[j])
			c[k++]=a[i++];
		else
			c[k++]=a[j++];
	}
	while(i<=mid)
		c[k++]=a[i++];
	while(j<=high)
		c[k++]=a[j++];
	for(i=low;i<=high;i++)
		a[i]=c[i];
}
void mergesort(long int a[],long int low,long int high)
{
	long int mid=(low+high)/2;
	if(low<high)
	{
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}


int main()
{
	long int a[max],i,n;
	double duration;
	clock_t start;
	clrscr();
	printf("enter the number of element");
	scanf("%ld",&n );
	for(i=0;i<n;i++)
		a[i]=rand()%1000;
	start=clock();
	mergesort(a,0,n-1);
	duration=((double)(clock()-start))/CLOCKS_PER_SEC;

	for(i=0;i<n;i++)
		printf("%ld ",a[i]);
	printf("%ld %f",n,duration);
	printf("\n%f %f",clock(),start);


	return 0;
}

