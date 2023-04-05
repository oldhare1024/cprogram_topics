#include<stdio.h>
#define N 5
int main()
{
    int a[N],i;
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N;i++)
    {
        a[i] /= 3;
        if(i==0)
            a[N-1]+=a[i];
        else
            a[i-1]+=a[i];
        if(i==N-1)
            a[0]+=a[i];
        else
            a[i+1]+=a[i];
    }
    for(i=1,printf("%d",a[0]);i<N;i++)
        printf(" %d",a[i]);
    return 0;
}
