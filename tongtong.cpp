#include<stdio.h>
int judge1(long int n)//�ж��Ƿ�Ϊ������
{
    long int i ;
    if (n == 1 ) return 0 ;
    if (n == 2 ) return 1 ;
    for (i = 2 ; i * i <= n ; i++)
    {
        if (n % i == 0) return 0 ;
    }
    return 1 ;
}
int judge2(long int n)//�ж��Ƿ�Ϊͩͩ����
{
    long int i ;
    if (n == 1 || n == 2) return 0 ;
    for (i = 2 ; i * i <= n ; i++)
    {
        if (n % i == 0)
            if(judge1(i))//�ж�����a�Ƿ�Ϊ������
                if(judge1(n / i))//�ж�����b�Ƿ�Ϊ������
                    return 1 ;
    }
    return 0 ;
}
int main()
{
    long int n ;
    scanf ("%ld" , &n) ;
    if (judge2(n))
        printf ("It's a Tongtong number.") ;
    else
        printf ("It's not a Tongtong number.") ;
    return 0 ;
}
