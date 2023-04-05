#include<stdio.h>
int main()
{
    int a = 100;
    int b = 3;
    int i,sum;
    for (i=1;i<=18;i++)
    {
        sum += a;
        a = 100-b;
    }
    sum = sum;
    printf("%d",sum);
}
