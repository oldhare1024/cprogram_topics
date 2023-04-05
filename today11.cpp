'''cpp
#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	register int hash[n]; 
	for(i=1;i<=n-2;i++)
	{scanf("%d",&j);
	hash[j]=i;}
	for(i=1;i<=n;i++)
	{
		if(hash[i]==0)
		printf("%d ",i);	
	} 
} 
'''
