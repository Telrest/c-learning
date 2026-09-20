#include <stdio.h>

int main()
{
    int H, H2, D, HIT, D_max, all_min, all_value, klife, DK, D_value;
    // D 毒 HIT 打 D_max 一直毒 all_min  总次数最小值 all_value 总次数变量
    // klife（knife）打 DK 毒加打 D_value  毒次数变量

    scanf("%d%d%d", &H, &D, &HIT);

    klife = 0;

    D_value = 0;

    all_value = 1;

    H2 = H;

    all_min = 1000000000;

    DK = 1;

    for (
        D_max = 1; H2 > 0;
        D_max++) // 外面设置了变量D_value，如果在这个for循环中再int这个变量，
                 // 那么，只会在这个循环里面有D_value的变化，在for之外的程序中仍然没有D——value的值
    {
        H2 = H2 - ((D_max)*D + 1 - D_max);
    }

    if (H2 < 0)
    {
        D_max = D_max - 1;
    }

    for (D_value = 0; D_value <= D_max; D_value++)
    {

        H2 = H;

        for (klife = 0; H2 > 0; klife++)
        {
            H2 = H;

            H2 = H2 - (D_value * (D + D_value * D - D_value + 1)) / 2;

            if (D_value * D - D_value >= klife)
            {
                H2 = H2 -
                     (klife * (2 * D_value * D - 2 * D_value - klife + 1)) / 2 -
                     klife * HIT;

                DK = klife;
            }

            else
            {

                H2 = H2 - ((DK) * (D_value * D - D_value)) / 2 - klife * HIT;
            }
        }

        all_value = klife + D_value - 1;
        //为什么要减去1？原因在于，上面klife的循环结束后klife会再次加1，原来是klife（1），完成了最后一击，但之后for结束了，自动加了1，所以现在要减去
        

        if (all_value < all_min)
        {
            all_min = all_value;
        }
    }

    printf("%d", all_min);

    return 0;
}