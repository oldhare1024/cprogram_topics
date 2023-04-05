#include<stdio.h>
int main(void)
{
	int i;
	for(i=1;i<=40;i++)
	{
		if(i++%5==0) 
			if(++i%8==0) 
				printf("%d",i);
	}
	return 0;
}
