#include <stdio.h>

int main()
{
    int time, n, b, c, d, e;

    scanf("%d", &time);

    for (int t = 0; t != time; t++) // for 里面要用分号
    {
        scanf("%d", &n);

        b = (n % 10007) * ((1 + n) % 10007);

        c = b % 10007;

        d = (c * c) % 10007;

        e = (d * c) % 10007;

        printf("%d\n", e);
    }


    return 0;
}



