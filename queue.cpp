#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<int>dui;
	int i,n,t;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>t;
		dui.push(t);
	}
	while(dui.size())
	{
		int T=dui.top();
		dui.pop();
		cout<<t<<' ';
	}
	return 0;
}