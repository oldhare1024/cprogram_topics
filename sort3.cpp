#include<stdio.h>
int main()
{
  int i,j,t,min,num[10]={12,13,11,56,644,6676,12,86,4,452};
  for(i=0;i<10;i++)
  {
    min = i;
    for(j=i+1;j<9;j++)
    {if(num[min]>num[j])
      min=j;}
      t=num[min];
      num[min]=num[j];
      num[j]=t;
      printf("%d ",num[i]);
   }
   return 0;
}

