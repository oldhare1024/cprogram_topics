#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    printf("a");
    else if(a>b&&a<c)
    printf("c");
    else if(a>c&&a<b)
    printf("b");
    else if(b>a&&b>c)
    printf("b");
    else if(c>b&&c>a)
    printf("c");
    else if(c>b&&c<a)
    printf("a");
    else if(c>a&&c<b)
    printf("b");
}
