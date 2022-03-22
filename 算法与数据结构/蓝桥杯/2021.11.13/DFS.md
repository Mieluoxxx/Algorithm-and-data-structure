# 基本算法DFS

深度优先搜索    Depth-First-Search

## DFS原理

老鼠走迷宫  “一路到底、逐步回退(回溯)”

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

### 递归的优化：记忆法(剪枝)

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

## 自写全排列算法

## 基本DFS代码

## 复杂度分析

## 回溯与路径标记

## DFS框架
