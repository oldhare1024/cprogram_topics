#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s[n-2];
    int i=0;
    for(i=0;i<n-2;i++)
    scanf("%d",&s[i]);
    int m=0;
    int f=0;
    for(m=0;m<=n;m++)
    {
        for(i=0;i<n;i++)
        {
            if(s[i]==m)
            {
                f++;
            }
        }
            if(f==0)
            {
                printf("%d ",m);
            }
            f=0;
        
    }
    return 0;
}
