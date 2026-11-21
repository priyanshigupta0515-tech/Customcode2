
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid matrix size.\n");
        return 0;
    }

    int arr[100][100];
    int symmetric = 1;

    printf("Enter matrix elements:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                symmetric = 0;
                break;
            }
        }

        if (symmetric == 0)
        {
            break;
        }
    }

    if (symmetric == 1)
    {
        printf("YES - Matrix is symmetric.\n");
    }
    else
    {
        printf("NO - Matrix is not symmetric.\n");
    }

    return 0;
}
