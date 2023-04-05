#include<stdio.h>
int main()
{
    int n=0,max=0,t=0,i=0;
    scanf("%d",&n);
    int team[10];
    for(i=0;i<n;i++)
    scanf("%d",&team[i]);
    for(i=0;i<n-1;i++)
    {
       if(team[i]<team[i+1])
       {t = team[i];
       team[i] = team[i+1];
       team[i+1] = t;}
    }
    for(i=0;i<n;i++)
    printf("%d",team[i]);
}
