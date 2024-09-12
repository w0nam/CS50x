#include <cs50.h>
#include <stdio.h>

int main()
{
    int x = get_int("Input a value for X: ");
    int y = get_int("Inpue a value for Y: ");

    if(x < y) {
        printf("X is less than Y.\n");
    }
    else if(x > y) {
        printf("X is greater than Y.\n");
    }
    else {
        printf("X is equal to Y.\n");
    }

    return 0;
}
