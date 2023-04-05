#include<stdio.h>
int main()
{
//int num,a,b,c;
//num=(a=4,b=16,c=32);
//printf("%d\n",num);
int a=1,*p=&a; float b=2.0; char c='A';
printf("%d %d %d %d",p++,a--,b++,c--);
}