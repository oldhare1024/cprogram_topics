#include<stdio.h>
int main()
{
    int i,j=0,binary[1000],eight[100];
    for(i=0;i<2;i++)
    {
        scanf("%d",&eight[i]);
        if(eight[i]==0)
        {
            binary[j]=0;
            j++;
        }
        else if(eight[i]==1)
        {
            binary[j]=1;
            j++;
        }
        else if(eight[i]==2)
        {
            binary[j]=1;
            binary[j+1]=0;
            j+=2;
        }
        else if(eight[i]==3)
        {
            binary[j]=1;
            binary[j+1]=1;
            j+=2;
        }
        else if(eight[i]==4)
        {
            binary[j]=1;
            binary[j+1]=0;
            binary[j+2]=0;
            j+=3;
        }
        else if(eight[i]==5)
        {
            binary[j]=1;
            binary[j+1]=0;
            binary[j+2]=1;
            j+=3;
        }
        else if(eight[i]==6)
        {
            binary[j]=1;
            binary[j+1]=1;
            binary[j+2]=0;
            j+=3;
        }
        else if(eight[i]==7)
        {
            binary[j]=1;
            binary[j+1]=1;
            binary[j+2]=1;
            j+=3;
        }
    }
    for(i=j+3;i>=0;i--)
    printf("%d",binary[i]);
    return 0;
}
