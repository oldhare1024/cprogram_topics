#include<bits/stdc++.h>
using namespace std;
void func(int x,int y)
{
	cout<<"int & int"<<endl;
}
void func(int x,double y)
{
	cout<<"int & double"<<endl;
}
int main()
{
	int a,b;
	double c;
	cin>>a>>b>>c;
	func(a,b);
	func(a,c);
}