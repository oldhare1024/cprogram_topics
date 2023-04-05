#include<stdio.h>
#include<string.h>
int main(){
    int i,max_len=0,ord=0;
    char str[5][101];
    for(i=0;i<5;i++)
	{
        scanf("%s",str[i]);
        max_len=strlen(ord);
        if(strlen(str[i])>max_len)
		{
            ord=i;
        }
    }
    printf("%s",str[ord]);
    return 0;
}

