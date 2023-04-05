#include<stdio.h>
void insertionsort(int arr[], int len)//插入排序子函数
{
        int i,j,key;
        for (i=1;i<len;i++)
        {
            key = arr[i];
            j=i-1;
            while((j>=0) && (arr[j]>key))
                {
                        arr[j+1] = arr[j];
                        j--;
                }
            arr[j+1] = key;
        }
}
int MOST(int a[],int n)//求众数子函数
{
    int i,j,max=0,most;
    for(i=0;i<n;i++)
    {
        int m=0;
        for(j=0;j<n;j++)   //遍历相等的
        {
            if(a[j]==a[i])
                m++;
        }
        if(m>max)  //将其数量和之前的数量相比，大的话就交换，小的话就不变
        {
            max=m;
            most=i;
        }
    }
    return a[most];
}
int main()//主函数
{
    int i,N,most,num[10000];
    double sum=0,aver,mid;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    insertionsort(num,N);
    aver=sum/N;
    most=MOST(num,N);
    if(N%2!=0)
    mid=num[N/2];
    else if(N%2==0)
    mid=(num[N/2-1]+num[N/2])*1.0/2;
    printf("%.2lf %d %.1lf",aver,most,mid);
    return 0;
}
