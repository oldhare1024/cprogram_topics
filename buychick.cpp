#include<stdio.h>
int main()
{
    long int M=0,N=0;
    int flag=0;
    scanf("%ld %ld",&M,&N);
    if(M>N)
    flag = 1;
    else if(M<N)
    flag = 0;
    else if(M==N)
    printf("%ld",M);
    if(flag)
    {while(M!=N)
    {M-=N;}
    printf("%ld",N);}
    else if(flag==0)
    {while(N!=M)
    {N-=M;}
    printf("%ld",M);}
}
