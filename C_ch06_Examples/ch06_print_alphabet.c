#include <stdio.h>
int main(void)
{
    char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','I','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int n = 26, i;
    for (i = 0; i<n; i++)
    {
        printf("%c", alphabet[i]);
    }
    return 0;
}