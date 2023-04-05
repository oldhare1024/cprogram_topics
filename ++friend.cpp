#include<iostream>
using namespace std;
class score{
	public:
		int a;
	friend void operator+(score& s,int x);
	friend void operator-(score& s,int y);
	score()
	{
		a=100;
		b=200;
	}
	void show()
	{
		cout<<a<<" "<<b;
	}
	~score(){
	}
	private:
		int b;
};
void operator+(score& s,int x)
{
	s.a+=x;
}
void operator-(score& s,int y)
{
	s.b-=y;
}
int main()
{
	score s;
	s+10;
	s-10;
	s.show();
	return 0;
}