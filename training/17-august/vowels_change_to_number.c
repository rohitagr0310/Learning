#include <stdio.h>

int main()
{
    char string[40];
    printf("enter your string - ");
    scanf("%[^\n]", string);

    int count = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'a' || string[i] == 'A')
        {
            count++;
            string[i] = '1';
        }
        else if (string[i] == 'e' || string[i] == 'E')
        {
            count++;
            string[i] = '2';
        }
        else if (string[i] == 'i' || string[i] == 'I')
        {
            count++;
            string[i] = '3';
        }
        else if (string[i] == 'o' || string[i] == 'O')
        {
            count++;
            string[i] = '4';
        }
        else if (string[i] == 'u' || string[i] == 'U')
        {
            count++;
            string[i] = '5';
        }
    }

    printf("Count is %d\n", count);
    printf("%s\n", string);

    return 0;
}