#include<Stdio.h>
#include<string.h>
typedef struct book
{
	char title[100];//�洢�������� 
	char author[100];//�洢�������� 
}str_b;

int main()
{
	str_b books[10];
	strcpy(books[0].title,"���ݻ��μ�");
	strcpy(books[0].author,"��ʿ����");
	strcpy(books[1].title,"a");
	strcpy(books[1].author,"A");
	int i;
	for(i=0;i<2;i++)
		printf("%s %s\n",books[i].title,books[i].author); 
	return 0;
}
