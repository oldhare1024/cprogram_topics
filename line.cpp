#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<vector>
struct node
{
	int data;
	node *next;
};

int main()
{
	node *head, *p1, *p2=NULL, *p;
	int i;
	head = 0;
	for (i = 1; i <= 5; i++)
	{
		p1 = (node*)malloc(sizeof(node));
		(*p1).data = i;
		if (head == 0)
		{
			head = p1;
			p2 = p1;
		}
		else if ((*p1).data == 3)
		{
			(*p2).next = (*p1).next;
			free(p1);
		}
		else
		{
			(*p2).next = p1;
			p2 = p1;
		}
		p1 = head;
	}
	(*p2).next = 0;
	p = head;
	printf("链表上各节点的数据为：\n");
	while (p != 0)
	{
		printf("%d ", (*p).data);
		p = (*p).next;
	}
	free(p);
	free(p1);
	free(p2);
	_getch();
}