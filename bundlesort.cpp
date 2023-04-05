#include<stdio.h>
void insertsort(int n,int a[])
{
	int i,j=0;
	for(i=1;i<n;i++)
	{
		int key=a[i];
		j=i-1;
  		while(j>=0&&(a[j]>key))
  		{
	   	 a[j+1]=a[j];
  		 j--;

		}
		 a[j+1]=key;
	}
}
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    insertsort(n,a);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}