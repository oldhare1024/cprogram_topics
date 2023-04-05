#include<stdio.h>
int age(int a)
{
	int n;
	if(a==1)
	{
		n=10;
		return n;
	}
	else
	{
		n=age(a-1)+2;
		return n;
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",age(a));
}