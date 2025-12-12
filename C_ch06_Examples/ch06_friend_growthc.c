#include <stdio.h>
int main(void)
{
   int Rabund = 5;

   for (int week = 1; Rabund < 150; week++)
   {
      Rabund = (Rabund - week) * 2;
      
      printf("%d주차별 친구 수:%d\n", week, Rabund);
   }
   return 0;
}