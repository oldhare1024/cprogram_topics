#include<stdio.h>
#define MaxSize 100

typedef int datatype;

typedef struct{
	datatype data[MaxSize];
	int top;
} SqStack;

void InitStack(SqStack &st)//用来初始化一个顺序栈
{
	st.top=-1;
}

int Push(SqStack &st,datatype x)//用来实现元素的入栈操作
{
	if(st.top==MaxSize-1) return 0;//栈满，入栈失败
	st.top++;
	st.data[st.top]=x;
	return 1;  //成功入栈
}

int Pop(SqStack &st,datatype &x)//用来实现元素的出栈操作
{
	if(st.top==-1) return 0;//栈空，出栈失败
	x=st.data[st.top];
	st.top--;
	return 1;  //成功出栈
}

int GetTop(SqStack &st,datatype &x)//用来实现取栈项元素的操作
{
	if(st.top==-1) return 0;//栈空，无栈顶元素
	x=st.data[st.top];
	return 1;  //成功获取
}

int menu() /*主界面菜单*/
{
	int ch;
	printf("\n\t\t顺序栈操作\n");
	printf("\t==========================\n");
	printf("\t请选择\n");
	printf("\t1：入栈\n");
	printf("\t2：出栈\n");
	printf("\t3：取栈项元素\n");
	printf("\t0：退出\n");
	printf("\t==========================\n");
	printf("\t选择(0, 1, 2, 3):");
	scanf("%d",&ch);
	return(ch);
}

int main()
{
	SqStack st;
	int sel,flag=1;
	datatype e;
	InitStack(st);

	while(flag)
	{
		sel=menu();
		switch(sel)
		{
			case 1:
				printf("\t请输入入栈的数据：");
				scanf("%d",&e);
				if(Push(st,e)==0) printf("\t栈满，入栈失败\n");
				else printf("\t%d入栈\n",e);
				break;
			case 2:
				if(Pop(st,e)==0) printf("\t栈空，出栈失败\n");
				else printf("\t%d出栈\n",e);
				break;
			case 3:
				if(GetTop(st,e)==0) printf("\t栈空，无栈顶元素\n");
				else printf("\t当前栈顶元素为%d\n",e);
				break;
			case 0:
				flag=0;
		}
	}
	return 1;
}
