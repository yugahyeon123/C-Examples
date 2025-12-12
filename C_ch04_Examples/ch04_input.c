#include <stdio.h>
int main() 
{
    int age;
    float assets;
    char pet[30];

    printf("나이, 재산, 좋아하는 애완동물을 입력하시오.\n");
    scanf("%d %f", &age, &assets);
    scanf("%s", pet);
    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;

}