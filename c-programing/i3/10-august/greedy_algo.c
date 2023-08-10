#include <stdio.h>

int note_500(int num)
{
    return num / 500;
}

int note_200(int num)
{
    return num / 200;
}

int note_100(int num)
{
    return num / 100;
}

int note_50(int num)
{
    return num / 50;
}

int note_20(int num)
{
    return num / 500;
}

int note_10(int num)
{
    return num / 500;
}

int main()
{
    int input;
    scanf("%d", &input);

    int count = 0;

    while (input > 0)
    {
        count = count + note_500(input);
        input = input / 500;

        count = count + note_200(input);
        input = input / 200;

        count = count + note_100(input);
        input = input / 100;

        count = count + note_50(input);
        input = input / 50;

        count = count + note_20(input);
        input = input / 20;

        count = count + note_10(input);
        input = input / 10;
    }

    printf("The number of notes = %d", count);
    return 0;
}