#include <stdio.h>

int main()
{
    char string[100];
    printf("enter your string - ");
    scanf("%[^\n]", string);

    int count = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i + 1] == ' ')
        {
            continue;
        }
        else if (string[i] != ' ' && string[i - 1] == ' ')
        {
            count++;
        }
    }

    printf("The number of spaces = %d\n\n", count);

    return 0;
}