#include<stdio.h>
#include<math.h>
int isprime(int N) 
{
	if(N<2)
	return 0;
		for(int i=2;i<sqrt(N)+1;i++)
		{
			if(N%i==0)
			return 0;
		}
	return 1;
}
int main()
{
	int N,M;
	scanf("%d",&N);
	M=isprime(N);
	printf("%d",M);
 } 
