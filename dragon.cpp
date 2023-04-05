#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,flag=1,flag2=1;
    char word[10000];
    gets(word);
    for(i=0;i<strlen(word);i++)
    {
        if(word[i]==' ')
        {
            for(j=i+1;j<strlen(word);j++)
            {
                if(word[j]!=' ')
                {
                    if(word[i-1]==word[j])
                    {
                        flag=1;
                        break;
                    }
                    else if(word[i-1]!=word[j])
                        flag2=0;
                }
            }
            i+=(j-i);
            if(flag2==0)
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
        printf("Y");
    else if(flag==0)
        printf("N");
    return 0;
}
