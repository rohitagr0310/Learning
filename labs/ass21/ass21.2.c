#include <stdio.h>

int string_compare(char str1[], char str2[])
{
    int flag = 0, i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
        i++;
    }

    return flag;
}

int main()
{
    char str1[50], str2[50];
    int flag = 0;

    printf("Enter your string 1 - ");
    scanf("%s", str1);

    printf("Enter your string 2 - ");
    scanf("%s", str2);

    flag = string_compare(str1, str2);

    if (flag == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }

    return 0;
}