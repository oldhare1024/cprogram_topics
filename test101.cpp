#include <iostream>
using namespace std;
int main()
{
    int i,j,m,n;
    cin>>m>>n;//背包可容纳重量,物品种类数量
    int w[n+1]={0},v[n+1]={0},dp[n+1][m+1]={0};
    for(i=1;i<=n;i++)//输入所有商品的重量以及价值
        cin>>w[i]>>v[i];//输入各物品重量以及价值
    for(i=1;i<=n;i++)//当前商品种类
    {
        for(j=1;j<=m;j++)//当前背包容量
        {
         if(j>=w[i]&&dp[i-1][j]<dp[i-1][j-w[i]]+v[i])//判断当前商品是否大于当前背包容量
            dp[i][j]=dp[i-1][j-w[i]]+v[i];
            //该算法核心语句，判断拿还是不拿
         else//如果该商品大于当前容量，则与上一行相同
                dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][m];//最大价值
    return 0;
}