#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
bool cmp(string a, string b)
{
    return a + b >  b + a;
}
int main()
{
    int n;  
    while(cin >> n)
    {
        string a[21];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a+n, cmp);
        for(int i = 0; i < n; i++)
            cout << a[i];
        cout << endl;
    }
    return 0;
}
