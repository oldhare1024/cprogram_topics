#include<stdio.h>
#include<math.h>
int main()
{
    int i,j=0,num[32]={0},decimal=0;
    for(i=0;i<32;i++)
        scanf("%d",&num[i]);
    for(i=32;i>=0;i--)
    {
        if(num[i]==1||num[i]==0)
        {decimal+=(num[i]*pow(2,j));
        j++;}
    }
    printf("%d",decimal);
    return 0;
}
