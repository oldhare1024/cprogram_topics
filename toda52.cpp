#include<stdio.h>
int main()
{
    int x,y,sum=0;
    scanf("%d",&x);
    for(y=1;y<=x;y++)
    {
        if(x%4==0||x%7==0)
        sum++;
        else if(y>44)
        {
            while(y!=0)
            {
                int a=y%10;
                int b=y/10;
                if(a*10+b==44||a*10+b==77)
                break;
            }
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}
