#include <stdio.h>
int main(void)
{
   char First_name[50], Last_name[50];

   printf("이름을 입력해주새요:\n");
   scanf("%s",First_name);
   
   printf("성을 입력해주세요.\n");
   scanf("%s",Last_name);

   printf("당신의 이름은 %s 입니다.\n", First_name);
   printf("당신의 성은 %s 입니다.\n", Last_name);
}