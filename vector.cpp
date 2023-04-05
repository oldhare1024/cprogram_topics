#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 vector<int> v;
 int i;
 for(i=0;i<5;i++)
    v.push_back(i+1);
 v.erase(v.begin()+2);
 v.insert(v.begin()+2,9);
 sort(v.begin(),v.end());
 for(i=0;i<v.size();i++)
    printf("%d ",v[i]);
 printf("\n%d",v.size());
 v.clear();
 return 0;
}