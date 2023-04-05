#include<stdio.h>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    int a,s,cin,S,cout;
    double b;
    while(1){
        scanf("%d",&a);
        b=pow((double)a,25.0);
        if(a<=b)break;}
    string s;
    cin>>s;
    int len=s.length();
    int n = 0;
    for (int i = 0;i<len;++i)
    {
        if(S[i]=='1')
          n+=pow(2,len-1-i);
    }
    cout<<n
}
