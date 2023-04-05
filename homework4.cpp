#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Lnode
{  char data[10];		//存放患者姓名
   struct Lnode *next;	//指针域
} QType;
//病人链队数据结点类型
typedef struct
{  QType *front;		//指向队头病人结点
   QType *rear;		//指向队尾病人结点
} LQueue;

void InitQueue(LQueue *&lq)//初始化空队列
{
	lq=(LQueue *)malloc(sizeof(LQueue));
	lq->front=lq->rear=NULL;
}
void DestroyQueue(LQueue *&lq)	//----销毁链队----
{
	if(lq->front!=NULL)
	{
		QType *p=lq->front,*q;
		while(p!=NULL)
		{
			q=p->next;
			free(p);
			p=q;
		}
	}
	free(lq);
}
void EnQueue(LQueue *&lq,char x[])//----进队运算算法----
{
	QType *p=(QType *) malloc(sizeof(QType));
	strcpy(p->data,x);
	p->next=NULL;
	if(lq->front==NULL)
		lq->front=lq->rear=p;
	else{
		lq->rear->next=p;
		lq->rear=p;
	}
}
int DeQueue(LQueue *&lq,char x[])//-----出队运算算法-----
{
	if(lq->front==NULL) return 0;//队空
	QType *p=lq->front;
	strcpy(x,p->data);
	if(lq->front==lq->rear)
		lq->front=lq->rear=NULL;
	else
		lq->front=p->next;
	free(p);
}
int QueueEmpty(LQueue *lq) //----判断队空运算算法----
{
	if(lq->front==NULL) return 1;
	return 0;
}

int DispQueue(LQueue *lq) //----输出队中所有元素的算法----
{
	if(lq->front==NULL) return 0; //队空
	QType *p=lq->front;
	while(p!=NULL)
	{
		printf("%s ",p->data);
		p=p->next;
	}
	return 1;
}

int main()
{
	int sel,flag=1;
	char name[20];
	LQueue *lq;
	InitQueue(lq);

	while(flag==1)
	{
		printf("\n1:排队\n2:看医生\n3:查看排队\n0:下班\n请选择:");
		scanf("%d",&sel);
		switch(sel){
			case 0:
				if(!QueueEmpty(lq)) {
					printf("  >>请排队的患者明天就医\n");
					DestroyQueue(lq);
				}
				flag=0;break;
			case 1:
				printf("  >>输入患者姓名:");
				scanf("%s",name);
				EnQueue(lq,name);
				break;
			case 2:
				if (!DeQueue(lq,name))
					printf("  >>没有排队的患者\n");
				else
					printf("  >>患者%s看医生\n",name);
				break;
			case 3:
				printf("  >>排队患者:");
				if (!DispQueue(lq))  printf("  >>没有排队的患者\n");
				break;
		}
	}

	return 1;
}
