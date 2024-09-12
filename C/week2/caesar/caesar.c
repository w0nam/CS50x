#include <cs50.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool is_digit(string argument);
char rotate(char c, int n);

int main(int argc, string argv[])
{
    // Check if the number of arguments is correct & if argv[1] is only digit.
    if ((argc != 2) || !is_digit(argv[1]))
    {
        printf("Usage: ./caesar KEY.\n");
        return 1;
    }
    // Convert a string to integer to get the key.
    int key = atoi(argv[1]);
    // String to ask the user for the plain text:
    string plain_text = get_string("Plain text: ");
    const int N = strlen(plain_text);
    // Preparation of a variable of type char to store the copy of the string characters.
    // (array of length N = plain_text).
    char letters[N + 1];
    // For loop that itterate each characters of my string "plain_text" & copy it in char
    // letters[i]. if conditions to just copy anything that is not a characters, so punctuation and
    // spaces & stuff don't go to my "rotate" function.
    for (int i = 0, length = strlen(plain_text); i < length; i++)
    {
        if (!isalpha(plain_text[i])) // if not alphabetical char:
        {
            letters[i] = plain_text[i]; // copy directly without using funtion.
        }
        else // else
        {
            letters[i] = rotate(plain_text[i], key); // Letter[i] = rotated character, char by char.
        }
    }
    // Adds a NULL terminator at the end of my newly copied array.
    letters[N] = '\0';
    // Print out the result of my characters rotation shenanigans.
    printf("ciphertext: %s\n", letters);
    return 0;
}
// Check if a valid key is inputted at CLI.
bool is_digit(string cli_arg)
{
    // For loop that itterate through each character inputted in CLI.
    for (int i = 0, length = strlen(cli_arg); i < length; i++)
    {
        // If NOT digit, return false.
        if (!isdigit(cli_arg[i]))
        {
            return false;
        }
    }
    // Return true for only digit in CLI arguments.
    return true;
}
// Function to "rotate" characters.
char rotate(char c, int n)
{
    // If uppercase:
    if (c >= 'A' && c <= 'Z')
    {
        // index = "ASCII value of inputted char" - "ASCII value of A"
        int index = c - 'A';
        // rotated_index = (index + inputed key (n)) % 26 (in order to wrap around the alphabet)
        int rotated_index = (index + n) % 26;
        // rotated_char = rotated_index (ASCII value) + 'A' (converts it to Char).
        char rotated_char = rotated_index + 'A';
        // return the rotated char !
        return rotated_char;
    }
    // Same as upper if statement but for lowercase characters.
    if (c >= 'a' && c <= 'z')
    {
        int index = c - 'a';
        int rotated_index = (index + n) % 26;
        char rotated_char = rotated_index + 'a';
        return rotated_char;
    }
    // return 1 for error is issue with function.
    return 1;
}
