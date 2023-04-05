#include<stdio.h>
int isprime(int m)
{
	int i;
	if(m<2)
	return 0;
	for(i=2;i<m;i++)
	{if(m%i==0)
	return 0;}
    return 1;
}
int main()
{
	int m;
	scanf("%d",&m);
	if(isprime(m)==1)
	printf("yes");
	else if(isprime(m)==0)
	printf("no");
	return 0;
 } 
