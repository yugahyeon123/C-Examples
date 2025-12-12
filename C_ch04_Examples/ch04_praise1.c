#include <stdio.h>
#define PRAISE "You are an extraordinary being."
int main() 
{
    char name[40];

    printf("실례지만 성함이 어떻게 되시는지?\n");
    scanf("%s",name);
    printf("반갑습니다, %s 씨. %s\n", name, PRAISE);

    return 0;

}