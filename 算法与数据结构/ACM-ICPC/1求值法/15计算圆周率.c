#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double n = 0;
    scanf("%lf", &n);
    double product = 2.0;
    double i = 0.0;
    for(i = 1; i < n; i += 2)
    {
        product *= 1.0*(i+1)*(i+1)/(i*(i+2));
    }
    printf("%.6lf", product);
    return 0;
}