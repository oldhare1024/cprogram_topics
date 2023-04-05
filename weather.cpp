#include<stdio.h>
int main()
{
    int n,i,differ,weather[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&weather[i]);
    }
    int max=weather[0],min=weather[0];
        for(i=0;i<n;i++)
    {
        if(weather[i]<=max)
        min=weather[i];
        else if(weather[i]>min)
        max=weather[i];
    }
    differ=max-min;
    printf("%d\n",differ);
    for(i=0;i<n;i++)
    {
        if(weather[i]==min)
        printf("%d ",i+1);
    }
}
