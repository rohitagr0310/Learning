#include <stdio.h>

static int common;

void second_display()
{
    common = 30;

    printf("In Second  %d sddress %u\n", common, &common);
}