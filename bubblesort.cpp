#include<stdio.h>
void bubblesort(int num[])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i;j++)
		{
			if(num[j]>num[j+1])
			{
				int t=num[j];
				num[j]=num[j+1];
				num[j+1]=t;
			}
		}
	}
}
int main()
{
	int i,num[6];
	for(i=0;i<6;i++)
		scanf("%d",&num[i]);
	bubblesort(num);
	for(i=0;i<6;i++)
		printf("%d ",num[i]);
	return 0;
}
