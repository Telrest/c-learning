#include <stdio.h>

int main()
{
    int a, b, c, d;



    while (1)
    {
        scanf("%d", &a);

        if(a==-1)
        {
            break;
        
        }

        scanf("%d%d",&b,&c);

        d = a * c * (1 + c) / 2 - b;

        if (d >= 0)
        {
            printf("%d\n", d);
        }

        else
        {
            printf("0\n");
        }
    }

    return 0;
}
