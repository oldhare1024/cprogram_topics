#include<stdio.h>
#include<windows.h>
int main()
{
	int i,j,k,a,b;
	printf("请输入被除数与除数:\n");
	scanf("%d%d",&a,&b);
	for(i=0;i<=5;i++)
	{
		printf("当前运算进度为%d%%\n",i*20);
		printf("{");
		for(j=1;j<=2*i+1;j++)
			printf("*");
		for(k=1;k<=12-j;k++)
			printf(" ");
		printf("}\n");
		Sleep(200);
	}
	printf("%d",a/b);
	return 0;
}