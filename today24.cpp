#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    char ch;
    char sh;
    scanf("%s",s);
    getchar();
    scanf("%c %c",&ch,&sh);
    int i=0,m=0;
    m=strlen(s);
      while(s[i] != '\0')
    {
        if(s[i] == ch)
        {
            s[i] = sh;
        }
        i++;
    }
    printf("%s",s);
    return 0;
}

