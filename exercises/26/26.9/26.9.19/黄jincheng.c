#include <stdio.h>
int main()
{
    int h, a, b, n = 1, sx1 = 0, sx2, c, t, cy;
    scanf("%d%d%d", &h, &a, &b);
    if (h % b != 0)
        t = h / b + 1;
    else
        t = h / b;

    while (sx1 < h)
    {
        sx1 = a * n * (n + 1) / 2.0 - n * (n - 1) / 2.0;
        int i = 1;
        while (i <= n * (a - 1))
        {
            sx2 = (n * a + b - n) * i - i * (i - 1) / 2.0;
            if (sx2 + sx1 > h)
            {
                c = n + i;
                if (t > c)
                    t = c;
            }
            else
            {
                cy = h - sx1 - sx2;
                if (cy % b != 0)
                {
                    c = cy / b + 1 + n + i;
                    if (t > c)
                        t = c;
                }

                else
                {
                    c = cy / b + n + i;
                    if (t > c)
                        t = c;
                }
            }
            i++;
        }
        n++;
    }
    if (t > n - 1)
        t = n - 1;
    printf("%d", t);
    return 0;
}