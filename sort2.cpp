#include<stdio.h>
void sort(int a[])
{
	int i,t;
	for(i=0;i<3;i++)
	{
		t=a[i];
		a[i]=a[7-i-1];
		a[7-1-i]=t;
	}
}
int main()
{
	int i,num[7];
	for(i=0;i<7;i++)
	scanf("%d",&num[i]);
	sort(num);
	for(i=0;i<7;i++)
	printf("%d ",num[i]);
    return 0;
}
