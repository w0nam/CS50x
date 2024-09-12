#include <cs50.h>
#include <stdio.h>

void print_block(int space, int brick);

int main(void)
{
    int i, height;
    do
    {
        height = get_int("\nheight: ");
    }
    while (height <= 0 || height > 8);

    for (i = 0; i < height; i++)
    {
        print_block(height - i - 1, i + 1);
    }
}

void print_block(int space, int brick)
{
    int i, j, k;

    for (i = 0; i < space; i++)
    {
        printf(" ");
    }

    for (j = 0; j < brick; j++)
    {
        printf("#");
    }
    printf("  ");

    for (k = 0; k < brick; k++)
    {
        printf("#");
    }
    printf("\n");
}
