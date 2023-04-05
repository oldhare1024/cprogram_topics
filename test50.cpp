#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=1;
    char word[101],word2[10];
    gets(word);
    int n=strlen(word);
    word2[0]=word[0];
    for(i=0;i<n;i++)
    {
        if(word[i]==32)
        {
            word2[j]=word[i+1];
            j++;
        }
    }
    for(i=0;i<=j;i++)
    {
        if(word2[i]>=97&&word2[i]<=122)
        word2[i]-=32;
    }
    for(i=0;i<=j;i++)
    {
        if(word2[i]=='\0')
        break;
        else if(word2[i]==' ')
        continue;
        else
        printf("%c",word2[i]);
    }
    return 0;
}
