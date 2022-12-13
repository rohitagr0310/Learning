#include <stdio.h>

void printarray(int *ptr)
{
    printf("address in printarray %u\n", *ptr);

    printf("size of array in fun %d \n", sizeof(array) / sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        array[i] = 0;
    }
}

void printarray1(int array[])
{
    printf("address in printarray1 %u\n", array);

    printf("size of array in fun1 %d \n", sizeof(array) / sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        array[i] = 1;
    }
}

int main()
{
    int array[] = {10, 20, 30, 40, 50};

    printf("Address in main %u\n", array);
    printf("size of array %d \n", sizeof(array) / sizeof(int));
    printarray(array);
    printarray1(array);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}
