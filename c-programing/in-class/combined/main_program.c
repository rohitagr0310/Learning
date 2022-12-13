#include <stdio.h>

void first_display();
void second_display();

static int common;

int main()
{
    common = 10;
    printf("In main  %d sddress %u\n", common, &common);
    first_display();
    second_display();

    return 0;
}
