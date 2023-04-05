#include<stdio.h>
int main()
{
    int n,t,i,j,digit=0,num[1000],max[4000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(i=0;i<n;i++)
    {
            if(num[i]>=1000)
            {   
                max[digit]=num[i]/1000;
                max[digit+1]=num[i]%1000/100;
                max[digit+2]=num[i]%100/10;
                max[digit+3]=num[i]%10;
                digit+=4;
            }
            else if(num[i]<1000&&num[i]>=100)
            {
                max[digit]=num[i]/100;
                max[digit+1]=num[i]%100/10;
                max[digit+2]=num[i]%10;
                digit+=3;
            }
            else if(num[i]<100&&num[i]>=10)
            {
                max[digit]=num[i]/10;
                max[digit+1]=num[i]%10;
                digit+=2;
            }
            else if(num[i]<10)
                {max[digit]=num[i];
                digit++;}
    }
    for(i=0;i<digit-1;i++)
    {
        for(j=0;j<digit-1-i;j++)
        {
            if(max[j]<max[j+1])
            {
                t=max[j];
                max[j]=max[j+1];
                max[j+1]=t;
            }
        }
    }
    for(i=0;i<digit;i++)
    printf("%d",max[i]);
    return 0;
}
