#include<stdio.h>
int add_sequence(int n, int t0, int t1)
{
	if (n==0) return t0;
	if (n==1) return t1;
	return add_sequence(n-1, t1, t0+t1);
}
int fib(int n)
{
	return add_sequence(n, 0, 1);
}
int main()
{
	for(int i=1;i<=20;i++)
	   printf("%d\n",fib(i));
}
