#include <stdio.h>

int main()
{
    int value, number;

    number = 0;

    scanf("%d", &value);

    if (value == 0)
    {
        printf("0");

        return 0;
    }

    else if (value > 0)
    {
        number++;
    }

    while (1)
    {
        scanf("%d", &value);

        if (value == 0)
        {
            break;
        }

        else if (value > 0)
        {
            number++;
        }
    }

    printf("%d", number);

    return 0;
}