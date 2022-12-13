#include <stdio.h>

int main()
{
    int *iptr, i;
    char *cptr, c;
    float *fptr, f;

    printf("address - %d , size of the pointer - %ld and size of data type - %d\n", iptr, sizeof(iptr), sizeof(i));
    printf("address - %d , size of the pointer - %ld and size of data type - %d\n", cptr, sizeof(cptr), sizeof(c));
    printf("address - %d , size of the pointer - %ld and size of data type - %d\n", fptr, sizeof(fptr), sizeof(f));

    return 0;
}