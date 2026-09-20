#include <stdio.h>

int main()
{
    int H,H2, D, HIT, k, n;

    scanf("%d%d%d", &H, &D, &HIT);

    k = 1;

    if (H % HIT == 0)
    {
        n = H / HIT;
    }

    else
    {
        n = H / HIT+1;
    }

    H2=H;

    while (H > 0)
    {
        H = H - (k * D + 1 - k);

        k = k + 1;
    }

    if (H == 0)
    {
        k = k;
    }

    else
    {

        k = k - 1;

    }


    
    

    if (n + 1 <= k)
    {
        printf("%d", n + 1);
    }

    else if (HIT > k * D - k + 2)
    {
        printf("%d", k - 1);
    }

    else
    {
        printf("%d", k);
    }

    

    return 0;
}