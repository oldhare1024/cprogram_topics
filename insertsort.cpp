#include<stdio.h>
void insertsort(int num[])
{
	int i,j;
	for(i=1;i<6;i++)
	{
		int key=num[i];
		j=i-1;
		while(j>=0&&key<num[j])
		{
			num[j+1]=num[j];
			j--;
		}
		num[j+1]=key;
	}
}
int main()
{
	int i,num[6];
	for(i=0;i<6;i++)
		scanf("%d",&num[i]);
	insertsort(num);
	for(i=0;i<6;i++)
		printf("%d ",num[i]);
	return 0;
}
