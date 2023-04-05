#include<stdio.h>
int main()
{
	int i,j,I,J,n,m,k,sum=0;
	scanf("%d%d%d",&n,&m,&k);
	int num[m][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&num[j][i]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(I=0)
			if(num[j][i]<=k)
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}
