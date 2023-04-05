#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MaxSize 100
typedef char ElemType;
typedef char SqBinTree[80];

typedef struct tnode
{	ElemType data;					//数据域
	struct tnode *lchild,*rchild;	//指针域
} BTNode;

void CreateBTree(BTNode *&bt,char *str)/*实现根据二叉树的括号表示法str（由键盘输入）建立二叉链存储结构bt */
{
	int i,top=-1,k;
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

void PreOrder(BTNode *bt)
{
	if(bt!=NULL)
	{
		printf(" %c",bt->data);
		PreOrder(bt->lchild);
		PreOrder(bt->rchild);
	}
}
void InOrder(BTNode *bt)
{
	if(bt!=NULL)
	{
		InOrder(bt->lchild);
		printf(" %c",bt->data);
		InOrder(bt->rchild);
	}
}
void PostOrder(BTNode *bt)
{
	if(bt!=NULL)
	{
		PostOrder(bt->lchild);
		PostOrder(bt->rchild);
		printf(" %c",bt->data);
	}
}

int BTHeight(BTNode *bt)
{
	if(bt==NULL) return 0;
	int h1=BTHeight(bt->lchild);
	int h2=BTHeight(bt->rchild);
	if(h1>h2)
		return h1+1;
	else
		return h2+1;
}

int NodeCount(BTNode *bt)
{
	if(bt==NULL) return 0;
	int n1=NodeCount(bt->lchild);
	int n2=NodeCount(bt->rchild);
	return n1+n2+1;
}

int LeafCount(BTNode *bt)
{
	if(bt==NULL) return 0;
	if(bt->lchild==NULL&&bt->rchild==NULL) return 1;
	int n1=LeafCount(bt->lchild);
	int n2=LeafCount(bt->rchild);
	return n1+n2;
}

int OneNode(BTNode *bt)
{
	if(bt==NULL) return 0;
	int n1=OneNode(bt->lchild);
	int n2=OneNode(bt->rchild);
	if(bt->lchild!=NULL&&bt->rchild==NULL||bt->lchild==NULL&&bt->rchild!=NULL)
		return n1+n2+1;
	else
	   return n1+n2;
}

void trans1(BTNode *bt, SqBinTree &sb,int i) //将二叉树的二叉链转换成顺序存储结构
{	//i的初值为根结点编号1
   if (bt!=NULL)
   {  sb[i]=bt->data;			//创建根结点
      trans1(bt->lchild,sb,2*i);	//递归建立左子树
      trans1(bt->rchild,sb,2*i+1);	//递归建立右子树
   }
}

void DestroyBTree(BTNode *&bt)
{
	if (bt!=NULL)
	{
		DestroyBTree(bt->lchild);
		DestroyBTree(bt->rchild);
		free(bt);
	}
}
int main()
{
	BTNode *bt;
	char str[100];
	SqBinTree sb;

	printf("请输入建立二叉链表的序列：\n");
	gets(str);
	CreateBTree(bt, str);
	printf("\nbt的先序遍历:");
	PreOrder(bt);
	printf("\nbt的中序遍历:");
	InOrder(bt);
	printf("\nbt的后序遍历:");
	PostOrder(bt);

	printf("\nbt的高度为%d\n",BTHeight(bt));
	printf("\nbt的结点的个数为%d\n",NodeCount(bt));
	printf("\nbt的叶子结点的个数为%d\n",LeafCount(bt));
	printf("\nbt的单结点的个数为%d\n",OneNode(bt));

	int i,n=(int)pow(2,BTHeight(bt)) -1;
	for(i=1;i<=n;i++)
		sb[i]='#';
	trans1(bt,sb,1);
	for(i=1;i<=n;i++)
		printf(" %d:%c",i,sb[i]);

	DestroyBTree(bt);
	return 0;
}
