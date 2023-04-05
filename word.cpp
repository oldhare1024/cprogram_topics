#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100],d[100],e[100];
    scanf("%s%s%s%s%s",a,b,c,d,e);
    int i;
    if(strlen(a)>strlen(b)&&strlen(a)>strlen(c)&&strlen(a)>strlen(d)&&strlen(a)>strlen(e))
    printf("%s",a);
    else if(strlen(b)>strlen(a)&&strlen(b)>strlen(c)&&strlen(b)>strlen(d)&&strlen(b)>strlen(e))
    printf("%s",b);
    else if(strlen(c)>strlen(b)&&strlen(c)>strlen(a)&&strlen(c)>strlen(d)&&strlen(c)>strlen(e))
    printf("%s",c);
    else if(strlen(d)>strlen(b)&&strlen(d)>strlen(c)&&strlen(d)>strlen(d)&&strlen(d)>strlen(e))
    printf("%s",d);
    else
    printf("%s",e);
    return 0;
}
