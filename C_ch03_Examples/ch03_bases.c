#include <stdio.h>
int main(void)
{
    int x = 100;

    printf("10진수 = %d; 8진수 = %o; 16진수 = %x\n",x,x,x);
    printf("10진수 = %d; 8진수 = %#o; 16진수 = %#x\n",x,x,x);

    return 0;
}