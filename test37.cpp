#include "stdio.h"
void xy(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}
int main()
{
int a=7,b=8,*x=&a,*y=&b;
xy(*x,*y);
printf("%d,%d,%d,%d",a,b,*x,*y);
}


