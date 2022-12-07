#include <stdio.h>

int main()
{
    char name[] = "Ankit is fuck boi and always stays behind honhar";
    int count = 0;

    for (count = 0; name[count] != '\0'; count++)
        ;

    printf("Length of string is - %d", count);
    printf("\n\n");

    for (int i = 0; i < count; i++)
    {
        printf("%c", name[i]);
    }

    return 0;
}
