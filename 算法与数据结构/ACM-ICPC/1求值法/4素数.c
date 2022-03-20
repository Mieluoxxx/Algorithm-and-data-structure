#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int isprime(int n)
{
    int i = 0;
    int m = sqrt(n);
    for(i = 2; i <= m; i++)
        if(n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n = 0;
    scanf("%d",&n);
    if(isprime(n))  printf("yes");
    else printf("no");
    return 0;
}