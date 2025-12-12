#include <stdio.h>
#include <string.h>
int main(void)
{
   char First_name[50];

   printf("이름을 입력해주새요:\n");
   scanf("%s",First_name);
   
   int width = strlen(First_name) + 3;

   printf("a.\"%s\"\n", First_name);
   printf("b.\"%20s\"\n", First_name);
   printf("c.\"%-20s\"\n", First_name);
   printf("d.\"%*s\"\n", width, First_name);

   return 0;
   
}