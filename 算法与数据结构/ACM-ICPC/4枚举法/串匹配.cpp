#include <iostream>
using namespace std;
void getnext(char *t, int *next, int slength)
{
    int i = 1, j = 0;
    next[1] = 0;
    while(i < slength)
    {
        if(j==0||t[i]==t[j])
        {
            ++i;
            ++j;
            next[i] = j;
        }
        else j = next[j];
    }
}
int indexkmp(char *s, char *t, int pos, int tlength, int slength, int *next)
{
    int i = pos, j = 1;
    while(i <= slength && j <= tlength)
    {
        if(j==0||s[i]==t[j])
        {
            ++i;
            ++j;
        }
        else j = next[j];
    }
    if(j>tlength) return i-tlength;
    else return -1;
}
int main()
{
    int locate, tlength, slength, next[256];
    char s[256], t[256];
    slength = strlen(gets(s+1));
    tlength = strlen(gets(t+1));
    getnext(t, next, tlength);
    locate = indexkmp(s, t, 0, tlength, slength, next);
    printf("%d\n", locate);
    return 0;
}