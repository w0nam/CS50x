#include <stdio.h>
#include <string.h>
#include <cs50.h>


int main(void){
    string s = get_string("Input: ");
    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {                                                               // boucle for(initialisation des integer: l'integer i égale à 0, puis de l'integer n égale à la taille de la string "s".
                                                                    // if i est plus petit que n, alors i++)
        printf("%c", s[i]);                                         // programme qui sert à print une string, lettre par lettre. Verison la plus efficiente en code:
    }                                                               // on n'appelle qu'un fois "strlen", mais on répète la boucle grâce a la variable int n
    printf("\n");                                                   // ceci est donc pkus efficient que de call 'strlen' a chaque tour de boucle.
}
