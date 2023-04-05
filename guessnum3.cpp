#include<stdio.h>
int main()
{
    int a,b;
    for(int i;i<100;i++)
    {
        a=i/10;
        b=i%10;
        if(a>b&&(a+b)%2==0)
        printf("%d\n",i);
    }   
}
