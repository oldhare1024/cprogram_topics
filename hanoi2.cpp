#include<stdio.h>
void hanoi(int n,char A,char B,char C)
{
	if(n==1)
			printf("%c->%c\n",A,C);
	else
	{
		hanoi(n-1,A,C,B);
	 	printf("%c->%c\n",A,C);
		hanoi(n-1,B,A,C);
	}
}
int main ()
{
	hanoi(3,'A','B','C');
}