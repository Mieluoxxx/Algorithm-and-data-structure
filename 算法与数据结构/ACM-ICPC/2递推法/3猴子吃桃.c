#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n = 0;
    while(scanf("%d",&n) != EOF)
    {
        if(n == 0) break;
        int i = 0, sum = 1;
        for(i = 1; i < n; i++)
        {
            sum = (sum + 1) * 2;
        }
        printf("%d\n",sum);
    }
    return 0;
}