#include<stdio.h>
int cows(int n)
{
    if(n<=4)    return n;
    else return cows(n-1)+cows(n-3);
}
int main()
{
    int n = 0;
    scanf("%d",&n);
    int sum = cows(n);
    printf("%d\n",sum);
    return 0;
}