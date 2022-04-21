#include <iostream>
#include <algorithm>
#define MAX 101
using namespace std;
int n = 0;
int a[MAX][MAX];
int *maxSum;
int main()
{
    int i, j;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cin >> a[i][j];
        }
    }
    maxSum = a[n];//maxSum指向第n行
    for(i = n-1; i >= 0; --i)
    {
        for(j = 1; j <= i; ++j)
        {
            maxSum[j] = max(maxSum[j], maxSum[j+1]) + a[i][j];
        }
    }
    cout << maxSum[1] << endl;
    return 0;
}