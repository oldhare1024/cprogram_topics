#include<stdio.h>
int main()
{
    int h,n,m;
    scanf("%d %d %d",&m,&n,&h);
    int day,s= 0;
    while(s!=h)
    {
        s += (m-n)-2;
        day++;
    }
    printf("%d",day);
}
