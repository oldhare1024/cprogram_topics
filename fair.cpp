#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=1,cnt=0;
    char s[200],t[200];
    scanf("%s%s",s,t);
    for(i=0;i<strlen(s);i++)
        {
            if(cnt>1)
                {
                    flag=0;
                    break;
                }
            if(s[i]!=t[i])
            {
                if((s[i+1]==t[i])&&(s[i]==t[i+1]))
                    {cnt++;
                    char m=s[i];
                    s[i]=s[i+1];
                    s[i+1]=m;}
                else
                    break;
            }
        }
    if(flag==1)
        printf("Yes");
    else
        printf("No");
    return 0;
}
