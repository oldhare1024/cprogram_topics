#include<stdio.h>
int main()
{
    int N,i,sum=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(i<10)
        {if((i*i)%10==i)
        sum++;}
        if(i<32)
        {if((i*i)%100==i)
        sum++;}
        if(i<100)
        {if((i*i)%1000==i)
        sum++;}
    }
    printf("%d",sum);
    return 0;
}
