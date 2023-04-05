#include<stdio.h>
int main()
{
    int n,k,i=0;
    char goal[100];
    int v,t,x = 0;
    int score = 0;
    scanf("%d",&n);
    for(i=0;i<2*n;i++)
    {
        goal[100] = getchar();       
    }
    for(i=0;i<n;i++)
    {
        if(goal[i]='V')
        v++;
        else if(goal[i]='T')
        t++;
        else if(goal[i]='X')   
        x++;
    }   
    score = v - x;
    printf("%d",score);
}
