#include <stdio.h>

int main()
{
    int score_1, score_2, score_3, sum;

    scanf("%d%d%d", &score_1, &score_2, &score_3);

    sum = score_1 + score_2 + score_3;

    double average = (double)sum / 3;

    printf("%d\n", sum);

    printf("%.2f\n", average);

    int average;

    printf("%d\n", average);

    return 0;
}