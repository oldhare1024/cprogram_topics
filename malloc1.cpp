#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *p;
	p=(char*)malloc(10*sizeof(char));
	strcpy(p,"china");
	printf("%c\n",*p);
	printf("%s",p);
	return 0;
 } 
