#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
    while(1){
        scanf("%lf",&a);
        b=pow((double) a,25.0);
        if(a<=b)break;}
        printf("%lf",b);
}
