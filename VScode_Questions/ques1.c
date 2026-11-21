
#include <stdio.h>

int maxOfThree(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main()
{
    int a, b, c, maximum;

    printf("Enter the 1st number: ");
    scanf("%d", &a);

    printf("Enter the 2nd number: ");
    scanf("%d", &b);

    printf("Enter the 3rd number: ");
    scanf("%d", &c);

    maximum = maxOfThree(a, b, c);

    printf("The maximum number is: %d\n", maximum);

    return 0;
}
