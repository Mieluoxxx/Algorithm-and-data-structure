#include <iostream>
using namespace std;
struct note{
    int x;//横坐标
    int y;//纵坐标
    int f;//队列中的编号
    int s;//步数
};
int fx[5] = {0,0,1,0,-1};//方向
int fy[5] = {0,1,0,-1,0};
int main()
{
    struct note que[2501];//队列扩展
    int a[51][51] = {0}, book[51][51] = {0};
    int head, tail;
    int i,j,k,n,m,startx,starty,p,q,tx,ty,flag;
    cin >> n >> m;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> startx >> starty;
    //队列初始化
    head = 1;
    tail = 1;
    //往队列插入迷宫入口坐标
    que[tail].x = startx;
    que[tail].y = starty;
    que[tail].f = 0;
    que[tail].s = 0;
    tail++;
    book[startx][starty] = 1;
    flag = 0;//标记是否到达目的地
    //当队列不为空时循环
    while(head<tail)
    {
        //枚举四个方向
        for(k = 1; k < 5; k++)
        {
            //计算下一个点的坐标
            tx = que[head].x + fx[k];
            ty = que[head].y + fy[k];
            //判断是否越界
            if(tx < 1 || tx > n || ty < 1 || ty > m)
                continue;
            if(a[tx][ty]==0 && book[tx][ty] == 0)
            {
                //把这个点标记为已走过
                //宽搜每个点只入队一次，所以不需要book还原
                book[tx][ty] = 1;
                //插入新的点到队列
                que[tail].x = tx;
                que[tail].y = ty;
                que[tail].s = que[head].s+1;
                tail++;
            }
        }
        if(flag == 1)
            break;
        head++;
    }
    cout << que[tail-1].s << endl;
    return 0;
}