#include<stdio.h>
int main()
{
    int N,i;
    float j;
    while(1){
    scanf("%d",&N);
    if(N>0&&N<10)break;}     
    for(i = N; i >= 1; i--)
    {
        for(j = 1; j <= (N-i) ; j++)
            printf(" ");
        for(j = 1; j <= (2*(i-1)+1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
