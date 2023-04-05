#include<stdio.h>


void print_yanghui_triangle(int n) {
	int i, j, k, s;
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			s = 1;
			k = 1;
			//计算第 i 行的第 j 个数
			for(k = 1; k < j; k ++) {
				s = s * (i - k)/k;
			}
			printf("%2d\t", s);
		}
		printf("\n");
	}
}
int main() {
	int n = 0;

	printf("Input line of YangHui Triangle: ");
	scanf("%d", &n);
	print_yanghui_triangle(n);

	return 0;
}