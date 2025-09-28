#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 float PAG, SPA = 0;
 printf("Ingrese el primer pago:\t");
 scanf("%f",&PAG);
 do
 {
     SPA = SPA + PAG;
     printf("ingrese el siquiente pago -0 para terminar-:\t");
     scanf("%f",&PAG);
 }
 while (PAG);
 printf("\n El total de pagos del mes es : %.2f",SPA);

    return 0;
}
