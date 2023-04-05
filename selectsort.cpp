#include<stdio.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
void selectsort(int num[])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		int min=i;
		for(j=i+1;j<6;j++)
		{
			if(num[min]>num[j])
				min=j;
		}
		swap(&num[min],&num[i]);
	}
}
int main()
{
	int i,num[6];
	for(i=0;i<6;i++)
		scanf("%d",&num[i]);
	selectsort(num);
	for(i=0;i<6;i++)
		printf("%d ",num[i]);
	return 0;
}
