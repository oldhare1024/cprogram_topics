#include <iostream>
using namespace std;

#define SUM(x) (x)*(x)

inline int fun(int x)
{
	return x * x;
}

int main()
{
	int a = SUM(2 + 3);
	int b = fun(2 + 3);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}