#include<stdio.h>
int main()
{
    double aver=0,min,max;
    int sum=96;
    printf("%d\n",sum);
    max=sum-9.4*5;
    min=sum-9.8*5;
    sum=sum-max-min;
    aver=sum/4;
    printf("%.1lf",aver);
    return 0;
}
