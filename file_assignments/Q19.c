#include <stdio.h>
#include <string.h>

void str_upper(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
}

int main()
{
    char str[100];

    printf("\nEnter a string in (lower case) -  ");
    fgets(str, 100, stdin);

    str_upper(str);

    printf("\nString in Upper Case = %s", str);

    return 0;
}