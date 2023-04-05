#include<stdio.h>
int fun(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
 } 
main()
 {
 	int x=1,y=3;
 	fun(&x,&y);
 	printf("%d %d",x,y);
 }
