#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    if(n%4==0&&n%100!=0||n%400==0) printf("Yes");
    else printf("No");
    return 0;
}