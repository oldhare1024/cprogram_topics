#include<stdio.h>
int main()
{
    int i,N;
    double j;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=N-i;j>=0;j--)
            printf(" ");
        for(j=1;j<=i;j+=0.5)
            printf("%d",i);
        printf("\n");
    }
    return 0;
}
