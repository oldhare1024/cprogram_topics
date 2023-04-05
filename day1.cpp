#include<stdio.h>
int main()
{
	int a,b,n,sum=0,day=1,data=0;
	scanf("%d%d%d",&a,&b,&n);
	while(sum<=n)
	{
		data++;
		if(day<=5)
		{
			sum+=a;
		}
		else if(day>5&&day<=7)
		{
			sum+=b;
		}
		if(day>=7)
		{
			day=0;
		}
		day++;
	}
	printf("%d",data);
	return 0;
}
