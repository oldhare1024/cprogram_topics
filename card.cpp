#include<stdio.h>
int n[10]={2021,2021,2021,2021,2021,2021,2021,2021,2021,2021};
int is(int i)
{
	while(i>=0)
		{
		if(i%10==0)
           {
		   	n[0]--;
           	if(n[0]<=0)
				return 0;
	       }
		else if(i%10==1)
           {
		   	n[1]--;
           	if(n[1]<=0)
				return 0;
	       }
	    else if(i%10==2)
           {
		   	n[2]--;
           	if(n[2]<=0)
				return 0;
	       }
	    else if(i%10==3)
           {
		   	n[3]--;
           	if(n[3]<=0)
				return 0;
	       }
	    else if(i%10==4)
           {
		   	n[4]--;
           	if(n[4]<=0)
				return 0;
	       }
	    else if(i%10==5)
           {
		   	n[5]--;
           	if(n[5]<=0)
				return 0;
	       }
	 	else if(i%10==6)
           {
		   	n[6]--;
           	if(n[6]<=0)
				return 0;
	       }
	    else if(i%10==7)
           {
		   	n[7]--;
           	if(n[7]<=0)
				return 0;
	       }
		else if(i%10==8)
           {
		   	n[8]--;
           	if(n[8]<=0)
				return 0;
	       }
	    else if(i%10==9)
           {
		   	n[9]--;
           	if(n[9]<=0)
				return 0;
	       }
		if(i==0)
			return 1;
		i/=10;
		}
		return 1;
}
int main()
{
	int i;
	for(i=8000;i>=0;i--)
	{
		if(is(i)==0)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
