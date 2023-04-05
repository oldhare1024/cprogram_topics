#include<stdio.h>
#include<math.h>
int fun(int m)
{
	int a,i=m+1,j=2;
	if(m<2)
	return 2;
	for(i=m+1;;i++)
	{
		for(j=2;j<sqrt(i)+1;j++)
		{
			if(i%j==0)
			break;
		}
		if(j==sqrt(i))
		{
			a=i;
			break;
		}
	}
	return a;
}
int main()
{
	int s;
	scanf("%d",&s);
	int a;
	a=fun(s);
	printf("%d",a);
	return 0;
}

