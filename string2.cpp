#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int i=0,j=0;
	char a[5][256];
  for (i=0;i<5;i++)
			cin>>a[i];
	for (i = 0;i < 5;i++){
		cout<<a[i];
		if(strcmp(a[i],"Christmas")>0)
			j++;
	}
	cout<<"大于串“Christmas”的字符串的个数:"<<j<<endl;
	return 0;
}