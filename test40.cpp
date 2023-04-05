#include<stdio.h>
int ADD(int x)
{
	x+=10;
	return x;
} 
int main()
{
	int a=1;
	a=ADD(a);
	printf("%d",a);
	return 0;
}
