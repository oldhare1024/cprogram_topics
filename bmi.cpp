#include<stdio.h>
int main(void) 
{
	float a;
    float b;
	float c;
	char height ='a';
	char weight ='b';
	char BMI ='c';
	scanf(" %d %d %1f",&a,&b,&c);//�������,����
	c=b/(a*a);
	printf("%d\n",c);//���BMIָ����� 
    return 0;
}

