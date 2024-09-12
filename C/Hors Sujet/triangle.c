#include <stdio.h>
#include <cs50.h>

bool valid_triangle(float x, float y, float z);

int main(void)
{
    int i =0;
    do
    {
        get_int("Input triangle values: ");
        i++;
    }
    while (i < 3);
    //printf("%d\n", valid_triangle(x, y, z));
}


bool valid_triangle(float x, float y, float z)
{
    if (x <= 0 || y <= 0 || z <= 0)
    {
        return false;
    }
    if ((x + y <= z) || (z + y <= x) || (x + z <= y))
    {
        return false;
    }
    return true;
}

