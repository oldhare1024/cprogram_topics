#include<stdio.h>
int main()
#define pi 3.1415926
{
    int r;
    double s,l;
    scanf("%d",&r);
    s = pi*r*r;
    l = 2*pi*r;
    printf("%.2lf\n%.2lf",s,l);
}
