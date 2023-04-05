#include<stdio.h>
int main()
{
    int i,N,maxsum,sum;
    while(scanf("%d",&N)!=-1)
    {
        int num[N];
        for(i=0;i<N;i++)
            scanf("%d",&num[i]);
        maxsum=num[0];
        sum=num[0];
        for(i=1;i<N;i++)
        {
            sum+=num[i];
            if(maxsum<sum)
                maxsum=sum;
        }
        printf("%d\n",maxsum);
    }
}
