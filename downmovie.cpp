#include<stdio.h>
int main()
{
    int i,j,N,M,netspeed[100];
    double maxaver;
    scanf("%d %d",&N,&M);
    int sum[N-2];
    for(j=0;j<N-2;j++)
    sum[j]=0;
    for(i=0;i<N;i++)
    scanf("%d",&netspeed[i]);
    for(j=0;j<N-2;j++)
    {
    	int m=0;
    	while(m<M)
    	{sum[j]+=netspeed[m];
        m=j+1;}
	}
    int max = sum[0];
	for(j=0;j<N-3;j++)
    {
        if(max<sum[j+1])
        max=sum[j+1];
    }
    maxaver=1.0*max/M;
    printf("%lf",maxaver);
    printf("%.2lf",maxaver);
    return 0;
}
