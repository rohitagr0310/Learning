#include <stdio.h>

void string_count(char str[])
{
    int alp = 0, digit = 0, splch = 0;

    for (int i = 0; i < ; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alp++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else
        {
            splch++;
        }
    }

    printf("Number of Alphabets in the string is : %d\n", alp);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n", splch);
}

int main()
{
    char str[100];

    printf("\nEnter a string -  ");
    fgets(str, 100, stdin);

    string_count(str);

    return 0;
}