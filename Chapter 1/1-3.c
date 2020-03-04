#include <stdio.h>

/* 当fahr = 0, 20, ..., 300时，分别
   打印华氏温度与摄氏温度对照表
   将温度保留小数
   打印一个tittle                */

int main()
{
    float fahr, celsius; // fahr 摄氏温度，celsius 华氏温度
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("fahr to celsius\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr-32);
        // printf("%d\t%d\n", fahr, celsius);
        printf("%3.0f%8.2f\n", fahr, celsius); // 右对齐数字
        fahr = fahr + step;
    }
}