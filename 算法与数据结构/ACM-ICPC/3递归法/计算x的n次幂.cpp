#include <iostream>
using namespace std;
#define MOD 10000007
long long Fastpow(int x, int n)
{
    long long ans = 0;
    if(n == 0)  ans = 1;
    else {
        ans = Fastpow(x,n/2);
        ans = ans*ans%MOD;
        if(n % 2 == 1)  ans = ans * x % MOD;
    }
    return ans%MOD;
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << Fastpow(x,n) << endl;
    return 0;
}