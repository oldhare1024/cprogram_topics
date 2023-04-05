#include<stdio.h>
int main()
{
    int n;
    while(1){
    scanf("%d",&n);
    if(n>0&&n<84600)break;}
    int h,m,s;
    h=n/3600;
    m=n%3600/60;
    s=n%60;
    printf("%0.2d:%0.2d:%0.2d",h,m,s);
}
