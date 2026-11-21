
#include <stdio.h>

int main()
{
    int N, found = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N < 1)
    {
        printf("None\n");
        return 0;
    }

    for (int a = 1; a <= N; a++)
    {
        for (int b = a + 1; b <= N; b++)
        {
            long long sum = (long long)a * a + (long long)b * b;

            int low = b + 1;
            int high = N;

            while (low <= high)
            {
                int c = low + (high - low) / 2;
                long long square = (long long)c * c;

                if (square == sum)
                {
                    printf("%d %d %d\n", a, b, c);
                    found = 1;
                    break;
                }
                else if (square < sum)
                {
                    low = c + 1;
                }
                else
                {
                    high = c - 1;
                }
            }
        }
    }

    if (!found)
    {
        printf("None\n");
    }

    return 0;
}
