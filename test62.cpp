#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int x=2018;
	if(x<0){
		if(x!=0)
    	x=x/2;}
	else
		x= -x;
	cout<<x;
 	return 0;
}