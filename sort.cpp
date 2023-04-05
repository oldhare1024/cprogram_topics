#include <stdio.h>
int main( )
{
int n;
scanf("d",&n); 
int a[n],max,min;//输入几个数可以自己决定。
int i;
for(i=0;i<10;i++)
scanf("%lf",&a[i]);
max=min=a[0];
for(i=1;i<10;i++)
{
if(max<a[i]) max=a[i];
if(min>a[i]) min=a[i];
}
printf("max=%lf,min=%lf\n",max,min);
}
