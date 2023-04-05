#include<stdio.h>
void selectsort(int num[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j=i+1;j<n;j++)
            {if(num[min]>num[j])
            min=j;}
                int t=num[min];
                num[min]=num[i];
                num[i]=t;
    }
}
int main()
{
    int n,x,t,i,KG=0,min,j;
    scanf("%d %d",&n,&x);
    int m=0,num[n];
    for(i=0;i<n;i++)
    scanf("%d",&num[i]);
    selectsort(num,n);
    for(i=0;i<n;i++)
    printf("%d ",num[i]); 
    for(i=0;i<n;i++)
    {
        if(KG+num[i]>x)
        break;
        else
        {KG+=num[i];
        m++;}
    }
    printf("%d",m);
    return 0;
}

