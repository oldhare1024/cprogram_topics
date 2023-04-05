#include<stdio.h>
#include<string.h>
char An[67200000]="A";
char Bn[67200000]="A";
int main()
{
    int i,n;
    scanf("%d",&n);
    char A[2];
    A[0]='A';
    if(n==1)
    	printf("%s",A);
    else{
    for(i=1;i<n;i++)
    {
    		A[0]++;
				strcpy(Bn,An);
				strcat(An,A);
        strcat(An,Bn);
    }
    printf("%s",An);
		}
}