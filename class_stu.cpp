#include<bits/stdc++.h>
using namespace std;
class stu
{
	public:
		char name[3][7];
		int id[3];
		void sname(int i)
		{
			cout<<"姓名：";
			cout<<name[i]<<endl;;
		}
		void sid(int i)
		{
			cout<<"学号："<<id[i]<<endl;
		}
};
int main()
{
	int i,j;
	stu s1;
	for(i=0;i<3;i++)
	{
		cout<<"姓名：";
		cin>>s1.name[i];
		cout<<"学号：";
		cin>>s1.id[i];
	}
	for(i=0;i<3;i++)
	{
		s1.sname(i);
		s1.sid(i);
	}
	return 0;
}