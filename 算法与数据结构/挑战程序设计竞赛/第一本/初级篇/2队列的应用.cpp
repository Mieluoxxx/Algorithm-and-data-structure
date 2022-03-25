#include <queue>
#include <cstdio>
using namespace std;
int main()
{
    queue<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    printf("%d\n",a.front());
    a.pop();
    printf("%d\n",a.front());
    a.pop();
    printf("%d\n",a.front());
    a.pop();
    return 0;
}