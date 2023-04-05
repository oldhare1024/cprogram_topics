#include<stdio.h>
int main()
{
	int m,x,y,z,M;
	printf("请输入任意三位自然数");
	scanf("%d",&m);//输入三位自然数m 
	x=m/100;//输出百分位 
	y=m%100/10;//输出十分位 
	z=m%100%10;//输出个位 
	M=x+y+z;//求各位数和 
	printf("%d %d %d %d",x,y,z,M);//输出结果 
	return 0;
} 
