#include<stdio.h>
#include<stdlib.h>
int x[100000];
int main()
{
    int i=0,n=0,a=0,b=0,c=0;
    long long ans=0;
    scanf("%d%d%d%d",&n,&a,&b,&c);
    for(i=0;i<=n+1;i++)
    {
    	x[i]=0;
		}
    for (i = 1; i <= n;i++)
    {
        int tmp = ((long long)a * i * i + b * i + c) % 20000;
        x[i] = tmp - 10000;
    }
    i=1;
    while(i<=n+1)
    {
    		if(i>=(n+1))
          break;
        if(x[i]>x[i+1])
        {
            ans+=x[i];
            i+=1;
        }
        else
        {
            ans+=x[i+1];
            i+=2;
        }
    }
    printf("%lld",ans);
}