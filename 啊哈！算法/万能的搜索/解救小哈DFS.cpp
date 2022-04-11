#include <iostream>
using namespace std;
int a[51][51],book[51][51];
int p,q,n,m,mini = 999999;
int fx[5] = {0,0,1,0,-1};
int fy[5] = {0,1,0,-1,0};
void dfs(int x, int y, int step)
{
    int tx,ty;
    if(x == p && y == q)
    {
        //更新最小值
        if(step < mini)
            mini = step;
        return ;
    }
    int i = 0;
    for(i = 1; i <= 5; i++)//列举四种走法
    {
        tx = x + fx[i];
        ty = y + fy[i];
        //判断越界
        if(tx < 1 || tx > n || ty < 1 || ty > m)
            continue;
        if(a[tx][ty] == 0 && book[tx][ty] == 0)
        {
            book[tx][ty] = 1;
            dfs(tx, ty ,step+1);
            book[tx][ty] = 0;
        }
    }
    return ;
}
int main()
{
    int i, j, startx, starty;
    cin >> startx >> starty >> n >> m;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> p >> q;
    book[1][1] = 1;
    dfs(startx,starty,0);
    cout << mini << endl;
    return 0;
}