#include <stdio.h>
#include <string.h>

void str_upper(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
}

int main()
{
    char str[100];

    printf("\nEnter a string in (upper case) -  ");
    fgets(str, 100, stdin);

    str_upper(str);

    printf("\nString in Lower Case = %s", str);

    return 0;
}