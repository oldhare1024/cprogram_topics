#include<stdio.h> 
int main()
{
    int i,j=0,n,x=0,y=0;
    scanf("%d",&n);
    int arr[n],num[n-2];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0)
        {
            num[j]=i;
            y++;
            j++;
        }
    }
    if(y==0)
        x=0;
    else if(y==1)
        x=2;
    else if(y>1)
        x=num[j-1]-num[0]+2;
    printf("%d",x);
    return 0;
}
