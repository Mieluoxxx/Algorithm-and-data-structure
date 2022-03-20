#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    char c;
    int i,j;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%x%c%x",&i,&c,&j);
        if(c=='+')
            printf("%o\n",i+j);
        else
            printf("%o\n",i-j);
    }
    return 0;
}