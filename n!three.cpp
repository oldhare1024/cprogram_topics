#include<stdio.h>
int main()
{
    int i,n,a=1,b=1,c=1,x,y,z;
    for(n=100;n<1000;n++)
    {x=n/100; 
    y=n%100/10;
    z=n%10;
    for(i=1;i<=x;i++)
    a*=i;
    for(i=1;i<=y;i++)
    b*=i;
    for(i=1;i<=z;i++)
    c*=i;
    if(a+b+c==n)
    break;}
    printf("%d",n);
    return 0;
}
