#include<stdio.h> 
int gcd(int a ,int b){
      if(b == 0){
            return a;
      }else{
            return gcd(b, a%b);
      }
}
int main()
{
	int a=2,b=8,c;
	c=gcd(a,b);
	printf("%d",c);
}
