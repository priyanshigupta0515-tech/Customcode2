
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n;
    int *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("At least 2 elements are required.\n");
        return 0;
    }

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
        return 1;

    printf("Enter %d distinct integers:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    long long minDiff = LLONG_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            long long diff = (long long)arr[i] - arr[j];

            if (diff < 0)
            {
                diff = -diff;
            }

            if (diff < minDiff)
            {
                minDiff = diff;
            }
        }
    }

    printf("Minimum difference: %lld\n", minDiff);

    free(arr);
    return 0;
}
