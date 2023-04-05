#include<stdio.h>
int fun(int m)
{
    if(m<2)
    return 0;
    for(int i=2;i<m;i++)
    {
        if(m%i==0)
        return 1;
    }
   return 0;
}
int main()
{
    int m=13;
    int sum=0;
    int flag=0;
    for(m=13;m<=50;m++)
    {
        sum=2*m-13;
        flag=fun(sum);
        if(flag)
        {
            if(sum/10+sum%10==13&&sum<100)
            printf("%d %d\n",m,m-13);
        }
    }
   return 0;
}
