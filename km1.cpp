#include<stdio.h>
int main()
{
	double a,b,c;//a为行驶英里，b为耗油量，c为平均每加仑行驶的里程数 
	if{
	
	printf("请输入行驶英里数与耗油量");
	scanf("%lf,%lf",&a,&b);//输入行驶里程与耗油量 
	c = a/b;
	printf("平均每加仑行驶里程为%lf",c);//输出运算结果
      }   
	return 0;//结束程序 
}
