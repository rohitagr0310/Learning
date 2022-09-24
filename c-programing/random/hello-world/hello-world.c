#include <stdio.h>

int main()
{
    char h;
    printf("\n Hello to your new world,Human \n\n I am Rohit, God of this World \n\n ");
    printf("From now on, Do you wish to live in this new world-");

    scanf("%c", &h);

    if (h == 'y')
    {
        printf("\n ok \n\n");
    }

    if (h == 'n')
    {
        printf("\n then, die \n\n");
    }

    return 0;
}
