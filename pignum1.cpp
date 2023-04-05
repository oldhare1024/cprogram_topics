#include<stdio.h>
int main()
{
    int n,ai[20000],i,j,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ai[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(ai[j]<ai[i])
            m++;
        }
    }
    printf("%d",m);
}
