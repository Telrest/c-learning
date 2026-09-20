// h血，a直伤，b毒，i求出全用毒的上限次数，n毒层，x用于求出全用毒的上限次数而设置的初始血量，min最少，sum每次总轮数，t求累计毒伤，d存h

#include <stdio.h>

int main()
{
    int h, a, b, i, n, m, x, min, sum, t, d;
    scanf("%d%d%d", &h, &b, &a);
    x = h;
    d = h;
    for (i = 1; x > 0; i++)
    {
        x = x - i * b + i - 1;
    }
    if (h % a == 0)
    {
        min = h / a;
    }
    else
    {
        min = h / a + 1;
    }
    for (n = 1; n <= i; n++)
    {
        h = d;
        for (t = 1; t <= n; t++)
        {
            h = h - t * b + t - 1;
        }
        for (m = 0; h > 0; m++)
        {
            if (n * b - m - n >= 0)
            {
                h = h - a - n * b + m + n;
            }
            else
            {
                h = h - a;
            }
        }
        sum = n + m;
        if (sum < min)
        {
            min = sum;
        }
    }
    printf("%d", min);
    return 0;
}
