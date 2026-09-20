#include <stdio.h>

int main(void)
{
    int a, b, n;

    scanf("%d%d", &a, &b);

    n = a;

    if (a < b)
    {
        n = b;
    }

    if (a == 0)
    {
        printf("0");

        return 0;
    }
    if (b == 0)
    {
        printf("0");

        return 0;
    }

    while (n % a != 0 || n % b != 0)
    {
        n = n + 1;
    }

    printf("%d", n);

    return 0;
}