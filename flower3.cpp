#include<stdio.h>
int main()
{
	int n,m,i;
	char a = 64;
	scanf("%d",&n);
	m = n;
	i = n;
	while(m!= 0)
	{
		for(n = i;n>0;n--)
		{
			printf("%c",a);
		}
		printf("\n");
		m--;
	}
	return 0;
}
