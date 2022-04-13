#include <iostream>
using namespace std;
void rev(int a[],int i, int j)
{
    int temp;
    if(i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        rev(a,i+1,j-1);
    }
}
int main()
{
    int i, n ,a[100];
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> a[i];
    rev(a,0,n-1);
    for(i = 0; i < n; i++)
    cout << a[i] << " ";
    cout << endl;
    return 0;
}