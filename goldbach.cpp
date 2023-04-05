#include <stdio.h>
long long judge_prime(long long n)// 排除质数的情况
{
    long long i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i>=n)
        return 1;
    else
		return 0;
}

int main()
{
    long long n;
    scanf("%lld",&n);
    for(long long i=3;i<n;i++)
    {
        if(judge_prime(i)==1&&i%2==1&&judge_prime(n-i)==1&&(n-i)%2==1)//排除掉不符合条件的情况
        {
            printf("%lld=%lld+%lld\n",n,i,n-i);
            break;
        }
    }
    return 0;
}