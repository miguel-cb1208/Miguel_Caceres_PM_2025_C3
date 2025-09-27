#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 int DIS, TIE;
 float BIL;
 printf("Ingrese la distancia entre ciudades y el tiempo de estancia");
 scanf("%d %d",&DIS,&TIE );
 if((DIS*2>500) && (TIE > 10))
    BIL = DIS * 2 * 0.19 * 0.8;
 else
    BIL = DIS *2 * 0.19;
 printf("\ncosco del billete: %7.2f", BIL);

    return 0;
}
