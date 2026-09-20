#include <stdio.h>

#define N 1005
#define M 10050
#define F 3

static int dp[N][M], dps[N][M], h, a, b;

static void node(const int health, const int layer)
{
    const int h1 = health - layer - b, h2 = health - layer - a;
    int l1 = layer ? layer - 1 : 0, l2 = layer ? layer - 1 + a : a - 1;
    if (h1 <= 0 || h2 <= 0)
    {
        // printf("%d %d\n", health, layer);
        dp[health][layer] = 1;
        dps[health][layer] = 1;
        return;
    }
    if (l1 < 0)
        l1 = 0;
    if (l2 < 0)
        l2 = 0;
    if (!dps[h1][l1])
        node(h1, l1);
    if (!dps[h2][l2])
        node(h2, l2);
    const int dpa = dp[h1][l1], dpb = dp[h2][l2];
    if (dpa > dpb)
    {
        dp[health][layer] = dpb + 1;
        // printf("%d %d %d %d\n", health, layer, h2, l2);
    }
    else
    {
        dp[health][layer] = dpa + 1;
        // printf("%d %d %d %d\n", health, layer, h1, l1);
    }
    dps[health][layer] = 1;
}

int main()
{
    scanf("%d %d %d", &h, &a, &b);

    for (int i = 0; i < M; i++)
        dps[0][i] = 1;
    for (int i = 1; i < h - 1; i++)
        for (int j = 0; j < F * b; j++)
            node(i, j);
    node(h, 0);

    printf("%d", dp[h][0]);

    return 0;
}
