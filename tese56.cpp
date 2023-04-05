#include<stdio.h>
int main()
{ 
	int i,a,b,c,m,n,temp;
	scanf("%d",&i);
	a=i/100;//求百位数字 
	b=(i%100)/10;
	//求十位数字 
	c=i%10;
	//求个位数字 
	int k[3]={a,b,c}; 
	for(m=0;m<3;m++) 
	{
	  if(k[m]<k[m+1]) 
	   {temp=k[m];
	   k[m]=k[m+1];
	   k[m+1]=temp;}
	   n=k[0]*100+k[1]*10+k[2];
	}
	printf("%d\n",n);
	return 0;
}
