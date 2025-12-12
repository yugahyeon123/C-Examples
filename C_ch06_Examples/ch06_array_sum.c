#include <stdio.h>
int main(void)
{
    double arr1[8], arr2[8];
    arr2[8] = 0;
    int i = 0;
    int j =0;

    printf("8개의 값을 입력해주세요:");
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &arr1[0], &arr1[1], &arr1[2], &arr1[3], &arr1[4], &arr1[5], &arr1[6], &arr1[7]);

    for (int i = 0; i < 8; i++)
    {
        arr2[i] = arr2[i-1] + arr1[i];
    }
    printf("배열1: ");
    for (i = 0; i < 8; i++)
    {
        printf("%lf\t", arr1[i]);
    }
    printf("\n");

    printf("배열2: ");
    for (i = 0; i < 8; i++)
    {
        printf("%lf\t", arr2[i]);
    }
    printf("\n");
    return 0;
}