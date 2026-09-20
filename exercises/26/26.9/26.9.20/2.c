#include <stdio.h>

int main()
{
    int a, b, c, d;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    double e = (a + b + c + d) / 4.00;
    // 用double来存小数值。
    //除以4.00，是因为结果有两位小数，除数必须保留相应的位数。

    printf("%.2f", e);

    return 0;
}