#include <stdio.h>
#include <string.h>
int main(void)
{
   char ch[255];

   printf("문자 입력:");
   for (int i = 0; i < 255; i++)
   {
      scanf("%c", &ch[i]);
      if (ch[i] == '\n')
      {
         ch[i] = '\0';
         break;
      }
   }

   int length = strlen(ch);

   for (int i = length - 1; i >= 0; i--)
   {
      printf("%c", ch[i]);
   }
   return 0;
}