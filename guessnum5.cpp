#include<stdio.h>
int main()
{
    int a,b,s;
    for(int i;i<100;i++)
    {
        a=i/10;
        b=i%10;
        s=a+b;
        if(a>b&&s%2==0)
        printf("%d\n",i);
    }   
}
