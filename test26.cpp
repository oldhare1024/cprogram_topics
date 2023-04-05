#include<stdio.h>
int main()
{
	int L, R;
	int  i = 0, n = 0, a = 0;
	scanf("%d %d",&L,&R); 
	for (i = L; i <= R; i++)
	{
		a = i;
		while (a != 0)
		{
			if (a % 10 == 2)
				n++;
			a /= 10;
		}
	}
	printf("%d\n",n);
	return 0;
}

