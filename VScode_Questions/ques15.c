
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];

    printf("Enter a string: ");
    scanf("%999s", str);

    int len = strlen(str);

    printf("Encoded string: ");

    for (int i = 0; i < len; )
    {
        char ch = str[i];
        int count = 0;

        while (i < len && str[i] == ch)
        {
            count++;
            i++;
        }

        printf("%c%d", ch, count);
    }

    printf("\n");

    return 0;
}
