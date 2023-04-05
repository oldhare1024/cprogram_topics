#include<stdio.h>
int main()
{
    int n,i,j,k;//边长，列数，行数,空格
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            for(j=1;j<n;j++)
                printf(" ");
            for(j=1;j<=n;j++)
                printf("*");
            printf("\n");
            continue;
        }
        else{
        for(j=1;j<=2*n+i-2;j++)
        {
            if(j==n-i+1||j==2*n+i-2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    	}
    }
    //下半部分
    for(i=n-1;i>=1;i--)
    {
        if(i==1)
        {
            for(j=1;j<n;j++)
                printf(" ");
            for(j=1;j<=n;j++)
                printf("*");
            printf("\n");
            continue;
        }
        else{
        for(j=1;j<=2*n+i-2;j++)
        {
            if(j==n-i+1||j==2*n+i-2)
                printf("*");
            else
                printf(" ");
        }
        if(i!=1)
			printf("\n");
    	}
    }
}