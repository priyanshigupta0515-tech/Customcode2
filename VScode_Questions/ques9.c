
#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int n, m, count = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of m: ");
    scanf("%d", &m);

    if (n <= 0 || m < 1)
    {
        printf("Invalid input.\n");
        return 0;
    }

    for (int i = 1; i <= m; i++)
    {
        if (gcd(n, i) == 1)
        {
            count++;
        }
    }

    printf("Count of relatively prime numbers: %d\n", count);

    return 0;
}
