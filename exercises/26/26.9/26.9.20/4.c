#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if (c <= b && c >= a)
    {
        printf("IN");
    }

    else
    {
        printf("OUT");
    }

    return 0;
}