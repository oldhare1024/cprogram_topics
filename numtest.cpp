#include<iostream>
using namespace std;
int main()
{
 long long i;
 for(i=1;i<4096;i++)
 {
   if(((i*i*i)-i)%3==0)
	   cout<<i<<' ';
   else
   	   continue;
 }
}