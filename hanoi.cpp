#include<stdio.h>
void move(char x,char y)
{
	printf("移动%c 到%c\n",x,y);
}
void hanoi(int n,char A,char B,char C)
{
	if(n==1)
			move(A,C);
	else
	{
		hanoi(n-1,A,C,B);
	 	move(A,C);
  		hanoi(n-1,B,A,C);
	}
}
int main()
{
	int n;
	printf("请输入汉诺塔层数:");
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	return 0;
}