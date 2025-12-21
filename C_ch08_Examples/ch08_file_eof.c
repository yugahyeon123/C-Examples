#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int ch;
    FILE * fp;
    char fname[50];

    printf("파일 이름을 입력하시오:");
    scanf("%s", fname);
    
    fp = fopen(fname, "r");
    if (fp == NULL)
    {
        printf("파일을 여는 데 실패했다. 안녕!\n");
        exit(1);
    }

    while ((ch = getc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    return 0;
}