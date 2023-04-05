#include<stdio.h>
int main()
{
	int n,i,j,m=0,series[10000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			series[m]=i;
			m++;
		}
	}
	printf("%d",series[n-1]);
}
