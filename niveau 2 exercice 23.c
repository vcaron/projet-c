#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
 int resistance=0;
float R1, R2, R3 ,Rser, Rder;

 // choix dérivation ou en série :
printf("les resistance sont branche : \n1.en serie\n2.en derivation\n") ;
scanf("%d",&resistance) ;

switch (resistance)
{
case 1:
    printf(" quel est la valeur en ohm de votre premiere resistance R1 ? ");
    scanf("%f",&R1);
    printf(" quel est la valeur en ohm de votre deuxieme resistance R2 ? ");
    scanf("%f",&R2);
    printf(" quel est la valeur en ohm de votre troisieme resistance R3 ? ");
    scanf("%f",&R3);
// calcul R1+R2+R3

Rser = (R1+R2+R3);
    printf("votre resistance Rser est egale a %f ",Rser);

break;

case 2:
    printf(" quel est la valeur en ohm de votre premiere resistance R1 ? ");
    scanf("%f",&R1);
    printf(" quel est la valeur en ohm de votre deuxieme resistance R2 ? ");
    scanf("%f",&R2);
    printf(" quel est la valeur en ohm de votre troisieme resistance R3 ? ");
    scanf("%f",&R3);
// calcul (R1*R2*R3)/((R1*R2)+(R1*R3)+(R2*R3))

Rder = (R1*R2*R3)/(R1*R2+R1*R3+R2*R3);
 printf("votre resistance Rder est egale a %f ",Rder);
break;

}
}



