#include<stdio.h>
#include<queue>
#define MAX_N 100
#define MAX_M 100
using namespace std;
 
const int INF = 100000000;
typedef pair<int,int > P;
char maze[MAX_N][MAX_M+1];
int N,M;
int sx,sy;
int gx,gy;
int d[MAX_N][MAX_M+1];
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
 
int bfs()
{
    queue<P> que;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            d[i][j] = INF;     //  初始化所有点的距离为INF 
        }
    }
 
    que.push(P(sx,sy));        // 把起点加入队列，并设距离为 0 
    d[sx][sy] = 0;
 
    while(que.size())
    {
        P p = que.front(); que.pop();    
        if(p.first == gx && p.second == gy) break; // 如果取出的状态是终点，则搜索结束
 
        for(int i=0;i<4;i++)
        {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
 
            if(0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#' && d[nx][ny] == INF)
            {
                que.push(P(nx,ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gx][gy];
}
 
int main()
{
    scanf("%d%d",&N,&M);
 
    for(int i=0;i<N;i++)
        scanf("%s",maze[i]);
 
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(maze[i][j]=='S')
            {
                sx=i;   // 起点位置
                sy=j;
            }
            if(maze[i][j]=='G')
            {
                gx=i;   // 终点位置
                gy=j;
            }
        }
    }
    int res = bfs();
    printf("%d\n",res);
    return 0;
}