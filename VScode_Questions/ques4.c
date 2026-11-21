#include <stdio.h>

int isPerfectSquare(long long n)
{
    if (n < 0)
        return 0;

    if (n == 0)
        return 1;

    for (long long i = 1; i <= n / i; i++)
    {
        if (i * i == n)
            return 1;
    }

    return 0;
}

int main()
{
    long long n;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if (isPerfectSquare(n))
        printf("1 (It is a perfect square)\n");
    else
        printf("0 (It is not a perfect square)\n");

    return 0;
}