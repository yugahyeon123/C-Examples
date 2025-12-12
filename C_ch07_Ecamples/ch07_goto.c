#include <stdio.h>

int main() {
    printf("시작\n");

    goto jump;

    printf("이 문장은 실행되지 않습니다.\n");

jump:
    printf("여기로 점프!\n");

    return 0;
}