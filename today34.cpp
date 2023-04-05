#include<stdio.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionsort(int a[],int b)
{
    for(int i=0;i<b-1;i++)
    {
        int j,min=i;
        for(j=i+1;j<b;j++)
            if(a[min]>a[j])
              a[min]=a[j];
        swap(&a[min],&a[i]);
    }
}
int main()
{
    int i,j=0,a,b,num1[100],num2[100];
    scanf("%d %d\n",&a,&b);
    for(i=0;i<a;i++)
    scanf("%d",&num1[i]);
    selectionsort(num1,a);
    for(i=0;i<a;i++)
    {
        if(num1[i]%b!=0)
        {num2[j]=num1[i];
        j++;}
    }
    for(i=0;i<j;i++)
    {
        if(num2[i]<65||num2[i]>90)
        printf("%d ",num2[i]);
        else
        printf("%c ",num2[i]);
    }
    return 0;
}
