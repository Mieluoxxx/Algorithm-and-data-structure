#include <iostream>
using namespace std;
char field[100][100];
int ans = 0, N, M;
int fx[9]={0,-1,-1,-1,0,0,1,1,1};//x方向
int fy[9]={0,-1,0,1,-1,1,-1,0,1};//y方向
void dfs(int x, int y)
{
    int dx, dy;
    field[x][y] = '.';
    for (int i=1;i<=8;i++)
    {
        dx=x+fx[i];
        dy=y+fy[i];
        if (dx<1||dx>N||dy<1||dy>M||field[dx][dy]=='.')//判断是否出界
            continue;
        field[dx][dy]='.';
        dfs(dx,dy);
    }
}

int main()
{
    cin >> N >> M;
    int i, j = 0;
    for(i = 1; i <= N; i++)
    {
        for(j = 1; j <= M; j++)
        {
            cin >> field[i][j];//读入地图
        }
    }
    for (int i=1; i<=N; i++)
    {
        for (int j=1; j<=M; j++)
        {
            if (field[i][j]=='W')
            {
                ans++;
                dfs(i,j);
            }
        }
    }
    cout << ans << endl;
    return 0;
}