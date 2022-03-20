#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int *a = NULL;
    a = (int *)malloc(n * sizeof(int));
    int i = 0;
    for(i = 0;i < n;i++)
    {
        scanf("%d",a+i);
    }
    int m = 0;
    scanf("%d",&m);
    for(i = 0;i < n;i++)
    {
        if(a[i]==m)
        {
            printf("%d\n",i);
            break;
        }
    }
    if(i == n) printf("-1\n");
    free(a);
    return 0;
}