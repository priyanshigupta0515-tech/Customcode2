#include <stdio.h>

long long gcd(long long a, long long b)
{
    if (a < 0)
        a = -a;

    if (b < 0)
        b = -b;

    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    long long a, b, result;

    printf("Enter the first number: ");
    scanf("%lld", &a);

    printf("Enter the second number: ");
    scanf("%lld", &b);

    if (a == 0 && b == 0)
    {
        printf("GCD is not defined for 0 and 0.\n");
    }
    else
    {
        result = gcd(a, b);
        printf("The GCD is: %lld\n", result);
    }

    return 0;
}