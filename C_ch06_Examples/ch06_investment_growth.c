#include <stdio.h>
int main(void)
{
   double ChuckieLucky = 1000000.0;
   int year = 0;

   while (ChuckieLucky > 0)
   {
      ChuckieLucky = ChuckieLucky * 1.08 - 100000;
      year++;
   }

   printf("%d년이 걸렸다.", year);
   return 0;

}