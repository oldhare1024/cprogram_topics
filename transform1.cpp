#include<stdio.h>
#include<math.h>
int main(int argc,char*argv[])
{
    int a;
    int k,t,s,c=0;
    double b;
    while(1){
        scanf("%d",&a);
        b=pow((double)a,25.0);
        if(a<=b)break;}
    do{
        t=a%10;
        k=t*pow(2,c);
        s=k+s;
        a=a/10;
        c++;
    }while(a>0);
    printf("%d",s);
    return 0;
}
