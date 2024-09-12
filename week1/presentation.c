#include <stdio.h>
#include <cs50.h>

int main()
{
    string _answer = get_string("What's your name ? \n");
    printf("hello, %s !\n", _answer);

    return 0;
}
