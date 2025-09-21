#include <stdio.h>
#include <math.h>
/*P1.8 Miguel Angel Caceres
Volumen del area del cilindro
El programa calcula la area y el volumen.
variables de tipo real: RAD, VOL, ARE
M_PI es un aconstante definida en math.h que contiene el valor de PI*/

int main(void)
{
 float RAD, ALT, VOL, ARE;
 printf("ingrese el radio y la altura del colindro:");
 scanf("%f %f",&RAD,&ALT);
 VOL = M_PI*pow (RAD,2)*ALT;
 ARE=2*M_PI*RAD*ALT;
 printf("\n El volumen es: %6.2f \t El area es: %6.2f",VOL,ARE);
    return 0;
}
