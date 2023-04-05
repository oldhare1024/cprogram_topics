#include<stdio.h>
int main()
{
	int i,n,sum=0,min,max;
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++)
	{	
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	min=num[0];
	max=num[0];
	for(i=1;i<n;i++)
	{
		if(min>num[i])
			min=num[i];
		if(max<num[i])
			max=num[i];
	}
	printf("%d\n%d\n%d",max,min,sum);
	return 0;
}
