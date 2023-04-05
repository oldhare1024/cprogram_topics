#include<stdio.h>
void insertsort(int arr[], int len){
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
    int i,N,sum=0,flag=1;
    scanf("%d",&N);
    int s[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&s[i]);
        sum+=s[i];
    }
    if(sum%10!=0)
        printf("%d",sum);
    else{
    insertsort(s,N);
    for(i=0;i<N;i++)
    {
        if((sum-s[i])%10!=0)
            {sum-=s[i];
            printf("%d",sum);
            flag=0;}
    }
    if(flag==1)
        printf("0");
    }
    return 0;
}
