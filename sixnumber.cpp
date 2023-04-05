#include<stdio.h>
int main()
{
    int i;
    for(i=100000;i<999999;i++)
        if((i-7)/10+700000==4*i)
            {printf("%d",i);
            break;}
}