
#include <stdio.h>

int countMultiples(int n, int k)
{
    if (n < 1 || k <= 0)
        return 0;

    return n / k;
}

int main()
{
    int n, k, result;

    printf("Enter the range (n): ");
    scanf("%d", &n);

    printf("Enter the number (k): ");
    scanf("%d", &k);

    result = countMultiples(n, k);

    printf("The total number of multiples is: %d\n", result);

    return 0;
}
