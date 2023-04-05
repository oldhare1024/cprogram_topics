#include <stdio.h>
int main()
{ 
	int a,b,c,n=0;
	for(a=1;a<5;a++)
	for(b=1;b<5;b++)
	for(c=1;c<5;c++)
	if(a!=c&&a!=b&&b!=c)
	{
	printf( "%d%d%d\t",a,b,c);
		if(++n%5==0)
		printf("\n");
	}
	printf( "\n¹²ÓÐ:%d\n",n);
	return 0;
}
