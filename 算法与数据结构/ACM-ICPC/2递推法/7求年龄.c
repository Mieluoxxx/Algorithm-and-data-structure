#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n, age = 10;
    scanf("%d",&n);
    while(--n)
    {
        age += 2; 
    }
    printf("%d",age);
    return 0;
}