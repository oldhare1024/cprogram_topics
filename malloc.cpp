#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*arr;
	scanf("%d",&n);
	arr=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	   scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
	   printf("%d ",arr[i]);
    free(arr);

}