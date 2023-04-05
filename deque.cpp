#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	deque<int>d;
	cin>>n;
	d.push_back(n);
	d.push_front(n);
	d.pop_back();
	d.pop_front();
 	return 0;
}