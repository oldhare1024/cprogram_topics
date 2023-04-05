#include<stdio.h>
#define MaxSize 100
typedef char ElemType;
typedef struct tnode
{	ElemType data;					//数据域
	struct tnode *lchild,*rchild;	//指针域
} BTNode;

void CreateBTree(BTNode *&bt,char *str)/*实现根据二叉树的括号表示法str（由键盘输入）建立二叉链存储结构bt */
{
	int i,top=-1;
	char ch;
	BTNode *p;
	BTNode *stack[MaxSize];
	bt=NULL;

	for(i=0;(ch=str[i])!=0;i++)
	{
		switch(ch)
		{
			case '(':
				top++;stack[top]=p;k=1;
				break;
			case ',':
				k=2;
				break;
			case ')':
				top--;
				break;
			default:
				p=(BTNode *) malloc(sizeof(BTNode));
				p->data=ch;
				p->lchild=p->rchild=NULL;
				if(bt==NULL)
					bt=p;
				else{
					switch(k)
					{
						case 1:
						   stack[top]->lchild=p;break;
						case 2:
							stack[top]->rchild=p;break;
					}
				}

		}
	}
}
