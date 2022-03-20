#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Factorial(int n)
{
    int product = 1;
    int i = 0;
    for(i = 1; i <= n; i++)
    {
        product *= i;
    }
    return product;
}

int main()
{
    int n,i,sum = 0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum += Factorial(i);
    printf("%d",sum);
    return 0;
}