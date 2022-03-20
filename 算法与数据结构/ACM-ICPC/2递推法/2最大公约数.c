#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int gcd(int a, int b)
{
    while(b > 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",gcd(m,n));
    return 0;
}