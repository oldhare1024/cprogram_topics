#define _CRT_SECURE_NO_WARNINGS
//���ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>
void exchange(int num1, int num2)
{
    int t = num1;
    num1 = num2;
    num2 = t;
}
//���������������
int main()
{
    int num1 = 1;
    int num2 = 2;
    exchange(num1, num2);
    printf("num1 = %d,num2 = %d\n", num1, num2);
    return 0;
}

