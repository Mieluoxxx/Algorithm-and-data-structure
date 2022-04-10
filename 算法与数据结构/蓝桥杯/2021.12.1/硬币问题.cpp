/* 
    (1)第一步：只考虑1元面值的硬币
    (2)第二步：使用面值为5元的硬币
*/
#include <iostream>
using namespace std;
const int M = 251;
const int N = 5;
int type[N] = {1, 5, 10, 25, 50};
int cnt[M];
const int INF = 0x1FFFFFFF;
void solve()
{
    for(int k = 0; k < M; k++)  cnt[k] = INF;
    cnt[0] = 0;
    for(int j = 0; j < N; j++)
        for(int i = type[j]; i < M; i++)
            cnt[i] = min(cnt[i], cnt[i-type[j]]+1);//状态转移
}
int main()
{
    int s;
    solve();
    while(cin >> s)
    {
        if(cnt[s] == INF)   cout << "No answer" << endl;
        else    cout << cnt[s] << endl;
    }
    return 0;
}