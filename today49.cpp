#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,all,sum=0;
    scanf("%d",&n);
    for(i=pow(10,n-1);i<pow(10,n);i++)
    {
        j=i;
        all=0;
        while(j!=0)
        {
            if(j%10==3)
            all++;
            j/=10;
        }
        if(all==0||all%2==0)
        sum++;
    }
    sum%=12345;
    printf("%d",sum);
    return 0;
}

