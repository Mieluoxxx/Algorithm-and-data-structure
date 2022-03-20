#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
const int max = 100010;
int school[max] = {0};
int main()
{
    int n,schID,score,i;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%d %d",&schID,&score);
        school[schID] += score; 
    }
    int k = 1, MAX = -1;
    for(i = 1;i <= n;i++)
    {
        if(school[i] > MAX)
        {
            MAX = school[i];
            k = i;
        }
    }
    printf("%d %d\n",k,MAX);
    return 0;
}