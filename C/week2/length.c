#include <stdio.h>
#include <cs50.h>

int length(string s);

int main(void)
{
    string name = get_string("what's your name ? ");

    printf("'%s' is equal to '%i' characters.\n", name, length(name));
}

int length(string s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}
