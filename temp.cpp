#include<stdio.h>
int main()
{
	int a,b;//a为华氏温度，b为摄氏度 
	printf("请输入摄氏度");
	scanf("%d",&b);//输入摄氏度 
    a =32+9*b/5;//运算华氏温度结果 
	printf("%d",a);//输出结果华氏度` 
	return 0; //结束程序 
}
