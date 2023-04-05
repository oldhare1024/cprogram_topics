#include<stdio.h>
int main()
{
    long long t=0,c=0,s=0,time;
    scanf("%lld %lld %lld",&t,&c,&s);
    time=s*t/c-t;
    printf("%lld",time);
    return 0;
}