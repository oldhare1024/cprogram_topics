#include<iostream>
using namespace std;

//递归函数 输出数组a（长度为len） 前n个元素的所有子集
//a[] 输入字符数组指针
// n  需要输出的前n个元素的所有子集
// len a的长度
void Subset(char a[], int n, int len) {

	if (n == 0) {  // 递归终止条件

		for (int i = 0; i < len; i++) cout << a[i];
		cout << endl;
		delete[] a;  // 这里的a 就是temp
		return;
	}

	for (int j = 0; j <= 1; j++) { //每次需要做两种决策

		char *temp = new char[len];

		for (int i = 0; i < len; i++) temp[i] = a[i];  //用临时数组来覆盖原来数组

		if (j == 0) {
			temp[n - 1] = '0';
		}else {
			temp[n - 1] = '1';
		}
		Subset(temp, n - 1,len);

	}

}


int main()
{
	int n;
	scanf("%d",&n);
	char a[5] = { 'a','b','c','d','e'};
	Subset(a,5,5);
	char b;
	cin >> b; //保留窗体
    return 0;
}
