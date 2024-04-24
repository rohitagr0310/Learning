#include <stdio.h>

void string_voval(char str[])
{

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'A')
        {
            voval[0] += 1;
        }
        else if (str[i] == 'e' || str[i] == 'E')
        {
            voval[1] += 1;
        }
        else if (str[i] == 'i' || str[i] == 'I')
        {
            voval[2] += 1;
        }
        else if (str[i] == 'o' || str[i] == 'O')
        {
            voval[3] += 1;
        }
        else if (str[i] == 'u' || str[i] == 'U')
        {
            voval[4] += 1;
        }
    }
}

int main()
{
    char str[50];

    int voval[5] = {0, 0, 0, 0, 0};

    printf("Enter your string - ");
    scanf("%[^\n]s", str);

    string_voval(str);

    printf("\nThe voval in the string are as follows - \n");
    printf("Number of 'a' is - %d\n", voval[0]);
    printf("Number of 'e' is - %d\n", voval[1]);
    printf("Number of 'i' is - %d\n", voval[2]);
    printf("Number of 'o' is - %d\n", voval[3]);
    printf("Number of 'u' is - %d\n", voval[4]);

    return 0;
}