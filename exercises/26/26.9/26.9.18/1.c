#include <stdio.h>

int main()
{
    int now_value, sum, average, n;

    n = 0;

    sum=0;//这说明，对于不会从输入的数据中赋值的变量，我们都要进行初始化

    while (1)
    {
        scanf("%d", &now_value);

        if (now_value == -2)
        {
            break;
        }

        if (now_value == -1)
        {

            average = sum / n;

            printf("%d\n", average);

            n = 0;

            sum = 0;

            continue;//表示不再运行之后的代码，直接重开循环
        }

        sum = sum + now_value;

        n = n + 1;
    }

    return 0;
}