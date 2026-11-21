#include <stdio.h>

long long rectangleArea(long long length, long long width)
{
    return length * width;
}

int main()
{
    long long length, width, area;

    printf("Enter the length: ");
    scanf("%lld", &length);

    printf("Enter the width: ");
    scanf("%lld", &width);

    area = rectangleArea(length, width);

    printf("The area of rectangle is: %lld\n", area);

    return 0;
}