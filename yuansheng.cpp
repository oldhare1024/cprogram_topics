#include<stdio.h>
int main()
{
    int n,m,i,day=0;
    scanf("%d%d",&n,&m);
    for(i=m;i<=180;)
    {
        while(n>=160)
        {i++;
        n-=160;}
        if(i==180)
        {break;}
        n+=60;
        day++;
    }
    printf("%d",day);
    return 0;
}
