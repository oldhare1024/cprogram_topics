#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a-b==1||a-b==-1)&&(b-c==1||b-c==-1))
    printf("TRUE");
    else
    printf("FALSE");
}
