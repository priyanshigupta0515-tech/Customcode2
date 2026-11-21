
#include <stdio.h>
#include <stdlib.h>

int digitSum(int n)
{
    int sum = 0;

    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }

    return sum;
}

int main()
{
    int n;
    int *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid size.\n");
        return 0;
    }

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
        return 1;

    printf("Enter %d positive numbers:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (digitSum(arr[i]) == digitSum(arr[j]))
            {
                count++;
            }
        }
    }

    printf("Total pairs with equal digit sums: %d\n", count);

    free(arr);
    return 0;
}
