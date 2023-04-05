#include<stdio.h>
int main()
{
    int n,i=0;
   scanf("%d",&n);
    int score = 0;
    char goal[n];
	scanf("%s",goal);    
    for(i=0;i<n;i++)
    {
        if(goal[i]=='V')
        score++;
        else if(goal[i]=='T')
        continue;
        else if(goal[i]=='X')   
        score--;
    }   
    int t = 0;
    while(t<n)
    {
        int k = 0;
        while(goal[t] == 'V')
        {
            k++;
            t++;
        }
        if(k>=3)
        score += k-2;
        t++;
    }
    printf("%d",score);
}
