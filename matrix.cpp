#include <iostream>
#include <iomanip>
#define ________//可用const代替
using namespace std;
int main()
{int a[N][N]={1,3,5,7,9};  //第一行元素值是给定的
 int b[N][N],  ________;
 int i,j;
 for(i=1;i<N;i++)
 {a[i][0]= ________________;
  for(j=1;j<N;j++)
	a[i][j]= ________________;
 }
 //以下将a转置成b
 q=b;
 for(i=0;i<N;i++)
   for(j=0;j<N;j++)
	 *(*(________)+_____)=a[i][j];
 //输出a
 cout<<"方阵a:"<<endl;
 for(i=0;i<N;i++)
 {for(j=0;j<N;j++)
    cout<<setw(3)<<a[i][j];
  cout<<endl;
 }
 //输出b
 cout<<"转置后，方阵b:"<<endl;
 for(i=0;i<N;i++)
 {for(j=0;j<N;j++)
    cout<<setw(3)<<b[i][j];
  cout<<endl;
 }
 return 0;
}