#include<stdio.h>
int main()
{
    int num[4];
    int i=0,t=0,m=0,flag=0;
    for(i = 0;i<4;i++)
       {scanf("%d",&num[i]);}
    for(i = 0;i<6;i++)
       {
           if(num[i]>num[i+1])
           {
           t = num[i];
           num[i] = num[i+1];
           num[i+1] = t;
           }
           else 
           continue;
       }
    for(i = 0;i<4;i++)
    {
        if(num[i]==1)
        continue;
        else if(num[i]%2!=0&&num[i+1]-num[i]==2)
        m++;
        else
        break;
    }
        if(m==4)
        flag = 1;
        else
        flag = 0;
    if(flag == 1)   
        {
            for(i = 0;i<3;i++)
            printf("num[i]+2=%d\n",num[i]+2);
        }
    else if(flag == 0){
    for(i = 3;i>=0;i--)
    printf("%d ",num[i]);}
}
