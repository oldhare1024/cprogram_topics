#include<bits/stdc++.h>
#include<iostream>
using namespace std;
inline void swap(int &a,int &b)
{
	a=a^b;
	b=b^a;
	a=a^b;
}
int main()
{
	int a,b;
	cin>>a>>b;
	swap(a,b);
	cout<<a<<" "<<b;
	return 0;
}