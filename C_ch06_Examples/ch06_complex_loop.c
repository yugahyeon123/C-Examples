#include <stdio.h>
int main(void)
{
   int k;

   for (k = 1, printf("%d: 안녕\n", k); printf("k = %d\n", k), k * k < 26; k += 2, printf("이제 k는 %d\n", k))
   {
    printf("루프 몸체에서 k는 %d\n", k);
   }
   return 0;
}