#include <stdio.h>
#include <stdlib.h>
 /*P1.9 Miguel Angel Caceres
   Estancia
   El programa, al recibir como dato la superficie de una estancia
   expresada en acres, la convierte a hertareas
   variable de tipo real: ECA*/
int main(void)
{
 float ECA;
 printf("Ingrese la exprecion de la estancia:");
 scanf("%f",&ECA);
 ECA=ECA*4047/1000;
 printf("\nExtencion de la estancia en hectareas: %5.2f",ECA);
    return 0;
}
