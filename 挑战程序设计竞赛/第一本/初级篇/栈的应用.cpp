#include <stack>
#include <cstdio>
using namespace std;
int main()
{
    stack<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    printf("%d\n",a.top());
    a.pop();    //从栈顶移除
    printf("%d\n",a.top());
    a.pop();
    printf("%d\n",a.top());
    a.pop();
    return 0;
}