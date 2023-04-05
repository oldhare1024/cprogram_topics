#include<stdio.h>
int main()
{
	int i,j,k,all=0;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			for(k=0;k<=6;k++)
			{
				if(i+j+k==8)
					all++;
				else
					continue;
			}
		}
	}
	printf("%d",all);
}