#include<stdio.h>
int main() 
{
int a=2,b=3,c=3,d=5;
int m=2,n=2;
a=(m=a>b)&&(n=c>d);
printf("%d,%d,%d",m,a,n);
return 0;
}
