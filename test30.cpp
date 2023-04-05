#include<stdio.h>
int main()
{
	int z,x=1,y=1;
	z=(x++,y++,++y);
	printf("%d",z); 
 } 
