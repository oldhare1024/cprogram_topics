#include<stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d",&a);
    if(a==2)
	printf("T");
	else if(a>2){
    for(b = 2;b<a;b++){
        if(a%b==0){
    printf("F");
    break;}
        if(b==a)
    printf("T");
    }
	}
}

