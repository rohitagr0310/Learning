#include <stdio.h>
void vowel(char *str, int *v, int *c);

void vowel(char *str, int *v, int *c)
{
    while (str != '\0')
    {
        if (str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u')
        {
            *v++;
        }
        else if (str == 'A' || str == 'E' || str == 'I' || str == 'O' || str == 'U')
        {
            *v++;
        }
        else
        {
            *c++;
        }
    }
}

int main()
{
    char str[100];
    int v = 0, c = 0;

    printf("Enter the string - ");
    fgets(str, 100, stdin);

    vowel(str, &v, &c);

    printf("The number of the vowels are %d\nthe number of the consonants are %d", v, c);

    return 0;
}