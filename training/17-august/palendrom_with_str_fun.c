#include <stdio.h>
#include <string.h>

char *strrev(char *str)
{
    char *newstr;
    strcpy(newstr, str);

    int low = 0, high = strlen(newstr) - 1;

    while (low < high)
    {
        char temp = newstr[low];
        newstr[low] = newstr[high];
        newstr[high] = temp;

        low++;
        high--;
    }

    return newstr;
}

int main()
{
    char str1[50];
    printf("Enter the string - ");
    gets(str1);

    char *str2 = strrev(str1);
    printf("%s\n", str1);
    printf("%s\n", str2);

    if (strcmp(str1, str2) == 0)
    {
        printf("String is palemdrom\n");
    }
    else
    {
        printf("String is not palemdrom\n");
    }

    return 0;
}