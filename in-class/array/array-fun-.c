#include <stdio.h>

void printarray(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("address in printarray %u\n", *ptr);
        //*(ptr++);
        //(*ptr)++;
        *ptr++;
    }
}

int main()
{
    int array[] = {10, 20, 30, 40, 50};

    printf("Address in main %u\n", array);
    printf("size of array %d \n", sizeof(array) / sizeof(int));
    printarray(array);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}
