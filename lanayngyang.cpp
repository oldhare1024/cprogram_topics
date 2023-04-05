#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    int m,n;
    scanf("%d %d",&m,&n);
    int t=0;
    int N=0;
    for(m;m<=n;m++) 
    {
        t=m;
        while(t!=0)
       {    if(t%10==x)
            {
            N++;
            break;
            }
            else
            t/=10;
        }
    }
    printf("%d",N);   
    return 0;
}

