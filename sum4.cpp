#include<stdio.h>
int main()
{
    int a;
    scanf("%",&a);
    if(a>=86)
    printf("VERY GOOD");
    else if(a<=60)
    printf("BAD");
    else if(a<=85&&a>=60)
    printf("GOOD");
}
