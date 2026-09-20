#include <stdio.h>

int main()
{
    int h, a, b;
    if (scanf("%d %d %d", &h, &a, &b) != 3)
        return 0;

    int m = 1000000000; // 记录最小回合数

    // 枚举连续施毒的次数 k
    for (int k = 0; k <= h; k++)
    {
        int t = h; // 敌人当前血量
        int p = 0; // 当前毒层数
        int r = 0; // 已经过的回合数
        int d = 0; // 标记是否被毒死 (0 没死，1 死了)

        // 第一阶段：连续 k 回合施毒
        for (int i = 0; i < k; i++)
        {
            p = p + a; // 毒层增加
            r++;       // 回合数 +1
            t = t - p; // 敌人回合结算毒伤

            if (t <= 0)
            { // 被毒死
                d = 1;
                break;
            }
            p--; // 毒层递减
        }

        if (d == 1)
        {
            if (r < m)
                m = r;
            continue; // 这轮 k 已经毒死了，直接进入下一个 k
        }

        // 第二阶段：一直普攻直到敌人死亡
        while (t > 0)
        {
            // 1. 我方回合：普攻
            t = t - b;
            r++;
            if (t <= 0)
                break; // 普攻直接打死

            // 2. 敌方回合：结算毒伤
            t = t - p;
            if (t <= 0)
                break; // 被毒死

            p--; // 毒层递减
        }

        if (r < m)
            m = r; // 更新最小回合数
    }

    printf("%d\n", m);
    return 0;
}