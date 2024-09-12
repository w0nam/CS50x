#include <cs50.h>
#include <stdio.h>

void calculate_change(int cents);

int main(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);
    calculate_change(cents);
}

void calculate_change(int cents)
{
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    int change;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
    }
    while (cents >= 5)
    {
        nickels++;
        cents = cents - 5;
    }
    while (cents >= 1)
    {
        pennies++;
        cents = cents - 1;
    }
    change = quarters + dimes + nickels + pennies;
    printf("%i\n", change);
}
