# DFS（1）

  输入：n = 4  
       a = {1, 2, 4, 7}
       k = 13
  输出:Yes {13 = 2 + 4 + 7}

~~~cpp
//  输入
int a[MAX_N];
int n, k;
//已经从前i项得到和sum,然后对于i项之后的进行分支
bool dfs(int i, int sum)
{
    //如果前n项都计算过了，则返回sum值与k是否相等
    if(i == n)  return sum == k;
    //不加上a[i]的情况
    if(dfs(i+1, sum) == true) return true;
    //加上a[i]的情况
    if(dfs(i+1, sum+a[i]))  return true;
    //无论是否加上a[i]都不能凑成k则返回false
}
void solve()
{
    if(dfs(0,0))    printf("Yes\n");
    else    printf("No\n");
}
~~~
