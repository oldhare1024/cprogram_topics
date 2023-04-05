#include<stdio.h>
void insertionsort(int arr[], int len){
        int i,j,key;
        for (i=1;i<len;i++){
                key = arr[i];
                j=i-1;
                while((j>=0) && (arr[j]>key)) {
                        arr[j+1] = arr[j];
                        j--;
                }
                arr[j+1] = key;
        }
}
int main()
{
    int i,j=0,a,b,num1[100],num2[100];
    scanf("%d %d\n",&a,&b);
    for(i=0;i<a;i++)
    scanf("%d",&num1[i]);
    insertionsort(num1,a);
    for(i=0;i<a;i++)
    {
        if(num1[i]%b!=0)
        {num2[j]=num1[i];
        j++;}
    }
    for(i=0;i<j;i++)
    {
        if(num2[i]<65||num2[i]>90)
        printf("%d ",num2[i]);
        else 
        printf("%c ",num2[i]);
    }
    return 0;
}
