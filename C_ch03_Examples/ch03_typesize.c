#include <stdio.h>
int main(void)
{
    printf("int형의 크기: %zd바이트\n", sizeof(int));
    printf("char형의 크기:%zd바이트\n", sizeof(char));
    printf("long형의 크기: %zd바이트\n", sizeof(long));
    printf("double형의 크기: %zd바이트\n", sizeof(double));
    printf("long double형의 크기: %zd바이트\n",sizeof(long double));

    return 0;
}