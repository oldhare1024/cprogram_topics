#include<stdio.h>
int main()
{
	char str[] = "无锡，你好";
	FILE * fp = fopen("D:\\test.txt", "w");
	fputs(str, fp);
	fclose(fp);
	return 0;
}