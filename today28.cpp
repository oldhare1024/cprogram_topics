#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s[n],i=0;
    for(i=0;i<n;i++)
    scanf("%d",&s[i]);
    int j=0;
    for(i=0;i<n-1;i++)
    for(j=0;j<n-1-i;j++)
    {
        if(s[j]>s[j+1])
        {
            int t=s[j];
            s[j]=s[j+1];
            s[j+1]=t;
        }
    }
    int xh=0,xm=0;
    int flag=0;
    for(i=n-1;i>=0;i--)
    {
        if(flag==0)
        {
           xh+=s[i];
           flag=1;
        }
        if(flag==1)
        {
            xm+=s[i];
            flag=0;
        }
    }
    printf("%d",xh-xm);
    return 0;
}
