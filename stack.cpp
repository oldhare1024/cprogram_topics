#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,a,n;
	stack<int>sta;
	cin>>n;
 	for(i=0;i<n;i++)
	{
		cin>>a;
		sta.push(a);
	}
	while(sta.size())
	{
		cout<<sta.top()<<' ';
		sta.pop();
	}
	return 0;
}