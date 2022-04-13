#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    char s[101];
    int i, len, mid, next, top;
    getline(cin,a); //读入一行字符串
    mid = len/2-1;

    top = 0;//栈的初始化
    //将mid前的字符依次入栈
    for(i = 0; i <= mid; i++)
    {
        s[++top] = a[i];
    }
    if(len%2==0)
        next = mid+1;
    else
        next = mid+2;
    //开始匹配
    for(i = next; i <= len-1; i++)
    {
        if(a[i] != s[top])
            break;
        top--;
    }
    //如果top的值为0，泽说明站内所有的字符都被一一匹配了
    if(top==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}