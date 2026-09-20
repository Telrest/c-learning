#include <stdio.h>

int main()
{
    int p, k, row, column, m, n;

    scanf("%d%d%d", &n, &m, &k);

    p = k - 1;

    if ((p / m) % 2 == 1)
    {
        column = m - p % m;

        row = p / m + 1;

        printf("%d %d", row, column);
    }

    else
    {
        column = p % m + 1;

        row = p / m + 1;

        printf("%d %d", row, column);
    }

    return 0;
}