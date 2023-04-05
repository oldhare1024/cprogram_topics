#include<stdio.h>
int main()
{
    int n,j,N=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {if(j==i)
        N++;}
    }
    printf("%d",N);
}
