#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{

while(1)
{
 int resultat = 0, nombre1 = 0, nombre2 = 0;

    // demande de deux nombres :

    printf("saisir un nombre : \n");
    scanf("%d", &nombre1);
    printf(" saisir deuxieme nombre : \n");
    scanf("%d", &nombre2);

    // on fait le calcul

    resultat = nombre1 + nombre2;

    // afficher texte en fonction de la réponse
if (resultat < 20)
printf("KO inferieur ou egale a 20");
else if (resultat >= 20)
printf("OK %d superieur ou egale a 20", resultat);
printf("\n\n");



}
}
