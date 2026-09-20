#include <stdio.h>

int main()
{
    long long a, b, c;

    scanf("%lld%lld%lld", &a, &b, &c);

    long long sum = 1ll * a * b + c * 1ll;

    printf("%lld", sum);

    return 0;
}