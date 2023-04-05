#include<stdio.h>
int main()
{
    int i=0,x,m,n,sum=0;
    scanf("%d",&x);
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        while(i!=0)
        {if(i==x)
        {sum++;
        break;}
        else
        i/=10;}
    }
    printf("%d",sum);
    return 0;
}
