#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])

{
while (1)
{


int Menu;

printf("=== Menu ===\n\n");
printf("1. Royal Cheese\n");
printf("2. Mc Deluxe\n");
printf("3. Mc Bacon\n");
printf("4. Big Mac\n");
printf("\nVotre choix ? ");
scanf("%d", &Menu);
printf("\n");

switch (Menu)
{
case 1:
    printf("Vous avez choisi le Royal Cheese.");
    break;
case 2:
    printf("Vous avez choisi le Mc Deluxe.");
    break;
case 3:
    printf("Vous avez choisi le Mc Bacon.)");
    break;
case 4:
    printf("Vous avez choisi le Big Mac.");
    break;
default:
    printf("Vous n'avez pas selectionner un menu correct!");
    break;
}
printf("\n\n");

}
}

