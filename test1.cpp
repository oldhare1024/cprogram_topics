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

void DestroyStack(LinkStack *&ls)//用来实现栈的销毁操作
{
	if(ls!=NULL)
	{
		LinkStack *pre=ls,*p=ls->next;
		while(p!=NULL)
		{
			free(pre);
			pre=p;
			p=p->next;
		}
		free(pre);
	}
}

void Convert(int d,char b[])//用来实现数制转换算法
{
	int i=0;
	char ch;
	LinkStack *ls;

	InitStack(ls);

	while(d!=0)
	{
		ch=d%2+'0';
		Push(ls,ch);
		d=d/2;
	}

	while(!Empty(ls))
	{
		Pop(ls,ch);
		b[i]=ch;
		i++;
	}
	b[i]='\0';
	DestroyStack(ls);
}

int main()
{
	char b[20];
	int num;
	printf("请输入一个正十进制整数：");
	scanf("%d",&num);
	Convert(num,b);
	printf("对应的二进制数为：%s\n",b);
	system("pause");
	return 1;
}
