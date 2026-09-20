#include <stdio.h>

int sum_odd(int begin, int end)
// odd是奇数的含义
{

    int sum = 0, value;

    for (value = begin; value <= end; value++)
    {

        if (value % 2 == 0)
        {
            continue;
        }

        else
        {
            sum += value;
        }
    }

    return sum;
}

int main()
{
    int begin, end, sum;

    scanf("%d%d", &begin, &end);

    sum = sum_odd(begin, end);

    printf("%d", sum);

    return 0;
}
