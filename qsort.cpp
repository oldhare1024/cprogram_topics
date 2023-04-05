#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
	return *(int *)a-*(int *)b;
}
int main()
{
	int num[6]={0,9,3,2,7,1};
	qsort(num,6,sizeof(num[0]),cmp);
	for(int i=0;i<6;i++)
		printf("%d ",num[i]);
	return 0;
}
