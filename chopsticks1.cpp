#include<stdio.h>
int main()
{
    int i,N,m=0,length,chops[10000];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    scanf("%d",&chops[i]);
    for(length=1;length<1000;length++)
    {
        for(i=0;i<N;i++)
        {
            if(length==chops[i])
            m++;
        }
        if(m%2!=0)
        {printf("%d",length);
        break;}
    }
}
