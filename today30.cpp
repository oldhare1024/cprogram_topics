#include <stdio.h>
int main()
{
	int sum, eve;
	while (~scanf("%d%d", &sum, &eve))
	{
		int time = 0;
		for (int a = 1;a <5000;a++)
		{
			if (sum > 0)
			{
				time += a + 1;
				sum -= a * eve;
				
			}
			else
			{
				int b = -sum / eve;
				time -= b;
				break;
			}
		}
		printf("%d\n", time - 1);
	}
	return 0;
}
