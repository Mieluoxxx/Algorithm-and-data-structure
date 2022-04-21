#include <iostream>
using namespace std;
const int v[6] = {100, 50, 20, 10, 5 ,1};
int main()
{
    int N = 0, i = 0;
    int a[6] = {0};
    cin >> N;
    while(N>0)
    {
        if(N/v[i]!=0)    
        {
            a[i] = N/v[i];
            N -= a[i] * v[i];
        }
        i++;
    }
    for(i = 0; i < 6; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}