#include<stdio.h>
int main()
{
    int num[4];
    int i = 0, t = 0, m = 0, flag = 0, j = 0;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &num[i]);
    }
    for (j = 0; j < 4; j++) {
        for (i = 0; i < 3; i++)
        {
            if (num[i] > num[i + 1])
            {
                t = num[i];
                num[i] = num[i + 1];
                num[i + 1] = t;
            }
            /*else
                continue;
            不需要手动继续*/
        }
    }
    /*for (j = 0; j < 3; j++) {
        for (i = 0; i < 4; i++)
        {
            if (num[i] == 1)
                continue;
            else if (num[i] % 2 != 0 && num[i + 1] - num[i] == 2)
                m++;
            else
                break;
        }
    }这个循环并不需要执行6次*/
    for (i = 0; i < 3; i++)
        if (num[i+1] - num[i] == 2)
            m++;

    /*if (m == 4)
        flag = 1;
    else
        flag = 0;
    %取余运算非常低效，应该尽量少地执行
    而且因为只有三个等式，m++最多执行三次 */
    if (m == 3 && num[0] % 2 == 1)
        flag = 1;
    else
        flag = 0;

    if (flag)
    {
        for (i = 0; i < 3; i++)
            printf("%d+2=%d\n", num[i], num[i] + 2);
    }
    else {
        for (i = 3; i >= 0; i--)
            printf("%d ", num[i]);
    }
}

