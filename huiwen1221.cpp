#include<stdio.h>
int main()
{
	int i;
	for(i=1001;i<=9999;i++)
	{
		if(i%10==i/1000&&i%100/10==i%1000/100)
			printf("%d ",i);
	}
	return 0;
}
