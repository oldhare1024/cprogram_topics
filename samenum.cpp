#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    int ans[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    ans[0]=0;
    for(int i=1;i<n;i++){
        if(num[i]>num[i-1]){
            ans[i]=num[i-1];
        }
        else{
            for(int j=i-1;j>=0;j--){
                if(num[i]>ans[j]){
                    ans[i]=ans[j];
                    break;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",ans[i]);
    }
    return 0;
}

