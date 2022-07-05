#include <iostream>
using namespace std;
int main()
{
    int f[10000];
    f[1] = 3;
    f[2] = 7;
    int n = 0;
    cin >> n;
    for(int i = 3; i <= n; i++)
    {
        f[i] = 2 * f[i-1] + f[i-2];
    }
    cout << f[n] << endl;
    return 0;
}