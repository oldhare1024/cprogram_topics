#include<stdio.h>
int main()
{
    int i,t,num[3];
    for(i=0;i<3;i++)
    {scanf("%d",&num[i]);}
    for(int j=0;j<2;j++)
    for(i=0;i<2-j;i++)
    {
        if(num[i]<num[i+1])
        {
            t = num[i];
            num[i]=num[i+1];
            num[i+1]=t;
        }
    }
    if(num[0]-num[1]==1&&num[1]-num[2]==1)
    printf("TRUE");
    else
    printf("FALSE");
}
