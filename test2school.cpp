#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
	char no[8]; //8位学号
	char name[20]; //姓名
	int price; //成绩
} Student;

typedef struct LNode {
	Student data; //数据域
	struct LNode *next; //指针域
} LNode;

void CreatStuList(LNode *&list) {
	int n,i;
	LNode *p,*tc;
	list=(LNode *)malloc(sizeof(LNode));
	list->next=NULL;
	tc=list;
	printf("请输入学生的人数：");
	scanf("%d",&n) ;
	for(i=0; i<n; i++) {
		p=(LNode *)malloc(sizeof(LNode));
		printf("输入第%d学生的学号、姓名、成绩：",i+1);
		scanf("%s",p->data.no);
		scanf("%s",p->data.name);
		scanf("%d",&p->data.price);
		tc->next=p;
		tc=p;
	}
	tc->next=NULL;
}
void show(LNode *&list) {
	LNode *p=list->next;
	if(p==NULL) {
		printf("\n学生链表为空！\n");
		return;
	}
	printf("\n输出所有学生的学号、姓名、成绩：\n");
	while(p!=NULL) {
		printf("%s %s %d\n",p->data.no,p->data.name,p->data.price);
		p=p->next;
	}
}

int findByName(LNode *&list, char name[]) {
	int i=1;
	LNode *p=list->next;
	while(p!=NULL) {
		if(strcmp(name,p->data.name)==0) {
			printf("\n输出该学生的学号、姓名、成绩：");
			printf("%s %s %d\n",p->data.no,p->data.name,p->data.price);
			return i;
		}
		p=p->next;
		i++;
	}
	printf("\n无此人\n");
	return 0;
}

int Position(int pos, LNode *&list) {
	int i=1;
	if(pos<1) return 0;
	LNode *p=list->next;
	while(p!=NULL&&i<pos) {
		p=p->next;
		i++;
	}
	if(p==NULL) return 0;
	printf("\n输出第%d位置的学生的学号、姓名、成绩：",pos);
	printf("%s %s %d\n",p->data.no,p->data.name,p->data.price);
	return 1;
}

int PInsert(int pos, LNode*&list, Student student) {
	int i=1;
	if(pos<1) return 0;
	LNode *pre=list,*p=list->next,*s;
	while(p!=NULL&&i<pos) {
		pre=p;
		p=p->next;
		i++;
	}
	if(p==NULL&&i<pos) return 0;
	s=(LNode *)malloc(sizeof(LNode));
	s->data=student;
	s->next=p;
	pre->next=s;
	return 1;
}

int Delete(int pos, LNode *&list) {
	int i=1;
	if(pos<1) return 0;

	LNode *pre=list,*p=list->next;
	while(p!=NULL&&i<pos) {
		pre=p;
		p=p->next;
		i++;
	}
	if(p==NULL) return 0;
	pre->next=p->next;
	free(p);
	return 1;
}
int Count(LNode *&list) {
	int i=0;
	LNode *p=list->next;
	while(p!=NULL) {
		i++;
		p=p->next;
	}
	return i;
}

void DestroyList(LNode *&list) {
	LNode *pre=list,*p=list->next;
	while(p!=NULL) {
		free(pre);
		pre=p;
		p=p->next;
	}
	free(pre);
}
int main() {
	int sel, flag=1;
	LNode *list;
	char name[20];
	int pos;
	Student stu;

	while(flag==1) {
		printf("\n1: 初始化一个学生信息链表\n");
		printf("2: 显示学生信息\n");
		printf("3: 根据姓名进行查找\n");
		printf("4: 根据指定的位置输出相应的学生信息\n");
		printf("5: 给定一个学生信息，插入到表中指定的位置\n");
		printf("6: 删除指定位置的学生记录\n");
		printf("7: 统计表中学生个数\n");
		printf("8: 退出\n");
		printf("请选择:");

		scanf("%d",&sel);

		switch(sel) {
			case 1:
				CreatStuList(list);
				break;

			case 2:
				show(list);
				break;

			case 3:
				printf("\n输入要查找的学生姓名：");
				scanf("%s",name);
				findByName(list,name);
				break;

			case 4:
				printf("\n输入要查找的学生的逻辑序号：");
				scanf("%d",&pos);
				if(Position(pos,list)==0) printf("无此逻辑序号\n");
				break;

			case 5:
				printf("\n输入一个新学生的学号、姓名、成绩：");
				scanf("%s",stu.no);
				scanf("%s",stu.name);
				scanf("%d",&stu.price);
				printf("\n输入新学生的要插入的位置（逻辑序号）：");
				scanf("%d",&pos);
				if(PInsert(pos,list,stu)==0) printf("无此逻辑序号，插入失败！\n");
				else printf("插入成功！\n");
				show(list);
				break;

			case 6:
				printf("\n输入要删除学生的位置（逻辑序号）：");
				scanf("%d",&pos);
				if(Delete(pos,list)==0) printf("无此逻辑序号，删除失败！\n");
				else printf("删除成功！\n");
				show(list);
				break;

			case 7:
				printf("当前表中学生的人数为：%d\n",Count(list)) ;
				break;

			case 8:
				DestroyList(list);
				flag=0;
		}
	}
	return 1;
}
