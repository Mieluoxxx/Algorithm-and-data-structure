/*
    DP状态设计：
    DP状态：定义二维数组dp[][],大小为NxC
    dp[i][j]:把前i个物品(从第1个到第i个)装入容器为j的背包中获得的最大价值

    DP转移方程：
    (1)第i个物品的体积比容量j大，装不进去
        则：直接继承前i-1个物品的情况
        dp[i][j] = dp[i-1][j]
    (2)第i个物品的体积比容量j小，能装进背包
        则：装第i个:dp[i][j] = dp[i-1][j-c[i]]+w[i]   背包容量减少c[i],价值增加w[i]
            不装第i个，dp[i][j] = dp[i-1][j]
        取最大值，状态转移方程
        dp[i][j] = max(dp[i-1][j], dp[i-1][j-c[i]]+w[i])
*/
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int N = 3011;
int w[N], c[N];//物品价值和体积
int dp[N][N];
int solve(int i, int j)
{
    if(dp[i][j] != 0)   return dp[i][j];
    if(i == 0) return 0;
    for(int i = 1; i <= n; i++)
        for(int j = 0; j <= C; j++)
        {
            if(c[i] > j)    
                dp[i][j] = dp[i-1][j];//第i个物品比背包还大，装不了
        }
            else
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-c[i]]+w[i]);
    return dp[n][C];
}
int main()
{
    int n,C;
    cin >> n >> C;
    for(int i = 1; i <= n; i++) cin >> c[i] >> w[i];
    memset(dp, 0, sizeof(dp));
    cout << solve(n, C) << endl;
    return 0;
}