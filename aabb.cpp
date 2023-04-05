#include<stdio.h>
int main()
{
    int i,n,sum=1;
    scanf("%d",&n);
        if(n%2==0)
            {for(i=2;i<=n;i+=2)
                {if(n%i==0)
                    sum+=i;}}
        else
            sum=(n-1)*(n+1)/4;
    printf("%d",sum);
    return 0;
}
