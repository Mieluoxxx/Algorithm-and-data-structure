#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char s1[2005],s2[2005];
int a[2005],b[2005],c[2005];
int main()
{
    int la,lb,lc;
    scanf("%s",s1);
    scanf("%s",s2);

    la = strlen(s1);
    lb = strlen(s2);
    int i = 0, j = 0;
    for(i = 0 ;i < la ; i++)
    {
        a[la-i] = s1[i] - '0';
    }
    for(i = 0; i < lb; i++)
    {
        b[lb-i] = s2[i] - '0';
    }
    lc = la + lb;
    

    for(i = 1; i <= la; i++)
    {
        for(j = 1; j <= lb; j++)
        {
            c[i+j-1] += a[i]*b[j];
            c[i+j] += c[i+j-1]/10;
            c[i+j-1] %= 10;
        }
    }
    if(c[lc] == 0 && lc > 0)    lc--;
    for(i = lc; i > 0; i--)
    {
        printf("%d",c[i]);
    }
    return 0;
}