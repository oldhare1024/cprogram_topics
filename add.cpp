#include<stdio.h>
int main()
{
    int n,m;
    int sum=0;
    while(1){
        scanf("%d",&n);
        if(n>=1&&n<=9999&&n%2!=0)break;
    }
for(m=1;m<=n;m+=2){
    sum += m;
}
printf("%d",sum);
}

