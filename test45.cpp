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
		scanf("%d",&a[i]);  //��������
	for (i = 0; i < N; i++)
	{
		for (j = i; j < N; j++)
			if (a[i] == a[j])
				b[i]++;				//Ƕ��ѭ��������b��¼����a��ÿ��Ԫ�����估������Ԫ�ص��ظ�����
	}
	NUM = b[0];
	for (i = 0; i < N; i++)
	{	
		if (NUM <= b[i])
		{
			NUM = b[i];
			FLAG = i;
		}
	}										//Ѱ������b�����ֵ���������Ĵ�����λ�ü�¼��FLAG
	printf("Mode is:%d",NUM);
	return 0;
}

