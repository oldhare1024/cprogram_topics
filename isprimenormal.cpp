#include<stdio.h>
int isprime(int num)
{
    if(num<2)
    return 0;
    else 
    {
        for(int i=2;i<num;i++)
            if(num%i==0)
                return 0;
    }
    return 1;
}
int main()
{
    int i,M=0,N;
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
        if(isprime(i)==1)
        {    
            printf("%d ",i);
            M++;
            if(M==5)
            {
                M=0;
                printf("\n");
            }
        }
    }
    return 0;
}
