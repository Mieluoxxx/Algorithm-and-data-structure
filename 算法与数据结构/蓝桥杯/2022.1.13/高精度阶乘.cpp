#include <iostream>
#include <cstring>
using namespace std;
int A[10000] = {0};
int main()
{
    int n;
    while(cin >> n)
    {
        memset(A, 0, sizeof(A));
        A[0] = 1;
        for(int i = 1; i <= n; i++)
        {
            int carry = 0;
            for(int j = 0; j < 10000; j++)
            {
                A[j] = A[j] * i + carry;
                carry = A[j] / 10;
                A[j] = A[j] % 10;
            }
        }
        int last;
        for(int i = 10000 - 1; i >= 0; i--)
        {
            if(A[i] != 0)
            {
                last = i;
                break;
            }
        }
        for(int i = last; i >= 0; i--)
            cout << A[i];
        cout << endl;   
    }
    return 0;
}