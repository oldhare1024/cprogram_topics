#include<stdio.h>
int m,n,flag=0,a[25],b[25];
void sum(int j,int m)
{
    if(b[j]==m)
    flag=1;
    else if(j==1)
    return;
    else
    {
        sum(j-1,m-b[j]);
        sum(j-1,m);
    }
}
int main()
{
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {   
            flag=1;
            break;
        }
        else if(a[i]<m)
        {b[j]=a[i];
        j++;}
    }
    sum(j+1,m);
    if(flag)
        printf("YES");
    else
        printf("NO");
    return 0;
}
