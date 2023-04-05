#include<stdio.h>
int main()
{
	int a,b,c,n;
	scanf("%d %d %d %d",&a,&b,&c,&n);
	/*
	if(c>=30)
	if(b>=12) 
	*/
	if(n<30)
	printf("%d-%02d-%02d",a,b,c+n);
	else if(n>=30&&n<365)
	printf("%d-%02d-%02d",a,b+n/30,c+n%30);
	else if(n>=365)
	printf("%d-%02d-%02d",a+n/365,b+n/30,c+n%30);
	return 0;
}
