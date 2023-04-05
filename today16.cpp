#include<stdio.h>
int main()
{
    int i,n,j,num[100];
    scanf("%d",&n);
    double sum=0;
    for(i=0;i<n;i++)
    scanf("%d",&num[i]);
    int Max=num[0];
    for(i=1;i<n;i++)
    {
        if(Max<num[i])
        {Max=num[i];
        j=i;}
    }
    for(i=0;i<n;i++)
        {sum+=num[i];}
    sum=(sum-num[j]*0.1)*0.9;
    printf("%.1lf",sum);
    return 0;
}
