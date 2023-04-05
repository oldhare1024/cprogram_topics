#include<iostream>
#include<string.h>
#include<sstream>
#include<math.h>
using namespace std;
char a[100000000];
typedef long long ll;
ll func(char c[],int len)
{
	ll i=0,j=0,x=0;
	char b[8];
	for(i=len-9;i<len;i++)
	{
	 b[j]=a[i];
	  j++;
	}
	stringstream geek(b);
	geek>>x;
	cout<<x<<endl;
	return x;
}
int main()
{
    ll b,c,x=0,ans=1;
    cin>>a;
    int len = strlen(a);
    if(len>18)
        x=func(a,len);
    else
		
    c=pow(10,9)+7;
    x%=c;
    while(b){
        if(b%2==1)
          ans=ans*x%c;
        x=x*x%c;
        b/=2;
    }
    cout<<ans;
    return 0;
}