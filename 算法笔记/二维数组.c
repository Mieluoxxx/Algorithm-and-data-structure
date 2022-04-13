#include <stdio.h>
int main()
{
    int i,j = 0;
    char str[1][10];
    for(i=0;i<1;i++)
    {
        for(j = 0;j<10;j++)
        {
            str[i][j]=getchar();
        }  
        getchar();
    }
    for(i=0;i<1;i++)
    {
        for(j = 0;j<10;j++)
        {
            putchar(str[i][j]);
        }  
        putchar('\n');
    }
    return 0;
}