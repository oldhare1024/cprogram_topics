#include<stdio.h>
#include<math.h>
int main(void)
{
	double a,b,c,p,s;
	scanf("%lf,%lf,%lf",&a,&b,&c);
	p=(double)(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Ãæ»ý=%7.2lf\n",s);
	return 0;
}

