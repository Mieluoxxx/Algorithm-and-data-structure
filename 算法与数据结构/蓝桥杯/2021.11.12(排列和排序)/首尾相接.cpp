// 用C++写正解
#include <bits/stdc++.h>
using namespace std;
string a[21];//以字符形式存储20个字符
bool cmp(string a, string b)
{
    return a + b >  b + a;
}
int main()
{
    int n;  cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n, cmp);
    for(int i = 0; i < n; i++)
        cout << a[i];
    return 0;
}
