#include <stdio.h>
#include <string.h>

int main(void)
{
    char TaxClassification[10];
    char SubOption[10]; 
    double BeforeEarnings;
    double AfterEarnings;

    while (1) 
    {
        printf("과세 구분과 소득을 입력하세요\n");

        fgets(TaxClassification, sizeof(TaxClassification), stdin);
        TaxClassification[strcspn(TaxClassification, "\n")] = 0;

        // 소득 입력
        char temp[100];
        fgets(temp, sizeof(temp), stdin);
        sscanf(temp, "%lf", &BeforeEarnings);

        if (strcmp(TaxClassification, "독신") == 0)
        {
            if (BeforeEarnings <= 17850.0)
                AfterEarnings = BeforeEarnings * 0.15;
            else
                AfterEarnings = BeforeEarnings * 0.15 + 0.28 * (BeforeEarnings - 17850.0);
        }
        else if (strcmp(TaxClassification, "가장") == 0)
        {
            if (BeforeEarnings <= 23900.0)
                AfterEarnings = BeforeEarnings * 0.15;
            else
                AfterEarnings = BeforeEarnings * 0.15 + 0.28 * (BeforeEarnings - 23900.0);
        }
        else if (strcmp(TaxClassification, "맞벌이") == 0)
        {
            printf("합산 또는 별산 선택: ");
            fgets(SubOption, sizeof(SubOption), stdin);
            SubOption[strcspn(SubOption, "\n")] = 0;

            if (strcmp(SubOption, "합산") == 0)
            {
                if (BeforeEarnings <= 29750.0)
                    AfterEarnings = BeforeEarnings * 0.15;
                else
                    AfterEarnings = BeforeEarnings * 0.15 + 0.28 * (BeforeEarnings - 29750.0);
            }
            else if (strcmp(SubOption, "별산") == 0)
            {
                if (BeforeEarnings <= 14875.0)
                    AfterEarnings = BeforeEarnings * 0.15;
                else
                    AfterEarnings = BeforeEarnings * 0.15 + 0.28 * (BeforeEarnings - 14875.0);
            }
            
        }
        printf("세금 계산 후 소득: %.2lf\n\n", AfterEarnings);
    }

    return 0;
}