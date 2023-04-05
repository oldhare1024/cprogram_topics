#include <stdio.h>
#include <malloc.h>
#define MAXVEX 100				//图中最大顶点个数
#define INF 32767				//表示∞
typedef char VertexType[10];	//定义VertexType为字符串类型
typedef struct edgenode
{	int adjvex;					//邻接点序号
	int weight;					//边的权值
	struct edgenode *nextarc;	//下一条边的顶点
} ArcNode;						//每个顶点建立的单链表中边结点的类型
typedef struct vexnode
{	VertexType data;			//顶点信息
	ArcNode *firstarc; 			//指向第一条边结点
} VHeadNode;					//单链表的头结点类型
typedef struct
{	int n,e;					//n为实际顶点数,e为实际边数
	VHeadNode adjlist[MAXVEX];	//单链表头结点数组
} AdjGraph;						//图的邻接表类型


void CreateGraph(AdjGraph *&G,int A[][MAXVEX],int n,int e)
//由邻接矩阵数组A、顶点数n和边数e建立图G的邻接矩阵存储结构
{
	int i,j;
	ArcNode *p;
	G=(AdjGraph *) malloc(sizeof(AdjGraph ));
	G->n=n;
	G->e=e;
	for(i=0;i<n;i++)
		G->adjlist[i].firstarc=NULL;

	for(i=0;i<n;i++)
		for(j=n-1;j>=0;j--)
		{
			if(A[i][j]>0&&A[i][j]<INF)
			{
				p=(ArcNode *) malloc(sizeof(ArcNode));
				p->adjvex=j;
				p->weight=A[i][j];
				p->nextarc=G->adjlist[i].firstarc;
				G->adjlist[i].firstarc=p;
			}
		}
}
void DestroyGraph(AdjGraph *&G)	//销毁图
{
	int i;
	ArcNode *p,*q;

	for(i=0;i<G->n;i++)
	{
		p=G->adjlist[i].firstarc;
		while(p!=NULL)
		{
			q=p->nextarc;
			free(p);
			p=q;
		}
	}
	free(G);
}
void DispGraph(AdjGraph *G)	//输出图的邻接表
{
	int i;
	ArcNode *p;

	for(i=0;i<G->n;i++)
	{
		printf(" [%d]",i);
		p=G->adjlist[i].firstarc;

		if(p!=NULL)
			printf(" →");
		while(p!=NULL)
		{
			printf("%d(%d) ",p->adjvex,p->weight);
			p=p->nextarc;
		}
		printf("\n");
	}
}
int visited[MAXVEX];
void DFS(AdjGraph *G,int v)		//对邻接表G从顶点v开始进行深度优先遍历
{
	ArcNode *p;
	int w;
	printf("%d ",v);
	visited[v]=1;

	p=G->adjlist[v].firstarc;
	while(p!=NULL)
	{
		w=p->adjvex;
		if(visited[w]==0)
			DFS(G,w);
		p=p->nextarc;
	}
}
void BFS(AdjGraph *G,int v)				//对邻接表G从顶点v开始进行广度优先遍历
{
	int Qu[MAXVEX],front=0,rear=0;
	int w,w1;
	ArcNode *p;

	printf("%d ",v);
	visited[v]=1;
	rear=(rear+1)%MAXVEX;
	Qu[rear]=v;

	while(front!=rear)
	{
		front=(front+1)%MAXVEX;
		w=Qu[front];
		p=G->adjlist[w].firstarc;
		while(p!=NULL)
		{
			w1=p->adjvex;
			if(visited[w1]==0)
			{
				printf("%d ",w1);
				visited[w1]=1;
				rear=(rear+1)%MAXVEX;
				Qu[rear]=w1;
			}
			p=p->nextarc;
		}
	}
}

int main()
{
	AdjGraph *G;
	int n=5,e=7,i;
	int A[MAXVEX][MAXVEX]={{0,1,2,6,INF},{INF,0,INF,4,5},
	{INF,INF,0,INF,3},{INF,INF,INF,0,INF},{INF,INF,INF,7,0}};

	CreateGraph(G,A,n,e);	//建立图6.1的邻接表
	printf("邻接表G:\n");
	DispGraph(G);
	printf("各种遍历序列:\n");
	for (i=0;i<G->n;i++) visited[i]=0;
	printf("  深度优先遍历序列DFS:"); DFS(G,0); printf("\n");
	for (i=0;i<G->n;i++) visited[i]=0;
	printf("  广度优先遍历序列BFS:"); BFS(G,0); printf("\n");
	DestroyGraph(G);
	return 1;
}
