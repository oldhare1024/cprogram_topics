#include<stdio.h>
int main()
{
    int n;
    double sum=0;
    double i;
    while(1){
    scanf("%d",&n);
    if(n>=1&&n<=200)break;}
    for(i=1;i<=n;i++)
    {sum+=(1/i);}
    printf("%.3lf",sum);
}
