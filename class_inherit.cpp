#include<bits/stdc++.h>
using namespace std;
class basecon
{
	public:
		void header()
		{
			cout<<"首页，公开课，vip课（公共头部）"<<endl;
		}
		void footer()
		{
			cout<<"帮助中心，交流合作，站内导航（公告底部）"<<endl;
		}
		void left()
		{
			cout<<"java,python,c++（公共分类）"<<endl;
		}
};
class Java:public basecon
{
	void content()
	{
		cout<<("java页面")<<endl;
	}
};
class Python:public basecon
{
	void content()
	{
		cout<<("python页面")<<endl;
	}
};
void test1()
{
	Java j;
	j.header();
	j.footer();
	j.left();
	cout<<"-------------------"<<endl;
}
void test2()
{
	Python p;
	p.header();
	p.footer();
	p.left();
	cout<<"-------------------"<<endl;
}
int main()
{
	test1();
	test2();
	return 0;
}