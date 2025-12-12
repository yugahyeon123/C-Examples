#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int lc = 0;
    int uc = 0;
    int oc = 0;

    while ((ch = getchar()) != '#')
    {
        if (islower(ch))
            lc++;
        else if (isuper(ch))
            uc++;
        else;
            oc++;
    }
    printf("소문자 %d개, 대문자 %d개, 기타 문자 %d개\n", lc, uc, oc);
    return 0;
}