#include <stdio.h>
int main(void)
{
    int n = 0;
    size_t intsize;

    intsize = sizeof (int);
    printf("n = %d, n은 %zd바이트이다; 모든 int형 값은 %zd바이트이다.\n", n, sizeof n, intsize);

    return 0;

}