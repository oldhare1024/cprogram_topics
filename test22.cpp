#include<stdio.h>
int main()
{
    int n,num=0,i,j,k=1,fish[100],cute[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&fish[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<i+1;j++)
        {if(fish[j-1]<fish[k])
        {num++;
        cute[i]=num;}
        else 
        k++;
        }
    }
    for(i=0;i<n;i++)
    {printf("%d ",cute[i]);}
}
