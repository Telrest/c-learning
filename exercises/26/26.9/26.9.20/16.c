#include <stdio.h>

int half_until_one(int length)
{
    int day;

    for (day = 1; length > 1; day++)
    {
        length = length / 2;
    }

    return day;
}

int main(void)
{
    int length, day;

    scanf("%d", &length);

    day = half_until_one(length);

    printf("%d\n", day);

    return 0;
}