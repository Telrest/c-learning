#include <stdio.h>

int main()
{
    int a, b, n;

    scanf("%d%d", &a, &b);

    n = a;

    if (a > b)
    {
        n = b;
    }

    while (b % n != 0 || a % n != 0)
    {
        n = n - 1;
    }

    printf("%d", a / n + b / n);

    return 0;
}
