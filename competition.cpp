#include<stdio.h>
int fun(int a,int b)
{
	int i;
	while(b>0)
	{
		i = a % b;
		a=b;
		b=i;
	}
	return a;
}
int main()
{
	int i,j,a,b,sum=0;
	for(i=1;i<=2020;i++)
	{
		for(j=1;j<=2020;j++)
		{
			if(i>j)
			{
				a=i;
				b=j;
			}
			else if(i<j)
			{
				a=j;
				b=i;
			}
			else if (i==j)
				continue;
			if(fun(a,b)==1)
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
} 
