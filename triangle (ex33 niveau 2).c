#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  int x, y, z,d;
  // demande du nombre de ligne

printf ("nombre de ligne ? ");
scanf ("%d",&d);


for(x=0;x<d;x++)
{
for(y=0;y<d;y++)
{
printf(" ");
}


for(z=0;z<=x;z++)
{
printf("* ");
}
printf("\n");

}

}


