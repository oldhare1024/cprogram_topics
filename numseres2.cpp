#include<stdio.h>
int main()
{
    int s=0,a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {s+=a;
    a+=a*10;}
    printf("%d",s);
}
