#include<iostream>
using namespace std;
class Base
{
	public:
		Base()
		{
			cout<<"Base构造函数"<<endl;
			b=100;
		}
		~Base()
		{
			cout<<"Base析构函数"<<endl;
		}
		int b;
};
class Son:public Base
{
	public:
		void suc()
		{
			b=200;
			cout<<"继承成功"<<endl;
		}
		int b;
};
void test1()
{
	Son b1;
	b1.suc();
	cout<<b1.b<<endl<<b1.Base::b<<endl;;
}
int main()
{
	test1();
	return 0;
}