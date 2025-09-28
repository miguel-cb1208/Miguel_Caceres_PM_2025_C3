#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float PAG, SPA;
    SPA = 0;
    printf("Ingrese el primer pago:\t");
    scanf("%f",&PAG);
    while (PAG)
    {
        SPA = SPA + PAG;
        printf("ingrese el siquiente pago:\t");
        scanf("%f",& PAG);

    }
    printf("\nEl total de pagos del mes es: %.2f",SPA);
    return 0;
}
