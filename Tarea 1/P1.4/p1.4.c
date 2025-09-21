#include <stdio.h>
#include <stdlib.h>
//P1.4 Miguel Angel Caceres

/*Este programa, al recibir como datos la base
y la altura de un triangulo calcula la superficie.

BAS, ALT, SUP:VARIABLE DE TIPO REAL. */

int main(void)
{
    float BAS, ALT, SUP;
    printf("ingrese la base y la altura del triangulo: ");
    scanf("%f %f",&BAS,&ALT);
    SUP = BAS*ALT /2;
    printf("la superficie del triangulo es:%5.2f", SUP);
    return 0;
}
