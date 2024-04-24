#include <stdio.h>

int main()
{
    char str[100];
    int count = 1;

    printf("Enter the string - ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }

    printf("The Numbers of the words in this string is %d", count);

    return 0;
}