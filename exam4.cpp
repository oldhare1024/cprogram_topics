#include<stdio.h>
#include<math.h>
int fun(int n)
{
    int i=2;
    if(n==0||n==1)
    return 0;
    else{
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i=0;
    int m,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        int t=0,p;
        int x=0;
        while(m)
        {
            t+=m%10*pow(2,x);
            x++;
            m/=10;
        }
        p=fun(t);
        if(p==1)
        sum++;
    }
    printf("%d",sum);
    return 0;
}

