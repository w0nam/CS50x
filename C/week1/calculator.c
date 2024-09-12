//abstracting a value with the '+' operator.
#include <stdio.h>
#include <cs50.h>

int add(int a, int b);

int main()
{
    int x = get_int("input a value x: ");
    int y = get_int("input a value y: ");
    //int z = add(x, y);                    Could have used this, i will use the add() function directly in "printf".
    //on peu utiliser un type entre parenthèse pour cast un type sur un autre (exemple: float sur un int déclarer)
    printf("X + Y = %i\n", add(x, y));      // use the add() function directly in the printf function.
    return 0;
}

//int add(void)
//{
//    return x + y;                         //return error because x & y aren't in scope.
//}
int add(int a, int b)                       //return no error because we declare two new integer in order to make the additions.
{
    return a + b;
}
