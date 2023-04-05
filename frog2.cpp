#include<stdio.h>
int main()
{
    int h,n,m= 0;
    scanf("%d %d %d",&m,&n,&h);
    int s,day = 0;
    while(1)
    {
        s += m;
        day++;
        if(s >= h)
        break;
        s -= n;
    }
    printf("%d",day);
}
