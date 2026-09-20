#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);

    if (a == 0)
    {
        printf("\n");
    }

    else
    {
        for (int i = 1; i <= a; i++)
        //这个地方i是从1开始的，因为，一进入这个程序就会执行一次，之后再加一
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}