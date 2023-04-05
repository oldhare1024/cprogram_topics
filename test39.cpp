#include<stdio.h>
#include<math.h>
int main()
{
    double n,length;
    scanf("%lf",&n); 
    length = log10(n);
    int x=n,y,sum=0,a = length+1;
    printf("%d ",a);
    for(int i=0;i<a;i++)
    {
        x%10=y;
        x/=10;
        if(y%2==0)
        sum+=y;
        if(x==0)
        break;
    }
    printf("%d",sum);
    return 0;
}
