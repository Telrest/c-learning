#include <stdio.h>

int main(void)
{
    int n, z, d, a, t;

    scanf("%d%d%d", &n, &z, &d);

    a = z - n * d + d;

    printf("%d ", a);

    t = 1;

    while (t < n)
    {
        printf("%d ", a + t * d);

        t = t + 1;
    }

    return 0;
}
