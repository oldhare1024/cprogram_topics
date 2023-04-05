#include <iostream>
#include <string>
using namespace std;
int main()
{string x,z;
 int t;
 getline(cin, x);
 z=x;  //保留原串的值
 int i,j;
 for(j=x.length()-1;j<=(x.length()-1)/2,i<j; i++,j--)
 {string y=x;
  t=y[i]; y[i]=y[j]; y[j]=t;    //string型也可以用下标访问其中的每一个字符
 }
 cout<<z<<"的反串是:"<<x<<endl;
 return 0;
}