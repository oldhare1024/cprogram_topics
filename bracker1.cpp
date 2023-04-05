#include<stdio.h>
#include<string.h>
int main()
{
    char bracker[1000];
    scanf("%s",bracker);
    int i,flag=0,length=strlen(bracker);
    if(length%2!=0)
    flag=0;
    else
    {for(i=0;i<=length/2-1;i++)
    {
        if(bracker[i]==bracker[length-i-1]+1||bracker[i]==bracker[length-i-1]-1)
        flag=1;
        else
        {flag=0;
        break;}
    }}
    if(flag==1)
    printf("yes");
    else
    printf("no");
    return 0;
}
