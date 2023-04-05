#include<stdio.h>
int main()
{
    int j,N,MAX=0,m=0,wheather[10000];
    scanf("%d",&N);
    for(j=0;j<N;j++)
    scanf("%d",&wheather[j]);
        for(j=1;j<N;j++)
        {if(wheather[j]<wheather[j+1])
        m++;
        else
        {if(MAX<m);
        MAX=m;
		m=0;}}
    printf("%d",MAX);
    return 0;
}
