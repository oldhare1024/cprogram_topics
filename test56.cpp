#include<stdio.h>
#include<stdlib.h>
int judge(int player,int ai);
int main()
{
    printf("*************��ӭ����4399��վ**************\n");
    int role,value,lost=0,win=0;
    printf("��ѡ���ɫ:1:����2:���� 3:��׿");
    scanf("%d",role);//��������ѡ���ɫ�����
    printf("��ѡ�����:1:ʯͷ2:����3:��");
    printf("����0������Ϸ");
    while(scanf("%d",value)!=0)
    {
        switch(role)
        {
            case 1:{printf("����ѡ���%d",value);
                    break;}
            case 2:{printf("����ѡ���%d",value);
                    break;}
            case 3:{printf("��׿ѡ���%d",value);
                    break;}
            default:{printf("ѡ������޸ý�ɫ");
                    break;}
        }
        int i=rand()%3+1;
            if(judge(value,i)==1)//ʤ��
                win++;
            else if(judge(value,i)==-1)//�ܱ�
                lost++;
            else if(judge(value,i)==0)//ƽ��
                continue;
    }
    if(lost>win)
        printf("������");
    else if(lost<win)
        printf("��Ӯ��");
    else if(lost==win)
        printf("ƽ����");
    return 0;
}
int judge(int player,int ai)
{
    if(player==ai)
        return 0;
    else if((player==1)&&(ai==2))
        return 1;
    else if((player==2)&&(ai==3))
        return 1;
    else if((player==3)&&(ai==1))
        return 1;
    else
        return -1;
}
