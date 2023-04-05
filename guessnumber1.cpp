 //猜数字游戏
 //1. 电脑随机生成一个随机数
 //2.猜数字
 
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
	// 1. 生成一个随机数
	// 拿时间戳来设置时间起点
	int ret = rand()%100 +1; // 生成随机数
	// 如果将ret = rand();直接放到while里面，会每次循环生成一个数字
 
	// 2. 猜数字
	printf("猜数字");
	while (1)
	{
		scanf("%d", &guess);
		if (ret > guess)
		{
			printf("猜小了");
		}
		else if (ret < guess)
		{
			printf("猜大了");
		}
		else
		{
			printf("恭喜你，猜对了！");
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
		printf("\n请选择:>");
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
