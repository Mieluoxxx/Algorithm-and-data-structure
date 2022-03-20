#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int a[2001];
int cmp(const void *x, const void *y)
{
    return *(int*)x-*(int*)y;
}
int main()
{
    int len = 0;
    int sum = 0;
    while(scanf("%d",&a[len])&& a[len])
    {
        sum += a[len];
        len++;
    }
    qsort(a,len,sizeof(int),cmp);
    double middle = (len%2)?a[len/2]:((a[len/2]+a[len/2-1]/2.0));
    double avg = sum*1.0/len;
    printf("%s\n",middle>avg?"YES":"NO");
    return 0;
}