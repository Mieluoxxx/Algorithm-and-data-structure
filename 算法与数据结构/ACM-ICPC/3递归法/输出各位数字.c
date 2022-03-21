#include <stdio.h>
void digit(int n)
{
    if(n < 10)  
        printf("%d",n);
    else{
        digit(n/10);
        printf("%d ",n%10);
    }
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    digit(n);
    printf("\n");
    return 0;
}