#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int* a = NULL;
    a = (int*)malloc(n*sizeof(int));
    int i = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max = a[0];
    for(i = 0;i < n;i++)
    {
        if(max<a[i])    max = a[i];
    }
    printf("%d\n",max);
    free(a);
    return 0;
}