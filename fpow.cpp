#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	long long n = 0;
	long long k = 0;

	scanf("%lld %lld", &n, &k);

	long long ret = (long long)pow(n, k) % (long long)pow(10, 9) + 7;
	printf("%lld\n", ret);

	system("pause");
	return 0;
}
