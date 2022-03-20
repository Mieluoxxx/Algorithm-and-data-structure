#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int x = 0, y = 0;
    scanf("%d",&x);
    y = x<0?1 : x>0?-1 : 0;
    printf("%d",y);
    return 0;
}