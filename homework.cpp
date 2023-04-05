#include<stdio.h>
#define MaxSize 100//线性表最大长度
typedef struct{
	int data[MaxSize];
	int length;
} SqList;//定义线性表

void InitList(SqList &L){
	L.length=0;
}//初始化线性表
void PutseqList(SqList &L,int n){
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&L.data[i]);
	}
	L.length=n;
}//输入线性表数据
int LengthList(SqList &L)
{
	return L.length;
}//查询线性表长度
/*用来判断x的插入位置，返回插入位置的逻辑序号（逻辑序号从1开始）*/
int PositionList(SqList &L,int x)
{
	int i;
	for(i=0;i<L.length;i++)
	{
		if(x<L.data[i]) return i+1;
	}

	return L.length+1;
}
int InsertList(SqList &L,int i,int e)//用来在位置i插入数据e
{
	int k;
	if(L.length==MaxSize) return 0; //顺序表满，插入新数据失败

	if(i==L.length+1)
	{
		L.data[L.length]=e;
		L.length++;
		return 1;      //插入新数据成功
	}

	for(k=L.length-1;k>=i-1;k--)
	{
		L.data[k+1]=L.data[k];
	}
	L.data[i-1]=e;
	L.length++;
	return 1;        //插入新数据成功
}
void OutputSeqList(SqList &L)
{
	int i;
	for(i=0;i<L.length;i++)
		printf("%d ",L.data[i]);
	printf("\n");
}//输出线性表数据
int main()
{
	SqList L;
	int n,e,loc;
	InitList(L);
	printf("请输入数据的个数：");
	scanf("%d",&n) ;
	printf("\n按递增依次输入%d个数据：",n);
	PutseqList(L,n);
	printf("\n线性表中的数据如下：");
	OutputSeqList(L);
	printf("\n请输入要插入的数据：");
	scanf("%d",&e) ;
	loc=PositionList(L,e);
	if(InsertList(L,loc,e))
	{
		printf("\n插入成功后的线性表：");
		OutputSeqList(L);
	}
	else printf("\n插入失败\n");
	return 0;
}

