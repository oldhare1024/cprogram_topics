 //��������Ϸ
 //1. �����������һ�������
 //2.������
 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
void menu()
{
	printf("*********************************");
	printf("*** 1. play   0. exit ***********");
	printf("*********************************");
}
 
 
void game()
{
	int guess = 0;
	// 1. ����һ�������
	// ��ʱ���������ʱ�����
	int ret = rand()%100 +1; // ���������
	// �����ret = rand();ֱ�ӷŵ�while���棬��ÿ��ѭ������һ������
 
	// 2. ������
	printf("������");
	while (1)
	{
		scanf("%d", &guess);
		if (ret > guess)
		{
			printf("��С��");
		}
		else if (ret < guess)
		{
			printf("�´���");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�");
		}
	}
	ret = rand();
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
 
	do
	{
		menu();
		printf("\n��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit the game\n");
			break;
		default:
			printf("error in this way\n");
			break;
 
		}
	} while (input);
 
}
