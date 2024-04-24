#include <stdio.h>

int main()
{
    // first methord to declare string
    char arr1[] = {'R', 'O', 'H', 'I', 'T', '\0'};

    printf("\nString Decleration in first form - ");
    for (int i = 0; arr1[i] != '\0'; i++)
    {
        printf("%c", arr1[i]);
    }
    printf("\n");

    // second methord to declare string
    char arr2[] = "Rohit";
    puts(arr2);

    char arr3[10] = "HackSlash";
    puts(arr3);
    printf("%c\n", arr3[6]);

    return 0;
}