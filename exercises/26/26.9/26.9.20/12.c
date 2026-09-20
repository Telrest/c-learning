#include <stdio.h>

int max_of_two(int a, int b)
{
    int max;

    max = a;

    if (a < b)
    {
        max = b;
    }

    return max;
}

int main()
{
    int a, b, max;

    scanf("%d%d", &a, &b);

    max = max_of_two(a, b);

    printf("%d", max);

    return 0;
}