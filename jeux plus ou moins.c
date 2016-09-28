#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ( int argc, char** argv )
{
int nombreMystere = 0, nombreEntre = 0;
const int MAX = 100, MIN = 1;

// Génération du nombre aléatoire

srand(time(NULL));
nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

do
{
  // demande d'un nombre
  printf("Quels est votre nombre ?\n");
  scanf("%d", &nombreEntre);

  // comparaison du nombre avec le nombre mystere.

if (nombreMystere > nombreEntre)
printf("Plus grand !\n");
else if (nombreMystere < nombreEntre)
printf("plus petit !\n");
else if (nombreMystere = nombreEntre)
printf("GAGNE, Felicitation !\n");

} while (nombreMystere != nombreEntre);
system("PAUSE");
}
