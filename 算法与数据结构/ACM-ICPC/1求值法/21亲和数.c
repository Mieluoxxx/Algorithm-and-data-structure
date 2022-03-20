#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Qin(int x)
{
    int i = 0;
    int sum = 0;
    for(i = 1; i < x; i++)
    {
        if(x % i == 0) sum += i;
    }
    return sum;
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int m,n;
        scanf("%d %d",&m,&n);
        int a,b;
        a = Qin(m);
        b = Qin(n);
        if(m == b && n == a)  printf("yes\n");
        else printf("no\n");
    }
    return 0;
}