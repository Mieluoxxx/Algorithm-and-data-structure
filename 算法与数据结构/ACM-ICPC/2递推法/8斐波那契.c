#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int fib[100],sum = 2;
    int n = 0;
    scanf("%d",&n);
    fib[1] = 1;
    fib[2] = 1;
    for(int i = 3; i <= n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        sum += fib[i];
    }
    printf("%d",sum);
    return 0;
}