#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int *a;
    a = (int*)malloc(sizeof(int)*n);
    a[1] = 2;
    a[2] = 4;
    for(i = 3; i <= n; i++)
    {
        a[i] = a[i-1] + i;
    }
    printf("%d", a[n]);
    return 0;
}