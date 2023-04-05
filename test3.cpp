#define printf __mingw_printf
#include<stdio.h>
#include<math.h>
int main() 
{
	long double a;
	a = pow(2*1.0,2);
	printf("%Lf",a);
}
