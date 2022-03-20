#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int day(int y, int m, int d)
{
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int i,sum=0;
    for(i=0;i<m-1;i++)
        sum = sum+a[i];
    if(m>2)
        if((y%4==0&&y%100!=0)||(y%400))
            sum++;
    sum += d;
    return (sum);
}

int main()
{
    int y,m,d;
    scanf("%d/%d/%d",&y,&m,&d);
    printf("%d\n",day(y,m,d));
    return 0;
}