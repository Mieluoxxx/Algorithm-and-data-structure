# 基本算法DFS

深度优先搜索    Depth-First-Search

## DFS原理

老鼠走迷宫  “一路到底、逐步回退(**回溯**)”

## 递归与记忆化

“DFS = 递归”
递归：大事化小，小问题已知，一般给定初始条件
递归例子：f(n) = f(n-1) + f(n-2)

~~~cpp
#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
int fib(int n){
    int cnt++;
    if(n==1||n==2)
        return 1;
    return fib(n-1) + fib(n-2);
}
int main(){
    cout << fib(20);
    cout << " cnt=" << cnt;
}
~~~

### 递归的优化：**记忆法(剪枝)**

~~~cpp
#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
int data[25];
int fib(int n){
    int cnt++;
    if(n==1||n==2){
        data[n] = 1;
    return data[n];    
}
    if(data[n]!=0)
        return data[n];
    data[n] = fib(n-1) + fib(n-2);
    return data[n];
}
int main(){
    cout << fib(20);
    cout << " cnt=" << cnt;
}
~~~

## **自写全排列算法（重点）**

~~~cpp
#include <bits/stdc++.h>
using namespace std;
int a[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
bool vis[20];
int b[20];  //记录一个新的全排列

void dfs(int s, int t){
    if(s == t){ //递归结束，生成一个全排列
        for(int i = 0; i < t; ++i)  cout << b[i] << " ";    //输出一个排列
        cout << endl;   return ;
    }
    for(int i = 0; i < t; i++)
    {
        if(!vis[i]){
            vis[i] = true;
            b[s] = a[i];
            dfs(s+1,t);
            vis[i] = false;//回溯恢复
        }
    }
}
int main()
{
    int n = 3;
    dfs(0,n);//前n个数的全排列
    return 0;
}
~~~

O(n^4)需要优化

## 基本DFS代码

~~~cpp
#include <bits/stdc++.h>
using namespace std;
const int n 10;
char mp[n+2][n+2];

bool vis[n+2][n+2]; //判断是否走过，具有记忆功能
int ans = 0;
int cnt = 0;
bool dfs(int i, int j)
{
    if(i < 0 || i > n-1 || j < 0 || j>n-1)  return true；
    if(solve[i][j] == 1)  return true;    //如果已经搜过了，说明正在兜圈子，走不去。
    if(solve[i][j] == 2)  return false    //已经算过了
    if(vis[i][j])   return false;
    cnt++;  //统计dfs()了多少次
    vis[i][j] = true;   //标记已搜索
    if(mp[i][j]=='L')
    {
        if(dfs(i,j-1)){solve[i][j] = 1; return true;}
        else    {solve[i][j] = 2;   return false;}
    }
    if(mp[i][j]=='R')
    {
        if(dfs(i,j-1)){solve[i][j] = 1; return true;}
        else    {solve[i][j] = 2;   return false;}
    }
    if(mp[i][j]=='U')    
    {
        if(dfs(i,j-1)){solve[i][j] = 1; return true;}
        else    {solve[i][j] = 2;   return false;}
    }
    if(mp[i][j]=='D')    
    {
        if(dfs(i,j-1)){solve[i][j] = 1; return true;}
        else    {solve[i][j] = 2;   return false;}
    }
}
int main(){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> mp[i][j];    //读取迷宫图
    for(int i = 0; i < n; i++)  //对每个点，判断是否能走出去
        for(int j = 0; j < n; j++){
            memset(vis,0,sizeof(vis));  //搜索每个点前，都清空vis[]
            if(dfs(i,j))    ans++;  //点vis[][]能走出去，统计答案
        }
    cout << "ans=" << ",cnt=" << cnt << endl;
    return 0;
}
~~~

### 复杂度分析

O(n^2)需要优化

### 回溯与路径标记

用不着对每一个点做一次dfs()
走同一条路径上所有点都能走出迷宫

如何标记一条DFS路径？   --回溯

## DFS框架

~~~cpp
ans;
void dfs(层数，其他参数)
{
    if(出局判断)
    {
        更新答案;
        return ;
    }
    (剪枝)
    for(枚举下一层可能的情况)
        if(used[i] == 0){
            used[i] = 1;
            def(层数+1,其他参数);
            used[i] = 0;
        }
    return ;
}
~~~
