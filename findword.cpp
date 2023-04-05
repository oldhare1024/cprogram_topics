#include<stdio.h>
#include<string.h>
int com(char a[],char b[],int k)
{
    int i=0;
    while(a[i]!=' ')
    {
			if(a[i+k]!=b[i])
        return 0;
      i++;
		}
    return 1;
}
int find(char x[],char y[])
{
    int z=1,i=0;
    for(i=0;i<strlen(x);i++)
    {
        if(x[i]==' ')
            z++;
        if(x[i]==y[0])
            if(com(x,y,i)==1)
                return z;
    }
      return (strlen(x)-z);//总长度减去句号和空格
}
int main()
{
    char word[1000],a[1000];
    int b=0;
    gets(word);
    gets(a);
    b=find(word,a);
    printf("%d",b);
}