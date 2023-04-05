#include<stdio.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionsort(int arr[], int len)
{
    int i,j;

        for (i = 0 ; i < len - 1 ; i++)
    {
                int min = i;
                for (j = i + 1; j < len; j++)    
                        if (arr[j] < arr[min])    
                                min = j;    
                swap(&arr[min], &arr[i]);    
        }
}
int main()
{
    int n,i,j,k,l=0,m[10000],stu[10000];
    scanf("%d",&n);
    k=n;
    for(i=0;i<n;i++)
    scanf("%d",&stu[i]);
    selectionsort(stu,n);
    for(i=0;i<k;i++)
    {
        m[i]=0;
	        while(stu[j]==stu[i])
	            m[l]++;
        k-=m[l];
        l++;
        i=l;
    }
    printf("%d\n",n-k);
    for(i=0;i<n;i++)
    {if(m[i]!=0)
    printf("%d %d\n",stu[i],m[i]);}
    return 0;
}
