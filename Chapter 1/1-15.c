#include <stdio.h>

#define LOWER 0     // 最低温度
#define UPPER 300   // 最高温度
#define STEP 20     // 步长

float trans_temp(float fahr);

/* 打印华氏温度-摄氏温度对应表
   version 3 */

int main()
{
    int fahr;
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d %6.2f\n", fahr, trans_temp(fahr));
    getchar();
    return 0;
}

float trans_temp(float fahr){
    return (5.0/9.0)*(fahr-32);
}