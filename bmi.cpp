#include<stdio.h>
int main(void) 
{
	float a;
    float b;
	float c;
	char height ='a';
	char weight ='b';
	char BMI ='c';
	scanf(" %d %d %1f",&a,&b,&c);//输入身高,体重
	c=b/(a*a);
	printf("%d\n",c);//输出BMI指数结果 
    return 0;
}

