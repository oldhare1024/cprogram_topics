#include<stdio.h>
int main()
{
    int X,a,b,c,sum;
    while(1){
        scanf("%d",&X);
        if(X>=100&&X<=999)break;}
    a=X/100;
    b=X%100/10;
    c=X%10;
    sum = a+b+c;
    printf("%d",sum);
}
