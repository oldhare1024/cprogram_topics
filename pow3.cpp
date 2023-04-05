#include<stdio.h>
int main()
{
	int a,b,c,flag=0;
	for(a=1;a<31;a++)
	{
		for(b=1;b<31;b++)
		{
			for(c=1;c<31;c++)
			{
				if(a*a+b*b+c*c==1000)
					{printf("%d %d %d\n",a,b,c);
			         flag++;}
			}
		}
	}
	if(flag==0)
	printf("No Solution");
	return 0;
}
