#include <stdio.h>
#include <string.h>
int compare(char a[],char b[],int length)//�Ƚ���ͬλ����������С
{
    for(int i=0;i<length;i++)
        {if(a[i]>b[i])
            return 1;}
    return 0;
}
int main()
{
    int i,k=0,flag=0;
    char a[101], b[101], c[101] = {0};
    scanf("%s%s", a, b);
    int alen = strlen(a);
    int blen = strlen(b);
    if(alen>blen)//�ж�λ��
    flag=1;
    else if(alen==blen&&compare(a,b,alen)==1)//��ͬλ�������жϴ�С
    flag=1;
    else if(alen==blen&&compare(a,b,alen)==0)
    flag=0;
    else 
    flag=0;
    //�жϼ����뱻������С
    if(flag==1)//�������ڱ�����
    {
        for (i = 0; i < alen || i < blen; i++)
        {
            if (i < alen)
                c[i] += a[alen-i-1] - '0';
            if (i < blen)
                c[i] -= b[blen-i-1] - '0';
            c[i]-=k;
            k=0;
            if (c[i] <= 0)
            {
                k=1;
                c[i] +=10;
            }
        }
    }
    else//����С�ڱ�����
    {
        for (i = 0; i < alen || i < blen; i++)
        {
            if (i < blen)
                c[i] += b[alen-i-1] - '0';
            if (i < alen)
                c[i] -= a[blen-i-1] - '0';
            c[i]-=k;
            k=0;
            if (c[i] <= 0)
            {
                k=1;
                c[i] +=10;
            }
        }
    }
    if (alen < blen) alen = blen;
    if (flag==0) printf("-");
    if (c[alen] > 0) printf("%d", c[alen]);
    for (i = alen - 1; i >= 0; i--)
        printf("%d", c[i]);
    return 0;
}


