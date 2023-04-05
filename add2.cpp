#include<stdio.h>
int main()
{
    int a;
    while(1){
    scanf("%d",&a);
    if(a>=100&&a<=999)break;}
    int x,y,z;
    x=a/100;
    y=a%100/10;
    z=a%10;
    int b;
    b=x*100+y*10+z;
    int c;
    c=a+b;
    printf("%d",c);
}
