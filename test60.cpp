#include <stdio.h>
int main(void) {
	int n, a[200], b[200], m = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		b[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		if ((a[i] * a[i]) % 7 == 1) {
			b[m] = a[i];
			m++;
		}
	}
	for (int i = 0; i < m; i++)
		printf("%d ", b[m]);
	return 0;
}
