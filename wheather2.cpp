#include<stdio.h>
int main()
{
    int i,j,t=0,N,MAX=0,m,wheather[10000];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    scanf("%d",&wheather[i]);
    for(i=t;i<N;i++)
    {
        m=0;
        for(j=i;j<N-1;j++)
        {
        if(wheather[j]<wheather[j+1])
        	m++;
        else
	        {t=j+1;
			break;}
     	}
        if(MAX<m)
	       MAX=m;
    }
    printf("%d",MAX);
    return 0;
}
