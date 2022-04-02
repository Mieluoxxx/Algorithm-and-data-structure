#include <iostream>
using namespace std;
int main()
{
    int a[11] = {0},i,j,t;
    for(i = 1; i<=5; i++)
    {
        cin >> t;
        a[t]++;
    }
    for(i = 1; i <= 10; i++)
        for(j = 1; j <= a[i]; j++)
            cout << a[i] << " ";
    return 0;
    return 0;
}