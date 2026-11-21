
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, target;
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

    printf("Enter the target sum: ");
    scanf("%d", &target);

    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((long long)arr[i] + arr[j] == target)
            {
                count++;
            }
        }
    }

    printf("Total number of pairs: %d\n", count);

    free(arr);
    return 0;
}
