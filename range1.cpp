#include<stdio.h>
int main()
{
    int n,i,t,j;
    while(1){
    scanf("%d",&n);
    if("n>=5&&n<=10")break;}
    int team[n];
    for(i=0;i<n;i++)
    scanf("%d",&team[i]);
    for(j=1;j<=(n*n-n)*0.5;j++)
	{
        for(i=0;i<n;i++)
        {
	       if(team[i]>team[i+1])
	       {t = team[i+1];
	       team[i+1] = team[i];
	       team[i] = t;}
	       else
	       continue;
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",team[i]);
}
