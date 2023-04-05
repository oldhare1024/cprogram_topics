#include<stdio.h>
int main()
{
	int n[4]={0},num[4]={2,5,7,13};
 	int a,i;
  	scanf("%d",&a);
  	for(i=0;i<4;i++)
	{
 	 if(i==n[a-num[i]])
 	  {
       printf("%d %d",num[i],n[a]);
       break;
      }
     else
   	  n[num[i]]=i;
	}
}