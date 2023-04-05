#include<stdio.h>
#define N 10
int main()
{
	int i,j,temp,flag,count=1;
	int num[N]={9,0,1,2,3,4,5,6,7,8};
	for(i=0;i<N-1;i++)
	{
		flag=0;//每轮都默认没有发生交换
		for(j=0;j<N-i-1;j++)		
			if(num[j]>num[j+1])
			{
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
				flag=1;//发生交换
			}
		count++;//记录交换轮次
		if(flag==0)//当没有发生交换时就退出循环
			break;
	}
	printf("比较轮次:%d\n",count);
	for(i=0;i<N;i++)
		printf("%d ",num[i]);
	return 0;
}

