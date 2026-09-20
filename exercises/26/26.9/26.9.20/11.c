#include <stdio.h>

int boxes_number(int items, int capacity)
{

    if (items % capacity == 0)
    {
        return items / capacity;
    }

    else
    {
        return items / capacity + 1;
    }
}

int main(void)
{
    int items, capacity;

    scanf("%d%d", &items, &capacity);

    int answer = boxes_number(items, capacity);

    printf("%d\n", answer);

    return 0;
}
