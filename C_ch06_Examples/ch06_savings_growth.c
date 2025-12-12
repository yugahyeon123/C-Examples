#include <stdio.h>
#include <math.h>
int main(void)
{
   double Daphne, Deirdre;
   int year;

   for (Daphne = 100, Deirdre = 100, year = 0; 1; year++)
   {
      Daphne = 100 + 100 * 0.1 * year;
      Deirdre = 100 * pow(1 + 0.05, year);
      
      if (Deirdre > Daphne + 100)
      {
         printf("Deirdre의 저축액:%d 걸린 시간:%d", Deirdre, year);
         break;
      }
   }
   return 0;
}