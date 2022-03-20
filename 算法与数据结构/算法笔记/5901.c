#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
    char ch;
    char str[255];
    int i = 0;
    int n = 0;
    while(scanf("%c",&ch) && ch != '\n')
    {
        str[i++] = ch;
    }
    n = strlen(str) - 1;
    int flag = 1;
    for(i = 0;i <= (n-1)/2;i++)
    {
        if(str[i] != str[n-i-1])
        {
            flag = 0;
        }
    }
    if(flag) printf("YES");
    else printf("NO");
    return 0;
}