#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int CLA, CAT, ANT, RES;
   printf("\n Ingrese la clave, categoria y antiguedad de trabaajador:");
   scanf("%d %d %d",&CLA,&CAT,&ANT);
   switch(CAT)
   {
   case 3:
    case 4: if(ANT >= 5)
    RES = 1;
    else
        RES = 0;
    break;
    case 2: if (ANT >= 7)
    RES = 1;
    else
        RES = 0;
    break;
    default: RES = 0;
    break;

   }
   if (RES)
    printf("\n El trabajador con clave %d reune las condiciones para el puesto", CLA);
   else
    printf("\n El trabajador con clave %d no reune las condiciones para el puesto", CLA);

    return 0;
}
