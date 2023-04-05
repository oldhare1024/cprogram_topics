#include<stdio.h>
int i,j,NUM,FLAG;
int main()
{
	int N;
	scanf("%d",&N);
	int a[N+1],b[N+1];
	for (i = 0; i < N; i++)
		b[i] = 0;
	for (i = 0; i < N; i++)
		scanf("%d",&a[i]);  //输入数组
	for (i = 0; i < N; i++)
	{
		for (j = i; j < N; j++)
			if (a[i] == a[j])
				b[i]++;				//嵌套循环，数组b记录数组a中每个元素与其及其后面的元素的重复次数
	}
	NUM = b[0];
	for (i = 0; i < N; i++)
	{	
		if (NUM <= b[i])
		{
			NUM = b[i];
			FLAG = i;
		}
	}										//寻找数组b的最大值，即众数的次数，位置记录在FLAG
	printf("Mode is:%d",NUM);
	return 0;
}

