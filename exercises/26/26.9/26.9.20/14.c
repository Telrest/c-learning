#include <stdio.h>

int sum_odd(int begin, int end)
// odd奇数的含义
{

    int sum;

    if (begin % 2 == 1 && end % 2 == 1)
    {
        sum = (((end - begin) / 2 + 1) * ((end + begin))) / 2;
    }

    else if (begin % 2 == 0 && end % 2 == 0)
    {
        sum = (((end - begin) / 2) * ((end + begin))) / 2;
    }

    else if (end % 2 == 1 && begin % 2 == 0)
    {
        sum = (((end - begin) + 1) / 2) * ((end + begin) + 1) / 2;
    }

    else if (end % 2 == 0 && begin % 2 == 1)
    {
        sum = (((end - begin) + 1) / 2) * ((end + begin) - 1) / 2;
    }

    return sum;
}

int main()
{
    int begin, end, sum;

    scanf("%d%d", &begin, &end);

    sum = sum_odd(begin, end);

    printf("%d", sum);
}
