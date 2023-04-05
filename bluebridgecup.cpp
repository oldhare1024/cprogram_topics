#include<stdio.h>
int P[20][20],D[20][20];
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int max_path(int m, int n){
	P[0][0] = D[0][0];
	for(int i = 1; i < m; i++){
		P[i][0] = D[i][0] +P[i-1][0];
	}
	for(int i = 1; i < n; i++){
		P[0][i] = D[0][i] + P[0][i-1];
	}
	for(int i = 1; i < m; i++){
		for(int j =1; j < n; j++){
			P[i][j] = D[i][j] + max(P[i-1][j], P[i][j-1]);
        }
    }
    return P[m-1][n-1];
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&D[i][j]);
    int result = max_path(m,n);
    printf("%d",result);
}
