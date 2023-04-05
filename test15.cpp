#include<iostream>
using namespace std;
int main()
{
	int x = 5, y = 10,result=true;
  result = x++ > 5 && ++y > 10;
  printf("%d %d %d",x,y,result);
	return 0;
}