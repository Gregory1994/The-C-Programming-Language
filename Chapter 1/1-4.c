#include <stdio.h>

/* 当fahr = 0, 20, ..., 300时，分别
   打印摄氏温度与华氏温度对照表
   fahr = (9.0/5.0) * celsius + 32
   将温度保留小数
   打印一个tittle                */

int main()
{
    float fahr, celsius; // fahr 摄氏温度，celsius 华氏温度
                         // 这里选择整型其实也一样，因为都是10的倍数
    int lower, upper, step; 

    lower = -20;
    upper = 200;
    step = 20;

    celsius = lower;
    printf("celsius to fahr\n");
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32;
        // printf("%d\t%d\n", fahr, celsius);
        printf("%3.0f%6.0f\n", celsius, fahr); // 右对齐数字
        celsius = celsius + step;
    }
}