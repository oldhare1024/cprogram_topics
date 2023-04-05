#include<iostream>
using namespace std;
int main()
{
	int n,m,mat[101][101],i,j;       //创建二维数组mat
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>mat[j][i];          //输入二维数组mat(按规律输入)
		}
	}
	for (i = 0; i <n; i++)
	{
		for (j = 0; j <m; j++)
		{
			cout<<mat[i][j]<<" ";    //按顺序输出二维数组mat
		}
		cout<<endl;
	}
	return 0;
}