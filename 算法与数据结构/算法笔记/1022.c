#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a,b,d;
    int i = 0;
    scanf("%d %d %d",&a,&b,&d);
    int sum = a+b;
    int ans[31],num = 0;
    do
    {
        ans[num++] = sum % d;
        sum /= d;
    }while(sum != 0);
    for(i = num - 1; i >= 0; i--)
    {
        printf("%d",ans[i]);
    }
    return 0;
}