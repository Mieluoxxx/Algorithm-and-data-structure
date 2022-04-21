#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n = 0, max = 0, i = 0, j = 0;
    cin >> n;
    cin >> max;
    int a[n];
    int b[n];
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    i = 0;
    for(i = 0; i < n; i++)
    {
        max -= a[i];
        if(max > 0)
        {
            j++;
            b[i] = 1;
        }
    }
    for(i = 0; i < j; i++)
    {
        if(b[i])    cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}