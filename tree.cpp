#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	if(n%2==0)
	{
		for(i=1;i<=n/2;i++)
		{
			printf("%d\n",2*(n-i));
		}
		for(i=n/2;i>=1;i--)
		{
			printf("%d\n",2*(n-i));
		}
	}
	else if(n%2!=0)*
	{
		for(i=1;i<=(n+1)/2;i++)
		{
			printf("%d\n",2*(n-i));
		}
		for(i=(n+1)/2-1;i>=1;i--)
		{
			printf("%d\n",2*(n-i));
		}
	}
	return 0;
}
