#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int nombre1, nombre2;
    double resultat;

    // entrée le signe ainsi que les nombres

    printf(" entrée votre signe suivis des deux nombres a calculer : ");
    scanf(" %d %d", &nombre1, &nombre2);

    // calcul

    if (+)
       resultat = nombre1 + nombre2;
       printf("votre resultat est %lf ", &resultat);

    else if (-)
        resultat = nombre1 - nombre2;
       printf("votre resultat est %lf ", &resultat);

    else if (*)
        resultat = nombre1 * nombre2;
       printf("votre resultat est %lf ", &resultat);

    else if (/)
        resultat = nombre1 / nombre2;
       printf("votre resultat est %lf ", &resultat);



}
