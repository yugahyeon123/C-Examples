#include <stdio.h>
#include <string.h>
int main(void) 
{
    
    char FirstName[20], LastName[20];
    int First_width, Last_width; 
    
    printf("성 과 이름을 입력하세요:\n");
    scanf("%s %s", FirstName, LastName);

    First_width = strlen(FirstName);
    Last_width = strlen(LastName);

    printf("%s %s\n%*d %*d\n", FirstName, LastName, First_width, First_width, Last_width, Last_width);
    printf("%s %s\n%-*d %-*d\n", FirstName, LastName, First_width, First_width, Last_width, Last_width);

    return 0;

}