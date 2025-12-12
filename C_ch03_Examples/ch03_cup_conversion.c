#include <stdio.h>
int main() 
{
    double cup;
    double pint;
    double ounces;
    double tablesponns;
    double teaspoons;

    printf("cup 단위: ");
    scanf("%lf",&cup);

    pint = cup / 2;
    ounces = cup * 8;
    tablesponns = ounces * 2;
    teaspoons = tablesponns * 3;

    printf("pints = %lf\n",pint);
    printf("ounces = %lf\n",ounces);
    printf("tablespoons = %lf\n",tablesponns);
    printf("teaspoons = %lf\n",teaspoons);

    return 0;

}