#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int isprime(int n)
{
    int i = 0;
    int m = sqrt(n);
    for(i = 2; i <= m; i++)
        if(n%i==0)  return 0;
    return 1;
}
int main()
{
    int n, m, i;
    scanf("%d %d",&m,&n);
    if(m % 2)
    {
        for(i = m; i <= n; i += 2)
        {
            if(isprime(i) && isprime(i+2) && i + 2 <= n)    printf("%d %d\n",i,i+2);
        }
    }
    else
    {
        for(i = m + 1; i <= n; i += 2)
        {
            if(isprime(i) && isprime(i+2) && i + 2 <= n)    printf("%d %d\n",i,i+2);
        }
    }
    return 0;
}