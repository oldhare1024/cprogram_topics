#include<stdio.h>
#include<iostream>

using namespace std;
typedef int ElemType;
#define Status int
#define OK 1
#define ERROR 0
typedef struct LNode {
	ElemType data;
	 LNode *next;//����������

} LNode,*LinkList;
Status InitLIst(LinkList &L) { //�½�һ������
	L=new LNode;
	L->next=NULL;
	return OK;
}
Status GetElem(LinkList L,int i,ElemType &e) { //�ڴ�ͷ���ĵ�����L�и������i��ȡԪ�ص�ֵ,��e����L�е�i������Ԫ�ص�ֵ
	LNode *p=L->next;
	ElemType j=1;
	while(p&&j<i) {
		p=p->next;
		++j;
	}
	if(!p||j>i)//�ж��Ƿ������Խ��
		return ERROR;
	e=p->data;
	return OK;
}

Status ListInsert(LinkList &L,int i,ElemType e)//�ı�ָ������½�� 
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
Status ListDelete(LinkList &L,int i)//�ı�ָ��ɾ���ɽ��
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
void CreateList_L(LinkList &L,int n)//����ǰ�巨�������� 
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
