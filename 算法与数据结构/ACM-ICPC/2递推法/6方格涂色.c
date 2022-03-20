#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    long long a[51];
    a[1] = 3;
    a[2] = 6;
    a[3] = 6;
    for(i = 4; i < 51; i++)
        a[i] = 2 * a[i-2] + a[i-1];
    while(scanf("%d",&n)!=EOF)
        printf("%lld\n",a[n]);
    return 0;
}