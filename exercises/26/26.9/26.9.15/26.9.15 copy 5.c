#include <stdio.h>

int main(void)
{
    int n, m, z, b;

    scanf("%d", &n);

    m = 0;

    z=0;

    while (n != 0)
    {
        scanf("%d", &b);

        n = n - 1;

        z = z + b;

            if (b > m)
        {
            m = b;
        }
    }

    z = z - m;

    if (z > m)
    {
        printf("YES");
    }

    if(z<=m)
    {
        printf("NO");
    }
    return 0;
}