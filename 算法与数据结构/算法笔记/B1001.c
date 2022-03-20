#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int m = 0;
    int n = 0;
    int i = 0;
    scanf("%d",&m);
    while(n != 1)
    {
        if(m % 2)
        {
            n = (3*m+1)/2;
            i++;
        }
        else 
        {
            n = m / 2;
            i++;
        }
        m = n;
    }
    printf("%d",i);
    return 0;
}
