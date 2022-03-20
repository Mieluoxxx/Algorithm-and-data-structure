#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a + b <= c || a + c <= b || b + c <= a)
        printf("无法构成三角形");
    else
    {
        double p = 0.0;
        p = 0.5 * (a+b+c);
        double s = 0.0;
        s = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("%lf",s);
    }
    return 0;
}