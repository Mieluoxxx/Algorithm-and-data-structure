//去重+排序
#include <iostream>
using namespace std;
int a[1001] = {0};
int main()
{
    int n = 0,t = 0,cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> t;
        a[t] = 1;
    }
    for(int i = 1; i <= 1000; i++)
    {
        if(a[i] != 0)   cnt++;
    }
    cout << cnt << endl;
    for(int i = 1; i <= 1000; i++)
    {
        if(a[i] == 1) cout << i << " ";
    }
    cout << endl;
    return 0;
}