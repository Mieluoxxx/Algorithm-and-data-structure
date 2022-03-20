#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int x, k = 1;
    double oil, dis = 500;
    scanf("%d", &x);
    if(x <= 500)
        oil = x;
    else
    {
        do
        {
            ++k;
            dis += 500.0 / (2 * k - 1);
            oil = 500 * k;
        }while(dis < x);
        oil = 500 * k + (x - dis) * (2 * k - 1);
    }
    printf("%.2f\n",oil);
    return 0;
}