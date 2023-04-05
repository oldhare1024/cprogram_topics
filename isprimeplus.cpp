#include<stdio.h>
int cnt=0;
int isprime(int i){
    for(int j=2;j*j<=i;j++){
        if(i%j==0){
            return 0;
        }
    }
    if(cnt==5){
        cnt=0;
        printf("\n");
    }
    printf("%d ",i);
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    //特殊处理n小于5的情况
    if(n>1){
        printf("%d ",2);
        cnt++;
        if(n>2){
            printf("%d ",3);
            cnt++;
        }
    }
    else if(n>4){
        for(int i=5;i<=n;i+=6){
            cnt+=isprime(i);
            if(i+2<=n){
                cnt+=isprime(i+2);
            }
        }
    }
    return 0;
}

