#include<bits/stdc++.h>
using namespace std;
class A
{
	public:
		int a;
	protected:
		int b;
	private:
		int c;
};
class B:public A
{
	public:
		void func()
		{
			a=10;
			b=20;
			//c=30;//父类私有成员
		}
};
class C:protected A
{
	protected:
		void func()
		{
			a=10;
			b=20;
			//c=30;
		}
};
class D:private A
{
	private:
		void func()
		{
			a=10;
			b=20;
			//c=30;
		}
};
void test1()
{
	B b1;
	b1.a=100;
	//b1.b=50;
}
int main()
{
	test1();
	return 0;
}