#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d%d",&n,&k);
    int num[n],value[n-2][2];
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(i=0;i<n-k+1;i++)
    {
        value[i][0]=num[i];
        value[i][1]=num[i];
        for(j=i+1;j<i+k;j++)
        {
            if(value[j][0]>num[j])
                value[j][0]=num[j];
            if(value[j][1]<num[j])
                value[j][1]=num[j];
        }
        printf("%d ",value[j][0]);
    }
    printf("\n");
    for(j=0;j<n-k+1;j++)
        printf("%d ",value[j][1]);
    return 0;
}