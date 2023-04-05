#include<stdio.h>
int main()
{
    int n,i;
    int sum = 0;
    while(1){
    scanf("%d",&n);
    if(n>=1&&n<=200)break;}
    for(i=1;i<=n;i++)
    sum += i*i;
    printf("%d",sum);
}
