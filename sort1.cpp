#include<stdio.h>
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
void selectsort0(int arr[], int q)//—°‘Ò≈≈–ÚΩµ–Ú
{
	int i, j;
	for (i = 0; i < q; i++)
	{
		int max = i;
		for (j = i + 1; j < q; j++)
			if (arr[j] > arr[max])
				max = j;
		swap(&arr[max], &arr[i]);
	}
}
void selectsort1(int arr[], int len,int q)//—°‘Ò≈≈–Ú…˝–Ú
{
	int i, j;
	for (i = q - 1; i < len; i++)
	{
		int min = i;
		for (j = i + 1; j < len; j++)
			if (arr[j] < arr[min])
				min = j;
		swap(&arr[min], &arr[i]);
	}
}
int main()
{
	int i, n, m, p, q;
	scanf("%d%d", &n, &m);
	int num[100];
	for (i = 0; i < n; i++)// ˝◊È∏≥÷µ
	{
		num[i] = i + 1;
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &p, &q);
		//≈–∂œ≤Ÿ◊˜
		if (p == 0)
			selectsort0(num, q);
		else if (p == 1)
			selectsort1(num, n, q);
	}
	for (i = 0; i < n; i++)
		printf("%d ", num[i]);
	return 0;
}

