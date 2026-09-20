#include <stdio.h>

int main()
{
    int items, capacity;

    scanf("%d%d", &items, &capacity);

    if (items == 0)
    {
        printf("0");

        return 0;
    }

    else if (items % capacity == 0)
    {
        printf("%d", items / capacity);
    }

    else
    {
        printf("%d", items / capacity + 1);
    }
    return 0;
}
