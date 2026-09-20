#include <stdio.h>

int main(void)
{
    int n, he, m, f;

    he = 0;

    f = 1;

    scanf("%d", &n);

    while (n != 0)
    {
        scanf("%d", &m);

            n = n - 1;

        f = f *-1;

            he = he - f * m;
    }
    printf("%d", he);

    return 0;
}