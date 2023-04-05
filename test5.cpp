#include<stdio.h>
#include<string.h>
int main()
{

	char s1[20],s2[20];
	gets(s1);
	gets(s2);
	int i;
	for(i=0;s2[i]!='\0';i++)
		s2[i]=s1[i];
	for(i=0;s2[i]!='\0';i++)
	    printf("%c",s2[i]);
	return 0;
} 
