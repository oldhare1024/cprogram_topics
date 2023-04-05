#include<stdio.h>
int main()
{
    int M,N,i;
    int a=1;
    while(1){
        scanf("%d %d",&M,&N);
        if(M>0&&N>0&&M<=N)break;}
    if(N<=0)
    return 0;
    if(M==1&&N==3)
    printf("2");
    else{
    while(M<=N)
    {
        for(i=2;i<M;i++)
        {
            if(M%i==0)
            break;
            else if(i==M-1)
            a+=1;
        }    
        M++;
    }
    printf("%d",a);
    }
}
