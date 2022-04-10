#include <iostream>
using namespace std;
struct queue{
    int data[1000];
    int head;
    int tail;
};
struct stack{
    int data[10];
    int top;
};

int main()
{
    struct queue q1,q2;
    struct stack s;
    int book[10];
    int i, t;

// 初始化队列q1,q2为空，此时两人手中都还没有牌
        q1.head = 1;    q2.head = 1;
        q1.tail = 1;    q2.tail = 1;

//初始化栈s为空，最开始的时候桌上没有牌
        s.top = 0;
    for(i = 1; i <= 9; i++)
        book[i] = 0;
    //依次向队列中插入6个数
    //小哼手中的牌
    for(i = 1; i <= 6; i++)
    {
        cin >> q1.data[q1.tail];
        q1.tail++;
    }
    //小哈
    for(i=1;i<=6;i++)
    {
        cin >> q2.data[q2.tail];
        q2.tail++;
    }
    while(q1.head<q1.tail && q2.head<q2.tail)
    {
        t = q1.data[q1.head];//小哼出牌
        //判断小哼当前打出的牌是否能赢牌
        if(book[t]==0)  //表明桌上没有牌面为t的牌
        {
            //小哼此轮没有赢牌
            q1.head++;//小哼已经出牌，牌出队
            s.top++;
            s.data[s.top] = t;//再把打出的牌放在桌上，入栈
            book[t] = 1;    //标记桌上现在已经有牌面为t的拍
        }
        else
        {
            //小哼此轮可以赢牌
            q1.head++;//出队
            q1.data[q1.tail] = t;//
            q1.tail++;
            while(s.data[s.top] != t)
            {
                book[s.data[s.top]] = 0;//取消标记
                q1.data[q1.tail] = s.data[s.top];//依次放入队尾
                q1.tail++;
                s.top--;//栈中少一张牌
            }
        }
        t = q2.data[q2.head];//小哈出牌
        //判断小哼当前打出的牌是否能赢牌
        if(book[t]==0)  //表明桌上没有牌面为t的牌
        {
            //小哼此轮没有赢牌
            q2.head++;//小哼已经出牌，牌出队
            s.top++;
            s.data[s.top] = t;//再把打出的牌放在桌上，入栈
            book[t] = 1;    //标记桌上现在已经有牌面为t的拍
        }
        else
        {
            //小哼此轮可以赢牌
            q2.head++;//出队
            q2.data[q2.tail] = t;//
            q2.tail++;
            while(s.data[s.top] != t)
            {
                book[s.data[s.top]] = 0;//取消标记
                q2.data[q2.tail] = s.data[s.top];//依次放入队尾
                q2.tail++;
                s.top--;//栈中少一张牌
            }
        }
    }

    if(q2.head == q2.tail)
    {
        cout << "小哼win" << endl;
        cout << "小哼目前的手牌是：";
        for(i = q1.head; i <= q1.tail-1; i++)
            cout << " " << q1.data[i];
        if(s.top > 0)//如果桌上还有牌
        {
            cout << endl;
            cout << "桌上的牌是：";
            for(i = 1; i <= s.top; i++)
            {
                cout << " " << s.data[i];
            }
            cout << endl;
        }
        else
            cout << endl << "桌上没牌了";
    }
    else
    {
        cout << "小哈win" << endl;
        cout << "小哈目前的手牌是：";
        for(i = q2.head; i <= q2.tail-1; i++)
            cout << " " << q2.data[i];
        if(s.top > 0)//如果桌上还有牌
        {
            cout << endl;
            cout << "桌上的牌是：";
            for(i = 1; i <= s.top; i++)
            {
                cout << " " << s.data[i];
            } 
            cout << endl;
        }
        else
            cout << endl << "桌上没牌了";
    }

    return 0;
}