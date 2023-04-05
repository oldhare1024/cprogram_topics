#include<stdio.h>
int main()
{
	int a ,average  ;
	int s , i = 0;
	while(1)
	{
		scanf("%d",&a);
	   	s += a;	
		i++;
		
		if(a == 9999)
		{
		break;
	    }
	}
	average = (s-9999)/(i-1);
	printf("%d",average);
	return a;
}

