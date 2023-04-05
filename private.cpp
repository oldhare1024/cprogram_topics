#include<bits/stdc++.h>
using namespace std;
class area{
	public:
		void seta(int x)
		{
			a=x;
		}
		void setb(int y)
		{
			b=y;
		}
		void setc(int z)
		{
			c=z;
		}
		int getarea()
		{
			return a*b*c;
		}
	private:
		int a;
		int b;
		int c;
};
int main()
{

	area a;
	int x,y,z;
	cin>>x>>y>>z;
	a.seta(x);
	a.setb(y);
	a.setc(z);
	cout<<a.getarea();
	return 0;
}