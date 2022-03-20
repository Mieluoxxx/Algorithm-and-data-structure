#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max(int a, int b, int c)
{
    int max = a;
    if(max < b) max = b;
    if(max < c) max = c;
    return max;
}
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    printf("%d",max(x,y,z));
    return 0;
}