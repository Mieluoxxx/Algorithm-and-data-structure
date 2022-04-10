#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> table;
    int n, m;
    while(cin >> n >> m)
    {
        table.clear();
        for(int i = 0; i < 2 * n; i++)  
            table.push_back(i);//初始化

        int pos = 0;//记录当前位置
        for(int i = 0; i < n; i++)
        {
            pos = (pos + m - 1) % table.size();//圆桌是个环，取余处理
            table.erase(table.begin() + pos);//赶走坏人，table人数-1     
        }

        int j = 0;
        for(int i = 0; i < 2 * n; i++)//打印预先位置
        {
            // if(!(i % 50) && i)  cout << endl;//50个字母为一行  

            if(j<table.size() && i == table[j])//table留下的都是好人
            {
                j++;
                cout << "G";
            }
            else    cout << "B";
        }
        cout << endl;
    }
        return 0;
}