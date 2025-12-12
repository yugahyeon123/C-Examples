#include <stdio.h>
int main(void)
{
    int feet, fathoms;

    fathoms = 2;
    feet = 6 * fathoms;
    printf("%d fathoms는 %d feet다!\n",fathoms, feet);
    printf("맞아, %d feet야.\n",6 * fathoms);

    return 0;
}