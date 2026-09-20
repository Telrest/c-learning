#include <stdio.h>

int main()
{
    int n;

    scanf("%d", n);

    if (n < 60)
    {
        printf("fail");
    }

    else if (n < 0)
    {
        printf("error");
    }

    else
    {
        printf("ok");
    }

    return 0;
}