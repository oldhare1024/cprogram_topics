#include<stdio.h>
int main()
{
	int Long,Wide,sum=0,square=0;
	scanf("%d %d",&Long,&Wide);
	for(int i=Wide;i>0;i--)
	{
		sum+=i*i;
		if(Long*Wide!=sum)
		square++;
		else 
		break;
		if(Long*Wide)
		{square++;
		break;}
	}
	printf("%d",square);
	return 0;
} 
