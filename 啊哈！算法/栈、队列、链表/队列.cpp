#include <iostream>
using namespace std;
int main()
{
    int q[102] = {0,6,3,1,7,5,8,9,2,4},head,tail;
    int i;
    //初始化队列
    head = 1;
    tail = 10;//队列不为空的时候执行循环
    while(head<tail)
    {
        //打印队首并将队首出队
        cout << q[head];
        head++;
        //现将新队首加到队尾
        q[tail] = q[head];
        tail++;
        //再将队首出队；
        head++;
    }
    cout << endl;
    return 0;
}

