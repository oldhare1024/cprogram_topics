#include<stdio.h>
#include<iostream>

using namespace std;
typedef int ElemType;
#define Status int
#define OK 1
#define ERROR 0
typedef struct LNode {
	ElemType data;
	 LNode *next;//结点的数据域

} LNode,*LinkList;
Status InitLIst(LinkList &L) { //新建一空链表
	L=new LNode;
	L->next=NULL;
	return OK;
}
Status GetElem(LinkList L,int i,ElemType &e) { //在带头结点的单链表L中根据序号i获取元素的值,用e返回L中第i个数据元素的值
	LNode *p=L->next;
	ElemType j=1;
	while(p&&j<i) {
		p=p->next;
		++j;
	}
	if(!p||j>i)//判断是否溢出或越界
		return ERROR;
	e=p->data;
	return OK;
}

Status ListInsert(LinkList &L,int i,ElemType e)//改变指针插入新结点 
{
	LNode *p=L;
	ElemType j=0;
	while(p&&(j<i-1))
		p=p->next;++j;
	if(!p||j>i-1)
		return ERROR;
	LNode *s=new LNode;
	s->data=e;
	s->next=p->next;
	p->next=s;
		return OK;
}
Status ListDelete(LinkList &L,int i)//改变指针删除旧结点
{
	LNode *p=L;
	ElemType j=0;
	while((p->next)&&(j<i-1)){
		p=p->next;
		++j;} 
	if(!(p->next)||(j>i-1))
		return ERROR;
	LNode *q=p->next;
	p->next=q->next;
	delete q;
	return OK;
}
void CreateList_L(LinkList &L,int n)//逆序前插法建立链表 
{
	L=new LNode;
	L->next=NULL;
	LNode *p=L;
	ElemType i=0;
	for(i=0;i<n;++i)
	{
		p=new LNode;
		cin>>p->data;
		p->next=L->next=p;
	}	
} 
int main() 
{

	return 0;
}
