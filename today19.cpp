#include<stdio.h>
#include<string.h>
int main()
{
    int N,M;
    scanf("%d%d",&N,&M);
  
    char str1[61],str2[31];
    scanf("%s",str1);
    scanf("%s",str2);
    strcat(str1,str2);
    int len1;
    len1=strlen(str1);
    int i=0;
    int t=0;
    for(i=0;i<len1;i++)
    for(int j=0;j<len1-i;j++)
    {
        if(str1[j]!=32+str1[j+1]&&str1[j]+32!=str1[j+1])
        {
            int flag=0;
        if(str1[j]>=65&&str1[j]<=90)
        {
            str1[j]+=32;
            flag++;
        }
        if(str1[j]>str1[j+1])
        {
            t=str1[j];
            str1[j]=str1[j+1];
            str1[j+1]=t;
            flag++;
        }
        if(flag==1)
        {
            str1[j]-=32;
        }
        else if(flag==2)
        {
            str1[j+1]-=32;
        }
        }
        else
        {
            if(str1[j]>str1[j+1])
            {
                t=str1[j];
                str1[j]=str1[j+1];
                str1[j+1]=t;
            }
        }
    } 
    printf("%s",str1);  
    return 0;
    
}

