#include<stdio.h>
int main()
{
    int a,b,c;
    int t;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
        if(a>b)
        {
            t = a;
            a = b;
            b = t;
        }     
        if(a>c)
        {
            t = a;
            a = c;
            c = t;
        }   
        if(b>c)
        {
            t = b;
            b = c;
            c = t;
        }
        if(a*a+b*b>c*c)
        printf("ruijiao");
        else if(a*a+b*b<c*c)
        printf("dunjiao");
        else
        printf("zhijiao");
    }
    else
    printf("no");
}
