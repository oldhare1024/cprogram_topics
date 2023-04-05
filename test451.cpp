#include<stdio.h>
int main()
{
    int n,i,j=0,max,a[n][2];
    scanf("%d",&n);
    int s[10000];
    for(int i=0;i<n;i++)
    	scanf("%d",&s[i]);
    a[0][0]=s[0];
    for(i=0;i<n;i++)
    {
	    a[i][1]=0;
		if(s[i]!=a[j][0])
	    {
		    j++;
		    a[j][0]=s[i];
    	}
    }
    for(i=0;i<n;i++)
    {
		for(int t=0;t<=j;t++)
		    if(s[i]==a[t][0])
			{
				a[t][1]++;
				break;
			}
    }
    max=a[0][1];
    for(i=1;i<n;i++)
	{
		if(max<a[i][1])
		max=a[i][1];
		j=a[i][0];
	}
	printf("%d",j);
    return 0;
}

