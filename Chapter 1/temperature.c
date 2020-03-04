#include <stdio.h>

// /* 当fahr = 0, 20, ..., 300时，分别
//    打印华氏温度与摄氏温度对照表
//    version 1   */

// int main()
// {
//     int fahr, celsius; // fahr 摄氏温度，celsius 华氏温度
//     int lower, upper, step;

//     lower = 0;
//     upper = 300;
//     step = 20;

//     fahr = lower;
//     while (fahr <= upper) {
//         celsius = 5 * (fahr-32) / 9;
//         // printf("%d\t%d\n", fahr, celsius);
//         printf("%3d%6d\n", fahr, celsius); // 右对齐数字
//         fahr = fahr + step;
//     }
// }

// /* 当fahr = 0, 20, ..., 300时，分别
//    打印华氏温度与摄氏温度对照表
//    将温度保留小数
//    version 2                */

// int main()
// {
//     float fahr, celsius; // fahr 摄氏温度，celsius 华氏温度
//     int lower, upper, step;

//     lower = 0;
//     upper = 300;
//     step = 20;

//     fahr = lower;
//     while (fahr <= upper) {
//         celsius = (5.0 / 9.0) * (fahr-32);
//         // printf("%d\t%d\n", fahr, celsius);
//         printf("%3.0f%8.2f\n", fahr, celsius); // 右对齐数字
//         fahr = fahr + step;
//     }
// }

 
#define LOWER 0     // 最低温度
#define UPPER 300   // 最高温度
#define STEP 20     // 步长

/* 打印华氏温度-摄氏温度对应表
   version 3 */

int main()
{
    int fahr;
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d %6.2f\n", fahr, (5.0/9.0)*(fahr-32));
}