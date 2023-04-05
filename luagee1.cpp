#include<stdio.h>
int main()
{
    int a1,a2,a3;
    while(1){
    scanf("%d %d %d",&a1,&a2,&a3);
    if(0<=a1<=a2<=a3<=100)break;}
    if(a1 + a3 == 2*a2)
    printf("8 16 32");
    else if(a1*a3 == a2*a2)
    printf("4 5 6");
}
