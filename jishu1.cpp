#include<stdio.h>
int main()
{
    int num[4];
    int i,t,m=0,flag,j;
    for(i = 0;i<4;i++)
       {scanf("%d",&num[i]);}
    for(j=0;j<3;j++)
	{
	    for(i = 0;i<3-j;i++)
	       {
	           if(num[i]>num[i+1])
	           {
	           t = num[i];
	           num[i] = num[i+1];
	           num[i+1] = t;
	           }
            }
	}   
    for(i = 0;i<3;i++)
    {
        if(num[i]%2!=0&&num[i+1]-num[i]==2)
        m++;
        else
        break;
    }
        if(m==3)
        flag = 1;
        else
        flag = 0;
    if(flag)   
        {
            for(i = 0;i<3;i++)
            printf("%d+2=%d\n",num[i],num[i]+2);
        }
    else{
    for(i = 3;i>=0;i--)
    printf("%d ",num[i]);}
}
