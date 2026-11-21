
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid array size.\n");
        return 0;
    }

    long long arr[n];

    printf("Enter %d array elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    int current = 1;
    int maximum = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            current++;
        }
        else
        {
            current = 1;
        }

        if (current > maximum)
        {
            maximum = current;
        }
    }

    printf("Longest increasing contiguous run: %d\n", maximum);

    return 0;
}
