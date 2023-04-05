#include<stdio.h>
void sb()
{
	int n,i=1,j=2;
	n=i<j?i++:j++;
	printf("%d %d",i,j);
}
int main()
{
	int a[3]={1,2,3};
	printf("%d\n",a[5-3]);
	printf("%d\n",a[-1]);
	printf("%d %d %d\n",!0,!1,!2);
	sb();
	return 0;
}