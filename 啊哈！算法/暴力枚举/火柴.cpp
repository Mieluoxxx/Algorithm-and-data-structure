#include <iostream>
using namespace std;
int f[10]={6,2,5,5,4,5,6,3,7,6};
int func(int x)
{
    int num = 0;
    while(x/10!=0)
    {
        num += f[x%10];
        x /= 10;
    }
    num += f[x];
    return num;
}

int main()
{
    int a,b,c,n,sum = 0;
    cin >> n;
    //枚举a和b
    for(a=0; a<11111; a++)
    {
        for(b=0; b<11111; b++)
        {
            c = a + b;
            if(func(a) + func(b) + func(c) == n-4)
            {
                printf("%d+%d=%d\n",a,b,c);
                sum++;
            }
        }
    }
    cout << sum << endl;
    return 0;
}