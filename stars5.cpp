#include<stdio.h>
#include<math.h>
int main()
{
	int i, j;
	int N;
	scanf("%d", &N);
	for ( i = N; i >= 1; i--)
	{
		for ( j = 1; j <=(N - i) ; j++)
			printf(" ");
		for (j = 1; j <= (2 * (i - 1) + 1); j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
