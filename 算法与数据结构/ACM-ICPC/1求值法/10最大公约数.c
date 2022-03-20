#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int gcd(int a, int b)
{
    int r = 0;
    do 
    {
        r = a % b;
        a = b;
        b = r;
    }while(r != 0);
    return a;
}

int main()
{
    int a,b,c,d,e;
    scanf("%d %d %d",&a,&b,&c);
    d = gcd(a,b);
    e = gcd(c,d);
    printf("%d",e);
    return 0;
}