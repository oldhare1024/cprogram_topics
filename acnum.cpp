#include<stdio.h>
int main()
{
    int n;
    while(1){
    scanf("%d",&n);
    if(n>=100&&n<=999)break;}
    int a,b,c;
    a = n/100;
    b = n%100/10;
    c = n%10;
    int t;
    if(a<b)
    {
        t = a;
        a = b;
        b = t;
    }
    if(b<c)
    {
        t = b;
        b = c;
        c = t;
    }
    if(a<c)
    {
        t = a;
        a = c;
        c = t;
    }
    int N;
    N = a*100 + b*10 + c;
    printf("%d",N);
}
