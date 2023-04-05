#include<stdio.h>
int main()
{
    int N,i,j;
    while(1){
    scanf("%d",&N);
    if(N>0&&N<10)break;}
    for(i = 1;i <= N;i++)
    {
        for(j=1;j <= N;j++)
        {printf("*");}
		printf("\n");
    }
}
