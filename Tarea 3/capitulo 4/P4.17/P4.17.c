#include <stdio.h>
#include <stdlib.h>

void Mayor (float, float, float);

void main(void)
{
    int I;
    float GOL, PAC, CAR, AGOL = 0, APAC = 0, ACAR = 0;
    for (I = 1; I <= 12; I++)
    {
        printf("\n\nIngresa las lluvias del mes %d: ", I);
        printf("\nRegiones Golfo, Pacifico y Caribe: ");
        scanf("%f %f %f", &GOL, &PAC, &CAR);
        AGOL += GOL;
        APAC += PAC;
        ACAR += CAR;
    }
    printf("\n\nPromedio de lluvia Region Golfo: %6.2", (AGOL / 12));
    printf("\n\nPromedio de lluvia Region Pacifica: %6.2", (APAC / 12));
    printf("\n\nPromedio de lluvia Region Caribe: % 6.2", (ACAR / 12));
    Mayor(AGOL, APAC, ACAR);

}

void Mayor(float R1, float R2, float R3)

{
    if (R1 > R2)
      if (R1 > R3)
         printf("\nRegion con mayor promedio: Region Golfo. Promedio: %6.2", (R1 / 12));
      else
          printf("\nRegion con mayor promedio: Region Caribe. Promedio: %6.2", (R3 / 12));
      else
        if (R2 > R3)
         printf("\nRegion con mayor promedio: Region Pacifica. Promedio: %6.2", (R2 / 12));
        else
    printf("\nRegion con mayor promedio: Region Caribe. Promedio: %6.2", (R3 / 12));
}
