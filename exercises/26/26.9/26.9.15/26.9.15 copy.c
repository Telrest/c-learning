#include <stdio.h>

int main(void)
{
    int n, i;

    scanf("%d", &n);

    i = 1;

    printf("<");

    while (i <= n)
    {
        printf("=");

        i = i + 1;
    }

    printf(">");

    return 0;
}