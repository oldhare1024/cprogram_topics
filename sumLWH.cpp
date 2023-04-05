#include<stdio.h>
#define n 2021041820210418
int main()
{
	long long L=1,W=1,H=1;
	int sum=0;
	for(L=1;L<=n;L++)
	{
		for(W=1;W<=n;W++)
		{
			for(H=1;H<=n;H++)
			{
				if(n==L*W*H)
				sum++;
			}
		}
	}
	printf("%d",sum);
	return 0;
}
