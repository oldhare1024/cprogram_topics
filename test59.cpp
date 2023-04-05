#include<stdio.h>
int calFibonacci(int n);
int main()
{
	int n;
	scanf("%d", &n);
    printf("%d",calFibonacci(n)%10007);
	return 0;
}
int calFibonacci(int n)
{
	int fibo[n+1];
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<=n;i++)
	{
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	return fibo[n-1];
}
