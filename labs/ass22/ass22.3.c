#include <stdio.h>
int calStringLength(char *ptr, int arraysize);

int calStringLength(char *ptr, int arraysize)
{
    int count = 0;

    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }

    return count;
}

int main()
{
    char str[100];
    int length;

    printf("Enter the string - ");
    fgets(str, 100, stdin);

    length = calStringLength(str, sizeof(str));

    printf("The length of the string is - %d\n", length);

    return 0;
}