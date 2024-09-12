#include <cs50.h>
#include <stdio.h>

const int N = 3;                                                //déclare une constante integer 'N' avec la valeur de 3.

float average(int length, int array[]);                         //prototype de la fonction de type float, de nom average, qui prend les argument integer length et array.

int main(void)
{                                                               //fontion main void classique.

    int scores[N];                                              //déclaration d'un array en integer nommer "score" avec a valeur "N" (ou, ici, 3). On prend trois tiroir en mémoire RAM.

    for (int i=0; i<N; i++)
    {                                                           //boucle for: on déclare i à 0, tant que i est plus petit que trois, on incrémente i. Cette boucle tourneras 3x.
        scores[i]=get_int("Score: ");                           //à chaque tour de boucle, on entre une valeur dans un tirroir de i grâce a "get_int"
    }
    printf("Average: %.2f%%\n", average(N, scores));            //on va demander a printf de print: "Average: 'somme float arrondis a deux chiffre' 'retour à la ligne' 'N pour la taille de l'array' & 'scores' pour les valeurs.
}                                                               //BESOIN D'APPRONFONDIR LES CONNAISSANCES EN FONCTION!!!!!!!

float average(int length, int array[])
{                                                               //pour déclarer un array en argument de fonction pas besoin de connaître sa taille
    int sum=0;                                                  //déclaration d'un integer 'sum' et initialisation
    for (int i=0; i<length; i++)
    {                                                           //boucle for(déclaration de i avec la valeur 0, si i est plus petit que Length, incrémentation de i)
        sum += array[i];                                        //ajoute a "sum" les valeurs contenus dans "array[]" (donc la valeurs scores[0], scores[1], etc...)
    }
    return sum / (float) length;                                //retourne le resultat de "sum" diviser par "length" (caster en float)
}
