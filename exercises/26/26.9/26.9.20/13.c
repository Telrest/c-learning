#include <stdio.h>

int main()
{
    int begin, end;

    scanf("%d%d", &begin, &end);

    if (begin % 2 == 1 && end % 2 == 1)
    {
        printf("%d", (((end - begin) / 2 + 1) * ((end + begin))) / 2);
    }

    else if (begin % 2 == 0 && end % 2 == 0)
    {
        printf("%d", (((end - begin) / 2) * ((end + begin))) / 2);
    }

    else if (end % 2 == 1 && begin % 2 == 0)
    {
        printf("%d", (((end - begin) + 1 )/ 2) * ((end + begin) + 1) / 2);
    }

    else if (end % 2 == 0 && begin % 2 == 1)
    {
        printf("%d", (((end - begin) + 1) / 2) * ((end + begin) - 1)/ 2);
    }

    return 0;
}
