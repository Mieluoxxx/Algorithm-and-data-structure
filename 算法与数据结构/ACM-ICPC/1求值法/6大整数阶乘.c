#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()  
{
    int a[10000], i, j, l = 0, s, n;
    scanf("%d",&n);
    a[0] = 1;
    for(i = 1; i <= n; i++)
    {
        s = 0;
        for(j = 0; j <= l; j++)
        {
            s += a[j] * i;
            a[j] = s % 10;
            s /= 10;
        }
        while(s)
        {
            l++;
            a[l] = s % 10;
            s /= 10;
        }
    }
    for(i = l; i >= 0; i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}