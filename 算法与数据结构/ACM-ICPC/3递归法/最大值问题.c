#include <stdio.h>
#include <stdlib.h>
double maximum(double a[],int n)
{
    int i = 0;
    double max = 0.0;
    if(n==1)   return a[0];
    max = maximum(a,n-1);
    if(max < a[n-1]) 
        max = a[n-1];
    return max;
}
int main()
{
    int i,n;
    scanf("%d",&n);
    double *a;
    a = (double*)malloc(n*sizeof(double));
    for(i=0;i<n;i++)
        scanf("%lf",&a[i]);
    printf("%.2lf",maximum(a,n));
    printf("\n");
    return 0;
}