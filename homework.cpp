#include<stdio.h>
#define MaxSize 100//���Ա���󳤶�
typedef struct{
	int data[MaxSize];
	int length;
} SqList;//�������Ա�

void InitList(SqList &L){
	L.length=0;
}//��ʼ�����Ա�
void PutseqList(SqList &L,int n){
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&L.data[i]);
	}
	L.length=n;
}//�������Ա�����
int LengthList(SqList &L)
{
	return L.length;
}//��ѯ���Ա���
/*�����ж�x�Ĳ���λ�ã����ز���λ�õ��߼���ţ��߼���Ŵ�1��ʼ��*/
int PositionList(SqList &L,int x)
{
	int i;
	for(i=0;i<L.length;i++)
	{
		if(x<L.data[i]) return i+1;
	}

	return L.length+1;
}
int InsertList(SqList &L,int i,int e)//������λ��i��������e
{
	int k;
	if(L.length==MaxSize) return 0; //˳�����������������ʧ��

	if(i==L.length+1)
	{
		L.data[L.length]=e;
		L.length++;
		return 1;      //���������ݳɹ�
	}

	for(k=L.length-1;k>=i-1;k--)
	{
		L.data[k+1]=L.data[k];
	}
	L.data[i-1]=e;
	L.length++;
	return 1;        //���������ݳɹ�
}
void OutputSeqList(SqList &L)
{
	int i;
	for(i=0;i<L.length;i++)
		printf("%d ",L.data[i]);
	printf("\n");
}//������Ա�����
int main()
{
	SqList L;
	int n,e,loc;
	InitList(L);
	printf("���������ݵĸ�����");
	scanf("%d",&n) ;
	printf("\n��������������%d�����ݣ�",n);
	PutseqList(L,n);
	printf("\n���Ա��е��������£�");
	OutputSeqList(L);
	printf("\n������Ҫ��������ݣ�");
	scanf("%d",&e) ;
	loc=PositionList(L,e);
	if(InsertList(L,loc,e))
	{
		printf("\n����ɹ�������Ա�");
		OutputSeqList(L);
	}
	else printf("\n����ʧ��\n");
	return 0;
}

