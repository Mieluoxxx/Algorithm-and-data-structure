#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int Max(int a, int b) 
{
    if(a > b)   return a;
    else  return b;
}
char s1[505], s2[505];
int a[505], b[505], c[505];
int main()
{
    int la, lb, lc;
    while(~scanf("%s %s",s1,s2))
    {

            la = strlen(s1);
            lb = strlen(s2);
            int i = 0;
            for(i = 0; i < la; i++)
            {
                a[la-i] = s1[i] - '0';
            }
            for(i = 0; i < lb; i++)
            {
                b[lb-i] = s2[i] - '0';
            }
            if(a[la] == 0 && b[lb] == 0)
            {
                exit(0);
            }
            else 
            {
                lc = Max(la,lb) + 1;
                for(i = 1; i <= lc; i++)
                {
                    c[i] += a[i] + b[i];
                    c[i+1] = c[i] / 10;
                    c[i] = c[i] % 10;
                }
                if(c[lc] == 0 && lc >0) lc--;
                for(i = lc; i > 0; i--)
                    printf("%d\n",c[i]);
            }
    }
    return 0;
}
