#include <stdio.h>
int main(void) 
{
    float Mbs, MB, estimated_time;

    printf("Mbs와MB를 입력해주세요:\n");
    scanf("%f %f", &Mbs, &MB);

    estimated_time = (MB * 8) / Mbs;

    printf("초당 %.2f 메가비트, %.2f 메가바이트 파일을\n"
    "%.2f초에 다운로드한다.",Mbs, MB, estimated_time);

    return 0;
}