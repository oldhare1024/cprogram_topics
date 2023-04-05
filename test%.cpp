#include<stdio.h>
int main()
{
    int i,min,max,factor;
    scanf("%d%d%d",&max,&min,&factor);
    for(i=min;i<=max;i++)
    {
        if(i%factor==0)
        printf("%d ",i);
    }
    return 0;
}
