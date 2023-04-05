#include<stdio.h>
#include<string.h>
int cache[8192];
int floor(int n)
{
	if(cache[n]==-1)
		cache[n]=floor(n-1)+floor(n-2);
	return cache[n];
}
int main()
{
	int n;
	scanf("%d",&n);
	memset(cache,-1,sizeof(cache));
	cache[1]=1;
	cache[2]=2;
	printf("%d",floor(n));
}