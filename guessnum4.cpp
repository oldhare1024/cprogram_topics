#include<iostream>
#include<string>
using namespace std;
int main(){
 int num;
 string str;
	for(int i=100007;i<=9999997;i++){
	  if (i%10==7){
	  str=to_string(i);	
	  for (int j=str.size()-1;j>0;j--){
		 str[j]=str[j-1];	  
	  }
	  str[0]='7';
	  if (i*4==stoi(str)){
	   num=i;break;
        }
	  }	
	}
	cout<<num;
	return 0;
}
