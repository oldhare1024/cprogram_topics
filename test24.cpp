#include<stdio.h>
int main()
{
	int n,i,j,t,m=0,a=1;
	scanf("%d",&n);
	int num[n];
    for(i=0;i<n-2;i++)
    scanf("%d",&num[i]);
    for(i=0;i<n;i++)
		{
		if(a!=num[i])
		{printf("%d ",a);
		m++;}
		a++;
		if(m==2)
		break;
	    }
} 
