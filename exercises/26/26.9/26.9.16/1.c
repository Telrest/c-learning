#include <stdio.h>

int main()
{
    int n, a, b;

    a = 0;

    b = 1;

    scanf("%d", &n);

    while (a != n)
    {
        printf("%d ", a);

        a = a + 1;

        printf("%d ", b);

        b = b + 1;
    }

    return 0;
}
