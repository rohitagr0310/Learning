#include <stdio.h>

static int common;

void first_display()
{
    common = 20;
    printf("In First  %d address %u\n", common, &common);
}