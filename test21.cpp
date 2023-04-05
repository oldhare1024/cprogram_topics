#include <stdio.h>
int main()
{
int count=0;
for(int i=1;i<=20;i++)
{
for(int j=1;j<(100-i)/2;j++)
count+=(100-5*i-2*j>0);
}
printf("%d",count);
return 0;
}
