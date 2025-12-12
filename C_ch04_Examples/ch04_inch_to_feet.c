#include <stdio.h>
int main(void) 
{
    float inch;
    float Feet;
    char name[20];

    printf("키를 인치 단위로 그리고 이름을 입력해주세요:\n");
    scanf("%f %s",&inch, name);

    Feet = inch / 12;

    printf("%s 씨, 당신의 키는 %.3f 피트 입니다.", name, Feet);

}