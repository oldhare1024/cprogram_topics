#include<stdio.h>
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void selectionsort(int num[],int N)
{
    int i,j;
    for(i=0;i<N-1;i++)
    {
        int min=i;
        for(j=i+1;j<N;j++)
        {
            if(num[min]>num[j])
                min=j;
            swap(&num[min],&num[i]);
        }
    }
}
int main()
{
    int i,j=0,N,num[1000],num2[1000];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    scanf("%d",&num[i]);
    selectionsort(num,N);
    num2[0]=num[0];
    for(i=0;i<N;i++)
    {
        if(num2[j]!=num[i+1])
            {num2[j]=num[i+1];
            j++;}
        else if(num2[j]==num[i+1])
            continue;
    }
    for(i=0;i<j-1;i++)
    printf("%d ",num2[i]);
    return 0;
}
