#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double p,s;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
	{
    p = (a+b+c)/2;
    s = sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))*(1/4);
    printf("%lf",s);
	}
    else
    printf("No");
}
