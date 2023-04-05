#include<stdio.h>
int isPrime(int n);
int main()
{
    int num,sum=0;
    scanf("%d",&num);
    while(num!=0)
    {
		for(int a=1;a<=num;a++)
		{if(isPrime(a))
    	sum++;}
		printf("%d\n",sum);
	}
    return 0;
}
int isPrime(int n)
{
	int flag=1;
	if(n==1||n==0)
	flag=0;
	else
	{
		for(int i=2;i*i<=n;i++) 
		{
			if(n%i==0)
			{flag=0;
			break;}
		}
    }
    if(flag==1)
	return 1;
	else if(flag==0)
	return 0;
}
