#include<bits/stdc++.h>
using namespace std;
const double Pi=3.14;
class Circle
{
	public:
		int cr;
		double cp()
		{
			return 2*Pi*cr;
		}
};
int main()
{
	Circle c1;
	c1.cr=10;
	cout<<"圆的周长"<<c1.cp()<<endl;
	return 0;
}