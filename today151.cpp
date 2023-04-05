#include<stdio.h>
int main()
{
    int N,M,X,Y;
    scanf("%d%d",&N,&M);
    int num[N][M+1];
    for(int i=0;i<N;i++){
        num[i][0]=0;
    }
    //操作
    for(int i=0;i<M;i++){
        scanf("%d%d",&X,&Y);
        X--;
        int key=++num[X][0];
        //数组中已有元素时插入排序，小的在前,其余后移一位
        if(key>1 && num[X][key-1]>Y){
            while(num[X][key-1]>Y && key>1){
                num[X][key]=num[X][key-1];
                key--;
            }
        }
        num[X][key]=Y;}
    //输出
    for(int i=0;i<N;i++){
        for(int j=0;j<=num[i][0];j++){
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}

