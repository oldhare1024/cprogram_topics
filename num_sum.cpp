#include<iostream>
using namespace std;
int n,m,nums[101];
bool flag;
void sum(int n,int m)   //求数组中是否存在一些元素和等于m
{
	if(nums[n] == m) flag = true;  //假设数组的最后一个元素等于和m，将flag变量置为true
	else if(n == 1) return;    //搜索完了整个数组返回
	else
	{
		sum(n-1,m-nums[n]);   //说明取了nums[n]元素
		sum(n-1,m);	//说明没有取nums[n]
	}
}
int main()
{
	cin>>n>>m;
	for(int i =1;i<=n;i++)
		cin>>nums[i];
	flag = false;
	sum(n,m);
	if(flag)
	    cout<<"Yes";
	else
		cout<<"No";
}