#include <stdio.h>

int string_length(char string[])
{
    int count = 0;

    for (int i = 0; i >= 0; i++)
    {
        if (string[i] != '\0')
        {
            count++;
        }
        else
        {
            break;
        }
    }

    return count;
}

int main()
{
    char string[50];
    int count = 0;

    printf("Enter your string - ");
    scanf("%[^\n]s", string);

    count = string_length(string);

    printf("The size of the string is %d\n", count);

    return 0;
}