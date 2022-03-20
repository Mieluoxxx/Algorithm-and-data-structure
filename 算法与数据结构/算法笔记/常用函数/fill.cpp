#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int i = 0;
    int a[5] = {1,2,3,4,5};
    fill(a,a+5,233);
    for(i = 0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}