#include<stdio.h>
int main()
{
	int m,x,y,z,M;
	printf("������������λ��Ȼ��");
	scanf("%d",&m);//������λ��Ȼ��m 
	x=m/100;//����ٷ�λ 
	y=m%100/10;//���ʮ��λ 
	z=m%100%10;//�����λ 
	M=x+y+z;//���λ���� 
	printf("%d %d %d %d",x,y,z,M);//������ 
	return 0;
} 
