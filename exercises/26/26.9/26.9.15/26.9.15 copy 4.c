#include <stdio.h>

int main(void)
{
    int n, s, m,t;

    scanf("%d%d", &n, &s);

    m=s;

    while (n != 0)
    {
        scanf("%d", &t);

        n = n - 1;

        s=s+t;

        if (m<s)
        {
            m = s;
        }
    }

    printf("%d", m);

    return 0;
}