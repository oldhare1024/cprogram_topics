#include<stdio.h>
int max(int SUM[],int n)
{
    int max=SUM[0];
    for(int i=1;i<n;i++)
        if(max <SUM[i])
            max =SUM[i];
    return max;
}
int main()
{
    int i,j,n,z;
    scanf("%d",&n);
    int Long[1001]={0},time[n][2],SUM[100]={0};//一维是开始时刻，二维为结束时刻
    for(i=0;i<n;i++)
        scanf("%d%d",&time[i][0],&time[i][1]);
    for(z=0;z<n;z++)
    {
        for(i=0;i<n;i++)
        {
            if(i==z)
                continue;
            for(j=time[i][0];j<time[i][1];j++)
            {
                Long[j]++;
                if(Long[j]==1)
                    SUM[i]++;
            }
        }
    }
    printf("%d",max(SUM,n));
    return 0;
}