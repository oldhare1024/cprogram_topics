#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	printf("%d\n",strlen(a));
	gets(a);
	printf("%d",strlen(a));
}