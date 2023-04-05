#define _CRT_SECURE_NO_WARNINGS
//添加头文件
#include <stdio.h>
#include <stdlib.h>
void exchange(int num1, int num2)
{
    int t = num1;
    num1 = num2;
    num2 = t;
}
//主函数，函数入口
int main()
{
    int num1 = 1;
    int num2 = 2;
    exchange(num1, num2);
    printf("num1 = %d,num2 = %d\n", num1, num2);
    return 0;
}

