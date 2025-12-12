#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;

    printf("알파벳 글자를 입력하시오.");
    printf("그러면 내가\n그 글자로 시작하는 동물 이름을 하나 대겠습니다.\n");
    printf("글자를 하나 입력하시오(끝나려면 #):\n");

    while ((ch = getchar()) != '#')
    {
        if ('\n' == ch)
            continue;
        if (islower(ch))
            switch (ch)
            {
                case 'a' :
                    printf("argali, 아시아의 야생 양\n");
                    break;
                case 'b' :
                    printf("babirusa, 말레이 반도의 야생 돼지\n");
                    break;
                case 'c' :
                    printf("coati, 미국 너구리\n");
                    break;
                case 'd' :
                    printf("deman, 물에 사는, 두더지 비슷한 동물\n");
                    break;
                case 'e' :
                    printf("echidna, 바늘두더지\n");
                    break;
                case 'f' :
                    printf("fisher, 갈색을 띤 담비\n");
                    break;
                default :
                    printf("에이, 너무 어렵다!\n");
            }
            else
                printf("나는 소문자만 알아듣는다.\n");
            while (getchar() != '\n')
                continue;
            printf("다른 글자를 하나 입력하시오(끝내려면 #):\n");
    }
    printf("안녕\n");
    return 0;
    
}