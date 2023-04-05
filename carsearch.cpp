#include<stdio.h>
int main()
{
    int a,b,c,d,x,car;
        for(x=32;x<100;x++)
        {a=(x*x)/1000;
        b=(x*x)/100%10;
        c=(x*x)/10%10;
        d=(x*x)%10;
        if(a==b&&c==d)break;}
    car = x*x;
    printf("%d",car);
}
