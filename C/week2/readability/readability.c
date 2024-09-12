#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // Ask user for a text.
    string text = get_string("Input a text please: ");
    // Calculate the number of letters, words & sentences.
    float letters = count_letters(text);
    float words = count_words(text);
    float sentences = count_sentences(text);
    // Coleman-Liau index formula.
    const float INDEX = 0.0588 * ((letters / words) * 100) - 0.296 * ((sentences / words) * 100) - 15.8;
    // If... else if...else condition to print out the grade.
    if (INDEX <= 0)
    {
        printf("Before Grade 1\n");
    }
    else if (INDEX >= 0 && INDEX <= 10)
    {
        // here i cast INDEX as an int & i use round() in order to round it up or trunc it.
        printf("Grade %i\n", (int) round(INDEX));
    }
    else
    {
        printf("Grade 16+\n");
    }
}

int count_letters(string text)
{
    // Declare a 'float' named 'letters' initialized with '0'
    float letters = 0;
    // For loop to check character by character if them said characters are alphanumerical.
    for (int i = 0, length = strlen(text); length > i; i++)
    {
        if (isalnum(text[i]))
        {
            letters++;
        }
    }
    // Return the float value of incremented 'letters'
    return letters;
}

int count_words(string text)
{
    // Declare a 'float' named 'words' initialized with value '0'
    float words = 0;
    // For loop to check the number of words by sentences (check the number of spaces + 1).
    for (int j = 0, length = strlen(text); length > j; j++)
    {
        // Technique found with the help of ducky to "remove" the apostophe from the punctuation
        // list (if surrouned by characters).
        if (isspace(text[j]) && !(text[j] == '\'' && isalnum(text[j - 1]) && isalnum(text[j + 1])))
        {
            words++;
        }
    }
    // Return float words (number of spaces) + 1.
    return words + 1;
}

// this function doesn't work on acronyms (U.S.A, N.S.A, etc...). Might fix it later.
int count_sentences(string text)
{
    // Declare a 'float' named 'words' initialized with value '0'
    float sentences = 0;
    // For loop to check the number of sentences (check the number of '.', '!', '?').
    for (int k = 0, length = strlen(text); length > k; k++)
    {
        if (text[k] == '?' || text[k] == '!' || text[k] == '.')
        {
            sentences++;
        }
    }
    // return the float value for sentences.
    return sentences;
}
