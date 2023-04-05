#include<stdio.h>
#include<string.h>
void insertsort(char a[],int n)
{
	int i,j,k;
	for(i=1;i<n;i++)
	{
		k=a[i];
		j=i-1;
		while(j>=0&&a[j]>k)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
	}
}
void allrange(char *str,int k,int len)
{
	int i=0;
	if(k==len)
	{
		static int si=1;
		for(int j=0;j<strlen(str);j++)
  	{
  		printf("%c ",str[j]);
		}
		printf("\n");
		si++;
	}
	else
	{
		for(i=k;i<=len;i++)
		{
			char t=str[i];
			for(int n=i;k<=n-1;n--)str[n]=str[n-1];
			str[k]=t;
			allrange(str,k+1,len);
			t=str[k];
			for(int n=k;n+1<=i;n++)str[n]=str[n+1];
			str[i]=t;
		}
	}
}
int main()
{
	char str[50];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf(" %c",&str[i]);
	insertsort(str,strlen(str));
	allrange(str,0,strlen(str)-1);
	return 0;
}