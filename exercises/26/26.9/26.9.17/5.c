#include <stdio.h>

int main()
{
    int a, b, c, n, t;

    t = 0;

    scanf("%d", &n);

    b = 0;

    c = 0;

    while (t != n)
    {
        scanf("%d", &a);

        t = t + 1;

        if (a > b)
        {
            c = b;

            b = a;
        }

        else if (a > c)
        {
            c = a;
        }
    }

    printf("%d %d", b, c);

    return 0;
}