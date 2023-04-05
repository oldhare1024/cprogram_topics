#include<stdio.h>
int main()
{
    int i,t;
    int team[3];
    for(i=0;i<3;i++)
    {scanf("%d",&team[i]);}
    for(i=0;i<3;i++)
    {
        if(team[i+1]>team[i])
        { 
            t = team[i];
            team[i] = team[i+1];
            team[i+1] = t;
        }
            else
            continue;
    }
    for(i=0;i<3;i++)
    printf("%d ",team[i]);
}
