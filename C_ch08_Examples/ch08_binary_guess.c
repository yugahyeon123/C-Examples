#include <stdio.h>

int main(void) {
    int lower = 1;
    int upper = 100;
    int prediction;
    char response;

    printf("수 맞추기 게임을 시작하겠습니다.\n");
    printf("1부터 100 사이의 숫자를 생각하고 y/n로 대답하세요.\n");

    while (1) {
        prediction = (lower + upper) / 2;
        printf("당신이 생각한 숫자가 %d입니까? (y/n): ", prediction);

        response = getchar();
        getchar();

        if (response == 'y') {
            printf("맞췄다.\n");
            break;
        } else if (response == 'n') {
            printf("%d보다 작습니까? (y/n): ", prediction);
            response = getchar();
            getchar(); 

            if (response == 'y') {
                upper = prediction - 1;
            } else {
                lower = prediction + 1;
            }
        } else {
            printf("y 또는 n으로만 입력해주세요.\n");
        }
    }

    return 0;
}