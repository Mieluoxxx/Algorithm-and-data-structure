#include <iostream>
using namespace std;
const int V[6] = {1,5,10,50,100,500};//硬币种类
int main()
{
    int C[6];
    int A;
    for(int i = 0; i < 6; i++)
    {
        cin >> C[i];//每种硬币的数目
    }
    cin >> A;//总共需要的总额
    int ans = 0;//硬币数目
    for(int i = 5; i >= 0; i--)//优先从大到小开始取
    {
        int t = min(A/V[i], C[i]);//比较需要的该种硬币数目和现有该种硬币数目
        A -= t * V[i];
        ans += t;
    }
    cout << ans << endl;
    return 0;
}