#include<stdio.h>
#include<stdlib.h>
typedef char datatype;

typedef struct node{
	datatype data;
	struct node *next;
}LinkStack;

void InitStack(LinkStack *&ls)//用来初始化一个链栈
{
	ls=NULL;
}
int Empty(LinkStack *ls)//用来实现栈的判空操作
{
	if(ls==NULL) return 1;
	else return 0;
}
int Push(LinkStack *&ls,datatype x)//用来实现元素的入栈操作
{
	LinkStack *p=(LinkStack *)malloc(sizeof(LinkStack));
	p->data=x;
	p->next=ls;
	ls=p;
	return 1;
}
int Pop(LinkStack *&ls,datatype &x)//用来实现元素的出栈操作
{
	 if(ls==NULL) return 0; //栈空，出栈失败

	 LinkStack *p=ls;
	 x=p->data;
	 ls=ls->next;
	 free(p);
	 return 1; //成功出栈
}
