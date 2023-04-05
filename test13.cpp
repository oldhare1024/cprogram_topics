#include<stdio.h>
int main()
{
    int i=0,j=0,n=0,t=0,x=0,y=0,z=0;
    scanf("%d",&n);
    x = n/100;
    y = n%100/10;
    z = n%10;
    int num[3]={x,y,z};
    for(j = 0;j<3;j++)
    {
        for(i=0;i<2;i++)
            if(num[i]>num[i+1])
            {
                t = num[i];
                num[i] = num[i+1];
                num[i+1] = t;
            }
    }
    int m=0;
    if(num[0]!=0)
    {for(i=0;i<3;i++)
    printf("%d",num[i]);}
    else
    {
        m=num[1]*100+num[2];
        printf("%d",m);
    }
}
