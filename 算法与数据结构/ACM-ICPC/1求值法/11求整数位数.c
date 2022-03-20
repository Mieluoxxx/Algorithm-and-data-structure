#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
    int n = 0, i = 0, j = 0;
    int arr[6];
    scanf("%d",&n);
    int s = n;
    while(s)
    {
        arr[i] = s % 10;
        s /= 10;
        i++;
    }
    printf("%d\n",i);
    for(j = 0; j < i; j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}