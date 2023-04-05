#include<stdio.h>
int main()
{
    int i,j,N,t=0,elevator[100];
    while(~scanf("%d",&N)&&N)
    {
        t=0;
        elevator[0]=0;
        for(i=1;i<=N;i++)
        scanf("%d",&elevator[i]);
        for(i=0;i<N;i++)
            {
                if(elevator[i]<elevator[i+1])
                    {for(j=elevator[i];j<elevator[i+1];j++)
                    t+=6;}
                else if(elevator[i]>elevator[i+1])
                    {for(j=elevator[i];j>elevator[i+1];j--)
                    t+=4;}
                t+=5;
            }
        printf("%d\n",t);
    }
    return 0;
}
