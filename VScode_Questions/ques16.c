
#include <stdio.h>

int main()
{
    int r, c;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    if (r <= 0 || c <= 0 || r > 100 || c > 100)
    {
        printf("Invalid matrix size.\n");
        return 0;
    }

    int arr[100][100];

    printf("Enter matrix elements:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Row sums: ");

    for (int i = 0; i < r; i++)
    {
        long long sum = 0;

        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }

        printf("%lld ", sum);
    }

    printf("\nColumn sums: ");

    for (int j = 0; j < c; j++)
    {
        long long sum = 0;

        for (int i = 0; i < r; i++)
        {
            sum += arr[i][j];
        }

        printf("%lld ", sum);
    }

    printf("\n");

    return 0;
}
