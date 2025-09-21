#include <stdio.h>
#include <stdlib.h>
/*P1.10 Miguel Angel Caceres
Area del triangulo
el programa al recibir los tres lados de un triangulo
calcula su area
Variables de tipo real: LA1, LA2, LA3, AUX y AREA*/
int main(void)
{
    float LA1, LA2, LA3, AUX, ARE;
            printf("ingrese los lados del triangulo");
            scanf("%f,%f,%f",&LA1, &LA2, &LA3);
            AUX =(LA1+LA2+LA3)/2;
            ARE = sqrt (AUX*(AUX-LA1)*(AUX-LA2)*(AUX-LA3));
            printf("\nEl area del triangulo es: %6.2f",ARE);
    return 0;
}
