#include<iostream>
using namespace std;
int main()
{
	int i=0,j=0;
	int a[10][10]={0};
	for(i=0;i<10;i++)
		for(j=0;j<10;j++)
			cout<<a[i][j]<<' ';
	return 0;
}