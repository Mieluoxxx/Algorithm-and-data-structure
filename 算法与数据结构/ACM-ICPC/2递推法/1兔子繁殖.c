#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int i,n,preNum =1,curNum = 1, temp;
    scanf("%d", &n);
    for(i = 3; i <= n; i++)
    {
        temp = curNum;
        curNum = curNum + preNum;
        preNum = temp;
    }
    printf("%d\n",curNum);
    return 0;
}