#include<stdio.h>
int main()
{
    int N,M,X,Y;
    scanf("%d%d",&N,&M);
    int num[N][M+1];
    for(int i=0;i<N;i++){
        num[i][0]=0;
    }
    //����
    for(int i=0;i<M;i++){
        scanf("%d%d",&X,&Y);
        X--;
        int key=++num[X][0];
        //����������Ԫ��ʱ��������С����ǰ,�������һλ
        if(key>1 && num[X][key-1]>Y){
            while(num[X][key-1]>Y && key>1){
                num[X][key]=num[X][key-1];
                key--;
            }
        }
        num[X][key]=Y;}
    //���
    for(int i=0;i<N;i++){
        for(int j=0;j<=num[i][0];j++){
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}

