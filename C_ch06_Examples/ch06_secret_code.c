#include <stdio.h>
int main(void)
{
    const int secret_code = 13;
    int code_entered;

    do
    {
        printf("13일의 금요일 공포증 치료 동호회에 들어오려면,\n");
        printf("비밀 코드 번호를 입력하시오:");
        scanf("%d", &code_entered);
    } while (code_entered != secret_code);
    printf("축하합니다. 치료되었습니다.\n");

    return 0;
    
}