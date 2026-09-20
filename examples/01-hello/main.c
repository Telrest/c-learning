#include <stdio.h>

double half(int number) { return number / 2.0; }

int main(void)
{
    int number;

    printf("请输入一个整数：");

    if (scanf("%d", &number) != 1)
    {
        printf("输入错误，请输入一个整数。\n");

        return 1;
    }

    double result = half(number);

    printf("对半分:%.2f\n", result);

    return 0;
}