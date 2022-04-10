#include <iostream>
using namespace std;
const int mod = 10000;
int fastPow(int a, int n)
{
    int base = a;
    int ans = 1;
    while(n)
    {
        if(n&1) ans = ans * base % mod;
        base = (base*base) % mod;
        n >>= 1;
    }
    return ans;
}
int main()
{
    cout << "ans=" << fastPow(2022, 1e9) << endl;
    return 0;
}