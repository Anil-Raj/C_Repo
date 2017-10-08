#include<stdio.h>
#include<time.h>
int a[10][10],t[10],s[10],n,indegre[10];
void find_indegre()
{
	for(int j=0;j<n;j++)
	{       int sum=0;
		for(int i=0;i<n;i++)
			sum+=a[i][j];
		indegre[i]=sum;
	}
}
void topology()
{       int top=-1,u,v,k=0;
	find_indegre();
	for(int i=0;i<n;i++)
	{       if(indegre[i]==0)
		s[++top]=i;
	}
	while(top!=-1)
	{
		u=s[top--];
		t[k++]=u;
		for(v=0;v<n;v++)
		{
			if(indegre[i]==1)
			{
				indegre[v]--;
				if(indegre[v]==0)
				{

					s[++top]=v;
				}
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",t[i]);
}
int main()
{
	int i;
	printf("Enter the number of jobs\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	topology();
	return 0;
}