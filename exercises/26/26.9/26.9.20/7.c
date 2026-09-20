#include <stdio.h>

int main()
{
    int value, value_time;

    long long sum;

    sum=0;

    scanf("%d", &value_time);

    for (int i = 1; i <= value_time; i++)
    {
        scanf("%d", &value);

        sum += value;
    }

    printf("%lld", sum);

    return 0;
}
