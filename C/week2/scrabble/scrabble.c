#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// declare a const int to assign values to "char".
const int POINT[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3 , 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int calculate_words(string words);

int main(void)
{
    // demande aux utilisateurs d'entré(e)s deux mots.
    string word1 = get_string("Input a word for player 1: ");
    string word2 = get_string("Input a word for player 2: ");
    // déclare deux int scoresX qui vont appeler la fonction "calculate_words" en prennant
    // l'argument word1 & word2:
    int scores1 = calculate_words(word1);
    int scores2 = calculate_words(word2);
    // Print le gagnant || l'égalitée:
    if (scores1 > scores2)
    {
        printf("Player 1 wins!\n");
    }
    else if (scores1 < scores2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("tie!\n");
    }
}

int calculate_words(string words)
{
    // déclares & initialise un int "scores" pour avoir les différents scores.
    int scores = 0;
    // boucle for pour calculer la taille des strings & lui donner un score grâce a la const int
    // POINTS[]:
    for (int i = 0, len = strlen(words); len > i; i++)  // for (integer "i" initialisé à "0", int "len" initialisé à "string length "word1" || "word2""; pendant que "len" > "i"; incrémente i)
    {
        if (isupper(words[i]))                          // ctype fournis une blibliothèque qui permet de différencier Uppercase & Lowercase.
        {
            scores += POINT[words[i] - 'A'];            // POINT[words[i] - 'A'] (glisse de A vers Z grâce a l'opérateur '-', s'arrête au char de la variable) augmenter la valeurs "scores" en utilisant l'integer "i" et l'incrémentation grâce a "POINT[]" (Uppercase style)
        }
        else if (islower(words[i]))
        {
            scores += POINT[words[i] - 'a'];

        }
    }
    return scores;
}
