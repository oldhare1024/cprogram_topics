#include<stdio.h>
int main()
{
	int a = 1;
	int i ,b;
	for(i=2;i <=100;i++)
	{
		for(b= 2;b<i;b++)
		{
			if(i % b ==0){
			break;}
		    else if(b==i-1){
			printf("%d ",i);
			a += 1;}
		}
	}
	printf("\n");
	printf("素数个数是%d\n",a);
 }
