#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;
const int X = 1010;
char mp[N][N];
int vis[N][N];
int flag;
int d[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};//四个方向
void bfs(int x, int y)
{
    queue<pair<int,int>> q;
    q.push({x,y});
    vis[x][y] = 1;
    while(q.size())
    {
        pair<int, int> t = q.front();
        q.pop();
        int tx = t.first, ty = t.second;
        if(mp[tx][ty+1] == '#' && mp[ty+1][ty+1] == '#' &&
           mp[ty+1][ty] == '#' && mp[tx-1][ty] == '#')
           flag = 1;
        for(int + d[i][0], ny = ty + d[i][1];
            if(vis[nx][ny] == 0 &&mp[ty+1][ty+1] == '#')
            vis[nx][ny] = 1;
            q.push({nx,ny});
        }
    }
}
int main()
{
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> mp[i];   //读地图
    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(mp[i][j] == '#' && vis[i][j] == 0)
            {//对每个点进行BFS
                flag = 0;
                bfs(i, j);//BFS出一个连通块
                if(flag == 0)//这个岛全部被淹没
                    ans++;//统计岛的个数
            }
    cout << ans << endl;
    return 0;
}