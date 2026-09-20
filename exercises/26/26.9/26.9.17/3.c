#include <stdio.h>

int main()
{
    int a, b, n, m, x, y;

    scanf("%d%d%d%d", &a, &b, &n, &m);

    x = (n * b - m) / (b - a);

    y = (m - a * n) / (b - a);

    printf("%d ", x);

    printf("%d", y);

    return 0;
}
