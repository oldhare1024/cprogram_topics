#include<stdio.h>
int main()
{
    int Old,New;
    scanf("%d",&Old);
    int a,b,c,d;
    a=Old/1000;
    b=Old%1000/100;
    c=Old%100/10;
    d=Old%10;
    New=d*1000+c*100+b*10+a;
    int x;
    if(Old>New)
    {x=Old-New;
    printf("%d",x);}
    else if(Old<New)
    {x=New-Old;
    printf("%d",x);}
}
