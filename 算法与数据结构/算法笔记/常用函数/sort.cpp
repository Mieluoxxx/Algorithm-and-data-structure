#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int a[6] = {9,4,2,5,6,-1};
    //将a[0]~a[6]从小到大排
    sort(a,a+7);
    int i = 0;
    for(i = 0; i < 6; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}