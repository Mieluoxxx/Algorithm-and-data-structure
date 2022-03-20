#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
    char str[90];
    char ch;
    int i = 0;
    while(scanf("%c",&ch)&&ch != '\n')
    {
        str[i++] = ch;
    }
    int len = strlen(str),r=0,h=0;
    char ans[90][90];
    for(i = 0;i<len;i++)
    {
        if(int(str[i]) != 32)
        ans[r][h++] = str[i];
        else
        {
            ans[r][h] = '\0';
            r++;
            h = 0;
        }
    }
    for(i = r; i >= 0; i--)
    {
        printf("%s",ans[i]);
        if(i > 0)
        printf(" ");
    }
    return 0;
}