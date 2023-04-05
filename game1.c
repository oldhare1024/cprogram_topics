#include<stdio.h>
#include<stdlib.h>
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
int main()
{
    printf("*************欢迎游玩4399网站**************\n");
    int role,value,lost=0,win=0;
    printf("请选择角色:1:貂蝉2:吕布 3:董卓\n");
    scanf("%d",&role);//请输入你选择角色的序号
    printf("请选择出招:1:石头2:剪刀3:布");
    printf("输入0结束游戏\n");
    while(scanf("%d",&value)!=EOF)
    {    
        if(value==0||value>3||value<1)
            break;
        switch(role)      
        {
            case 1:printf("貂蝉选择出%d",value);break;
            case 2:printf("吕布选择出%d",value);break;
            case 3:printf("董卓选择出%d",value);break;
            default:printf("选择错误无该角色");
        }
        int i=rand()%3+1;
        printf("||机器人选择出%d\n",i);
            if(judge(value,i)==1)//胜利
                win++;
            else if(judge(value,i)==-1)//败北
                lost++;
        printf("当前比分%d:%d\n",win,lost);
    }
    if(lost>win)
        printf("你输了!比分%d:%d",win,lost);
    else if(lost<win)
        printf("你赢了!比分%d:%d",win,lost);
    else if(lost==win)
        printf("平局了!比分%d:%d",win,lost);
    return 0;
}
