#include<stdio.h>
#include<math.h>
int isprime(int a)//判断素数
{
    if(a<2)
    return 0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        return 0;
    }
    return 1;
}
int change(int b)//二进制转换十进制
{
    int i=0,s=0,a[30];
    while(b!=0)
    {
        a[i]=b%10;
        b/=10;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        if (a[j] == 1)
            s += 1<<j;//位权
    }
    return s;
}
int main()
{
    int n,b,m=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
         scanf("%d",&b);
        int a=change(b);
        if(isprime(a)==1)
        m++;
    }
    printf("%d",m);
    return 0;
}
